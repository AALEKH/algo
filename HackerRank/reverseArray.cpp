#include <bits/stdc++.h>

using namespace std;

vector<int> reverseArray(vector<int> a) {
    int temp=0;
    int maxLength = a.size()-1;

    for(int i= maxLength; i > maxLength/2; i--){ // I made an error of not containing the array element by mid element; instead I let the funcvtion run from one end to another; the problem with that approach is it will give back the same array
        temp = a[i];
        a[i] = a[maxLength-i];
        a[maxLength-i] = temp;
    }
    
    return a;
}