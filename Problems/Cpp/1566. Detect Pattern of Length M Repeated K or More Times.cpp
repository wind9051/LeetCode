class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
       if (arr.size() < m * k)
		{
			return false;
		}


		int L = 0, R = m,
		    cnt = 0;
		while (R < arr.size()) {
			if (arr[L] == arr[R])
			{
				cnt++;
				if (cnt == m * (k-1)) return true;
			}
			else cnt = 0;
			L++; R++;
		}
		return false;
    }
};
/*  
    Two pointer
    Star
*/
