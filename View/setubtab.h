#ifndef SETUBTAB_H
#define SETUBTAB_H

#include <QWidget>

namespace Ui {
    class SetubTab;
}

namespace Ps {

    class SetubTab : public QWidget
    {
        Q_OBJECT

    public:
        explicit SetubTab(QWidget *parent = 0);
        ~SetubTab();

    private:
        Ui::SetubTab *ui;
    };

}

#endif // SETUBTAB_H
