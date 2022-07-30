var addBinary = function (a, b) {
  let i = a.length - 1;
  let j = b.length - 1;
  let carry = 0;
  let result = "";

  while (i >= 0 || j >= 0) {
    let sum = carry;
    if (i >= 0) sum = sum + Number(a[i]);
    if (j >= 0) sum = sum + Number(b[j]);
    result += sum % 2;
    carry = parseInt(sum / 2);
    i--;
    j--;
  }

  if (carry > 0) result += carry;
  return [...result].reverse().join("");
};

let result = addBinary("0", "11101");
console.log(result);
