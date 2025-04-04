#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int sum = 0;
		int arr[2 * n];
		int min, max;
		for (int i = 0; i < 2 * n; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < 2 * n; i++)
		{
			sum += arr[i];
		}
		if (sum < 2 * n)
		{
			if (sum % 2 == 0 && sum <= n)
			{
				min = 0;
				max = sum;
			}
			else if (sum % 2 == 0 && sum >= n)
			{
				min = 0;
				max = 2 * n - sum;
			}
			else if (sum % 2 != 0 && sum <= n)
			{
				min = 1;
				max = sum;
			}
			else if (sum % 2 != 0 && sum >= n)
			{
				min = 1;
				max = 2 * n - sum;
			}
		}
		else
		{
			min = 0;
			max = 0;
		}
		cout << min << " " << max << endl;
	}
	return 0;
}