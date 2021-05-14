#include <iostream>
using namespace std;

int main() {
    long long num;
    cin>>num;
    for(int i = 0; i < num; ++i) {
        long long amount;
        cin>>amount;
        if (amount % 2050 == 0) {
            long long ans = 0;
            long long quotient = amount / 2050;
            while (quotient > 0) {
                ans += quotient % 10;
                quotient /= 10;
            }
            cout<<ans<<endl;
        } else {
            cout<<-1<<endl;
        }
    }
    return 0;
}