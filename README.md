# Arithmos

Arithmos is an algorithmic library which makes use of java and native bindings to achieve the best result for your gradle products.

To use the library, download the jar from the releases or add jitpack dependency if using gradle :

### Inside your root project `gradle.build` : 
```gradle
allprojects {
	repositories {
		...
		maven { url 'https://jitpack.io' }
	}
}
```

### Inside your module `gradle.build` :
```gradle
dependencies {
	implementation 'com.github.Scrappers-glitch:Arithmos:v0.0.1-alpha'
}
```

References : 
- Java Algorithms : https://eg1lib.org/book/2734447/b41448
- Native Algorithms : https://eg1lib.org/book/1168423/d3e00f
- Native JNI : https://docs.oracle.com/javase/7/docs/technotes/guides/jni/spec/functions.html#wp16656
- JNI Invocation API : https://www.ibm.com/docs/en/i/7.1?topic=api-example-java-invocation
- Kotlinc : https://kotlinlang.org/docs/command-line.html#manual-install
- Scalac : https://docs.scala-lang.org/overviews/compiler-options/index.html
- Git docs : https://docs.github.com/en/get-started/using-git/pushing-commits-to-a-remote-repository
- Bash scripting : https://books.goalkicker.com/BashBook/ 
- Check : https://github.com/Scrappers-glitch/NativeJmeTemplate

WIKI is still a wip.
