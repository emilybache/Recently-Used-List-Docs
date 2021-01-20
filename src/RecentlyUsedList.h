//
// Created by ec2-user on 1/12/21.
//

#ifndef RECENTLYUSEDLIST_RECENTLYUSEDLIST_H
#define RECENTLYUSEDLIST_RECENTLYUSEDLIST_H


#include <string>
#include <vector>


class RecentlyUsedList {
public:
    RecentlyUsedList() = default;
    RecentlyUsedList(size_t capacity);
    bool empty();

    size_t size();

    void add(const std::string &string);
    std::string get(const int index);


   std::vector<std::string> queue;
   size_t capacity_ = 100;
};


#endif //RECENTLYUSEDLIST_RECENTLYUSEDLIST_H
