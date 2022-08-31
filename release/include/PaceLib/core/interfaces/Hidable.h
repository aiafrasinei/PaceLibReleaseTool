#pragma once


class Hidable
{

public:
    bool IsHidden()
    {
        return hidden;
    }

    void Hide()
    {
        hidden = true;
    }

    void Show()
    {
        hidden = false;
    }

private:

protected:
    bool hidden=false;
    
};