#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::map<char, int> sticks;
    sticks['1'] = 2;
    sticks['2'] = 5;
    sticks['3'] = 5;
    sticks['4'] = 4;
    sticks['5'] = 5;
    sticks['6'] = 6;
    sticks['7'] = 3;
    sticks['8'] = 7;
    sticks['9'] = 6;
    sticks['0'] = 6;

    int n = 0;
    cin >> n;

    int bank = 0;
    string result = "";

    string testCases[n];
    for (int i = 0; i < n; i++)
        cin >> testCases[i];

    for (int i = 0; i < n; i++)
    {
        while (!testCases[i].empty())
        {
            bank += sticks[testCases[i].front()];
            testCases[i] = testCases[i].substr(1, testCases[i].size());
            //cout<<"Bank Val: "<<bank<<" testCases[i]: "<<testCases[i]<<"\n";
        }

        //cout<<"Bank: "<<bank<<"\n";
        if (bank % 2 == 0)
        {
            result = '1';
            bank -= 2;
            while (bank > 0)
            {
                result += '1';
                bank -= 2;
            }
        }
        else
        {
            result = '7';
            bank -= 3;
            while (bank > 0)
            {
                result += '1';
                bank -= 2;
            }
        }

        cout << result << "\n";
        result = "";
        bank = 0;
    }
}