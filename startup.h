#ifndef STARTUP_H
#define STARTUP_H
#include <QObject>


namespace Ps {
    class MainView;
    class SetubTab;

    class Startup : public QObject
    {
        Q_OBJECT
    public:
        explicit Startup();
        ~Startup();
        void show() const;

    private:
        SetubTab& m_setupTab;
        MainView& m_mainView;
        explicit Startup(const Startup &rhs) = delete;
        Startup& operator= (const Startup& rhs) = delete;
    };
}
#endif // STARTUP_H
