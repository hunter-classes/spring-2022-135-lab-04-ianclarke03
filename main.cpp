#include <iostream>
#include <string>
#include "box.h"
#include "cross.h"
#include "lower.h"
#include "upper.h"
#include "trapezoid.h"
#include "checkerboard.h"
#include "checkerboard3x3.h"


int main()
{
//a
    std::string result;
    result = box(7,4);
    std::cout << "box(7,4):\n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator 

//b
    result = checkerboard(11,6);
    std::cout << "checkboard(11,6): \n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator 

    //c

    result = cross(8);
    std::cout << "cross(8): \n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator 
//d
    result = lower(6);
    std::cout << "lower(6): \n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator 
//e
    result = upper(5);
    std::cout << "upper(5): \n";
    std::cout << result;
    std::cout << "\n------------------\n";
//f
    result = trapezoid(12,5);
    std::cout << "trapezoid(12,5): \n";
    std::cout << result;
    std::cout << "\n------------------\n";

    result = trapezoid(12,7);
    std::cout << "trapezoid(12,7): \n";
    std::cout << result;
    std::cout << "\n------------------\n";

  //g
    result = checkerboard3(16,11);
    std::cout << "checkerboard3(16,11): \n";
    std::cout << result;
    std::cout << "\n------------------\n";

    return 0;
}