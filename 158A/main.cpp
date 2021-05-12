#include <iostream>
#include <vector>
using namespace std;

int main() {
    int participants;
    cin>>participants;
    int index;
    cin>>index;
    index--;
    vector<int>score;
    for(int i = 0; i < participants; ++i) {
        int num;
        cin>>num;
        score.push_back(num);
    }
    int count = 0;
    for(auto i : score) {
        if (i >=score[index] and i > 0) count++;
    }
    cout<<count;
    return 0;
}
