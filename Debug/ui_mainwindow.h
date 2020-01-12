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
    QVBoxLayout *verticalLayout_8;
    QSplitter *splitter_3;
    QSplitter *splitter_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_Delay;
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
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_Distortion;
    QHBoxLayout *horizontalLayout_14;
    QDial *dial_Distortion_Blend;
    QLabel *label_Distortion_Blend;
    QHBoxLayout *horizontalLayout_7;
    QDial *dial_Distortion_Range;
    QLabel *label;
    QHBoxLayout *horizontalLayout_15;
    QDial *dial_Disortion_Volume;
    QLabel *label_Distorion_Volume;
    QSplitter *splitter;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_High_Filter;
    QHBoxLayout *horizontalLayout_6;
    QDial *dial_High_Filter;
    QLabel *label_High_Filter_Freq;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_Low_Filter;
    QHBoxLayout *horizontalLayout_8;
    QDial *dial_Low_Filter;
    QLabel *label_Low_Filter_Freq;
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
    QPushButton *pushButton_Play_Original_Track;
    QPushButton *pushButton_Play;
    QPushButton *pushButton_Exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(790, 711);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_8 = new QVBoxLayout(centralwidget);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        splitter_3 = new QSplitter(centralwidget);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_Delay = new QLabel(layoutWidget);
        label_Delay->setObjectName(QStringLiteral("label_Delay"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_Delay->sizePolicy().hasHeightForWidth());
        label_Delay->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_Delay->setFont(font);
        label_Delay->setLayoutDirection(Qt::LeftToRight);
        label_Delay->setTextFormat(Qt::AutoText);

        verticalLayout_5->addWidget(label_Delay);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        dial_Delay_Period = new QDial(layoutWidget);
        dial_Delay_Period->setObjectName(QStringLiteral("dial_Delay_Period"));
        dial_Delay_Period->setMinimum(1000);
        dial_Delay_Period->setMaximum(100000);
        dial_Delay_Period->setValue(50500);

        horizontalLayout_2->addWidget(dial_Delay_Period);

        label_Delay_Period = new QLabel(layoutWidget);
        label_Delay_Period->setObjectName(QStringLiteral("label_Delay_Period"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_Delay_Period->sizePolicy().hasHeightForWidth());
        label_Delay_Period->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Calibri"));
        font1.setPointSize(12);
        label_Delay_Period->setFont(font1);

        horizontalLayout_2->addWidget(label_Delay_Period);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        dial_Delay_Level = new QDial(layoutWidget);
        dial_Delay_Level->setObjectName(QStringLiteral("dial_Delay_Level"));
        dial_Delay_Level->setMinimum(-500);
        dial_Delay_Level->setMaximum(-100);
        dial_Delay_Level->setValue(-300);
        dial_Delay_Level->setOrientation(Qt::Horizontal);
        dial_Delay_Level->setInvertedAppearance(false);
        dial_Delay_Level->setInvertedControls(false);

        horizontalLayout_3->addWidget(dial_Delay_Level);

        label_Delay_Level = new QLabel(layoutWidget);
        label_Delay_Level->setObjectName(QStringLiteral("label_Delay_Level"));
        sizePolicy1.setHeightForWidth(label_Delay_Level->sizePolicy().hasHeightForWidth());
        label_Delay_Level->setSizePolicy(sizePolicy1);
        label_Delay_Level->setFont(font1);

        horizontalLayout_3->addWidget(label_Delay_Level);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        dial_Delay_Volume = new QDial(layoutWidget);
        dial_Delay_Volume->setObjectName(QStringLiteral("dial_Delay_Volume"));
        dial_Delay_Volume->setMinimum(0);
        dial_Delay_Volume->setMaximum(1000);
        dial_Delay_Volume->setValue(1000);
        dial_Delay_Volume->setSliderPosition(1000);

        horizontalLayout_4->addWidget(dial_Delay_Volume);

        label_Delay_Volume = new QLabel(layoutWidget);
        label_Delay_Volume->setObjectName(QStringLiteral("label_Delay_Volume"));
        sizePolicy1.setHeightForWidth(label_Delay_Volume->sizePolicy().hasHeightForWidth());
        label_Delay_Volume->setSizePolicy(sizePolicy1);
        label_Delay_Volume->setFont(font1);

        horizontalLayout_4->addWidget(label_Delay_Volume);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_5->addLayout(verticalLayout);

        splitter_2->addWidget(layoutWidget);
        widget = new QWidget(splitter_2);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_Distortion = new QLabel(widget);
        label_Distortion->setObjectName(QStringLiteral("label_Distortion"));
        sizePolicy.setHeightForWidth(label_Distortion->sizePolicy().hasHeightForWidth());
        label_Distortion->setSizePolicy(sizePolicy);
        label_Distortion->setFont(font);
        label_Distortion->setLayoutDirection(Qt::LeftToRight);
        label_Distortion->setTextFormat(Qt::AutoText);

        verticalLayout_4->addWidget(label_Distortion);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        dial_Distortion_Blend = new QDial(widget);
        dial_Distortion_Blend->setObjectName(QStringLiteral("dial_Distortion_Blend"));
        dial_Distortion_Blend->setMinimum(50);
        dial_Distortion_Blend->setMaximum(500);
        dial_Distortion_Blend->setValue(275);

        horizontalLayout_14->addWidget(dial_Distortion_Blend);

        label_Distortion_Blend = new QLabel(widget);
        label_Distortion_Blend->setObjectName(QStringLiteral("label_Distortion_Blend"));
        label_Distortion_Blend->setFont(font1);

        horizontalLayout_14->addWidget(label_Distortion_Blend);


        verticalLayout_4->addLayout(horizontalLayout_14);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        dial_Distortion_Range = new QDial(widget);
        dial_Distortion_Range->setObjectName(QStringLiteral("dial_Distortion_Range"));
        dial_Distortion_Range->setMinimum(100);
        dial_Distortion_Range->setMaximum(3000);
        dial_Distortion_Range->setValue(1550);

        horizontalLayout_7->addWidget(dial_Distortion_Range);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        horizontalLayout_7->addWidget(label);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        dial_Disortion_Volume = new QDial(widget);
        dial_Disortion_Volume->setObjectName(QStringLiteral("dial_Disortion_Volume"));
        dial_Disortion_Volume->setMaximum(1000);
        dial_Disortion_Volume->setValue(1000);

        horizontalLayout_15->addWidget(dial_Disortion_Volume);

        label_Distorion_Volume = new QLabel(widget);
        label_Distorion_Volume->setObjectName(QStringLiteral("label_Distorion_Volume"));
        label_Distorion_Volume->setFont(font1);

        horizontalLayout_15->addWidget(label_Distorion_Volume);


        verticalLayout_4->addLayout(horizontalLayout_15);

        splitter_2->addWidget(widget);
        splitter_3->addWidget(splitter_2);
        splitter = new QSplitter(splitter_3);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        verticalLayout_6 = new QVBoxLayout(layoutWidget1);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_High_Filter = new QLabel(layoutWidget1);
        label_High_Filter->setObjectName(QStringLiteral("label_High_Filter"));
        label_High_Filter->setFont(font);
        label_High_Filter->setLayoutDirection(Qt::LeftToRight);
        label_High_Filter->setTextFormat(Qt::AutoText);

        verticalLayout_6->addWidget(label_High_Filter);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        dial_High_Filter = new QDial(layoutWidget1);
        dial_High_Filter->setObjectName(QStringLiteral("dial_High_Filter"));
        dial_High_Filter->setMinimum(50);
        dial_High_Filter->setMaximum(20000);
        dial_High_Filter->setValue(9975);

        horizontalLayout_6->addWidget(dial_High_Filter);

        label_High_Filter_Freq = new QLabel(layoutWidget1);
        label_High_Filter_Freq->setObjectName(QStringLiteral("label_High_Filter_Freq"));
        label_High_Filter_Freq->setFont(font1);

        horizontalLayout_6->addWidget(label_High_Filter_Freq);


        verticalLayout_6->addLayout(horizontalLayout_6);

        splitter->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        verticalLayout_7 = new QVBoxLayout(layoutWidget2);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_Low_Filter = new QLabel(layoutWidget2);
        label_Low_Filter->setObjectName(QStringLiteral("label_Low_Filter"));
        label_Low_Filter->setFont(font);
        label_Low_Filter->setLayoutDirection(Qt::LeftToRight);
        label_Low_Filter->setTextFormat(Qt::AutoText);

        verticalLayout_7->addWidget(label_Low_Filter);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        dial_Low_Filter = new QDial(layoutWidget2);
        dial_Low_Filter->setObjectName(QStringLiteral("dial_Low_Filter"));
        dial_Low_Filter->setMinimum(50);
        dial_Low_Filter->setMaximum(20000);
        dial_Low_Filter->setValue(9975);

        horizontalLayout_8->addWidget(dial_Low_Filter);

        label_Low_Filter_Freq = new QLabel(layoutWidget2);
        label_Low_Filter_Freq->setObjectName(QStringLiteral("label_Low_Filter_Freq"));
        label_Low_Filter_Freq->setFont(font1);

        horizontalLayout_8->addWidget(label_Low_Filter_Freq);


        verticalLayout_7->addLayout(horizontalLayout_8);

        splitter->addWidget(layoutWidget2);
        splitter_3->addWidget(splitter);

        verticalLayout_8->addWidget(splitter_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_Chose_Order = new QLabel(centralwidget);
        label_Chose_Order->setObjectName(QStringLiteral("label_Chose_Order"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_Chose_Order->sizePolicy().hasHeightForWidth());
        label_Chose_Order->setSizePolicy(sizePolicy2);
        label_Chose_Order->setFont(font1);

        verticalLayout_3->addWidget(label_Chose_Order);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_First = new QLabel(centralwidget);
        label_First->setObjectName(QStringLiteral("label_First"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_First->sizePolicy().hasHeightForWidth());
        label_First->setSizePolicy(sizePolicy3);
        label_First->setFont(font1);

        horizontalLayout_5->addWidget(label_First);

        comboBox_First = new QComboBox(centralwidget);
        comboBox_First->setObjectName(QStringLiteral("comboBox_First"));
        comboBox_First->setFont(font1);

        horizontalLayout_5->addWidget(comboBox_First);


        horizontalLayout_12->addLayout(horizontalLayout_5);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_Second = new QLabel(centralwidget);
        label_Second->setObjectName(QStringLiteral("label_Second"));
        sizePolicy3.setHeightForWidth(label_Second->sizePolicy().hasHeightForWidth());
        label_Second->setSizePolicy(sizePolicy3);
        label_Second->setFont(font1);

        horizontalLayout_10->addWidget(label_Second);

        comboBox_Second = new QComboBox(centralwidget);
        comboBox_Second->setObjectName(QStringLiteral("comboBox_Second"));
        comboBox_Second->setFont(font1);

        horizontalLayout_10->addWidget(comboBox_Second);


        horizontalLayout_12->addLayout(horizontalLayout_10);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_Third = new QLabel(centralwidget);
        label_Third->setObjectName(QStringLiteral("label_Third"));
        sizePolicy3.setHeightForWidth(label_Third->sizePolicy().hasHeightForWidth());
        label_Third->setSizePolicy(sizePolicy3);
        label_Third->setFont(font1);

        horizontalLayout_9->addWidget(label_Third);

        comboBox_Third = new QComboBox(centralwidget);
        comboBox_Third->setObjectName(QStringLiteral("comboBox_Third"));
        comboBox_Third->setFont(font1);

        horizontalLayout_9->addWidget(comboBox_Third);


        horizontalLayout_13->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_Fourth = new QLabel(centralwidget);
        label_Fourth->setObjectName(QStringLiteral("label_Fourth"));
        sizePolicy3.setHeightForWidth(label_Fourth->sizePolicy().hasHeightForWidth());
        label_Fourth->setSizePolicy(sizePolicy3);
        label_Fourth->setFont(font1);

        horizontalLayout_11->addWidget(label_Fourth);

        comboBox_Fourth = new QComboBox(centralwidget);
        comboBox_Fourth->setObjectName(QStringLiteral("comboBox_Fourth"));
        comboBox_Fourth->setFont(font1);

        horizontalLayout_11->addWidget(comboBox_Fourth);


        horizontalLayout_13->addLayout(horizontalLayout_11);


        verticalLayout_2->addLayout(horizontalLayout_13);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_8->addLayout(verticalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_Open = new QPushButton(centralwidget);
        pushButton_Open->setObjectName(QStringLiteral("pushButton_Open"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_Open->sizePolicy().hasHeightForWidth());
        pushButton_Open->setSizePolicy(sizePolicy4);
        pushButton_Open->setFont(font1);

        horizontalLayout->addWidget(pushButton_Open);

        pushButton_Save = new QPushButton(centralwidget);
        pushButton_Save->setObjectName(QStringLiteral("pushButton_Save"));
        sizePolicy4.setHeightForWidth(pushButton_Save->sizePolicy().hasHeightForWidth());
        pushButton_Save->setSizePolicy(sizePolicy4);
        pushButton_Save->setFont(font1);

        horizontalLayout->addWidget(pushButton_Save);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_Play_Original_Track = new QPushButton(centralwidget);
        pushButton_Play_Original_Track->setObjectName(QStringLiteral("pushButton_Play_Original_Track"));
        sizePolicy4.setHeightForWidth(pushButton_Play_Original_Track->sizePolicy().hasHeightForWidth());
        pushButton_Play_Original_Track->setSizePolicy(sizePolicy4);
        pushButton_Play_Original_Track->setFont(font1);

        horizontalLayout->addWidget(pushButton_Play_Original_Track);


        verticalLayout_8->addLayout(horizontalLayout);

        pushButton_Play = new QPushButton(centralwidget);
        pushButton_Play->setObjectName(QStringLiteral("pushButton_Play"));
        pushButton_Play->setFont(font1);

        verticalLayout_8->addWidget(pushButton_Play);

        pushButton_Exit = new QPushButton(centralwidget);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));
        pushButton_Exit->setFont(font1);

        verticalLayout_8->addWidget(pushButton_Exit);

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
        label_Delay->setText(QApplication::translate("MainWindow", "Delay", Q_NULLPTR));
        label_Delay_Period->setText(QApplication::translate("MainWindow", "Delay Period", Q_NULLPTR));
        label_Delay_Level->setText(QApplication::translate("MainWindow", "Delay Level", Q_NULLPTR));
        label_Delay_Volume->setText(QApplication::translate("MainWindow", "Delay Volume", Q_NULLPTR));
        label_Distortion->setText(QApplication::translate("MainWindow", "Distortion", Q_NULLPTR));
        label_Distortion_Blend->setText(QApplication::translate("MainWindow", "Distortion Blend", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Distortion Range", Q_NULLPTR));
        label_Distorion_Volume->setText(QApplication::translate("MainWindow", "Distortion Volume ", Q_NULLPTR));
        label_High_Filter->setText(QApplication::translate("MainWindow", "High Filter", Q_NULLPTR));
        label_High_Filter_Freq->setText(QApplication::translate("MainWindow", "High Filter Frequency", Q_NULLPTR));
        label_Low_Filter->setText(QApplication::translate("MainWindow", "Low Filter", Q_NULLPTR));
        label_Low_Filter_Freq->setText(QApplication::translate("MainWindow", "Low Filter Frequency", Q_NULLPTR));
        label_Chose_Order->setText(QApplication::translate("MainWindow", "Chose order of effects:", Q_NULLPTR));
        label_First->setText(QApplication::translate("MainWindow", "1.", Q_NULLPTR));
        label_Second->setText(QApplication::translate("MainWindow", "2.", Q_NULLPTR));
        label_Third->setText(QApplication::translate("MainWindow", "3.", Q_NULLPTR));
        label_Fourth->setText(QApplication::translate("MainWindow", "4.", Q_NULLPTR));
        pushButton_Open->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        pushButton_Save->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        pushButton_Play_Original_Track->setText(QApplication::translate("MainWindow", "Play original track", Q_NULLPTR));
        pushButton_Play->setText(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
        pushButton_Exit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
