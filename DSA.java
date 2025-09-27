import java.util.*;
// Question :- leetcode :- 167. Two Sum II - Input Array Is Sorted
// Time Complexity :- O(n) (Optimal)  && Space Complexity :- o(1) (Optimal)

class TwoSum {
    public int[] twoSum(int[] numbers, int target) {
        int l = 0, r = numbers.length - 1, result[] = new int[2];

        while (l < r) {
            if (numbers[l] + numbers[r] == target) {
                result[0] = l + 1;
                result[1] = r + 1;
                break;
            } else if (numbers[l] + numbers[r] > target) {
                r--;
            } else {
                l++;
            }
        }
        return result;
    }
}

// Question :- leetcode :- 674. Longest Continuous Increasing Subsequence
// Time Complexity :- O(n) (Optimal)  && Space Complexity :- o(n)

class FindLength {
    public int findLengthOfLCIS(int[] nums) {
        int count = 0, max = 0;
        for (int i = 0; i < nums.length - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                count++;
                max=Math.max(count, max);
            } else
                count = 0;
        }
        return max + 1;
    }
}


// Question :- leetcode :- 217. Contains Duplicate
// Time Complexity :- O(n) (Optimal)  && Space Complexity :- o(n)

class ContainDup {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> set = new HashSet<>();
        for(int num : nums){
            if(!set.add(num)) return true;
        }
        return false;
    }
}