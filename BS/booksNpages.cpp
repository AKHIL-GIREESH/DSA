#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int count(int pages, vector<int> &v){
  int curr=0,cnt=0;
  for(int i=0;i<v.size();i++){
    if(curr+v[i] <= pages){
      curr += v[i]; 
    }else{
      cnt++;
      curr=v[i];
    }
    
  }

  cout << "check";
  return ++cnt;
}

int main(){

  vector<int> v = {25, 46, 28, 49, 24};
  int low=v[0],mid,high=0,target=4;


  for(int i=0;i<v.size();i++){
    if(v[i]>low){
      low = v[i];
    }
    high+=v[i];
  }

  while(low<=high){
    mid = (low+high)/2;
    if(count(mid,v)<=target){
      high = mid-1;
    }else{
      low = mid+1;
    }

  }

  cout << low;


  return 0;
}
