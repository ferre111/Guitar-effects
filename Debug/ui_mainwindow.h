/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_5;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QDial *dial_Delay_Period;
    QLabel *label_Delay_Period;
    QHBoxLayout *horizontalLayout_3;
    QDial *dial_Delay_Level;
    QLabel *label_Delay_Level;
    QHBoxLayout *horizontalLayout_4;
    QDial *dial_Delay_Volume;
    QLabel *label_Delay_Volume;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_14;
    QDial *dial_Distorion_Blend;
    QLabel *label_Distorion_Blend;
    QHBoxLayout *horizontalLayout_15;
    QDial *dial_Disortion_Volume;
    QLabel *label_Distorion_Volume;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_Chose_Order;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_First;
    QComboBox *comboBox_First;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_Second;
    QComboBox *comboBox_Second;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_Third;
    QComboBox *comboBox_Third;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_Fourth;
    QComboBox *comboBox_Fourth;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Open;
    QPushButton *pushButton_Save;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Play;
    QPushButton *pushButton_Exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(790, 556);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_5 = new QVBoxLayout(centralwidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        dial_Delay_Period = new QDial(widget);
        dial_Delay_Period->setObjectName(QStringLiteral("dial_Delay_Period"));
        dial_Delay_Period->setMinimum(1000);
        dial_Delay_Period->setMaximum(100000);
        dial_Delay_Period->setValue(50500);

        horizontalLayout_2->addWidget(dial_Delay_Period);

        label_Delay_Period = new QLabel(widget);
        label_Delay_Period->setObjectName(QStringLiteral("label_Delay_Period"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_Delay_Period->sizePolicy().hasHeightForWidth());
        label_Delay_Period->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(12);
        label_Delay_Period->setFont(font);

        horizontalLayout_2->addWidget(label_Delay_Period);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        dial_Delay_Level = new QDial(widget);
        dial_Delay_Level->setObjectName(QStringLiteral("dial_Delay_Level"));
        dial_Delay_Level->setMinimum(100);
        dial_Delay_Level->setMaximum(500);
        dial_Delay_Level->setValue(300);

        horizontalLayout_3->addWidget(dial_Delay_Level);

        label_Delay_Level = new QLabel(widget);
        label_Delay_Level->setObjectName(QStringLiteral("label_Delay_Level"));
        sizePolicy.setHeightForWidth(label_Delay_Level->sizePolicy().hasHeightForWidth());
        label_Delay_Level->setSizePolicy(sizePolicy);
        label_Delay_Level->setFont(font);

        horizontalLayout_3->addWidget(label_Delay_Level);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        dial_Delay_Volume = new QDial(widget);
        dial_Delay_Volume->setObjectName(QStringLiteral("dial_Delay_Volume"));
        dial_Delay_Volume->setMinimum(0);
        dial_Delay_Volume->setMaximum(1000);
        dial_Delay_Volume->setValue(1000);
        dial_Delay_Volume->setSliderPosition(1000);

        horizontalLayout_4->addWidget(dial_Delay_Volume);

        label_Delay_Volume = new QLabel(widget);
        label_Delay_Volume->setObjectName(QStringLiteral("label_Delay_Volume"));
        sizePolicy.setHeightForWidth(label_Delay_Volume->sizePolicy().hasHeightForWidth());
        label_Delay_Volume->setSizePolicy(sizePolicy);
        label_Delay_Volume->setFont(font);

        horizontalLayout_4->addWidget(label_Delay_Volume);


        verticalLayout->addLayout(horizontalLayout_4);

        splitter->addWidget(widget);
        widget1 = new QWidget(splitter);
        widget1->setObjectName(QStringLiteral("widget1"));
        verticalLayout_4 = new QVBoxLayout(widget1);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        dial_Distorion_Blend = new QDial(widget1);
        dial_Distorion_Blend->setObjectName(QStringLiteral("dial_Distorion_Blend"));
        dial_Distorion_Blend->setMinimum(50);
        dial_Distorion_Blend->setMaximum(500);
        dial_Distorion_Blend->setValue(275);

        horizontalLayout_14->addWidget(dial_Distorion_Blend);

        label_Distorion_Blend = new QLabel(widget1);
        label_Distorion_Blend->setObjectName(QStringLiteral("label_Distorion_Blend"));
        label_Distorion_Blend->setFont(font);

        horizontalLayout_14->addWidget(label_Distorion_Blend);


        verticalLayout_4->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        dial_Disortion_Volume = new QDial(widget1);
        dial_Disortion_Volume->setObjectName(QStringLiteral("dial_Disortion_Volume"));
        dial_Disortion_Volume->setMaximum(1000);
        dial_Disortion_Volume->setValue(500);

        horizontalLayout_15->addWidget(dial_Disortion_Volume);

        label_Distorion_Volume = new QLabel(widget1);
        label_Distorion_Volume->setObjectName(QStringLiteral("label_Distorion_Volume"));
        label_Distorion_Volume->setFont(font);

        horizontalLayout_15->addWidget(label_Distorion_Volume);


        verticalLayout_4->addLayout(horizontalLayout_15);

        splitter->addWidget(widget1);

        verticalLayout_5->addWidget(splitter);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_Chose_Order = new QLabel(centralwidget);
        label_Chose_Order->setObjectName(QStringLiteral("label_Chose_Order"));
        label_Chose_Order->setFont(font);

        verticalLayout_3->addWidget(label_Chose_Order);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_First = new QLabel(centralwidget);
        label_First->setObjectName(QStringLiteral("label_First"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_First->sizePolicy().hasHeightForWidth());
        label_First->setSizePolicy(sizePolicy1);
        label_First->setFont(font);

        horizontalLayout_5->addWidget(label_First);

        comboBox_First = new QComboBox(centralwidget);
        comboBox_First->setObjectName(QStringLiteral("comboBox_First"));
        comboBox_First->setFont(font);

        horizontalLayout_5->addWidget(comboBox_First);


        horizontalLayout_12->addLayout(horizontalLayout_5);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_Second = new QLabel(centralwidget);
        label_Second->setObjectName(QStringLiteral("label_Second"));
        sizePolicy1.setHeightForWidth(label_Second->sizePolicy().hasHeightForWidth());
        label_Second->setSizePolicy(sizePolicy1);
        label_Second->setFont(font);

        horizontalLayout_10->addWidget(label_Second);

        comboBox_Second = new QComboBox(centralwidget);
        comboBox_Second->setObjectName(QStringLiteral("comboBox_Second"));
        comboBox_Second->setFont(font);

        horizontalLayout_10->addWidget(comboBox_Second);


        horizontalLayout_12->addLayout(horizontalLayout_10);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_Third = new QLabel(centralwidget);
        label_Third->setObjectName(QStringLiteral("label_Third"));
        sizePolicy1.setHeightForWidth(label_Third->sizePolicy().hasHeightForWidth());
        label_Third->setSizePolicy(sizePolicy1);
        label_Third->setFont(font);

        horizontalLayout_9->addWidget(label_Third);

        comboBox_Third = new QComboBox(centralwidget);
        comboBox_Third->setObjectName(QStringLiteral("comboBox_Third"));
        comboBox_Third->setFont(font);

        horizontalLayout_9->addWidget(comboBox_Third);


        horizontalLayout_13->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_Fourth = new QLabel(centralwidget);
        label_Fourth->setObjectName(QStringLiteral("label_Fourth"));
        sizePolicy1.setHeightForWidth(label_Fourth->sizePolicy().hasHeightForWidth());
        label_Fourth->setSizePolicy(sizePolicy1);
        label_Fourth->setFont(font);

        horizontalLayout_11->addWidget(label_Fourth);

        comboBox_Fourth = new QComboBox(centralwidget);
        comboBox_Fourth->setObjectName(QStringLiteral("comboBox_Fourth"));
        comboBox_Fourth->setFont(font);

        horizontalLayout_11->addWidget(comboBox_Fourth);


        horizontalLayout_13->addLayout(horizontalLayout_11);


        verticalLayout_2->addLayout(horizontalLayout_13);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_Open = new QPushButton(centralwidget);
        pushButton_Open->setObjectName(QStringLiteral("pushButton_Open"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_Open->sizePolicy().hasHeightForWidth());
        pushButton_Open->setSizePolicy(sizePolicy2);
        pushButton_Open->setFont(font);

        horizontalLayout->addWidget(pushButton_Open);

        pushButton_Save = new QPushButton(centralwidget);
        pushButton_Save->setObjectName(QStringLiteral("pushButton_Save"));
        sizePolicy2.setHeightForWidth(pushButton_Save->sizePolicy().hasHeightForWidth());
        pushButton_Save->setSizePolicy(sizePolicy2);
        pushButton_Save->setFont(font);

        horizontalLayout->addWidget(pushButton_Save);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_Play = new QPushButton(centralwidget);
        pushButton_Play->setObjectName(QStringLiteral("pushButton_Play"));
        sizePolicy2.setHeightForWidth(pushButton_Play->sizePolicy().hasHeightForWidth());
        pushButton_Play->setSizePolicy(sizePolicy2);
        pushButton_Play->setFont(font);

        horizontalLayout->addWidget(pushButton_Play);


        verticalLayout_5->addLayout(horizontalLayout);

        pushButton_Exit = new QPushButton(centralwidget);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));
        pushButton_Exit->setFont(font);

        verticalLayout_5->addWidget(pushButton_Exit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 790, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_Exit, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_Delay_Period->setText(QApplication::translate("MainWindow", "Delay period", Q_NULLPTR));
        label_Delay_Level->setText(QApplication::translate("MainWindow", "Delay Level", Q_NULLPTR));
        label_Delay_Volume->setText(QApplication::translate("MainWindow", "Delay Volume", Q_NULLPTR));
        label_Distorion_Blend->setText(QApplication::translate("MainWindow", "Distortion Blend", Q_NULLPTR));
        label_Distorion_Volume->setText(QApplication::translate("MainWindow", "Distortion Volume ", Q_NULLPTR));
        label_Chose_Order->setText(QApplication::translate("MainWindow", "Chose order of effects:", Q_NULLPTR));
        label_First->setText(QApplication::translate("MainWindow", "1.", Q_NULLPTR));
        label_Second->setText(QApplication::translate("MainWindow", "2.", Q_NULLPTR));
        label_Third->setText(QApplication::translate("MainWindow", "3.", Q_NULLPTR));
        label_Fourth->setText(QApplication::translate("MainWindow", "4.", Q_NULLPTR));
        pushButton_Open->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        pushButton_Save->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        pushButton_Play->setText(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
        pushButton_Exit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
