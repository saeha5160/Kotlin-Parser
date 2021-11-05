# makefile for Expr Evaluation in C++
PROG= kt_parser
G4=Kotlin.g4

ANTLR4=java -jar /usr/local/lib/antlr-complete.jar -Dlanguage=Cpp -o antlr4-cpp
ANTLR4_RUNTIME=/usr/local/include/antlr4-runtime
CFLAGS=-I. -I$(ANTLR4_RUNTIME)
LIBS=-lantlr4-runtime

ANTLR4DIR=antlr4-cpp
OBJ=KotlinMain.o $(ANTLR4DIR)/KotlinBaseListener.o $(ANTLR4DIR)/KotlinLexer.o $(ANTLR4DIR)/KotlinListener.o $(ANTLR4DIR)/KotlinParser.o

default: antlr $(PROG)
	
$(PROG): $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS) $(LIBS)

%.o:	%.cpp
	$(CXX) -c -o $@ $< $(CFLAGS)

antlr: $(G4)
	$(ANTLR4) $<

.PHONY: clean

clean:
	rm -f $(PROG) *.o $(ANTLR4DIR)/*.o *~ core

wipe:	clean
	rm -rf $(ANTLR4DIR)
	
