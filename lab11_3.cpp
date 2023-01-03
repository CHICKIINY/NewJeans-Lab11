#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include <iomanip>
using namespace std;

int main()
{
    int count = 0;
    float sum1 = 0, sum2 = 0;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline))
    {
        count++;
        sum1 += atof(textline.c_str());
        sum2 += pow(atof(textline.c_str()),2);
    }
    float mean;
    float sd;
    mean = sum1/count;
    sd = sqrt((sum2/count)-pow(mean,2));
    cout << setprecision(3);
    cout << "Number of data = " << count <<'\n';
    cout << "Mean = " << mean <<'\n';
    cout << "Standard deviation = " << sd <<'\n';
}