#include <stdio.h>

int getFirstDigit(int x,int counter) {
    while (counter>0) {
        x=x/10;
        counter--;
    }
    return x;
}

int numberOfDigits(int x) {
    int counter=0;
    while (x>0) {
        counter++;
        x=x/10;
    }
    return counter;
}

int Power(int num, int Pow) {
    int ans=1;
    for (int i=0;i<Pow;i++) {
        ans=ans*num;
    }
    return ans;
}