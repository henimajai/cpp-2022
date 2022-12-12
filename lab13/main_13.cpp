#include <iostream>
#include "myifstream.h"
#include "Huffman.h"

using namespace std;

int main() {
//    myifstream f("be.txt");
//    cout << f.filesize() << endl;
//    for( int i=0; i <f.filesize(); ++i){
//        cout << (int)f[i] << endl ;
//    }
//    cout << endl;
    Huffman huffman("be.txt");

    return 0;
}