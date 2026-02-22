#include<stdio.h>
int main(){
    int n;
    int arr[50];

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    int slow=0;
    for(int fast=1;fast<n;fast++){
        if(arr[fast]!=arr[slow]){
            slow++;
            arr[slow]=arr[fast];
        }
    }
    for(int i=0;i<=slow;i++)
    printf("%d ",arr[i]);

    return 0;
}