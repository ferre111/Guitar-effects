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
#include <QtWidgets/QDial>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QDial *dial_Delay;
    QLabel *label_Delay;
    QHBoxLayout *horizontalLayout_3;
    QDial *dial_Level;
    QLabel *label_Level;
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
        MainWindow->resize(318, 243);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        dial_Delay = new QDial(centralwidget);
        dial_Delay->setObjectName(QStringLiteral("dial_Delay"));
        dial_Delay->setMinimum(1000);
        dial_Delay->setMaximum(100000);
        dial_Delay->setValue(50500);

        horizontalLayout_2->addWidget(dial_Delay);

        label_Delay = new QLabel(centralwidget);
        label_Delay->setObjectName(QStringLiteral("label_Delay"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_Delay->sizePolicy().hasHeightForWidth());
        label_Delay->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(12);
        label_Delay->setFont(font);

        horizontalLayout_2->addWidget(label_Delay);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        dial_Level = new QDial(centralwidget);
        dial_Level->setObjectName(QStringLiteral("dial_Level"));
        dial_Level->setMinimum(100);
        dial_Level->setMaximum(500);
        dial_Level->setValue(300);

        horizontalLayout_3->addWidget(dial_Level);

        label_Level = new QLabel(centralwidget);
        label_Level->setObjectName(QStringLiteral("label_Level"));
        sizePolicy.setHeightForWidth(label_Level->sizePolicy().hasHeightForWidth());
        label_Level->setSizePolicy(sizePolicy);
        label_Level->setFont(font);

        horizontalLayout_3->addWidget(label_Level);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_Open = new QPushButton(centralwidget);
        pushButton_Open->setObjectName(QStringLiteral("pushButton_Open"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_Open->sizePolicy().hasHeightForWidth());
        pushButton_Open->setSizePolicy(sizePolicy1);
        pushButton_Open->setFont(font);

        horizontalLayout->addWidget(pushButton_Open);

        pushButton_Save = new QPushButton(centralwidget);
        pushButton_Save->setObjectName(QStringLiteral("pushButton_Save"));
        pushButton_Save->setFont(font);

        horizontalLayout->addWidget(pushButton_Save);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_Play = new QPushButton(centralwidget);
        pushButton_Play->setObjectName(QStringLiteral("pushButton_Play"));
        sizePolicy1.setHeightForWidth(pushButton_Play->sizePolicy().hasHeightForWidth());
        pushButton_Play->setSizePolicy(sizePolicy1);
        pushButton_Play->setFont(font);

        horizontalLayout->addWidget(pushButton_Play);


        verticalLayout_2->addLayout(horizontalLayout);

        pushButton_Exit = new QPushButton(centralwidget);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));
        pushButton_Exit->setFont(font);

        verticalLayout_2->addWidget(pushButton_Exit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 318, 21));
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
        label_Delay->setText(QApplication::translate("MainWindow", "Delay period", Q_NULLPTR));
        label_Level->setText(QApplication::translate("MainWindow", "Level", Q_NULLPTR));
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
