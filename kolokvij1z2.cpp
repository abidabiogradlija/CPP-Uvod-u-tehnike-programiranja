#include<iostream>
using namespace std;
int main() {
	int a,b,min,max;
	do {
		cout<<"Unesi prvi cetverocifren broj: ";
		cin>>a;		
	}while(a<1000 || a>9999);
	
	do {
		cout<<"Unesi drugi cetverocifren broj: ";
		cin>>b;		
	}while(b<1000 || b>9999);
	
	if (a>b) {
		max=a;
		min=b;
	} 
	else if (b>a) {
		max=b;
		min=a;
	}
	else cout<<"Unijeli ste dva ista pokusajte ponovo."<<endl; //2345 /10 234
	
	for (int i=min+1; i<max; i++){
		int suma=0;
		suma=i/1000+ (i/100)%10+ (i/10)%10 + i%10;
		if(suma%7==0 && suma%4==0 ) cout<<i<<endl;
	}
	
	
	
	return 0;
}
