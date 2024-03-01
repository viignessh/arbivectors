#include <stdio.h>
#include <stdlib.h>
int* allocate_vector(int n) {
    return (int*)malloc(n * sizeof(int));
}
void free_vector(int* vector) {
    free(vector);
}
void add_vectors(int* result, const int* vector1, const int* vector2, int n) {
    for (int i = 0; i < n; i++) {
        result[i] = vector1[i] + vector2[i];
    }
}
int main(int argc, char* argv[])
 {
    int N_OPS = atoi(argv[1]);
    int N_ENTRIES = atoi(argv[2]);
    for (int operation = 1; operation <= N_OPS; operation++) {
        int* vector1 = allocate_vector(N_ENTRIES);
        int* vector2 = allocate_vector(N_ENTRIES);
        int* sumVector = allocate_vector(N_ENTRIES);
        for (int i = 0; i < N_ENTRIES; i++) {
            scanf("%d", &vector1[i]);
        }
        for (int i = 0; i < N_ENTRIES; i++) {
            scanf("%d", &vector2[i]);
        }
        add_vectors(sumVector, vector1, vector2, N_ENTRIES);
        for (int i = 0; i < N_ENTRIES; i++) {
            printf("%d ", sumVector[i]);
        }
        printf("\n\n");
        free_vector(vector1);
        free_vector(vector2);
        free_vector(sumVector);
    }
    return 0;
}