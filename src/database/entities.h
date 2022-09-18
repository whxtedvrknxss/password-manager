// entities.h
#ifndef ENTITIES_H_
#define ENTITIES_H_

#include <string>

namespace db {
  
struct User {
  std::string username;
  std::string password;
};

struct Password {
  std::string name;
  std::string url;
  std::string login;
  std::string password;
  std::string category;
};

} // namespace db

#endif