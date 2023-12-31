#ifndef CONFIGS_H
#define CONFIGS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <stdarg.h>
#include <windows.h>


//Constantes da Janela Principal e Subjanela
#define DISTANCE_BUTTONS_Y 50
#define DISTANCE_BUTTONS_X 10
#define SIZE_BUTTONS_Y 170
#define SIZE_MAIN_WINDOW_X 600
#define SIZE_MAIN_WINDOW_Y 400
#define SIZE_SUB_WINDOW_X 400
#define SIZE_SUB_WINDOW_Y 300
#define TAMANHO_LABEL_INSERT_Y 400
#define MAIN_WINDOW_TITLE "Biblioteca - Sistema de Gerenciamento"

// Constantes dos botões da janela principal
#define ID_ADD_BOOK 101
#define ID_SEARCH_BOOK 102
#define ID_LOAN_BOOK 103
#define ID_RENEW_LOAN 104
#define ID_RETURN_BOOK 105
#define ID_ADD_EMPLOYEE 201
#define ID_SEARCH_EMPLOYEE 202
#define ID_GENERATE_REPORT 301
#define ID_CREATE_UNSORTED_DB 1
#define ID_CREATE_SORTED_DB 2
#define ID_RESET_DB 3
#define ID_INSERTION_SORT 4
#define ID_INTERNAL_CLASSIFICATION 5
#define ID_BASIC_INTERCALATION 6

// Constantes dos paths dos arquivos
#define EMPLOYEE_FILE_PATH "src/bin/window_employee.dat"
#define BOOK_FILE_PATH "src/bin/window_books.dat"
#define LOG_FILE_PATH "src/bin/window_log.dat"
#define PARTITIONS_PATH "src/bin/partitions"
#define PARTITIONS_PER_STRUCTS 100
int NUM_PARTITIONS;

#endif // CONFIGS_H
