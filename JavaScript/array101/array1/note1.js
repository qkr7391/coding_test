// var findMaxConsecutiveOnes = function(nums) {
//     var count = 1, temp=[0], max=0;
//     for(var i = 0; i < nums.length; i++){
//         if(nums[i] === 1 && nums[i+1] === 1){
//                  count = count + 1;   
//          }
//         else{
//             temp[i] = count;
//             count = 1;
//         }
//     }
//     for(var j = 0; j < temp.length; j++){
       
//         if(max < temp[j]){
//            max = temp[j];
//            }
//     }
//     return max;
// }

// var findMaxConsecutiveOnes = function(nums) {
//     var count = 0, temp=[0], max=0, flag=0;
//     for(var i = 0; i < nums.length; i++){
       
//             if((nums[i] === 1 && nums[i+1] === 1)){
//                      count = count + 1;
//                 flag=1;
//              }
//             else{
//                 if(flag = 1){
//                    temp[i] = count + 1;
//                    count = 0;
//                    flag = 0;
//                    }
//                 else{
//                     temp[i] = count;
//                 count = 0;
//                 flag = 0;
//                 }
                
//             }
         
//     }
    
//     for(var j = 0; j < temp.length; j++){
       
//         if(max < temp[j]){
//            max = temp[j];
//          }
//     }
//     return max;
// }

var findMaxConsecutiveOnes = function(nums) {
    var count = 0, temp=[0], max=0, flag=0;
    for(var i = 0; i < nums.length; i++){
        if(nums[i] == 1){
            count ++;
            temp [i] = count;
         }
        else{
            count = 0;
        }
    }
    for(var j = 0; j < temp.length; j++){
       
        if(max < temp[j]){
           max = temp[j];
         }
    }
    return max;
}