#include "DnsLookup.h"

void DnsLookup::insert(const std::string& key, const std::string& value) {
    contents.insert({key, value});
}

std::string DnsLookup::at(const std::string& key) {
    std::string value = contents.at(key);
    cache.add(key);
    return value;
}

DnsLookup::DnsLookup(int cacheSize) : cache(RecentlyUsedList(cacheSize)) {
}

std::vector<std::string> DnsLookup::cachedKeys() const {
    return cache.queue;
}
