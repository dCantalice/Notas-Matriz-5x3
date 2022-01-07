#include <stdio.h>
#define nlinhas 5
#define ncolunas 3

void Lernotas(float notas[5][3]) {
  int a, b;
 for (a=0; a<nlinhas; a++) {
 for (b=0; b<ncolunas; b++) {
    
    printf("Aluno %d, nota %d: ", a+1, b+1);
      scanf("%f",&notas[a][b]);
  }
 }
}
void Mostrarnotas(float notas[5][3]) {
  int a, b;
 for(a=0; a<nlinhas; a++) {
 for (b=0; b<ncolunas; b++) {
    printf("\nNota do Aluno: %d, nota: %d : %.1f", a+1, b+1,notas[a][b] );

  }
 }
}

int main(void) {
float notas[nlinhas][ncolunas];

printf("Digite as notas:\n");
Lernotas(notas);
Mostrarnotas(notas);

}
