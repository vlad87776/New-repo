#include <windows.h>
#include <shellapi.h>

int main() {
    // Используем ShellExecute для открытия проводника
    // "open" — действие
    // "explorer.exe" — что открываем
    // NULL — параметры, директория и режим отображения
    ShellExecute(NULL, "open", "explorer.exe", NULL, NULL, SW_SHOWNORMAL);
    
    return 0;
}
