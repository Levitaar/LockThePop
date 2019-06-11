using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LockGameManager : MonoBehaviour
{
    [SerializeField]
    GameObject playerKey;
    [SerializeField]
    GameObject beat;

    [SerializeField]
    int lockLevel = 1;
    [SerializeField]
    float gameSpeed = 0.05f;
    [SerializeField]
    int beatsLeft = 1;
    [SerializeField]
    bool clockwiseRot = true;

    [SerializeField]
    int minBeatPositionChange = 25;
    [SerializeField]
    int maxBeatPositionChange = 100;

    [SerializeField]
    float beatRotation;
    [SerializeField]
    float playerRotation;

    [SerializeField]
    float marginOfError = 10;

    int playerBeatID;

    [SerializeField]
    bool activeLevel;

    [SerializeField]
    bool levelReady;

    void Awake()
    {
        SetInitialBeatPosition();

        RestartLevel();

        activeLevel = false;

    }
    
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            if(activeLevel)
            {
                KeyTap();

            }
            else
            {
                if(playerRotation < -0.5f || playerRotation > 0.5f)
                {
                    RestartLevel();

                }
                else
                {
                    LevelStart();
                }

            }

        }

    }

    void LevelStart()
    {
        activeLevel = true;

        KeyMovement();

    }

    void KeyMovement()
    {

        //the added 10 is so it moves past the beat

        float lerpedValue = playerRotation;

        if (clockwiseRot)
        {
            playerBeatID = LeanTween.value(lerpedValue, beatRotation - 20, gameSpeed).setOnUpdate(KeyUpdate).setOnComplete(FailState).setEaseLinear().id;

        }
        else
        {
            playerBeatID = LeanTween.value(lerpedValue, beatRotation + 20, gameSpeed).setOnUpdate(KeyUpdate).setOnComplete(FailState).setEaseLinear().id;

        }

        playerKey.transform.eulerAngles = new Vector3(0, 0, playerRotation);

    }

    void KeyUpdate(float newVal)
    {
        playerRotation = newVal;

        playerKey.transform.eulerAngles = new Vector3(0, 0, playerRotation);

    }

    void KeyTap()
    {

        RotationCheck();

        if (playerRotation > beatRotation - marginOfError && beatRotation + marginOfError > playerRotation)
        {
            LeanTween.cancel(playerBeatID);

            if (beatsLeft > 0)
            {
                NextBeatPosition();
                KeyMovement();

            }
            else
            {
                VictoryState();

            }

        }
        else
        {
            FailState();

        }

    }

    void RotationCheck()
    {

        if(beatRotation > 180)
        {
            beatRotation = beatRotation - 180;

        }

        if (beatRotation < -180)
        {
            beatRotation = beatRotation + 180;

        }

        if (playerRotation > 180)
        {
            playerRotation = playerRotation - 180;

        }

        if (playerRotation < -180)
        {
            playerRotation = playerRotation + 180;

        }

        beat.transform.eulerAngles = new Vector3(0, 0, beatRotation);

        playerKey.transform.eulerAngles = new Vector3(0, 0, playerRotation);

    }

    void SetInitialBeatPosition()
    {

        beatRotation = 0;

        int rng = Random.Range(0, 100);

        int newRotation = Random.Range(minBeatPositionChange, maxBeatPositionChange);

        if (rng < 50)
        {
            clockwiseRot = true;

            beatRotation = -newRotation;

        }
        else
        {
            clockwiseRot = false;

            beatRotation = newRotation;

        }

        beat.transform.eulerAngles = new Vector3(0, 0, beatRotation);

    }

    void NextBeatPosition()
    {

        int newRotation = Random.Range(minBeatPositionChange, maxBeatPositionChange);

        if (clockwiseRot)
        {
            clockwiseRot = false;

        }
        else
        {
            clockwiseRot = true;

        }

        if (clockwiseRot)
        {
            beatRotation = beat.transform.eulerAngles.z - newRotation;

        }
        else
        {
            beatRotation = beat.transform.eulerAngles.z + newRotation;

        }

        beat.transform.eulerAngles = new Vector3(0, 0, beatRotation);

    }

    void RestartLevel()
    {
        playerRotation = 0;

        playerKey.transform.eulerAngles = new Vector3(0, 0, playerRotation);

        SetInitialBeatPosition();

    }

    void FailState()
    {
        activeLevel = false;

        float shaketime = 0.1f;

        LeanTween.cancel(playerBeatID);

        int id = LeanTween.delayedCall(0, () =>
        {
            LeanTween.rotateZ(gameObject, 10, shaketime);
            LeanTween.delayedCall(shaketime, () =>
            {
                LeanTween.rotateZ(gameObject,-10, shaketime);
                LeanTween.delayedCall(shaketime, () =>
                {
                    LeanTween.rotateZ(gameObject, 0, shaketime);

                });

            });

        }).id;

        print("failed");

    }

    void VictoryState()
    {
        activeLevel = false;

        print("level complete");

    }

}
