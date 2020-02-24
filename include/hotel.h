#ifndef ROOM_H 
#define ROOM_H
#include "room.h"

class hotel{
    public:
    vector<room*> P;
    int room_count;
    void setlimit(int n);
    void insert(int patient);
    bool search(int patient,int k);
    hotel(int l):room_count(l){}
};
