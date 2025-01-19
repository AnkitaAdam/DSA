class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> prefixMaxHeight(n);
        prefixMaxHeight[0]=0;
        vector<int> sufixMaxHeight(n);
        sufixMaxHeight[n-1]=0;

        for(int i=1;i<n;i++){
            prefixMaxHeight[i]=max(prefixMaxHeight[i-1],height[i-1]);
        }

         for(int i=n-2;i>=0;i--){
            sufixMaxHeight[i]=max(sufixMaxHeight[i+1],height[i+1]);
        }
        
        int minHeight=INT_MAX;
        int rainWater=0;
        for(int i=0;i<n;i++){
            minHeight=min(sufixMaxHeight[i],prefixMaxHeight[i]);
            if(minHeight-height[i] <0){
                rainWater+=0;
            }else{
                rainWater+=minHeight-height[i];
            }
        }

        return rainWater;

    }
};