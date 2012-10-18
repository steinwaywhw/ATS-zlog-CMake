
ifneq "$(subdirectory)" "module.mk"
  local_path := $(subdirectory)
else
  local_path := .
endif


local_target := $(local_path)/test_zlog

local_src := $(wildcard $(local_path)/*.sats) \
             $(wildcard $(local_path)/*.dats)

$(eval $(call make-ats_zlog_program, $(local_target), $(local_src)))


