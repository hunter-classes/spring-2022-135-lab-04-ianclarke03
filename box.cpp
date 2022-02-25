#include <iostream>
#include <string>


std::string box(int width, int height)
{
  for (int h = 0; h < height; h++)
{
    for (int w= 0; w < width; w++)
  {
    std::cout << "*";
  }
  std::cout << "\n";
}
}
