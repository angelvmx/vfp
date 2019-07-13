#include "mainview.h"
#include "ui_mainview.h"
#include "View/setubtab.h"

namespace Ps {
    MainView::MainView(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainView)
    {
        ui->setupUi(this);
        auto setup_tab = new SetubTab(this);
        ui->loSetubTab->addWidget(setup_tab);
    }

    MainView::~MainView()
    {
        delete ui;
    }
}
