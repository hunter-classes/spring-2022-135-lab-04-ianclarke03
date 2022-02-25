#include <iostream>
#include <string>


std::string checkerboard (int width, int height)
{
  for (int h = 0; h < height; h++)
{
  if (h % 2 == 0)
  {
    for (int w= 0; w < width; w = w + 2)
  {
    std::cout << "* ";
  }
  std::cout << std::endl;
  }

  else if (h % 2 != 0)
  {
    for (int w= 0; w < width-1; w = w + 2)
  {
    std::cout << " *";
  }
  std::cout << "\n";
  }
  }
}

