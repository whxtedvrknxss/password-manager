#include "password_manager.h"

namespace core {

PasswordManager::PasswordManager() {

}

PasswordManager::~PasswordManager() {

}

std::string PasswordManager::GeneratePassword(std::size_t len, bool uppercase, 
                                              bool lowercase, bool numbers, 
                                              bool symbols) {
  return std::string();
}

bool PasswordManager::UserExists(const db::User& user) const {
  return false;
}

bool PasswordManager::LoginUser(const db::User& user, bool hash_password) {
  return false;
}

} // namespace core