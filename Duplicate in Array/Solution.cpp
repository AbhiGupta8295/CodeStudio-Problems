#include<bits/stdc++.h>
int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int len = arr.size();
    int duplicate = 0;
    vector<int>times(len,0);
    for (int i = 0; i<len ;i++){
        int ele = arr[i];
        times[ele]++;
    }
    for (int i=1; i<=len-1; i++){
        if (times[i] > 1){
            duplicate = i;
        }
    }
    return duplicate;
}
