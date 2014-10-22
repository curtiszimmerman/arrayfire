#include <af/array.h>
#include <Array.hpp>

namespace cuda
{
    template<typename T, bool DIR>
    void sort(Array<T> &val, const Array<T> &in, const unsigned dim);
}
