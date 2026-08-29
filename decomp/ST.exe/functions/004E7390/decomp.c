#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E7390 -> 004E6310 @ 004E755C
   [STAbiConsistencyApplier] ecx_context_register target=function:-1: prototype=undefined __stdcall
   FUN_004e7390(STAllPlayersC * context, byte * param_2, uint param_3, uint param_4, int param_5)
   previous_return_type=/undefined Evidence: incoming ECX reaches only unadjusted __thiscall
   receivers of /STAllPlayersC; receiver_calls=1; exact RET purge=16 matches declared stack
   bytes=16; sites=004E755C -> STAllPlayersC::sub_004E6310 receiver=/STAllPlayersC */

void FUN_004e7390(STAllPlayersC *context,byte *param_2,uint param_3,uint param_4,int param_5)

{
  int *piVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  uint **ppuVar13;
  uint *puVar14;
  int iVar15;
  int local_20;
  int local_1c;
  int local_14;
  int *local_10;
  int local_c;
  char *local_8;

  if ((-1 < (int)param_2) && ((int)param_2 < 8)) {
    /* ST_CALLSITE[004E73B1]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar3 = LookupRecordByte((char)param_2);
    ppuVar13 = &PTR_00801020;
    for (iVar5 = 0xc3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppuVar13 = nullptr;
      ppuVar13 = ppuVar13 + 1;
    }
    memset(&DAT_00800bd0, 0, 0x30c); /* compiler bulk-zero initialization */
    STPiece<0,1>(DAT_00800bd4) = (undefined1)param_4;
    iVar5 = 0;
    DAT_00800bd0 = param_3;
    iVar10 = 1;
    local_20 = 0;
    local_1c = 0;
    iVar9 = 0;
    do {
      iVar15 = iVar9;
      if (iVar10 != 0) {
        iVar15 = iVar9 + iVar10;
        if (0x9a < iVar15) {
          return;
        }
        puVar11 = &DAT_00800bd0;
        puVar14 = (undefined4 *)((int)&PTR_00801020 + iVar9 * 5);
        for (uVar6 = (uint)(iVar10 * 5) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar14 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar14 = puVar14 + 1;
        }
        for (uVar6 = iVar10 * 5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar14 = *(undefined1 *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
        iVar10 = 0;
        iVar5 = iVar9;
        local_20 = iVar15;
        local_1c = iVar9;
      }
      bVar2 = false;
      if (iVar15 <= iVar5) break;
      local_8 = &DAT_00801024 + iVar5 * 5;
      piVar1 = (int *)(&PTR_DAT_007c0dc8)[bVar3 - 1];
      local_14 = iVar5;
      do {
        if (*piVar1 != 0) {
          local_10 = (int *)((int)piVar1 + 5);
          iVar9 = *(int *)(local_8 + -4);
          piVar8 = piVar1;
          do {
            if (((*piVar8 == iVar9) &&
                (piVar7 = (int *)((int)piVar8 + 5), (char)piVar8[1] == *local_8)) &&
               (local_c = 0, *local_10 != 0)) {
              piVar4 = (int *)((int)&DAT_00800bd0 + iVar10 * 5);
              do {
                if (3 < local_c) break;
                iVar10 = iVar10 + 1;
                *piVar4 = *piVar7;
                ((char *)piVar4)[1] = (char)piVar7[1];
                bVar2 = true;
                if (0x800ed6 < (int)piVar4 + 5) {
                  return;
                }
                piVar7 = (int *)((int)piVar7 + 5);
                local_c = local_c + 1;
                piVar4 = (int *)((int)piVar4 + 5);
              } while (*piVar7 != 0);
            }
            piVar8 = (int *)((int)piVar8 + 0x19);
            local_10 = (int *)((int)local_10 + 0x19);
            iVar5 = local_1c;
            iVar15 = local_20;
          } while (*piVar8 != 0);
        }
        local_14 = local_14 + 1;
        local_8 = local_8 + 5;
      } while (local_14 < iVar15);
      iVar9 = iVar15;
    } while (bVar2);
    if (-1 < iVar15 + -1) {
      puVar12 = (uint *)((int)&PTR_00801020 + (iVar15 + -1) * 5);
      do {
        if (((param_5 != 0) || (*puVar12 != param_3)) || ((byte)puVar12[1] != param_4)) {
          /* ST_CALLSITE[004E755C]: CALL 0x00402130; direct=00402130 STAllPlayersC::sub_004E6310 */
          STAllPlayersC::sub_004E6310(context,param_2,*puVar12,(uint)(byte)puVar12[1]);
        }
        puVar12 = (uint *)((int)puVar12 + -5);
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
  }
  return;
}

