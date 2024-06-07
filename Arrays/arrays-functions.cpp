#include<iostream>
#include<limits.h>
using namespace std;
//1. linear search by function

// bool linearsearch(int arr[],int n,int target){
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             return true;
//         }
//     }
//     return false;
// }

// int main(){
//     int arr[5]={10,20,30,40,50};
//     int n=5;
//     int target=40;
//     bool ans = linearsearch(arr,n,target);
//     if(ans==1){
//         cout<<"Target found";
//     }
//     else{
//         cout<<"Target not found";
//     }
// }

//2. Count 0 and 1's in array

// void countZeroOne(int arr[],int n){
//     int zeroCount=0;
//     int oneCount=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             zeroCount++;
//         }
//         else{
//             oneCount++;
//         }
//     }
//     cout<<"Zero count value is :"<<zeroCount<<endl;
//     cout<<"One count value is :"<<oneCount<<endl;

// }

// int main(){
//     int arr[]={0,0,1,1,0,1,0,0,1,1,1,0,0,0,0,0,0};
//     int n=17;
//     countZeroOne(arr,n);

// }

//3. Min and Max value
// (a)
// int FindMinValue(int arr[],int n){
//     int minAns=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(arr[i]<minAns){
//             minAns=arr[i];
//         }
//     }
//     return minAns;
// }

// int main(){
//     int arr[]={23,45,2,6,89,90};
//     int n=6;
//     int ans = FindMinValue(arr,n);
//     cout<<"The minimum value in the array : "<<ans<<endl;
// }
//(b)
// int FindMaxValue(int arr[],int n){
//     int maxAns=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>maxAns){
//             maxAns=arr[i];
//         }
//     }
//     return maxAns;
// }

// int main(){
//     int arr[]={23,45,2,6,89,1000};
//     int n=6;
//     int ans = FindMaxValue(arr,n);
//     cout<<"The maximum value in the array : "<<ans<<endl;
// }

//4.Reverse the array

// void reverseArray(int arr[],int n){
//     int left=0;
//     int right=n-1;
//     while(left<=right){
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }
// }
// int main(){
//     int arr[]={10,20,30,40,50,60};
//     int n=6;
//     reverseArray(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//5.Extreme print in a array

// void extremeArray(int arr[],int n){
//     int left=0;
//     int right=n-1;
//     while(left<=right){
//         cout<<arr[left]<<" ";
//         cout<<arr[right]<<" ";
//         left++;
//         right--;
//     }
// }

// int main(){
//     int arr[]={10,20,30,40,50};
//     int n=5;
//     extremeArray(arr,n);
// }