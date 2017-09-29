		#include <iostream>
		#include <bits/stdc++.h>
		
		using namespace std;
		
		vector<int> factors(int n) {
		vector<int> f;
		for (int x = 2; x*x <= n; x++) {
		while (n%x == 0) {
		f.push_back(x);
		n /= x;
			}
		}
		if (n > 1) f.push_back(n);
		return f;
		}
		
		int main()
		{
		int x = 0;
		x |= (1<<1);
		x |= (1<<3);
		x |= (1<<4);
		x |= (1<<8);
		cout << __builtin_popcount(x) << "\n"; // 4
		
		for (int i = 0; i < 32; i++) {
		if (x&(1<<i)) cout << i << " ";
		}
		// output:
		x=25;
		int b = 0;
		do {
		// process subset b
		cout<<b<<endl;
		} while (b=(b-x)&x);
		
		cout<<endl<<"prime factorization"<<endl;
		
		vector<int> a=factors(91);
		for(int i=0;i<a.size();i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"complex---"<<endl;
		complex<long long> c;
		c={4,2};
		cout<<c.real()<<endl;
		cout<<c.imag()<<endl;			
		cout<<endl;
		return 0;
	}
