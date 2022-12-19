//normal_buttan program
/*おまじない*/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
/*おまじない終わり*/

/*sceneをいじるパブリッククラス*/
public class ScreenTransition : MonoBehaviour {

    // Use this for initialization
    void Start() {

    }

    // Update is called once per frame
    void Update() {

    }


    //ボタンを押した時の処理
    public void PushButton()
    {
        //level変数を１にして難易度を普通に
        public int level = 1;
        //sceneを２に変更
        public int scene = 2;
        //sceneにsceneチェンジする
        SceneManager.LoadScene("scene");
    }
}

https://mogi0506.com/unity-scene-switching-button/
//参考にどうぞ
