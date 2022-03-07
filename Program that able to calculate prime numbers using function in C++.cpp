/* Program that able to calculate prime numbers.
***********************************************/

#include <iostream>

using namespace std;


void primenumbers(int limit)
{
	int counter=0;
	for(int i=1;i<=limit;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				counter++;
			}
		}
		if(counter==2)
		{
			cout<<i<<" is a prime number.\n";
		}
		counter=0;
	}
}

int main () {
    
    int limit;
	    
    cout<<"Until which number you want to see prime numbers: ";
    cin>>limit;
    
    while(limit<2)
    {
    	cout<<"- Please enter a positive integer number that bigger than 1. -\n";
    	cout<<"Until which number you want to see prime numbers: ";
    	cin>>limit;
	}
	primenumbers(limit);
	
    return 0;
}
