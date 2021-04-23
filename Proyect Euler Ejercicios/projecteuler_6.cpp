#include <iostream >
using namespace std ;
int main(){
	int n=100,sc=0,cs=0;
	sc=(n*(n+1)*(2*n+1))/6;
	cs=(n*(n+1))/2;
	cs=cs*cs;
	cout<<"suma de los cuadrados de los primeros cien números naturales : "<<sc<<endl;
	cout<<" cuadrado de la suma de los primeros cien números naturales : "<<cs<<endl;
	cout<<" la diferencia entre la suma de los cuadrados de los primeros cien números naturales y el cuadrado de la suma :"<<cs-sc <<endl;
	return 0;
}
