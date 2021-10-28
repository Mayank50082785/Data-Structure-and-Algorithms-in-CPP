6.       *
        **
       ***
      ****
     *****
-------------------------
#include <iostream>
using namespace std;
int main(){
 int i,j;
 for(int i=1; i<=5; i++) //outer loop
 {
  for(int j=1; j<=5; j++) //inner loop
  {
   if(j>=6-i && j<=5) // concept not understood // 
   {
    cout<<("*");
   }
    else
    {
     printf(" "); //
     }
  }
  cout<<('\n');
 }
}
