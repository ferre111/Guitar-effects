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
    void on_pushButton_Open_clicked();

    void on_pushButton_Play_clicked();

    void on_pushButton_Save_clicked();

private:
    Ui::MainWindow *ui;
    Guitar_effects *guitar_effects;
    std::string file_name;

    void delay(void);
    void distortion(void);
    void filter_LPF(void);
    void filter_HPF(void);
};
