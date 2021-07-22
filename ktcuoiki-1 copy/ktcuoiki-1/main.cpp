#include "MyFucntions.hpp"
int main(){
    list l;
    createlist(l);
    node* p = NULL;
    node* t =NULL;
    node* z = NULL;
    node* m = NULL;
    p = createnode();
    t = createnode();
    z = createnode();
    m = createnode();
    addtail(p, l);
    addtail(t, l);
    addtail(z, l);
    addtail(m, l);
    printlist(l);
    output(l);
    Ouput2(l);
    writing(l);
    delete p;
    delete t;
    delete z;
}
