#include <iostream>
#include <string>

std::string trapezoid( int width, int height)
{
  int spaces = 0;
  int stars = width;
  std::string trap = "";
 

  for (int h = 0; h < height; h++)
    {
      for (int a = 0; a < spaces; a++)
        {
          trap += " ";
        }
      for (int b = 0; b < stars; b++)
        {
          trap += "*";
        }
      for (int c = 0; c < spaces; c++)
        {
          trap += " ";
        }
      if(width - h * 2 <= 0)
        {
      return "Impossible shape!\n";
        }
      spaces += 1;
      stars -= 2;
      trap += "\n";
    }
  return trap;
}
