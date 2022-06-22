#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x, y, x1, y1;
	    cin>>x>>y;
	    
	    x1 = ((x - 1) / 10) + 1;
	    y1 = ((y - 1) / 10) + 1;
	    
	    cout<<abs(x1 - y1)<<"\n";
	}
	return 0;
}
