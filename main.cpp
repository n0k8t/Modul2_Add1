#include <iostream>

template<size_t N>
void print(size_t min = N)
{
    std::cout << min << " ";
    min++;

    if (min <= 100)
        print<N>(min);
}


int main()
{
    print<0>();
}
