#include "setuptab.h"
#include "ui_setubtab.h"
#include "utils.h"

namespace Ps {
    SetupTab::SetupTab(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::SetubTab)
    {
        ui->setupUi(this);
    }

    SetupTab::~SetupTab()
    {
        Utils::DestructorMsg(this);
        delete ui;
    }

}
