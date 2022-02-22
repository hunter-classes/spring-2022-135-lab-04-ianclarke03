#include <iostream>


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
    for (int w= 0; w < width; w = w + 2)
  {
    std::cout << " *";
  }
  std::cout << "\n";
  }
  }
}

int main()
{
  std::cout << checkerboard (11,6) << std::endl;
  //std::cout << checkerboard (8,7) << std::endl;
  //std::cout << checkerboard (20,20) << std::endl;

  return 0;
}

