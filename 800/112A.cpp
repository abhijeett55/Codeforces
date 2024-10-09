#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1;
    cin >> str2;
    if (str1.length() == str2.length()){
        int count;
        transform(str1.begin(), str1.end(),str1.begin(), :: toupper);
        transform(str2.begin(), str2.end(),str2.begin(), :: toupper);
            for (int i = 0; i <str1.length(); i++) {
                if (str1[i] == str2[i]) {
                    count = 0;
                }
                else if (str1[i] < str2[i]) {
                    cout << "-1";
                    break;
                }
                else {
                    cout<<  "1";
                    break;
                }
            }
            
        
    }
   
}