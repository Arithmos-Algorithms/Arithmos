#**
#* Ccoffee Build tool, manual build, alpha-v1.
#* Custom Includsions for GTKmm cpp wrapper
#* dependencies '-I"/usr/include/glibmm-2.9.1/glib" -I"/usr/include/sigc++-2.0/sigc++" -I"/usr/include/giomm-2.4" -I"/usr/include/gtkmm-4.2.0/gtk"'
#*
#* @author pavl_g.
#*#
source variables.sh
# make a dir for java byte code
mkdir ${workDir}'/build/.buildKotlin'

##
# Copies the source files to a single dir to be compiled manually.
##
function copyKtSources() {
    #copy code to buildDir to compile java files
    codeDir=(${workDir}'/code/kotlin/src/*')
    cp -r ${codeDir} ${workDir}'/build/.buildKotlin'
}
##
# Compiles and package kotlin into a dependency jar file to be included inside the java module.
##
function compileKotlin() {
   cd ${workDir}'/build/.buildKotlin'
   ktFiles=`find -name '*.kt'`
   kotlinc ${ktFiles} -include-runtime -d ${workDir}'/code/java/dependencies/kotlin.jar'
   ## remove sources after compilation is completed
   rm -r $ktFiles
}

