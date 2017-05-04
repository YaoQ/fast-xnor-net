#ifndef FNC_MAIN_H
#define FNC_MAIN_H

#include <stdio.h>
#include "xnornet.h"
#include "tensor.h"
#include "mnist_wrapper.h"
#include "conv_layer.h"
#include "pool_layer.h"
#include "common.h"
#include <time.h>

void print_pool_mat(int mat1[BATCH_SIZE][NUM_FILS][N_ROWS_POOL][N_COLS_POOL], int mat2[BATCH_SIZE][NUM_FILS][N_ROWS_POOL][N_COLS_POOL], int num);

#endif //FNC_MAIN_H


