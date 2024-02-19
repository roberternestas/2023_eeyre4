#include "adder.h"

#ifdef maths_EXPORTS
// Define the add function only when building the DLL
MATHSLIB_API int add(int a, int b)
{
    return a + b;
}
#endif

