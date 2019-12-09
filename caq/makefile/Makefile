<<<<<<< HEAD
GNN_HOME=../../../graphnn        	                                        #定义gnn的路径

include $(GNN_HOME)/make_common  	                                        #添加gnn路径下的另一个makefile文件内容

lib_dir = $(GNN_HOME)/build_cpuonly/lib					        #定义库的路径
gnn_lib = $(lib_dir)/libgnn.a							#定义gnn生成静态库.a的位置

include_dirs = $(CUDA_HOME)/include $(MKL_ROOT)/include $(GNN_HOME)/include ./include  
										#CUDA,MKL,GNN,当前目录下 头文件的路径

CXXFLAGS += $(addprefix -I,$(include_dirs)) -Wno-unused-local-typedef           #-I表示首先查找的路径，把include_dirs路径添加到-I
CXXFLAGS += -fPIC                                                        	#CXXFLAGS += -Wall -g -O3 -std=c++11
cpp_files = $(shell $(FIND) src/lib -name "*.cpp" -printf "%P\n")        	#利用linux下的find命令查找src/lib/目录下名为.cpp的所有文件
cxx_obj_files = $(subst .cpp,.o,$(cpp_files))                            	#把cpp_files中的.cpp后缀替换成.o

objs = $(addprefix build/lib/,$(cxx_obj_files))                          	#.o文件的位置
DEPS = $(objs:.o=.d)								#把objs中的.o文件全体换成.d 存放在DEPS变量中

target = build/dll/libmvc.so                                             
target_dep = $(addsuffix .d,$(target))                                    	#目标的.d文件

.PRECIOUS: build/lib/%.o                                            

all: $(target)

build/dll/libmvc.so : src/mvc_lib.cpp $(gnn_lib) $(objs)
	$(dir_guard)
	$(CXX) -shared $(CXXFLAGS) -MMD -g -o $@ $(filter %.cpp %.o, $^) -L$(lib_dir) -lgnn $(LDFLAGS)
						#$(filter %.cpp %.o, $^)这个会把所有 在依赖项的文件全放到一个集合里面 -L是链接别的.a 或者.so库

DEPS += $(target_dep)

build/lib/%.o: src/lib/%.cpp
	$(dir_guard)
	$(CXX) $(CXXFLAGS) -MMD -c -g -o $@ $(filter %.cpp, $^)

clean:
	rm -rf build

-include $(DEPS)

#################################################改写后#########################################################
GNN_HOME=../../../graphnn

include $(GNN_HOME)/make_common

lib_dir = $(GNN_HOME)/build_cpuonly/lib
gnn_lib = $(lib_dir)/libgnn.a

include_dirs = $(CUDA_HOME)/include $(MKL_ROOT)/include $(GNN_HOME)/include ./include

CXXFLAGS += $(addprefix -I,$(include_dirs)) -Wno-unused-local-typedef
CXXFLAGS += -fPIC
cpp_files = $(shell $(FIND) src/lib -name "*.cpp" -printf "%P\n")
cxx_obj_files = $(subst .cpp,.o,$(cpp_files))

objs = $(addprefix build/lib/,$(cxx_obj_files))
DEPS = $(objs:.o=.d)

target = src/mvc_lib.out                                             
target_dep = $(addsuffix .d,$(target))

.PRECIOUS: build/lib/%.o                                            

all: $(target)

src/mvc_lib.out: src/mvc_lib.cpp $(gnn_lib) $(objs)
	$(dir_guard)
	$(CXX) $(CXXFLAGS) -MMD -g -o $@ $(filter %.cpp %.o, $^) -L$(lib_dir) -lgnn $(LDFLAGS)

DEPS += $(target_dep)

build/lib/%.o: src/lib/%.cpp
	$(dir_guard)
	$(CXX) $(CXXFLAGS) -MMD -c -g -o $@ $(filter %.cpp, $^)

clean:
	rm -rf build

-include $(DEPS)
=======
GNN_HOME=../../../graphnn        	                                        #定义gnn的路径

include $(GNN_HOME)/make_common  	                                        #添加gnn路径下的另一个makefile文件内容

lib_dir = $(GNN_HOME)/build_cpuonly/lib					        #定义库的路径
gnn_lib = $(lib_dir)/libgnn.a							#定义gnn生成静态库.a的位置

include_dirs = $(CUDA_HOME)/include $(MKL_ROOT)/include $(GNN_HOME)/include ./include  
										#CUDA,MKL,GNN,当前目录下 头文件的路径

CXXFLAGS += $(addprefix -I,$(include_dirs)) -Wno-unused-local-typedef           #-I表示首先查找的路径，把include_dirs路径添加到-I
CXXFLAGS += -fPIC                                                        	#CXXFLAGS += -Wall -g -O3 -std=c++11
cpp_files = $(shell $(FIND) src/lib -name "*.cpp" -printf "%P\n")        	#利用linux下的find命令查找src/lib/目录下名为.cpp的所有文件
cxx_obj_files = $(subst .cpp,.o,$(cpp_files))                            	#把cpp_files中的.cpp后缀替换成.o

objs = $(addprefix build/lib/,$(cxx_obj_files))                          	#.o文件的位置
DEPS = $(objs:.o=.d)								#把objs中的.o文件全体换成.d 存放在DEPS变量中

target = build/dll/libmvc.so                                             
target_dep = $(addsuffix .d,$(target))                                    	#目标的.d文件

.PRECIOUS: build/lib/%.o                                            

all: $(target)

build/dll/libmvc.so : src/mvc_lib.cpp $(gnn_lib) $(objs)
	$(dir_guard)
	$(CXX) -shared $(CXXFLAGS) -MMD -g -o $@ $(filter %.cpp %.o, $^) -L$(lib_dir) -lgnn $(LDFLAGS)
						#$(filter %.cpp %.o, $^)这个会把所有 在依赖项的文件全放到一个集合里面 -L是链接别的.a 或者.so库

DEPS += $(target_dep)

build/lib/%.o: src/lib/%.cpp
	$(dir_guard)
	$(CXX) $(CXXFLAGS) -MMD -c -g -o $@ $(filter %.cpp, $^)

clean:
	rm -rf build

-include $(DEPS)

#################################################改写后#########################################################
GNN_HOME=../../../graphnn

include $(GNN_HOME)/make_common

lib_dir = $(GNN_HOME)/build_cpuonly/lib
gnn_lib = $(lib_dir)/libgnn.a

include_dirs = $(CUDA_HOME)/include $(MKL_ROOT)/include $(GNN_HOME)/include ./include

CXXFLAGS += $(addprefix -I,$(include_dirs)) -Wno-unused-local-typedef
CXXFLAGS += -fPIC
cpp_files = $(shell $(FIND) src/lib -name "*.cpp" -printf "%P\n")
cxx_obj_files = $(subst .cpp,.o,$(cpp_files))

objs = $(addprefix build/lib/,$(cxx_obj_files))
DEPS = $(objs:.o=.d)

target = src/mvc_lib.out                                             
target_dep = $(addsuffix .d,$(target))

.PRECIOUS: build/lib/%.o                                            

all: $(target)

src/mvc_lib.out: src/mvc_lib.cpp $(gnn_lib) $(objs)
	$(dir_guard)
	$(CXX) $(CXXFLAGS) -MMD -g -o $@ $(filter %.cpp %.o, $^) -L$(lib_dir) -lgnn $(LDFLAGS)

DEPS += $(target_dep)

build/lib/%.o: src/lib/%.cpp
	$(dir_guard)
	$(CXX) $(CXXFLAGS) -MMD -c -g -o $@ $(filter %.cpp, $^)

clean:
	rm -rf build

-include $(DEPS)
>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
