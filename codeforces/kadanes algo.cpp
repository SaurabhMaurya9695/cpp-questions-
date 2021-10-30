
#include<iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int a[], int size)
{
	int maxtill = INT_MIN,  c = 0;

	for (int i = 0; i < size; i++)
	{
		c = c + a[i];
		if (maxtill < c)   // if c is greator then update maxtill = c ;
			maxtill = c;

		if (c < 0)
			c = 0;
	}
	return maxtill;
}

int main()
{
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int n = sizeof(a)/sizeof(a[0]);
	int max_sum = maxSubArraySum(a, n);
	cout << "Maximum contiguous sum is " << max_sum;
	return 0;
}
