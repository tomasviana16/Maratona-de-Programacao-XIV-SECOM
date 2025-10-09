#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int n;
    cin >> n;
    
    while (n != 0) {
        for (int i = 0; i < n; i++) {
            string nome;
            cin >> nome;
            cout << setw(50) << nome << "\n";
        }
        
        cin >> n;
        if (n != 0) {
            cout << "\n\n";
        }
    }
    return 0;
}