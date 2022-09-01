#include<bits/stdc++.h>
#define int long long
using namespace std;

void IOS()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

int32_t main()
{
	IOS();
    int n, m;
	cin >> n >> m;
	int ct = 0;
	for (int i = 1; i <= n; i++)
	{
		int j;
		for (j = 1; j <= m; j++)
		{
			if ((i + j) % 5 == 0)
			{
				ct++;
				break;
			}
		}
		ct += ((m - j) / 5);
	}
	cout << ct;
	cout << endl;
	return 0;
}

