// Last updated: 10/03/2026, 10:02:45
/**
 * @return {Generator<number>}
 */
var fibGenerator = function*() {
    let a=0,b=1;
    while(true){
        yield a;
        let next=a+b;
        a=b;
        b=next;
    }
};

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */