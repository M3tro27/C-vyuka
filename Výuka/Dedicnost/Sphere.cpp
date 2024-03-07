//
// Created by Jakub Vágner on 07.03.2024.
//

#include "Sphere.hpp"

Sphere::Sphere() {
    std::cout << "Vykresluji kouli: " << std::endl;
}

Sphere::Sphere(int r) : Circle(r) {

}

double Sphere::surface() {
    return 4 * M_PI * pow(getR(), 2);
}

double Sphere::volume() {
    return 4 * M_PI * pow(getR(), 3) / 3;
}

void Sphere::print() {
    std::cout << "Polomer: " << getR() << std::endl;
}
