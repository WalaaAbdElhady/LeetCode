/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let tmp=init;
    function increment(){
        return ++tmp;
    }
    function decrement(){
        return --tmp;
    }
    function reset(){
        tmp=init;
        return tmp;
    }
    return{increment,decrement,reset};
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */