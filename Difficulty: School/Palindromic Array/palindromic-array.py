# Your task is to complete this function
# Function should return true/false
def PalinArray(arr):
    for i in arr:
        n=i
        rev=0
        while(i>0):
            temp=i%10;
            rev=rev*10+temp;
            i=i//10
        if n!=rev:
            return False
    return True
    # Code here





#{ 
 # Driver Code Starts
# Driver Program
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        arr = list(map(int, input().strip().split()))
        if PalinArray(arr):
            print("true")
        else:
            print("false")
# Contributed By: Harshit Sidhwa

# } Driver Code Ends