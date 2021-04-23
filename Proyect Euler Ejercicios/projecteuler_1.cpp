#include <iostream >
using namespace std ;
int main()
{
	int s1=0,s2=0,s3=0, num = 1000;
	for(int i = 0; i < num; i++)
	{
		if(3*i < num)
			s1=s1+ 3*i;
		if(5*i <num)
			s2=s2 +5*i;
		if(15*i < num)
			s3=s3+ 15*i;		
	}
	cout << "Suma: " << s1+s2-s3 << endl;
	return 0;
}
