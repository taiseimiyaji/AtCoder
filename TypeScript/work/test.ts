
const yes = Symbol();
const no = Symbol();

const Position = {
  Top: 0,
  Right: 1,
  Bottom: 2,
  Left: 3,
} as const;

// type Position = typeof Position[keyof typeof Position];
// 上は type Position = 0 | 1 | 2 | 3 と同じ意味になります

console.log(typeof Position[keyof typeof Position]);

