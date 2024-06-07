#include<iostream>
using namespace std;

void printingArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void leftshiftingNegNum(int arr[],int n){
    //2 pointer approach
    int j=0;
    for(int index=0;index<n;index++){
        if(arr[index]<0){
            swap(arr[index],arr[j]);
            j++;
        }
    }
}

void sortColors(int arr[],int n){
    //2 pointer approach
    int index=0;
    int left=0;
    int right=n-1;
    while(index<=right){
        if(arr[index]==0){
            swap(arr[index],arr[left]);
            left++;
            index++;
        }
        else if(arr[index]==2){
            swap(arr[index],arr[right]);
            right--;
        }
        else{
            index++;
        }

    }
}
int main(){
    //que-1 Shifting all negative num to the left.
    // int arr[]={12,3,-1,-8,-6,7,9,-10};
    // int n=8;
    // leftshiftingNegNum(arr,n);
    // printingArray(arr,n);

    //que-2 Sort colours
    // int arr[]={2,0,2,1,1,0};
    // int n=6;
    // sortColors(arr,n);
    // printingArray(arr,n);

    
    

}