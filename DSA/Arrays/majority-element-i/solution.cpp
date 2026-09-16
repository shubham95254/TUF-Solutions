            } else {
                if(nums[i]==num) count++;
                else count--;
            }
        }
        if(count==0) return -1; //no element can be in majority

        //check if given number is majorityElement or not
        count=0;
        for(auto it:nums){
            if(it==num) count++;
        }
        if(count>(n/2)) return num;
    }
        return -1;
};