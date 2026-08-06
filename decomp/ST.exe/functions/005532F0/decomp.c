#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_005532F0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8
   [STAbiConsistencyApplier] pointer_return_element_width target=return:-1: return=/byte *32
   Evidence: generic returned address is dereferenced with one consistent machine width across
   callers; width=1, sites=00558DC0 @ 00558E7E CMP byte ptr [EAX + EBX*0x1],0x0 | 00559110 @
   005591DD CMP byte ptr [EAX + ESI*0x1],0x0 | 005594A0 @ 0055956D CMP byte ptr [EDX + EAX*0x1],0x0
   | 00559620 @ 005596ED CMP byte ptr [EDX + EAX*0x1],0x0 | 005597A0 @ 005598B7 CMP byte ptr [ECX +
   EAX*0x1],0x0 | 005599D0 @ 00559A77 CMP byte ptr [EDX + EAX*0x1],0x0 | 00559B30 @ 00559C47 CMP
   byte ptr [ECX + EAX*0x1],0x0 | 00559D60 @ 00559E07 CMP byte ptr [EDX + EAX*0x1],0x0 | 00559EC0 @
   00559FDD CMP byte ptr [ECX + EAX*0x1],0x0 | 0055A110 @ 0055A1BA CMP byte ptr [EDX + EAX*0x1],0x0
   | 0055A270 @ 0055A38D CMP byte ptr [ECX + EAX*0x1],0x0 | 0055A4C0 @ 0055A56A CMP byte ptr [EDX +
   EAX*0x1],0x0 | 0055A620 @ 0055A73D CMP byte ptr [ECX + EAX*0x1],0x0 | 0055A870 @ 0055A91A CMP
   byte ptr [EDX + EAX*0x1],0x0 | 0055AD00 @ 0055AE71 CMP byte ptr [ECX + EDX*0x1],0x0 */

byte * __cdecl FUN_005532f0(Global_sub_005532F0_param_1Enum param_1)

{
  byte *pbVar1;

  switch(param_1) {
  case CASE_0:
    return &DAT_007c89e4;
  case CASE_1:
    return &DAT_007c89e8;
  case CASE_2:
    return &DAT_007c89f4;
  case CASE_3:
    return &DAT_007c8a10;
  case CASE_4:
    return &DAT_007c8a44;
  case CASE_5:
    return &DAT_007c8a98;
  case CASE_6:
    return &DAT_007c8b14;
  case CASE_7:
    return &DAT_007c8bc0;
  case CASE_8:
    return &DAT_007c8ca4;
  default:
    pbVar1 = thunk_FUN_005530e0(param_1);
    return pbVar1;
  }
}

