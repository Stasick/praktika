#include <iostream>
#include <fstream>
#include <cstdlib>
#include "string"
#include <Windows.h>

using namespace std;
FILE* fp;
int main(int argc, char* argv[])
{

    WIN32_FIND_DATA FindFileData;
    HANDLE hf;
    LPCWSTR s = L"c:\\*.*";
    hf = FindFirstFile(s, &FindFileData);
    if (hf != INVALID_HANDLE_VALUE) {
        do {
            printf("%S\n", FindFileData.cFileName);
        } while (FindNextFile(hf, &FindFileData) != 0);
        FindClose(hf);
    }

    system("pause");
    return 0;
}

