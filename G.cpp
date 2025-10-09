#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int l, c, n, d;
    cin >> l >> c >> n >> d;
    while(l != 0 and c != 0 and n != 0 and d != 0) {
        float resultado = (c + (d/2))*n;
        if (l >= resultado){
            cout << "S" << "\n";
        }
        else{
            cout << "N" << "\n";
        }
        cin >> l >> c >> n >> d;
    }

    return 0;
}