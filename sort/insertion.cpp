#include <iostream>

struct S
{
    int i;
    float f;
};

bool operator < (const S& s1, const S& s2){return s1.f < s2.f;}

template <typename T>
void swap(T* a, int i, int j)
{
    T t = a[i];
    a[i] = a[j];
    a[j] = t;
}

// inserts a[n-1] into sorted partition a[0:n-2]
template <typename T>
void insert(T* a, size_t n)
{
    for (int i = 0; i < n-1; i++)
    {
        // std::cout << a[n-1] << ' ' << a[i] << std::endl;
        if (a[n-1] < a[i])
        {
            swap(a, i, n-1);
        }
    }
}

template <typename T>
void display(T* a, size_t n)
{
    for (int i = 0; i < n; i++)
        std::cout << a[i] << ' ';
    std::cout << std::endl;
}

template <>
void display(S* s, size_t n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << s[i].f << ' ';
    }
    std::cout << std::endl;    
}

template <typename T>
void sort(T* a, size_t n)
{
    int len = 1;

    while (len < n)
    {
        insert(a, len+1); // insert next element
        display(a, n);
        len++;
    }
}

int main()
{
    const int n = 13;
    char a[] = {'i','n','s','e','r','t','i','o','n','s','o','r','t'};

    sort(a,n);

    int b[] = {5,4,12,-1,0,-2,9};
    sort(b, 7);

    S s[] = {1,1.2,42,-2.0};
    sort(s,2);
}