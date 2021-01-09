class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        return solve(s,t)
        
    
def solve(s,t):
    if len(s) == 0:
        return True
    elif len(t) == 0:
        return False
    elif s[-1] == t[-1]:
        return solve(s[:-1], t[:-1])
    else:
        return solve(s, t[:-1])
