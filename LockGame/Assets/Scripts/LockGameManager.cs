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
    GameObject lockPiece;

    [SerializeField]
    public int lockLevel = 1;
    [SerializeField]
    float gameSpeed = 0.05f;
    [SerializeField]
    public int beatsLeft = 1;
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

    [SerializeField]
    CanvasController canvCon;

    Color mainBG;

    public Color failureBG;

    [SerializeField]
    bool testing;

    void Awake()
    {
        SetInitialBeatPosition();

        mainBG = canvCon.cam.backgroundColor;

        lockLevel = 1;

        gameSpeed = 2.5f;

        beatsLeft = lockLevel;

        RestartLevel();

        activeLevel = false;

    }
    
    void Update()
    {
        InputManager();

        CanvasManager();

    }

    void InputManager()
    {
        if (!testing)
        {

            if (Input.touchCount > 0)
            {
                if (Input.GetTouch(0).phase == TouchPhase.Began)
                {

                    if (activeLevel)
                    {
                        KeyTap();

                    }
                    else
                    {
                        if (playerRotation < -0.5f || playerRotation > 0.5f)
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

        }
        else
        {
            if (Input.GetKeyDown(KeyCode.Space))
            {

                if (activeLevel)
                {
                    KeyTap();

                }
                else
                {
                    if (playerRotation < -0.5f || playerRotation > 0.5f)
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

    }

    void LevelStart()
    {
        activeLevel = true;

        beatsLeft = lockLevel;

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
        //RotationCheck();

        if (playerRotation > beatRotation - marginOfError && beatRotation + marginOfError > playerRotation)
        {
            LeanTween.cancel(playerBeatID);

            if (beatsLeft > 1)
            {
                NextBeatPosition();
                KeyMovement();

                beatsLeft--;

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

        canvCon.cam.backgroundColor = mainBG;

        beatsLeft = lockLevel;

        playerKey.transform.eulerAngles = new Vector3(0, 0, playerRotation);

        SetInitialBeatPosition();

    }

    void FailState()
    {
        activeLevel = false;

        canvCon.cam.backgroundColor = failureBG;

        FailAnimation();

        print("failed");

    }

    void FailAnimation()
    {
        float shaketime = 0.1f;

        LeanTween.cancel(playerBeatID);

        int id = LeanTween.delayedCall(0, () =>
        {
            LeanTween.rotateZ(gameObject, 10, shaketime);
            LeanTween.delayedCall(shaketime, () =>
            {
                LeanTween.rotateZ(gameObject, -10, shaketime);
                LeanTween.delayedCall(shaketime, () =>
                {
                    LeanTween.rotateZ(gameObject, 0, shaketime);

                });

            });

        }).id;

    }

    void VictoryState()
    {
        activeLevel = false;

        print("level complete");

        lockLevel++;

        gameSpeed = gameSpeed - 0.1f;

        VictoryAnimation();

    }

    void VictoryAnimation()
    {
        float newLockPieceY = 9;

        float moveLockPiece = 0.35f;

        float newLockX = 5;

        float moveLock = 0.6f;

        float originLockX = 0;

        float resetLock = 0.6f;

        int id = LeanTween.delayedCall(0, () =>
        {
            LeanTween.moveLocalY(lockPiece, newLockPieceY, moveLockPiece).setEaseOutExpo();
            LeanTween.delayedCall(moveLockPiece, () =>
            {
                LeanTween.moveX(gameObject, newLockX, moveLock).setEaseOutExpo();
                LeanTween.delayedCall(moveLock, () =>
                {

                    gameObject.transform.position = new Vector3(newLockX * -1, gameObject.transform.position.y, 0);

                    RestartLevel();

                    LeanTween.moveLocalY(lockPiece, 6, 0);

                    LeanTween.delayedCall(moveLock, () =>
                    {
                        LeanTween.moveX(gameObject, originLockX, resetLock).setEaseOutExpo();

                    });

                });

            });

        }).id;

    }

    void CanvasManager()
    {
        canvCon.BeatCounter.text = beatsLeft.ToString();

        canvCon.LevelText.text = "Level: " + lockLevel.ToString();

    }

}
