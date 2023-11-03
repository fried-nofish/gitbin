#include<iostream>
using namespace std;
#define int long long
int k, i, ans;
signed main() {
    cin >> k;
    int sum = 1;
    for (i = 2; sum < k; i++)sum *= i;
    for (i = 2; i * i <= k; i++)if (k % i == 0) {
        int t = 0;
        while (k % i == 0)k /= i, t++;
        if (t <= i)ans = max(ans, t * i);
        else {
            int l = 1, r = 1e9, mid, tmp = 0;
            while (l <= r) {
                mid = (l + r) >> 1;
                int sum = 0, x = mid;
                while (x)sum += x /= i;
                if (sum >= t)tmp = mid, r = mid - 1;
                else l = mid + 1;
            }
            ans = max(ans, tmp);
        }
    }
    if (k > 1)ans = max(ans, k);
    cout << ans;
    return 0;
}
//100000000000