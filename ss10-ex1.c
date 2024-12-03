#include <stdio.h>

int main(){
    int arr[5]={10,20,30,40,50}; 
    int n=sizeof(arr)/sizeof(arr[0]);
    int target,i,found=0;
    printf("Nhap phan tu can tim:");
    scanf("%d",&target);
    for (i=0;i<n;i++){
        if (arr[i]==target){
            printf("Phan tu %d duoc tim thay tai vi tri %d (chi so mang:%d).\n",target,i+1,i);
            found=1;
            break; 
        }
    }
    if (!found){
        printf("Phan tu %d khong ton tai trong mang.\n",target);
    }
    return 0;
}

