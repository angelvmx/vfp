#pragma once

#include <QWidget>

namespace Ui {
    class ControlTab;
}

namespace Ps
{
    class ControlTab : public QWidget
    {
        Q_OBJECT

    public:
        explicit ControlTab(QWidget *parent = 0);
        ~ControlTab();

    private:
        Ui::ControlTab *ui;
    };
}
