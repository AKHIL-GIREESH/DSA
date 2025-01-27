#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
  vector<int> v = {3,4,5,1,2};
  int low=0, high=v.size()-1,mid, ans=v[0];

  while(low<=high){
    mid = (low+high)/2;
    if(v[low]<=v[high]){
      ans = min(ans,v[low]);
      break;
    }else if(v[low]<=v[mid]){
      ans = min(ans,v[low]);
      low = mid+1;
    }else {
      ans = min(ans,v[mid]);
      high = mid-1;
    }
  }

  cout << ans;


}
