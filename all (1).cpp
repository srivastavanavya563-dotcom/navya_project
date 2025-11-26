#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,rev=0,r;
	cin >> n;
	m=n;
	while(n>0)
	{
	    r=n%10;
	    rev=rev*10+r;
	    n=n/10;
	}
	if(rev == m)
	{
	    cout << "PN";
	}
	else
	{
	    cout << "Not PN";
	}
	}

