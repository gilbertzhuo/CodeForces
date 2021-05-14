#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int num;
    cin>>num;
    for(int i = 0; i < num; ++i) {
        unordered_set<char>uset;
        int letter;
        cin>>letter;
        string temp;
        bool flag = false;
        cin>>temp;
        for(int j = 0; j < temp.length(); ++j) {
            if (j > 0 and (temp[j-1] != temp[j]) and uset.count(temp[j])) {
                flag = true;
                break;
            } 
            uset.insert(temp[j]);
        }
        if (flag) {
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }
     }
    return 0;
}