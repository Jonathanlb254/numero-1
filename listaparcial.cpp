#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    list<int> numbers;

 
    for (int i = 0; i < 20; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    
    numbers.sort();


    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
