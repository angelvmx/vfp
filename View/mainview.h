#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QMainWindow>

namespace Ui {
    class MainView;
}

namespace Ps
{
    class SetubTab;

    class MainView : public QMainWindow
    {
        Q_OBJECT

    public:
        explicit MainView(QWidget *parent, Ps::SetubTab &setup);
        ~MainView();

    private:
        SetubTab& m_setupTab;
        Ui::MainView *ui;
    };
}

#endif // MAINVIEW_H
