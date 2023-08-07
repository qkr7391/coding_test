var moveZeroes = function(nums) {
    let cnt = 0;
    if(nums.length > 1){  
        for(let i = 0; i<nums.length; i++){
            if(nums[i] === 0){
               cnt ++;
               nums.splice(i, 1);
                i--;
             }
          }
        for(let i = 0; i < cnt; i++){
            nums.push('0');
        }
    }
};