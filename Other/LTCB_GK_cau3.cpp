#include <iostream>
using namespace std;
 
bool soNguyenTo(int n) {
    for (int i = 2; i*i <= n; i++) 
        if (n % i == 0) return false;
    return n > 1;
}

int main() {
    int n, k = 0; 
    cin >> n;

    for (int i = 2; i <= n; i++) {
        if (soNguyenTo(i)) cout << i << " "; 
        k++;
    }

    if (k == 0) cout << -1;
    return 0;
}