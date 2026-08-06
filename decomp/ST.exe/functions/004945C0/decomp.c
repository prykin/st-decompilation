#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall FUN_004945c0(AnonShape_004945C0_2B3B394D *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  byte bVar5;
  int *piVar6;
  bool bVar7;
  byte *local_18;
  uint local_c;

  local_c = 0;
  local_18 = &g_bulkInitializedRecords_008087C7[0].field_0022;
  piVar6 = (int *)&param_1[0x23].field_0032;
  do {
    if ((g_playSystem_00802A38 == nullptr) || (*local_18 < 8)) {
      bVar1 = param_1->field_0024;
      bVar5 = (byte)local_c;
      if (DAT_00808a8f == '\0') {
        if (bVar5 == bVar1) {
LAB_004946a9:
          iVar3 = 0;
        }
        else {
          uVar4 = local_c & 0xff;
          bVar2 = g_playerRelationMatrix[uVar4][bVar1];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar4] == 0)) {
            iVar3 = -2;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][uVar4] == 0)) {
            iVar3 = -1;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar4] == 1)) {
            iVar3 = 1;
          }
          else {
            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][uVar4] != 1)) goto LAB_004946a9;
            iVar3 = 2;
          }
        }
        bVar7 = iVar3 < 0;
      }
      else {
        bVar7 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                g_bulkInitializedRecords_008087C7[local_c & 0xff].field_0023;
      }
      if (!bVar7) {
        if (DAT_00808a8f == '\0') {
          if (bVar1 == bVar5) {
LAB_00494766:
            iVar3 = 0;
          }
          else {
            uVar4 = local_c & 0xff;
            bVar2 = g_playerRelationMatrix[bVar1][uVar4];
            if ((bVar2 == 0) && (g_playerRelationMatrix[uVar4][bVar1] == 0)) {
              iVar3 = -2;
            }
            else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar4][bVar1] == 0)) {
              iVar3 = -1;
            }
            else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar4][bVar1] == 1)) {
              iVar3 = 1;
            }
            else {
              if ((bVar2 != 1) || (g_playerRelationMatrix[uVar4][bVar1] != 1)) goto LAB_00494766;
              iVar3 = 2;
            }
          }
          bVar7 = iVar3 < 0;
        }
        else {
          bVar7 = g_bulkInitializedRecords_008087C7[local_c & 0xff].field_0023 !=
                  g_bulkInitializedRecords_008087C7[bVar1].field_0023;
        }
        if (!bVar7) {
          *piVar6 = 0;
          goto LAB_004947b1;
        }
      }
      iVar3 = thunk_FUN_0041d350(param_1,local_c);
      if (iVar3 == 1) {
        *piVar6 = 0;
      }
      else if (*piVar6 == 0) {
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        thunk_FUN_004407a0(bVar5,STReplaceLowByte((uint32_t)(extraout_EDX), (uint8_t)(param_1->field_0024)),
                           CONCAT22(extraout_var,param_1->field_0032));
        *piVar6 = 1;
      }
    }
LAB_004947b1:
    local_18 = local_18 + 0x51;
    local_c = local_c + 1;
    piVar6 = piVar6 + 1;
    if (0x808a70 < (int)local_18) {
      return;
    }
  } while( true );
}

