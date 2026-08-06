#include "../../pseudocode_runtime.h"


undefined4 __cdecl
FUN_004b0250(uint param_1,int param_2,int *param_3,int *param_4,int *param_5,int param_6,int param_7
            )

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  short sVar4;
  dword dVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  undefined4 uVar10;
  short *psVar11;
  int iVar12;
  uint uVar13;
  short sVar14;
  int iVar15;
  bool bVar17;
  int local_88 [10];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  short *local_38;
  short *local_34;
  short local_2e;
  DArrayTy *local_2c;
  char *local_28;
  short local_22;
  int local_20;
  short *local_1c;
  int local_18;
  int local_14;
  short *local_10;
  STFishC *local_c;
  short *local_8;

  local_3c = -1;
  local_54 = -1;
  local_50 = -1;
  local_88[8] = 0;
  local_48 = 0;
  sVar14 = g_worldGrid.sizeY;
  if (g_worldGrid.sizeY <= g_worldGrid.sizeX) {
    sVar14 = g_worldGrid.sizeX;
  }
  local_88[9] = (int)sVar14 / (int)(uint)DAT_008087c6;
  local_40 = thunk_FUN_004e81b0(param_1,param_2 + -0x32,0);
  local_10 = Library::DKW::LIB::MemAlloc(g_worldGrid.planeStride * 5);
  local_2c = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
  local_18 = 0;
  do {
    int scalar_local_34 = g_worldGrid.planeStride * local_18; /* split integer lifetime from pointer-typed SSA storage */
    local_14 = 0;
    uVar10 = STPiece<0,4>(g_worldGrid);
    if (0 < g_worldGrid.sizeY) {
      do {
        iVar15 = 0;
        if (0 < (short)uVar10) {
          psVar11 = (short *)((short)uVar10 * local_14 + scalar_local_34);
          int scalar_local_1c = (int)psVar11 * 8; /* split integer lifetime from pointer-typed SSA storage */
          local_8 = psVar11;
          do {
            local_c = *(STFishC **)(scalar_local_1c + (int)g_worldGrid.cells);
            if (local_c == nullptr) {
              sVar14 = (short)iVar15;
              if (((((sVar14 < 0) || ((short)uVar10 <= sVar14)) ||
                   (sVar8 = (short)local_14, sVar8 < 0)) ||
                  ((g_worldGrid.sizeY <= sVar8 || (sVar4 = (short)local_18, sVar4 < 0)))) ||
                 (g_worldGrid.sizeZ <= sVar4)) {
LAB_004b03a2:
                *(undefined1 *)((int)psVar11 + iVar15 + (int)local_10) = 3;
              }
              else if (STGridAt3D(g_pathingGrid, sVar14, sVar8, sVar4) == 0) {
                *(undefined1 *)((int)psVar11 + iVar15 + (int)local_10) = 0;
              }
              else {
                if (STGridAt3D(g_pathingGrid, sVar14, sVar8, sVar4) == -1) goto LAB_004b03a2;
                *(undefined1 *)((int)psVar11 + iVar15 + (int)local_10) = 1;
              }
            }
            else {
              if (((uint)local_c->field_0024 < 8) &&
                 ((g_playSystem_00802A38 == nullptr ||
                  (g_bulkInitializedRecords_008087C7[local_c->field_0024].field_0022 < 8)))) {
                bVar1 = *(byte *)&local_c->field_0024;
                local_28 = (char *)STReplaceLowByte((uint32_t)(local_28), (uint8_t)(bVar1));
                if (g_app_00806728->field_146F == '\0') {
                  if (bVar1 == (byte)param_1) {
LAB_004b04c9:
                    iVar9 = 0;
                  }
                  else {
                    uVar3 = (uint)bVar1;
                    uVar13 = param_1 & 0xff;
                    cVar2 = (&g_app_00806728->field_0x142f)[uVar13 + uVar3 * 8];
                    if ((cVar2 == '\0') &&
                       (psVar11 = local_8,
                       (&g_app_00806728->field_0x142f)[uVar3 + uVar13 * 8] == '\0')) {
                      iVar9 = -2;
                    }
                    else if ((cVar2 == '\x01') &&
                            (psVar11 = local_8,
                            (&g_app_00806728->field_0x142f)[uVar3 + uVar13 * 8] == '\0')) {
                      iVar9 = -1;
                    }
                    else if ((cVar2 == '\0') &&
                            (psVar11 = local_8,
                            (&g_app_00806728->field_0x142f)[uVar3 + uVar13 * 8] == '\x01')) {
                      iVar9 = 1;
                    }
                    else {
                      if ((cVar2 != '\x01') ||
                         ((&g_app_00806728->field_0x142f)[uVar3 + uVar13 * 8] != '\x01'))
                      goto LAB_004b04c9;
                      iVar9 = 2;
                    }
                  }
                  bVar17 = iVar9 < 0;
                }
                else {
                  bVar17 = (&g_app_00806728->field_0x11ca)[(param_1 & 0xff) * 0x51] !=
                           (&g_app_00806728->field_0x11ca)[(uint)bVar1 * 0x51];
                }
                if (bVar17) {
                  *(undefined1 *)((int)psVar11 + iVar15 + (int)local_10) = 4;
                  dVar5 = local_c->slot_2C();
                  if (((&STGroupBoatCVTable.vfunc_04)[dVar5] ==
                       (icall_004A0EE0_FUN_004a0ee0_for_STGroupBoatC *)0x2) ||
                     ((dVar5 = local_c->slot_2C(), dVar5 == 0x78 &&
                      ((&STGroupBoatCVTable.vfunc_04)[*(int *)&local_c->field_0x259] ==
                       (icall_004A0EE0_FUN_004a0ee0_for_STGroupBoatC *)0x2)))) {
                    Library::DKW::TBL::DArrayAppend(local_2c,&local_c);
                  }
                  goto LAB_004b057d;
                }
              }
              dVar5 = local_c->slot_2C();
              if (((&STGroupBoatCVTable.vfunc_04)[dVar5] ==
                   (icall_004A0EE0_FUN_004a0ee0_for_STGroupBoatC *)0x2) ||
                 ((dVar5 = local_c->slot_2C(), dVar5 == 0x78 &&
                  ((&STGroupBoatCVTable.vfunc_04)[*(int *)&local_c->field_0x259] ==
                   (icall_004A0EE0_FUN_004a0ee0_for_STGroupBoatC *)0x2)))) {
                *(undefined1 *)((int)psVar11 + iVar15 + (int)local_10) = 6;
                Library::DKW::TBL::DArrayAppend(local_2c,&local_c);
              }
              else {
                *(undefined1 *)((int)psVar11 + iVar15 + (int)local_10) = 5;
              }
            }
LAB_004b057d:
            iVar15 = iVar15 + 1;
            local_1c = local_1c + 4;
            uVar10 = STPiece<0,4>(g_worldGrid);
          } while (iVar15 < g_worldGrid.sizeX);
        }
        local_14 = local_14 + 1;
      } while (local_14 < g_worldGrid.sizeY);
    }
    local_18 = local_18 + 1;
  } while (local_18 < 4);
  if (g_array_007FA150 != nullptr) {
    g_array_007FA150->iteratorIndex = 0;
    iVar15 = DArrayGetNext(g_array_007FA150,(byte *)&local_c);
    while (-1 < iVar15) {
      if (local_c != nullptr) {
        STFishC::sub_004162B0(local_c,&local_22,(undefined2 *)((int)&param_2 + 2),&local_2e);
        *(undefined1 *)
         ((int)local_10 +
         (int)local_22 +
         (int)local_2e * (int)g_worldGrid.planeStride + (int)STPiece<2,2>(param_2) * (int)g_worldGrid.sizeX)
             = 2;
      }
      iVar15 = DArrayGetNext(g_array_007FA150,(byte *)&local_c);
    }
  }
  local_18 = 0;
  uVar10 = STPiece<0,4>(g_worldGrid);
  sVar14 = g_worldGrid.sizeY;
  do {
    local_14 = 0;
    if (0 < sVar14) {
      do {
        local_8 = (short *)(int)(short)uVar10;
        iVar15 = 0;
        if (0 < (int)local_8) {
          do {
            iVar9 = (int)g_worldGrid.planeStride;
            iVar12 = (int)local_8 * local_14;
            if (((*(char *)(iVar12 + iVar9 * local_18 + iVar15 + (int)local_10) == '\0') &&
                ((local_18 < 1 ||
                 (*(char *)((local_18 + -1) * iVar9 + iVar12 + iVar15 + (int)local_10) == '\x03'))))
               && ((3 < local_18 ||
                   (((cVar2 = *(char *)((local_18 + 1) * iVar9 + iVar12 + iVar15 + (int)local_10),
                     cVar2 != '\x01' && (cVar2 != '\x03')) && (cVar2 != '\x02')))))) {
              local_34 = (short *)(iVar9 * local_18 + (int)local_10);
              memset(local_88, 0, 0x20); /* compiler bulk-zero initialization */
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = 0;
              if (0 < local_40) {
                local_20 = local_14 + -1;
                local_58 = (local_14 + 1) * (int)local_8;
                local_60 = (int)local_8 * local_20;
                local_4c = -(int)local_8;
                local_38 = (short *)(local_58 + (int)local_34);
                local_1c = (short *)(local_60 + (int)local_34);
                iVar9 = 1;
                local_28 = (char *)((int)local_34 + iVar15 + iVar12 + -1);
                local_44 = iVar15 - local_14;
                local_5c = local_14 - iVar15;
                do {
                  if ((local_88[0] == 0) && (iVar9 + iVar15 < (int)local_8)) {
                    cVar2 = *(char *)((int)local_34 + iVar9 + iVar15 + iVar12);
                    if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
                      local_88[0] = 1;
                    }
                    else {
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = param_1 + 1;
                    }
                  }
                  if ((local_88[1] == 0) && (-1 < local_44 + local_20)) {
                    if ((*local_28 == '\x01') || (*local_28 == '\x03')) {
                      local_88[1] = 1;
                    }
                    else {
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = param_1 + 1;
                    }
                  }
                  if ((local_88[2] == 0) && (local_5c + iVar9 + iVar15 < (int)g_worldGrid.sizeY)) {
                    if ((*(char *)((int)local_38 + iVar15) == '\x01') ||
                       (*(char *)((int)local_38 + iVar15) == '\x03')) {
                      local_88[2] = 1;
                    }
                    else {
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = param_1 + 1;
                    }
                  }
                  if ((local_88[3] == 0) && (-1 < local_20)) {
                    if ((*(char *)((int)local_1c + iVar15) == '\x01') ||
                       (*(char *)((int)local_1c + iVar15) == '\x03')) {
                      local_88[3] = 1;
                    }
                    else {
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = param_1 + 1;
                    }
                  }
                  if (iVar9 * iVar9 < (local_40 * local_40) / 2) {
                    if (((local_88[4] == 0) && (iVar9 + iVar15 + local_5c < (int)g_worldGrid.sizeY))
                       && (iVar9 + iVar15 < (int)local_8)) {
                      cVar2 = *(char *)((int)local_38 + iVar15 + iVar9);
                      if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
                        local_88[4] = 1;
                      }
                      else {
                        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                        param_1 = param_1 + 1;
                      }
                    }
                    if (((local_88[5] == 0) && (-1 < local_20)) && (-1 < local_44 + local_20)) {
                      cVar2 = *(char *)((int)local_34 + iVar15 + (local_60 - iVar9));
                      if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
                        local_88[5] = 1;
                      }
                      else {
                        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                        param_1 = param_1 + 1;
                      }
                    }
                    if (((local_88[6] == 0) && (local_5c + iVar9 + iVar15 < (int)g_worldGrid.sizeY))
                       && (-1 < local_44 + local_20)) {
                      cVar2 = *(char *)((int)local_34 + iVar15 + (local_58 - iVar9));
                      if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
                        local_88[6] = 1;
                      }
                      else {
                        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                        param_1 = param_1 + 1;
                      }
                    }
                    if (((local_88[7] == 0) && (-1 < local_20)) && (iVar9 + iVar15 < (int)local_8))
                    {
                      cVar2 = *(char *)((int)local_1c + iVar15 + iVar9);
                      if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
                        local_88[7] = 1;
                      }
                      else {
                        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                        param_1 = param_1 + 1;
                      }
                    }
                  }
                  local_58 = local_58 + (int)local_8;
                  local_38 = (short *)((int)local_38 + (int)local_8);
                  local_60 = local_60 + local_4c;
                  iVar9 = iVar9 + 1;
                  local_1c = (short *)((int)local_1c + local_4c);
                  local_28 = local_28 + -1;
                  local_20 = local_20 + -1;
                } while (iVar9 <= local_40);
              }
              iVar9 = local_54;
              iVar12 = local_54;
              if (local_2c->count != 0) {
                iVar9 = -1;
                local_54 = -1;
                local_2c->iteratorIndex = 0;
                iVar6 = DArrayGetNext(local_2c,(byte *)&local_c);
                iVar12 = local_54;
                if (-1 < iVar6) {
                  iVar6 = local_40 / 2;
                  do {
                    STFishC::sub_004162B0
                              (local_c,&local_22,(undefined2 *)((int)&param_2 + 2),&local_2e);
                    iVar12 = FUN_006aced8((int)local_22,(int)STPiece<2,2>(param_2),iVar15,local_14);
                    if ((iVar12 <= iVar6) && ((iVar9 < 0 || (iVar12 < iVar9)))) {
                      iVar9 = iVar12;
                    }
                    iVar7 = DArrayGetNext(local_2c,(byte *)&local_c);
                    iVar12 = iVar9;
                  } while (-1 < iVar7);
                }
              }
              local_54 = iVar12;
              iVar12 = FUN_006aced8(iVar15,local_14,param_6,param_7);
              if (local_3c < 0) goto LAB_004b0a54;
              local_4c = iVar12 / local_88[9];
              if (local_4c <= local_3c / local_88[9]) {
                if (iVar9 < 0) {
                  if (local_50 < 0) {
LAB_004b0a3e:
                    if (((int)param_1 <= (int)local_48) &&
                       ((param_1 != local_48 || (local_3c < iVar12)))) goto LAB_004b0a79;
                  }
LAB_004b0a54:
                  local_48 = param_1;
                  *param_3 = iVar15;
                  *param_4 = local_14;
                  local_88[8] = 1;
                  *param_5 = local_18;
                  local_50 = iVar9;
                  local_3c = iVar12;
                }
                else if (-1 < local_50) {
                  if (iVar9 < 0) goto LAB_004b0a3e;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  if ((local_50 < iVar9) ||
                     ((iVar9 == local_50 &&
                      (((int)local_48 < (int)param_1 ||
                       ((param_1 == local_48 && (iVar12 <= local_3c)))))))) goto LAB_004b0a54;
                }
              }
            }
LAB_004b0a79:
            iVar15 = iVar15 + 1;
            local_8 = (short *)(int)g_worldGrid.sizeX;
            uVar10 = STPiece<0,4>(g_worldGrid);
          } while (iVar15 < (int)local_8);
        }
        local_14 = local_14 + 1;
        sVar14 = g_worldGrid.sizeY;
      } while (local_14 < g_worldGrid.sizeY);
    }
    local_18 = local_18 + 1;
    if (3 < local_18) {
      DArrayDestroy(local_2c);
      FUN_006a5e90(local_10);
      return local_88[8];
    }
  } while( true );
}

