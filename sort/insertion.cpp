#include <iostream>

void swap(char* a, char i, char j)
{
    char t = a[i];
    a[i] = a[j];
    a[j] = t;
}

void insert(char* a, int n)
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

void display(char* a, int n)
{
    for (int i = 0; i < n; i++)
        std::cout << a[i] << ' ';
    std::cout << std::endl;
}

void sort(char* a, int n)
{
    int len = 2;

    while (len <= n)
    {
        insert(a, len);
        display(a, n);
        len++;
    }
}

int main()
{
    const int n = 13;
    char a[n] = {'i','n','s','e','r','t','i','o','n','s','o','r','t'};

    sort(a,n);

}