#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_00491980(void *param_1)

{
  int iVar1;
  uint uVar2;

  /* ST_CALLSITE[00491983]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
  iVar1 = STGameObjC::sub_0045FF10(param_1);
  if (iVar1 != 0x14) {
    /* ST_CALLSITE[00491991]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
    uVar2 = STBoatC::CheckPBoxCmd(param_1,CASE_14);
    if (uVar2 == 0) {
      return 1;
    }
  }
  return 0;
}

