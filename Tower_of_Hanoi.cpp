#include <bits/stdc++.h>

using namespace std;
void TowerOfHanoi(int n, int start, int mid, int end)
{
    if (n == 1)
    {
        cout << start << " " << end << "\n";
        return;
    }

    TowerOfHanoi(n - 1, start, end, mid);
    cout << start << " " << end << "\n";
    TowerOfHanoi(n - 1, mid, start, end);
}
int main()
{
    int n;
    cin >> n;
    int x = 1;
    for (int i = 2; i <= n; i++)
    {
        x = 2 * x + 1;
    }
    cout << x << "\n";
    TowerOfHanoi(n, 1, 2, 3);
}