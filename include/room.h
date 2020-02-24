#ifndef ROOM_H 
#define ROOM_H
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class room{
    public:
    int limit;
    vector<int> V;
    void print();
    room(int l);
};
#endif
