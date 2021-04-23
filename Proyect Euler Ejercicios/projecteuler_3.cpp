#include <iostream >
using namespace std ;
int main(){
	long long int n = 600851475143;
	int mayor=0;
	cout<<"valor a descomponer : "<<n<<endl;
	for(int i=2;n>1;i++){
		while (n%i==0){
			n=n/i;
			if(n%i!=0){
				cout<<i<<endl;
			}
		}
		if(mayor<i){
			mayor=i;
		}
	}
	cout<<"el mayor valor primo es : "<<mayor;
	return 0;
}
