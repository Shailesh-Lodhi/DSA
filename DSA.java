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


// Question :- leetcode :- 414. Third Maximum Number
// Time Complexity :- O(n) (Optimal) && Space Complexity :- O(1) (Optimal)

class ThirdMax {
    public int thirdMax(int[] nums) {
        long m = Long.MIN_VALUE, s = Long.MIN_VALUE, t = Long.MIN_VALUE;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] > m) {
                t = s;
                s = m;
                m = nums[i];
            } else if (nums[i] > s && nums[i] < m) {
                t = s;
                s = nums[i];

            } else if (nums[i] > t && nums[i] < s && nums[i] < m) {
                t = nums[i];

            }
        }
        if (t == Long.MIN_VALUE) {
            return (int) m;
        }
        return (int) t;
    }
}