#include "has_dot.h"

#include <cassert>
#include <iostream>
#include <sstream>

#include "fileio.h"

bool has_dot() noexcept
{
  const std::string filename{"tmp_has_dot.txt"};
  std::stringstream cmd;
  cmd << "dot -? > " << filename;
  std::system(cmd.str().c_str());
  assert(ribi::FileIo().IsRegularFile(filename));
  const auto v = ribi::FileIo().FileToVector(filename);
  const bool has_dot{v.size() > 1};
  if (!has_dot) {
    std::cerr << "Tip: type 'sudo apt get install graphviz' in the command line" << std::endl;
  }
  return has_dot;
}