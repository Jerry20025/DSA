#include <bits/stdc++.h>
using namespace std;
void count_frequency(int arr[], int n){
    vector<bool> visited(n,false) ;
    int maxi=-1, value=0;
    for(int i=0;i<n;i++){
        if(visited[i]==true){
            continue;
        }
        int count=1; 
        for(int j=i+1; j<n;j++){
            if(arr[i]==arr[j]){
                visited[j]=true; 
                ++count; 
            }
        }
        if(maxi<=count){
            maxi=count; 
            value=arr[i];
        }
        
    }
    cout<<"Element has maximum frequency "<<value<<"="<<maxi;
}
int main(){
    
    int arr[]={1,2,1,2,2,2,4,4,5,1}; 
    int n=sizeof(arr)/sizeof(arr[0]);
    count_frequency(arr,n);
    return 0;
}
