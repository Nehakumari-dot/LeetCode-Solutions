class Solution {
	public:
	int getCount(vector<int> &arr, int num1, int num2) {
		int n = arr.size(), c1, c2, c3 = 0;
		for (int i = 0; i<n; i++) {
			if (arr[i] == num1) {
				c1 = i;
				break;
				
			}
		}
		for (int j = n - 1; j >= 0; j--) {
			if (arr[j] == num2) {
				c2 = j;
				break;
			}
		}
		
		for (int i = 0; i<n; i++) {
			if (i>c1 && i<c2)
				{c3=c3+1; }
			
		}
		return c3;
		
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna