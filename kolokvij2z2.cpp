#include<iostream>
#include<vector>
using namespace std;
void unosVektora(vector<int>&array) {
	int elem=array.size();
	cout<<"1. clan: ";
	cin>>array[0];
	/*do{
		cout<<"2. clan: ";
	 	cin>>array[1];
	} while((array[0]%5==0 && array[1]%5==0) || (array[0]%5!=0 && array[1]%5!=0));
	*/
	for(int i=1; i<elem; i++) {
		do{
			cout<<i+1<<".clan: ";
			cin>>array[i];
		}while(array[i-1]%5==0 && array[i]%5==0 || array[i-1]%5!=0 && array[i]%5!=0);
		
	}
}
void ispisVektora(vector<int>array) {
	int elem=array.size();
	cout<<"<";
	for (int i=0; i<elem-1; i++) {
		cout<<array[i]<<", ";
	}
	cout<<array[elem-1]<<">"<<endl;
}
int odrediSumu(vector<int>array) {
	int sumaDjeljivih5=0;
	int elem=array.size();
	for(int i=0; i<elem; i++) {
		if(array[i]%5==0) sumaDjeljivih5+=array[i];
	}
	return sumaDjeljivih5;
}
bool postoji(vector<int>array, int broj) {
	int elem=array.size();
	int br=0;
	for(int i=0; i<elem; i++) {
		if(array[i]==broj) br++;
	}
	if(br==0) return 1;
	else return 0;
}
double uvecajZaAr(vector<int>array, int &varijabla) {
	int elem=array.size();
	double arSr, suma1=0;
	for(int i=0; i<elem; i++) {
		suma1+=array[i];
	}
	arSr=suma1/elem;
	varijabla+=arSr;
	return varijabla;
}
//----------------------------------------
int main() {
	int n,broj,broj2;
	cout<<"Unesi dimenziju vektora: ";
	cin>>n;
	vector<int>vektor;
	vektor.resize(n);
	unosVektora(vektor);
	ispisVektora(vektor);
	int sumaDjeljivihSa5=odrediSumu(vektor);
	
	cout<<"\nSuma brojeva djeljivih sa 5 je "<<sumaDjeljivihSa5<<endl;
	cout<<"Unesi bilo koji cijeli broj da provjerimo jel se nalazi u vektoru: ";
	cin>>broj;
	if (postoji(vektor, broj) ==1) cout<<"Broj ne postoji u vektoru!"<<endl;
	else if(postoji(vektor, broj) ==0) cout<<"Broj postoji u vektoru!"<<endl;
	cout<<"\nUnesi bilo koji drugi cijeli broj da provjerimo jel se nalazi u vektoru: ";
	cin>>broj2;
	if (postoji(vektor, broj2) ==1) cout<<"Broj ne postoji u vektoru!"<<endl;
	else if(postoji(vektor, broj2) ==0) cout<<"Broj postoji u vektoru!"<<endl;
	//--------------
	int varijabla;
	cout<<"Sada cemo proslijediti proizvoznju varijablu, ali unesi : ";
	cin>>varijabla;
	cout<<"Ovo je sta ispisuje funkcija: "<<uvecajZaAr(vektor,varijabla)<<endl;
	cout<<"Ovo je iz main-a nasa nova varijabla: "<<varijabla;
	
	return 0;
}
