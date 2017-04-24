#include <cstdlib>
#include <iostream>
#include <windows.h>

using namespace std;
extern "C" __declspec(dllimport) int URLDownloadToFileA(int pCaller, char* szURL, char* szFileName, int dwReserved, int lpfnCB);

int main(int argc, char *argv[])
{
    cout << "Simple WGET for Windows" << endl;
    
    if(argc < 3){
            cout << "Error\n" << endl;
    }else{
        HRESULT result = URLDownloadToFileA(0, argv[1], argv[2], 0, 0);
    
        if(result == S_OK) {
            cout << "Complete\n" << endl;
        }else {
            cout << "Error\n" << endl;
        }       
    }
    
    return EXIT_SUCCESS;
}
