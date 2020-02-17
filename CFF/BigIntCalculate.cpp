//
// 大数运算————加法/减法
//
#include <iostream>
#include <algorithm>

using namespace std;

class BigInt {
public:
    BigInt(string str) : strDigit(str) {}

private:
    string strDigit;

    friend ostream &operator<<(ostream &out, const BigInt &src);

    friend BigInt operator+(const BigInt &lhs, const BigInt &rhs);

    friend BigInt operator-(const BigInt &lhs, const BigInt &rhs);
};

ostream &operator<<(ostream &out, const BigInt &src) {
    out << src.strDigit;
    return out;
}

BigInt operator+(const BigInt &lhs, const BigInt &rhs) {
    string result;
    bool flag = false;
    int size1 = lhs.strDigit.length() - 1;
    int size2 = rhs.strDigit.length() - 1;
    int i = size1, j = size2;
    for (; i >= 0 && j >= 0; --i, --j) {
        int ret = lhs.strDigit[i] - '0' + rhs.strDigit[j] - '0';
        if (flag) {
            ret += 1;
            flag = false;
        }
        if (ret >= 10) {
            ret %= 10;
            flag = true;
        }
        result.push_back(ret + '0');
    }
    if (i >= 0) {
        while (i >= 0) {
            int ret = lhs.strDigit[i] - '0';
            if (flag) {
                ret += 1;
                flag = false;
            }
            if (ret >= 10) {
                ret %= 10;
                flag = true;
            }
            result.push_back(ret + '0');
            i--;
        }
    } else if (j >= 0) {
        while (j >= 0) {
            int ret = rhs.strDigit[j] - '0';
            if (flag) {
                ret += 1;
                flag = false;
            }
            if (ret >= 10) {
                ret %= 10;
                flag = true;
            }
            result.push_back(ret + '0');
            j--;
        }
    }
    if (flag) {
        result.push_back('1');
    }
    reverse(result.begin(), result.end());
    return result;
}

// 大数减法
BigInt operator-(const BigInt &lhs, const BigInt &rhs) {
    string result;
    bool flag = false;//表示借位
    bool minor = false;//表示结果的正负性

    string maxStr = lhs.strDigit;
    string minStr = rhs.strDigit;
    if (maxStr.length() < minStr.length())//通过字符串的长度判断结果的正负性
    {
        maxStr = rhs.strDigit;
        minStr = lhs.strDigit;
        minor = true;
    } else if (maxStr.length() == minStr.length())
        //若字符串长度相等，则比较字符串的大小，来确定结果的正负性
    {
        if (maxStr < minStr) {
            maxStr = rhs.strDigit;
            minStr = lhs.strDigit;
            minor = true;
        } else if (maxStr == minStr)
            //若长度相等而且字符串也一样则两个数是一样的，结果为0，直接结束程序。
        {
            return string("0");
        }
    }

    int size1 = maxStr.length() - 1;
    int size2 = minStr.length() - 1;
    int i = size1, j = size2;

    for (; i >= 0 && j >= 0; --i, --j) {
        int ret = maxStr[i] - minStr[j];//减法不用减字符‘0’的ascii码；
        if (flag) {
            ret -= 1;
            flag = false;
        }
        if (ret < 0) {
            ret += 10;
            flag = true;
        }
        result.push_back(ret + '0');
    }
    while (i >= 0) {
        int ret = maxStr[i] - '0';
        if (flag) {
            ret -= 1;
            flag = false;
        }
        if (ret < 0) {
            ret += 10;
            flag = true;
        }
        result.push_back(ret + '0');
        i--;
    }
    if (minor) {
        result.push_back('-');
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    BigInt int1("369");
    BigInt int2("1377");
    cout << int1 + int2 << endl;
    cout << int1 - int2 << endl;
    return 0;
}
