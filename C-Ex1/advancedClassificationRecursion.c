#include <stdio.h>
#include "NumClass.h"

int isPalindrome2(int num, int dig) {
    int pow = Power(10,dig-1);
    if (num>0) {
        return (num%10)*pow + isPalindrome2(num/10,dig-1);
    }
    return 0;
}

int isArmstrong2(int x, int pow) {
    if (x==0) {
        return 0;
    }
    int temp = Power(x%10,pow);
    return ((temp) + (isArmstrong2(x/10,pow)));
}

int isArmstrong(int x) {
    int counter=numberOfDigits(x);
    int ans = isArmstrong2(x,counter);
    if (ans==x) {
        return 1;
    } else {
        return 0;
    }
}

int isPalindrome(int x) {
    int dig = numberOfDigits(x);
    int sum = isPalindrome2(x,dig);
    if (sum==x) {
        return 1;
    }
    return 0;
}


