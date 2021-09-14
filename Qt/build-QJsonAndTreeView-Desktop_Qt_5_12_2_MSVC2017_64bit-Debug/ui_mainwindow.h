/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *loadLayout;
    QPushButton *btnLoadPath;
    QLineEdit *editLoadPath;
    QPushButton *btnLoadJson;
    QHBoxLayout *dumpLayout;
    QPushButton *btnDumpPath;
    QLineEdit *editDumpPath;
    QPushButton *btnDumpJson;
    QHBoxLayout *actionLayout;
    QPushButton *btnInsert;
    QPushButton *btnInsertChild;
    QPushButton *btnRemove;
    QSpacerItem *horizontalSpacer_2;
    QTreeView *treeView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(630, 467);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        loadLayout = new QHBoxLayout();
        loadLayout->setObjectName(QString::fromUtf8("loadLayout"));
        btnLoadPath = new QPushButton(centralwidget);
        btnLoadPath->setObjectName(QString::fromUtf8("btnLoadPath"));

        loadLayout->addWidget(btnLoadPath);

        editLoadPath = new QLineEdit(centralwidget);
        editLoadPath->setObjectName(QString::fromUtf8("editLoadPath"));

        loadLayout->addWidget(editLoadPath);

        btnLoadJson = new QPushButton(centralwidget);
        btnLoadJson->setObjectName(QString::fromUtf8("btnLoadJson"));

        loadLayout->addWidget(btnLoadJson);


        verticalLayout->addLayout(loadLayout);

        dumpLayout = new QHBoxLayout();
        dumpLayout->setObjectName(QString::fromUtf8("dumpLayout"));
        btnDumpPath = new QPushButton(centralwidget);
        btnDumpPath->setObjectName(QString::fromUtf8("btnDumpPath"));

        dumpLayout->addWidget(btnDumpPath);

        editDumpPath = new QLineEdit(centralwidget);
        editDumpPath->setObjectName(QString::fromUtf8("editDumpPath"));

        dumpLayout->addWidget(editDumpPath);

        btnDumpJson = new QPushButton(centralwidget);
        btnDumpJson->setObjectName(QString::fromUtf8("btnDumpJson"));

        dumpLayout->addWidget(btnDumpJson);


        verticalLayout->addLayout(dumpLayout);

        actionLayout = new QHBoxLayout();
        actionLayout->setObjectName(QString::fromUtf8("actionLayout"));
        btnInsert = new QPushButton(centralwidget);
        btnInsert->setObjectName(QString::fromUtf8("btnInsert"));

        actionLayout->addWidget(btnInsert);

        btnInsertChild = new QPushButton(centralwidget);
        btnInsertChild->setObjectName(QString::fromUtf8("btnInsertChild"));

        actionLayout->addWidget(btnInsertChild);

        btnRemove = new QPushButton(centralwidget);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));

        actionLayout->addWidget(btnRemove);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        actionLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(actionLayout);

        treeView = new QTreeView(centralwidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        verticalLayout->addWidget(treeView);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 630, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\351\276\232\345\273\272\346\263\242  QQ\345\220\271\346\260\264\347\276\244\357\274\232647637553", nullptr));
        btnLoadPath->setText(QApplication::translate("MainWindow", "loadpath", nullptr));
        editLoadPath->setText(QApplication::translate("MainWindow", "://default_data.json", nullptr));
        btnLoadJson->setText(QApplication::translate("MainWindow", "load", nullptr));
        btnDumpPath->setText(QApplication::translate("MainWindow", "dumppath", nullptr));
        editDumpPath->setText(QApplication::translate("MainWindow", "./dump_data.json", nullptr));
        btnDumpJson->setText(QApplication::translate("MainWindow", "dump", nullptr));
        btnInsert->setText(QApplication::translate("MainWindow", "Insert", nullptr));
        btnInsertChild->setText(QApplication::translate("MainWindow", "InsertChild", nullptr));
        btnRemove->setText(QApplication::translate("MainWindow", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
