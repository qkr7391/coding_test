var sortArrayByParity = function(nums) {
    const even = [];
    const odd = [];
     
    let ecnt = 0, ocnt = 0;
     if(nums.length > 1){  
         for(let i = 0; i<nums.length; i++){
             if(nums[i] % 2 === 0){
                even[ecnt++] = nums[i];
              }
             else{
                 odd[ocnt++] = nums[i];
             }
           }
     nums = even.concat(odd);
     }
     
     return nums;
     
 };