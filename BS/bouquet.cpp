#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int possible(vector<int> &v, int day, int m, int k){
  int numb=0,cnt=0;
  for(int i=0;i<v.size();i++){
    if(day >= v[i]){
      cnt++;
    }else{
      numb += cnt/k;
      cnt=0;
    }
  }

  numb += cnt/k;
  return numb>=m;
}

int main(){
  vector<int> v = {1,10,3,10,2};
  int low=v[0],high=v[0],mid,m=3,k=1,ans;

  if(m*k > v.size()){
    cout << "Not possible";
    //return 0;
  }

  for(int i=0;i<v.size();i++){
    low = min(low,v[i]);
    high = max(high,v[i]);
  }

  //cout << low << high;
  while(low<=high){
    mid = (low+high)/2;
    
    if(possible(v,mid,m,k)){
      cout << mid;
      ans = mid;
      high = mid-1;
    }else{
      low = mid+1;
    }
    
  }

  cout << ans;

  return 0;
}
