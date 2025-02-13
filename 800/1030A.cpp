#include <iostream>

int main() {
  int sz;
  std::cin>>sz;
  int arr[sz];
  bool checkdiff= false;
  for(int i = 0; i < sz; i++) {
    std::cin>>arr[i];
    if(arr[i] == 1) {
      checkdiff=true;
      break;
    }
  }
  
  if(checkdiff) {
    std::cout<<"HARD"<<std::endl;
  }
  else {
    std::cout<<"EASY"<<std::endl;
  }
}