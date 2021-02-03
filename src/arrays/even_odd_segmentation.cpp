/*
 * Given an array of integers,
 * rearrange the array so that all even
 * numbers go before the odd numbers.
 */

#include "Array.h"
#include <iostream>

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

void segment2(int* s, int n)
{
// a bit different version from above

	int i0{0}, i1{n-1};

	if (n < 2)
		return;

	bool done {false};

	while(!done)
	{
		while(s[i0]%2 == 0){i0++;}
		while(s[i1]%2 != 0){i1--;}
		// std::cout << "i0, i1: " << i0 << " " << i1 << std::endl;
		done = i0 >= i1;
		if (!done)
			swap(s,i0,i1);
  		display(s,n);
	}
}

int main()
{
  int s[] {5,6,11,3,2,8};

  display(s,6);

  segment2(s,6);

}
