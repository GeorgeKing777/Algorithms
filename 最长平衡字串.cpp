////
//// https://blog.csdn.net/lady_killer9/article/details/86064420
////
//#include <bits\stdc++.h>
//using namespace std;
//
//map<int,int> m; //存前缀和最早出现的位置
//int a[1000001]; //数字数组
//int main(){
//    string s;
//    cin >> s;
//
//    //将字符串转换成数字数组
//    for (int i = 0; s[i]; ++i) {
//        if (s[i] == '0') a[i + 1] = -1;
//        else a[i + 1] = 1;
//    }
//
//    int ans = 0;  //最大长度
//    int sum = 0;  //前缀和
//    for (int i = 1; i <= s.length(); ++i) {
//        sum += a[i];   //m[i]默认是为0的 (i为任意值)
//
//        if (sum != 0 && m[sum] == 0) {
//            m[sum] = i; //之前未出现过相同值
//        }
//        else {
//            ans = max(ans, i - m[sum]); // 之前出现过相同值
//        }
//    }
//
//    cout << ans << endl;
//    return 0;
//}


#include<iostream>
#include<string>
#include<cstring>
#include<map>

using namespace std;

string s;
map<int, int> mp;
int ans;

int main() {
    cin >> s;
    int len = s.length();
    int sum[len + 1];
    int index[len + 1];
    memset(sum, 0, sizeof(sum));
    memset(index, 0, sizeof(index));
    int temp = 0;
    for (int i = 1; i <= len; ++i) {
        if (s[i - 1] == '1')
            temp += 1;
        else if (s[i - 1] == '0')
            temp -= 1;
        sum[i] = temp;
        if (sum[i] != 0 && mp[sum[i]] == 0)
            mp[sum[i]] = i;
        else
            mp[sum[i]] = mp[temp];
    }
//    for (int i = 1; i <= len; ++i) {
//        int begin = mp[sum[i]];
//        if (begin == 0 && sum[i] != 0)
//            mp[sum[i]] = i;
//        else {
//            if (i - begin > ans) {
//                ans = i - begin;
//            }
//        }
//    }
    for (int i = 1; i <= len; ++i) {
        if (i - mp[sum[i]] > ans)
            ans = i - mp[sum[i]];
    }
    cout << ans;
    return 0;
}
