#include <gtest/gtest.h>
#include "../List.h"

TEST(ListTest, DefaultConstructorTest) {
    auto ll1 = List<int>();

    ASSERT_EQ(ll1.getSize(), 0);
    ASSERT_EQ(ll1.getHead(), nullptr);
}

TEST(ListTest, ListGrowsAndShrinks) {
    List<int> ll1;

    ll1.push_back(5);
    ll1.push_front(6);
    ll1.push_back(7);
    ll1.push_front(8);
    ll1.push(9,2);

    ASSERT_EQ(ll1.getSize(), 4);

    ll1.pop_back();
    ll1.pop_front();

    ASSERT_EQ(ll1.getSize(), 2);
}

TEST(ListTest, CopyConstructorTest) {
    List<int> ll1;
    ll1.push_back(5);
    ll1.push_front(6);
    ll1.push_back(7);
    ll1.push_front(8);
    ll1.push(9,2);

    ASSERT_EQ(ll1.getSize(), 4);

    List<int> ll2 = List<int>(ll1);

    ASSERT_EQ(ll1.getHead()->data, ll1.getHead()->data);
    ASSERT_EQ(ll1.getSize(), ll1.getSize());
}

TEST(ListTest, CopyAssignTest) {
    List<int> ll1;
    ll1.push_back(5);
    ll1.push_front(6);
    ll1.push_back(7);
    ll1.push_front(8);
    ll1.push(9,2);

    ASSERT_EQ(ll1.getSize(), 4);

    List<int> ll2 = ll1;

    ASSERT_EQ(ll1.getHead()->data, ll1.getHead()->data);
    ASSERT_EQ(ll1.getSize(), ll1.getSize());
}

TEST(ListTest, MoveConstructorTest) {
    List<int> ll1;
    ll1.push_back(5);
    ll1.push_front(6);
    ll1.push_back(7);
    ll1.push_front(8);
    ll1.push(9,2);

    const auto ll1Size = ll1.getSize();
    ASSERT_EQ(ll1Size, 4);

    List<int> ll2 = List<int>(std::move(ll1));

    ASSERT_EQ(ll2.getSize(), ll1Size);
    ASSERT_NE(ll2.getHead(), nullptr);
}

TEST(ListTest, MoveAssignmentTest) {
    List<int> ll1;
    ll1.push_back(5);
    ll1.push_front(6);
    ll1.push_back(7);
    ll1.push_front(8);
    ll1.push(9,2);

    const auto ll1Size = ll1.getSize();
    ASSERT_EQ(ll1Size, 4);

    List<int> ll2 = std::move(ll1);

    ASSERT_EQ(ll2.getSize(), ll1Size);
    ASSERT_NE(ll2.getHead(), nullptr);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}