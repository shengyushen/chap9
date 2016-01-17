# $^ all depende files
# $< first depend file
# $@ target file

DIRS = simple_directive simple_ifdef_nonExistIncludeFile  simple_nestedComment simple_numberWithUnderScore simple_outputreg simple_reverse_define r25 i25 h8nc nr nio nnARM
BUILDDIRS = $(DIRS:%=build-%)
CLEANDIRS = $(DIRS:%=clean-%)
TESTDIRS = $(DIRS:%=test-%)

.PHONY: subdirs $(SUBDIRS)
.PHONY: subdirs $(BUILDDIRS)
.PHONY: subdirs $(CLEANDIRS)
.PHONY: subdirs $(TESTDIRS)

build: $(BUILDDIRS) 
$(BUILDDIRS): 
	$(MAKE) -C $(@:build-%=%) build

test: $(TESTDIRS) build
$(TESTDIRS): 
	$(MAKE) -C $(@:test-%=%) test


clean: $(CLEANDIRS) 
$(CLEANDIRS): 
	$(MAKE) -C $(@:clean-%=%) clean


# declaring order
#foo: baz

