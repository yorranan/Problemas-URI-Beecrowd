#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");   
    string text;
    cout <<  "Testando o~ça áaãÃá%$Aä" << endl;
    cin >> text;
    cout << text << endl;
    cout <<  "Testando o~ça áaãÃá%$Aä" << endl;
}