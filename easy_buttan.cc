//easy_buttan program
/*���܂��Ȃ�*/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
/*���܂��Ȃ��I���*/

/*scene��������p�u���b�N�N���X*/
public class ScreenTransition : MonoBehaviour {

    // Use this for initialization
    void Start() {

    }

    // Update is called once per frame
    void Update() {

    }

  
    //�{�^�������������̏���
    public void PushButton()
    {
        //level�ϐ����O�ɂ��ē�Փx��D������
        public int level = 0;
        //scene���Q�ɕύX
        public int scene = 2;
        //scene��scene�`�F���W����
        SceneManager.LoadScene("scene");
    }
}