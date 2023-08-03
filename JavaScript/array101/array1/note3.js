// var sortedSquares = function(nums) {
//     for(var i = 0; i < nums.length; i++){
//         nums[i] = nums[i] * nums[i];
//     }
//     nums.sort();
    
//   return nums;  
// };

var sortedSquares = function(nums) {
    for(var i = 0; i < nums.length; i++){
        nums[i] = nums[i] * nums[i];
    }
    
    //sorting
    for(var j = 0; j < nums.length; j++){
        for(var k = j+1; k < nums.length; k++){
             if(nums[j] > nums[k]){
           var temp = nums[j];
            nums[j] = nums[k];
            nums[k] = temp;
          }  
        }
    }
 return nums;  
};