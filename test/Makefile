CC = g++
RM = rm

CDEBUG = -g
LDEBUG = -g

INC_DIR = ../include
OBJ_DIR = .
LIB_DIR = ../lib
BIN_DIR = ../bin

all: dirs $(BIN_DIR)/CFileUtilTest

dirs:
	@if [ ! -e ../bin ]; then mkdir ../bin; fi

SRC = \
CFileUtilTest.cpp \

OBJS = $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRC))

CPPFLAGS = \
$(CDEBUG) \
-std=c++11 \
-I. \
-I$(INC_DIR) \
-I../../CFile/include \

LFLAGS = \
$(LDEBUG) \
-L$(LIB_DIR) \
-L../../CFileUtil/lib \
-L../../CFile/lib \
-L../../CStrUtil/lib \
-L../../COS/lib \
-L../../CRegExp/lib \

LIBS = \
-lCFileUtil -lCFile -lCStrUtil \
-lCOS -lCRegExp \
-ltre

clean:
	$(RM) -f $(OBJ_DIR)/*.o
	$(RM) -f $(BIN_DIR)/CFileUtilTest

.SUFFIXES: .cpp

.cpp.o:
	$(CC) -c $< -o $(OBJ_DIR)/$*.o $(CPPFLAGS)

$(BIN_DIR)/CFileUtilTest: $(OBJS) $(LIB_DIR)/libCFileUtil.a
	$(CC) $(LDEBUG) -o $(BIN_DIR)/CFileUtilTest $(OBJS) $(LFLAGS) $(LIBS)
