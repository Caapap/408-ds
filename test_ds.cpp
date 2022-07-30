#include "ds.h"
#include <gtest/gtest.h>

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

/******************** 09 ********************/
TEST(Test09, BF) {
    std::vector<int> data{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    List9 list = create_list9(data);
    EXPECT_EQ(search_k_bf(list, 1), 1);  // 10
    EXPECT_EQ(search_k_bf(list, 5), 1);  // 6
    EXPECT_EQ(search_k_bf(list, 10), 1); // 1

    EXPECT_EQ(search_k_bf(list, 12), 0);
    EXPECT_EQ(search_k_bf(list, 20), 0);
}

TEST(Test09, OP) {
    std::vector<int> data{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    List9 list = create_list9(data);
    EXPECT_EQ(search_k(list, 1), 1); // 10
    EXPECT_EQ(search_k(list, 3), 1); // 8
    EXPECT_EQ(search_k(list, 9), 1); // 2

    EXPECT_EQ(search_k(list, 11), 0);
    EXPECT_EQ(search_k(list, 12), 0);
}

/******************** 10 ********************/
/******************** 11 ********************/
/******************** 12 ********************/
TEST(Test12, BF) {
    std::vector<char> dataA{'l', 'o', 'a', 'd'};
    std::vector<char> dataB{'b', 'e'};
    std::vector<char> dataC{'i', 'n', 'g'};
    List12 la = create_list12(dataA);
    List12 lb = create_list12(dataB);
    List12 lc = create_list12(dataC);
    Node12 *pa = la->next, *pb = lb->next, *pc = lc->next;
    while (pa->next != NULL) {
        pa = pa->next;
    }
    while (pb->next != NULL) {
        pb = pb->next;
    }
    pa->next = pc;
    pb->next = pc;

    EXPECT_EQ(find_common_bf(la, lb), pc);
    EXPECT_EQ(find_common_bf(lb, la), pc);
}

TEST(Test12, OP) {
    std::vector<char> dataA{'l', 'o', 'a', 'd'};
    std::vector<char> dataB{'b', 'e'};
    std::vector<char> dataC{'i', 'n', 'g'};
    List12 la = create_list12(dataA);
    List12 lb = create_list12(dataB);
    List12 lc = create_list12(dataC);
    Node12 *pa = la->next, *pb = lb->next, *pc = lc->next;
    while (pa->next != NULL) {
        pa = pa->next;
    }
    while (pb->next != NULL) {
        pb = pb->next;
    }
    pa->next = pc;
    pb->next = pc;

    EXPECT_EQ(find_common(la, lb), pc);
    EXPECT_EQ(find_common(lb, la), pc);
}

/******************** 13 ********************/
/******************** 14 ********************/
/******************** 15 ********************/
TEST(Test15, OP1) {
    std::vector<int> data{21, -15, -15, -7, 15};
    List15 list = create_list15(data);
    delete_same_abs_value(list, 100);
    std::string res = to_string(list->link);

    EXPECT_EQ(res.compare("21 -> -15 -> -7"), 0);
    EXPECT_NE(res.compare("21 -> 15 -> -7"), 0);
    EXPECT_NE(res.compare("21 -> -7 "), 0);
}

TEST(Test15, OP2) {
    std::vector<int> data{1, -1, 1, -4, -1, -9, 4, -9, 9};
    List15 list = create_list15(data);
    delete_same_abs_value(list, 100);
    std::string res = to_string(list->link);

    EXPECT_EQ(res.compare("1 -> -4 -> -9"), 0);
    EXPECT_NE(res.compare("1 -> 4 -> -9"), 0);
    EXPECT_NE(res.compare("1 -> 4 -> 9"), 0);
}

/******************** 16 ********************/
/******************** 17 ********************/
/******************** 18 ********************/
/******************** 19 ********************/
/******************** 20 ********************/
/******************** 21 ********************/
/******************** 22 ********************/