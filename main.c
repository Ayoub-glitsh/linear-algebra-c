#include <stdio.h>
#include <stdlib.h>

int main(){
int L,C, i, j;
float k, a=0, b=0, d=0, s=0, max;
printf("Entrer le nombre de ligne(s) L: ");
scanf("%d",&L);
printf("Entrer le nombre de colonne(s) L: ");
scanf("%d",&C);
float A[L][C], B[L][C], S[L][C], D[L][C];
for(i=0 ; i<L ; i++){
    for(j=0 ; j<C ; j++){
        printf("Entrer la valeur a%d%d: ",i+1, j+1);
        scanf("%f",&A[i][j]);}}
for(i=0 ; i<L ; i++){
    for(j=0 ; j<C ; j++){
        printf("Entrer la valeur b%d%d: ",i+1, j+1);
        scanf(" %f",&B[i][j]);
    }
}
printf("La matrice A: \n");
for(i=0 ; i<L ; i++){
    for(j=0 ; j<C ; j++){
        printf("%f\t",A[i][j]);
    }
    printf("\n");
}
    printf("\n\n");
printf("La matrice B: \n");
for(i=0 ; i<L ; i++){
    for(j=0 ; j<C ; j++){
        printf("%f\t",B[i][j]);
    }
    printf("\n");
}

for(i=0 ; i<L ; i++){
    for(j=0 ; j<C ; j++){
        S[i][j]=A[i][j]+B[i][j];
        D[i][j]=A[i][j]-B[i][j];
    }
}

printf("La matrice S=A+B:\n");
for(i=0 ; i<L ; i++){
    for(j=0 ; j<C ; j++){
        printf("%f\t",S[i][j]);
    }
    printf("\n");
}
    printf("\n\n");
printf("La matrice D=A-B:\n");
for(i=0 ; i<L ; i++){
    for(j=0 ; j<C ; j++){
        printf("%f\t",D[i][j]);
    }
    printf("\n");
}
    printf("\n\n");

printf("Donner le reel k que vous souhaitez le multiplier par la matrice A: ");
scanf("%f",&k);

printf("La matrice A: \n");

for(i=0 ; i<L ; i++){
    for(j=0 ; j<C ; j++){
            A[i][j]*=k;
    }
}

for(i=0 ; i<L ; i++){
    for(j=0 ; j<C ; j++){
        printf("%f\t",A[i][j]);
    }
    printf("\n");
}
    printf("\n\n");
for(i=0 ; i<L ; i++){
    for(j=0 ; j<C ; j++){
        a+=A[i][j];
        b+=B[i][j];
        s+=S[i][j];
        d+=D[i][j];
    }
}
printf("La matrice ayant  la plus grande somme totale de ses �l�ments est: ");

max=a;
if(b>max)
    max=b;
if(d>max)
    max=d;
if(s>max)
    max=s;

if(max==a){
    printf("A\n");
    for(i=0 ; i<L ; i++){
        for(j=0 ; j<C ; j++){
            printf("%f\t",A[i][j]);
    }
    printf("\n");
}
}

if(max==b){
    printf("B\n");
    for(i=0 ; i<L ; i++){
        for(j=0 ; j<C ; j++){
            printf("%f\t",B[i][j]);
    }
    printf("\n");
}
}

if(max==d){
    printf("D\n");
    for(i=0 ; i<L ; i++){
        for(j=0 ; j<C ; j++){
            printf("%f\t",D[i][j]);
    }
    printf("\n");
}
}

else {
    printf("S\n");
    for(i=0 ; i<L ; i++){
        for(j=0 ; j<C ; j++){
            printf("%f\t",S[i][j]);
    }
    printf("\n");
}
}
}

