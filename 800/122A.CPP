#include <iostream>
#define ll long long

int main() {
  ll n;
  std::cin>>n;
  int arr[] = {4,7,44, 47,74,77,444,447,474,477,744,747,774,777};
  for(auto x: arr) {
    if(n%x == 0) {
      std::cout<<"YES"<<std::endl;
      return 0;
    }
  }
  std::cout<<"NO"<<std::endl;
  return 0;
}