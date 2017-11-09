//
//  domain.hpp
//  test1
//
//  Created by Olteanu Andrei on 10/04/2017.
//  Copyright © 2017 Olteanu Andrei. All rights reserved.
//

#ifndef domain_hpp
#define domain_hpp

#include <stdio.h>
#include <string>
using namespace std;
#include <iostream>


class Project {
private:
    string name;
    string customer;
    int day,month,year;
    int cost;
    bool isDone;
public:
    Project();
    Project(const string &name,const string &customer,const int day,const int month,const int year,const int cost,const bool isDone);
//    constructor for a Project
    
        
        string getName() const{return name;}
        string getCustomer() const{return customer;}
        int getDay() const{return day;}
        int getMonth() const{return month;}
        int getYear() const{return year;}
        int getCost() const{return cost;}
        bool getIsDone() const{return isDone;}
    
};

#endif /* domain_hpp */
