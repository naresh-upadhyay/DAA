#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> values;
    stringstream s(str);
    char ch;
    int i=0;
    s>>i;
    values.push_back(i);
    cout <<values[0];
    //values[i]=554;
    //s>>values[0]>>ch>>values[1]>>ch>>values[2];
    return values;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    /*cout<<integers.size();
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    */
    return 0;
}

