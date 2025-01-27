#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
  
  vector<int> v = {4,5,6,7,0,1,2};
  int low = 0, high = v.size()-1, mid, target=0;

  while(low<=high){
    mid = (low+high)/2;

    if(v[mid] == target ){
      cout << mid;
      break;
    }
    //Check for left sorted
    else if(v[low]<=v[mid]){
      if(v[low]<=target && target<v[mid]){
        high = mid-1;
      }else{
        low = mid+1;
      }
    }

    //Check for right sorted
    else{
      if(v[mid]<target && target<=v[high]){
        low = mid+1;
      }else{
        high = mid-1;
      }
    }
  }


  return 0;
}
