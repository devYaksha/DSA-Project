#ifndef WINDOW_BOOK_FUNCTIONS_H
#define WINDOW_BOOK_FUNCTIONS_H
#include "window_utils.h"

LRESULT CALLBACK Window_Print_Book(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
LRESULT CALLBACK Window_Insert_Book(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
LRESULT CALLBACK Window_Search_Book(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
LRESULT CALLBACK Windwow_Loan_book(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
LRESULT CALLBACK Window_return_book(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

int print_Book();
int insert_Book();
int search_Book();
int loan_book();
int return_book();



#endif // WINDOW_BOOK_FUNCTIONS_H
