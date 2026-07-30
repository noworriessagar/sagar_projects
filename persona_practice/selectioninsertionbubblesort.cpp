#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;

}
void selectionsort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }}
        swap(arr[i],arr[min]);
            
        }
    }
void bubblesort(int arr[],int n){
    for(int i=n-1;i>0;i--){int swaped =0;
        
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            swaped=1;
        }

        if (swaped==0){
        break;
        
    }cout<<"runs"<<"\n";
    }
    
}
void insertionsort(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
        
    }
    

    }








int main(){int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}   