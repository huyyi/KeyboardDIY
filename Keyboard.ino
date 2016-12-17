#include <Keyboard.h>

// jianpan.ino
int fn, key1, key2, key3, key4, key5, key6, key7, key8, key9, key0;
void setup() {
  for (int i = 2; i < 15; i++)
  {
    pinMode(i, INPUT_PULLUP);
  }
  Keyboard.begin();
}
 
void loop() 
{
    fn = digitalRead(2);
    key1 = digitalRead(3);
    key2 = digitalRead(4);
    key3 = digitalRead(5);
    key4 = digitalRead(6);
    key5 = digitalRead(7);
    key6 = digitalRead(8);
    key7 = digitalRead(9);
    key8 = digitalRead(10);
    key9 = digitalRead(11);
    key0 = digitalRead(12);
    if(fn==1)
    {
        if(key1==0)
        {
            Keyboard.print("1");
            delay(250);
        }
        if(key2==0)
        {
            Keyboard.print("2");
            delay(250);
        }
        if(key3==0)
        {
            Keyboard.print("3");
            delay(250);
        }
        if(key4==0)
        {
            Keyboard.print("4");
            delay(250);
        }
        if(key5==0)
        {
            Keyboard.print("5");
            delay(250);
        }
        if(key6==0)
        {
            Keyboard.print("6");
            delay(250);
        }
        if(key7==0)
        {
            Keyboard.print("7");
            delay(250);
        }
        if(key8==0)
        {
            Keyboard.print("8");
            delay(250);
        }
        if(key9==0)
        {
            Keyboard.print("9");
            delay(250);
        }
        if(key0==0)
        {
            Keyboard.print("0");
            delay(250);
        }
    }
    else
    {
        if(key1==0)//复制快捷键
        {
            Keyboard.press(KEY_LEFT_CTRL);
            Keyboard.print("c");
            Keyboard.releaseAll();
            delay(1000);
        }
        if(key2==0)//粘贴快捷键
        {
            Keyboard.press(KEY_LEFT_CTRL);
            Keyboard.print("v");
            Keyboard.releaseAll();
            delay(1000);
        }
        if(key3==0)//快捷关机
        {
            Keyboard.press(KEY_LEFT_GUI);
            Keyboard.print("d");
            Keyboard.releaseAll();
            Keyboard.press(KEY_LEFT_ALT);
            Keyboard.press(KEY_F4);
            Keyboard.releaseAll();
            Keyboard.press(KEY_RETURN);
            delay(1000);
        }
        if(key4==0)//显示桌面
        {
            Keyboard.press(KEY_LEFT_GUI);
            Keyboard.print("d");
            Keyboard.releaseAll();
            delay(1000);
        }
        if(key5==0)//资源管理器
        {
            Keyboard.press(KEY_LEFT_GUI);
            Keyboard.print("e");
            Keyboard.releaseAll();
            delay(1000);
        }
        if(key6==0)
        {
            Keyboard.print("6");
            delay(250);
        }
        if(key7==0)
        {
            Keyboard.print("7");
            delay(250);
        }
        if(key8==0)
        {
            Keyboard.print("8");
            delay(250);
        }
        if(key9==0)
        {
            Keyboard.print("9");
            delay(250);
        }
        if(key0==0)
        {
            Keyboard.print("0");
            delay(250);
        }
    }
        
}
