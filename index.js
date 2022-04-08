// Printing frequency of each character just before it's consecutive occurences
const s = 'fffooewwwbbbb';
let out = '';

for (let i = 0; i < s.length; i++) {
  let count = 1;

  while (i + 1 < s.length && s.charAt(i) == s.charAt(i + 1)) {
    i++
    count++;
  }

  out += count + "" + s.charAt(i);
}

console.log(out);