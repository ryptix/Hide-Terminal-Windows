#define _WIN32_WINNT 0x0500
#include <Windows.h>
#pragma comment(lib,"user32.lib") 

int main() {
    ShowWindow(GetConsoleWindow(), SW_HIDE);
}
