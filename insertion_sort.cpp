#include <iostream>
using namespace std;

namespace nscpp
{
    void insertion_sort(int a[], int n)
    {
        int key = 0;
        for (int i = 1; i < n; i++)
        {
            key = a[i];
            int j = i - 1;
            for (; j >= 0 && a[j] > key; j--)
                a[j + 1] = a[j];
            a[j + 1] = key;
        }
    }
} // namespace nscpp

int main()
{
    int a[] = {5, 4, 3, 2, 1};
    int len = sizeof(a) / sizeof(int);
    nscpp::insertion_sort(a, len);
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}