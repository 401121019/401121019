#include<iostream>
using namespace std;

class math{
	public:
		string isPrime(int n)
		{
			int d=0,i=2;
			while (i<n)
			{
				if(n%i==0)
					d++;
				i++;
			}
			
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