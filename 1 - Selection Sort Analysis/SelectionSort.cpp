#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int*arr , int n) //Descending Order
{
  int i,j,max;
  for(i=0 ; i<n-1; i++)
  {
    max = i;

    for(j=i+1 ; j<n ; j++)
    {
        if(arr[j]>=arr[max])
        {
            max = j;
        }
    }
    if(max!=i)
    {
        swap(arr[max],arr[i]);
    }
  }
}
int main()
{
    int arr[6] = {3,1,6,5,2,4};
    SelectionSort(arr,6);
    for(int k=0 ; k<6 ; k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}

//Pseudo-Code :
