#include "../include/hotel.h"
void hotel::setlimit(int n)
{
    room* ptr=new room(n);
    P.push_back(ptr);
}
void hotel::insert(int patient)
{
    if(search(patient,0)){
        cout<<-1<<endl;
        return;
    }
    int j=(patient%room_count);
    room* r=P[j];
    if(r->V.size()<r->limit){
        r->V.push_back(patient);
        return;
    }
    int i=(j+1)%room_count;
    while(i!=j)
    {    
        r=P[i];
        if(r->V.size()<r->limit)
        {
            r->V.push_back(patient);
            return;
        }
        i++;
        i=i%(room_count);
    }
    cout<<-1<<endl;
}
bool find(room* ptr,int patient)
{
    std::vector<int>::iterator it;
    it=std::find(ptr->V.begin(),ptr->V.end(),patient);
    if(it==ptr->V.end())
        return false;
    return true;
}
bool hotel::search(int patient,int k=1)
{
    int j=(patient%room_count);
    room* r=P[j];
    if(find(r,patient))
    {
        if(k==1)
            r->print();
        return true;
    }
    int i=(j+1)%room_count;
    while(i!=j)
    {
        r=P[i];
        if(find(r,patient))
        {
            if(k==1)
                r->print();
            return true;
        }
        i++;
        i=i%(room_count);
    }
    if(k==1)
        cout<<-1<<endl;
    return false;
}
