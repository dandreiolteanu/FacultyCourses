//
//  repository.hpp
//  test1
//
//  Created by Olteanu Andrei on 10/04/2017.
//  Copyright © 2017 Olteanu Andrei. All rights reserved.
//

#ifndef repository_hpp
#define repository_hpp

#include <stdio.h>
#include "domain.hpp"
#include "dynamicVector.hpp"

class Repository
{
private:
    DynamicVector projects;
    
public:
    /*
     Default constructuor.
     Initializes an object of type repository.
     */
    Repository() {}
    
    /*
     Adds a project to the repository.
     Input: p - project.
     Output: the project is added to the repository.
     */
    void addProject(const Project& p);
    
    DynamicVector getProjects() const { return projects; }
};






#endif /* repository_hpp */
