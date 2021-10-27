*****
*****
*****
*****
*****
-------------------------
#include <iostream>
using namespace std;
int main()
{
	for(int i=1; i<=5; i++) //Row (outer)
	{
		for(int j=1;j<=5;j++) //column (inner)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
