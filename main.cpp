#include <cmath>
#include <cstdlib>
#include <iostream>
#include <print>
#include <string>

using std::string, std::println, std::print;

double calculatePositiveX(double a, double b, double c)
{
     double diskrimante = b * b - 4 * a * c;
     if(diskrimante < 0) {std::println("Keine reele Lösung!"); return 0;}
     double x1 = (-b + std::sqrt(diskrimante)) / (2 * a);
     return x1;
}

double calculateNegativeX(double a, double b, double c)
{
     double diskrimante = b * b - 4 * a * c;
     if(diskrimante < 0) {std::println("Keine reele Lösung!"); return 0;}
     double x2 = (-b - std::sqrt(diskrimante)) / (2 * a);
     return x2;
}

int main()
{
     string input;

     println("Die abc-Formel sieht wie folgt aus: ax^2+bx+c - Fuer einen nicht vorhanden Wert, bitte nichts eintragen!");
     print("Geben Sie ihren Wert von a ein: ");
     std::cin >> input;
     if(!std::cin)return EXIT_FAILURE;
     double a = std::stod(input);
     print("Geben Sie ihren Wert von b ein: ");
     std::cin >> input;
     if(!std::cin)return EXIT_FAILURE;
     double b = std::stod(input);
     print("Geben Sie ihren Wert von c ein: ");
     std::cin >> input;
     if(!std::cin)return EXIT_FAILURE;
     double c = std::stod(input);

     double solution1 = calculateNegativeX(a,b,c);
     double solution2 = calculatePositiveX(a,b,c);

     std::println("x1: {}", solution2);
     std::println("x2: {}", solution1);
}