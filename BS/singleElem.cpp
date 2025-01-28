#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
  vector<int> v = {1,1,2,3,3,4,4,5,5,6,6};
  int low=0,high=v.size()-1,mid,ans;

  if(high == 0){
    cout << v[0];
  }else if(v[low]!=v[1]){
    cout << v[0];
  }else if(v[high]!=v[high-1]){
    cout << v[high];
  }

  low++;
  high--;

  while(low<=high){
    mid = (low+high)/2; 
    
    if(v[mid] != v[mid-1] && v[mid] != v[mid+1]){
      cout << v[mid];
      break;
    }else if(mid%2 == 0){
      if(v[mid] == v[mid+1]){
        //elim left half
        low = mid+1;
        //[1,1,2,3,3,4,4,5,5]
        //[1,1,2,2,3,4,4]
      }else{
        high = mid-1; //elim right half
      }
    }else{
      if(v[mid] == v[mid-1]){
        low = mid+1;
      }else{
        high = mid-1;
      }
    }
  }

  return 0;
}
