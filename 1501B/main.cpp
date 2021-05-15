#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i) {
        int p;
        cin>>p;
        vector<int>dp(p,0);
        for(int k = 0; k<p; ++k) {
            cin>>dp[k];
        }
        int c = dp.back();
        for(int j = p-2; j>=0; --j) {
            c--;
            c = max(dp[j],c);
            dp[j] = c;
        }
        for(auto i : dp) {
            if (i > 0) cout<<1<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}