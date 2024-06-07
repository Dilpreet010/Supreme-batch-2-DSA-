 #include<iostream>
 using namespace std;
//  1. find unique number from array

 int FindUniqueNum(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
 }
 int main(){
    int arr[]={10,20,50,50,60,20,10};
    int n=7;
    int num= FindUniqueNum(arr,n);
    cout<<"Unique number is found is : "<<num<<endl;
 }

// 2. Print all the pairs
// void printpairs(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
//         }
//     }
// }

// int main(){
//     int arr[]={10,20,30};
//     int n=3;
//     printpairs(arr,n);
// }

//3. pair sum/2 sum 
// void pairSum(int arr[],int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//         cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" : ";
//         sum=arr[i]+arr[j];
//         cout<<sum;
//         cout<<endl;
//        }
//        cout<<endl;
//     }
// }
// int main(){
//     int arr[]={10,20,30};
//     int n=3;
//     pairSum(arr,n);
// }

//4. print triplets
// void printTriplets(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             for(int k=0;k<n;k++){
//                 cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
//             }
//         }
//     }
// }

// int main(){
//     int arr[]={1,2,3,4};
//     int n=4;
//     printTriplets(arr,n);
// }

//5. Sorting 0's and 1's
// void  sortingZeroOnes(int arr[],int n){
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
//     //placing 0's and 1's in array
//     int i=0;
//     while(zeroCount--){
//         arr[i]=0;
//         i++;
//     }
//      while(oneCount--){
//         arr[i]=1;
//         i++;
//     }
//     //printing the elem in array
//      for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={0,1,0,1,1,0,0,0,0};
//     int n=9;
//     sortingZeroOnes(arr,n);
// }

// //6. Right shift array elements
// void RightShiftElem(int arr[],int n){
//     int temp=50;
//     for(int i=0;i<n;i++){
//         arr[i]=arr[i-1];
//     }
//     arr[0]=temp;
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }
// int main(){
//     int arr[]={10,20,30,40,50};
//     int n=5;
//     RightShiftElem(arr,n);
// }