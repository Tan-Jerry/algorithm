#自定义变量
headerFolder = ./include/
sourceFolder = ./src/
targetFolder = ./build/

target = $(targetFolder)app

src = $(sourceFolder)main.cpp $(wildcard $(sourceFolder)*/*.cpp)
obj = $(patsubst $(sourceFolder)%.cpp, $(targetFolder)%.o, $(src))

#  makefile自己维护的变量
#  CXX:  C++编译器命令，默认值一般是g++
#  CPPFLAGS:  预处理阶段需要的选项，如 -I -D
#		-I： 用于指定头文件位置
#		-D： 用于定义宏
#  CXXFLAGS:  C++编译器编译阶段的选项，如 -Wall -O2 -g
#		-Wall：用于输出编译的警告信息
#		-O2: 编译优化等级，0～3，一般用于编译release版本的时候
#		-g: 编译时包含debug信息
#  LDFLAGS:  链接库使用的选项，如 -L -l
CXX = g++
CPPFLAGS = -I$(headerFolder)
CXXFLAGS = -Wall -g

$(target): $(obj)
	$(CXX) $(obj) -o $(target)

#  makefile自动变量
#  $<:  规则中的第一个依赖
#  $@:  规则中的目标
#  $^:  规则中所有的依赖
#  $(@D): 当前目标所在的目录
#  在shell命令前可以加 @ - 等符号
#		@：  标记的shell命令不会在控制台打印命令
#		-：  标记的shell命令如果执行失败，忽略继续执行后面的任务
$(targetFolder)%.o: $(sourceFolder)%.cpp
	@mkdir -p $(@D)
	$(CXX) -c $(CPPFLAGS) $(CXXFLAGS) $< -o $@


#声明为伪目标，make clean就不会做更新比较
.PHONY: clean
clean:
	rm -rf $(targetFolder)*