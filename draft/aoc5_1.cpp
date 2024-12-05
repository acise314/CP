#include <bits/stdc++.h>
using namespace std;
vector<int> arr[101];
int main()
{
    int x;
    int y;
    string s;
    getline(cin, s);

    int countt = 0;
    while (s != "0")
    {
        stringstream ss(s);
        char delimiter;
        ss >> x >> delimiter >> y;
        arr[x].push_back(y);
        getline(cin, s);
    }
    getline(cin, s);
    getline(cin, s);

    while (s != "0")
    {
        stringstream ss(s);
        vector<int> myArr;
        int num;
        bool tf = true;
        char delimiter;

        while (ss >> num)
        {
            myArr.push_back(num);
            ss >> delimiter;
        }
        bool change = true;

        bool fake = false;
        while (change)
        {
            change = false;

            for (int i = 0; i < myArr.size(); i++)
            {
                for (int j = 0; j < i; j++)
                {
                    if (count(arr[myArr[i]].begin(), arr[myArr[i]].end(), myArr[j]) > 0)
                    {
                        int xk = myArr[j];
                        myArr.erase(myArr.begin() + j);
                        myArr.insert(myArr.begin() + i, xk);
                        change = true;
                        fake = true;
                    }
                }
            }
        }

        if (fake)
        {
            countt += myArr[(myArr.size() - 1) / 2];
        }
        getline(cin, s);
    }
    cout << countt;
}