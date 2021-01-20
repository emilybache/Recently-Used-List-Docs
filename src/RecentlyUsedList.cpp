#include <algorithm>
#include <stdexcept>
#include "RecentlyUsedList.h"


RecentlyUsedList::RecentlyUsedList(size_t capacity)
: capacity_(capacity)
{

}
bool RecentlyUsedList::empty() {

    return queue.empty();
}

void RecentlyUsedList::add(const std::string &string) {

    if (string.empty())
    {
        return;
    }

    auto it = std::find(queue.begin(), queue.end(), string);
    if ( it != queue.end())
    {
        queue.erase(it);
    }
    queue.insert(queue.begin(), string);

    if (size() > capacity_)
    {
        queue.erase(queue.end());
    }

}

std::string RecentlyUsedList::get(const int index) {
    if(queue.size() > capacity_)
    {
        throw std::out_of_range("Index out of bounds");
    }

    return queue.at(index);
}

size_t RecentlyUsedList::size() {
    return queue.size();
}
