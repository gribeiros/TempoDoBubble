#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void burble_sort( int arr[100000],int tam )
  {
    double time1, timedif;
    long cont=0;
    time1 = (double) clock();
    time1 = time1 / CLOCKS_PER_SEC;

      int i,j,aux;
      for(i=0;i<tam;i++){
          for(j=0;j<tam;j++){
            if(arr[j] > arr[j+1]){
                cont++;
                aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
         }
        }
      }
    timedif = ( ((double) clock()) / CLOCKS_PER_SEC) - time1;
    printf("--------------------------\nTempo da Ordenação: %.3fs\n--------------------------\nNumero de trocas: %lu\n--------------------------\n", timedif,cont);
  }

int main()
  {

    int a,t,i;
    int numeros[100000];
    t = 1000;
    for(a=0;a<t;a++){
        numeros[a] = rand()%101;
        if(numeros[a] < 0){
            numeros[a] = rand()%100;
        }
    }
    burble_sort(numeros,t);

    return 0;
}
