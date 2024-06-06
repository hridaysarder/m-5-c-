#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Hriday";
    string b = "Sarder";
    a+=b;
    // a.append(b);
    // cout<<a<<endl;
    // a="HridaySarder";
    // a.push_back('S');
    a.pop_back();
    a.pop_back();
    cout << a << endl;
    return 0;
}