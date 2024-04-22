#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5

main(){
  int l, c;
  char x, m[TAM][TAM];
  for(l = 0; l < TAM; l++){
    for(c = 0; c < TAM; c++){
      m[l][c] = 'L';
    }
  }
  printf("Sessão atual: \n");
  for(l = 0; l < TAM; l++){
    for(c = 0; c < TAM; c++){
      if(c < TAM - 1){
        printf("%c - ", m[l][c]);
      }
      else{
        printf("%c\n", m[l][c]);
      }
    }
  }
  do{
    printf("\nDigite R para reservar um assento, C para cancelar uma reserva, S para sair do programa e M para mostrar a sessão atual\n");
    scanf("%c", &x);
    getchar();
    switch(x){
      case 'R':
      case 'r':
        printf("Digite a fileira: ");
        scanf("%i", &l);
        printf("Digite o assento: ");
        scanf("%i", &c);
        getchar();
        m[l][c] = 'R';
        printf("Assento reservado\n");
      break;
      case 'C':
      case 'c':
        printf("Digite a fileira: ");
        scanf("%i", &l);
        printf("Digite o assento: ");
        scanf("%i", &c);
        getchar();
        if(m[l][c] == 'L'){
          printf("Assento já está vago\n");
        }
        else{
          m[l][c] = 'L';
          printf("Reserva cancelada\n");
        }
      break;
      case 'S':
      case 's':
        printf("Finalizando");
      break;
      case 'M':
      case 'm': 
        printf("\nSessão atual: \n");
        for(l = 0; l < TAM; l++){
          for(c = 0; c < TAM; c++){
            if(c < TAM - 1){
              printf("%c - ", m[l][c]);
            }
            else{
              printf("%c\n", m[l][c]);
            }
          }
        }
      break;
    }
  }while(x != 's' && x != 'S');
  getchar();
}