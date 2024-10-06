//Dima and Friends

#include <iostream>
using namespace std;
int main() {
    int n ;
    cin >> n;
    int h;
    if (h <=5 && 1<=h) {
        cin >> h;
    }
    int arr[n];
    int i;
    for (i = 0; i < n ; i++) {
        cin >> arr[i];
    }
    int count =0;
    for (i = 0; i < n ; i++) {
       count += arr[i];
    }
    int rotate = 0;
    n += 1;
    for (i = count+1 ; i <= count+5; i++) {
        if (i % n == 1) {
            rotate +=1;
        }
    }
    cout << 5 - rotate ;
}

// Time Complexity - O(n)