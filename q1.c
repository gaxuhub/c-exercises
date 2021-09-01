#include<stdio.h>
#include<stdlib.h>

typedef struct AlunoVC_ {
    int RA;
    char nome[12];
    double media;
} AlunoVC;
typedef struct AlunoPC_ {
    int RA;
    char * n;
    double media;
} AlunoPC;
void main () {
    printf("size of char: %ld bytes.\n",sizeof(char));
    printf("size of int: %ld bytes.\n",sizeof(int));
    printf("size of float: %ld bytes.\n",sizeof(float));
    printf("size of double: %ld bytes.\n",sizeof(double));
    printf("size of AlunoVC: %ld bytes.\n",sizeof(AlunoVC));
    printf("size of AlunoPC: %ld bytes.\n",sizeof(AlunoPC));
}
