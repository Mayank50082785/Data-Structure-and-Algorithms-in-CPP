  
IF array is a[5]={10,20,30,40,50}
output:
L---->50
S---->10

_________________________-----------------------------




#include <iostream>
  #include<climits>
  using namespace std;
  int main(){
   int n,key;
   cin>>n;

   int a[1000]; //This is not recommanded as it will require more memory in stack so it just for undestanding//

   for(int i=0; i<n; i++) //Traversing 1
   {
    cin>>a[i];
   }
   //algorithm to find the largest and smallest number//
   int largest = INT_MIN; //Minimum value for an object of type int
   int smallest= INT_MAX;//Maximum value for an object of type int

   for(int i=0;i<n;i++) //Traversing 2
   {
   //  if(a[i]>largest){     //Another simple method is 
                             largest= max(largest,a[i]);
                             smallest=min(smallest,a[i]);
   //   largest=a[i];
   //  }
   //  if(a[i]<smallest){
   //   smallest=a[i];
   //  }
   }
   //Basically trick is that to find the largest compare the array value to sub as choota value = - infinity 
   //And to find smallest value in array compare the array value to sub sa bda value = + infinity;//

   cout<<"Largest is :"<<largest<<"\n";
   cout<<"smallest is :"<<smallest;

   return 0;

  }
