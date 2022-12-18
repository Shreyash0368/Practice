#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
	int n;
	std :: cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		std :: cin >> arr[i];
	}

	const int N = 1e6 + 2;
	int indx[N];
	for (int i = 0; i < N; i++)
	{
		indx[i] = -1;
	}
	
	int minIndex = INT_MAX;

	for (int i = 0; i < n; i++)
	{
		if (indx[arr[i]] == -1) {
			indx[arr[i]] = i;
		}
		else {
			minIndex = std :: min(indx[arr[i]], minIndex);
		}
	}
	
	if(minIndex != INT_MAX)
		std :: cout << minIndex + 1 << "\n";
	else 
		std :: cout << -1 << "\n";

	// std :: cout << INT_MAX + 1 << "\n";

	

	return 0;
}
