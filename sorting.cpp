//1. Selection sort
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int arr[n]={5,3,2,4,6};
    int minindex;
    for(int i=0;i<n-1;i++)
    {
        minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[minindex]>arr[j])
            {
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
    cout<<"Selection Sort : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
/* 5|6,8,9,7       minindex=0, [6,8,9,7] compared w 5 , none found
   5,6|8,9,7       minindex=1,  [8,9,7] compared w 6 , none found
   5,6,8|9,7       minindex=2,  [9,7] compared w 8 , 7 is smaller, swap arr[minindex] with arr[i] , minindex came to j position
   5,6,7,9|8       minindex=3,  [8] compared w 9. 8<9 so swapped
   5,6,7,8,9 Ans
*/
//Q : Bubble Sort
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int arr[n]={5,3,2,4,6};               
    for(int i=1;i<n;i++){
        //i basically is round from 1 to 4
    for(int j=0;j<n-i;j++){
    {  if(arr[j]>arr[j+1])
            {
               swap(arr[j],arr[j+1]);
            }
    }
    }}
    cout<<"Bubble Sort : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

/*   3,5,2,4,6   i=0,j=0   i till <n i.e. 4 so j till n-i i.e. <5-0 means pehle 4 numbers me swap
     3,2,5,4,6   i=0,j=1
     3,2,4,5,6   i=0,j=2
     3,2,4,5,6   i=0,j=3
     3,2,4,5|6   i=0,j=4
     2,3,4,5,6   i=1,j=0
     2,3,4,5,6   i=1,j=1
     2,3,4,5,6   i=1,j=2    i=1 so j till <n-i(=5-1 i.e. 4) means pehle 3 numbers me swap
     2,3,4|5,6   i=1,j=3

*/
//Q : Optimal Bubble sort :
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    bool swapped=false;
    int arr[n]={5,3,2,4,6};               
    for(int i=1;i<n;i++){
        //i basically is round from 1 to 4
    for(int j=0;j<n-i;j++){
    {  if(arr[j]>arr[j+1])
            {
               swap(arr[j],arr[j+1]);
               swapped=true;
            }
    }
     if(swapped==false)
            {
                break;
            }
    }}
    cout<<"Bubble Sort : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;}
//Q : Insertion Sort 
#include <iostream>
using namespace std;

int main()
{
    int n=5;
   int arr[5]={9,7,2,3,1}; 
   int temp;
   for(int i=1;i<n;i++)
   {
       temp=arr[i];
       int j=i-1;
       for(;j>=0;j--)
       {
           if(arr[j]>temp)
           {
               arr[j+1]=arr[j];           //temp=1      9,7,2, ,3     j-- hogya, toh j+1 already empty can store temp
           }
           else{
               break;
           }
       }
       arr[j+1]=temp;
   }
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
    return 0;
}
