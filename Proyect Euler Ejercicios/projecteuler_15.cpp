
#include <iostream >
#include <stdlib.h >
using namespace std ;

int main(){
	int f1=1,f2=1;
	long long int s;
	for(int i=1 ;i<=40;i++){
		f1=f1*i;
	}
	for(int i=1 ;i<=20;i++){
		f2=f2*i;
	
	}
	s=(f1)/(f2*f2);
	
	cout<<" rutas  de una cuadricula de 20 × 20	: "<<s<<endl;
	system("pause");
	return 0;
}



