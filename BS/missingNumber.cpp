#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
  vector<int> v = {4,5,7,8,9};
  int low=0,high=v.size()-1,mid,k;
  
  while(low<=high){
    mid = (low+high)/2;
    
    if(v[mid]-(mid+1)<k){
      low = mid+1;
    }else{
      high = mid-1;
    }
  }

  return 0;
}
