#ifndef QWRITEAPPLICATION_H
#define QWRITEAPPLICATION_H

#include <QMainWindow>
#include <QMenu>
#include <QAction>
#include <QMenuBar>
#include <QStatusBar>
#include <QToolBar>

class QWriteApplication : public QMainWindow
{
    Q_OBJECT

public:
    QWriteApplication(QWidget *parent = nullptr);
    ~QWriteApplication();
private:
    void createActions();
    void createMenuButtons();

    QMenu *files;
    QMenu *edit;
    QMenu *views;
    QMenu *bookmarks;
    QMenu *tools;
    QMenu *settings;
    QMenu *help;

    QAction *newAct;
};
#endif // QWRITEAPPLICATION_H
