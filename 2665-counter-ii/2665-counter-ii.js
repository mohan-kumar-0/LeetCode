/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    return {
        initCtr: init,
        ctr: init,
        increment: function() {this.ctr++; return this.ctr;},
        decrement: function() {this.ctr--; return this.ctr;},
        reset: function() {this.ctr = this.initCtr; return this.ctr;}
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */