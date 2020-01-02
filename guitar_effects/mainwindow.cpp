#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    guitar_effects = new Guitar_effects;

    ui->pushButton_Play->setEnabled(false);
    ui->pushButton_Save->setEnabled(false);

//    ui->comboBox_Second->setEnabled(false);
//    ui->comboBox_Third ->setEnabled(false);
//    ui->comboBox_Fourth->setEnabled(false);

    QStringList effects_list = {"---", "Delay", "Distortion"};

    ui->comboBox_First ->addItems(effects_list);
    ui->comboBox_Second->addItems(effects_list);
    ui->comboBox_Third ->addItems(effects_list);
    ui->comboBox_Fourth->addItems(effects_list);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete guitar_effects;
}

void MainWindow::on_pushButton_Open_clicked()
{
    QString Qfile_name = QFileDialog::getOpenFileName(this, "Open file", QDir::homePath(), "Wav file (*.wav)");
    file_name = Qfile_name.toUtf8().constData();

    ui->pushButton_Play->setEnabled(true);
    ui->pushButton_Save->setEnabled(true);
}

void MainWindow::on_pushButton_Play_clicked()
{
    if(!guitar_effects->load_from_file(file_name)){
        QMessageBox::warning(this, "Warning!", "File doesn't load properly!");
    }

    if (ui->comboBox_First->currentText() == "Delay") delay();
    if (ui->comboBox_First->currentText() == "Distortion") distortion();
//    if (ui->comboBox_First->currentText() == "Delay") goto Delay;
//    if (ui->comboBox_First->currentText() == "Delay") goto Delay;

    if (ui->comboBox_Second->currentText() == "Delay") delay();
    if (ui->comboBox_Second->currentText() == "Distortion") distortion();
//    if (ui->comboBox_Second->currentText() == "Delay") goto Delay;
//    if (ui->comboBox_Second->currentText() == "Delay") goto Delay;

    if (ui->comboBox_Third->currentText() == "Delay") delay();
    if (ui->comboBox_Third->currentText() == "Distortion") distortion();
//    if (ui->comboBox_Third->currentText() == "Delay") goto Delay;
//    if (ui->comboBox_Third->currentText() == "Delay") goto Delay;

    if (ui->comboBox_Fourth->currentText() == "Delay") delay();
    if (ui->comboBox_Fourth->currentText() == "Distortion") distortion();
//    if (ui->comboBox_Fourth->currentText() == "Delay") goto Delay;
//    if (ui->comboBox_Fourth->currentText() == "Delay") goto Delay;

    guitar_effects->set_buffer();
    guitar_effects->play();
}

void MainWindow::on_pushButton_Save_clicked()
{
    QString Qfile_name = QFileDialog::getSaveFileName(this, "Save file", QDir::homePath(), "Wav file (*.wav)");
    std::string file_save = Qfile_name.toUtf8().constData();
    if(!guitar_effects->save_buffer_to_file(file_save)){
        QMessageBox::warning(this, "Warning!", "File doesn't save properly!");
    } else {
        QMessageBox::information(this, "Infromation", "File save properly.");
    }

}

void MainWindow::delay(void){
    int d = ui->dial_Delay_Period->value();
    double l = (ui->dial_Delay_Level->value())/100.0;
    double v = (ui->dial_Delay_Volume->value())/1000.0;

    guitar_effects->delay_effect(d, l, v);
    guitar_effects->load_buffer_from_sampels(d);

}

void MainWindow::distortion(void){
    double b = (ui->dial_Distorion_Blend->value())/100.0;
    double v = (ui->dial_Disortion_Volume->value())/1000.0;

    qDebug() << b << endl << v << endl << endl;

    guitar_effects->distortion_effect(b, v);
    guitar_effects->load_buffer_from_sampels(-1);
}
