
#include <iostream>

class CPU
{
private:
    float baseGHz;
    float maxGHz;
public:
    CPU()
    {
        baseGHz = 0;
        maxGHz = 0;
    }
    CPU(float _baseGHz, float _maxGHz)
    {
        baseGHz = _baseGHz;
        maxGHz = _maxGHz;
    }

    void setBaseGHz(float _baseGHz)
    {
        baseGHz = _baseGHz;
    }
    void setMaxGhz(float _maxGHz)
    {
        maxGHz = _maxGHz;
    }
    float getBaseGhz() const
    {
        return baseGHz;
    }
    float getMaxGHz() const
    {
        return maxGHz;
    }

    void show()
    {
        std::cout << "Base: " << baseGHz << '\n' << "Max: " << maxGHz << '\n';
    }
    
    ~CPU()
    {
        std::cout << "CPU DESUTRUCT\n";
    }
};
class RAM
{
private:
    unsigned int GB;
public:
    RAM()
    {
        GB = 0;
    }
    RAM(unsigned int _GB)
    {
        GB = _GB;
    }

    void setGB(unsigned int _GB)
    {
        GB = _GB;
    }
    unsigned int getGB() const
    {
        return GB;
    }

    void show()
    {
        std::cout << "GB: " << GB << "\n";
    }

    ~RAM()
    {
        std::cout << "RAM DESTRUCT\n";
    }
};
class GraphicC
{
private:
    unsigned int GraphicBoostCl;
public:
    GraphicC()
    {
        GraphicBoostCl = 0;
    }
    GraphicC(unsigned int _GraphicBoostCl)
    {
        setGBCl(_GraphicBoostCl);
    }

    void setGBCl(unsigned int _GraphicBoostCl)
    {
        GraphicBoostCl = _GraphicBoostCl;
    }
    unsigned int getGBCl() const
    {
        return GraphicBoostCl;
    }
    
    void show()
    {
        std::cout << "Graphic boost Clock: " << GraphicBoostCl << '\n';
    }

    ~GraphicC()
    {
        std::cout << "GRAPHIC DESTRUCT\n";
    }
};
class Mouse
{
private:
    unsigned int sensability;
    unsigned int nOfButtons;
public:
    Mouse()
    {
        sensability = 0;
        nOfButtons = 0;
    }
    Mouse(unsigned int _sensability, unsigned int _nOfButtons)
    {
        sensability = _sensability;
        nOfButtons = _nOfButtons;
    }

    void setSens(unsigned int _sensability)
    {
        sensability = _sensability;
    }
    void setButtons(unsigned int _nOfButtons)
    {
        nOfButtons = _nOfButtons;
    }
    float getSens() const
    {
        return sensability;
    }
    unsigned int getButtons() const
    {
        return nOfButtons;
    }

    void show()
    {
        std::cout << "Sensability: " << sensability << '\n' << "Number of buttons: " << nOfButtons << '\n';
    }

    ~Mouse()
    {
        std::cout << "MOUSE DESTRUCT\n";
    }
};
class Keyboard
{
private:
    bool numPud;
public:
    Keyboard()
    {
        numPud = false;
    }
    Keyboard(bool _numPud)
    {
        numPud = _numPud;
    }

    void setNumPud(bool _numPud)
    {
        numPud = _numPud;
    }
    bool getNumPud() const
    {
        return numPud;
    }

    void show()
    {
        std::cout << "Numpud: " << (numPud ? '+' : '-') << '\n';
    }
    
    ~Keyboard()
    {
        std::cout << "KEYBOARD DESTRUCT\n";
    }
};
class Camera
{
private:
    unsigned int MPix;
public:
    Camera()
    {
        MPix = 0;
    }
    Camera(unsigned int _MPix)
    {
        MPix = _MPix;
    }

    void setMPix(unsigned int _MPix)
    {
        MPix = _MPix;
    }

    void show()
    {
        std::cout << "Megapixels: " << MPix << '\n';
    }

    ~Camera()
    {
        std::cout << "CAMERA DESTRUCT\n";
    }
};

class PC
{
private:
    CPU m_cpu;
    RAM m_ram;
    GraphicC m_gc;
    Mouse m_mouse;
    Keyboard m_keyB;
    Camera m_cam;
public:
    PC()
    {
        
    }
    PC(const float& _baseGHz, const float& _maxGHz , const unsigned int& _GB, const unsigned int _graphicBoostC, 
        Mouse &_mouse, Keyboard &_keyboard, const unsigned int _MPix)
    {
        m_cpu.setBaseGHz(_baseGHz); m_cpu.setMaxGhz(_maxGHz);
        m_ram.setGB(_GB);
        m_gc.setGBCl(_graphicBoostC);
        m_mouse = _mouse;
        m_keyB = _keyboard;
        m_cam.setMPix(_MPix);
    }

    void show()
    {
        m_cpu.show();
        m_ram.show();
        m_gc.show();
        m_mouse.show();
        m_keyB.show();
        m_cam.show();
    }

    ~PC()
    {
        std::cout << "PC DESTRUCT\n";
    }
};

int main()
{
    std::cout << "test 1:\n";
    Mouse _mouse(10000, 16);
    Keyboard _keyboard(true);
    PC _pc(12.4, 24.8, 128, 1234567, _mouse, _keyboard, 1);
    _pc.show();
    std::cout << "test 2:\n";
    _mouse.setButtons(1);
    _mouse.show();
    _pc.show();
}
