#include <iostream>
#include <string>
#include <map>
#include <stack>

using namespace std;

int n;
string s;
map<char, int> mp1, mp2;
stack<char> st;

int main() {
    cin >> n;
    while (n--) {
        getline(cin, s);
        int len = s.length();
        int i = 0;
        while (i < len) {
            while (s[i] != '+' && s[i] != '=') {
                if (i == 0 && s[i] >= '2' && s[i] <= '9') {
                    int num = s[i];
                    i++;
                    continue;
                }
                if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
                    st.push(s[i]);
                }
                if (i != 0 && s[i] >= '2' && s[i] <= '9'){

                }

            }
        }


    }
    return 0;
}