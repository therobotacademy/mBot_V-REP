/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad;
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionZoom_In;
    QAction *actionZoom_ut;
    QAction *actionAuto_arrange;
    QAction *actionLoadRosparam;
    QAction *actionAdd_Action;
    QAction *actionAdd_Condition;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFrame *line;
    QPushButton *playButton;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabWidget;
    QMenuBar *menubar;
    QMenu *menuLoad;
    QMenu *menuZoom;
    QMenu *menuReorder;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1117, 726);
        MainWindow->setMinimumSize(QSize(800, 600));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QStringLiteral("actionLoad"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionZoom_In = new QAction(MainWindow);
        actionZoom_In->setObjectName(QStringLiteral("actionZoom_In"));
        actionZoom_ut = new QAction(MainWindow);
        actionZoom_ut->setObjectName(QStringLiteral("actionZoom_ut"));
        actionAuto_arrange = new QAction(MainWindow);
        actionAuto_arrange->setObjectName(QStringLiteral("actionAuto_arrange"));
        actionLoadRosparam = new QAction(MainWindow);
        actionLoadRosparam->setObjectName(QStringLiteral("actionLoadRosparam"));
        actionAdd_Action = new QAction(MainWindow);
        actionAdd_Action->setObjectName(QStringLiteral("actionAdd_Action"));
        actionAdd_Condition = new QAction(MainWindow);
        actionAdd_Condition->setObjectName(QStringLiteral("actionAdd_Condition"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        playButton = new QPushButton(centralwidget);
        playButton->setObjectName(QStringLiteral("playButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/stop.png"), QSize(), QIcon::Normal, QIcon::On);
        playButton->setIcon(icon);
        playButton->setCheckable(true);

        horizontalLayout->addWidget(playButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));

        verticalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1117, 21));
        menuLoad = new QMenu(menubar);
        menuLoad->setObjectName(QStringLiteral("menuLoad"));
        menuZoom = new QMenu(menubar);
        menuZoom->setObjectName(QStringLiteral("menuZoom"));
        menuReorder = new QMenu(menubar);
        menuReorder->setObjectName(QStringLiteral("menuReorder"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuLoad->menuAction());
        menubar->addAction(menuZoom->menuAction());
        menubar->addAction(menuReorder->menuAction());
        menuLoad->addAction(actionLoad);
        menuLoad->addAction(actionSave);
        menuLoad->addAction(actionQuit);
        menuZoom->addAction(actionZoom_ut);
        menuZoom->addAction(actionZoom_In);
        menuReorder->addAction(actionAuto_arrange);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Behavior Tree", 0));
        actionLoad->setText(QApplication::translate("MainWindow", "Load", 0));
        actionLoad->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        actionZoom_In->setText(QApplication::translate("MainWindow", "Zoom Out", 0));
        actionZoom_ut->setText(QApplication::translate("MainWindow", "Zoom In", 0));
        actionAuto_arrange->setText(QApplication::translate("MainWindow", "auto-arrange", 0));
        actionAuto_arrange->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionLoadRosparam->setText(QApplication::translate("MainWindow", "Load from rosparam", 0));
        actionAdd_Action->setText(QApplication::translate("MainWindow", "Add Action", 0));
        actionAdd_Condition->setText(QApplication::translate("MainWindow", "Add Condition", 0));
        playButton->setText(QString());
        menuLoad->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuZoom->setTitle(QApplication::translate("MainWindow", "Zoom", 0));
        menuReorder->setTitle(QApplication::translate("MainWindow", "Reorder", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
