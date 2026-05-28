#include "../node.h"
#include <bits/stdc++.h>
using namespace std;

int count(node *start){
    int c=0;
    node *ptr=start;
    while(ptr!=nullptr){
        c++;
        ptr=ptr->next;
    }
    return c;
}