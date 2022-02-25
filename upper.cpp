#include <iostream>
#include <string>

std::string upper(int side)
{
  char arr[side];

for (int x = 0; x < side; x++)
{
  arr[x] = '*';
}

std::string spaces = "";

for (int i = side; i >= 1; i--)
  {
    int point = 0;
    std::cout << spaces;
    spaces += " ";
    while (point <= i)
    {
      std::cout << arr[i];
      point++;
    }
    std::cout << "\n";
  }
  std::cout << spaces << arr[0] << "\n";
}
