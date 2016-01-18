# $^ all depende files
# $< first depend file
# $@ target file

DIRS = simple_define simple_directive simple_ifdef_nonExistIncludeFile  simple_nestedComment simple_numberWithUnderScore simple_outputreg simple_reverse_define r25 i25 h8nc nr nio nnARM
DIRS_IVLPP =  simple_ifdef_nonExistIncludeFile  simple_nestedComment simple_numberWithUnderScore simple_outputreg  r25 i25 h8nc nr nio nnARM
CLEANDIRS = $(DIRS:%=clean-%)
TESTDIRS = $(DIRS:%=test-%)
TESTDIRS_IVLPP = $(DIRS_IVLPP:%=test_ivlpp-%)

.PHONY: subdirs $(SUBDIRS)
.PHONY: subdirs $(CLEANDIRS)
.PHONY: subdirs $(TESTDIRS)
.PHONY: subdirs $(TESTDIRS_IVLPP)

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

