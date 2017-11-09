//
//  domain.cpp
//  test1
//
//  Created by Olteanu Andrei on 10/04/2017.
//  Copyright © 2017 Olteanu Andrei. All rights reserved.
//

#include "domain.hpp"
using namespace std;
Project::Project(): name(""),customer(""),day(),month(),year(),cost(),isDone(false){}
Project::Project(const string &name,const string &customer,const int day,const int month,const int year, const int cost,const bool isDone)
{
    this->name = name;
    this->customer = customer;
    this->day = day;
    this->month = month;
    this->year = year;
    this->cost = cost;
    this->isDone = isDone;
}


