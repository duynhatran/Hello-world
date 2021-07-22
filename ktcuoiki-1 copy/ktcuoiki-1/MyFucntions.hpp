//
//  MyFucntions.hpp
//  ktcuoiki-1
//
//  Created by Tran Nhat Duy on 15/07/2021.
//

#ifndef MyFucntions_hpp
#define MyFucntions_hpp

#include <iostream>
#include <fstream>
using namespace std;

struct student{
    char* name;
    char* classname;
    int id;
    float grade;
};

struct node{
    student student;
    node* pnext;
};

struct list {
    node* phead;
    node* ptail;
};

node* createnode();
void createlist(list &l);
void addtail(node* p, list& l);
void printlist(list l);
void output(list l);
void Ouput2(list l);
void writing(list l);
#endif /* MyFucntions_hpp */
