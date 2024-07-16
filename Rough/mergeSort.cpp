#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> a)
{
    cout << endl;
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
}

void merge(vector<int> &arr, int l, int r)
{
    int m = l + (r - l) / 2;

    int n1 = m - l + 1, n2 = r - m;
    int arr1[n1];
    int arr2[n2];
    int k = l;

    for (int i = 0; i < n1; i++)
        arr1[i] = arr[k++];

    for (int i = 0; i < n2; i++)
        arr2[i] = arr[k++];

    k = l;
    int i = 0, j = 0;
    while (i < n1 && j < n2){
        if (arr1[i] <= arr2[j])
            arr[k++] = arr1[i++];
        else arr[k++] = arr2[j++];
    }

    while(i<n1) arr[k++] = arr1[i++];
    while(j<n2) arr[k++] = arr2[j++];
}

void mergeSort(vector<int> &arr, int l, int r){
    if (l >= r) return;

    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, r);
}

int main(){
    vector<int> a = {1, 3, 2, 4, 6,-23,3,44,5,1,67,1,1,1,22,3,90,-44};
    printArray(a);

    mergeSort(a, 0, a.size() - 1);

    printArray(a);
}