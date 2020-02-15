//
// http://118.190.20.162/view.page?gpid=T100
//
#include <iostream>

using namespace std;

int n;
int ans[4];

bool involve(int x) {
    while (x != 0) {
        if (x % 10 == 7)
            return true;
        x /= 10;
    }
    return false;
}

bool mutiple(int x) {
    if (x % 7 == 0)
        return true;
    else
        return false;
}

int main() {
    cin >> n;
    int x = 1;
    int flag = 0;
    while (n--) {
        if (flag == 4)
            flag = 0;
        if (involve(x) || mutiple(x)) {
            ans[flag++]++;
            x++;
            n++;
            continue;
        }
        x++;
        flag++;
    }
    for (auto i : ans)
        cout << i << endl;
    return 0;
}
