#include <iostream>
#include <string>

std::string lower(int side)
{
  char arr[side];

for (int x = 0; x < side; x++)
{
  arr[x] = '*';
}

std::cout << arr[0] << "\n";

for (int i = 1; i < side; i++)
  {
    int point = 0;
    while (point <= i)
    {
      std::cout << arr[i];
      point++;
    }
    std::cout << "\n";
  }
}

int main()
{
  std::cout << lower(8);

  return 0;
}
