#include<bits/stdc++.h>
using namespace std;
int secondSmallest(int arr[], int n ){
    if(n < 2)
    return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    for (int i = 0; i < n; i++){
        if(arr[i]<small){
            second_small = small;
            small = arr[i];
        }
        else if (arr[i]<second_small && arr[i] != small){
            second_small = arr[i];

        }
    }
    return second_small;
}

int second_large(int arr[], int n ){
    if(n <2)
    return -1;
    int large = INT_MIN;
    int second_large = INT_MIN;
    for (int i =0;i<n;i++){
        if(arr[i]>large){
            second_large = large;
            large= arr[i];

        }
        else if(arr[i]>second_large && arr[i] != large){
            second_large = arr[i];

        }
    }
    return second_large;
}
int main (){
    int arr[]={1,2,4,7,7,5};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int sS = secondSmallest(arr,n);
    int lL = second_large(arr,n);
    cout<<"second largest elemnt in array is: "<<lL<<endl;
    cout<<"second smallest element in array is: "<<sS<<endl;
    return 0;

}