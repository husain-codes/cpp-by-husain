// 20_function_template_overload.cpp
// Just like functions may be overloaded, function templates may also be overloaded.
// Such overloads can have a different number of template types and/or a different number or type of function parameters:
// One interesting note here is that for the call to add(1.2, 3.4), 
// the compiler will prefer add<T>(T, T) over add<T, U>(T, U) even though both could possibly match.

// The rules for determining which of multiple matching function templates should be preferred are called “partial ordering of function templates”. 
// In short, whichever function template is more restrictive/specialized will be preferred. add<T>(T, T) is the more restrictive function template 
// in this case (since it only has one template parameter), so it is preferred.

// If multiple function templates can match a call and the compiler can’t determine which is more restrictive, the compiler will error with an ambiguous match.

#include <iostream>

// Add two values with matching types
template <typename T>
auto add(T x, T y)
{
    return x + y;
}

// Add two values with non-matching types
// As of C++20 we could also use auto add(auto x, auto y)
template <typename T, typename U>
auto add(T x, U y)
{
    return x + y;
}

// Add three values with any type
// As of C++20 we could also use auto add(auto x, auto y, auto z)
template <typename T, typename U, typename V>
auto add(T x, U y, V z)
{
    return x + y + z;
}

int main()
{
    std::cout << add(1.2, 3.4) << '\n'; // instantiates and calls add<double>()
    std::cout << add(5.6, 7) << '\n';   // instantiates and calls add<double, int>()
    std::cout << add(8, 9, 10) << '\n'; // instantiates and calls add<int, int, int>()

    return 0;
}

// g++ -std=c++20 20_function_template_overload.cpp
