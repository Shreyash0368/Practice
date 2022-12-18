#include <bits/stdc++.h>

int max(int a, int b) {
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
	
}

int main() {

	int n;
	std :: cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		std :: cin >> arr[i];
	}

	int ans = 2;
	int curr = 2;
	int prevDiff = arr[1] - arr[0];

	for (int i = 2; i < n; i++)
	{
		if (prevDiff == (arr[i] - arr[i - 1])) {
			curr++;
		}
		else {
			// ans = max(ans, curr);	
			curr = 2;
			prevDiff = arr[i] - arr[i - 1];
		}
		ans = max(ans, curr);
	}

	std :: cout << ans << "\n";
	

	

	return 0;
}