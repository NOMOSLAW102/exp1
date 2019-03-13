#include <iostream>
#include <conio.h>
using namespace std;
int main()
	

{
	
	double box, sideline, premium, genad; 
	


	
	cout << " Input number of tickets sold for box and press enter "<<endl;
	cin >>box;
	cout << " Input number of tickets sold for sideline and press enter"<<endl;
	cin >>sideline;
	cout << " Input number of tickets sold for premium and press enter"<<endl;
	cin >>premium;
	cout << " Input number of tickets sold for genad and press enter"<<endl;
	cin >>genad;
	cout << " Ticket Price     Tickets Sold     Total Sales Amount"<<endl;
	cout << " 250 " <<"             "<<box<<"             "<< box * 250.00<< endl;
	cout << " 100 " <<"             "<<sideline<<"             "<< sideline * 100.00<< endl;
	cout << " 50 " <<"              "<<premium<<"             "<< premium * 50.00<< endl;
	cout << " 25 " <<"              "<<genad<<"             "<< genad * 25.00<< endl;
	
	cout << "Total sales amount for all tickets: " << box*250 + sideline*100 + premium * 50 + genad*25 <<endl;  
	_getch();
	return 0;
}