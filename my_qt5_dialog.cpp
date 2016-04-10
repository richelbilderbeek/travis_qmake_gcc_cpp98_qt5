#include "my_qt5_dialog.h"
#include "ui_my_qt5_dialog.h"
#include <QTimer>

my_qt5_dialog::my_qt5_dialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::my_qt5_dialog)
{
  ui->setupUi(this);
  QTimer * const timer(new QTimer(this));
  connect(timer,SIGNAL(timeout()),this,SLOT(close()));
  timer->setInterval(1000);
  timer->start();
}

my_qt5_dialog::~my_qt5_dialog()
{
  delete ui;
}
