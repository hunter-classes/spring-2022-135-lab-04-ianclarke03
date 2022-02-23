#include <iostream>
#include <string>

std::string lower(int side)
{
  char arr[side];

for (int x = 0; x < side; x++)
{
  arr[x] = '*';
}



for (int i = side; i >= 1; i--)
  {
    int point = 0;
    while (point <= i)
    {
      std::cout << arr[i];
      point++;
    }
    std::cout << "\n";
  }
  std::cout << arr[0] << "\n";
}

int main()
{
  std::cout << lower(6);

  return 0;
}
