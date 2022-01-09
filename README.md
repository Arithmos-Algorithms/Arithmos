<img src="https://user-images.githubusercontent.com/60224159/148698536-753320a3-44a0-42ea-9f47-afcb1d3f7cab.png" width="150" height="100"> <h1> Arithmos </h1>

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

### References : 
- Java : https://eg1lib.org/book/18151841/129bda
- Java Algorithms : https://eg1lib.org/book/2734447/b41448
- Design Patterns : - https://eg1lib.org/book/5065873/daeef3?dsource=recommend
		    - https://eg1lib.org/book/11104607/61f4b3
- Native Algorithms : https://eg1lib.org/book/1168423/d3e00f
- Native JNI : https://docs.oracle.com/javase/7/docs/technotes/guides/jni/spec/functions.html#wp16656
- JNI Invocation API : https://www.ibm.com/docs/en/i/7.1?topic=api-example-java-invocation
- Kotlinc : https://kotlinlang.org/docs/command-line.html#manual-install
- Scalac : https://docs.scala-lang.org/overviews/compiler-options/index.html
- Git docs : https://docs.github.com/en/get-started/using-git/pushing-commits-to-a-remote-repository - https://dev.to/aashiya123/git-commands-cheatsheet-advanced-20-git-commands-advanced--35i3
- Bash scripting : - https://books.goalkicker.com/BashBook/ 
		   - https://eg1lib.org/book/3707757/3869f3
- GNU GCC : https://gcc.gnu.org/onlinedocs/gcc-9.4.0/gcc.pdf
-- Useful topics : - `3.16 Options for Code Generation Conventions`
		   - `3.14 Options for Linking`
- ANSI Bash Color System (Check 24-bit-RGB color system) : https://en.wikipedia.org/wiki/ANSI_escape_code
- Statistics : https://eg1lib.org/book/3594749/50610d		 
- Check : https://github.com/Scrappers-glitch/NativeJmeTemplate

### Wiki : 
- [Wiki](https://github.com/Scrappers-glitch/Arithmos/wiki/How-to-use-Arithmos-%3F)

### Dependencies : 
- Groovy : https://mvnrepository.com/artifact/org.codehaus.groovy/groovy/3.0.9
- Scala : https://mvnrepository.com/artifact/org.scala-lang/scala-library/2.13.7
- Android NDK build using clang++ : https://developer.android.com/ndk/guides/other_build_systems
				    https://android.googlesource.com/platform/ndk/+/master/docs/BuildSystemMaintainers.md#libc
				    https://stackoverflow.com/a/17131418/11094789
                                    https://developer.arm.com/documentation/den0024/a
- Use SDKMAN on linux to install their compilers : 

```bash
sdk install scalac
```

```bash 
sdk install kotlinc
```

```bash 
sdk install groovyc
```

### TODO : 
- vector/Vector.java
- calculus/FunctionUtils.java
- calculus/AngleUtils.java
- linearAlgebra/Matrix.java -- Uses vectors too.
- time/Chronometer.java
- <s> Android arm build </s>
- Pi arm build
