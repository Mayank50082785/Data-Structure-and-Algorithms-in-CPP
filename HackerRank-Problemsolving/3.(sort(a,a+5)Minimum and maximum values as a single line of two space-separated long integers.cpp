Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.
  #include<bits/stdc++.h>
using namespace std;
//------------------------------------------------------------//
int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long a[5];
    long long sum = 0;
    for(int i = 0; i < 5; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a+5); //Get to know about Shot fuction//
    cout << sum - a[4] << " " << sum - a[0] << endl;
    return 0;
}
