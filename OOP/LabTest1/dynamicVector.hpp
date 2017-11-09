//
//  dynamicVector.hpp
//  test1
//
//  Created by Olteanu Andrei on 10/04/2017.
//  Copyright © 2017 Olteanu Andrei. All rights reserved.
//

#ifndef dynamicVector_hpp
#define dynamicVector_hpp

#include <stdio.h>

#include "domain.hpp"

typedef Project TElement;

class DynamicVector
{
private:
    TElement* elems;
    int size;
    int capacity;
public:
    // Defaul constructor for a Dynamic Vector
    DynamicVector(int capacity=10);
    // Copy constructor for a dynamic vector
    DynamicVector(const DynamicVector& v);
    ~DynamicVector();
    
    
    // assignment operator for a DynamicVector
    DynamicVector& operator=(const DynamicVector& v);
    
    // Adds an element to the current DynamicVector.
    void add(const TElement& e);
    
    int getSize() const;
    TElement* getAllElems() const;
    
private:
    // Resizes the current DynamicVector, multiplying its capacity by a given factor (real number).
    void resize(double factor = 2);
};


#endif /* dynamicVector_hpp */
