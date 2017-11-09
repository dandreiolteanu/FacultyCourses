//
//  controller.hpp
//  test1
//
//  Created by Olteanu Andrei on 10/04/2017.
//  Copyright © 2017 Olteanu Andrei. All rights reserved.
//

#ifndef controller_hpp
#define controller_hpp

#include <stdio.h>

#include "repository.hpp"
#include "domain.hpp"

class Controller
{
private:
    Repository repo;
    
public:
    Controller(const Repository& r) : repo(r) {}
    
    Repository getRepo() const { return repo; }
    
    // Adds a project with the given data to the project repository.
    void addProjectToRepository(const std::string& name, const std::string& customer,int day,int month,int year,const int cost,const bool isDone);
    
};




#endif /* controller_hpp */
