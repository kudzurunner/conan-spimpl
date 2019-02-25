#include "test.h"

namespace test {
    namespace _private {
        class Test final {
        public:
            Test() = default;
            ~Test() = default;

            bool run() {
                return true;
            }
        };
    }

    Test::Test() :
        d(spimpl::make_unique_impl<_private::Test>())
    {}

    bool Test::run() {
        return d->run();
    }
}

