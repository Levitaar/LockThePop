using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class CanvasController : MonoBehaviour
{
    [SerializeField]
    TextMeshProUGUI LevelText;
    [SerializeField]
    TextMeshPro BeatCounter;
    [SerializeField]
    LockGameManager manager;

    void Update()
    {
        BeatCounter.text = manager.beatsLeft.ToString();

        LevelText.text = "Level: " + manager.lockLevel.ToString();
    }
}
