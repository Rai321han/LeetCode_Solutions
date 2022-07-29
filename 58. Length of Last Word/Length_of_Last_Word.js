var lengthOfLastWord = function (s) {
  let arrayString = s.split(" ").filter((item) => item != "");
  return arrayString[arrayString.length - 1].length;
};

let result = lengthOfLastWord("   Hello World RaihanUddin   ");
console.log(result);
