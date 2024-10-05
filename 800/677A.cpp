// Anaya and Fence  *800 

#include <iostream>
using namespace std;
int main() {
    int n , h ;
    cin >> n >> h;
    int arr[n];
    int i;
    for (i = 0; i < n ; i++) {
        cin >> arr[i];
    }
    int width = 0;
    for (i = 0 ; i< n; i++) {
        if (arr[i] <= h){
            width += 1;
        }
        else{
            width +=2;
        }
    }
    cout << width;

}
=======
// Anaya and Fence  800* 677A

#include <iostream>
using namespace std;

int main() {
    int n , h;
    cin >> n >> h;
    int arr[n];
    int i;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int width = 0;
    for (i= 0; i < n ; i++) {
        if (arr[i] <= h){
            width += 1;
        }
        else {
            width += 2;
        }
        cout << width;
        
    }
}
    // Time - O(n)
>>>>>>> Stashed changes
