//
// Created by Top1s on 8/21/2019.
//

#ifndef BIP47_TYPEDEFS_H
#define BIP47_TYPEDEFS_H

#include <vector>
#include <set>
#include <string>

typedef std::vector<unsigned char> bytes_t;
typedef std::vector<unsigned char> secure_bytes_t;

typedef std::vector<bytes_t> hashvector_t;
typedef std::set<bytes_t> hashset_t;

typedef std::string secure_string_t;

typedef std::vector<int> ints_t;
typedef std::vector<int> secure_ints_t;

#endif //BIP47_TYPEDEFS_H
