#include<iostream>
using namespace std;
/*
34 12 57 88 12 17 23
11 59 23 91 27 22 44
15 20 67 11 44 55 12
24 11 54 32 15 65 76 
98 43 32 12 57 78 23
12 23 34 45 56 37 78
98 87 76 65 54 43 32
11 22 33 44 55 66 55
54 45 36 63 72 24 31

*/
int main() {
	int n,m;
	cout<<"Unesite velicinu matrice: ";
	cin>>n>>m;
	int suma=0;
	int matrica[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++) {
			cin>>matrica[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++) {
			if( (j+1)%2==0 && (i+1)%2!=0 ) suma+=matrica[i][j];
		}
	}
	cout<<"a) suma brojeva na parnim kolonama i neparnim redovima: "<<suma<<endl;
	cout<<"b) ispis brojeva djeljivih sa 7 na sporednoj dijagonali: ";
	int br=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++) {
			if(i+j==m-1) {
				if (matrica[i][j]%7==0) {
					cout<<matrica[i][j]<<" ";
					br++;
				}
			}
		}
	}
	if(br==0) cout<<"\nNema nijedan broj djeljiv sa 7 na sporednoj dijagonali!"<<endl;
	cout<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++) {
			if(i==j || i+j==m-1) cout<<matrica[i][j]<<" ";
			else cout<<"   ";
		}
		cout<<endl;
	}
	
	return 0;
}
