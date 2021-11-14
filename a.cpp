/**
 * @author Sagor
 */

#include<bits/stdc++.h>

using namespace std;
#define gap                        ' '
#define EPS                        1e-9
#define P_INF                      2e9+17
#define N_INF                     -2e9-17
#define MOD                        1000000007
#define PI                         2*acos(0.0)
#define All(x)                     x.begin(),x.end()
#define Mem(Name, type)            memset(Name, type, sizeof(Name))
#define TIMESTAMP(msg) cout << "[" msg "] Time = " << clock() * 1.0 / CLOCKS_PER_SEC << endl


template<typename T>
T GCD(T a, T b) { return a ? GCD(b % a, a) : b; }

template<typename T>
T LCM(T a, T b) { return (a * b) / GCD(a, b); }

template<typename T>
ostream &operator<<(ostream &os, const vector<T> &v) {
    for (auto ob: v) os << ob << " ";
    return os;
}


/*-----------------------------------------------------^-----------------------------------------------------*/
void Problem() {
    //Here You Go...
    for (int i = 0; i < 3; ++i) {
        int a;
        cin>>a;
        cout<<a<<endl;
    }
}


int main() {
    freopen("input.txt", "r", stdin);       //  File input ...
//     freopen("output.txt", "w", stdout);		//  File output ...
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int n = 1;
//    cin >> n;            // For Multiple testcases...
    for (int i = 0; i < n; ++i) {
        Problem();
    }
    TIMESTAMP("End:");
    return 0;
}