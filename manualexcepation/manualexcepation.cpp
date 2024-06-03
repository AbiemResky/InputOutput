#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main()
{
    try {
        cout << "selamat belajar di prodi umy" << endl;
        cout << "peryataan tidak akan dieksekusi" << endl;
    }
    catch (int a) {
        cout << "pengecualian akan dieksekusi" << endl;
    }
    catch (...) {
        cout << "default pengecualian dieksekusi" << endl;
    }
    return 0;
}

