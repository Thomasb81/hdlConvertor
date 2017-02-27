export CLASSPATH=.:/home/tom/prog/git/hdlConvertor/antlr4/antlr-4.6-complete.jar:$CLASSPATH
alias antlr4='java -jar `pwd`/antlr4/antlr-4.6-complete.jar'
alias grun='CLASSPATH=`pwd`/antlr4/:$CLASSPATH java org.antlr.v4.runtime.misc.TestRig'
