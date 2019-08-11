#include "mainview.h"
#include "ui_mainview.h"
#include "View/setuptab.h"
#include "View/controltab.h"

namespace Ps{


  MainView::MainView(QWidget *parent,
                     SetupTab& setup,
                     ControlTab& contolTab) :
    QMainWindow(parent),
    m_setupTab (setup),
    ui(new Ui::MainView)
  {
    ui->setupUi(this);
    m_setupTab.setParent(this);
    contolTab.setParent(this);
    ui->loSetupTab->addWidget(&m_setupTab);
    ui->loControlTab->addWidget(&contolTab);
  }

  MainView::~MainView()
  {
    delete ui;
  }

}

void Ps::MainView::on_action_Exit_triggered()
{
    QApplication::quit();
}

void Ps::MainView::on_action_About_triggered()
{
    //TODO Show an about dialog
}
