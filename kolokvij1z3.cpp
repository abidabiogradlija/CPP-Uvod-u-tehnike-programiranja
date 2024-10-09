#include<iostream> // [12,123] %112 +12
#include<ctime>
#include<stdlib.h>
using namespace std;
int main() {
	srand(time(NULL));
	rand();
	int i=1,x,p=1;
	
	while(i<=3) {
		x=rand()%112+12;
		if(x%4==0) {
			cout<<"Generisan broj (djeljiv sa 4): "<<x<<endl;
			p=p*x;
			i++;
		}
		
	}
	
	cout<<"Proizvod djeljivih brojeva s 4: "<<p<<endl;
	
	return 0;
}
