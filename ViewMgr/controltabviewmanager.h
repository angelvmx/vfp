#pragma once
#include <QWidget>

namespace Ps
{
    class ControlTab;
    class Instrument;

    class ControlTabViewManager : public QObject
    {
        Q_OBJECT
    public:
        explicit ControlTabViewManager(QObject *parent,
                                       ControlTab& ctrlTab,
                                       Instrument& inst);
        ~ControlTabViewManager();
    private:
        ControlTab& m_controlTab;
        Instrument& m_instrument;
        void WireControls();
        explicit ControlTabViewManager(const ControlTabViewManager& rhs) = delete;
        ControlTabViewManager& operator= (const ControlTabViewManager& rhs) = delete;
    };
}
