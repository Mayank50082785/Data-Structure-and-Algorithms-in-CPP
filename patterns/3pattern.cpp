*****
****
***
**
*
[Finished in 3.1s]
-----------------------------------
#include <iostream>
using namespace std;
int main()
{
	int N=5;
	for(int i=1; i<=5; i++) //Row (outer)
	{
		for(int j=i;j<=5;j++) //column (inner)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
