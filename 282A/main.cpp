#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    int ans = 0;
    for(int i = 0; i < num; ++i) {
        string input;
        cin>>input;
        if (input == "++X" or input == "X++") ans++;
        else ans--;
    }
    cout<<ans<<endl;
    return 0;
}