#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arreglomora[20];


    for (int i = 0; i < 20; i++) {
        cin >> arreglomora[i];
    }

   
    sort(arreglomora, arreglomora+20);


    for (int i = 0; i < 20; i++) {
        cout << arreglomora[i] << " ";
    }
    cout << endl;

    return 0;
    
}
