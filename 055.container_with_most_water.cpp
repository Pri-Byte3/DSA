// Leet code [11. Container With Most Water] {Medium}
/*
Write a program in C++ to find the maximum amount of water that can be stored 
between two lines in a given height array.

The function should:
1. Consider each index as a vertical line.
2. Find two lines that, together with the x-axis, form a container.
3. Return the maximum water that can be stored.

If the input is:
Heights: [1,8,6,2,5,4,8,3,7]

The output should be:
49

(Explanation: The container formed by heights at index 1 and index 8 has max area 49.)
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Brute Force Approach [O(n^2)]
#include <iostream>
#include <vector>

using namespace std;
    int maxArea(vector<int>& height) {
        int max_water = 0, n = height.size(), water = 0;
        int st, end = n-1;
        for(st = 0; st < n; st++){
            for(end = st+1; end < n; end++){
                water = (min(height[st], height[end]) * (end - st));
                max_water = max(max_water, water);
            }
        }
        return max_water;
    }

    int main () {
        vector<int> height = {1,8,6,2,5,4,8,3,7};
        cout << maxArea(height) << "\n";
        return 0;
    }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Optimized Two-Pointer Approach [O(n)]    
#include <iostream>
#include <vector>
using namespace std;
int maxArea(vector<int>& height) {
        int max_water = 0, n = height.size(), water = 0;
        int st = 0, end = n-1;
        while(st < end){
            water = (min(height[st], height[end]) * (end - st));
            max_water = max(max_water, water);
            if(height[st] < height[st+1]){
                st++;
            }else{
                end--;
            }
        }
        return max_water;
    }

    int main () {
        vector<int> height = {1,8,6,2,5,4,8,3,7};
        cout << maxArea(height) << "\n";
        return 0;
    }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    

// Optimized Two-Pointer Approach [O(n)]
#include <iostream>
#include <vector>
using namespace std;
    int maxArea(vector<int>& height) {
        
        int max_water = 0, n = height.size(), water = 0;
        int st = 0, end = n-1;
        while(st < end){
            water = (min(height[st], height[end]) * (end - st));
            max_water = max(max_water, water);
            height[st] < height[end] ? st++ : end--;
        }
        return max_water;
    }

    int main () {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(height) << "\n";
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////