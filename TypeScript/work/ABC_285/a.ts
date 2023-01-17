import * as fs from 'fs';

const input = fs.readFileSync("/dev/stdin", "utf8").split(/\s/);
const a = +input[0];
const b = +input[1];

const ans = (Boolean)(b === (2 * a) || b === (2 * a + 1));

if (ans) {
    console.log("Yes");
} else {
    console.log("No");
}