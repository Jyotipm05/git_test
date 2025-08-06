#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <print>
#include <format>
#include <string_view>

using namespace std;
ifstream fin("input.txt");

int main()
{
    int m, n;
    fin >> m >> n;
    vector<int> arr(m);
    for (int i = 0; i < m; i++)
    {
        fin >> arr[i];
    }
    sort(arr.begin(), arr.end(), greater<int>());
    if (arr[n - 1] == 0)
    {
        // println("{}", find(arr.begin(), arr.end(), 0) - arr.begin());
        cout << (find(arr.begin(), arr.end(), 0) - arr.begin()) << "hello" << endl;
    }
    else
    {
        while (n < arr.size() && arr[n - 1] == arr[n])
        {
            n++;
        }
        // println("{}", n);
        cout << n << endl;
    }
    print("Hello");
    return 0;

}
