#include <iostream>

template<typename T>
void print( T min, T max)
{
    std::cout << min << " ";
    min++;
    if (min <= max)
        print(min,max);
}

int main() {
    print(0,100);
}