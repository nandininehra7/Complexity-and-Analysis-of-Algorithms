#include<bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> arr , vector<int> brr)
{   
    int lowA , lowB , highA , highB;
    vector<int>vec;
    lowA = 0;
    lowB = 0;
    highA = arr.size();
    highB = brr.size();
    while(lowA < highA && lowB < highB)
    {
       if(arr[lowA] >= brr[lowB])
       {
         vec.push_back(brr[lowB]);
         lowB++;
       }
       else if(brr[lowB] > arr[lowA])
       {
         vec.push_back(arr[lowA]);
         lowA++;
       }
    }
    while(lowA < arr.size())
    {
      vec.push_back(arr[lowA]);
      lowA++;
    }
    while(lowB < brr.size())
    {
      vec.push_back(brr[lowB]);
      lowB++;
    }
    return vec;
}

int main()
{
  
  vector<int> arr1 = {1, 3, 5, 7, 9};
  vector<int> arr2 = {2, 4, 6, 8, 10};

  vector<int>ans3 = merge(arr1,arr2);

  for(int i=0 ; i<ans3.size() ; i++)
  {
    cout<<ans3[i]<<" ";
  }
}