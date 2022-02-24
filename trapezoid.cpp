#include <iostream>
#include <string>


std::string trapezoid (int width, int height)
{
std::string stars[width];
std::string spaces = "";

for (int x = 0; x < width; x++)
{
  stars[x] = "*";
  }

int line = 1;

while (line <= height)
  {
    std::cout << spaces << stars << "\n";
    stars = stars - "**";
    spaces = spaces + ' ';
    line++;
  }
}


int main ()
{
  std::cout << trapezoid (12, 5);
  
  return 0;
}

