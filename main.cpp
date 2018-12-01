//
//  main.cpp
//  Hash
//
//  Created by Jonathan  Nieves on 11/29/18.
//  Copyright © 2018 Jonathan  Nieves. All rights reserved.
//

#include <iostream>
#include "HashTable.hpp"
int main(int argc, const char * argv[]) {
    HashTable hash;
    
    hash.insert("Jonathan", 1234567);
    std::cout << hash.search("Jonathn");
    return 0;
}
