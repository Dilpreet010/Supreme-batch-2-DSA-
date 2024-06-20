#include<iostream>
#include<vector>
using namespace std;
void printv(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
void selectionSort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int minIndex=i; //i hi min index h
        for(int j=i+1;j<n;j++){
            if(v[j]<v[minIndex]){
                minIndex=j;
            }
        }
        //swapping ith and minIndex
        swap(v[i],v[minIndex]);
    }
}
int main(){
    vector<int>v={5,4,3,2,1};
    selectionSort(v);
    printv(v);
}