import java.io.*;
import java.util.*;

public class containsDuplicates {
    public static void main(String[] args) {
        Solution solution = new Solution();
        try (BufferedReader reader = new BufferedReader(new FileReader("LeetCode\\contains_duplicates\\input.txt"));
             BufferedWriter writer = new BufferedWriter(new FileWriter("Leetcode\\contains_duplicates\\output.txt"))) {
            String line;
            while ((line = reader.readLine()) != null) {
                int[] nums = Arrays.stream(line.replaceAll("[\\[\\]]", "").split(","))
                                   .mapToInt(Integer::parseInt)
                                   .toArray();
                boolean result = solution.containsDuplicate(nums);
                writer.write(result + "\n");
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}

class Solution {
    public boolean containsDuplicate(int[] nums) {
        Hashtable<Integer, Integer> hashtable = new Hashtable<>();

        int len = nums.length;
        for (int i = 0; i < len; i++) {
            if (!hashtable.containsKey(nums[i])) {
                hashtable.put(nums[i], 1);
            } else {
                return true;
            }
        }

        return false;
    }
}