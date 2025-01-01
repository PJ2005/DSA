import ast

class Solution:
    def hasDuplicate(self, nums: list[int]) -> bool:
        return len(set(nums)) != len(nums)

def main():
    solution = Solution()
    with open('Neetcode/contains_duplicates/input.txt', 'r') as infile, open('Neetcode/contains_duplicates/output.txt', 'w') as outfile:
        for line in infile:
            nums = ast.literal_eval(line.strip())
            result = solution.hasDuplicate(nums)
            outfile.write(f"{result}\n")

if __name__ == "__main__":
    main()