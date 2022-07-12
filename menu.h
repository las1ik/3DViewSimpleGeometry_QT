#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include <QApplication>

class menu : public QMainWindow {
protected:
    float figure = 0;

  public:
    menu(QWidget *parent = 0);
};

#endif // MENU_H
