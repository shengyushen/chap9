# $^ all depend files
# #< first depend file
# $@ target file
sinclude ../Makefile.setting

# project specific setting
LEXNAME = step1_noinc
TARGET = $(LEXNAME).exe
OBJS = $(LEXNAME).o
GPPOPT = -std=gnu++11 -g

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(GPP)  $^ -o $@  $(GPPOPT)

%.o : %.cpp
	$(GPP) $(GPPOPT) -c $<

$(LEXNAME).cpp : $(LEXNAME).lex
	$(FLEX) -o $@  --warn --c++ --prefix=$(LEXNAME) --yyclass=step1_noincScanner --header-file=$(LEXNAME).h  $<

clean:
	rm -f *.exe *.o $(LEXNAME).cpp $(LEXNAME).c $(LEXNAME).h
