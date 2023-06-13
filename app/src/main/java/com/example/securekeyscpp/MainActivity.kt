package com.example.securekeyscpp

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

       var keyValue = getSecureKeys().getRandomKey()
        println("Retrived key stored in C++ file: $keyValue")
    }

    companion object {
      init {
         System.loadLibrary("securekeyscpp")
      }
    }
}

class getSecureKeys(){

    external fun getRandomKey(): String
}