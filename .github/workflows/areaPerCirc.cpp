// Copyright (c) 2021 Enoch O All rights reserved.
// Created by: Enoch O
// Date: March 3, 2025
// This program calculates the circumference and area of a circle.
#include <cmath>
#include <iostream>

int main() {
    // Input
    double radius = 8.0;

    // Calculate the circumference and area
    double circumference = M_PI * 2 * radius;  //
    double area = M_PI * std::pow(radius, 2);
    double sqrt_100 = std::sqrt(100.0);
    double sqrt_25 = std::sqrt(25.0);

    // Output
    std::cout << circumference << std::endl;
    std::cout << area << std::endl;
    std::cout << sqrt_100 << std::endl;
    std::cout << sqrt_25 << std::endl;

    return 0;
}
