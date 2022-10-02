//
// Created by Heni on 9/30/2022.
//

#include "functions.h"
int countBits(int number){
    int counter = 0;
    while(number > 0){
        if((number & 1) == 1){
            ++counter;
        }
        number = number >> 1;
    }
    return counter;
}

bool setBit(int& number, int order){

    if(order > 31 || order < 0){
        return false;
    }
    else{
        number = ((1 << order) | number);
        return true;
    }


}

double mean(double array[], int numElements){
    if(array == NULL)
        return NAN;
    double sum = 0;
    double mean = 0;

    for(int i = 0; i < numElements; i++){
        sum += array[i];
    }

    mean = sum / numElements;
    return mean;
}

double stddev(double array[], int numElements){
    if(array == NULL )
        return NAN;

    double deviation = 0;
    double meanRes = mean(array, numElements);

    for(int i = 0; i < numElements; i++){
        deviation += pow(array[i] - meanRes, 2);
    }
    return sqrt(deviation / numElements);

}

pair<double, double> max2(double *array, int numElements) {

    if( array == NULL){
        return make_pair(NAN, NAN);
    }

    double maxi1 = array[0], maxi2 = array[0];

    if(numElements == 1){
        return make_pair(array[0], array[0]);
    }

    else {

        for (int i = 0; i < numElements; ++i) {
            if (array[i] > maxi1) {
                maxi2 = maxi1;
                maxi1 = array[i];
            }
            else if(array[i] > maxi2){
                maxi2 = array[i];
            }
        }
        return make_pair(maxi1, maxi2);
    }

}

int sumOfNumbers(string str) {
    int sum = 0;
    for(char ch : str){
        if(isdigit(ch)){
            sum += ch - '0'; //ki kell vonni belole 48at hogy megkapjuk a szamot
        }
    }
    return sum;
}

int countWords(string text) {
    int nrOfWords = 0, length = text.size();
    for( int i = 0; i < length; i++){
        if(text[i] == ' '){
            nrOfWords++;
        }
    }
    nrOfWords++; //legutolso nincs beleszamolva ezert noveljuk egyel
    return nrOfWords;
}

string code(string text) {
    int i = 0;
    while( text[i] != '\0'){
        if(text[i] >= 'a' && text[i] <= 'z'){
            if(text[i] == 'z')
                text[i] = 'a';
            else text[i] += 1;

        }
        if(text[i] >= 'A' && text[i] <= 'Z'){
            if(text[i] == 'Z')
                text[i] = 'A';
            else text[i] += 1;

        }
        i++;
    }
    return text;
}

string decode(string text) {
    int i = 0;
    while( text[i] != '\0'){
        if(text[i] >= 'a' && text[i] <= 'z'){
            if(text[i] == 'a')
                text[i] = 'z';
            else text[i] -= 1;

        }
        if(text[i] >= 'A' && text[i] <= 'Z'){
            if(text[i] == 'A')
                text[i] = 'Z';
            else text[i] -= 1;

        }
        i++;
    }
    return text;
}

string capitalizeWords(string text) {
    text[0] = toupper(text[0]);

    for(int i  = 1; i < text.length(); i++){
        if(text[i-1] == ' '){
            text[i] = toupper(text[i]);
        }
        else {
            text[i] = tolower(text[i]);
        }
    }
    return text;
}

