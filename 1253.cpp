#include <iostream>
#include <string>
#include <climits>


using namespace std;
 
int main() {
 
   int N, chave, chave2;
   string codigo, traducao;
   cin >> N;
   for(int i = 0; i < N; i++){
    cin >> codigo;
    cin >> chave;
    traducao = {""};
    for(int j = 0; j < codigo.size(); j++){
        if(codigo[j] + chave <='Z'){
            traducao += codigo[j] + chave;
        } else{
            traducao += codigo[j] -  'Z' + chave;
        }
    }
    cout << traducao << endl;
   }
   return 0;
}
