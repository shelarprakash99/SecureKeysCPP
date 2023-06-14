# SecureKeysCPP
Secure Secret Keys in Android(C++ support)

1.Enable “include C++ support” while taking a new project in android studio.
2.You will notice that the native-lib.cpp file and the CMakeLists.txt file have been added to your project by default in the cpp directory.
 - native-lib.cpp file is where you can store API keys.
 - Dynamically load the C++ library into your application.
 - Create a Kotlin external function with the same name as the native function.
3.Finally, you can obtain the API key. 
//var keyValue = getSecureKeys().getRandomKey()
