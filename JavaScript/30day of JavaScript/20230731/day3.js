var expect = function(val) {
    return {
        toBe:(val2)=> (val2 === val) ? true : (() => {throw new Error("Not Equal")})(),
        notToBe:(val2)=> (val2 !== val) ? true : (() => {throw new Error("Equal")})()
    }
};