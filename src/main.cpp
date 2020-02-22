#include "../include/hotel.h"
int main() {
    int n;
    cin>>n;
    int p;
    cin>>p;
    hotel H(p);
    while(p--)
    {
     int i;
     cin>>i;
     H.setlimit(i);
    }
    while(n--)
    {
     int a,b;
     cin>>a>>b;
     switch(a)
     {
         case 1:H.insert(b);
                break;
         case 2:H.search(b);
                break;
     }
    }
    return 0;
}
