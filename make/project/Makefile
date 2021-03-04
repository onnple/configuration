MAKE := make 
APP := App  # 应用程序
RUN := app.run
A := A  # 辅助模块, 如UI
B := B  # 辅助模块, 如数据库
C := C  # 辅助模块, 如播放器
Models := $(A) $(B) $(C)
LIBS := $(foreach n,$(Models),$(n)/lib/lib$(n).so)
LOCALLIBS := $(foreach n,$(Models),usr/lib/lib$(n).so)

# 声明伪目标
.PHONY: all install clean $(APP) $(Models)
all: install

# 声明模块依赖
$(APP): $(Models)
$(A): $(B) $(C)

# 每个模块的make
$(APP) $(Models):
	$(MAKE) -C $@

install: $(APP)
	sudo cp $(LIBS) /usr/lib
	sudo cp $(strip $(APP))/build/App $(RUN)

clean:
	$(MAKE) $@ -C $(APP)
	$(MAKE) $@ -C $(A)
	$(MAKE) $@ -C $(B)
	$(MAKE) $@ -C $(C)
	sudo rm -rf $(LOCALLIBS)
	rm -rf $(RUN)

