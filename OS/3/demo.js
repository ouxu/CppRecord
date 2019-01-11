class Super {
  constructor (x, y) {
    this.x = x
    this.y = y
  }
  count () {
    console.log(this.x, this.y)
  }
}

class Sub extends Super {
  constructor () {
    super()
    console.log(this)
  // do something else
  }

  say () {
    console.log(state.a)
  }
}

const sub = new Sub(1, 2)

sub.count()
