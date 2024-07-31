//{ Driver Code Starts
// Initial Template for Java
import java.io.*;
import java.util.*;

class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim()); // Inputting the testcases
        while (t-- > 0) {

            String line = br.readLine();
            String[] tokens = line.split(" ");

            // Create an ArrayList to store the integers
            ArrayList<Long> array = new ArrayList<>();

            // Parse the tokens into integers and add to the array
            for (String token : tokens) {
                array.add(Long.parseLong(token));
            }

            long[] arr = new long[array.size()];
            int idx = 0;
            for (long i : array) arr[idx++] = i;

            Solution obj = new Solution();

            // calling maxSubarraySum() function
            System.out.println(obj.equilibriumPoint(arr));
        }
    }
}

// } Driver Code Ends




class Solution {
    // arr: input array
    // Function to find equilibrium point in the array.
    public static int equilibriumPoint(long arr[]) {
        // Your code here
        long totalSum = 0;
        long leftSum = 0;
        
        // Calculate the total sum of the array
        for (long num : arr) {
            totalSum += num;
        }
        
        // Traverse the array to find the equilibrium point
        for (int i = 0; i < arr.length; i++) {
            // Total sum of elements to the right of the current element
            long rightSum = totalSum - leftSum - arr[i];
            
            // Check if leftSum equals rightSum
            if (leftSum == rightSum) {
                return i + 1; // Return 1-based index
            }
            
            // Update leftSum for the next iteration
            leftSum += arr[i];
        }
        
        // Return -1 if no equilibrium point is found
        return -1;
    }
}
