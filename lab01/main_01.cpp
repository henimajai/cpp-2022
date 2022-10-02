#include <iostream>
#include <sstream>
#include <string>
#include "functions.h"
using namespace std;

    void test_function1();
    void test_function2();
    void test_function3();
    void test_function4();
    void test_function5();

    //STRING
    void testString_1();
    void testString_2();
    void testString_3();
    void testString_4();


    int main(){
        //1.pozitiv egesz szam egyes bitjeinek a szama bitmuveleteket hasznalva
        //test_function1();

        //2.egy szam adott sorszamu bitjet egyesre allit
        //test_function2();

        //3.atlag szamitas
        //test_function3();

        //4.standard deviation
        //test_function4();

        //5.maxi
        //test_function5();

        //EXERCISES WITH STRING
        //1.szamok osszege
        //testString_1();

        //2.szavak szama
        //testString_2();

        //3.code-decode
        //testString_3();

        //4.toupper
        string text;
        cout << "Enter a text: " << endl;
        getline(cin, text);
        cout << capitalizeWords(text);




    }

    void test_function1(){
        for(int i=0; i< 128 ; ++i){
            cout << i << " egyes bitjeinek szama " << countBits( i ) << endl;
        }
    }

    void test_function2(){
        for (int i = 0; i < 35; ++i) {
            int n = 0;
            if(setBit(n, i)){
                cout<<i<<" ---> " << n <<endl;
            }else{
                cout<<"Impossible operation!" << endl;
            }
        }

    }

    void test_function3(){
        int number;
        cout << "Enter a positive number: " << endl;
        cin >> number;
        double array[number];
        cout << "Enter " << number << " numbers: ";
        for(int i = 0; i < number; i++){
            cin >> array[i];
        }

        cout << "mean = " << mean(array,number);

    }

    void test_function4(){
        int number;
        cout << "Enter a positive number: " << endl;
        cin >> number;
        double array[number];
        cout << "Enter " << number << " numbers: ";
        for(int i = 0; i < number; i++){
            cin >> array[i];
        }

        cout << "standard deviation = " << stddev(array,number);
    }

    void test_function5(){
        int number;
        cout << "Enter a positive number: " << endl;
        cin >> number;
        double array[number];
        cout << "Enter " << number << " numbers: ";
        for(int i = 0; i < number; i++){
            cin >> array[i];
        }
        if(max2(array, number).first < max2(array,number).second) {
            cout << max2(array, number).first << "," << max2(array, number).second;
        }
        else {
            cout << max2(array, number).second << "," << max2(array, number).first;
       }
    }

    void testString_1(){
        cout << " Sum of numbers = " << sumOfNumbers("122alma345");

    }

    void testString_2() {
        cout<< "Nr. of words = " << countWords("Avada Kedavra") << endl;
}

    void testString_3(){
        cout << "coded: " << code("alma") <<  endl;
        cout<< "decoded: " << decode(code("alma")) << endl;
    }




