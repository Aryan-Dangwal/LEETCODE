class Solution(object):
    def reverseWords(self, s):
       word = s.split()
       rev= word[::-1]
       ans=join(rev)

       return ans

        