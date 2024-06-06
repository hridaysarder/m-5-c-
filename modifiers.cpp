#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Hriday";
    string b = "Sarder";
    // a+=b;
    // a.append(b);
    // cout<<a<<endl;
    // a="HridaySarder";
    // a.push_back('S');
    // a.pop_back();
    // a.pop_back();
    // a="Sarder";
    // a.assign(b);
    // a.erase(4,1);
    // a.insert(6,"Sarder");
    a.replace(6, 0, "Talha");
    cout << a << endl;
    return 0;
}