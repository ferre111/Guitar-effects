#pragma once

#include "guitar_effects.h"

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>

#include <iostream>
#include <string>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //methods call when user click on particular button
    void on_pushButton_Open_clicked();
    void on_pushButton_Play_clicked();
    void on_pushButton_Save_clicked();
    void on_pushButton_Play_Original_Track_clicked();

private:
    Ui::MainWindow *ui;
    Guitar_effects *guitar_effects;
    std::string file_name;

    //methods whose get value from knobs and call particular effect method
    void delay(void);
    void distortion(void);
    void filter_LPF(void);
    void filter_HPF(void);
};
