#include <gtest/gtest.h>
#include "cpp_sorter.h"  // Include your header file here

// Define your test cases using Google Test macros

TEST(SortingTest, BubbleSort) {
    // Your test code here
    // Example:
    int arr[] = {5, 2, 3, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    ASSERT_EQ(arr[0], 1); // Assert statements to check expected behavior
    ASSERT_EQ(arr[n-1], 5);
}

// Define more test cases if needed

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
