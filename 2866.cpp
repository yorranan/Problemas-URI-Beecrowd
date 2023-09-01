#include <iostream>
#include <vector>
#include <cstring>
#include <cctype>


using namespace std;


int main(){
    int casos, tam, tam2, k;
    string codigo;
    cin >> casos;
    for(int i = 0; i < casos; i++){
        k = 0;
        cin >> codigo;
        tam = codigo.size();
        string Vetor;
        for(int j = 0; j < tam; j++){
            if(islower(codigo[j])){
                Vetor += codigo[j];
            }
        }
        tam2 = Vetor.size();
         for(reverse_iterator rit = Vetor.rbegin(); rit!=Vetor.rend(); rit++)
            cout << *rit;
    cout << "\n";
    }
    return 0;
}