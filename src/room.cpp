#include "../include/room.h"

room::room(int l)
{
    limit = l;
}


void room::print()
{
    for(auto it:V)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
