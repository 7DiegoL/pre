    #include <stdio.h>

    int i,idade,contador=0,contador2=0,contpessoas=0;
    float peso,altura,somaidd=0;

    int main(){
        printf("------------------ATENÇÃO-------------------\n");
        printf("preecha sua idade,altura e peso\n");
        printf("--------------------------------------------\n");
        for (i=1;i<=10;i++){
            contpessoas=contpessoas+1;

            printf("---------------pessoa %d----------------\n",contpessoas);
            printf("digite sua idade:\n ");
            scanf("%d",&idade);
            printf("digite eu peso:\n ");
            scanf("%f",&peso);
            printf("digite sua altura:\n ");
            scanf("%f",&altura);

            somaidd=somaidd+idade;

            if (peso>80 && altura<1.50){

                contador=contador+1;

            }
            if (idade>=10 && idade <=30 && altura>1.90){

                contador2=contador2+1;

            }
        }

        //calculo da media de idades:

        float mediaidd=somaidd/10;

        //calculo da portagem de idade>=10 && idade <=30 && altura>1.90:

        float porct=(contador2/10)*100;

        printf("a media da idade das pessoas e %.2lf\n",mediaidd);
        printf("a quantidade de pessoas com peso superior a 80 kg e altura inferior a 1,50 metros é %d\n",contador);
        printf("A porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 m é %.2lf\n",porct);

    }   
