#include <iostream>
#include <conio.h>
using namespace std;
int main()
	

{
	
	double mass, density; 
	

	
	cout << " Input value of mass in grams and press enter"<<endl;
	cin >>mass;
	cout << " Input value of density in grams per cubic centimeter and press enter"<<endl;
	cin >>density;
	
	cout << " Volume: "<< mass/density * 1/4 <<endl;
	
	
	_getch();
	return 0;
}