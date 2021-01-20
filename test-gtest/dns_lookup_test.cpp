#include <gtest/gtest.h>
#include "DnsLookup.h"
#include "RecentlyUsedList.h"
#include <ApprovalTests.hpp>

using namespace std;

TEST(DNSCacheTest, LookupWithoutCache) {
    DnsLookup lookup(0);
    lookup.insert("example.com", "1.2.3.4");

    const std::string value = lookup.at("example.com");
    ApprovalTests::Approvals::verifyAll("Cached Keys", lookup.cachedKeys());
}

TEST(DNSCacheTest, LookupWithCache) {
    DnsLookup lookup(1);
    lookup.insert("example.com", "1.2.3.4");

    const std::string value = lookup.at("example.com");
    ApprovalTests::Approvals::verifyAll("Cached Keys", lookup.cachedKeys());
}