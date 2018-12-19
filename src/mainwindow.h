#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>
#include <QWebEngineView>

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();

protected:
    virtual void resizeEvent(QResizeEvent * event);

private:
    QWebEngineView * view;
};

#endif
