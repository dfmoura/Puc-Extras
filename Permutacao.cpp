/*

Permutação simples

*/

#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = { 0, -1, 1 };
 
    sort(arr, arr + 3);
 
    cout << "Permutação simples:\n";
    do {
        cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
    } while (next_permutation(arr, arr + 3));
 
    cout << "Depois do loop: " << arr[0] << ' '
         << arr[1] << ' ' << arr[2] << '\n';
}