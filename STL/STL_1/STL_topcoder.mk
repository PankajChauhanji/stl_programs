##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=STL_topcoder
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/pankaj/Documents/C++/STL
ProjectPath            :=C:/Users/pankaj/Documents/C++/STL/STL_topcoder
IntermediateDirectory  :=../build-$(ConfigurationName)/STL_topcoder
OutDir                 :=../build-$(ConfigurationName)/STL_topcoder
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=pankaj
Date                   :=24/05/2020
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/STL_topcoder/vector.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/STL_topcoder/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\STL_topcoder" mkdir "..\build-$(ConfigurationName)\STL_topcoder"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\STL_topcoder" mkdir "..\build-$(ConfigurationName)\STL_topcoder"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/STL_topcoder/.d:
	@if not exist "..\build-$(ConfigurationName)\STL_topcoder" mkdir "..\build-$(ConfigurationName)\STL_topcoder"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/STL_topcoder/vector.cpp$(ObjectSuffix): vector.cpp ../build-$(ConfigurationName)/STL_topcoder/vector.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/pankaj/Documents/C++/STL/STL_topcoder/vector.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/vector.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/STL_topcoder/vector.cpp$(DependSuffix): vector.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/STL_topcoder/vector.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/STL_topcoder/vector.cpp$(DependSuffix) -MM vector.cpp

../build-$(ConfigurationName)/STL_topcoder/vector.cpp$(PreprocessSuffix): vector.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/STL_topcoder/vector.cpp$(PreprocessSuffix) vector.cpp


-include ../build-$(ConfigurationName)/STL_topcoder//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


