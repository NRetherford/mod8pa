// VariadicSum.cpp
// Nathaniel Retherford
// 11/15/26
// Call variadic template function to calculate the sum of numeric arguments

#include <iostream>
#include <type_traits>

using namespace std;

// Base case: when no arguments are provided, return 0
int sum_args() {
    return 0;
}

// Recursive case: sum the first argument with the sum of the remaining arguments
template <typename T, typename... Args>
typename common_type<T, Args...>::type sum_args(T first, Args... rest) {
    return first + sum_args(rest...);
}

int main() {
    // Test cases
    cout << sum_args(1, 2.5, 3, 4) << endl;      // Expected Output: 10.5
    cout << sum_args(5.5, 2) << endl;            // Expected Output: 7.5
    cout << sum_args() << endl;                  // Expected Output: 0

    return 0;
}
