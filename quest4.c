    #include <stdio.h>
   

    int num,fat,i;
    
    int main(){

         while (1) {
            fat=1;

                printf("digite o numero que deseja obter o fatorial(ou 0 para parar):\n");
                scanf("%d",&num);
                if (num<=0){
                    break;
                }else{

                    for (i = num;i>=1;--i){
                    fat=fat*i;
                    }
            }
            printf("o fatorial de %d e igual %d\n",num,fat);
        }
    
    }