#include "mainview.h"
#include "ui_mainview.h"
#include "View/setubtab.h"

namespace Ps {
    MainView::MainView(QWidget *parent, Ps::SetubTab &setup) :
        QMainWindow(parent),
        m_setupTab(setup),
        ui(new Ui::MainView)
    {
        ui->setupUi(this);
        m_setupTab.setParent(this);
        ui->loSetubTab->addWidget(&m_setupTab);
    }

    MainView::~MainView()
    {
        delete ui;
    }
}
