var heightChecker = function(heights) {
    let cnt = 0;
    let temp = 0;
    let compare = [...heights];
   
    for(let i = 0; i < heights.length; i++){
        for(let j = i+1; j < heights.length; j++){
            if(heights[i] > heights[j]){
               temp = heights[i];
                heights[i] = heights[j];
                heights[j] = temp;
               }
        }
    }
    for(let i = 0; i < heights.length; i++){
        
            if(heights[i] != compare[i]){
               cnt++;
               }
        }
    return cnt;
};