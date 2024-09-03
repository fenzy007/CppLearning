#include <iostream>
#include <cstring>
#include <cctype>


using namespace std;

class STRING
{
private:
 char* m_Data;
 size_t m_Size;

public:
    STRING() = default;
    STRING(const char* user_string)
    {
        printf("Created!\n");
        m_Size = strlen(user_string);
        m_Data = new char[m_Size];
        memcpy(m_Data, user_string, m_Size);
    }

    STRING(const STRING& other)
    {
        printf("Copied!\n");
        m_Size = other.m_Size;
        m_Data = new char[m_Size];
        memcpy(m_Data, other.m_Data, m_Size);
    }

    STRING(STRING&& other) noexcept
    {
        printf("Moved!\n");
        m_Size = other.m_Size;
        m_Data = other.m_Data;
        
        other.m_Size = 0;
        other.m_Data = nullptr;

    }

    ~STRING()
    {
        printf("Destroyed!\n");
        delete[]m_Data;
    }

    void print()
    {
        for(size_t i = 0; i < m_Size; i++)
        {
            printf("%c", m_Data[i]);
        }
        printf("\n");
    }
};

class Entity
{
private: STRING m_Name;

public:
    Entity(const STRING& name)
        : m_Name(name){ }

    Entity(const STRING&& name)
        : m_Name((STRING&&)name){ }
    
    void PrintName()
    {
        m_Name.print();
    }
};

int main()
{
    Entity entity("Fenzy");
    entity.PrintName();

    return 0;
}