#include <iostream>
#include <vector>

void solve() {
  int n;
  std::cin>>n;
  std::string s;
  std::cin>>s;
  std::vector<int> arr(n);
  
  for(int i = 0; i < n; i++) {
    if(s[i] == '1') {
      arr[i] = 1;
    }
    else {
      arr[i] =0;
    }
  }
  
  bool result = false;
  
  if(arr[0] || arr[n-1]) {
    result = true;
  }
  for(int i = 0; i < arr.size(); i++) {
    if(arr[i] && arr[i-1] == 1) {
      result=true;
    }
  }
  
  if(result) {
    std::cout<<"YES"<<std::endl;
  }
  else {
    std::cout<<"NO"<<std::endl;
  }
}

int main() {
  int tt;
  std::cin>>tt;
  while(tt--) {
    solve();
  }
}