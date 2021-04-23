#include <iostream >
#include <stdlib.h >
using namespace std ;
int main()
{
	int n=4000000,x=0,y=1,z=1,s=0;
	for (int i=1;z<n;i++)
	{
		z=y+x;
		cout<<z<<endl;
		if (z%2==0){
			s=s+z;
		}	
		x=y;
		y=z;
	}
	cout<<"la suma :"<<s<<endl;
	return 0;
}
