Object do(
    t := 0
    n0 := 1
    n1 := 1
    x := 0
    t = File standardInput readLine asNumber
    for(i, 1, t - 1,
        x = n1
        n1 = n1 + n0
        n0 = x
    )
    n1 println
)