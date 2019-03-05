#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Start_clicked()
{
    Image_Init();
//  fd = portInit("/dev/ttyUSB0");
    update_still();
    delay_sec(1);

    //if(pthread_create(&mcu_t, NULL, mcu, NULL) != 0)
    cout<<"mcu pthread failed"<<endl;
    cout<<"mcu pthread succeeded"<<endl;

    //if(pthread_create(&game_master_t , NULL, process_game_master, NULL) != 0)
    //cout<<"process game_master pthread failed"<<endl;
    //cout<<"process game_master pthread succeeded"<<endl;
    if(pthread_create(&image_t, NULL, image, NULL) != 0)
    cout<<"image pthread failed"<<endl;
    cout<<"image pthread succeeded"<<endl;

    //if(pthread_create(&serial_t, NULL, serial, NULL) != 0)
    cout<<"serial pthread failed"<<endl;
    cout<<"serial pthread succeeded"<<endl;

    //if(pthread_create(&fsm_t, NULL, fsm_change, NULL) != 0)
    cout<<"serial pthread failed"<<endl;
    cout<<"serial pthread succeeded"<<endl;

    //if(pthread_create(&head_t, NULL, process_head, NULL) != 0)
    cout<<"process head pthread failed"<<endl;
    cout<<"process head pthread succeeded"<<endl;

    //if(pthread_create(&body_t, NULL, process_body, NULL) != 0)
    cout<<"process body pthread failed"<<endl;
    cout<<"process body pthread succeeded"<<endl;




    void *pthread_result;
    //pthread_join(mcu_t,&pthread_result);
    pthread_join(image_t, &pthread_result);
    //pthread_join(serial_t, &pthread_result);
    //pthread_join(body_t, &pthread_result);
    //pthread_join(fsm_t, &pthread_result);
    //pthread_join(head_t, &pthread_result);
    //pthread_join(game_master_t, &pthread_result);
    return;

}
