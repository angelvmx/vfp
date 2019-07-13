#ifndef UTILS_H
#define UTILS_H
#include <QWidget>

namespace Ps {
    class Utils
    {
    public:
        Utils();

    private:
        explicit Utils(const Utils &rhs) = delete;
        Utils& operator= (const Utils& rhs) = delete;
    };
}
#endif // UTILS_H
