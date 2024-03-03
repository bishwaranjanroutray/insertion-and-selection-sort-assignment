#include<iostream>
using namespace std;

int main(){
    int arr[]={5,1,5,5,2,3};
    int n=6;
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    // insertion
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1){ 
        if(arr[j]>=arr[j-1]) break;
        else swap(arr[j],arr[j-1]);
        j--;
        }
    }

    // first minimum
    int x1=0;
    for(int i=0;i<n;i++){
        x1*=10;
        x1+=arr[i];
    }

    // for second minimum change the sorted array
    for(int i=n-1;i>=1;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }

    // making second array into a integer
    int x2=0;
    for(int i=0;i<n;i++){
        x2*=10;
        x2+=arr[i];
    }
    
    cout<<"minimum sum is: "<<x1+x2;
}