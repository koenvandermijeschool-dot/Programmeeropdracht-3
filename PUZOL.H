#ifndef PUZZEL_H
#define PUZZEL_H

#include <vector>
#include <iostream>
using namespace std;

class Puzzel {
private:
    vector<vector<int>> dePuzzel;
    int hoogte, breedte;
    double percentage;
    int randomNum;

    int randomgetal();

public:
    Puzzel(int h = 5, int b = 5, double p = 50.0);
    void maakschoon();
    void drukaf();
    void maakrandom();
    void setPercentage(double p);
    void setHoogte(int h);
    void setBreedte(int b);
};

#endif
