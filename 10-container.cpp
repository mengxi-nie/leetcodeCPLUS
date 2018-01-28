class Solution {
public:
    int maxArea(vector<int>& height) {
        int contain = 0;
        int temp = 0;
        int i = 0;
        int j = height.size() -1 ;
        if (height.size() == 2)
            contain = (height[0] < height[1]) ? height[0] : height[1];
        else {
            while(i < j)
            {
                if (height[i] <= height[j])
                {
                    temp = height[i] * (j - i);
                    contain = (temp > contain) ? temp : contain;
                    i++;
                }
                else
                {
                    temp = height[j] * (j - i);
                    contain = (temp > contain) ? temp : contain;
                    j--;
                }
            }
        }               
       return contain; 
    }
};