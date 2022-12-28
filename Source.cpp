#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i, N, j = 2;
    double S;
    cout << "J=2. Please, enter N. N should be more than 2 ";
    cin >> N;
    if (N <= 2) {
        cout << "You entered wrong N!" << endl;
        return 0;
    }
    else {
        S = 0;
        i = j;
        while (i <= N)
        {
            S += j * (N - j) / (pow(j, 2) + pow(N - j, 2));
            i++;
        }
        cout << S << " First way" << endl;
        S = 0;
        i = j;
        do
        {
            S += j * (N - j) / (pow(j, 2) + pow(N - j, 2));
            i++;
        } while (i <= N);
        cout << S << " Second way" << endl;
        S = 0;
        for (i = j; i <= N; i++)
        {
            S += j * (N - j) / (pow(j, 2) + pow(N - j, 2));
        }
        cout << S << " Third way" << endl;
        S = 0;
        for (i = N; i >= j; i--)
        {
            S += j * (N - j) / (pow(j, 2) + pow(N - j, 2));
        }
        cout << S << " Fourth way" << endl;
    }

    system("pause");
    return 0;
}