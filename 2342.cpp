#include <iostream>
 
using namespace std;
 
int main() {
 
    int N, P, Q;
    char C;
    cin >> N;
    cin >> P;
    cin >> C;
    cin >> Q;
    if (C=='*') 
    {
        P = P*Q;
        if (P>N)
        {
            cout << "OVERFLOW" << endl;
        }
        else
        {
            cout << "OK" << endl;
        }
        
    }
    else 
    {
       P = P+Q;
       if (P>N)
        {
            cout << "OVERFLOW" << endl;
        }
        else
        {
            cout << "OK" << endl;
        } 
    }
 
    return 0;
}