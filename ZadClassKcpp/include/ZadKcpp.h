#ifndef _ZadKcpp_H

#define _ZadKcpp_H

class ZadKcpp
{
private:
    int menuId;
    int subMenuId;
    int functionId;

    bool run;

public:
    ZadKcpp();

    const bool isRunning() const;

    void renderMenu();
    void renderSubMenu(int menuId);

    void zadanie1_1();

    void zadanie2_1();
    void zadanie2_2();

    void zadanie3_1();
    void zadanie3_2();
    void zadanie3_3();
    void zadanie3_4();
    void zadanie3_5();
    void zadanie3_6();
    void zadanie3_7_Dec2Bin();
    void zadanie3_7_Bin2Dec();

    void zadanie4_0();
    void zadanie4_1();
    void zadanie4_2();
    void zadanie4_3();
    void zadanie4_4();
    void zadanie4_5();
    void zadanie4_6();
    void zadanie4_7();

    void zadanie5_1();
    void zadanie5_2();
    void zadanie5_3();
    void zadanie5_4();
    void zadanie5_5();
    void zadanie5_6();
};

#endif