#include <iostream>
#include <string>

std::string cross(int size)
{
    std::string line = "";
    int height = size;
    int width = size;

    for(int i =0; i < height; i++)
    {
      for(int j=0; j < width; j++)
        {
            if(i == j || j == size -1 - i)
                line += "*";
            else
                line += " ";
        }
        line+= "\n";
    }
    return line;
}
