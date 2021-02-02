/*
 * Given an array of integers,
 * rearrange the array so that all even
 * numbers go before the odd numbers.
 */

#include <iostream>

void display(int* s, int n)
{
 	for (int i = 0; i < n; i++)
		std::cout << s[i] << " ";
	std::cout << std::endl;
}

void swap(int* s, int i, int j)
{
	int tmp {s[j]};
	s[j] = s[i];
	s[i] = tmp;
}

void segment(int* s, int n)
{
  int i0{0}, i1{0};

  bool done{false};

  while (!done)
  {
	while(s[i0]%2 == 0){i0++;}
	while(s[i1]%2 != 0){i1++;}

	swap(s,i0,i1);

	done = i0 == n-1 || i1 == n-1;
  }
}

int main()
{
  int s[] {5,6,11,3,2,8};

  display(s,6);

  segment(s,6);

  display(s,6);

}
