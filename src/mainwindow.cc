#include "mainwindow.h"
#include <QUrl>

MainWindow::MainWindow(QWidget *parent)
: QMainWindow(parent)
{
    this->setFixedSize(1200, 800);
    
    this->view = new QWebEngineView(this);

    this->view->setFixedSize(1200, 800);

    this->view->setUrl(QUrl("http://www.google.com"));

    this->view->show();
}

MainWindow::~MainWindow()
{
}

void MainWindow::resizeEvent(QResizeEvent * event)
{
   QSize size = this->size();

   this->view->setFixedSize(size.width(), size.height());
}
