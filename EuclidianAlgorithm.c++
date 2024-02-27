#include<iostream>
#include<math.h>
using namespace std;

int main()  {
    int firstNum;
    int secondNum;
    int greaterNum;
    int tempGreaterNum;
    int lesserNum;
    int greatestAlly;

    cin >> firstNum;
    cin >> secondNum;

    if (firstNum > secondNum) {
        greaterNum = firstNum;
    }
    else if (secondNum > firstNum)  {
        greaterNum = secondNum;
    } 
    else {
        greaterNum = firstNum;
        lesserNum = secondNum;
    }

// this below will give the GCD
    while (lesserNum != 0) {
        tempGreaterNum = lesserNum;
        lesserNum = greaterNum % lesserNum;
        greaterNum = tempGreaterNum; 
    }

    return 0;
}