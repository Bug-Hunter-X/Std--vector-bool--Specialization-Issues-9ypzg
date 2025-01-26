std::vector<bool> vec;
vec.push_back(true);
vec.push_back(false);
bool b = vec[0]; // This line might cause unexpected behavior
bool c = vec[1]; // This line might cause unexpected behavior