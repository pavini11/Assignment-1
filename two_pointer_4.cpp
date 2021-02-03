#include<bits/stdc++.h>
using namespace std;
//#define int (long long int)

int main()
{
	long long int n, b;
	cin >> n;
	vector<long long int>a;
	for (long long int i = 0; i < n; i++)
	{
		cin >> b;
		a.push_back(b);
	}

	if (n == 1)
	{
		cout << 0;
		return 0;
	}
	long long int suml = a[0], sumr = a[n - 1], sum = 0, i = 1, j = n - 2;
	while (i < j)
	{
		if (suml < sumr)
		{
			suml += a[i++];
			/*if(suml==sumr)
			    j--;*/
		}
		else if (suml > sumr)
		{
			sumr += a[j--];
			/*if(suml==sumr)
			   i++;*/
		}
		else
		{
			sum = max(sum, suml);
			suml += a[i++];
			sumr += a[j--];
		}
	}
	if (suml == sumr)
		sum = max(sum, suml);

	if (i == j && suml < sumr)
		suml += a[i];
	else if (i == j && sumr < suml)
		sumr += a[j];

	if (suml == sumr)
		sum = max(sum, suml);
	cout << sum;

	return 0;
}