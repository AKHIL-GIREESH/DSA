#include<bits/stdc++.h>
#include<iostream>

using namespace std;
  
int main(){
  vector<int> v = {1,2,3,5,6,7,7,7,7,7,8};
  int low=0, high=v.size()-1,first=-1, last =-1,mid,target=8;
  
  //Lower one
  while(low<=high){
    mid = (low+high)/2;
    if(v[mid] == target){
      first = mid;
      high = mid-1;
    }else if(v[mid] > target){
      high = mid-1;
    }else{
      low = mid+1;
    }
  }

  cout << "First" << first;

  low = 0, high = v.size()-1;
  while(low<=high){
    mid = (low+high)/2;
    if(v[mid] == target){
      last = mid;
      low = mid+1;
    }else if(v[mid] > target){
      high = mid-1;
    }else{
      low = mid+1;
    }
  }

  cout << "Last" << last;
 
  return 0;
}

