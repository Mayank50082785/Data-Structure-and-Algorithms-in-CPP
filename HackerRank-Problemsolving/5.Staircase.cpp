Pattern

I-5
   #
  ##
 ###
####
#####
  ______________________________________
  Code :

Take help of different website ( No done by me)


#include <bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout << " ";
        }
         int d = i;
         for(int j =1 ; j<=i; j++)
         {
             cout << "#";
             d--;
         }
         cout << endl ;
    }
}
