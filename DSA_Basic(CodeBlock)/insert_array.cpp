#include <iostream>
#include <stdlib.h>
#include<bits/stdc++.h>
using namespace std;
//Elemts We keep in structure to use in whole programme
struct Array
 {
  int A[10];
  int size;
  int length;
 };
//THis function is used to display Append (10,5)
 void Display(struct Array arr){
  int i;
  cout<<"\nElemnts are\n"<<endl;
  for(i=0;i<arr.length;i++)
  cout<<arr.A[i]<<", ";
 }
//Main Append Logic 
 void Append(struct Array *arr,int x)
 {
  if(arr->length<arr->size)
  arr->A[arr->length++]=x;
 }
//Insert () Main Logic
void Insert (struct Array *arr,int index,int x)
{
 int i;
 if(index>=0 && index<=arr->length){
  for(i=arr->length;i>index;i--)
  arr->A[i]=arr->A[i-1];
  arr->A[index]=x;
  arr->length++;
 }

}
//THE main() is used to execute all function struct(),Display(),Append()
  int main(){
  struct Array arr={{2,3,4,5,6},10,5};
  Insert(&arr,2,10);
  Display(arr);
  return 0;
 }
