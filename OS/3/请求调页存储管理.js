const INSCOUNT = 320 // 指令条数

/**
 * 生成[min, max) 范围内的随机数
 * @param {*} Min 最小数
 * @param {*} Max 最大数
 */
const randomNumBoth = (Min, Max) => {
  let range = Max - Min
  let Rand = Math.random()
  return Min + Math.round(Rand * range)
}

/**
 * 生成作业中指令的访问次序
 */
const getInsArr = () => {
  const insArr = [randomNumBoth(0, INSCOUNT)]
  while (insArr.length < INSCOUNT) {
    let m = insArr[insArr.length - 1] // 取出访问队列的最后一条
    if (m === INSCOUNT) {
      insArr.push(randomNumBoth(INSCOUNT / 2, INSCOUNT))
    } else {
      insArr.push(m + 1)
    }
    if (insArr.length === INSCOUNT) break

    let m1 = randomNumBoth(0, m - 1)
    insArr.push(m1)

    if (insArr.length === INSCOUNT) break

    if (m1 === INSCOUNT) {
      insArr.push(randomNumBoth(INSCOUNT / 2, INSCOUNT))
    } else {
      insArr.push(m1 + 1)
    }

    if (insArr.length === INSCOUNT) break
    let m2 = randomNumBoth((m1 + 2) % INSCOUNT, INSCOUNT)
    insArr.push(m2)
  }
  return insArr
}

/**
 * fifo 算法
 * @param {*} insArr 生成的作业指令访问次序
 */
const fifo = (insArr = []) => {
  const insAdd = insArr.map(e => ~~(e / 10)) // 生成指令页地址
  const initialMemArr = Array.from(new Set(insAdd)).slice(0, 4) // 去除指令页地址不重复的前四页
  let lostCount = 0
  let withInCount = 0
  let memArr = initialMemArr.slice()
  insArr.forEach((e, i) => {
    console.log('————————————————————————————————————————————')
    console.log('指令页码：', memArr)
    console.log('执行指令：', e)
    if (memArr.indexOf(~~(e / 10)) !== -1) {
      console.log('指令状态：', '正常', '使用 ->', ~~(e / 10))
      withInCount++
    } else {
      console.log('指令状态：', '缺页', '替换 —>', memArr.shift())
      lostCount++
      memArr.push(~~(e / 10))
    }
  })
  const lostRate = (~~(10000 * lostCount / INSCOUNT)) / 100

  return {lostRate, lostCount, withInCount}
}

/**
 * lru 算法
 * @param {*} insArr 生成的作业指令访问次序
 */
const lru = (insArr = []) => {
  const insAdd = insArr.map(e => ~~(e / 10)) // 生成指令页地址
  const initialMemArr = Array.from(new Set(insAdd)).slice(0, 4) // 去除指令页地址不重复的前四页
  let lostCount = 0
  let withInCount = 0
  let memArr = initialMemArr.map((e, i) => ({
    value: e,
    latest: 0
  }))
  insArr.forEach((e, i) => {
    let memValueArr = memArr.map(({ value }) => value)
    console.log('————————————————————————————————————————————')
    console.log('指令页码：', memValueArr)
    console.log('执行指令：', e)
    let index = memValueArr.indexOf(~~(e / 10))
    if (index !== -1) {
      console.log('指令状态：', '正常', '使用 ->', ~~(e / 10))
      memArr.splice(index, 1, { value: ~~(e / 10), latest: i })
      withInCount++
    } else {
      let latest = INSCOUNT + 1
      lostCount++
      memArr.forEach((ee, ii) => {
        if (ee.latest < latest) {
          latest = ee.latest
        }
      })
      index = memArr.map(({latest}) => latest).indexOf(latest)
      console.log('指令状态：', '缺页', '替换 —>', memArr[index].value)

      memArr.splice(index, 1, { value: ~~(e / 10), latest: i })
    }
  })
  const lostRate = (~~(10000 * lostCount / INSCOUNT)) / 100
  return {lostRate, lostCount, withInCount}
}

/**
 * opt 算法
 * @param {*} insArr 生成的作业指令访问次序
 */
const opt = (insArr = []) => {
  const insAdd = insArr.map(e => ~~(e / 10)) // 生成指令页地址
  const initialMemArr = Array.from(new Set(insAdd)).slice(0, 4) // 去除指令页地址不重复的前四页
  let lostCount = 0
  let withInCount = 0
  let memArr = initialMemArr.slice()
  insArr.forEach((e, i) => {
    console.log('————————————————————————————————————————————')
    console.log('指令页码：', memArr)
    console.log('执行指令：', e)
    if (memArr.indexOf(~~(e / 10)) !== -1) {
      console.log('指令状态：', '正常', '使用 ->', ~~(e / 10))
      withInCount++
    } else {
      // 构造最佳的数组
      let nearArr = []
      let _i = i + 1
      while (nearArr.length < 3 && _i < INSCOUNT) {
        let t = insArr[_i]
        if (memArr.indexOf(~~(t / 10)) !== -1 && nearArr.indexOf(~~(t / 10)) === -1) {
          nearArr.push(~~(t / 10))
        }
        _i++
      }
      if (nearArr.length < 3) {
        nearArr = [
          ...nearArr,
          ...memArr
        ]
        nearArr = Array.from(new Set(nearArr)).slice(0, 3)
      }
      let replace = memArr.filter(e => nearArr.indexOf(e) === -1)
      memArr = nearArr
      console.log('指令状态：', '缺页', '替换 —>', replace.shift())
      lostCount++
      memArr.push(~~(e / 10))
    }
  })
  const lostRate = (~~(10000 * lostCount / INSCOUNT)) / 100

  return {lostRate, lostCount, withInCount}
}

const show = (obj, text) => {
  console.log('\n~~~~~~~~~~~~~~徐嘉俊-2153214~~~~~~~~~~~~~~~~')
  console.log('~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~')
  console.log(text + '缺页率：', obj.lostRate, '%')
  console.log('缺页次数：', obj.lostCount)
  console.log('不缺次数：', obj.withInCount)
}

const main = () => {
  const insArr = getInsArr() // 生成作业中指令的访问次序
  let fifoObj = fifo(insArr) // 调用 FIFO 算法
  console.log('\nsb')  
  let optObj = opt(insArr) // 调用 OPT 算法
  console.log('\nsb')    
  let lruObj = lru(insArr) // 调用 LRU 算法
  show(fifoObj, 'FIFO')
  show(optObj, 'OPT')
  show(lruObj, 'LRU')
}

main()
