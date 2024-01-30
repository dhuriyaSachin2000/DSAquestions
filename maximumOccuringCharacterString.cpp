class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int arr[26] = {0};
        
        // creating an array of count of characters
        for(int i=0; i<str.length(); i++){
            char ch = str[i];
            // lowercase
            int number = 0;
            number = ch - 'a';
            arr[number]++;
        }
        
        // find maximum occuring character
        int maxi = 0, ans = 0;
        for(int i=0; i<26; i++){
            if(maxi < arr[i]){
                ans = i;
                maxi=arr[i];
            }
        }
        return 'a' + ans;
    }

};