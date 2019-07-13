#include "startup.h"
#include "View/setuptab.h"
#include "View/mainview.h"

namespace Ps {

    Startup::Startup() :
        QObject(nullptr),
        m_setupTab(*new SetupTab(nullptr)),
        m_mainView(*new MainView(nullptr, m_setupTab))
    {
    }

    Startup::~Startup()
    {
    }

    void Startup::show() const
    {
        m_mainView.show();
    }
}
