//This is not a perfect solution for this problem
//You must learn DP
//See the CPP solution

const factorial = function (n) {
  if (n == 0) return 1;
  let factorial = 1;
  for (let i = 2; i <= n; i++) factorial = factorial * i;
  return factorial;
};

const nCr = function (n, r) {
  return factorial(n) / (factorial(r) * factorial(n - r));
};

var climbStairs = function (n) {
  let extra = 1;
  let r = 1,
    add = 0;
  if (n % 2 == 0) extra = 2;
  n = n - 1;
  while (n > r) {
    add = add + nCr(n, r);
    n = n - 1;
    r = r + 1;
  }
  add += extra;
  return add;
};

let result = climbStairs(45);
console.log(result);
