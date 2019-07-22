#pragma once
#include <QObject>

namespace Ps{

  class MainView;
  class SetupTab;
  class Instrument;
  class SetupViewManager;

  class Startup final : public QObject
  {
    Q_OBJECT
  public:
    explicit Startup();
    ~Startup();
    void show() const;

  private:
    SetupTab& m_setupTab;
    MainView& m_mainView;
    Instrument* m_instrument;
    SetupViewManager* m_setupVm;

    explicit Startup(const Startup& rhs) = delete;
    Startup& operator= (const Startup& rhs) = delete;
  };
}



