*
**
***
****
*****
[Finished in 4.2s]
--------------------------------------
#include <iostream>
using namespace std;
int main()
{
	for(int i=1; i<=5; i++) //Row (outer)
	{
		for(int j=1;j<=i;j++) //column (inner)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
