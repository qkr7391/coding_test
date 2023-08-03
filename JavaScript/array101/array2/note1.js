// var duplicateZeros = function(arr) {
//     for(var i = 0; i < arr.length; ++i){
//       if(arr[i] === 0){
//          //remove last array
//           arr.pop();
//          //replace value at the index
//          arr.splice(i, 0, 0);
         
//           //Why need increment?
//           i++;
//          }
//     }
// };

var duplicateZeros = function(arr) {
    for(var i = 0; i < arr.length; ++i){
      if(arr[i] === 0){
         //remove last array
          arr.pop();
         //Insert value at the index
         arr.splice(i+1, 0, 0);
         
          //Why need increment?
          i++;
         }
    }
};