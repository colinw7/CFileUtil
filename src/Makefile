CC = g++
AR = ar
RM = rm

CDEBUG = -g
LDEBUG = -g

INC_DIR = ../include
OBJ_DIR = ../obj
LIB_DIR = ../lib

all: $(LIB_DIR)/libCFileUtil.a

SRC = \
CFileUtil.cpp \
CImageFileUtil.cpp \
CSoundFileUtil.cpp \
CTextFileUtil.cpp \

OBJS = $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRC))

CPPFLAGS = \
-std=c++14 \
-I$(INC_DIR) \
-I../../CFile/include \
-I../../COS/include \
-I../../CStrUtil/include \
-I../../CRegExp/include \
-I.

clean:
	$(RM) -f $(OBJ_DIR)/*.o
	$(RM) -f $(LIB_DIR)/libCFileUtil.a

$(OBJS): $(OBJ_DIR)/%.o: %.cpp
	$(CC) -c $< -o $(OBJ_DIR)/$*.o $(CPPFLAGS)

.SUFFIXES: .cpp

$(LIB_DIR)/libCFileUtil.a: $(OBJS)
	$(AR) crv $(LIB_DIR)/libCFileUtil.a $(OBJS)
