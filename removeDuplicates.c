#include <stdio.h>
#include <stdlib.h>
int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    int k = 1;
    int *aux = (int*) malloc(numsSize * sizeof(int));
    aux[0] = nums[0]; // Primeiro elemento

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) {
            aux[k] = nums[i];
            k++;
        }
    }

    // Copie os elementos únicos para o array original
    for (int i = 0; i < k; i++) {
        nums[i] = aux[i];
    }

    free(aux); // Libere a memória
    return k;
}
int main (){

printf ("Calvo");

}
