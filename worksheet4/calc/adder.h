#ifndef ADDER_H
#define ADDER_H

#ifdef _WIN32
    #ifdef maths_STATIC
        #define MATHSLIB_API
    #else
        #ifdef maths_EXPORTS
            #define MATHSLIB_API __declspec(dllexport)
        #else
            #define MATHSLIB_API __declspec(dllimport)
        #endif
    #endif
#else
    #define MATHSLIB_API
#endif

namespace MathsLib {
    // Function to add two integers
    // Returns the sum of the two integers
    MATHSLIB_API int add(int a, int b);
}

#endif // ADDER_H
