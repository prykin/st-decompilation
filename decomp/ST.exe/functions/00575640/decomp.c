#include "../../pseudocode_runtime.h"


void __cdecl FUN_00575640(short *param_1,undefined4 *param_2,short *param_3)

{
  uint uVar1;
  short *psVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  ushort *puVar7;
  uint uVar8;
  short *psVar10;
  uint uVar11;
  byte *puVar12;
  int iVar13;
  int iVar14;
  int local_1c;
  int *local_18;
  int local_14;
  uint local_8;
  short *psVar9;

  psVar2 = param_1;
  iVar4 = (int)*param_1 * (int)param_1[1];
  uVar11 = iVar4 * 10;
  local_1c = 0;
  puVar12 = (byte *)(param_2);
  memset(puVar12, 0, uVar11); /* compiler bulk-zero initialization */
  if (0 < STField<int>(param_1,0x455)) {
    local_18 = (int *)((int)param_1 + 0x459);
    do {
      iVar14 = *local_18;
      if (((iVar14 != 0) && (STField<short>(iVar14,0x8) != 0)) &&
         ((((byte *)iVar14)[0x4f] & 0x40) == 0)) {
        uVar8 = 0x8000;
        local_8 = 8;
        uint param_1_after_write = 0x80; /* compiler stack-slot lifetime split */
        local_14 = 0;
        psVar10 = (short *)((int)param_2 +
                           ((int)STField<short>(iVar14,0x6) * (int)*psVar2 +
                            (STField<short>(iVar14,0x8) + -1) * iVar4 + (int)STField<short>(iVar14,0x4)) * 2
                           );
        if (((char *)iVar14)[0x48] != '\0') {
          do {
            uVar1 = STField<uint>(iVar14,0x2C);
            if ((local_8 & uVar1) != 0) {
              if (((uint)param_1_after_write & uVar1) == 0) {
                sVar3 = (-(ushort)((uVar1 & uVar8) != 0) & 0x3fff) + 0xbfff;
              }
              else {
                sVar3 = -1;
              }
              *psVar10 = sVar3;
            }
            uVar1 = STField<uint>(iVar14,0x30);
            if ((local_8 & uVar1) != 0) {
              if (((uint)param_1_after_write & uVar1) == 0) {
                sVar3 = (-(ushort)((uVar1 & uVar8) != 0) & 0x3fff) + 0xbfff;
              }
              else {
                sVar3 = -1;
              }
              psVar10[1] = sVar3;
            }
            uVar1 = STField<uint>(iVar14,0x34);
            if ((local_8 & uVar1) != 0) {
              if (((uint)param_1_after_write & uVar1) == 0) {
                sVar3 = (-(ushort)((uVar1 & uVar8) != 0) & 0x3fff) + 0xbfff;
              }
              else {
                sVar3 = -1;
              }
              psVar10[*psVar2] = sVar3;
            }
            uVar1 = STField<uint>(iVar14,0x38);
            if ((local_8 & uVar1) != 0) {
              if (((uint)param_1_after_write & uVar1) == 0) {
                sVar3 = (-(ushort)((uVar1 & uVar8) != 0) & 0x3fff) + 0xbfff;
              }
              else {
                sVar3 = -1;
              }
              psVar10[*psVar2 + 1] = sVar3;
            }
            local_14 = local_14 + 1;
            psVar10 = psVar10 + -iVar4;
            param_1_after_write = ((int)param_1_after_write >> 1);
            local_8 = (int)local_8 >> 1;
            uVar8 = (int)uVar8 >> 1;
          } while (local_14 < (int)(uint)((byte *)iVar14)[0x48]);
        }
      }
      local_1c = local_1c + 1;
      local_18 = local_18 + 1;
    } while (local_1c < STField<int>(psVar2,0x455));
  }
  if (param_3 != nullptr) {
    short * param_1_after_write_2 = Library::DKW::LIB::MemAlloc(uVar11); /* compiler stack-slot lifetime split */
    puVar12 = (byte *)(param_2);
    psVar9 = param_1_after_write_2;
    for (uVar8 = uVar11 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)psVar9 = *puVar12;
      puVar12 = (byte *)(puVar12 + 1);
      psVar9 = psVar9 + 2;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)psVar9 = *(undefined1 *)puVar12;
      puVar12 = (byte *)((int)puVar12 + 1);
      psVar9 = (short *)((int)psVar9 + 1);
    }
    iVar14 = 0;
    if (0 < psVar2[1]) {
      do {
        iVar5 = (int)*psVar2;
        iVar13 = 0;
        auto param_3_after_write = param_1_after_write_2 + iVar5 * iVar14 + iVar4 * 4; /* compiler stack-slot lifetime split */
        if (0 < iVar5) {
          do {
            if (*param_3_after_write == 0) {
              FUN_006ab090((int)param_1_after_write_2,iVar5,(int)psVar2[1],5,iVar13,iVar14,4,-1,-1,-1);
            }
            iVar5 = (int)*psVar2;
            iVar13 = iVar13 + 1;
            param_3_after_write = param_3_after_write + 1;
          } while (iVar13 < iVar5);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < psVar2[1]);
    }
    short * param_3_after_write_2 = nullptr; /* compiler stack-slot lifetime split */
    local_1c = 5;
    do {
      iVar14 = 0;
      if (0 < psVar2[1]) {
        do {
          int scalar_psVar6 = *psVar2 * iVar14 + (int)param_3_after_write_2; /* split integer lifetime from pointer-typed SSA storage */
          psVar10 = param_1_after_write_2 + scalar_psVar6;
          puVar7 = (undefined2 *)(scalar_psVar6 * 2 + (int)param_2);
          iVar5 = 0;
          if (0 < *psVar2) {
            do {
              if (*psVar10 == 0) {
                *puVar7 = 0xfffe;
              }
              iVar5 = iVar5 + 1;
              psVar10 = psVar10 + 1;
              puVar7 = puVar7 + 1;
            } while (iVar5 < *psVar2);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < psVar2[1]);
      }
      param_3_after_write_2 = (short *)((int)param_3_after_write_2 + iVar4);
      local_1c = local_1c + -1;
    } while (local_1c != 0);
    FreeAndNull(&param_1_after_write_2);
  }
  return;
}

