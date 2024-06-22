fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        val (n, k) = readLine()!!.split(" ").map { it.toInt() }
        val y = k * k * k + k * k + k + 1
        val x = n / y
        val a = x * k
        val b = x * k * k
        val c = x * k * k * k
        println("$x $a $b $c")
    }
}
