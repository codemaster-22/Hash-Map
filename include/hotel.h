#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <room.h>
using namespace std;

class hotel{
    public:
    vector<room*> P;
    int room_count;
    void setlimit(int n);
    void insert(int patient);
    bool search(int patient,int k);
    hotel(int l):room_count(l){}
};
