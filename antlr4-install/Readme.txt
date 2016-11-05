git clone https://github.com/DanMcLaughlin/antlr4.git
git reset --hard 183b7ce0a97556f2122074ca4c2ad591ca67dfcd
update tool : cd tool && mvn clean && mvn package

cd runtime/Cpp && cmake -DWITH_DEMO=True -DANTLR_JAR_LOCATION=../../tool/target/antlr4-4.5.4-SNAPSHOT.jar . && make 
./demo/antlr4-demo
make DESTDIR=antlr4-install install

