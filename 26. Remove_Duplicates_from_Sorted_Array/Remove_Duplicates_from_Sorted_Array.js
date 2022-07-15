var removeDuplicates = function (nums) {
  let i = 1,
    j = 0;
  while (i < nums.length) {
    if (nums[i] != nums[i - 1]) nums[++j] = nums[i];
    i++;
  }
  return j + 1;
};

let num = [1, 1, 2];
console.log(removeDuplicates(num));
