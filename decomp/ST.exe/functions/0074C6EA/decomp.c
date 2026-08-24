#include "../../pseudocode_runtime.h"


HRESULT FUN_0074c6ea(int *param_1,char *param_2,undefined4 *param_3)

{
  uint *puVar1;
  HRESULT HVar3;
  HRESULT HVar2;
  int iVar4;
  void **ppvVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;

  if (param_3 == nullptr) {
    HVar3 = -0x7fffbffd;
  }
  else {
    *param_3 = 0;
    iVar4 = 0x10;
    bVar8 = true;
    pcVar6 = param_2;
    pcVar7 = &DAT_007a1210;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar8 = *pcVar6 == *pcVar7;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar8);
    if (!bVar8) {
      iVar4 = 0x10;
      bVar8 = true;
      pcVar6 = param_2;
      pcVar7 = &DAT_007a1200;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar8 = *pcVar6 == *pcVar7;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (!bVar8) {
        HVar3 = FUN_00747bdf(param_1,param_2,param_3);
        return HVar3;
      }
    }
    if (param_1[0x29] == 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(param_1[0x28] + 0x8c) == 0) {
        ppvVar5 = nullptr;
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        ppvVar5 = (void **)(*(int *)(param_1[0x28] + 0x8c) + 0xc);
      }
      HVar2 = FUN_00746bab((LPUNKNOWN)param_1[1],nullptr,ppvVar5,(LPVOID *)(param_1 + 0x29));
      if (HVar2 < 0) {
        return HVar2;
      }
    }
    puVar1 = (undefined4 *)param_1[0x29];
    /* ST_CALLSITE[0074C774]: CALL dword ptr [ECX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    HVar3 = (**(code **)*puVar1)(puVar1,param_2,param_3);
  }
  return HVar3;
}

