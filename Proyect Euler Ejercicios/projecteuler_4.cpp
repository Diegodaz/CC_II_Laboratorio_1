#include <iostream>
using namespace std;

int main(){
	int palin = 0, a = 0,b = 0, max = 0;
	for (int i = 999; i > 99; i--){
		for (int j = 999; j > 99; j--){
			palin = i * j;
			a=palin/1000;
			b=((palin%10)*100)+((palin%100-palin%10))+((palin%1000)/100);
			if (a == b){
				if(max < palin){
					max = palin;
				}	
			}	
		}
	}
	cout<<"El palindromo mas grande formado por el producto de dos n�meros de 3 cifras es : "<<max;
	return 0;
}

