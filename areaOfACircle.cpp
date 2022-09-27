// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in September 2022
// A program that finds the area and perimeter for a circle using user input

#include <cmath>
#include <iostream>

int radiusOfCircle;
double areaOfCircle;
double perimeterOfCircle;

int main() {
    std::cout << "Enter the radius of the circle (mm): ";
    std::cin >> radiusOfCircle;
    std::cout << std::endl;
    areaOfCircle = M_PI * pow(radiusOfCircle, 2);
    perimeterOfCircle = 2 * M_PI * radiusOfCircle;
    std::cout << std::endl;
    std::cout << "This circle's area is " << areaOfCircle;
    std::cout << "mm²" << std::endl;
    std::cout << "This circle's perimeter is ";
    std::cout << perimeterOfCircle << "mm" << std::endl;

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
