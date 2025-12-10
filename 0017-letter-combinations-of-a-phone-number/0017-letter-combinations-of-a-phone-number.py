class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        from itertools import combinations
        dict={
            '2':'abc',
            '3':'def',
            '4':'ghi',
            '5':'jkl',
            '6':'mno',
            '7':'pqrs',
            '8':'tuv',
            '9':'wxyz'
        }
        if not digits:
            return []
        
        result = []  # Store all possible combinations
        combinations = [dict[digit] for digit in digits]
        result=[''.join(combo) for combo in product(*combinations)]
        return result
