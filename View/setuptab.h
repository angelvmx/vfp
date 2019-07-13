#ifndef SETUPTAB_H
#define SETUPTAB_H

#include <QWidget>

namespace Ui {
    class SetubTab;
}

namespace Ps {

    class SetupTab : public QWidget
    {
        Q_OBJECT

    public:
        explicit SetupTab(QWidget *parent = 0);
        ~SetupTab();

    private:
        Ui::SetubTab *ui;
    };

}

#endif // SETUBTAB_H
