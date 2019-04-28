fun main(args: Array<String>){
    var count:Int
    var i = 0
    val cat = object{
        fun sound(count:Int) {
            while (i < count) {
                print("にゃーん    ")
                i+=1
            }
        }
    }
    print("入力された数だけ猫が鳴きます>>>")
    count= Integer.parseInt(readLine())
    if(count>=1) {
        cat.sound(count)
    }
    else{
        println("猫が逃げました…  残念ですね")
    }

}