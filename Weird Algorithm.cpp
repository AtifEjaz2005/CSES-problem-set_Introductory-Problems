#include <iostream>
using namespace std ;

int main (){
	
	int number ;
	cout<<"Enter a number : ";
	cin>>number;
	
	cout<<number<<"---->";
	
	while (number != 1 ){	
		if (number % 2 == 0 ){
			number = number / 2 ;
			cout<<number<<"---->";
		}else{
			number =  ( number * 3 ) + 1 ;
			cout<<number<<" ----> ";
		}
	}
	return 0 ;
}
