#include "menu.h"
#include "widget.h"
#include <QMenu>
#include <QMenuBar>

menu::menu(QWidget *parent)
    : QMainWindow(parent) {

    QMenuBar *menuBar = new QMenuBar;
    QMenu *menuWindow = menuBar->addMenu(tr("&Window"));

    QAction *cube = new QAction("cube", this);
    menuWindow->addAction(cube);
    connect(cube, &QAction::triggered, qApp, figure = 0);

    QAction *Pyramid = new QAction("Pyramid", this);
    menuWindow->addAction(Pyramid);
    connect(Pyramid, &QAction::triggered, qApp, figure = 1);

    QAction *Prisma = new QAction("Prisma", this);
    menuWindow->addAction(Prisma);
    connect(Prisma, &QAction::triggered, qApp, figure = 3);

    QAction *Parall = new QAction("Parall", this);
    menuWindow->addAction(Parall);
    connect(Parall, &QAction::triggered, qApp, figure = 4);

    QAction *quit = new QAction("quit", this);
    menuWindow->addAction(quit);
    connect(quit, &QAction::triggered, qApp, QApplication::quit);
    setMenuBar(menuBar);

    setCentralWidget(new Widget(this));
}
