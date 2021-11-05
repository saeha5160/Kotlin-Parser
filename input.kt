package my.demo
import kotlin.text.*

fun sum (a: Int, b : Int) : Int{ 
   return a + b 
}

class Rectangle(var height : Double, var length : Double) { 
   var perimeter = (height + length) * 2 
}

fun maxOf(a : Int, b : Int) : Int { 
   if (a > b) { 
      return a 
   } else { 
      return b 
   } 
}

