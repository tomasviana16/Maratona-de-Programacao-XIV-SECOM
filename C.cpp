#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    
    string linha;
    
    while (cin >> linha) {
        if (linha == "0") {
            break;
        }
        
        // Cálculo do primeiro dígito verificador
        int resto1 = ((linha[0] - '0')*7 + (linha[1] - '0')*6 + 
                     (linha[2] - '0')*5 + (linha[3] - '0')*4 + 
                     (linha[4] - '0')*3 + (linha[5] - '0')*2) % 11;
        
        int d1;
        if (resto1 == 0 || resto1 == 1) {
            d1 = 0;
        } else {
            d1 = 11 - resto1;
        }
        
        // Cálculo do segundo dígito verificador (usa d1 calculado acima)
        int resto2 = ((linha[0] - '0')*8 + (linha[1] - '0')*7 + 
                     (linha[2] - '0')*6 + (linha[3] - '0')*5 + 
                     (linha[4] - '0')*4 + (linha[5] - '0')*3 + 
                     d1*2) % 11;
        
        int d2;
        if (resto2 == 0 || resto2 == 1) {
            d2 = 0;
        } else {
            d2 = 11 - resto2;
        }
        
        // Dígitos atuais do código
        int digito1_atual = linha[7] - '0';
        int digito2_atual = linha[8] - '0';
        
        // Verificação
        if (d1 == digito1_atual && d2 == digito2_atual) {
            cout << "CAPIVARA IDENTIFICADA\n";
        } else {
            cout << "CAPIVARA MISTERIOSA " << d1 << d2 << "\n";
        }
    }
    
    return 0;
}