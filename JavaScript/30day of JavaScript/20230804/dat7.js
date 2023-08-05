var reduce = function(nums, fn, init) {
    let reInit = init;
    for(let i = 0; i < nums.length; i++){
        if(i===0){
          reInit =  fn(init, nums[0])
        }
        else{
          reInit =  fn(reInit, nums[i])
        }
    }
    return reInit;
};