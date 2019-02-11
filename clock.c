#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


int burble_sort( int arr[10000],int tam )
  {
    double time1, timedif;
    time1 = (double) clock();
    time1 = time1 / CLOCKS_PER_SEC;

      int i,j,aux;
      for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(arr[j]>arr[j+1]){
                aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
            }
        }
      }
      timedif = ( ((double) clock()) / CLOCKS_PER_SEC) - time1;
      printf("Tempo do burble: %.3f s\n", timedif);
      return arr[10000];
  }

void main()
  {

    int a,t,i;
    int numeros[10000];
    t = 10000;
    for(a=0;a<t;a++){
        numeros[a] = rand()%100;
        if(numeros[a]<0){
            numeros[a] = rand()%100;
        }
    }
    numeros[10000] = burble_sort(numeros,t);

  }
