fun main() {
    val n = readLine()!!.toInt()
    repeat(n) {
        val i = readLine()!!.split(" ")
        var x = i[0].toInt()
        var y = i[1].toLong()
        while(x > 0) {
            if(y % 2 == 0L) {
                y /= 2
            } else if(y % 2 == 1L) {
                break
            }
            x--
        }
        println(x)
    }
}