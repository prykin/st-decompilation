#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00624920 -> 00627670 @ 00624C4E; STMineSetC::sub_00624920 this; stable alias ESI

   [STSwitchEnumApplier] Switch target field_02AD uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_02ADState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (5), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00624920 @ 00624C4E -> read as EAX;
   remaining paths kill EAX | 00625730 @ 00625A48 -> read as EAX on every CFG path | 00625730 @
   00625A55 -> read as EAX on every CFG path | 00625730 @ 00625D57 -> read as EAX on every CFG path
   | 00625730 @ 00625D97 -> read as EAX on every CFG path */

int __fastcall FUN_00627670(STMineSetC *param_1)

{
  int iVar1;

  iVar1 = 0;
  switch(param_1->field_02AD) {
  case CASE_0:
    return DAT_007e65a8;
  case CASE_1:
    return DAT_007e65bc;
  case CASE_2:
    return DAT_007e6774;
  case CASE_3:
    iVar1 = *(int *)(&DAT_007d0284 + param_1->field_034E * 4);
  }
  return iVar1;
}

