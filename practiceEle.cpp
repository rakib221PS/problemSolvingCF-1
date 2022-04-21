#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int x=99999;
    float arrayOfSteps[5];
    int arrayOfStepsInterger[5];
    float arrayOfStepsFraction[5];
    
    // cin >> x;
    // arrayOfSteps[0] = ceil(x / (double)5);
    // arrayOfSteps[1] = ceil(x / (double)4);
    // arrayOfSteps[2] = ceil(x / (double)3);
    // arrayOfSteps[3] = ceil(x / (double)2);
    // arrayOfSteps[4] = ceil(x / (double)1);
    // arrayOfSteps[0] = x / (float)5;
    // cout<<arrayOfSteps[0]-floor(arrayOfSteps[0])<<endl;
    // arrayOfSteps[1] = x / (float)4;
    // arrayOfSteps[2] = x / (float)3;
    // arrayOfSteps[3] = x / (float)2;
    // arrayOfSteps[4] = x / (float)1;
    for (int i = 0; i < 5; i++)
    {
        arrayOfSteps[i] = x / (float)(i+1);
        arrayOfStepsInterger[i] = x / (i+1);
        arrayOfStepsFraction[i] = arrayOfSteps[i]-floor(arrayOfSteps[i]);
    }
    
    // int minimum = arrayOfSteps[0];
    for (int i = 0; i < 5; i++)
    {
        cout<<"1st  "<<arrayOfSteps[i]<<endl;
        cout<<"2nd  "<<arrayOfStepsFraction[i]<<endl;
        cout<<"Integer "<<arrayOfStepsInterger[i]<<endl;
    }

    return 0;
}