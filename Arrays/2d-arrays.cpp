#include<iostream>
#include<limits.h>
using namespace std;

void printRowWiseArray(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void printColWiseArray(int arr[][3],int row,int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

void takinginput(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter the value of row index "<<i<<"and col index "<<j<<":"<<" ";
            cin>>arr[i][j];
        }
    }
}

bool searchingTargetElem(int arr[][3],int row,int col,int target){
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
     }
     return false;
}

int findingMaxnum(int arr[][4],int row,int col){
     int maxAns= INT_MIN;
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>maxAns){
                maxAns=arr[i][j];
            }
        }
     }
     return maxAns;
}

void printingRowSum(int arr[][2],int row,int col){
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
}

void printingColSum(int arr[][2],int row,int col){
    int sum=0;
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
          sum=sum+arr[j][i];
        }
        cout<<sum<<endl;
    }
}

void transpose(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}
int main(){
    //initialising 2d array
    // int arr[2][3]={{10,20,30},{40,50,60}};
    // int row=2;
    // int col=3;
    // printRowWiseArray(arr,row,col);
    // printColWiseArray(arr,row,col);

    //taking input
    // int arr[3][3];
    // int row=3;
    // int col=3;
    // takinginput(arr,row,col);
    // printRowWiseArray(arr,row,col);

    //que-1 searching target in 2d array
    // int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
    // int row=3;
    // int col=3;
    // int target=60;
    // bool ans = searchingTargetElem(arr,row,col,target);
    // if(ans==1){
    //     cout<<"Target found"<<endl;
    // }
    // else{
    //     cout<<"Target not found"<<endl;
    // }

    //que-2 Finding Max no. in 2d array.
    // int arr[3][4]={{10,20,30,40},{50,60,70,80},{90,100,110,120}};
    // int row=3;
    // int col=4;
    // int ans = findingMaxnum(arr,row,col);
    // cout<<"Max value in array : "<<ans<<endl;

    //que-3 Sum of array (row wise) and (col wise)
    // int arr[2][2]={{20,40},{60,80}};
    // int row=2;
    // int col=2;
    // printingRowSum(arr,row,col);
    // printingColSum(arr,row,col);

    //que-4 Transpose of array
    // int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
    // int row=3;
    // int col=3;
    // cout<<"Before transpose"<<endl;
    // printRowWiseArray(arr,row,col);
    // transpose(arr,row,col);
    // cout<<"After transpose"<<endl;
    // printRowWiseArray(arr,row,col);
}