#include <iostream>
#include "FileManager.cpp"

int main() {
    FileManager fm("moods.txt");
    fm.appendLine("Melika");
    fm.appendLine("Agnesa");
    fm.appendLine("Adelina");
    fm.appendLine("Alina");

    return 0;
}
