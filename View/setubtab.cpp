#include "setubtab.h"
#include "ui_setubtab.h"

namespace Ps {
    SetubTab::SetubTab(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::SetubTab)
    {
        ui->setupUi(this);
    }

    SetubTab::~SetubTab()
    {
        delete ui;
    }

}
