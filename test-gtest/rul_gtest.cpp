#include <gtest/gtest.h>
#include "RecentlyUsedList.h"

using namespace std;

TEST(RecentlyUsedList, Empty) {
    RecentlyUsedList rul;
    ASSERT_TRUE(rul.empty());
}

TEST(RecentlyUsedList, EmptyNotAllowed) {
    RecentlyUsedList rul;
    rul.add ("");
    ASSERT_TRUE(rul.empty());
}

TEST(RecentlyUsedList, NotEmpty) {
    RecentlyUsedList rul;
    rul.add ("Ferrari rocks");
    ASSERT_FALSE(rul.empty());
}

TEST(RecentlyUsedList, AddItem) {
    RecentlyUsedList rul;

    rul.add("A string");
    ASSERT_EQ("A string", rul.get(0));
}

TEST(RecentlyUsedList, AddMultipleItems) {
    RecentlyUsedList rul;

    rul.add("A string1");
    rul.add("A string2");

    ASSERT_EQ("A string1", rul.get(1));
    ASSERT_EQ("A string2", rul.get(0));
}

TEST(RecentlyUsedList, AddDuplicatedItems) {
    RecentlyUsedList rul;

    rul.add("A string2");
    rul.add("A string1");
    rul.add("A string1");

    ASSERT_EQ("A string1", rul.get(0));
    ASSERT_EQ("A string2", rul.get(1));
}

TEST(RecentlyUsedList, ConstructWithCapacity) {
    RecentlyUsedList rul(5);

    rul.add("A string");
    ASSERT_EQ("A string", rul.get(0));
}

TEST(RecentlyUsedList, Overcapacity) {
    RecentlyUsedList rul(1);

    rul.add("1");
    rul.add("2");
    ASSERT_THROW(rul.get(1), std::out_of_range);
}

TEST(RecentlyUsedList, CapacityOverflow) {
    RecentlyUsedList rul(1);

    rul.add("1");
    rul.add("2");

    ASSERT_EQ(1, rul.size());
}

TEST(RecentlyUsedList, TheABCBug) {
    RecentlyUsedList rul(3);

    rul.add("A");
    rul.add("B");
    rul.add("C");
    rul.add("B");

    ASSERT_EQ(rul.get(0), "B");
    ASSERT_EQ(rul.get(1), "C");
    ASSERT_EQ(rul.get(2), "A");

}

TEST(RecentlyUsedList, AnotherBug) {
    RecentlyUsedList rul(3);
    ASSERT_THROW(rul.get(1), std::out_of_range);
}
