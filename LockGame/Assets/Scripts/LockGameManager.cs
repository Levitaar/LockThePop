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

    void Awake()
    {
        SetInitialBeatPosition();

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
                if(playerRotation != 0)
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

        if (clockwiseRot)
        {
            playerBeatID = LeanTween.rotateZ(playerKey, beatRotation + 20, gameSpeed).id;

            

        }
        else
        {
            playerBeatID = LeanTween.rotateZ(playerKey, beatRotation - 20, gameSpeed).id;

        }

    }

    void KeyTap()
    {
        playerRotation = playerKey.transform.eulerAngles.z;

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
        playerRotation = playerKey.transform.eulerAngles.z;

        if(beat.transform.eulerAngles.z > 360)
        {
            beat.transform.eulerAngles = new Vector3(beat.transform.eulerAngles.x, beat.transform.eulerAngles.y, beat.transform.eulerAngles.z - 360);

            beatRotation = beat.transform.eulerAngles.z;

        }

        if (beat.transform.eulerAngles.z < 360)
        {
            beat.transform.eulerAngles = new Vector3(beat.transform.eulerAngles.x, beat.transform.eulerAngles.y, beat.transform.eulerAngles.z + 360);

            beatRotation = beat.transform.eulerAngles.z;

        }

        if (playerKey.transform.eulerAngles.z > 360)
        {
            playerKey.transform.eulerAngles = new Vector3(playerKey.transform.eulerAngles.x, playerKey.transform.eulerAngles.y, playerKey.transform.eulerAngles.z - 360);

            playerRotation = playerKey.transform.eulerAngles.z;

        }

        if (playerKey.transform.eulerAngles.z < 360)
        {
            playerKey.transform.eulerAngles = new Vector3(playerKey.transform.eulerAngles.x, playerKey.transform.eulerAngles.y, playerKey.transform.eulerAngles.z + 360);

            playerRotation = playerKey.transform.eulerAngles.z;

        }

    }

    void SetInitialBeatPosition()
    {
        int rng = Random.Range(0, 100);

        if(rng < 50)
        {
            clockwiseRot = true;

        }
        else
        {
            clockwiseRot = false;

        }

        NextBeatPosition();

    }

    void NextBeatPosition()
    {
        int newRotation = Random.Range(minBeatPositionChange, maxBeatPositionChange);

        if (clockwiseRot)
        {
            beatRotation = beat.transform.eulerAngles.z + newRotation;

        }
        else
        {
            beatRotation = beat.transform.eulerAngles.z - newRotation;

        }

        LeanTween.rotateZ(beat, beatRotation, 0);

    }

    void RestartLevel()
    {
        LeanTween.rotateZ(playerKey, 0, 0);

        playerRotation = 0;

        SetInitialBeatPosition();

    }

    void FailState()
    {
        activeLevel = false;

        LeanTween.cancel(playerBeatID);

        print("failed");

    }

    void VictoryState()
    {
        activeLevel = false;

        print("level complete");

    }

}
