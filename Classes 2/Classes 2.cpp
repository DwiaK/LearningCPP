#include <iostream>

// How to build a class
// Annotations:
// "m_LogLevel" -> it's just a convention that says it is a class member variable that is private
// Separate public variables, private variables, public variables and private variables

class Log
{
public:
    enum Level
    {
        LevelError, LevelWarning, LevelInfo
    };

private:
    Level m_LogLevel = LevelInfo;

public:
    void SetLevel(Level level)
    {
        m_LogLevel = level;
    }

    void Warn(const char* message)
    {
        if (m_LogLevel >= LevelWarning)
            std::cout << "[WARNING]: " << message << std::endl;
    }

    void Info(const char* message)
    {
        if (m_LogLevel >= LevelInfo)
            std::cout << "[INFO]: " << message << std::endl;
    }

    void Error(const char* message)
    {
        if(m_LogLevel >= LevelError)
            std::cout << "[ERROR]: " << message << std::endl;
    }
};

int main()
{
    Log log;
    log.SetLevel(Log::LevelError);
    log.Warn("Hello!");
    log.Error("Hello!");
    log.Info("Hello!");

    return 0;
}
