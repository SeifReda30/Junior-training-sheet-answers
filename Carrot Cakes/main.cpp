#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

int n, t, k, d, timer, cakes, loops;
int main()
{
	scanf("%d %d %d %d", &n, &t, &k, &d);
	while(cakes < n)
	{
		timer += t;
		cakes += k;
		if(timer > d)
			++loops; // if the cakes are backed in a time which is less or equal to time needed to make another oven so there is no need for that
	}
	if(loops > 1)
		puts("YES");
	else
		puts("NO");
	return 0;
}
