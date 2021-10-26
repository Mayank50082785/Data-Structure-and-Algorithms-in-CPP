#include<bits/stdc++.h>
using namespace std;
int main()
{
    //init of array
    int a[10]={0};

    //size of
    cout<<sizeof(a) <<endl;
    //How many elements are present in an array //
    
    //This lines are very important when we want to half the size of the array
    int n = sizeof(a) / sizeof(int);
    cout<<n<<endl; 


    //input all the elements from the user
    for(int i=0 ; i<5 ; i++)
    cin>>a[i];


    //update single index(Value) of the array
    a[8]=113;
    
    //print all the first 10 elements
    for(int i=1; i<10; i++){
        cout<< a[i] << " ,";
    }
return 0;
}
