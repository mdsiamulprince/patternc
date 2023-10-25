#include<stdio.h>
int main() {
     int n;
     scanf("%d",&n);
     int a[n];
     for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
       int k;
     scanf("%d ",&k);
     int flag=0;
     for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){

            if(a[i]+a[j]==k){
               flag=1;
            }
        }
     }
     if(flag==0){
        printf("NO\n");
     }
     else{
        printf("YES");
     }
return 0;
}