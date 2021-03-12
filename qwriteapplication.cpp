#include "qwriteapplication.h"
#include "codeeditor.h"

#include <QPushButton>

QWriteApplication::QWriteApplication(QWidget *parent)
    : QMainWindow(parent)
{
    createActions();
    createMenuButtons();
    CodeEditor *plainText = new CodeEditor;
    plainText->setStyleSheet("border-width: 1px; border-color: #4576ff;");
    setCentralWidget(plainText);
    resize(640, 480);
}

QWriteApplication::~QWriteApplication()
{

}

void QWriteApplication::createMenuButtons()
{
    files = menuBar()->addMenu(tr("Arquivo"));
    files->addAction(newAct);
    files->addSeparator();
    edit = menuBar()->addMenu(tr("Editar"));
    views =  menuBar()->addMenu(tr("Exibir"));
    bookmarks = menuBar()->addMenu(tr("Favoritos"));
    tools = menuBar()->addMenu(tr("Ferramentas"));
    settings = menuBar()->addMenu(tr("Configurações"));
    help = menuBar()->addMenu("Ajuda");
    menuBar()->setStyleSheet("border: none;");

    QPushButton *teste = new QPushButton(QIcon::fromTheme("document-new"),tr("Novo"));
    teste->setStyleSheet("padding: 0 4px; border: none");

    QToolBar *toolBar = addToolBar("Shorts");
    toolBar->setMovable(false);
    toolBar->setFixedHeight(32);
    toolBar->addAction(newAct);
}

void QWriteApplication::createActions()
{
    newAct = new QAction(QIcon::fromTheme("document-new"),tr("Novo"));
    newAct->setText("Novo arquivo");
    newAct->setShortcut(QKeySequence::New);

}
