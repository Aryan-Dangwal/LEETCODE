class Solution(object):
    def reverseWords(self, s):
       words =s.split()
       reversew = words[::-1]
       reserves=' '.join(reversew)
       return reserves

        