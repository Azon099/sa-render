/*
    SA::Render source file
    CMenuManager structure
*/
#pragma once
#include "CVector2D.h"
#include "CSprite2d.h"

#pragma pack(push, 1)
struct CMenuManager
{
    char field_0;
    char field_1[3];
    int statsScrollSpeed;
    char field_8;
    char field_9[23];
    char m_PrefsUseVibration;
    char field_21;
    char field_22[2];
    int m_dwRadarMode;
    char field_28[4];
    int field_2C;
    char field_30;
    char field_31;
    char field_32;
    char activateMenu;
    char menuAccessWidescreen;
    char field_35;
    char field_36[2];
    int field_38;
    int brightness;
    int drawDistance;
    char subtitlesOn;
    int field_45;
    char field_49;
    char legend;
    char widescreenOn;
    char frameLimiterOn;
    char field_4D;
    char field_4E;
    char sfxVolume;
    char radioVolume;
    char radioEq;
    char m_bRadioStation;
    char field_53;
    int m_dwSelectedMenuItem;
    char field_58;
    char drawRadarOrMap;
    char field_5A;
    char field_5B;
    char m_bMenuActive;
    char _doGameReload;
    char field_5E;
    char isSaveDone;
    char m_bLoadingData;
    char field_61[3];
    float m_fMapZoom;
    float m_fMapX;
    float m_fMapY;
    CVector2D m_vMousePos;
    char field_78;
    char field_79[3];
    int titleLanguage;
    int textLanguage;
    char language;
    char prevLanguage;
    char field_86[2];
    int field_88;
    char field_8C;
    char field_8D[3];
    int field_90;
    char field_94[24];
    int field_AC;
    char field_B0;
    char invertPadX1;
    char invertPadY1;
    char invertPadX2;
    char invertPadY2;
    char swapPadAxis1;
    char swapPadAxis2;
    char field_B7;
    char field_B8;
    char field_B9[3];
    int mousePosLeft;
    int mousePosTop;
    char field_C4;
    char field_C5;
    char field_C6[2];
    int multisamplingLevelsAA;
    int prevmultisamplingLevelsAA;
    char useKeyboardAndMouse;
    char field_D1[3];
    int videoMode;
    int prevVideoMode;
    int field_DC;
    int mousePosLeftA;
    int mousePosTopA;
    char field_E8;
    char m_bMainMenuSwitch;
    char playerNumber;
    char field_EB;
    int field_EC;
    int field_F0;
    char field_F4;
    char field_F5[3];
    CSprite2d *textures[25];
    char texturesLoaded;
    char m_bCurrentMenuItem;
    char field_15E;
    char m_bSelectedSaveGame;
    char field_160;
    char field_161;
    char mpackName[8];
    char field_16A[6486];
    int field_1AC0;
    int field_1AC4;
    int field_1AC8;
    int field_1ACC;
    int field_1AD0;
    int field_1AD4;
    int field_1AD8;
    short field_1ADC;
    char field_1ADE;
    char field_1ADF;
    int field_1AE0;
    int field_1AE4;
    char field_1AE8;
    char field_1AE9;
    char field_1AEA;
    char field_1AEB;
    int field_1AEC;
    char field_1AF0;
    char field_1AF1;
    char field_1AF2;
    char field_1AF3;
    int field_1AF4;
    int field_1AF8;
    int field_1AFC;
    int field_1B00;
    int field_1B04;
    char field_1B08;
    char field_1B09;
    char field_1B0A;
    char field_1B0B;
    int field_1B0C;
    char field_1B10;
    char field_1B11;
    char field_1B12;
    char field_1B13;
    char field_1B14;
    char field_1B15;
    char field_1B16;
    char field_1B17;
    int EventToDo;
    int field_1B1C;
    char field_1B20;
    char field_1B21;
    short field_1B22;
    int field_1B24;
    char field_1B28;
    char field_1B29;
    short field_1B2A;
    int field_1B2C;
    int field_1B30;
    short field_1B34;
    short field_1B36;
    int field_1B38;
    char field_1B3C;
    char field_1B3D;
    char field_1B3E;
    char field_1B3F;
    int field_1B40;
    char field_1B44;
    char field_1B45;
    short field_1B46;
    int field_1B48;
    int field_1B4C;
    char field_1B50;
    char field_1B51;
    short field_1B52;
    int field_1B54;
    int field_1B58;
    char field_1B5C;
    char field_1B5D;
    short field_1B5E;
    int field_1B60;
    int field_1B64;
    int field_1B68;
    int field_1B6C;
    int field_1B70;
    int field_1B74;
};
#pragma pack(pop)