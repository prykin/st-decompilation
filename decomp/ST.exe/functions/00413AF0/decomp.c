#include "../../pseudocode_runtime.h"


void FUN_00413af0(void *param_1,DArrayTy *param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  ushort *puVar8;
  STGameObjC *pSVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte *puVar14;
  int local_48;
  int local_40;
  int local_34;
  int local_30;
  uint local_28;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_00790090;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  DAT_007f4d04 = nullptr;
  DAT_007f4cf0 = g_pathingGrid.cells;
  DAT_007f4d2c = (int)g_pathingGrid.sizeX;
  DAT_007f4d30 = (int)g_pathingGrid.sizeY;
  DAT_007f4d34 = (int)g_pathingGrid.sizeZ;
  if ((DAT_007f4d50 == 0) || (ExceptionList = &local_14, DAT_007f4d54 == 0)) {
    ExceptionList = &local_14;
    FUN_00414980(4000);
  }
  local_8 = 0;
  Library::MSVCRT::FUN_0072da40();
  iVar7 = DAT_007f4d34 * DAT_007f4d30 * DAT_007f4d2c + 7;
  uVar13 = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
  DAT_007f4d3c = &stack0xffffff84;
  Library::MSVCRT::FUN_0072da40();
  puVar14 = (byte *)&stack0xffffff84;
  memset(puVar14, 0, uVar13); /* compiler bulk-zero initialization */
  local_8 = 0xffffffff;
  iVar7 = DAT_007f4d30 * DAT_007f4d2c;
  DAT_007f4d24 = 0;
  DAT_007f4cfc = &stack0xffffff84;
  if (STField<ushort>(param_1,0x27) != DAT_007f4d4c) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    DAT_007f4d4c = *(uint *)(STField<int>(param_1,0x29) + 0xc);
    local_28 = 0;
    DAT_007f4cfc = &stack0xffffff84;
    puVar6 = &stack0xffffff84;
    if (0 < (int)DAT_007f4d4c) {
      do {
        DAT_007f4cfc = puVar6;
        iVar11 = STField<int>(param_1,0x29);
        if (local_28 < *(uint *)(iVar11 + 0xc)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          puVar8 = (ushort *)(*(int *)(iVar11 + 8) * local_28 + *(int *)(iVar11 + 0x1c));
        }
        else {
          puVar8 = nullptr;
        }
        if (puVar8 == nullptr) break;
        if ((*puVar8 != 0xffff) &&
           (pSVar9 = thunk_FUN_00423e70(param_1,*puVar8), pSVar9 != nullptr)) {
          iVar11 = pSVar9->field_00C7;
          if (((iVar11 < 0) ||
              (((g_pathingGrid.sizeX <= iVar11 || (iVar10 = pSVar9->field_00CB, iVar10 < 0)) ||
               (g_pathingGrid.sizeY <= iVar10)))) ||
             ((iVar4 = pSVar9->field_00CF, iVar4 < 0 || (g_pathingGrid.sizeZ <= iVar4)))) {
            sVar1 = pSVar9->field_0047;
            if ((-1 < sVar1) &&
               (((sVar1 < g_pathingGrid.sizeX && (sVar2 = pSVar9->field_0049, -1 < sVar2)) &&
                ((sVar2 < g_pathingGrid.sizeY &&
                 ((sVar3 = pSVar9->field_004B, -1 < sVar3 && (sVar3 < g_pathingGrid.sizeZ)))))))) {
              uVar12 = sVar3 * iVar7 + sVar2 * DAT_007f4d2c + (int)sVar1 ^ 7;
              DAT_007f4cfc[(int)uVar12 >> 3] =
                   DAT_007f4cfc[(int)uVar12 >> 3] | '\x01' << (uVar12 & 7);
            }
          }
          else {
            uVar12 = iVar4 * iVar7 + iVar11 + iVar10 * DAT_007f4d2c ^ 7;
            DAT_007f4cfc[(int)uVar12 >> 3] = DAT_007f4cfc[(int)uVar12 >> 3] | '\x01' << (uVar12 & 7);
          }
          DAT_007f4d24 = DAT_007f4d24 + 1;
        }
        local_28 = local_28 + 1;
        puVar6 = DAT_007f4cfc;
      } while ((int)local_28 < (int)DAT_007f4d4c);
    }
  }
  DAT_007f4d04 = Library::DKW::LIB::MemAlloc((uint)STField<ushort>(param_1,0x27) * 0x1c);
  DAT_007f4d40 = 0;
  DAT_007f4cf8 = 0;
  local_30 = 0;
  local_34 = 0;
  local_40 = 0;
  DAT_007f4d48 = DAT_007f4d04;
  if ((STField<int>(param_1,0x4d) == -2) || (STField<int>(param_1,0x4d) == -3)) {
    local_48 = 0;
    local_28 = 0;
    if (STField<short>(param_1,0x27) != 0) {
      do {
        if (local_28 < param_2->count) {
          puVar8 = DArrayAt<ushort>(param_2, local_28);
        }
        else {
          puVar8 = nullptr;
        }
        pSVar9 = thunk_FUN_00423e70(param_1,*puVar8);
        if (pSVar9 != nullptr) {
          pSVar9->field_00B7 = 0;
          if (0 < DAT_007f4d24) {
            iVar11 = pSVar9->field_00C7;
            if (((((iVar11 < 0) || (g_pathingGrid.sizeX <= iVar11)) ||
                 (iVar10 = pSVar9->field_00CB, iVar10 < 0)) ||
                ((g_pathingGrid.sizeY <= iVar10 || (iVar4 = pSVar9->field_00CF, iVar4 < 0)))) ||
               (g_pathingGrid.sizeZ <= iVar4)) {
              sVar1 = pSVar9->field_0047;
              if (((-1 < sVar1) && (sVar1 < g_pathingGrid.sizeX)) &&
                 ((sVar2 = pSVar9->field_0049, -1 < sVar2 &&
                  (((sVar2 < g_pathingGrid.sizeY && (sVar3 = pSVar9->field_004B, -1 < sVar3)) &&
                   (sVar3 < g_pathingGrid.sizeZ)))))) {
                local_20 = sVar2 * DAT_007f4d2c + sVar3 * iVar7 + (int)sVar1;
              }
            }
            else {
              local_20 = iVar4 * iVar7 + iVar11 + iVar10 * DAT_007f4d2c;
            }
            if (((byte)DAT_007f4cfc[(int)(local_20 ^ 7) >> 3] >> ((local_20 ^ 7) & 7) & 1) != 0) {
              DAT_007f4cfc[(int)(local_20 ^ 7) >> 3] =
                   DAT_007f4cfc[(int)(local_20 ^ 7) >> 3] & ~('\x01' << ((local_20 ^ 7) & 7));
              DAT_007f4d24 = DAT_007f4d24 + -1;
            }
          }
          piVar5 = STField<int *>(param_1,0x59);
          iVar11 = local_48;
          if ((uint)(ushort)pSVar9->field_0032 != piVar5[local_48 * 4 + 6]) {
            iVar10 = local_48;
            do {
              iVar10 = iVar10 + 1;
              if (*piVar5 <= iVar10) {
                iVar10 = 0;
              }
              iVar11 = *piVar5;
            } while ((iVar10 != local_48) &&
                    (iVar11 = iVar10, (uint)(ushort)pSVar9->field_0032 != piVar5[iVar10 * 4 + 6]));
          }
          if (iVar11 < *piVar5) {
            *(int *)((int)DAT_007f4d04 + DAT_007f4d40 * 0x1c) = (int)pSVar9->field_0047;
            local_30 = local_30 + 2 + pSVar9->field_0047 * 4;
            *(int *)((int)DAT_007f4d04 + DAT_007f4d40 * 0x1c + 4) = (int)pSVar9->field_0049;
            local_34 = local_34 + 2 + pSVar9->field_0049 * 4;
            *(int *)((int)DAT_007f4d04 + DAT_007f4d40 * 0x1c + 8) = (int)pSVar9->field_004B;
            local_40 = local_40 + 2 + pSVar9->field_004B * 4;
            *(uint *)((int)DAT_007f4d04 + DAT_007f4d40 * 0x1c + 0x18) = local_28;
            if (STField<int>(param_1,0x4d) == -3) {
              *(undefined4 *)(DAT_007f4d3c + DAT_007f4d40 * 0x14) =
                   *(undefined4 *)(STField<int>(param_1,0x59) + 0xc + iVar11 * 0x10);
              *(undefined4 *)(DAT_007f4d3c + DAT_007f4d40 * 0x14 + 4) =
                   *(undefined4 *)((iVar11 + 1) * 0x10 + STField<int>(param_1,0x59));
              *(undefined4 *)(DAT_007f4d3c + DAT_007f4d40 * 0x14 + 8) =
                   *(undefined4 *)(STField<int>(param_1,0x59) + 0x14 + iVar11 * 0x10);
            }
            else {
              *(undefined4 *)((int)DAT_007f4d04 + DAT_007f4d40 * 0x1c + 0xc) =
                   *(undefined4 *)(STField<int>(param_1,0x59) + 0xc + iVar11 * 0x10);
              *(undefined4 *)((int)DAT_007f4d04 + DAT_007f4d40 * 0x1c + 0x10) =
                   *(undefined4 *)((iVar11 + 1) * 0x10 + STField<int>(param_1,0x59));
              *(undefined4 *)((int)DAT_007f4d04 + DAT_007f4d40 * 0x1c + 0x14) =
                   *(undefined4 *)(STField<int>(param_1,0x59) + 0x14 + iVar11 * 0x10);
            }
            local_48 = iVar11 + 1;
            if (*STField<int *>(param_1,0x59) <= local_48) {
              local_48 = 0;
            }
            DAT_007f4d40 = DAT_007f4d40 + 1;
          }
          else {
            DAT_007f4cf8 = DAT_007f4cf8 + 1;
            *(int *)((int)DAT_007f4d04 +
                    ((uint)STField<ushort>(param_1,0x27) - DAT_007f4cf8) * 0x1c) =
                 (int)pSVar9->field_0047;
            *(int *)((int)DAT_007f4d04 +
                    ((uint)STField<ushort>(param_1,0x27) - DAT_007f4cf8) * 0x1c + 4) =
                 (int)pSVar9->field_0049;
            *(int *)((int)DAT_007f4d04 +
                    ((uint)STField<ushort>(param_1,0x27) - DAT_007f4cf8) * 0x1c + 8) =
                 (int)pSVar9->field_004B;
            *(uint *)((int)DAT_007f4d04 +
                     ((uint)STField<ushort>(param_1,0x27) - DAT_007f4cf8) * 0x1c + 0x18) =
                 local_28;
          }
        }
        local_28 = local_28 + 1;
      } while ((int)local_28 < (int)(uint)STField<ushort>(param_1,0x27));
    }
  }
  else {
    local_28 = 0;
    if (STField<short>(param_1,0x27) != 0) {
      do {
        if (local_28 < param_2->count) {
          puVar8 = DArrayAt<ushort>(param_2, local_28);
        }
        else {
          puVar8 = nullptr;
        }
        pSVar9 = thunk_FUN_00423e70(param_1,*puVar8);
        if (pSVar9 != nullptr) {
          pSVar9->field_00B7 = 0;
          *(int *)((int)DAT_007f4d04 + DAT_007f4d40 * 0x1c) = (int)pSVar9->field_0047;
          local_30 = local_30 + 2 + pSVar9->field_0047 * 4;
          *(int *)((int)DAT_007f4d04 + DAT_007f4d40 * 0x1c + 4) = (int)pSVar9->field_0049;
          local_34 = local_34 + 2 + pSVar9->field_0049 * 4;
          *(int *)((int)DAT_007f4d04 + DAT_007f4d40 * 0x1c + 8) = (int)pSVar9->field_004B;
          local_40 = local_40 + 2 + pSVar9->field_004B * 4;
          *(uint *)((int)DAT_007f4d04 + DAT_007f4d40 * 0x1c + 0x18) = local_28;
          if (0 < DAT_007f4d24) {
            iVar11 = pSVar9->field_00C7;
            if (((iVar11 < 0) || (g_pathingGrid.sizeX <= iVar11)) ||
               ((iVar10 = pSVar9->field_00CB, iVar10 < 0 ||
                (((g_pathingGrid.sizeY <= iVar10 || (iVar4 = pSVar9->field_00CF, iVar4 < 0)) ||
                 (g_pathingGrid.sizeZ <= iVar4)))))) {
              sVar1 = pSVar9->field_0047;
              if (((-1 < sVar1) && (sVar1 < g_pathingGrid.sizeX)) &&
                 ((sVar2 = pSVar9->field_0049, -1 < sVar2 &&
                  (((sVar2 < g_pathingGrid.sizeY && (sVar3 = pSVar9->field_004B, -1 < sVar3)) &&
                   (sVar3 < g_pathingGrid.sizeZ)))))) {
                local_20 = sVar2 * DAT_007f4d2c + sVar3 * iVar7 + (int)sVar1;
              }
            }
            else {
              local_20 = iVar4 * iVar7 + iVar11 + iVar10 * DAT_007f4d2c;
            }
            if (((byte)DAT_007f4cfc[(int)(local_20 ^ 7) >> 3] >> ((local_20 ^ 7) & 7) & 1) != 0) {
              DAT_007f4cfc[(int)(local_20 ^ 7) >> 3] =
                   DAT_007f4cfc[(int)(local_20 ^ 7) >> 3] & ~('\x01' << ((local_20 ^ 7) & 7));
              DAT_007f4d24 = DAT_007f4d24 + -1;
            }
          }
          DAT_007f4d40 = DAT_007f4d40 + 1;
        }
        local_28 = local_28 + 1;
      } while ((int)local_28 < (int)(uint)STField<ushort>(param_1,0x27));
    }
  }
  if (DAT_007f4d24 < 0) {
    DAT_007f4d24 = 0;
  }
  DAT_007f4d20 = DAT_007f4d40;
  if (0 < DAT_007f4d40) {
    iVar7 = DAT_007f4d40 / 2;
    DAT_007f4d0c = (iVar7 + local_30) / DAT_007f4d40;
    DAT_007f4d10 = (local_34 + iVar7) / DAT_007f4d40;
    DAT_007f4d1c = (iVar7 + local_40) / DAT_007f4d40;
    DAT_007f4d08 = FUN_006ad0b0(DAT_007f4d0c >> 2,DAT_007f4d10 >> 2,param_3,param_4);
    if (DAT_007f4d08 == 0x7f) {
      DAT_007f4d08 = 0;
    }
  }
  if (((STField<int>(param_1,0x4d) != 0) && ((STField<byte>(param_1,0x49) & 1) == 0)) &&
     (DAT_007f4d4c == STField<ushort>(param_1,0x27))) {
    iVar7 = FUN_006db910(DAT_007f4d0c,DAT_007f4d10,param_3 * 4 + 2,param_4 * 4 + 2);
    iVar7 = ((iVar7 * 4 + 0x2d) / 0x5a) * 0x5a;
    iVar7 = (int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2;
    STField<int>(param_1,0x55) = iVar7;
    if (iVar7 == 0x168) {
      STField<undefined4>(param_1,0x55) = 0;
    }
  }
  DAT_007f4d28 = Library::DKW::STR::FUN_006db640(STField<int>(param_1,0x55));
  DAT_007f4d38 = FUN_006db6d0(STField<int>(param_1,0x55));
  iVar7 = STField<int>(param_1,0x4d);
  switch(iVar7) {
  case 1:
    thunk_FUN_0040e0f0(param_3,param_4,param_5,0,STField<int>(param_1,0x51));
    break;
  case 2:
    thunk_FUN_0040fc40(param_3,param_4,param_5,0,STField<int>(param_1,0x51),0);
    break;
  case 3:
    thunk_FUN_00411260(param_3,param_4,param_5,0,STField<int>(param_1,0x51),
                       STField<uint>(param_1,0x55));
    break;
  case 4:
  case 5:
    thunk_FUN_00411e50(param_3,param_4,param_5,0,STField<int>(param_1,0x51),
                       STField<uint>(param_1,0x55),(uint)(iVar7 == 4));
    break;
  case -10:
    thunk_FUN_00410dc0(param_3,param_4,2,0,STField<int>(param_1,0x51));
    break;
  default:
    iVar7 = STField<int>(param_1,0x51);
    goto LAB_0041463f;
  case -3:
  case -2:
    if (DAT_007f4d20 < 1) {
      iVar7 = 0;
    }
    else {
      iVar7 = thunk_FUN_00412960(param_3,param_4,param_5,0,STField<int>(param_1,0x55),
                                 STField<int>(param_1,0x51),
                                 STField<AnonShape_00412960_B35D15BC *>(param_1,0x59),
                                 (uint)(iVar7 == -2));
    }
    if ((iVar7 != 0) || (DAT_007f4cf8 < 1)) break;
    DAT_007f4d48 = (void *)((int)DAT_007f4d04 +
                           ((uint)STField<ushort>(param_1,0x27) - DAT_007f4cf8) * 0x1c);
    DAT_007f4d20 = DAT_007f4cf8;
    iVar7 = STField<int>(param_1,0x55);
    if ((iVar7 < 0x152) && (0x17 < iVar7)) {
      if (iVar7 < 0x125) {
        if (iVar7 < 0xf8) {
          if (iVar7 < 0xcb) {
            if (iVar7 < 0x9e) {
              if (iVar7 < 0x71) {
                DAT_007f4d08 = (0x43 < iVar7) + 1;
                iVar7 = 0;
              }
              else {
                DAT_007f4d08 = 3;
                iVar7 = 0;
              }
            }
            else {
              DAT_007f4d08 = 4;
              iVar7 = 0;
            }
          }
          else {
            DAT_007f4d08 = 5;
            iVar7 = 0;
          }
        }
        else {
          DAT_007f4d08 = 6;
          iVar7 = 0;
        }
      }
      else {
        DAT_007f4d08 = 7;
        iVar7 = 0;
      }
    }
    else {
      DAT_007f4d08 = 0;
      iVar7 = 0;
    }
LAB_0041463f:
    thunk_FUN_00413050(param_3,param_4,param_5,0,iVar7);
  }
  STField<uint>(param_1,0x49) = STField<uint>(param_1,0x49) & 0xfffffffe;
  ExceptionList = local_14;
  return;
}

