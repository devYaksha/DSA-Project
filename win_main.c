#include "./src/window_functions/window_utils.h"

//Compile: 
// ./compile.bat
// ./window.exe

LRESULT CALLBACK WindowProc_Main(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_CREATE: {

            createButton(hwnd, "Adicionar Livro", ID_ADD_BOOK, DISTANCE_BUTTONS_X, 1);
            createButton(hwnd, "Buscar Livro", ID_SEARCH_BOOK, DISTANCE_BUTTONS_X, DISTANCE_BUTTONS_Y * 1);
            createButton(hwnd, "Realizar Emprestimo", ID_LOAN_BOOK, DISTANCE_BUTTONS_X, DISTANCE_BUTTONS_Y * 2);
            createButton(hwnd, "Realizar Devolucao", ID_RETURN_BOOK, DISTANCE_BUTTONS_X, DISTANCE_BUTTONS_Y * 3);
            createButton(hwnd, "Registrar Funcionario", ID_ADD_EMPLOYEE, DISTANCE_BUTTONS_X * 20, 1);
            createButton(hwnd, "Buscar Funcionario", ID_SEARCH_EMPLOYEE, DISTANCE_BUTTONS_X * 20, DISTANCE_BUTTONS_Y * 1);
            createButton(hwnd, "Resetar Banco de Dados", ID_RESET_DB, DISTANCE_BUTTONS_X * 20, DISTANCE_BUTTONS_Y * 2);
            createButton(hwnd, "Criar Base Ordenada", ID_CREATE_SORTED_DB, DISTANCE_BUTTONS_X * 40, 1);
            createButton(hwnd, "Criar Base Desordenada", ID_CREATE_UNSORTED_DB, DISTANCE_BUTTONS_X * 40, DISTANCE_BUTTONS_Y * 1);
            createButton(hwnd, "Quick Sort", ID_INSERTION_SORT, DISTANCE_BUTTONS_X * 40, DISTANCE_BUTTONS_Y * 2);
            createButton(hwnd, "Selecao natural", ID_INTERNAL_CLASSIFICATION, DISTANCE_BUTTONS_X * 40, DISTANCE_BUTTONS_Y * 3);
            createButton(hwnd, "Intercalacao Otimo", ID_BASIC_INTERCALATION, DISTANCE_BUTTONS_X * 40, DISTANCE_BUTTONS_Y * 4);
            create_Static_Label(hwnd, "Gui. Santos - Mat. Diniz | AEDS II", SIZE_MAIN_WINDOW_X / 2, SIZE_MAIN_WINDOW_Y - 60, SIZE_BUTTONS_Y * 10, 20, 0);

            break;
        }

        case WM_COMMAND: {
            int wmId = LOWORD(wParam);
            switch (wmId) {
                case ID_ADD_BOOK:
                    create_and_run_window(Window_Insert_Book, "Window_Insert_Book", "Inserir Livro",
                    WS_OVERLAPPEDWINDOW, 100, 100, SIZE_SUB_WINDOW_X, SIZE_SUB_WINDOW_Y);
                    break;

                case ID_SEARCH_BOOK:
                    create_and_run_window(Window_Search_Book, "Window_Search_Book", "Buscar Livro",
                    WS_OVERLAPPEDWINDOW, 100, 100, SIZE_SUB_WINDOW_X, SIZE_SUB_WINDOW_Y);
                    break;

                case ID_LOAN_BOOK:
                    create_and_run_window(Windwow_Loan_book, "Windwow_Loan_book", "Emprestimo de Livros",
                    WS_OVERLAPPEDWINDOW, 100, 100, SIZE_SUB_WINDOW_X, SIZE_SUB_WINDOW_Y);
                    break;

                case ID_RETURN_BOOK:
                    create_and_run_window(Window_return_book, "Window_return_book", "Devolucao de Livros",
                    WS_OVERLAPPEDWINDOW, 100, 100, SIZE_SUB_WINDOW_X, SIZE_SUB_WINDOW_Y);
                    break;

                case ID_ADD_EMPLOYEE:
                    create_and_run_window(Window_Insert_Employee, "Window_Insert_Employee", "Inserir Funcionario",
                    WS_OVERLAPPEDWINDOW, 100, 100, SIZE_SUB_WINDOW_X, SIZE_SUB_WINDOW_Y);
                    break;

                case ID_SEARCH_EMPLOYEE:
                    create_and_run_window(Window_Search_Employee, "Window_Search_Employee", "Buscar Funcionario",
                    WS_OVERLAPPEDWINDOW, 100, 100, SIZE_SUB_WINDOW_X, SIZE_SUB_WINDOW_Y);
                    break;

                case ID_RESET_DB:
                    rmvBin();
                    break;

                case ID_CREATE_SORTED_DB:
                    create_and_run_window(Window_Sorted_DataBase_Search, "Window_Sorted_DataBase_Search", "Criar Base Ordenada",
                    WS_OVERLAPPEDWINDOW, 100, 100, SIZE_SUB_WINDOW_X, SIZE_SUB_WINDOW_Y);
                    break;

                case ID_CREATE_UNSORTED_DB:
                    create_and_run_window(Window_Unsorted_DataBase_Search, "Window_Unsorted_DataBase_Search", "Criar Base Desordenada",
                    WS_OVERLAPPEDWINDOW, 100, 100, SIZE_SUB_WINDOW_X, SIZE_SUB_WINDOW_Y);
                    break;

                case ID_INSERTION_SORT:
                    quicksort_both();
                    break;

                case ID_INTERNAL_CLASSIFICATION:
                    classificacoes(PARTITIONS_PER_STRUCTS);
                    break;

                case ID_BASIC_INTERCALATION:
                    intercalacoes_otimas();
                    break;

                default:
                    error_message("Funcao nao implementada", "Erro 404");
                    break;
            }

            break;
        }

        case WM_DESTROY: {
            PostQuitMessage(0);
            break;
        }

        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }

    return 0;
}

int main() {
    printf("\033[H\033[J\nDebug: Iniciando o programa");


    create_and_run_window(WindowProc_Main, "Window_Main", MAIN_WINDOW_TITLE, 
                        WS_OVERLAPPEDWINDOW, 0, 0, SIZE_MAIN_WINDOW_X, SIZE_MAIN_WINDOW_Y);
}