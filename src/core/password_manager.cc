#include "password_manager.h"

#include <random>
#include <sstream>

using namespace std::string_literals;

namespace core {

PasswordManager::PasswordManager() {

}

PasswordManager::~PasswordManager() {

}

std::string PasswordManager::GeneratePassword(std::size_t len, bool uppercase, 
                                              bool lowercase, bool numbers, 
                                              bool symbols) {
  std::stringstream sascii {};
  if (numbers)   { sascii << "0123456789"s;  }
  if (uppercase) { sascii << "ABCDEFGHIJKLMNOPQRSTUVWXYZ"s; }
  if (lowercase) { sascii << "abcdefghijklmnopqrstuvwxyz"s; }
  if (symbols)   { sascii << "^!#@$&*%"s; }

  std::string ascii { sascii.str() };
  std::random_device rd {};
  std::mt19937 gen { rd() };
  std::uniform_int_distribution<std::size_t> next { 0, ascii.size() };
  std::string password(len, ' ');
  for (char & el : password) {
    if (!ascii.empty()) {
      el = ascii[next(gen)];
    }
  }
  return password;
}

bool PasswordManager::UserExists(const db::User& user) const {
  return false;
}

bool PasswordManager::LoginUser(const db::User& user, bool hash_password) {
  return false;
}

bool PasswordManager::CreateUser(const db::User& user) {

}

std::vector<db::Password> PasswordManager::LoadPasswords() {
  
}

std::string PasswordManager::HashPassword(const std::string& password) const {
  std::stringstream s {};
  s << std::hex << std::hash<std::string>{}(password);
  return s.str();
}

} // namespace core