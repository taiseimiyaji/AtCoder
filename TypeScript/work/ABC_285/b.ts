import * as fs from 'fs';

const input = fs.readFileSync("/dev/stdin", "utf8").split(/\s/);
const n: number = parseInt(input[0]);
const s: String = input[1];

for (let i = 1; i < n; i++) {
    let l = 0;
    for (let k = 0; k < n - i; k++) {
        if (s.charAt(k) === s.charAt(k + i)) {
            break;
        } else {
            l++;
        }
    }
    console.log(l);
}


