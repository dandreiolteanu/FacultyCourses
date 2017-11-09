//
//  controller.cpp
//  test1
//
//  Created by Olteanu Andrei on 10/04/2017.
//  Copyright © 2017 Olteanu Andrei. All rights reserved.
//

#include "controller.hpp"

#include "domain.hpp"


void Controller::addProjectToRepository(const std::string& name, const std::string& customer,int day,int month,int year,const int cost,const bool isDone)
{
    Project p{ name, customer, day ,month, year, cost, isDone } ;
    this->repo.addProject(p);
//    adds a project in the repository
}

