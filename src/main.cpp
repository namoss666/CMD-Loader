#include <Windows.h>
#include <iostream>
#include <string>
#include "../ext/lazy_importer.hpp"
#include "../ext/skStr.h"

static void namoss(const char* namoss) {
    std::cout << namoss << std::endl;
}
static void namoss2(const char* namoss) {
    std::cout << namoss;
}
static void banner(HANDLE hConsole) {
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    system(skCrypt("cls"));
    SetConsoleTitleA(skCrypt("Made By Namoss"));
    namoss(skCrypt(R"( 
  _   _          __  __  ____   _____ _____  
 | \ | |   /\   |  \/  |/ __ \ / ____/ ____| 
 |  \| |  /  \  | \  / | |  | | (___| (___   
 | . ` | / /\ \ | |\/| | |  | |\___ \\___ \  
 | |\  |/ ____ \| |  | | |__| |____) |___) | 
 |_| \_/_/    \_\_|  |_|\____/|_____/_____/  
)"));
    namoss(skCrypt(" Made by Namoss"));
    namoss(skCrypt(" discord.gg/JapwN4FRKD"));
    namoss(skCrypt(" User : namoss | pass : 1"));
    namoss(skCrypt(""));
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    std::string username, password;
    bool authenticated = false;
    banner(hConsole);
    // here is the auth part btw
    namoss2(skCrypt("User: "));
    std::getline(std::cin, username);
    namoss2(skCrypt("Pass: "));
    std::getline(std::cin, password);
    if (username == ("namoss") && password == ("1")) {
        authenticated = true;
    }
    else {
        namoss(skCrypt("wrong username or password"));
        authenticated == true; // continiue to the main menu skips the auth part
        //system("pause");
        //return 0;
    }
    int option{};
    while (authenticated) {
        banner(hConsole);
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        namoss(skCrypt("[1] Load cheetos"));
        namoss(skCrypt("[2] Load spoofo"));
        namoss(skCrypt("[3] Exit"));
        namoss2(skCrypt("[/] Option: "));
        if (!(std::cin >> option)) {
            std::cin.clear();
            std::cin.ignore(INT_MAX, ('\n'));
            continue;
        }
        switch (option) {
        case 1:
            namoss(skCrypt("\nLoading..."));
            Sleep(1000);
            break;
        case 2:
            namoss(skCrypt("\nLoading..."));
            Sleep(1000);
            break;
        case 3:
            namoss(skCrypt("\nExiting..."));
            Sleep(800);
            ExitProcess(0);
            break;
        default:
            namoss(skCrypt("\nUnknown option"));
            Sleep(1000);
            break;
        }
    }
    return 0;
}
