
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00490cd0(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  short sVar1;
  
  if (param_3 < 0) {
    param_3._2_2_ = 0;
  }
  sVar1 = (short)param_4;
  if ((short)param_4 < 0) {
    sVar1 = 0;
  }
  if (param_4 < 0) {
    param_4._2_2_ = 0;
  }
  if ((short)_DAT_007fb240 + -1 < (int)param_3._2_2_) {
    param_3._2_2_ = (short)_DAT_007fb240 + -1;
  }
  if (DAT_007fb242 + -1 < (int)sVar1) {
    sVar1 = DAT_007fb242 + -1;
  }
  if ((short)_DAT_007fb244 + -1 < (int)param_4._2_2_) {
    param_4._2_2_ = (short)_DAT_007fb244 + -1;
  }
  *(short *)((int)this + 0x475) = param_3._2_2_;
  *(short *)((int)this + 0x477) = sVar1;
  *(short *)((int)this + 0x479) = param_4._2_2_;
  return;
}

