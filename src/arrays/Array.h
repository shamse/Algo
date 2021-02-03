#include <iostream>

template<typename T>
void swap(T* s, int i, int j)
{
    auto tmp{s[i]};
    s[i] = s[j];
    s[j] = tmp;
}

template<typename T>
void display(T* s, int n)
{
    for (int i = 0; i < n; i++)
        std::cout << s[i] << " ";
    std::cout << std::endl;
}