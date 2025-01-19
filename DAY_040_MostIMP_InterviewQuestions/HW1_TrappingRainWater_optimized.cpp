int n=height.size();

        int maxHeight=INT_MIN;
        int index=0;
        for(int i=0;i<n;i++){
            if(height[i]>maxHeight){
                maxHeight=height[i];
                index=i;
            }
        }

        int rainWater=0;

        int leftMax=0;
        for(int i=0;i<=index-1;i++){
            if(leftMax>height[i]){
                rainWater+=leftMax-height[i];
            }else{
                leftMax=height[i];
            }
        }

        int rightMax=0;
        for(int i=n-1;i>=index+1;i--){
            if(rightMax>height[i]){
                rainWater+=rightMax-height[i];
            }else{
                rightMax=height[i];
            }
        }

        return rainWater;