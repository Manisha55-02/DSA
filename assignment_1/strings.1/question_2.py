def isPalindrome(str):
    if str==str[::-1]:return "Palindrome"
    else :return "not a Palindrome"

str=str(input())
print(isPalindrome(str))
