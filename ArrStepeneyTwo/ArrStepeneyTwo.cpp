#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    int n, y = 0;
    const int i = 5;
    int arr[i];
    cout << "Введите с какой степени начать заполнение массива: ";
    cin >> n;
    while (y < i) {
        arr[y] = pow(2, n);
        cout << arr[y] << " ";
        n++;
        y++;
    }
    system("pause > nul");
    return 0;
}

