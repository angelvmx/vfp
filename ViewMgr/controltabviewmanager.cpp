#include "controltabviewmanager.h"
#include "Model/instrument.h"
#include "View/controltab.h"
#include "utils.h"

namespace Ps
{

    ControlTabViewManager::ControlTabViewManager(QObject *parent,
                                                 ControlTab& ctrlTab,
                                                 Instrument& inst) :
        QObject(parent),
        m_controlTab(ctrlTab),
        m_instrument(inst)
    {
        WireControls();
    }

    ControlTabViewManager::~ControlTabViewManager()
    {
        Utils::DestructorMsg(this);
    }

    void ControlTabViewManager::WireControls()
    {
        connect(&m_controlTab, &ControlTab::NotifyPulseWidthChanged,
                &m_instrument, &Instrument::onPulseWidthChanged);
    }

}
