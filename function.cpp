#include <iostream>

// Function template for adding two numbers of any data type
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // Adding two integers
    int sum_int = add(5, 10);
    std::cout << "Sum of integers: " << sum_int << std::endl;

    // Adding two doubles
    double sum_double = add(3.5, 2.7);
    std::cout << "Sum of doubles: " << sum_double << std::endl;

    // Adding two floats
    float sum_float = add(1.2f, 3.4f);
    std::cout << "Sum of floats: " << sum_float << std::endl;

    return 0;
}
