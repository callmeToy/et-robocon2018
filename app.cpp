/**
 ******************************************************************************
 ** �t�@�C���� : app.c
 **
 ** �T�v : 2�֓|���U�q���C���g���[�X���{�b�g��TOPPERS/HRP2�pC�T���v���v���O����
 **
 ** ���L : sample_c4 (sample_c3��Bluetooth�ʐM�����[�g�X�^�[�g�@�\��ǉ�)
 ******************************************************************************
 **/

#include "ev3api.h"
#include "app.h"
#if defined(BUILD_MODULE)
#include "module_cfg.h"
#else
#include "kernel_cfg.h"
#endif



// using namespace ev3api;

#define DEBUG

#ifdef DEBUG
#define _debug(x) (x)
#else
#define _debug(x)
#endif

static int      bt_cmd = 0;
static FILE     *bt = NULL;


void main_task(intptr_t unused)
{


    // Bluetoothでのシリアル通信用ファイルをオープンする
    bt = ev3_serial_open_file(EV3_SERIAL_BT);
    assert(bt != NULL);

    // Bluetooth受信タスクの実行
    act_tsk(BT_TASK);
   
    // メインループ
    while(1)
    {

        tslp_tsk(1); /* 4msec�����N�� */
    }

    // Bluetooth用タスクを終了
    ter_tsk(BT_TASK);
    fclose(bt);

    // ActionControllerの終了処理


    // 自タスクの終了
    ext_tsk();
}



//*****************************************************************************
// �֐��� : bt_task
// ���� : unused
// �Ԃ�l : �Ȃ�
// �T�v : Bluetooth�ʐM�ɂ�郊���[�g�X�^�[�g�B Tera Term�Ȃǂ̃^�[�~�i���\�t�g����A
//       ASCII�R�[�h��1�𑗐M����ƁA�����[�g�X�^�[�g����B
//*****************************************************************************
void bt_task(intptr_t unused)
{
    while(1)
    {
        uint8_t c = fgetc(bt);
        switch(c)
        {
        case 1:
            bt_cmd = 1;
            break;

        case 2:
            bt_cmd = 2;
            break;

        default:
            break;
        }
        fputc(c, bt);
    }
}
