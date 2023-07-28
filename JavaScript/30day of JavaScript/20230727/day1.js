// Day 1 2023/07/27

//Q1. create hello world function

//A1. Function Syntax
var createHelloWorld = function(){
    return function(){
        return "Hello World";
    }
};


//A2. Arrow Syntax
var createHelloWorld = function(){
    return () => "Hello World";
};


//A3. Arrow Syntax + Rest Arguments
var createHelloWorld = function(){
    return (...args) => "Hello Wolrd";
};