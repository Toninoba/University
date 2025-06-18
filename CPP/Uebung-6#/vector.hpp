#pragma once

#include <cstdint>

/* Implement a generic mathematical Vector.
 * todo: * add template parameters
 *       * implement the required operators
 *       * test all functions
 *       * keep it const correct
 */
namespace Math{

    // The vector should have both a generic numeric type(T) and a number of dimensions(N).
    // The data can be stored in an array of type T and size N.
    class Vector
    {
    public:
        // Todo: Implement an operator[] overload for reading!

        // Todo: Implement an operator[] overload for read/write access!

        // Todo: Implement a unary operator- overload that returns a copy with all components negated.

        // Todo: Implement an operator+ overload that takes a vector of same type and size.

        // Todo: Implement an operator- overload that takes a vector of same type and size.
    private:
        T data[N];
    };
	
    // Todo: Implement an operator* overload that takes a vector from the left and a scalar from the right side.
    // Returns a vector.
	
    // Todo: Implement a operator* overload that takes a vector from the right and a scalar from the left side.
    // Returns a vector.
}
