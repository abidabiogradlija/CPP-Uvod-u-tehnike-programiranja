#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int x,y;
	float f;
	cout<<"Unesite vrijednost x: ";
	cin>>x;
	cout<<"Unesite vrijednost y: ";
	cin>>y;
	
	f=(5*exp(x)) / ( abs(pow (y, -2)) );
	cout<<"Rezultat funkcije f( "<<x<<","<<y<<") je: "<<f<<endl;
	
	return 0;
}
