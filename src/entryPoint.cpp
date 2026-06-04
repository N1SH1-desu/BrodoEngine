#include <windows.h>

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInnstance, PWSTR pCmdLine, int nCmdShow) {
    MessageBoxW(NULL, L"Hello, World!", L"Hello", MB_OK);
    return 0;
}
