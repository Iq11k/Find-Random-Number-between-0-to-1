#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<time.h>
using namespace std;

int main(){
    int     maxValues = 10;
    double  rate = 0.75;
    double  random;
    double  randomValues[maxValues];

    // generate random seed for srand
    srand(time(0));


    for (int i = 0; i < maxValues; i++){
        random = (double)rand()/RAND_MAX; //generate random Number
        randomValues[i] = random;
        cout << fixed << setprecision(2) << randomValues[i] << endl;
    }

    // declare minimum and maximum variable
    double minNum, maxNum;
    
    cout << endl;

    // input the last number upper the rate to the minimum Number variable
    for (int a = 0; a < maxValues; a++){
        if (randomValues[a] > rate){
            minNum = randomValues[a];
        }
    }

    // find the minimum and maximum number
    for (int a = 0; a < maxValues; a++){
        if (randomValues[a] > rate){
            cout << fixed << setprecision(2) << randomValues[a] << endl;
            
            // minimum Number
            if (randomValues[a] < minNum){
                minNum = randomValues[a];
            }

            // maximum Number
            else if (randomValues[a] > maxNum){
                maxNum = randomValues[a];
            }
        }
    }

    cout << "\nMax namber = " << maxNum << "\nMin number = " << minNum;

}
