# $^ all depende files
# $< first depend file
# $@ target file

DIRS = simple_define simple_directive simple_ifdef_nonExistIncludeFile  simple_nestedComment simple_numberWithUnderScore simple_outputreg simple_reverse_define simple_definecomment simple_commentEOF r25 i25 h8nc nr nio nnARM ivltests 
CLEANDIRS = $(DIRS:%=clean-%)
TESTDIRS = $(DIRS:%=test-%)

DIRS_IVLPP =  simple_ifdef_nonExistIncludeFile  simple_nestedComment simple_numberWithUnderScore simple_outputreg  simple_commentEOF r25 i25 h8nc nr nio nnARM
TESTDIRS_IVLPP = $(DIRS_IVLPP:%=test_ivlpp-%)

.PHONY: subdirs $(SUBDIRS)
.PHONY: subdirs $(CLEANDIRS)
.PHONY: subdirs $(TESTDIRS)
.PHONY: subdirs $(TESTDIRS_IVLPP)
.PHONY: all

all : test test_ivlpp

test: $(TESTDIRS)
$(TESTDIRS): 
	$(MAKE) -C $(@:test-%=%) test

test_ivlpp: $(TESTDIRS_IVLPP)
$(TESTDIRS_IVLPP): 
	$(MAKE) -C $(@:test_ivlpp-%=%) test_ivlpp


clean: $(CLEANDIRS) 
$(CLEANDIRS): 
	$(MAKE) -C $(@:clean-%=%) clean

# declaring order
#foo: baz

