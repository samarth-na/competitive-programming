#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  for (int i = 0; i < argc; i++) {
    cout << argv[i] << endl;
  }
  // Get the value of the environment variable
  char *env_var_value = getenv("PATH");
  // Check if the environment variable was found
  if (env_var_value != nullptr) {
    cout << "PATH" << " = " << env_var_value << endl;
  } else {
    cout << "Environment variable " << "PATH" << " not found." << endl;
  }

  std::string path_env(env_var_value);
  char *low = env_var_value;
  char *high;
  char *path;

  for (char *p1 = env_var_value; *p1 != '\0'; p1++) {
    // Check if the current character is a colon
    if (*p1 == ':') {
      // If it is, set the high pointer to the current position
      high = p1;
      // Copy the path from low to high
      path = env_var_value.substr(low, high - env_var_value);
      // Print the path
      cout << path << endl;
      // Set the low pointer to the next character
      low = p1 + 1;
    }

    return 0;
  }
}
