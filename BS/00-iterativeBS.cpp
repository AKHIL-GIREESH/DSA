#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  vector<int> v = {2,3,5,8,9,10};
  int low = 0, target=5, mid= 0, high = v.size()-1;

  while(low<=high){
    mid = (low+high)/2;
    //cout << mid;
    if(v[mid] == target){
      cout << mid;
      break;
    }else if(v[mid] > target){
      high = mid-1;
    }else{
      low = mid + 1;
    }

  }
  return 0;
}
