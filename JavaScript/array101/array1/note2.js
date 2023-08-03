var findNumbers = function(nums) {
    var count=0;
    for(var i=0; i< nums.length; i++){
        var numStr = nums[i].toString();
        if(numStr.length % 2 === 0){
            count++;
        }
    }
    return count;
};