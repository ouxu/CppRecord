function partialUsingArguments (fn) {
  var arr = []
  for (var i = 1;i < arguments.length;i++) {
    arr.push(arguments[i])
  }
  var result = function () {
    for (var i = 0;i < arguments.length;i++) {
      arr.push(arguments[i])
    }
    return fn.apply(null, arr)
  }
  return result
}

function fn () {
  console.log(arguments.length)
}

console.log(partialUsingArguments(fn, 1, 2, 3, 4)(1, 2))
