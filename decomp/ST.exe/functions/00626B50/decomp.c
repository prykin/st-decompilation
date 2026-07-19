
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00626B50_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

void __thiscall FUN_00626b50(void *this,Global_sub_00626B50_param_1Enum param_1)

{
  switch(param_1) {
  case CASE_0:
    *(undefined1 *)((int)this + 0x2d6) = 0;
    return;
  case CASE_1:
    *(undefined1 *)((int)this + 0x2d6) = 1;
    return;
  case CASE_2:
    *(undefined1 *)((int)this + 0x2d6) = 2;
    return;
  case CASE_3:
    *(undefined1 *)((int)this + 0x2d6) = 3;
  }
  return;
}

