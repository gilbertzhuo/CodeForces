#include <iostream>
using namespace std;

int main() {
    int count = -1;
    int num;
    while (num != 1) {
        cin >> num;
        count++;
    }
    int row = count/5;
    int col = count%5;
    cout<<abs(row-2)+abs(col-2);
    return 0;
}