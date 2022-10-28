#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout << "enter no. of element in array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = INT16_MIN;
    int min = INT16_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }

    cout<<"min: "<<min<<endl;
    cout<<"max: "<<max<<endl;
    return 0;

    }
