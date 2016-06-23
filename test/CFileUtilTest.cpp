#include <CFileUtil.h>
#include <iostream>

int
main(int argc, char **argv)
{
  for (int i = 1; i < argc; ++i) {
    CFileType type = CFileUtil::getType(argv[i]);

    std::cerr << argv[i] << ":\t" << CFileUtil::getTypeStr(type) << std::endl;
  }

  return 0;
}
