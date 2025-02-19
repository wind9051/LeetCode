/**
 * @return {Generator<number>}
 */
var fibGenerator = function* () {
    let pre = 0, cur = 1;
    yield pre;  
    yield cur;  
    while (true) {
        yield pre + cur;  
        [pre, cur] = [cur, pre + cur]; 
    }
};


/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */
