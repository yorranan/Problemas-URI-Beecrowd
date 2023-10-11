#include <iostream>
using namespace std;
 
int main() {
    int tamanho = 1;
    int M[1000][1000] = {0};
    while(cin >> tamanho && tamanho != 0){
        M[1000][1000] = {0};
        int k = 0, l = 0;
        while(l < tamanho){
            for(int i = 0; i < tamanho; i++){
                for(int j = 0; j < tamanho; j++){
                    if(M[i][j] == 0){
                        if(i == k || i == tamanho - (k+1) || j == k || j == tamanho - (k + 1)){
                            M[i][j] = k + 1;
                        }
                    }
                }
            }
            k++;
            l++;
        }
        for(int i = 0; i < tamanho; i++){
            for(int j =0; j < tamanho; j++){
                cout << M[i][j];
                if(j != tamanho-1){
                    cout << " ";
                }
            }
            cout << endl;
       
        }
    }
   
    return 0;
}