// 18_multiple_template_types.cpp
// Write our function template in such a way that our parameters can resolve to different types. 
// Rather than using one template type parameter T, we’ll now use two (T and U)

#include <iostream>

template <typename T, typename U>
auto max(T x, U y) // ask compiler can figure out what the relevant return type is
{
    return (x < y) ? y : x;
}

int main()
{
    std::cout << "(int , double) max(2,3.5) = " << max(2, 3.5) << '\n';

    return 0;
}
