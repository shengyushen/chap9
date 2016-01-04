# $^ all depend files
# #< first depend file
# $@ target file
sinclude ../Makefile.setting

# project specific setting
LEXNAME = very
PARSENAME = parser
TARGETNAME = checker
TARGET = $(TARGETNAME).exe
OBJS = $(LEXNAME).o main.o
GPPOPT = -std=gnu++11 -g

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(GPP)  $^ -o $@  $(GPPOPT)

%.o : %.cpp
	$(GPP) $(GPPOPT) -c $<

$(LEXNAME).cpp : $(LEXNAME).lex
	$(FLEX) -o $@  --warn --c++ --prefix=$(LEXNAME) --yyclass=$(LEXNAME)Scanner --header-file=$(LEXNAME).h  $<

clean:
	rm -f *.exe *.o $(LEXNAME).cpp $(LEXNAME).h

