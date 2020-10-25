#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {

    vector<vector<int>> hourglass(3, vector<int>(3,0));
    vector<int> maxSum;
    for(int i=0; i < 3; i++){
        for(int j=0; j < 3; j++){
            int a = i, b = j, sum = 0;
            int k = a+2, l = b+2;
            for(a; a<k; a++){
                for(b; b<l;b++){
                    hourglass[a][b] = arr[i][j];
                }
            }
            sum = hourglass[0][0] + hourglass[0][1] + hourglass[0][2] + hourglass[1][1] + hourglass[2][0] + hourglass[2][1] + hourglass[2][2];
            cout << "\n" << sum << "\n" << endl;
            maxSum.push_back(sum);
        }
    }
    int max = *max_element(maxSum.begin(), maxSum.end());
    return max;
}