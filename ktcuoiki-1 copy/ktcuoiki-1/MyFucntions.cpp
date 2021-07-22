#include "MyFucntions.hpp"
node* createnode(){
    node*p = new node;
    
    char* s = new char[20];
    cout<<"enter name: ";
    cin.getline(s, 20,'\n');
    
    p->student.name = s;
    
    char* q =new char[20];
    cout<<"enter classname: ";
    cin.getline(q, 20, '\n');
    
    p->student.classname  = q;
    
    int id;
    cout<<"enter id: ";
    cin>>id;
    
    p->student.id = id;
    
    float grade;
    cout<<"enter grade: ";
    cin>>grade;
    cin.ignore();
    
    p->student.grade = grade;
    
    p->pnext = NULL;
    delete [] s;
    delete [] q;
    return p;

}

void createlist(list &l){
    l.phead = l.ptail = NULL;
}


void addtail(node* p, list& l){
    if(l.phead == NULL){
        l.phead = l.ptail = p;
    }else{
        l.ptail->pnext = p;
        l.ptail = p;
    }
}
void addhead(node*p, list& l){
    if(l.phead == NULL){
        l.phead = l.ptail = p;
    }else{
        p->pnext = l.phead;
        l.phead = p;
    }
}
void printlist(list l){
    node* p =l.phead;
    while(p != NULL){
        cout<<p->student.grade<<"->";
        p = p->pnext;
    }
    if(p==NULL){
        cout<<"NULL\n";
    }
}

void output(list l){
    float max = l.phead->student.grade;
    node* p = l.phead->pnext;
    while(p != NULL){
        if(max <= p->student.grade){
            max = p->student.grade;
        }
        p = p->pnext;
    }
    while(l.phead !=  NULL){
        if(max == l.phead->student.grade){
            cout << l.phead->student.grade << endl;
        }
        l.phead = l.phead->pnext;
    }
}
void Ouput2(list l){
    for(node*p = l.phead;p!=NULL;p=p->pnext){
        for(node*t=p->pnext;t!= NULL;t =t->pnext){
            if(p->student.grade > t->student.grade){
                float temp = p->student.grade;
                p->student.grade = t->student.grade;
                t->student.grade = temp;
            }
        }
    }
    printlist(l);
}
void writing(list l){
    ofstream fout;
    fout.open("output.txt",ios::out);
    if(fout.is_open()){
        while(l.phead != NULL){
            fout << l.phead->student.grade <<" ";
            l.phead= l.phead->pnext;
        }
    }
    fout.close();
}

