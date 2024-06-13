fun main() {
    val n = readLine()!!.toInt()
    repeat(n) {
        val i = readLine()!!.split(" ")
        val x = i[0].toInt()
        val y = i[1].toInt()
        if((y / x) % 3 == 2) {
            println(0)
        } else if((y / x) % 3 == 1) {
            println(x - (y % x))
        } else {
            println(x + x - (y % x))
        }
    }
}
