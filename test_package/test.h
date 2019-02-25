#ifndef CONAN_SPIMPL_TEST_H
#define CONAN_SPIMPL_TEST_H

#include <spimpl/spimpl.h>

namespace test {
    namespace _private {
        class Test;
    }

    class Test final {
    public:
        Test();
        ~Test() = default;

        bool run();
    private:
        spimpl::unique_impl_ptr<_private::Test> d;
    };
}

#endif //CONAN_SPIMPL_TEST_H
