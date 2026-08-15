#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004ddd50(int *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int uVar4;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_c;
  int local_8;

  bVar3 = false;
  bVar2 = false;
  uVar4 = LookupRecordByte((char)param_1[9]);
  uVar4 = (int)(byte)uVar4;
  if (uVar4 == 1) {
    local_8 = 0x17;
  }
  else if (uVar4 == 2) {
    local_8 = 0x88;
  }
  else if (uVar4 == 3) {
    local_8 = 0x78;
  }
  else {
    local_8 = 0;
  }
  if (-1 < param_1[0x134]) {
    piVar4 = param_1;
    piVar8 = param_1 + 0x136;
    do {
      if (piVar4[0x137] != 0) {
        if (*piVar8 == 0) {
          if (piVar8[-1] < *(int *)(&DAT_007e6028 + (piVar8[-2] + -0x96) * 0x14)) {
            *piVar8 = 1;
            bVar2 = true;
            piVar8[2] = g_playSystem_00802A38->field_00E4;
          }
        }
        else {
          iVar7 = piVar8[-2] + -0x96;
          iVar5 = thunk_FUN_004e60d0(param_1[9],local_8);
          local_c = *(int *)(&DAT_007e601c + (iVar5 + iVar7 * 5) * 4);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar5 = (**(code **)(*param_1 + 0x2c))();
          iVar5 = thunk_FUN_004b72e0((char)param_1[9],iVar5);
          if (iVar5 != 0) {
            iVar5 = thunk_FUN_004b79c0((char)param_1[9],param_1[6]);
            if (iVar5 == 0) {
              local_c = local_c * 4;
              if (DAT_00811798 != nullptr) {
                thunk_FUN_00621580(DAT_00811798,(byte *)param_1[9],5);
              }
            }
          }
          if ((uint)(piVar8[2] + local_c) <= g_playSystem_00802A38->field_00E4) {
            iVar5 = (&DAT_007e6024)[iVar7 * 5];
            iVar6 = thunk_FUN_004d7b50((char)param_1[9],3);
            if (iVar5 <= iVar6) {
              thunk_FUN_004d7d30((char)param_1[9],3,param_1[6],iVar5);
              iVar5 = piVar8[-1];
              bVar3 = true;
              piVar8[-1] = iVar5 + 1;
              if (*(int *)(&DAT_007e6028 + iVar7 * 0x14) <= iVar5 + 1) {
                *piVar8 = 0;
                bVar2 = true;
              }
              piVar8[2] = g_playSystem_00802A38->field_00E4;
            }
          }
        }
      }
      piVar1 = piVar8 + 3;
      piVar4 = piVar8 + -0x131;
      piVar8 = piVar8 + 5;
    } while (-1 < *piVar1);
    if (bVar2) {
      thunk_FUN_004ddcc0((AnonShape_004DDCC0_33DEB43E *)param_1);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((bVar3) && (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d))) {
      thunk_FUN_004d8b70((char)param_1[9]);
    }
  }
  return 0;
}

