#include <iostream>
#include "clsString.h"
using namespace std;


int main()
{
    clsString S1("Moataz     Mounir      Abd El-Azim     Mahran");

    cout << "Num of words is: " << clsString::CountWords("Moataz Mounir Abd El-Azim Mahran") << endl;
    cout << "Num of words is: " << S1.CountWords()<< endl;
}
