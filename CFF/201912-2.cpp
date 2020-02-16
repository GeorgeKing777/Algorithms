//
// http://118.190.20.162/view.page?gpid=T99
//
#include <iostream>

using namespace std;

typedef struct position {
    double xi, yi;
} Pos;

const int maxn = 1000 + 5;
int n;
int ans[5];
Pos p[maxn];

int judgeFourCorners(int xi, int yi) {
    int num1 = 0;
    for (int i = 0; i < n; ++i) {
        if (p[i].xi == xi - 1 && p[i].yi == yi - 1)
            num1++;
        else if (p[i].xi == xi - 1 && p[i].yi == yi + 1)
            num1++;
        else if (p[i].xi == xi + 1 && p[i].yi == yi - 1)
            num1++;
        else if (p[i].xi == xi + 1 && p[i].yi == yi + 1)
            num1++;
    }
    return num1;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> p[i].xi >> p[i].yi;
    }
    for (int i = 0; i < n; ++i) {
        int flag = 0;
        double px = p[i].xi;
        double py = p[i].yi;
        for (int j = 0; j < n; ++j) {
            if (p[j].xi == px && p[j].yi == py + 1)
                flag++;
            else if (p[j].xi == px && p[j].yi == py - 1)
                flag++;
            else if (p[j].xi == px - 1 && p[j].yi == py)
                flag++;
            else if (p[j].xi == px + 1 && p[j].yi == py)
                flag++;
            if (flag == 4){
                break;
            }
        }
        if (flag == 4) {
            int num = judgeFourCorners(px, py);
            ans[num]++;
        }
    }
    for (auto i : ans)
        cout << i << endl;

    return 0;
}

/*
 7
1 2
2 1
0 0
1 1
1 0
2 0
0 1

 11
9 10
10 10
11 10
12 10
13 10
11 9
11 8
12 9
10 9
10 11
12 11

 6
 499 377
 498 377
 500 377
 499 378
 499 376
 500 378
*/