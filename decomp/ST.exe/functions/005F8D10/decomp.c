#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_005f8d10(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  short local_a;
  short local_8;
  short local_6;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)(*param_1 + 0x1c))();
  thunk_FUN_005fa0b0((STColl3C *)param_1);
  switch(uVar2) {
  case 0:
    uVar2 = 5;
    if (STField<char>(param_1,0x29d) == '\x01') {
      if (STField<char>(param_1,699) == '\x01') {
        STFishC::sub_004162B0((STFishC *)param_1,&local_a,&local_8,&local_6);
        if ((((int)local_a == STField<int>(param_1,0x291)) &&
            ((int)local_8 == STField<int>(param_1,0x295))) &&
           ((int)local_6 == STField<int>(param_1,0x299))) {
          STField<undefined1>(param_1,699) = 3;
          return 5;
        }
      }
      else {
        iVar3 = thunk_FUN_005fa180((AnonShape_005FA180_2D8671A3 *)param_1);
        if (PTR_00806724->entryCount <= iVar3) {
          STField<undefined4>(param_1,0x2dd) = 2;
          return 5;
        }
      }
    }
    break;
  case 1:
    if (STField<int>(param_1,0x2ea) != 0) {
      STColl3C::sub_005F9450((STColl3C *)param_1);
      STField<uint>(param_1,0x2d5) = g_playSystem_00802A38->field_00E4;
      uVar1 = g_playSystem_00802A38->field_00E4;
      STField<undefined4>(param_1,0x2ef) = 0;
      STField<uint>(param_1,0x2d9) = uVar1 + 0x32;
      STField<undefined1>(param_1,699) = 1;
      STField<undefined4>(param_1,0x76) = 1;
      if (0 < param_1[0xa8]) {
        STField<undefined1>(param_1,0x29f) = 1;
        return 0xc;
      }
      STField<undefined1>(param_1,0x29f) = 0;
      return 0xc;
    }
    if (STField<char>(param_1,0x29f) == '\0') {
      if (STField<char>(param_1,0x29d) != '\x01') {
        if (STField<char>(param_1,0x29d) == '\x03') {
          STField<uint>(param_1,0x2d5) = g_playSystem_00802A38->field_00E4;
          uVar1 = g_playSystem_00802A38->field_00E4;
          STField<undefined1>(param_1,699) = 1;
          STField<undefined4>(param_1,0x76) = 1;
          STField<uint>(param_1,0x2d9) = uVar1 + 0x32;
          STField<undefined4>(param_1,0x2ef) = 0;
          return 0xc;
        }
        goto LAB_005f8ea2;
      }
    }
    else {
      if ((param_1[0xa8] != 0) && (STField<char>(param_1,0x29d) == '\0')) {
        STFishC::sub_004162B0((STFishC *)param_1,&local_a,&local_8,&local_6);
        return 10;
      }
      if (STField<char>(param_1,0x29d) != '\x01') {
LAB_005f8ea2:
        STField<undefined1>(param_1,699) = 2;
        return 8;
      }
    }
  default:
    uVar2 = 6;
    STField<undefined1>(param_1,699) = 3;
    break;
  case 2:
    iVar3 = thunk_FUN_005f8cc0(param_1);
    if (-1 < iVar3) {
      return 5;
    }
    STField<undefined4>(param_1,0x2dd) = 0xc;
    STField<undefined4>(param_1,0x76) = 1;
    STField<uint>(param_1,0x2d5) = g_playSystem_00802A38->field_00E4;
    STField<uint>(param_1,0x2d9) = g_playSystem_00802A38->field_00E4 + 0x32;
    return 0;
  }
  return uVar2;
}

