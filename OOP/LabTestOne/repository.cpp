//
//  repository.cpp
//  test1
//
//  Created by Olteanu Andrei on 10/04/2017.
//  Copyright © 2017 Olteanu Andrei. All rights reserved.
//

#include "repository.hpp"

using namespace std;

void Repository::addProject(const Project& p)
{
    this->projects.add(p);
}
