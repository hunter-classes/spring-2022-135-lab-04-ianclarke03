#include <iostream>


std::string box (int width, int height)
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

int main()
{
  std::cout << box (7,4) << std::endl;

  return 0;
}