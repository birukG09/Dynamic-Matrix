#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    double **data;
    size_t rows;
    size_t cols;
} AdvMatrix;

AdvMatrix* adv_matrix_create(size_t rows, size_t cols) {
    AdvMatrix *m = (AdvMatrix*)malloc(sizeof(AdvMatrix));
    m->rows = rows;
    m->cols = cols;
    m->data = (double**)malloc(rows * sizeof(double*));
    for (size_t i = 0; i < rows; i++) {
        m->data[i] = (double*)calloc(cols, sizeof(double));
    }
    return m;
}

void adv_matrix_free(AdvMatrix *m) {
    if (!m) return;
    for (size_t i = 0; i < m->rows; i++) {
        free(m->data[i]);
    }
    free(m->data);
    free(m);
}

void adv_matrix_save(const AdvMatrix *m, const char *filename) {
    FILE *f = fopen(filename, "wb");
    if (!f) return;
    fwrite(&m->rows, sizeof(size_t), 1, f);
    fwrite(&m->cols, sizeof(size_t), 1, f);
    for (size_t i = 0; i < m->rows; i++) {
        fwrite(m->data[i], sizeof(double), m->cols, f);
    }
    fclose(f);
}

AdvMatrix* adv_matrix_load(const char *filename) {
    FILE *f = fopen(filename, "rb");
    if (!f) return NULL;
    size_t r, c;
    fread(&r, sizeof(size_t), 1, f);
    fread(&c, sizeof(size_t), 1, f);
    AdvMatrix *m = adv_matrix_create(r, c);
    for (size_t i = 0; i < r; i++) {
        fread(m->data[i], sizeof(double), c, f);
    }
    fclose(f);
    return m;
}

int main() {
    AdvMatrix *m = adv_matrix_create(2, 2);
    m->data[0][0] = 1.1; m->data[0][1] = 2.2;
    m->data[1][0] = 3.3; m->data[1][1] = 4.4;
    
    printf("Saving matrix to file...\n");
    adv_matrix_save(m, "matrix.dat");
    adv_matrix_free(m);
    
    printf("Loading matrix from file...\n");
    AdvMatrix *m2 = adv_matrix_load("matrix.dat");
    for (size_t i = 0; i < m2->rows; i++) {
        for (size_t j = 0; j < m2->cols; j++) {
            printf("%f ", m2->data[i][j]);
        }
        printf("\n");
    }
    adv_matrix_free(m2);
    return 0;
}
