//수 찾기 - 실버 4

#include <algorithm>
#include <iostream>
#include <unordered_set>
using namespace std;

int search(unordered_set<int>& s, int i) {
    if(s.find(i) != s.end()) return 1;
    else return 0;
}
int main() {
    ios_base::sync_with_stdio(false);
    int N;
    unordered_set<int> A;
    cin >> N;
    for (int i = 0 ; i < N ; i++){
        int sv;
        cin >> sv;
        A.insert(sv);
    }

    int M;
    cin >> M;
    for(int i = 0 ; i < M ; i++) {
        int sc;
        cin >> sc;
        cout << search(A,sc) << '\n';
    }
}
