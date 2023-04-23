// Everything that begins with hash means it's a preprocessing command
// Process before the code get compiled

#pragma once // Only include this file ONCE

void InitLog();

// declare the Log function
void Log(const char* message);


//#ifndef _LOG_H
//#define _LOG_H
//
//void InitLog();
//
//// declare the Log function
//void Log(const char* message);
//
//#endif