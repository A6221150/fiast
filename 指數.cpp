// integerPower( 3 , 4 ) = 3 * 3 * 3 * 3 ; 

#include <iostream>
using namespace std;

int integerPower( int n , int m ) ; 

int main()
{
	int exp ;
	int base ;
	
	cin >> base >> exp ;
	cout << integerPower( base , exp ) << endl;
}

int integerPower( int n , int m )
{
	int counter ;
	int total=1 ;
	
	for( counter=1 ; counter<=m ; counter++ )
	{
		total = total * n ;      
	}
	return total ;
}
