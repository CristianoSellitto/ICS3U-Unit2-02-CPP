// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in September 2022
// A program that finds the area and perimeter for a rectangle using user input

#include <cmath>
#include <iostream>

int lengthOfRectangle;
int widthOfRectangle;
int areaOfRectangle;
int perimeterOfRectangle;

int main() {
    std::cout << "Enter the length of the rectangle (mm): ";
    std::cin >> lengthOfRectangle;
    std::cout << "Enter the width of the rectangle (mm): ";
    std::cin >> widthOfRectangle;
    std::cout << std::endl;
    areaOfRectangle = lengthOfRectangle * widthOfRectangle;
    perimeterOfRectangle = 2 * (lengthOfRectangle + widthOfRectangle);
    std::cout << std::endl;
    std::cout << "This rectangle's area is " << areaOfRectangle;
    std::cout << "mm²" << std::endl;
    std::cout << "This rectangle's perimeter is ";
    std::cout << perimeterOfRectangle << "mm" << std::endl;

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
