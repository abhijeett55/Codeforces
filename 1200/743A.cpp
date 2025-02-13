#include <iostream>
#include <string>

int main() {
  int n, a , b;
  std::cin>>n>>a>>b;
  std::string str;
  std::cin>>str;
  
  a--;
  b--;
  if(str[a] == str[b]) {
    std::cout<<0;
  }
  else {
    std::cout<<1;
  }
}