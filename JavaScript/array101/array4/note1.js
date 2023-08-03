var checkIfExist = function(arr) {
    let k;
    for(var i = 0; i < arr.length; i++){
        for(var j = 0; j < arr.length; j++){
            if(i!=j && arr[i]==arr[j]*2) return true;
        }
    }
    return false;
};