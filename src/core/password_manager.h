// password_manager.h
#ifndef PASSWORD_MANAGER_H_
#define PASSWORD_MANAGER_H_  

#include <string>

#include "../database/entities.h"

namespace core {
  
class PasswordManager {
 private:

 public:
  PasswordManager();
  ~PasswordManager();

  // len - length of the generated password, boolean parameters are the allowed
  // type of characters for the generated password.
  std::string GeneratePassword(std::size_t len = 12, bool uppercase = true,
                               bool lowercase = true, bool numbers = true,
                               bool symbols = true);

  bool UserExists(const db::User &user) const;
  bool LoginUser(const db::User &user, bool hash_password = false);
};

} // namespace core

#endif // PASSWORD_MANAGER_H_