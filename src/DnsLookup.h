#ifndef RECENTLY_USED_LIST_DOCS_DNSLOOKUP_H
#define RECENTLY_USED_LIST_DOCS_DNSLOOKUP_H

#include <string>
#include <map>
#include "RecentlyUsedList.h"

class DnsLookup {
public:
    explicit DnsLookup(int cacheSize);

    void insert(const std::string& key, const std::string& value);
    std::string at(const std::string& key);

    std::vector<std::string> cachedKeys() const;

private:
    std::map<std::string, std::string> contents;
    RecentlyUsedList cache;
};


#endif //RECENTLY_USED_LIST_DOCS_DNSLOOKUP_H
