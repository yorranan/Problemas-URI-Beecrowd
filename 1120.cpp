#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    char digit;
    string line;
    string v;
    while (scanf("%c %s", &digit, &line) == 2 || (digit == '0' && line == "0"))
    {
        for (int i = 0; i < line.size(); i++)
        {
            if (line[i] != digit)
            {
                v.push_back(line[i]);
            }
        }
        if (v.empty())
        {
            printf("0");
        }
        for (int i = 0; i < v.size(); i++)
        {
            printf("%c", &v[i]);
        }
        printf("\n");
    }
}