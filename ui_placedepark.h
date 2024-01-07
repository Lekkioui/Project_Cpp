/********************************************************************************
** Form generated from reading UI file 'placedepark.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLACEDEPARK_H
#define UI_PLACEDEPARK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_placeDePark
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *placeDePark)
    {
        if (placeDePark->objectName().isEmpty())
            placeDePark->setObjectName(QString::fromUtf8("placeDePark"));
        placeDePark->resize(1339, 600);
        centralwidget = new QWidget(placeDePark);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 0, 791, 541));
        tableView->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(870, 60, 401, 81));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(870, 190, 401, 81));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(870, 320, 401, 81));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(870, 450, 401, 81));
        placeDePark->setCentralWidget(centralwidget);
        menubar = new QMenuBar(placeDePark);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1339, 26));
        placeDePark->setMenuBar(menubar);
        statusbar = new QStatusBar(placeDePark);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        placeDePark->setStatusBar(statusbar);

        retranslateUi(placeDePark);

        QMetaObject::connectSlotsByName(placeDePark);
    } // setupUi

    void retranslateUi(QMainWindow *placeDePark)
    {
        placeDePark->setWindowTitle(QCoreApplication::translate("placeDePark", "placeDePark", nullptr));
        pushButton->setText(QCoreApplication::translate("placeDePark", "Arriv\303\251e d'un v\303\251hicule", nullptr));
        pushButton_2->setText(QCoreApplication::translate("placeDePark", "D\303\251part d'un v\303\251hicule", nullptr));
        pushButton_3->setText(QCoreApplication::translate("placeDePark", "Affichage des places", nullptr));
        pushButton_4->setText(QCoreApplication::translate("placeDePark", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class placeDePark: public Ui_placeDePark {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLACEDEPARK_H
