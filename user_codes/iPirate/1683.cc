#include<stdio.h>

#include<string.h>
int fact(int);
int main(){
    int tc,k;
    scanf("%d",&tc);
    int b[tc];
    
    for(int i =0;i<tc;i++){
        char a[52];
        scanf("%[^\n]s",a);
        int j=0;
        int c=0;
        while(a[j]=='\0'){
            c++;
            }
        
        
        int x = a[c-1] - '0';
        int y = c-2;
        for(int k=0;k<y;k++){
            for(int l=0;l<y;l++){
                if(a[k]==a[l]){
                    y--;
                    }
                }
            }
        int z = fact(y)/((fact(y-x)*fact(x)));
        b[i]=z;;        
        }
        for(int i=0;i<tc;i++){
            printf("%d",b[i]);
            }
        
        
        return 0;
    }
    
   int fact(int p){
       if((p==0)||(p==1)){
           return (1);
           }
       else{
           return(p*(fact(p-1)));
           }
       }         