#include <gtest/gtest.h>
#include "cpp_sorter.h"

// Define your test cases using Google Test macros
TEST(SortingTest, BubbleSort) {
    int arr[] = {5, 2, 3, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    ASSERT_EQ(arr[0], 100); // Introduce a false assertion
    ASSERT_EQ(arr[n-1], 5);
}

// Define more test cases if needed

// Include the main function to run the tests
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
