fun main() {
    val n = readLine()!!.toInt()
    val vec = ArrayList<Pair<Int, Int>>(n)
    for (i in 0 until n) {
        val t = readLine()!!.toInt()
        vec.add(Pair(t, i + 1))
    }
    vec.sortBy { it.first }
    val r = ArrayList<Int>()
    r.add(vec[0].second)
    for (i in 0 until n - 1) {
        if (vec[i].first < vec[i + 1].first) {
            r.add(vec[i + 1].second)
            if (r.size == 3) break
        }
    }
    if (r.size == 3) {
        println("${r[0]} ${r[1]} ${r[2]}")
    } else {
        println("-1 -1 -1")
    }
}
