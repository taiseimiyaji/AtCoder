import * as fs from 'fs';

const input = fs.readFileSync("/dev/stdin", "utf8").split(/\s/);
const s: String = input[0];

const length = s.length;
const charCodeAt = 64;
let num = BigInt(0);
for (let i = 0; i < length; i++) {
    const charNum = (s.charCodeAt(i) - charCodeAt); // アルファベットを文字コードを使用して数値に変換
    // 1桁目の場合は　26の0乗 * 文字列の番号
    // 2桁目の場合は　26の1乗 * 文字列の番号
    num += BigInt(charNum * (26 ** (length - (i+1))));
}
console.log(num.toString());