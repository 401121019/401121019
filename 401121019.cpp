#include<iostream>
using namespace std;

class math{
	public:
		string isPrime(int n)
		{
			int d=0;
			for(int i=2 ; i<n ; i++)
				if(n%i==0)
					d++;
			if(d==0)
				return "true";
			else
				return "false";
		}
};

int main()
{
	math a1;
	int n;
	
	cout<<"Enter n:";
	cin>>n;
	cout<<a1.isPrime(n);
	
	return 0;
}