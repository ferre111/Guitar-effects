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

    int d = ui->dial_Delay->value();
    double l = (ui->dial_Level->value())/100.0;

    guitar_effects->delay_effect(d, l);
    guitar_effects->load_buffer_from_sampels(d);
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
