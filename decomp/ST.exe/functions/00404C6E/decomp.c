
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
thunk_FUN_00613140(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,
                  int param_6)

{
  short sVar1;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  fStack_10 = (float)param_4 * _DAT_007904f8 * _DAT_007904f0;
  fStack_c = (float)param_5 * _DAT_007904f8 * _DAT_007904f0;
  fStack_8 = (float)param_6 * _DAT_007904f8 * _DAT_007904f0;
  FUN_006e25d0(DAT_00807598,&iStack_3c);
  fStack_1c = (float)param_1 * _DAT_007904f8 * _DAT_007904f0;
  fStack_18 = (float)param_2 * _DAT_007904f8 * _DAT_007904f0;
  fStack_14 = (float)param_3 * _DAT_007904f8 * _DAT_007904f0;
  FUN_006e25d0(DAT_00807598,&iStack_2c);
  sVar1 = (**(code **)(*(int *)this + 0x14))
                    (iStack_3c >> 0x10,iStack_38 >> 0x10,iStack_34 >> 0x10,iStack_2c >> 0x10,
                     iStack_28 >> 0x10,iStack_24 >> 0x10);
  return *(undefined4 *)(&DAT_007d2138 + sVar1 * 4);
}

