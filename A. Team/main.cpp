#include <iostream>
#include <string>

using namespace std;

int main() {
    int num = 0;
    cin>>num;
    int count = 0;
    for(int i = 0; i < num; ++i) {
        int a,b,c;
        cin>>a>>b>>c;
        if (a+b+c >= 2) {
            count++;
        }
    }
    cout<<count;
    return 0;
}