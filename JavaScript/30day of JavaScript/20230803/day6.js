var filter = function(arr, fn) {
    let newArray=[];
    for(let i = 0; i < arr.length; i++){
        if(fn(arr[i], i)){
            newArray[i] = arr[i];
        }
        else{
            newArray[i] = "";
        }
    }
    //sort newArray
    for(i = 0; i < newArray.length; i++){
        if(newArray[i] === ""){
           newArray.splice(i, 1);
           i--;
        }
    }
return newArray;
};