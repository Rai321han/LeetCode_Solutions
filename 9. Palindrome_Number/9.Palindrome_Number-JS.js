var isPalindrome = function (x) {
  let str = x + "";
  if (str === [...str].reverse().join("")) return true;
  else return false;
};
