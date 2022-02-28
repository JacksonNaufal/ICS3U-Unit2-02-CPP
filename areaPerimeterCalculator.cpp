// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On Feb 2022
// This is a "Hello, World!" program with proper style"



#include <iostream>

int main() {
    // this function calculates area and perimeter of a rectangle
    int Length;
    int Width;
    int area;
    int perimeter;
    // input
    std::cout << "If your rectangle has the Length of (mm): ";
    std::cin >> Length;
    std::cout << "If your rectangle has the Width of (mm): ";
    std::cin >> Width;
    // process
    area = Length*Width;
    perimeter = 2*(Length+Width);
    // output
    std::cout << "\nArea is " << area << " mm²." << std::endl;
    std::cout << "Perimeter is " << perimeter << " mm." << std::endl;
    std::cout << "\nDone." << std::endl;
}
