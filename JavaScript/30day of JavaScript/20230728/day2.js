// Day 2 2023/07/28

//Q1. Counter

//A1. 
var createCounter = function(n) {
    return function() {
        return n++;
    };
};