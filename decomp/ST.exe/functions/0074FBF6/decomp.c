#include "../../pseudocode_runtime.h"


void __fastcall FUN_0074fbf6(int *param_1)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;

  uVar3 = 0;
  if (param_1[2] != 0) {
    iVar4 = 0;
    do {
      psVar2 = (short *)(*param_1 + iVar4);
      sVar1 = *psVar2;
      if (sVar1 == 8) {
        if (*(int *)(psVar2 + 4) != 0) {
          Library::MSVCRT::FUN_0072e2b0((HoloTy *)(*(int *)(psVar2 + 4) + -2));
        }
      }
      else if ((sVar1 == 9) || (sVar1 == 0xd)) {
        /* ST_CALLSITE[0074FC1E]: CALL dword ptr [ECX + 0x8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(**(int **)(psVar2 + 4) + 8))(*(int **)(psVar2 + 4));
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (uVar3 < (uint)param_1[2]);
  }
  Library::MSVCRT::FUN_0072e2b0((HoloTy *)*param_1);
  return;
}

