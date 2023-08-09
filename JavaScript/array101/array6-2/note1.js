let thirdMax = function(nums) {
    let temp = 0;
    let cnt = 1;
  //sort
       for(let i = 0; i < nums.length; i++){
           for(let j = i; j < nums.length; j++){
               if(nums[i] < nums[j]){
                  temp = nums[i];
                   nums[i] = nums[j];
                   nums[j] = temp;
                  }
           }
       }

   let prev = nums[0];

   for (let index = 1; index < nums.length; ++index) {
       // Current element is different from previous.
       if (nums[index] != prev) {
           cnt += 1;
           prev = nums[index];
       }

       // If we have counted 3 numbers then return current number.
       if (cnt  == 3) {
           return nums[index];
       }
   }

   // We never counted 3 distinct numbers, return largest number.
   return nums[0];
};