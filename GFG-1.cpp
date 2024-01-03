#include <stdio.h>
using namespace std;
int main(){
    int n,i,a[50],k,j,t;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The elements of array are \n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nEnter the k value\n");
    scanf("%d",&k);
    for(i=0,j=n-1;i<n/2,j>n/2;i++,j--){
      
        if((a[i]+a[j])%k == 0){
            printf("True\t");
        }
        else{
            printf("False\t");
        }
      
        
    }
   

}