// var validMountainArray = function(arr) {
//     if (arr.length >= 3) {
//         for (let i = 0; i < (arr.length -1) / 2; i++) {
//             if (arr[i] < arr[i+1]) {
//                 for (let j = (arr.length -1) / 2; j < arr.length; j++){
//                    if (arr[j] > arr[j+1]) {
//                         return true;
//                    }
//                 }
//             }
//         }
//     }
//     return false;
// };

// var validMountainArray = function(arr) {
//     let sumHalf = 0, otherHalf;
//     if (arr.length >= 3) {
//         for (let i = 0; i < (arr.length -1) / 2; i++) {
//             if (arr[i] < arr[i+1]) {
//                 sumHalf++;
//                 for (let j = (arr.length -1) / 2; j < arr.length; j++){
//                    if (arr[j] > arr[j+1]) {
//                     otherHalf++;
//                     if (sumHalf == otherHalf) {
//                         return true;
//                     }
//                    }
                   
//                 }
//             }
//         }
//     }
//     return false;
// };

// var validMountainArray = function(arr) {
//     let sumHalf = 0, otherHalf = 0, peak = (arr.length - 1) / 2;
//     if (arr.length >= 3) {
//         for (let i = 0; i < Math.round(peak); i++) {
//             if (arr[i] < arr[i+1]) {
//                 sumHalf++;
//                 for (let j = Math.round(peak); j < arr.length; j++){
//                    if (arr[j] > arr[j+1]) {
//                     otherHalf++;
//                     if (sumHalf == otherHalf) {
//                         return true;
//                     }
//                    }
                   
//                 }
//             }
//         }
//     }
//     return false;
// };

// let arr = [0, 3, 2, 1]
// console.log(validMountainArray(arr));

// var validMountainArray = function(arr) {
//     let sumHalf = 0, otherHalf = 0, peak = (arr.length - 1) / 2;
//     if (arr.length >= 3) {
//         for (let i = 0; i < Math.round(peak); i++) {
//             if (arr[i] < arr[i+1]) {
//                 sumHalf += arr[i];
//                 for (let j = Math.round(peak); j < arr.length; j++){
//                    if (arr[j] > arr[j+1]) {
//                     otherHalf += arr[j];
//                     if (sumHalf == otherHalf) {
//                         return true;
//                     }
//                    }
                   
//                 }
//             }
//         }
//     }
//     return false;
// };

var validMountainArray = function(arr) {
    let peak = 0, pIndex = 0;
    if (arr.length >= 3) {
        // set peak
        for (let index = 0; index < arr.length; index++) {
            if (peak < arr[index]) {
                peak = arr[index]; //max peak
                pIndex = index;
                for (let i = 0; i < pIndex; i++) {
                    if (arr[i] < arr[i+1]) {
                        for (let j = pIndex; j < arr.length; j++){
                            if (arr[j] > arr[j+1]) {
                                return true;
                            }
                        }
                    }
            }
        }
    }
    }
    return false;
 };