#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00719410_param_2Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00566E70 @ 00566EB5 -> read as EAX on
   every CFG path | 00566F30 @ 00566F75 -> read as EAX on every CFG path */

int __cdecl
FUN_00719410(undefined4 param_1,Global_sub_00719410_param_2Enum param_2,undefined4 param_3)

{
  MCIERROR mcierr;
  DWORD_PTR dwParam1;
  uint local_18;
  MCIDEVICEID local_14;
  char *local_10;
  uint local_c;
  uint local_8;
  local_18 = 0;
  dwParam1 = 0;
  local_14 = 0;
  local_10 = nullptr;
  local_c = 0;
  local_8 = 0;
  switch(param_2) {
  case CASE_0:
    local_10 = "sequencer";
    break;
  case CASE_1:
    local_10 = "waveaudio";
    break;
  case CASE_2:
    local_10 = "avivideo";
    break;
  case CASE_3:
    local_10 = "cdaudio";
    local_c = param_3;
  }
  if (param_2 < CASE_3) {
    local_c = param_1;
    dwParam1 = 0x2202;
  }
  else if (param_2 == CASE_3) {
    dwParam1 = 0x2300;
  }
  /* ST_CALLSITE[0071948F]: CALL dword ptr [0x0085bec0] */
  mcierr = mciSendCommandA(0,0x803,dwParam1,(DWORD_PTR)&local_18);
  if (mcierr == 0) {
    return local_14;
  }
  FUN_00719c90(mcierr,&local_14);
  return 0;
}

