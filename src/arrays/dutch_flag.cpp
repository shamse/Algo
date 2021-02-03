#include "Array.h"

template <typename T>
void dutch_flag(T* a, int n, int ip)
{
	/*
	 a : input array
	 n : size of a
	 ip : pivot index
	 */
	display(a,n);

	int i0{-1}, i1{n}, i{0};
	auto pv{a[ip]};

	while (i < i1)
	{
		if (a[i] < pv)
			swap(a, i, ++i0);
		else if (a[i] > pv)
			swap(a, i, --i1);

		i++;
		display(a,n);
	}
}

int main()
{
	int a[] {0,1,2,0,2,1,1};

	dutch_flag(a, 7, 2);
	dutch_flag(a, 7, 1);

}
