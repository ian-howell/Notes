'use strict';

process.stdin.setEncoding('ascii');

process.stdin.on('data', function(chunk) {
    console.log('Got ', chunk);
});

process.stdin.on('end', function() {
    console.log('Got EOF!');
});

setTimeout(function() {
    console.log('Done Waiting');
}, 3000);

console.log('end of program!');

//while (true){
//}
