#include "../../pseudocode_runtime.h"


undefined4 __cdecl
FUN_0058d160(short param_1,short param_2,short param_3,short param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,undefined2 *param_10,undefined2 *param_11,
            short *param_12)

{
  short sVar1;
  short sVar2;
  int iVar4;
  int iVar3;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_8;

  iVar4 = param_5;
  local_8 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar7 = ((param_8 - param_6 >> 1) + (int)*(short *)(param_5 + 0x41)) - param_6;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar9 = ((param_9 - param_7 >> 1) + (int)*(short *)(param_5 + 0x43)) - param_7;
  do {
    iVar8 = iVar7;
    iVar10 = iVar9;
    if (local_8 != 0) {
      iVar8 = param_6;
      iVar10 = param_7;
    }
    iVar7 = iVar8;
    if (iVar8 < 0) {
      iVar7 = -iVar8;
    }
    iVar9 = iVar10;
    if (iVar10 < 0) {
      iVar9 = -iVar10;
    }
    if (iVar9 < iVar7) {
      while( true ) {
        while (-1 < iVar8) {
          iVar7 = STField<short>(iVar4,0x41) + 0xc9;
          if (iVar7 <= (short)(param_3 * 0xc9 + 100)) goto LAB_0058d1fe;
          iVar8 = -1;
        }
        iVar7 = STField<short>(iVar4,0x41) + -0xc9;
        if ((short)(param_1 * 0xc9 + 100) <= iVar7) break;
        iVar8 = 1;
      }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_0058d1fe:
      param_6 = 0;
      iVar9 = (int)STField<short>(iVar4,0x43);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_7 = iVar10;
    }
    else {
      while( true ) {
        while (-1 < iVar10) {
          iVar9 = STField<short>(iVar4,0x43) + 0xc9;
          if (iVar9 <= (short)(param_4 * 0xc9 + 100)) goto LAB_0058d252;
          iVar10 = -1;
        }
        iVar9 = STField<short>(iVar4,0x43) + -0xc9;
        if ((short)(param_2 * 0xc9 + 100) <= iVar9) break;
        iVar10 = 1;
      }
LAB_0058d252:
      param_7 = 0;
      iVar7 = (int)STField<short>(iVar4,0x41);
      param_6 = iVar8;
    }
    sVar1 = STField<short>(iVar4,0x45);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_5 = STBiasedDiv16(sVar1, 200); /* exact signed 16-bit grid-index division */
    sVar5 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
    sVar6 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
    iVar8 = thunk_FUN_004961b0(sVar6,sVar5,(short)param_5);
    if (iVar8 != 0) goto LAB_0058d3a9;
    local_8 = local_8 + 1;
  } while (local_8 < 2);
  local_8 = 0;
  while( true ) {
    if (iVar9 < 0) {
      sVar5 = (((short)(iVar9 / 0xc9) + sVar1) - (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      sVar5 = ((short)(iVar9 / 0xc9) + sVar1) - (short)((longlong)iVar9 * 0x28c1979 >> 0x3f);
    }
    if (iVar7 < 0) {
      sVar6 = (((short)(iVar7 / 0xc9) + sVar2) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      sVar6 = ((short)(iVar7 / 0xc9) + sVar2) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f);
    }
    iVar3 = thunk_FUN_004961b0(sVar6,sVar5,(short)param_5);
    if (iVar3 != 0) break;
    param_5 = (param_5 + 1) % 5;
    local_8 = local_8 + 1;
    if (4 < local_8) {
      return 0;
    }
  }
LAB_0058d3a9:
  *param_10 = (short)iVar7;
  *param_11 = (short)iVar9;
  *param_12 = (short)param_5 * 200 + 100;
  return 1;
}

