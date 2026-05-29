#include "../node.h"
#include <bits/stdc++.h>
using namespace std;

void displayLL(node * start){
    node * ptr=start;
    while(ptr!=nullptr){
        cout<<ptr->info<<"\t";
        ptr=ptr->next;
    }cout<<endl;
}