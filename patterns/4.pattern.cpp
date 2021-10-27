1
12
123
1234
12345
[Finished in 2.2s]
---------------------------------------
#include <iostream>
using namespace std;
int main()
{
	int N=5;
	for(int i=1; i<=5; i++) //Row (outer)
	{
		for(int j=1;j<=i;j++) //column (inner)
		{
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}
