fun main() {
    val n = readLine()!!.toInt()
    repeat(n) {
        val x = readLine()!!.toInt()
        if(x >= 8 || x == 3 || x == 6 || x == 5) {
            println(0)
        } else if(x == 7 || x == 1 || x == 4) {
            println(1)
        } else {
            println(2)
        }
    }
}