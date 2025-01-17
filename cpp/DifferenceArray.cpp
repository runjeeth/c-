#include <bits/stdc++.h>
using namespace std;
vector<int> initializeDiffArray(vector<int>& A)
{
    int n = A.size();
    vector<int> D(n + 1);
    D[0] = A[0], D[n] = 0;
    for (int i = 1; i < n; i++)
        D[i] = A[i] - A[i - 1];
    return D;
}
void update(vector<int>& D, int l, int r, int x)
{
    D[l] += x;
    D[r + 1] -= x;
}
void printArray(vector<int> &A, vector<int> &D)
{
    for (int i = 0; i < A.size(); i++)
    {
        if (i == 0)
            A[i] = D[i];
        else
        {
            A[i] = D[i] + A[i - 1];
        }
        cout << A[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    vector<int> A{10, 5, 20, 40};
    vector<int> D = initializeDiffArray(A);
    for (auto i = 0; i < D.size(); i++)
        cout << D[i] << " ";
    cout << endl;
    update(D, 0, 1, 10);
    for (auto i = 0; i < D.size(); i++)
        cout << D[i] << " ";
    cout << endl;
    printArray(A, D);
    return 0;
}
