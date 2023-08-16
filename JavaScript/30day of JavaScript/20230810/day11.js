function memoize(fn) {
    let caching = new Map();
    return function(...args){
        const data = JSON.stringify(args);
        if(caching.has(data)){
            return caching.get(data);
        }
 
        const result = fn(...args);
        caching.set(data, result);
        return result;
    }
 }