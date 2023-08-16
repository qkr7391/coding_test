var findDisappearedNumbers = function(nums) {
    let pass = false;
    let temp = [];
    let length = nums.length;
    for(let i = 1; i <= length; i++){
        pass = false;
       for(let j = 0; j < nums.length; j++){
           if(i == nums[j]){
            console.log(nums[j])
              pass = true; 
               break;
              }
           else if(pass == false && i != nums[j] && j == nums.length-1){
                temp.push(i);   
                   }
       }
    }
    return temp;
};

nums = [4,3,2,7,8,2,3,1];
console.log(findDisappearedNumbers(nums));