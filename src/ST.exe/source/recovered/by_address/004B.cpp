#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/004B.cpp

// 004B0250 FUN_004b0250
#line 4 "decomp/ST.exe/functions/004B0250/decomp.c"
undefined4 __cdecl
st::fn_004B0250(uint param_1,int param_2,int *param_3,int *param_4,int *param_5,int param_6,int param_7
            )

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  short sVar4;
  dword dVar5;
  int iVar6;
  int iVar12;
  int iVar7;
  int local_EAX_1940;
  short sVar8;
  int iVar9;
  undefined4 uVar10;
  short *psVar11;
  int iVar13;
  uint uVar14;
  short sVar15;
  int iVar16;
  bool bVar18;
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
  sVar15 = g_worldGrid.sizeY;
  if (g_worldGrid.sizeY <= g_worldGrid.sizeX) {
    sVar15 = g_worldGrid.sizeX;
  }
  local_88[9] = (int)sVar15 / (int)(uint)DAT_008087c6;
  local_40 = st::fn_00405C45(param_1,param_2 + -0x32,0);
  local_10 = st::pointer_boundary_cast<short *>(st::fn_006AAC70(g_worldGrid.planeStride * 5));
  local_2c = st::fn_006AE290(nullptr,10,4,10);
  local_18 = 0;
  do {
    int scalar_local_34 = g_worldGrid.planeStride * local_18; /* split integer lifetime from pointer-typed SSA storage */
    local_14 = 0;
    uVar10 = STPiece<0,4>(g_worldGrid);
    if (0 < g_worldGrid.sizeY) {
      do {
        iVar16 = 0;
        if (0 < (short)uVar10) {
          psVar11 = (short *)((short)uVar10 * local_14 + scalar_local_34);
          int scalar_local_1c = (int)psVar11 * 8; /* split integer lifetime from pointer-typed SSA storage */
          local_8 = psVar11;
          do {
            local_c = *(STFishC **)(scalar_local_1c + (int)g_worldGrid.cells);
            if (local_c == nullptr) {
              sVar15 = (short)iVar16;
              if (((((sVar15 < 0) || ((short)uVar10 <= sVar15)) ||
                   (sVar8 = (short)local_14, sVar8 < 0)) ||
                  ((g_worldGrid.sizeY <= sVar8 || (sVar4 = (short)local_18, sVar4 < 0)))) ||
                 (g_worldGrid.sizeZ <= sVar4)) {
LAB_004b03a2:
                *(undefined1 *)((int)psVar11 + iVar16 + (int)local_10) = 3;
              }
              else if (STGridAt3D(g_pathingGrid, sVar15, sVar8, sVar4) == 0) {
                *(undefined1 *)((int)psVar11 + iVar16 + (int)local_10) = 0;
              }
              else {
                if (STGridAt3D(g_pathingGrid, sVar15, sVar8, sVar4) == -1) goto LAB_004b03a2;
                *(undefined1 *)((int)psVar11 + iVar16 + (int)local_10) = 1;
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
                    uVar14 = param_1 & 0xff;
                    cVar2 = (&g_app_00806728->field_0x142f)[uVar14 + uVar3 * 8];
                    if ((cVar2 == '\0') &&
                       (psVar11 = local_8,
                       (&g_app_00806728->field_0x142f)[uVar3 + uVar14 * 8] == '\0')) {
                      iVar9 = -2;
                    }
                    else if ((cVar2 == '\x01') &&
                            (psVar11 = local_8,
                            (&g_app_00806728->field_0x142f)[uVar3 + uVar14 * 8] == '\0')) {
                      iVar9 = -1;
                    }
                    else if ((cVar2 == '\0') &&
                            (psVar11 = local_8,
                            (&g_app_00806728->field_0x142f)[uVar3 + uVar14 * 8] == '\x01')) {
                      iVar9 = 1;
                    }
                    else {
                      if ((cVar2 != '\x01') ||
                         ((&g_app_00806728->field_0x142f)[uVar3 + uVar14 * 8] != '\x01'))
                      goto LAB_004b04c9;
                      iVar9 = 2;
                    }
                  }
                  bVar18 = iVar9 < 0;
                }
                else {
                  bVar18 = (&g_app_00806728->field_0x11ca)[(param_1 & 0xff) * 0x51] !=
                           (&g_app_00806728->field_0x11ca)[(uint)bVar1 * 0x51];
                }
                if (bVar18) {
                  *(undefined1 *)((int)psVar11 + iVar16 + (int)local_10) = 4;
                  dVar5 = local_c->slot_2C();
                  if (((&st_global_00790728.vfunc_04)[dVar5] ==
                       (icall_004A0EE0_FUN_004a0ee0_for_STGroupBoatC *)0x2) ||
                     ((dVar5 = local_c->slot_2C(), dVar5 == 0x78 &&
                      ((&st_global_00790728.vfunc_04)[*(int *)&local_c->field_0x259] ==
                       (icall_004A0EE0_FUN_004a0ee0_for_STGroupBoatC *)0x2)))) {
                    st::fn_006AE1C0(local_2c,&local_c);
                  }
                  goto LAB_004b057d;
                }
              }
              dVar5 = local_c->slot_2C();
              if (((&st_global_00790728.vfunc_04)[dVar5] ==
                   (icall_004A0EE0_FUN_004a0ee0_for_STGroupBoatC *)0x2) ||
                 ((dVar5 = local_c->slot_2C(), dVar5 == 0x78 &&
                  ((&st_global_00790728.vfunc_04)[*(int *)&local_c->field_0x259] ==
                   (icall_004A0EE0_FUN_004a0ee0_for_STGroupBoatC *)0x2)))) {
                *(undefined1 *)((int)psVar11 + iVar16 + (int)local_10) = 6;
                st::fn_006AE1C0(local_2c,&local_c);
              }
              else {
                *(undefined1 *)((int)psVar11 + iVar16 + (int)local_10) = 5;
              }
            }
LAB_004b057d:
            iVar16 = iVar16 + 1;
            local_1c = local_1c + 4;
            uVar10 = STPiece<0,4>(g_worldGrid);
          } while (iVar16 < g_worldGrid.sizeX);
        }
        local_14 = local_14 + 1;
      } while (local_14 < g_worldGrid.sizeY);
    }
    local_18 = local_18 + 1;
  } while (local_18 < 4);
  if (g_array_007FA150 != nullptr) {
    g_array_007FA150->iteratorIndex = 0;
    iVar16 = st::fn_006B1190(g_array_007FA150,(byte *)&local_c);
    while (-1 < iVar16) {
      if (local_c != nullptr) {
        st::fn_004018C5(local_c,&local_22,(short *)((int)&param_2 + 2),&local_2e);
        *(undefined1 *)
         ((int)local_10 +
         (int)local_22 +
         (int)local_2e * (int)g_worldGrid.planeStride + (int)STPiece<2,2>(param_2) * (int)g_worldGrid.sizeX)
             = 2;
      }
      iVar16 = st::fn_006B1190(g_array_007FA150,(byte *)&local_c);
    }
  }
  local_18 = 0;
  uVar10 = STPiece<0,4>(g_worldGrid);
  sVar15 = g_worldGrid.sizeY;
  do {
    local_14 = 0;
    if (0 < sVar15) {
      do {
        local_8 = (short *)(int)(short)uVar10;
        iVar16 = 0;
        if (0 < (int)local_8) {
          do {
            iVar9 = (int)g_worldGrid.planeStride;
            iVar13 = (int)local_8 * local_14;
            if (((*(char *)(iVar13 + iVar9 * local_18 + iVar16 + (int)local_10) == '\0') &&
                ((local_18 < 1 ||
                 (*(char *)((local_18 + -1) * iVar9 + iVar13 + iVar16 + (int)local_10) == '\x03'))))
               && ((3 < local_18 ||
                   (((cVar2 = *(char *)((local_18 + 1) * iVar9 + iVar13 + iVar16 + (int)local_10),
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
                local_28 = (char *)((int)local_34 + iVar16 + iVar13 + -1);
                local_44 = iVar16 - local_14;
                local_5c = local_14 - iVar16;
                do {
                  if ((local_88[0] == 0) && (iVar9 + iVar16 < (int)local_8)) {
                    cVar2 = *(char *)((int)local_34 + iVar9 + iVar16 + iVar13);
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
                  if ((local_88[2] == 0) && (local_5c + iVar9 + iVar16 < (int)g_worldGrid.sizeY)) {
                    if ((*(char *)((int)local_38 + iVar16) == '\x01') ||
                       (*(char *)((int)local_38 + iVar16) == '\x03')) {
                      local_88[2] = 1;
                    }
                    else {
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = param_1 + 1;
                    }
                  }
                  if ((local_88[3] == 0) && (-1 < local_20)) {
                    if ((*(char *)((int)local_1c + iVar16) == '\x01') ||
                       (*(char *)((int)local_1c + iVar16) == '\x03')) {
                      local_88[3] = 1;
                    }
                    else {
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_1 = param_1 + 1;
                    }
                  }
                  if (iVar9 * iVar9 < (local_40 * local_40) / 2) {
                    if (((local_88[4] == 0) && (iVar9 + iVar16 + local_5c < (int)g_worldGrid.sizeY))
                       && (iVar9 + iVar16 < (int)local_8)) {
                      cVar2 = *(char *)((int)local_38 + iVar16 + iVar9);
                      if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
                        local_88[4] = 1;
                      }
                      else {
                        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                        param_1 = param_1 + 1;
                      }
                    }
                    if (((local_88[5] == 0) && (-1 < local_20)) && (-1 < local_44 + local_20)) {
                      cVar2 = *(char *)((int)local_34 + iVar16 + (local_60 - iVar9));
                      if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
                        local_88[5] = 1;
                      }
                      else {
                        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                        param_1 = param_1 + 1;
                      }
                    }
                    if (((local_88[6] == 0) && (local_5c + iVar9 + iVar16 < (int)g_worldGrid.sizeY))
                       && (-1 < local_44 + local_20)) {
                      cVar2 = *(char *)((int)local_34 + iVar16 + (local_58 - iVar9));
                      if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
                        local_88[6] = 1;
                      }
                      else {
                        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                        param_1 = param_1 + 1;
                      }
                    }
                    if (((local_88[7] == 0) && (-1 < local_20)) && (iVar9 + iVar16 < (int)local_8))
                    {
                      cVar2 = *(char *)((int)local_1c + iVar16 + iVar9);
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
              iVar13 = local_54;
              if (local_2c->count != 0) {
                iVar9 = -1;
                local_54 = -1;
                local_2c->iteratorIndex = 0;
                iVar6 = st::fn_006B1190(local_2c,(byte *)&local_c);
                iVar13 = local_54;
                if (-1 < iVar6) {
                  iVar6 = local_40 / 2;
                  do {
                    st::fn_004018C5(local_c,&local_22,(short *)((int)&param_2 + 2),&local_2e);
                    iVar12 = st::fn_006ACED8((int)local_22,(int)STPiece<2,2>(param_2),iVar16,local_14);
                    if ((iVar12 <= iVar6) && ((iVar9 < 0 || (iVar12 < iVar9)))) {
                      iVar9 = iVar12;
                    }
                    iVar7 = st::fn_006B1190(local_2c,(byte *)&local_c);
                    iVar13 = iVar9;
                  } while (-1 < iVar7);
                }
              }
              local_54 = iVar13;
              local_EAX_1940 = st::fn_006ACED8(iVar16,local_14,param_6,param_7);
              if (local_3c < 0) goto LAB_004b0a54;
              local_4c = local_EAX_1940 / local_88[9];
              if (local_4c <= local_3c / local_88[9]) {
                if (iVar9 < 0) {
                  if (local_50 < 0) {
LAB_004b0a3e:
                    if (((int)param_1 <= (int)local_48) &&
                       ((param_1 != local_48 || (local_3c < local_EAX_1940)))) goto LAB_004b0a79;
                  }
LAB_004b0a54:
                  local_48 = param_1;
                  *param_3 = iVar16;
                  *param_4 = local_14;
                  local_88[8] = 1;
                  *param_5 = local_18;
                  local_50 = iVar9;
                  local_3c = local_EAX_1940;
                }
                else if (-1 < local_50) {
                  if (iVar9 < 0) goto LAB_004b0a3e;
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  if ((local_50 < iVar9) ||
                     ((iVar9 == local_50 &&
                      (((int)local_48 < (int)param_1 ||
                       ((param_1 == local_48 && (local_EAX_1940 <= local_3c))))))))
                  goto LAB_004b0a54;
                }
              }
            }
LAB_004b0a79:
            iVar16 = iVar16 + 1;
            local_8 = (short *)(int)g_worldGrid.sizeX;
            uVar10 = STPiece<0,4>(g_worldGrid);
          } while (iVar16 < (int)local_8);
        }
        local_14 = local_14 + 1;
        sVar15 = g_worldGrid.sizeY;
      } while (local_14 < g_worldGrid.sizeY);
    }
    local_18 = local_18 + 1;
    if (3 < local_18) {
      st::fn_006AE110(local_2c);
      st::fn_006A5E90(local_10);
      return local_88[8];
    }
  } while( true );
}

// 004B0F20 FUN_004b0f20
#line 4 "decomp/ST.exe/functions/004B0F20/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004CDFD0 -> 004B0F20 @ 004CE028; FUN_004cdfd0 parameter param_2 | 0064D270 -> 004B0F20
   @ 0064D6D4; AiEventClassTy::__CreateObjPl parameter param_3; MOVSX at 0064D5DF establishes signed
   source width 2

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004CDFD0 -> 004B0F20 @ 004CE028; FUN_004cdfd0 parameter param_3 | 0064D270 -> 004B0F20
   @ 0064D6D4; AiEventClassTy::__CreateObjPl parameter param_4; MOVSX at 0064D5E3 establishes signed
   source width 2

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0064D270 -> 004B0F20 @ 0064D6D4; AiEventClassTy::__CreateObjPl parameter param_5; MOVSX
   at 0064D5E7 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 004CDFD0 -> 004B0F20 @ 004CE028; zero-filled partial register load at 004CE011 |
   0064D270 -> 004B0F20 @ 0064D6D4; AiEventClassTy::__CreateObjPl parameter param_6 */

void __cdecl
st::fn_004B0F20(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,int param_7,
            char *param_8,undefined4 param_9,undefined4 param_10)

{
  undefined4 *puVar2;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  int local_38;
  char local_34 [15];
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_9;

  puVar2 = &local_74;
  memset(puVar2, 0, 0x6f); /* compiler bulk-zero initialization */
  puVar2 = (undefined4 *)((byte *)puVar2 + 0x6c);
  local_64 = *(undefined4 *)(&DAT_00791d68 + param_2 * 4);
  local_4c = param_2;
  local_48 = param_3;
  local_40 = param_5;
  local_44 = param_4;
  local_68 = 1;
  local_6c = 1;
  local_70 = param_1;
  local_74 = 0x3e9;
  local_9 = 0;
  local_54 = 3;
  local_58 = 1;
  local_5c = param_1;
  local_60 = 1000;
  local_3c = param_6;
  local_38 = param_1;
  if (param_7 != 0xff) {
    local_38 = param_7;
  }
  local_50 = local_64;
  if (param_8 != nullptr) {
    st::fn_0072E340(local_34,param_8,0xe);
  }
  local_25 = param_9;
  local_21 = param_10;
  local_1d = 100;
  st::fn_00401BC2(g_playSystem_00802A38,0x3e9,0,0,st::machine_word_boundary_cast<undefined4>(&local_74),0);
  return;
}

// 004B1040 FUN_004b1040
#line 4 "decomp/ST.exe/functions/004B1040/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0064D270 -> 004B1040 @ 0064D679; AiEventClassTy::__CreateObjPl parameter param_3; MOVSX
   at 0064D5DF establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0064D270 -> 004B1040 @ 0064D679; AiEventClassTy::__CreateObjPl parameter param_4; MOVSX
   at 0064D5E3 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0064D270 -> 004B1040 @ 0064D679; AiEventClassTy::__CreateObjPl parameter param_5; MOVSX
   at 0064D5E7 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 0064D270 -> 004B1040 @ 0064D679; AiEventClassTy::__CreateObjPl parameter param_6 */

void __cdecl
st::fn_004B1040(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,int param_7,
            char *param_8,undefined4 param_9,undefined4 param_10)

{
  undefined4 *puVar2;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  char local_30 [19];
  undefined4 local_1d;
  undefined4 local_15;

  puVar2 = &local_5c;
  memset(puVar2, 0, 0x57); /* compiler bulk-zero initialization */
  puVar2 = (undefined4 *)((byte *)puVar2 + 0x54);
  local_48 = param_2;
  local_50 = 3;
  local_4c = *(undefined4 *)(&DAT_00791d68 + param_2 * 4);
  local_44 = param_3;
  local_3c = param_5;
  local_40 = param_4;
  local_54 = 1;
  local_58 = param_1;
  local_5c = 1000;
  local_38 = param_6;
  local_34 = param_1;
  if (param_7 != 0xff) {
    local_34 = param_7;
  }
  if (param_8 != nullptr) {
    st::fn_0072E340(local_30,param_8,0xe);
  }
  local_1d = param_9;
  local_15 = param_10;
  st::fn_00401BC2(g_playSystem_00802A38,1000,0,0,st::machine_word_boundary_cast<undefined4>(&local_5c),0);
  return;
}

// 004B1120 FUN_004b1120
#line 4 "decomp/ST.exe/functions/004B1120/decomp.c"
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004B1120_param_2Enum. Cases:
   CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94;CASE_61=97 */

int __cdecl
st::fn_004B1120(int param_1,Global_sub_004B1120_param_2Enum param_2,int *param_3,int *param_4,
            int *param_5,int param_6,int param_7)

{
  short sVar1;
  int local_EAX_136;
  dword dVar2;
  int iVar2;
  int local_EAX_414;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  STFishC *local_18;
  int local_14;
  int local_10;
  short local_a;
  short local_8;
  short local_6;

  local_14 = -1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_6 == 0) {
    piVar4 = nullptr;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    piVar4 = *(int **)(param_6 + 0x18);
  }
  local_10 = st::fn_00402829((short)*param_3,*param_4,*param_5,param_2,param_1,nullptr,
                                nullptr,nullptr,0,piVar4);
  if (local_10 == 0) {
    if ((&st_global_00790728.vfunc_04)[param_2] ==
        (icall_004A0EE0_FUN_004a0ee0_for_STGroupBoatC *)0x1) {
      param_7 = 0;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = 0;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = 0;
      if (g_array_007FA150 != nullptr) {
        g_array_007FA150->iteratorIndex = 0;
        local_EAX_136 = st::fn_006B1190(g_array_007FA150,(byte *)&local_18);
        if (-1 < local_EAX_136) {
          do {
            if (local_18 != nullptr) {
              switch(param_2) {
              case CASE_38:
                dVar2 = local_18->slot_2C();
                if (dVar2 == 0xdc) {
LAB_004b1226:
                  st::fn_004018C5(local_18,&local_6,&local_8,&local_a);
                  if (((STGridAt3D(g_worldGrid, local_6, local_8, local_a).objects[0] ==
                        nullptr) && (local_a < 4)) &&
                     ((iVar2 = st::fn_006ACED8((int)local_6,(int)local_8,*param_3,*param_4),
                      local_14 < 0 || (iVar2 < local_14)))) {
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (int)local_8;
                    param_7 = (int)local_a;
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_6 = (int)local_6;
                    local_10 = 1;
                    local_14 = iVar2;
                  }
                }
                break;
              case CASE_39:
              case CASE_5E:
                dVar2 = local_18->slot_2C();
                if (dVar2 == 0xdd) goto LAB_004b1226;
                break;
              case CASE_4F:
                dVar2 = local_18->slot_2C();
                if (dVar2 == 0xde) goto LAB_004b1226;
                break;
              case CASE_61:
                dVar2 = local_18->slot_2C();
                if (dVar2 == 0xe0) goto LAB_004b1226;
              }
            }
            local_EAX_414 = st::fn_006B1190(g_array_007FA150,(byte *)&local_18);
          } while (-1 < local_EAX_414);
          if (local_10 != 0) {
            *param_3 = param_6;
            *param_4 = param_1;
            *param_5 = param_7;
            return local_10;
          }
        }
      }
    }
    else {
      sVar1 = g_worldGrid.sizeX;
      if (g_worldGrid.sizeX <= g_worldGrid.sizeY) {
        sVar1 = g_worldGrid.sizeY;
      }
      local_14 = 1;
      iVar5 = 0;
      if (1 < sVar1) {
        do {
          local_10 = iVar5;
          iVar6 = 0;
          iVar5 = local_14;
          if ((param_7 < local_14) && (g_worldGrid.sizeZ != 1 && -1 < g_worldGrid.sizeZ + -1)) {
            do {
              iVar7 = *param_3 - iVar5;
              if (iVar7 <= *param_3 + iVar5) {
                do {
                  if ((-1 < iVar7) && (iVar7 < g_worldGrid.sizeX)) {
                    iVar8 = *param_4 - iVar5;
                    if ((-1 < iVar8) && (iVar8 < g_worldGrid.sizeY)) {
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      if (param_6 == 0) {
                        piVar4 = nullptr;
                      }
                      else {
                        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                        piVar4 = *(int **)(param_6 + 0x18);
                      }
                      iVar3 = st::fn_00402829((short)iVar7,iVar8,iVar6,param_2,param_1,
                                                 nullptr,nullptr,nullptr,0,piVar4);
                      iVar5 = local_14;
                      if (iVar3 == 0) goto LAB_004b13a9;
LAB_004b14f8:
                      *param_3 = iVar7;
                      *param_4 = iVar8;
                      goto LAB_004b150e;
                    }
LAB_004b13a9:
                    iVar8 = *param_4 + iVar5;
                    if ((-1 < iVar8) && (iVar8 < g_worldGrid.sizeY)) {
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      if (param_6 == 0) {
                        piVar4 = nullptr;
                      }
                      else {
                        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                        piVar4 = *(int **)(param_6 + 0x18);
                      }
                      iVar3 = st::fn_00402829((short)iVar7,iVar8,iVar6,param_2,param_1,
                                                 nullptr,nullptr,nullptr,0,piVar4);
                      iVar5 = local_14;
                      if (iVar3 != 0) goto LAB_004b14f8;
                    }
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 <= *param_3 + iVar5);
              }
              iVar7 = *param_4;
              iVar8 = (iVar7 - iVar5) + 1;
              if (iVar8 <= iVar7 + -1 + iVar5) {
                do {
                  if ((-1 < iVar8) && (iVar8 < g_worldGrid.sizeY)) {
                    iVar7 = iVar7 - iVar5;
                    if ((-1 < iVar7) && (iVar7 < g_worldGrid.sizeX)) {
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      if (param_6 == 0) {
                        piVar4 = nullptr;
                      }
                      else {
                        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                        piVar4 = *(int **)(param_6 + 0x18);
                      }
                      iVar3 = st::fn_00402829((short)iVar7,iVar8,iVar6,param_2,param_1,
                                                 nullptr,nullptr,nullptr,0,piVar4);
                      iVar5 = local_14;
                      if (iVar3 != 0) goto LAB_004b1504;
                    }
                    iVar7 = *param_3 + iVar5;
                    if ((-1 < iVar7) && (iVar7 < g_worldGrid.sizeX)) {
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      if (param_6 == 0) {
                        piVar4 = nullptr;
                      }
                      else {
                        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                        piVar4 = *(int **)(param_6 + 0x18);
                      }
                      iVar3 = st::fn_00402829((short)iVar7,iVar8,iVar6,param_2,param_1,
                                                 nullptr,nullptr,nullptr,0,piVar4);
                      iVar5 = local_14;
                      if (iVar3 != 0) {
LAB_004b1504:
                        *param_3 = iVar7;
                        *param_4 = iVar8;
LAB_004b150e:
                        *param_5 = iVar6;
                        return 1;
                      }
                    }
                  }
                  iVar8 = iVar8 + 1;
                  iVar7 = *param_4;
                } while (iVar8 <= iVar7 + -1 + iVar5);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < g_worldGrid.sizeZ + -1);
          }
          local_14 = iVar5 + 1;
          iVar5 = local_10;
          if (sVar1 <= local_14) {
            return local_10;
          }
        } while( true );
      }
    }
  }
  return local_10;
}

// 004B1690 FUN_004b1690
#line 4 "decomp/ST.exe/functions/004B1690/decomp.c"
undefined4 __cdecl st::fn_004B1690(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  STFishC *local_10;
  int local_c;
  undefined4 local_8;

  if ((((param_1 < 0) || ((int)g_worldGrid.sizeX < param_1 + 1)) || (param_2 < 0)) ||
     ((((int)g_worldGrid.sizeY < param_2 + 1 || (param_3 < 0)) ||
      ((int)g_worldGrid.sizeZ < param_3 + 1)))) {
cf_break_loop_004B1816:
    bVar1 = false;
  }
  else {
    bVar1 = true;
    local_10 = (STFishC *)0x1;
    iVar8 = param_1;
    if (param_1 < param_1 + 1) {
      do {
        iVar5 = param_2;
        if (param_2 < param_2 + 1) {
          do {
            iVar3 = param_3;
            if (param_3 < param_3 + 1) {
              do {
                sVar7 = (short)iVar8;
                if (sVar7 < 0) goto cf_break_loop_004B1816;
                sVar6 = (short)iVar5;
                sVar2 = (short)iVar3;
                if (((((sVar7 < g_worldGrid.sizeX) && (-1 < sVar6)) &&
                     ((sVar6 < g_worldGrid.sizeY &&
                      (((-1 < sVar2 && (sVar2 < g_worldGrid.sizeZ)) &&
                       (STGridAt3D(g_worldGrid, sVar7, sVar6, sVar2).objects[0] !=
                        nullptr)))))) || ((sVar7 < 0 || (g_worldGrid.sizeX <= sVar7))))
                   || ((sVar6 < 0 ||
                       (((g_worldGrid.sizeY <= sVar6 || (sVar2 < 0)) ||
                        ((g_worldGrid.sizeZ <= sVar2 ||
                         (STGridAt3D(g_pathingGrid, sVar7, sVar6, sVar2) != 0))))))))
                goto cf_break_loop_004B1816;
                iVar3 = iVar3 + 1;
              } while (iVar3 < param_3 + 1);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < param_2 + 1);
        }
        bVar1 = true;
        iVar8 = iVar8 + 1;
      } while (iVar8 < param_1 + 1);
    }
  }
  local_8 = static_cast<undefined4>(0);
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_4 == 0xdd) {
    local_8 = st::machine_word_boundary_cast<undefined4>(&DAT_007907ac);
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  else if (param_4 == 0xde) {
    local_8 = st::machine_word_boundary_cast<undefined4>(&DAT_007907d0);
  }
  if (bVar1) {
    local_c = 1;
    sVar7 = (short)param_3;
    if ((0 < param_3) && (iVar8 = param_1 + -1, iVar8 < param_1 + 2)) {
      do {
        iVar5 = param_2 + -1;
        if (iVar5 < param_2 + 2) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = iVar5 * 0xc;
          do {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (*(int *)(local_8 + param_4 + param_2 * -0xc + param_1 * -4 + iVar8 * 4 + 0x10) == 1)
            {
              sVar2 = sVar7 + -1;
              sVar6 = (short)iVar8;
              if ((-1 < sVar6) &&
                 ((((((sVar4 = (short)iVar5, sVar6 < g_worldGrid.sizeX && (-1 < sVar4)) &&
                     (sVar4 < g_worldGrid.sizeY)) && ((-1 < sVar2 && (sVar2 < g_worldGrid.sizeZ))))
                   && (STGridAt3D(g_worldGrid, sVar6, sVar4, sVar2).objects[0] !=
                       nullptr)) ||
                  ((((-1 < sVar6 && (sVar6 < g_worldGrid.sizeX)) &&
                    ((-1 < sVar4 &&
                     (((sVar4 < g_worldGrid.sizeY && (-1 < sVar2)) && (sVar2 < g_worldGrid.sizeZ))))
                    )) && (STGridAt3D(g_pathingGrid, sVar6, sVar4, sVar2) != -1)))))) {
                local_c = 0;
                goto LAB_004b199c;
              }
            }
            iVar5 = iVar5 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_4 = param_4 + 0xc;
          } while (iVar5 < param_2 + 2);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < param_1 + 2);
    }
LAB_004b199c:
    sVar2 = g_worldGrid.sizeX;
    if (((param_5 == 0) && (local_c != 0)) &&
       ((local_c = 0, param_3 < 3 && (local_c = 1, iVar8 = param_1, param_1 < param_1 + 3)))) {
      do {
        if (param_2 < param_2 + 3) {
          iVar5 = param_2;
          do {
            iVar3 = st::fn_00404D3B((short)iVar8,(short)iVar5,sVar7 + 1);
            if ((iVar3 == 0) ||
               (iVar3 = st::fn_00404D3B((short)iVar8,(short)iVar5,sVar7 + 2), iVar3 == 0)) {
              local_c = 0;
              sVar2 = g_worldGrid.sizeX;
              goto LAB_004b1a39;
            }
            iVar5 = iVar5 + 1;
            sVar2 = g_worldGrid.sizeX;
          } while (iVar5 < param_2 + 3);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < param_1 + 3);
    }
LAB_004b1a39:
    bVar1 = true;
    iVar8 = param_1;
    if (param_1 < param_1 + 3) {
      do {
        iVar5 = param_2;
        if (param_2 < param_2 + 3) {
          do {
            iVar3 = param_3;
            if (param_3 < param_3 + 1) {
              do {
                sVar7 = (short)iVar8;
                if ((((sVar7 < 0) || (sVar2 <= sVar7)) || (sVar6 = (short)iVar5, sVar6 < 0)) ||
                   (((g_worldGrid.sizeY <= sVar6 || (sVar4 = (short)iVar3, sVar4 < 0)) ||
                    (g_worldGrid.sizeZ <= sVar4)))) {
                  local_10 = nullptr;
                }
                else {
                  local_10 = (STFishC *)
                             g_worldGrid.cells
                             [(int)sVar6 * (int)sVar2 + (int)sVar4 * (int)g_worldGrid.planeStride +
                              (int)sVar7].objects[1];
                  sVar2 = g_worldGrid.sizeX;
                }
                if ((local_10 != nullptr) && (*(int *)&local_10->field_0x20 != 0xbe)) {
                  bVar1 = false;
                  goto LAB_004b1b6e;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < param_3 + 1);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < param_2 + 3);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < param_1 + 3);
    }
    if (g_array_007FA150 != nullptr) {
      g_array_007FA150->iteratorIndex = 0;
      iVar8 = st::fn_006B1190(g_array_007FA150,(byte *)&local_10);
      while (-1 < iVar8) {
        if (local_10 != nullptr) {
          st::fn_004018C5
                    (local_10,(short *)((int)&param_4 + 2),(short *)((int)&param_5 + 2),
                     (short *)((int)&local_8 + 2));
          if (((STPiece<2,2>(param_4) == param_1) && (STPiece<2,2>(param_5) == param_2)) &&
             (STPiece<2,2>(local_8) == param_3)) {
            bVar1 = false;
          }
        }
        iVar8 = st::fn_006B1190(g_array_007FA150,(byte *)&local_10);
      }
    }
LAB_004b1b6e:
    if ((local_c != 0) && (bVar1)) {
      return 1;
    }
  }
  return 0;
}

// 004B1CF0 FUN_004b1cf0
#line 4 "decomp/ST.exe/functions/004B1CF0/decomp.c"
int __cdecl st::fn_004B1CF0(int param_1,int *param_2,int *param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;

  iVar2 = st::fn_00402A7C(*param_2,*param_3,*param_4,param_1,0);
  if (iVar2 == 0) {
    sVar1 = g_worldGrid.sizeX;
    if (g_worldGrid.sizeX <= g_worldGrid.sizeY) {
      sVar1 = g_worldGrid.sizeY;
    }
    iVar4 = 1;
    if (1 < sVar1) {
      do {
        local_8 = 0;
        if (g_worldGrid.sizeZ != 1 && -1 < g_worldGrid.sizeZ + -1) {
          do {
            iVar5 = *param_2 - iVar4;
            if (iVar5 <= *param_2 + iVar4) {
              do {
                if ((-1 < iVar5) && (iVar5 < g_worldGrid.sizeX)) {
                  iVar6 = *param_3 - iVar4;
                  if ((-1 < iVar6) &&
                     ((iVar6 < g_worldGrid.sizeY &&
                      (iVar3 = st::fn_00402A7C(iVar5,iVar6,local_8,param_1,0), iVar3 != 0)))) {
                    *param_2 = iVar5;
                    *param_3 = iVar6;
                    *param_4 = local_8;
                    return 1;
                  }
                  iVar6 = *param_3 + iVar4;
                  if (((-1 < iVar6) && (iVar6 < g_worldGrid.sizeY)) &&
                     (iVar3 = st::fn_00402A7C(iVar5,iVar6,local_8,param_1,0), iVar3 != 0)) {
                    *param_2 = iVar5;
                    *param_3 = iVar6;
                    *param_4 = local_8;
                    return 1;
                  }
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 <= *param_2 + iVar4);
            }
            iVar5 = *param_3;
            iVar6 = (iVar5 - iVar4) + 1;
            if (iVar6 <= iVar5 + -1 + iVar4) {
              do {
                if ((-1 < iVar6) && (iVar6 < g_worldGrid.sizeY)) {
                  iVar5 = iVar5 - iVar4;
                  if ((-1 < iVar5) &&
                     ((iVar5 < g_worldGrid.sizeX &&
                      (iVar3 = st::fn_00402A7C(iVar5,iVar6,local_8,param_1,0), iVar3 != 0)))) {
                    *param_2 = iVar5;
                    *param_3 = iVar6;
                    *param_4 = local_8;
                    return 1;
                  }
                  iVar5 = *param_2 + iVar4;
                  if (((-1 < iVar5) && (iVar5 < g_worldGrid.sizeX)) &&
                     (iVar3 = st::fn_00402A7C(iVar5,iVar6,local_8,param_1,0), iVar3 != 0)) {
                    *param_2 = iVar5;
                    *param_3 = iVar6;
                    *param_4 = local_8;
                    return 1;
                  }
                }
                iVar6 = iVar6 + 1;
                iVar5 = *param_3;
              } while (iVar6 <= iVar5 + -1 + iVar4);
            }
            local_8 = local_8 + 1;
          } while (local_8 < g_worldGrid.sizeZ + -1);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < sVar1);
    }
  }
  return iVar2;
}

// 004B1FB0 FUN_004b1fb0
#line 4 "decomp/ST.exe/functions/004B1FB0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004B1FB0_param_1Enum. Cases:
   CASE_5E=94;CASE_61=97;CASE_DC=220;CASE_DD=221;CASE_DE=222 */

undefined4 __cdecl
st::fn_004B1FB0(Global_sub_004B1FB0_param_1Enum param_1,int *param_2,int *param_3,int param_4,
            int param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar4;
  Global_sub_004B1FB0_param_1Enum GVar2;
  int iVar3;
  int iVar5;
  STWorldObject *this;
  int local_1c;
  STFishC *local_18;
  int local_14;
  int local_10;
  short local_a;
  short local_8;
  short local_6;

  local_1c = 0;
  local_14 = 0;
  local_10 = 0;
  if (param_2 != nullptr) {
    *param_2 = 0;
  }
  if (param_3 != nullptr) {
    *param_3 = 0;
  }
  if (param_1 == 0xe2) {
    if (param_2 != nullptr) {
      *param_2 = 1;
    }
    iVar1 = param_7 + param_5;
    iVar5 = 0;
    for (; param_5 < iVar1; param_5 = param_5 + 1) {
      if ((-1 < param_5) && (param_5 < g_worldGrid.sizeY)) {
        for (iVar3 = param_4; iVar3 < param_6 + param_4; iVar3 = iVar3 + 1) {
          if ((-1 < iVar3) && (iVar3 < g_worldGrid.sizeX)) {
            iVar5 = iVar5 + (uint)*(byte *)(g_worldGrid.sizeX * param_5 + DAT_007fa168 + iVar3);
          }
        }
      }
    }
    if (param_3 != nullptr) {
      *param_3 = iVar5;
      return 0;
    }
  }
  else if (g_array_007FA150 != nullptr) {
    g_array_007FA150->iteratorIndex = 0;
    iVar4 = st::fn_006B1190(g_array_007FA150,(byte *)&local_18);
    while (-1 < iVar4) {
      if (((local_18 != nullptr) &&
          (GVar2 = local_18->slot_2C(), GVar2 == param_1)) &&
         (((st::fn_004018C5(local_18,&local_8,&local_6,&local_a), param_4 < 0 ||
           (((param_5 < 0 || (param_6 < 0)) || (param_7 < 0)))) ||
          ((((param_4 <= local_8 && ((int)local_8 < param_6 + param_4)) && (param_5 <= local_6)) &&
           ((int)local_6 < param_7 + param_5)))))) {
        local_1c = local_1c + 1;
        if (((local_8 < 0) || (g_worldGrid.sizeX <= local_8)) ||
           ((local_6 < 0 ||
            (((g_worldGrid.sizeY <= local_6 || (local_a < 0)) || (g_worldGrid.sizeZ <= local_a))))))
        {
          this = nullptr;
        }
        else {
          this = STGridAt3D(g_worldGrid, local_8, local_6, local_a).objects[0];
        }
        switch(param_1) {
        case CASE_5E:
        case CASE_DD:
          local_10 = 0x39;
          break;
        case CASE_61:
          local_10 = 0xe0;
          break;
        case CASE_DC:
          local_10 = 0x38;
          break;
        case CASE_DE:
          local_10 = 0x4f;
        }
        if (((this == nullptr) || (this->value_20 != 1000)) ||
           (iVar5 = this->GetObjectTypeId(), iVar5 != local_10)) {
          local_14 = local_14 + *(int *)&local_18->field_0x259;
        }
        else {
          iVar5 = (*this->vtable[2].slots_00_28[10])(0);
          local_14 = local_14 + iVar5;
        }
      }
      iVar4 = st::fn_006B1190(g_array_007FA150,(byte *)&local_18);
    }
    if (param_2 != nullptr) {
      *param_2 = local_1c;
    }
    if (param_3 != nullptr) {
      *param_3 = local_14;
    }
  }
  return 0;
}

// 004B2390 FUN_004b2390
#line 4 "decomp/ST.exe/functions/004B2390/decomp.c"
/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004B2520 -> 004B2390 @ 004B25DA | 004B2520 -> 004B2390 @ 004B2996 | 004B2520 ->
   004B2390 @ 004B29F2 | 004B2520 -> 004B2390 @ 004B2A8B | 004B2520 -> 004B2390 @ 004B2ADB

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004B23F3 TEST SI,SI classifies dword parameter loaded at 004B23E1 | 004B23F8 CMP
   SI,word ptr [0x007fb244] classifies dword parameter loaded at 004B23E1 | 004B2520 -> 004B2390 @
   004B25DA; FUN_004b2520 parameter param_5 */

undefined4 __cdecl
st::fn_004B2390(uint param_1,int param_2,int param_3,int param_4,int *param_5,int param_6)

{
  short sVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  undefined4 local_8;

  local_8 = 0;
  if ((((-1 < param_2) && (param_2 < g_worldGrid.sizeX)) && (-1 < param_3)) &&
     (param_3 < g_worldGrid.sizeY)) {
    sVar3 = (short)param_2;
    if (-1 < sVar3) {
      sVar1 = (short)param_3;
      sVar4 = (short)param_4;
      if (((((g_worldGrid.sizeX <= sVar3) || (sVar1 < 0)) ||
           ((g_worldGrid.sizeY <= sVar1 || ((sVar4 < 0 || (g_worldGrid.sizeZ <= sVar4)))))) ||
          (STGridAt3D(g_worldGrid, sVar3, sVar1, sVar4).objects[0] == nullptr)) &&
         (((((sVar3 < g_worldGrid.sizeX && (-1 < sVar1)) && (sVar1 < g_worldGrid.sizeY)) &&
           ((-1 < sVar4 && (sVar4 < g_worldGrid.sizeZ)))) &&
          (((STGridAt3D(g_pathingGrid, sVar3, sVar1, sVar4) == 0 &&
            ((local_8 = 1, param_6 != 0 && (g_visibleClass_00802A88 != nullptr)))) &&
           (iVar2 = st::fn_004052A4
                              (g_visibleClass_00802A88,param_2,param_3,param_4,param_1), iVar2 != 0)
           ))))) {
        local_8 = 0;
        *param_5 = 1;
      }
    }
    return local_8;
  }
  return 0;
}

// 004B2520 FUN_004b2520
#line 4 "decomp/ST.exe/functions/004B2520/decomp.c"
/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00479600 -> 004B2520 @ 0047B46E; /STBoatC+0x647; MOVSX at 0047B452 establishes signed
   source width 2 | 004B2520 -> 004B2390 @ 004B25DA

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00479600 -> 004B2520 @ 0047B46E; /STBoatC+0x6f7 */

undefined4 __cdecl
st::fn_004B2520(uint param_1,STBoatC_field_06F7State param_2,int param_3,int param_4,int param_5,
            undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,int param_9,int *param_10)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int uVar7;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  short sVar12;
  int iVar13;
  int *piVar14;
  STWorldObject *this;
  bool bVar15;
  int local_68;
  int local_64;
  int local_48;
  int local_34;
  STWorldObject *local_30;
  int local_2c;
  int local_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_00790940);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_30 = nullptr;
  ExceptionList = &local_14;
  *param_8 = 0xffffffff;
  *param_7 = 0xffffffff;
  *param_6 = 0xffffffff;
  *param_10 = 0;
  local_48 = 1;
  local_8 = 0;
  st::fn_0072DA40();
  local_34 = 0;
  local_8 = 0xffffffff;
  iVar6 = st::fn_0040390E(param_1,param_3,param_4,param_5,param_10,1);
  if (iVar6 != 0) {
    local_34 = 1;
    goto cf_common_exit_004B2601;
  }
  if (((int)param_2 < 0x32) || (0x73 < (int)param_2)) {
    if ((0 < (int)param_2) && ((int)param_2 < 0x29)) {
      local_2c = *(int *)(&DAT_007dfbac + param_2 * 4);
      goto LAB_004b266b;
    }
    local_2c = 0;
    uVar11 = STPiece<0,4>(g_worldGrid);
    this = local_30;
  }
  else {
    uVar7 = st::fn_004049B7((byte)param_1);
    uVar7 = (int)(byte)uVar7;
    local_2c = *(int *)(&DAT_007e3f20 + (uVar7 + param_2 * 3) * 4);
LAB_004b266b:
    uVar11 = STPiece<0,4>(g_worldGrid);
    for (iVar6 = param_3 + -8; this = local_30, iVar6 <= param_3 + 8; iVar6 = iVar6 + 1) {
      if ((-1 < iVar6) && (iVar6 < (short)uVar11)) {
        for (iVar8 = param_4 + -8; iVar8 <= param_4 + 8; iVar8 = iVar8 + 1) {
          if (((-1 < iVar8) && (iVar8 < g_worldGrid.sizeY)) &&
             (iVar13 = 0, 0 < g_worldGrid.sizeZ + -1)) {
            do {
              sVar4 = (short)iVar6;
              if ((((sVar4 < 0) || ((short)uVar11 <= sVar4)) ||
                  ((sVar5 = (short)iVar8, sVar5 < 0 ||
                   ((g_worldGrid.sizeY <= sVar5 || (sVar12 = (short)iVar13, sVar12 < 0)))))) ||
                 (g_worldGrid.sizeZ <= sVar12)) {
                this = nullptr;
              }
              else {
                this = g_worldGrid.cells
                       [(int)sVar5 * (int)(short)uVar11 + (int)sVar12 * (int)g_worldGrid.planeStride
                        + (int)sVar4].objects[0];
              }
              if (((this != nullptr) && (this[1].vtable < (STWorldObjectVTable *)0x8))
                 && (((g_playSystem_00802A38 == nullptr ||
                      (g_bulkInitializedRecords_008087C7[(int)this[1].vtable].field_0022 < 8)) &&
                     (iVar7 = this->GetObjectTypeId(), uVar11 = STPiece<0,4>(g_worldGrid),
                     iVar7 == 0x6f)))) {
                bVar2 = *(byte *)&this[1].vtable;
                if (DAT_00808a8f == '\0') {
                  if (bVar2 == (byte)param_1) {
LAB_004b281d:
                    iVar7 = 0;
                  }
                  else {
                    uVar10 = param_1 & 0xff;
                    bVar3 = g_playerRelationMatrix[bVar2][uVar10];
                    if ((bVar3 == 0) && (g_playerRelationMatrix[uVar10][bVar2] == 0)) {
                      iVar7 = -2;
                    }
                    else if ((bVar3 == 1) && (g_playerRelationMatrix[uVar10][bVar2] == 0)) {
                      iVar7 = -1;
                    }
                    else if ((bVar3 == 0) && (g_playerRelationMatrix[uVar10][bVar2] == 1)) {
                      iVar7 = 1;
                    }
                    else {
                      if ((bVar3 != 1) || (g_playerRelationMatrix[uVar10][bVar2] != 1))
                      goto LAB_004b281d;
                      iVar7 = 2;
                    }
                  }
                  bVar15 = iVar7 < 0;
                }
                else {
                  bVar15 = g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023 !=
                           g_bulkInitializedRecords_008087C7[bVar2].field_0023;
                }
                if ((bVar15) && (local_2c < *(int *)&this[0x22].field_0x8)) goto LAB_004b288e;
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < g_worldGrid.sizeZ + -1);
          }
        }
      }
    }
  }
LAB_004b288e:
  local_30 = this;
  if (local_30 == nullptr) {
    if (*param_10 != 0) {
      *param_10 = 0;
      local_34 = 1;
      goto cf_common_exit_004B2601;
    }
    local_48 = 0;
  }
  else {
    puVar1 = st::pointer_boundary_cast<undefined1 *>(&local_30[0x22].field_0x8);
    *(int *)puVar1 = *(int *)puVar1 - local_2c;
    if (*(int *)puVar1 < 0) {
      *(undefined4 *)&local_30[0x22].field_0x8 = 0;
    }
    *(uint *)&local_30[0x22].field_0xc = g_playSystem_00802A38->field_00E4;
    uVar11 = STPiece<0,4>(g_worldGrid);
  }
  local_28 = 1;
  iVar6 = param_4 - param_3;
  local_64 = param_3;
  while( true ) {
    local_64 = local_64 + 1;
    local_68 = param_3 + -1;
    sVar4 = g_worldGrid.sizeY;
    if (g_worldGrid.sizeY < (short)uVar11) {
      sVar4 = (short)uVar11;
    }
    if (sVar4 <= local_28) break;
    iVar8 = 0;
    if (0 < g_worldGrid.sizeZ + -1) {
      do {
        if (local_68 <= local_64) {
          piVar14 = (int *)(&stack0xffffff7c + local_34 * 0xc);
          iVar13 = local_68;
          do {
            if ((-1 < iVar13) && (iVar13 < (short)uVar11)) {
              iVar7 = local_68 + iVar6;
              if ((-1 < iVar7) &&
                 ((iVar7 < g_worldGrid.sizeY &&
                  (iVar9 = st::fn_0040390E(param_1,iVar13,iVar7,iVar8,param_10,local_48),
                  uVar11 = STPiece<0,4>(g_worldGrid), iVar9 != 0)))) {
                *piVar14 = iVar13;
                piVar14[1] = iVar7;
                piVar14[2] = iVar8;
                local_34 = local_34 + 1;
                piVar14 = piVar14 + 3;
                if (0xe < local_34) goto cf_common_exit_004B2601;
              }
              iVar7 = local_64 + iVar6;
              if (((-1 < iVar7) && (iVar7 < g_worldGrid.sizeY)) &&
                 (iVar9 = st::fn_0040390E(param_1,iVar13,iVar7,iVar8,param_10,local_48),
                 uVar11 = STPiece<0,4>(g_worldGrid), iVar9 != 0)) {
                *piVar14 = iVar13;
                piVar14[1] = iVar7;
                piVar14[2] = iVar8;
                local_34 = local_34 + 1;
                piVar14 = piVar14 + 3;
                if (0xe < local_34) goto cf_common_exit_004B2601;
              }
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 <= local_64);
        }
        iVar13 = iVar6 + 1 + local_68;
        iVar7 = iVar6 + -1 + local_64;
        if (iVar13 <= iVar7) {
          piVar14 = (int *)(&stack0xffffff7c + local_34 * 0xc);
          do {
            if ((-1 < iVar13) && (iVar13 < g_worldGrid.sizeY)) {
              if ((-1 < local_68) &&
                 ((local_68 < (short)uVar11 &&
                  (iVar9 = st::fn_0040390E(param_1,local_68,iVar13,iVar8,param_10,local_48),
                  uVar11 = STPiece<0,4>(g_worldGrid), iVar9 != 0)))) {
                *piVar14 = local_68;
                piVar14[1] = iVar13;
                piVar14[2] = iVar8;
                local_34 = local_34 + 1;
                piVar14 = piVar14 + 3;
                if (0xe < local_34) goto cf_common_exit_004B2601;
              }
              if (((-1 < local_64) && (local_64 < (short)uVar11)) &&
                 (iVar9 = st::fn_0040390E(param_1,local_64,iVar13,iVar8,param_10,local_48),
                 uVar11 = STPiece<0,4>(g_worldGrid), iVar9 != 0)) {
                *piVar14 = local_64;
                piVar14[1] = iVar13;
                piVar14[2] = iVar8;
                local_34 = local_34 + 1;
                piVar14 = piVar14 + 3;
                if (0xe < local_34) goto cf_common_exit_004B2601;
              }
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 <= iVar7);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < g_worldGrid.sizeZ + -1);
    }
    local_28 = local_28 + 1;
    param_3 = local_68;
  }
cf_common_exit_004B2601:
  if (local_34 != 0) {
    if (local_34 < 2) {
      local_34 = 0;
    }
    else {
      local_34 = param_9 % local_34;
    }
    local_34 = local_34 * 0xc;
    *param_6 = *(undefined4 *)(&stack0xffffff7c + local_34);
    *param_7 = *(undefined4 *)(&stack0xffffff80 + local_34);
    *param_8 = *(undefined4 *)(&stack0xffffff84 + local_34);
  }
  ExceptionList = local_14;
  return 0;
}

// 004B2D10 FUN_004b2d10
#line 4 "decomp/ST.exe/functions/004B2D10/decomp.c"
undefined4 __cdecl st::fn_004B2D10(byte param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  STWorldObject *this;
  uint uVar3;
  uint uVar5;
  int uVar4;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int local_34;
  int local_30;
  int local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;

  if ((param_2 < 0x32) || (0x73 < param_2)) {
    if (param_2 < 1) {
      return 0;
    }
    if (0x28 < param_2) {
      return 0;
    }
    local_24 = *(int *)(&DAT_007dfbac + param_2 * 4);
  }
  else {
    uVar4 = st::fn_004049B7(param_1);
    uVar4 = (int)(byte)uVar4;
    local_24 = *(int *)(&DAT_007e3f20 + (uVar4 + param_2 * 3) * 4);
  }
  local_34 = 0;
  if (DAT_007951b0 / 0xc9 < 1) {
    return 0;
  }
  local_c = param_3;
  local_10 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  do {
    local_30 = 0;
    if (0 < local_10) {
      do {
        if (local_30 < local_34 * 2) {
          iVar8 = (local_30 - local_34) + param_3;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = (param_4 - param_3) + local_c;
        }
        else if (local_30 < local_14) {
          iVar8 = param_3 + local_34;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = local_30 + local_34 * -3 + param_4;
        }
        else {
          if (local_30 < local_18) {
            iVar8 = (local_1c - local_30) + param_3;
            iVar7 = local_34;
          }
          else {
            iVar7 = local_20 - local_30;
            iVar8 = local_c;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = iVar7 + param_4;
        }
        if (((((-1 < iVar8) && (iVar8 < g_worldGrid.sizeX)) && (-1 < param_2)) &&
            ((param_2 < g_worldGrid.sizeY &&
             (iVar6 = st::fn_006ACED8(param_3,param_4,iVar8,param_2), iVar6 <= DAT_007951b0 / 0xc9))))
           && (local_2c = 0, 0 < g_worldGrid.sizeZ)) {
          do {
            this = STGridAt3D(g_worldGrid, iVar8, param_2, local_2c).
                   objects[0];
            if ((((this != nullptr) && (this[1].vtable < (STWorldObjectVTable *)0x8))
                && ((g_playSystem_00802A38 == nullptr ||
                    (g_bulkInitializedRecords_008087C7[(int)this[1].vtable].field_0022 < 8)))) &&
               (iVar7 = this->GetObjectTypeId(), iVar7 == 0x73)) {
              bVar1 = *(byte *)&this[1].vtable;
              if (g_app_00806728->field_146F == '\0') {
                if (bVar1 == param_1) {
LAB_004b2fd4:
                  iVar7 = 0;
                }
                else {
                  uVar3 = (uint)bVar1;
                  uVar5 = (uint)param_1;
                  cVar2 = (&g_app_00806728->field_0x142f)[uVar5 + uVar3 * 8];
                  if ((cVar2 == '\0') &&
                     ((&g_app_00806728->field_0x142f)[uVar3 + uVar5 * 8] == '\0')) {
                    iVar7 = -2;
                  }
                  else if ((cVar2 == '\x01') &&
                          ((&g_app_00806728->field_0x142f)[uVar3 + uVar5 * 8] == '\0')) {
                    iVar7 = -1;
                  }
                  else if ((cVar2 == '\0') &&
                          ((&g_app_00806728->field_0x142f)[uVar3 + uVar5 * 8] == '\x01')) {
                    iVar7 = 1;
                  }
                  else {
                    if ((cVar2 != '\x01') ||
                       ((&g_app_00806728->field_0x142f)[uVar3 + uVar5 * 8] != '\x01'))
                    goto LAB_004b2fd4;
                    iVar7 = 2;
                  }
                }
                bVar9 = iVar7 < 0;
              }
              else {
                bVar9 = (&g_app_00806728->field_0x11ca)[(uint)param_1 * 0x51] !=
                        (&g_app_00806728->field_0x11ca)[(uint)bVar1 * 0x51];
              }
              if ((bVar9) && (local_24 <= *(int *)&this[0x22].field_0x8)) {
                local_24 = *(int *)&this[0x22].field_0x8 - local_24;
                *(int *)&this[0x22].field_0x8 = local_24;
                if (local_24 < 0) {
                  *(undefined4 *)&this[0x22].field_0x8 = 0;
                }
                *(uint *)&this[0x22].field_0xc = g_playSystem_00802A38->field_00E4;
                return 1;
              }
            }
            local_2c = local_2c + 1;
          } while (local_2c < g_worldGrid.sizeZ);
        }
        local_30 = local_30 + 1;
      } while (local_30 < local_10);
    }
    local_14 = local_14 + 4;
    local_1c = local_1c + 5;
    local_34 = local_34 + 1;
    local_18 = local_18 + 6;
    local_c = local_c + -1;
    local_10 = local_10 + 8;
    local_20 = local_20 + 7;
    if (DAT_007951b0 / 0xc9 <= local_34) {
      return 0;
    }
  } while( true );
}

// 004B31C0 FUN_004b31c0
#line 4 "decomp/ST.exe/functions/004B31C0/decomp.c"
undefined4 __cdecl st::fn_004B31C0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  DArrayTy *array;
  int iVar5;
  uint index;
  AnonShape_004B31C0_DBC5A6CD *local_c;
  int local_8;

  piVar1 = param_1;
  iVar5 = 0;
  local_8 = 0;
  iVar2 = st::fn_00402815((int)param_1);
  if (iVar2 == 0) {
    return 0;
  }
  if (g_array_007FA170 != nullptr) {
    g_array_007FA170->iteratorIndex = 0;
    iVar3 = st::fn_006B1190(g_array_007FA170,(byte *)&local_c);
    iVar4 = param_2;
    while (-1 < iVar3) {
      if ((((local_c != nullptr) && (local_c->field_0024 == piVar1)) &&
          ((iVar4 == 0 || (local_c->field_0018 != iVar4)))) &&
         ((((local_c->field_02EC == 3 || (local_c->field_02A0 != 0)) || (local_c->field_02E0 != 0))
          || (local_c->field_02DC != 0)))) {
        local_8 = local_8 + 1;
      }
      iVar3 = st::fn_006B1190(g_array_007FA170,(byte *)&local_c);
      iVar5 = local_8;
    }
    if (DAT_00808a97 <= (uint)(ushort)g_packedRecords_A62x8[(int)piVar1].field4_0xd + iVar5) {
      return 0;
    }
  }
  array = (DArrayTy *)g_packedRecords_A62x8[(int)piVar1].field3_0x9;
  if (array != nullptr) {
    index = 0;
    if (array->count != 0) {
      do {
        st::fn_006ACC70(array,index,&param_1);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if (((param_1 != nullptr) &&
            ((((iVar4 = (**(code **)(*param_1 + 0x2c))(), iVar4 == 0x32 ||
               (iVar4 = (**(code **)(*param_1 + 0x2c))(), iVar4 == 0x40)) ||
              ((iVar4 = (**(code **)(*param_1 + 0x2c))(), iVar4 == 0x49 ||
               (iVar4 = (**(code **)(*param_1 + 0x2c))(), iVar4 == 0x5c)))) &&
             (((STField<int>(param_1,0x361) == 1 && (iVar4 = param_1[0x134], iVar4 != 0)) &&
              (iVar4 != 1)))))) && (iVar4 != 2)) {
          iVar5 = iVar5 + 1;
        }
        array = (DArrayTy *)g_packedRecords_A62x8[(int)piVar1].field3_0x9;
        index = index + 1;
      } while (index < array->count);
    }
    if (DAT_00808a97 <= (uint)(ushort)g_packedRecords_A62x8[(int)piVar1].field4_0xd + iVar5) {
      return 0;
    }
  }
  return 1;
}

// 004B6D20 FUN_004b6d20
#line 4 "decomp/ST.exe/functions/004B6D20/decomp.c"
undefined4 __fastcall st::fn_004B6D20(int param_1)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EAX;

  /* ST_PSEUDO[unresolved_register_input,raw_pointer_offset]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_00404106(STReplaceLowByte((uint32_t)(in_EAX), (uint8_t)(*(undefined1 *)(param_1 + 0x24))),0x28);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(uint *)(param_1 + 0x24) == (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x112d)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_00404B8D((char)*(uint *)(param_1 + 0x24));
  }
  return 0;
}

// 004B6D70 FUN_004b6d70
#line 4 "decomp/ST.exe/functions/004B6D70/decomp.c"
undefined4 __fastcall st::fn_004B6D70(int param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x23d)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    bVar2 = st::fn_004049B7((char)*(int *)(param_1 + 0x23d));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)(param_1 + 0x235);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    bVar3 = st::fn_004049B7(*(char *)(param_1 + 0x24));
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    param_2 = extraout_EDX;
    if ((&DAT_007e1984)[(uint)bVar3 + (iVar1 * 3 + (uint)bVar2) * 3] == '\0') {
      return 0;
    }
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_00401C30(STReplaceLowByte((uint32_t)(param_2), (uint8_t)(*(undefined1 *)(param_1 + 0x24))),0x28);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(uint *)(param_1 + 0x24) == (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x112d)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_00404B8D((char)*(uint *)(param_1 + 0x24));
  }
  return 0;
}

// 004B6E30 FUN_004b6e30
#line 4 "decomp/ST.exe/functions/004B6E30/decomp.c"
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004B6E30_param_2Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5 */

undefined4 __thiscall st::fn_004B6E30(void *this,int param_1,Global_sub_004B6E30_param_2Enum param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;

  switch(param_2) {
  case CASE_0:
    iVar4 = 0;
    break;
  case CASE_1:
    iVar4 = 1;
    break;
  case CASE_2:
    iVar4 = 2;
    break;
  case CASE_3:
    iVar4 = 3;
    break;
  case CASE_4:
    iVar4 = 4;
    break;
  case CASE_5:
    iVar4 = 5;
    break;
  default:
    iVar4 = -1;
  }
  if (param_1 != 1) {
    return 0;
  }
  iVar4 = iVar4 * 4;
  /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
  iVar3 = STField<int>(this,0x24) * 0xa62;
  if (*(int *)(iVar4 + 0x7f579a + iVar3) == 0) {
    iVar2 = 0;
    piVar5 = st::pointer_boundary_cast<int *>(&g_packedRecords_A62x8[STField<int>(this,0x24)].field1942_0x97a);
    iVar1 = 6;
    do {
      if (iVar2 < *piVar5) {
        iVar2 = *piVar5;
      }
      piVar5 = piVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if ((-1 < iVar2) && (iVar2 < 6)) {
      iVar2 = iVar2 + 1;
      *(int *)(iVar4 + 0x7f579a + iVar3) = iVar2;
    }
  }
  else {
    iVar3 = 0;
    do {
      /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
      iVar1 = STField<int>(this,0x24) * 0xa62;
      iVar2 = *(int *)(iVar3 + 0x7f579a + iVar1);
      if (*(int *)(iVar4 + 0x7f579a + iVar1) < iVar2) {
        *(int *)(iVar3 + 0x7f579a + iVar1) = iVar2 + -1;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x18);
    iVar2 = STField<int>(this,0x24);
    *(undefined4 *)(iVar4 + STRecordByteAddress(g_packedRecords_A62x8, iVar2, 0x97A)) = 0;
  }
  st::fn_00401893(STReplaceLowByte((uint32_t)(iVar2), (uint8_t)(STField<undefined1>(this,0x24))));
  return 0;
}

// 004B6FC0 FUN_004b6fc0
#line 4 "decomp/ST.exe/functions/004B6FC0/decomp.c"
undefined4 st::fn_004B6FC0(char param_1)

{
  DArrayTy *pDVar1;

  memset(&g_packedRecords_A62x8[param_1].field1942_0x97a, 0, 0x18); /* compiler bulk-zero initialization */
  pDVar1 = st::fn_006AE290(nullptr,0x14,0xc,0x14);
  g_packedRecords_A62x8[param_1].field1948_0x992 = pDVar1;
  return 0;
}

// 004B7030 FUN_004b7030
#line 1 "decomp/ST.exe/functions/004B7030/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 004B7030 returns zeroed full register at 004B7064 @ 004B7068 */

uint st::fn_004B7030(char param_1)

{
  if (g_packedRecords_A62x8[param_1].field1948_0x992 != nullptr) {
    st::fn_006AE110(g_packedRecords_A62x8[param_1].field1948_0x992);
    g_packedRecords_A62x8[param_1].field1948_0x992 = nullptr;
  }
  return 0;
}

// 004B7080 FUN_004b7080
#line 1 "decomp/ST.exe/functions/004B7080/decomp.c"

/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004CCC10 -> 004B7080 @ 004CCEF1 | 00522810 -> 004B7080 @ 00522AFA | 00652810 ->
   004B7080 @ 0065555A */

int st::fn_004B7080(uint param_1,int param_2)

{
  g_packedRecords_A62x8[(char)param_1].field1940_0x972 =
       g_packedRecords_A62x8[(char)param_1].field1940_0x972 + param_2;
  if (param_2 != 0) {
    st::fn_00401893(param_1);
  }
  return g_packedRecords_A62x8[(char)param_1].field1940_0x972;
}

// 004B70D0 FUN_004b70d0
#line 4 "decomp/ST.exe/functions/004B70D0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004B6D70 -> 004B70D0 @ 004B6DCF | 004CCAD0 -> 004B70D0 @ 004CCB19 | 00652810 ->
   004B70D0 @ 00655571 */

int st::fn_004B70D0(uint param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;

  puVar1 = &g_packedRecords_A62x8[(char)param_1].field1940_0x972;
  iVar2 = g_packedRecords_A62x8[(char)param_1].field1940_0x972 - param_2;
  *puVar1 = iVar2;
  if (iVar2 < 0) {
    *puVar1 = 0;
  }
  if (param_2 != 0) {
    st::fn_00401893(param_1);
  }
  return *puVar1;
}

// 004B7140 FUN_004b7140
#line 1 "decomp/ST.exe/functions/004B7140/decomp.c"

int st::fn_004B7140(uint param_1,int param_2)

{
  char cVar1;

  cVar1 = (char)param_1;
  g_packedRecords_A62x8[cVar1].field1940_0x972 = param_2;
  if (param_2 != 0) {
    st::fn_00401893(param_1);
  }
  if ((int)cVar1 == (uint)DAT_0080874d) {
    st::fn_00404B8D(cVar1);
  }
  return g_packedRecords_A62x8[cVar1].field1940_0x972;
}

// 004B71C0 FUN_004b71c0
#line 4 "decomp/ST.exe/functions/004B71C0/decomp.c"
undefined4 st::fn_004B71C0(char param_1)

{
  return g_packedRecords_A62x8[param_1].field1940_0x972;
}

// 004B71F0 FUN_004b71f0
#line 1 "decomp/ST.exe/functions/004B71F0/decomp.c"

int st::fn_004B71F0(uint param_1,int param_2)

{
  g_packedRecords_A62x8[(char)param_1].field1941_0x976 =
       g_packedRecords_A62x8[(char)param_1].field1941_0x976 + param_2;
  if (param_2 != 0) {
    st::fn_00401893(param_1);
  }
  return g_packedRecords_A62x8[(char)param_1].field1941_0x976;
}

// 004B7240 FUN_004b7240
#line 4 "decomp/ST.exe/functions/004B7240/decomp.c"
int st::fn_004B7240(uint param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;

  puVar1 = &g_packedRecords_A62x8[(char)param_1].field1941_0x976;
  iVar2 = g_packedRecords_A62x8[(char)param_1].field1941_0x976 - param_2;
  *puVar1 = iVar2;
  if (iVar2 < 0) {
    *puVar1 = 0;
  }
  if (param_2 != 0) {
    st::fn_00401893(param_1);
  }
  return *puVar1;
}

// 004B72B0 FUN_004b72b0
#line 4 "decomp/ST.exe/functions/004B72B0/decomp.c"
undefined4 st::fn_004B72B0(char param_1)

{
  return g_packedRecords_A62x8[param_1].field1941_0x976;
}

// 004B72E0 FUN_004b72e0
#line 4 "decomp/ST.exe/functions/004B72E0/decomp.c"
undefined4 st::fn_004B72E0(char param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if ((0x31 < param_2) && (param_2 < 0x74)) {
    bVar1 = st::fn_004049B7(param_1);
    return *(undefined4 *)(&DAT_007e0c04 + ((uint)bVar1 + param_2 * 3) * 4);
  }
  if (param_2 == 0x78) {
    uVar2 = 2;
  }
  return uVar2;
}

// 004B7350 FUN_004b7350
#line 4 "decomp/ST.exe/functions/004B7350/decomp.c"
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004B7350_param_2Enum. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_78=120

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B7750 -> 004B7350 @ 004B7836; FUN_004b7750 parameter param_1 */

undefined4 st::fn_004B7350(uint param_1,Global_sub_004B7350_param_2Enum param_2)

{
  undefined4 uVar1;

  uVar1 = 0xffffffff;
  switch(param_2) {
  case CASE_32:
  case CASE_40:
  case CASE_49:
    return 0;
  case CASE_33:
    return 4;
  case CASE_34:
  case CASE_44:
  case CASE_48:
  case CASE_4E:
    return 2;
  case CASE_35:
    return 3;
  case CASE_36:
  case CASE_38:
  case CASE_39:
  case CASE_3A:
  case CASE_3B:
  case CASE_3C:
  case CASE_3D:
  case CASE_3E:
  case CASE_3F:
  case CASE_41:
  case CASE_42:
  case CASE_46:
  case CASE_47:
  case CASE_4A:
  case CASE_4B:
  case CASE_4F:
  case CASE_50:
  case CASE_51:
  case CASE_53:
  case CASE_54:
  case CASE_55:
  case CASE_56:
  case CASE_57:
  case CASE_58:
  case CASE_59:
  case CASE_5A:
  case CASE_5B:
  case CASE_5C:
  case CASE_5D:
  case CASE_5E:
  case CASE_5F:
  case CASE_60:
  case CASE_61:
  case CASE_62:
  case CASE_63:
  case CASE_64:
  case CASE_65:
  case CASE_66:
  case CASE_67:
  case CASE_68:
  case CASE_69:
  case CASE_6A:
  case CASE_6B:
  case CASE_6C:
  case CASE_6D:
  case CASE_6E:
  case CASE_6F:
  case CASE_70:
  case CASE_71:
  case CASE_72:
  case CASE_73:
    return 0xffffffff;
  case CASE_37:
  case CASE_43:
  case CASE_45:
  case CASE_4C:
  case CASE_4D:
  case CASE_52:
    return 5;
  case CASE_78:
    uVar1 = 1;
  }
  return uVar1;
}

// 004B7520 FUN_004b7520
#line 4 "decomp/ST.exe/functions/004B7520/decomp.c"
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004B7520_param_2Enum. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_78=120

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004D11D0 -> 004B7520 @ 004D2278 | 004D2760 -> 004B7520 @ 004D2828 | 004D32C0 ->
   004B7520 @ 004D38EA | 004D32C0 -> 004B7520 @ 004D43D5 */

undefined4 st::fn_004B7520(uint param_1,Global_sub_004B7520_param_2Enum param_2)

{
  switch(param_2) {
  case CASE_32:
  case CASE_33:
  case CASE_34:
  case CASE_35:
  case CASE_36:
  case CASE_37:
  case CASE_3B:
  case CASE_3C:
  case CASE_3D:
  case CASE_3E:
  case CASE_3F:
  case CASE_40:
  case CASE_41:
  case CASE_42:
  case CASE_43:
  case CASE_44:
  case CASE_45:
  case CASE_46:
  case CASE_47:
  case CASE_48:
  case CASE_49:
  case CASE_4A:
  case CASE_4B:
  case CASE_4C:
  case CASE_4D:
  case CASE_4E:
  case CASE_51:
  case CASE_52:
  case CASE_78:
    break;
  case CASE_38:
  case CASE_39:
  case CASE_3A:
  case CASE_4F:
  case CASE_50:
  case CASE_53:
  case CASE_54:
  case CASE_55:
  case CASE_56:
  case CASE_57:
  case CASE_58:
  case CASE_59:
  case CASE_5A:
  case CASE_5B:
  case CASE_5C:
  case CASE_5D:
  case CASE_5E:
  case CASE_5F:
  case CASE_60:
  case CASE_61:
  case CASE_62:
  case CASE_63:
  case CASE_64:
  case CASE_65:
  case CASE_66:
  case CASE_67:
  case CASE_68:
  case CASE_69:
  case CASE_6A:
  case CASE_6B:
  case CASE_6C:
  case CASE_6D:
  case CASE_6E:
  case CASE_6F:
  case CASE_70:
  case CASE_71:
  case CASE_72:
  case CASE_73:
    return 0;
  }
  return 1;
}

// 004B76D0 FUN_004b76d0
#line 1 "decomp/ST.exe/functions/004B76D0/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0044EE30 -> 004B76D0 @ 0044F3D5 | 0044EE30 -> 004B76D0 @ 0044F6F3 | 004B9FA0 ->
   004B76D0 @ 004BA37A | 004CCC10 -> 004B76D0 @ 004CD1D2 | 004D11D0 -> 004B76D0 @ 004D2293 |
   004DC760 -> 004B76D0 @ 004DC975 | 004DEC10 -> 004B76D0 @ 004DEDE1 | 004DF3B0 -> 004B76D0 @
   004DF5C5
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:0: previous_type=/uint
   parameter=/char Evidence: entry-use width=/char; unmasked_dword_reads=0; evidence=004B76D8 MOV
   EDI,dword ptr [EBP + 0x8]; first-use mask or exact narrow callee formal
   [STAbiConsistencyApplier] stack_parameter_width_revert target=parameter:0: parameter=/uint
   Evidence: previous automatic narrow-width proof no longer qualifies; restoring generated baseline
   /uint */

void st::fn_004B76D0(uint param_1,int param_2)

{
  int iVar1;

  iVar1 = st::fn_00402897((char)param_1,param_2);
  st::fn_00403076(param_1,iVar1);
  return;
}

// 004B7710 FUN_004b7710
#line 1 "decomp/ST.exe/functions/004B7710/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0044EE30 -> 004B7710 @ 00450E64 | 0044EE30 -> 004B7710 @ 0045AC44 | 004B9A40 ->
   004B7710 @ 004B9A8C | 004D2760 -> 004B7710 @ 004D2843 | 004D32C0 -> 004B7710 @ 004D3905 |
   004DC760 -> 004B7710 @ 004DC7FB | 004DC760 -> 004B7710 @ 004DC881 | 004DEC10 -> 004B7710 @
   004DED56 | 004DF3B0 -> 004B7710 @ 004DF44B | 004DF3B0 -> 004B7710 @ 004DF4D1
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:0: previous_type=/uint
   parameter=/char Evidence: entry-use width=/char; unmasked_dword_reads=0; evidence=004B7718 MOV
   EDI,dword ptr [EBP + 0x8]; first-use mask or exact narrow callee formal
   [STAbiConsistencyApplier] stack_parameter_width_revert target=parameter:0: parameter=/uint
   Evidence: previous automatic narrow-width proof no longer qualifies; restoring generated baseline
   /uint */

void st::fn_004B7710(uint param_1,int param_2)

{
  int iVar1;

  iVar1 = st::fn_00402897((char)param_1,param_2);
  st::fn_004048DB(param_1,iVar1);
  return;
}

// 004B7750 FUN_004b7750
#line 4 "decomp/ST.exe/functions/004B7750/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B6E30 -> 004B7750 @ 004B6F30; unproven partial register write at 004B6F26 | 004B7750
   -> 004B7350 @ 004B7836 | 004B7750 -> 004B7520 @ 004B77F5 */

undefined4 st::fn_004B7750(uint param_1)

{
  dword dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Global_sub_004B7350_param_2Enum GVar5;
  char cVar6;
  DArrayTy *pDVar7;
  uint index;
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int *local_c [2];

  cVar6 = (char)param_1;
  iVar2 = (int)cVar6;
  if (g_packedRecords_A62x8[iVar2].field1948_0x992 != nullptr) {
    (g_packedRecords_A62x8[iVar2].field1948_0x992)->count = 0;
    iVar3 = st::fn_00403ADF(cVar6);
    iVar4 = st::fn_0040291E(cVar6);
    if (iVar4 < iVar3) {
      pDVar7 = (DArrayTy *)g_packedRecords_A62x8[iVar2].field3_0x9;
      iVar3 = 0;
      if ((pDVar7 != nullptr) && (local_10 = 0, pDVar7->count != 0)) {
LAB_004b77c4:
        st::fn_006ACC70(pDVar7,local_10,local_c);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if ((local_c[0] != nullptr) &&
           ((iVar4 = (**(code **)(*local_c[0] + 0x2c))(), iVar4 != 0x78 ||
            (iVar4 = st::fn_00402077(param_1,*(Global_sub_004B7520_param_2Enum *)
                                                 ((int)local_c[0] + 0x259)), iVar4 != 0)))) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar4 = (**(code **)(*local_c[0] + 0x2c))();
          local_14 = st::fn_00402897(cVar6,iVar4);
          if (0 < local_14) {
            local_1c = local_c[0][6];
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            GVar5 = (**(code **)(*local_c[0] + 0x2c))();
            local_18 = st::fn_00404AC5(param_1,GVar5);
            pDVar7 = g_packedRecords_A62x8[iVar2].field1948_0x992;
            index = 0;
            if (pDVar7->count != 0) {
              do {
                st::fn_006ACC70(pDVar7,index,local_28);
                if (*(int *)(STRecordByteAddress(g_packedRecords_A62x8, iVar2, 0x97A) + local_24 * 4) <
                    *(int *)(STRecordByteAddress(g_packedRecords_A62x8, iVar2, 0x97A) + local_18 * 4)) {
                  st::fn_006B11D0
                            (st::pointer_boundary_cast<uint *>(&(g_packedRecords_A62x8[iVar2].field1948_0x992)->flags),index,st::pointer_boundary_cast<undefined4 *>(&local_1c));
                  iVar3 = iVar3 + local_14;
                  iVar4 = st::fn_0040291E(cVar6);
                  if (iVar4 < iVar3) goto LAB_004b78f0;
                  goto cf_continue_loop_004B78A7;
                }
                pDVar7 = g_packedRecords_A62x8[iVar2].field1948_0x992;
                index = index + 1;
              } while (index < pDVar7->count);
            }
            iVar4 = st::fn_0040291E(cVar6);
            if (local_14 + iVar3 <= iVar4) {
              st::fn_006AE1C0
                        (g_packedRecords_A62x8[iVar2].field1948_0x992,&local_1c);
              iVar3 = iVar3 + local_14;
            }
          }
        }
        goto cf_continue_loop_004B78A7;
      }
    }
  }
  return 0;
  while( true ) {
    st::fn_006ACC70(g_packedRecords_A62x8[iVar2].field1948_0x992,dVar1 - 1,local_28);
    iVar3 = iVar3 - local_20;
    st::fn_006B0C70(g_packedRecords_A62x8[iVar2].field1948_0x992,
                   (g_packedRecords_A62x8[iVar2].field1948_0x992)->count - 1);
    iVar4 = st::fn_0040291E(cVar6);
    if (iVar3 <= iVar4) break;
LAB_004b78f0:
    dVar1 = (g_packedRecords_A62x8[iVar2].field1948_0x992)->count;
    if (dVar1 == 0) break;
  }
cf_continue_loop_004B78A7:
  pDVar7 = (DArrayTy *)g_packedRecords_A62x8[iVar2].field3_0x9;
  local_10 = local_10 + 1;
  if (pDVar7->count <= local_10) {
    return 0;
  }
  goto LAB_004b77c4;
}

// 004B79C0 FUN_004b79c0
#line 4 "decomp/ST.exe/functions/004B79C0/decomp.c"
undefined4 st::fn_004B79C0(char param_1,int param_2)

{
  int iVar1;
  int iVar2;
  DArrayTy *array;
  uint index;
  int local_10 [3];

  iVar1 = st::fn_00403ADF(param_1);
  iVar2 = st::fn_0040291E(param_1);
  if (iVar1 <= iVar2) {
    return 1;
  }
  index = 0;
  array = g_packedRecords_A62x8[param_1].field1948_0x992;
  if (array->count != 0) {
    do {
      st::fn_006ACC70(array,index,local_10);
      if (local_10[0] == param_2) {
        return 1;
      }
      array = g_packedRecords_A62x8[param_1].field1948_0x992;
      index = index + 1;
    } while (index < array->count);
  }
  return 0;
}

// 004B7A60 FUN_004b7a60
#line 4 "decomp/ST.exe/functions/004B7A60/decomp.c"
void __fastcall st::fn_004B7A60(int param_1)

{
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  return;
}

// 004B7A80 FUN_004b7a80
#line 4 "decomp/ST.exe/functions/004B7A80/decomp.c"
undefined4 st::fn_004B7A80(void)

{
  return 0;
}

// 004B7AA0 FUN_004b7aa0
#line 4 "decomp/ST.exe/functions/004B7AA0/decomp.c"
undefined4 __fastcall st::fn_004B7AA0(TLOBaseTy *param_1)

{
  int iVar1;

  iVar1 = st::fn_004042AF(&param_1->field_01D5,'\x0e');
  if (iVar1 == param_1->field_01F5->field_020C) {
    if (param_1->field_04D0 == CASE_1) {
      param_1->field_04D0 = CASE_2;
      st::fn_00402CF7(param_1,0);
    }
    else if (param_1->field_04D0 == CASE_3) {
      param_1->field_04D0 = CASE_0;
      st::fn_00402CF7(param_1,0);
      return 0;
    }
  }
  return 0;
}

// 004B7B20 FUN_004b7b20
#line 4 "decomp/ST.exe/functions/004B7B20/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004CAFC0 -> 004B7B20 @ 004CB1A3

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004CAFC0 -> 004B7B20 @ 004CB1A3

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 004CAFC0 -> 004B7B20 @ 004CB1A3 */

void __thiscall
st::fn_004B7B20(void *this,TLOBaseTy_sub_004CAFC0_param_1Enum param_1,int param_2,uint *param_3,
            uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar4;
  int uVar3;
  int iVar5;

  uVar3 = st::fn_004049B7(STField<char>(this,0x23d));
  uVar3 = (int)(byte)uVar3;
  iVar1 = STField<int>(this,0x245);
  iVar5 = uVar3 + -1;
  if (param_1 == CASE_C) {
    *param_3 = *(uint *)((&PTR_DAT_007b8310)[iVar1] +
                        (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8);
    *param_4 = *(uint *)((&PTR_DAT_007b8310)[iVar1] +
                        (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
  }
  else if ((0xc < (int)param_1) && ((int)param_1 < 0xf)) {
    iVar2 = STField<int>(this,0x4d0);
    if (iVar2 == 1) {
      *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                          (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8);
      *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                          (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
      return;
    }
    if (iVar2 != 2) {
      if (iVar2 != 3) {
        uVar4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                         (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8);
        *param_4 = uVar4;
        *param_3 = uVar4;
        return;
      }
      *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                          (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8);
      *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                          (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
      return;
    }
    uVar4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                     (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
    *param_4 = uVar4;
    *param_3 = uVar4;
    return;
  }
  return;
}

// 004B7D00 FUN_004b7d00
#line 4 "decomp/ST.exe/functions/004B7D00/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0047C050 -> 004B7D00 @ 0047C971 */

undefined4 __thiscall st::fn_004B7D00(void *this,STBoatC *param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  if (((STField<int>(this,0x245) == 0) && (STField<int>(this,0x4d0) == 0)) &&
     (STField<int>(this,0x4d4) == 0)) {
    uVar1 = 1;
    STField<int>(this,0x4d4) = param_1->field_0018;
  }
  return uVar1;
}

// 004B7D50 FUN_004b7d50
#line 4 "decomp/ST.exe/functions/004B7D50/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0047CF20 -> 004B7D50 @ 0047CFB6 */

bool __thiscall st::fn_004B7D50(void *this,STBoatC *param_1)

{
  bool bVar1;

  bVar1 = STField<int>(this,0x4d4) == param_1->field_0018;
  if (bVar1) {
    STField<undefined4>(this,0x4d4) = 0;
  }
  return bVar1;
}

// 004B7D90 FUN_004b7d90
#line 4 "decomp/ST.exe/functions/004B7D90/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=005F07A0 @ 005F08AD
   -> TEST TEST EAX,EAX */

int __fastcall st::fn_004B7D90(int *param_1)

{
  int iVar1;

  iVar1 = param_1[0x134];
  if (iVar1 == 0) {
    param_1[0x134] = 1;
    st::fn_00402CF7((TLOBaseTy *)param_1,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x90))(3,0x3cb);
  }
  return (uint)(iVar1 == 0);
}

// 004B7DE0 FUN_004b7de0
#line 4 "decomp/ST.exe/functions/004B7DE0/decomp.c"
bool __fastcall st::fn_004B7DE0(int *param_1)

{
  int iVar1;

  iVar1 = param_1[0x134];
  if (iVar1 == 2) {
    param_1[0x134] = 3;
    st::fn_00402CF7((TLOBaseTy *)param_1,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x90))(3,0x3cc);
  }
  return iVar1 == 2;
}

// 004B7E30 FUN_004b7e30
#line 4 "decomp/ST.exe/functions/004B7E30/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0047D080 -> 004B7E30 @ 0047D79F; /STBoatC+0x6f7 */

undefined4 __thiscall
st::fn_004B7E30(void *this,STBoatC_field_06F7State param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar3 = 0;
  iVar1 = 0;
  iVar4 = 0;
  iVar2 = iVar1;
  iVar5 = iVar4;
  if (param_1 == 0xfe) {
    iVar2 = param_3;
    if (((param_2 != 0xdd) && (iVar2 = iVar1, iVar5 = param_3, param_2 != 0xde)) &&
       (iVar5 = iVar4, param_2 == 0xe2)) {
      iVar3 = param_3;
    }
  }
  else if (param_1 == 0xfd) {
    iVar3 = 1000;
  }
  else if ((0 < (int)param_1) && ((int)param_1 < 0x29)) {
    iVar3 = *(int *)(&DAT_007e09dc + param_1 * 4);
    iVar2 = *(int *)(&DAT_007e055c + param_1 * 4);
    iVar5 = *(int *)(&DAT_007e079c + param_1 * 4);
  }
  st::fn_00403332(STField<int>(this,0x24),iVar2 * 3 + iVar3 + iVar5 * 2);
  return 0;
}

// 004B8C00 FUN_004b8c00
#line 4 "decomp/ST.exe/functions/004B8C00/decomp.c"
int __fastcall st::fn_004B8C00(AnonShape_004B8C00_93076312 *param_1)

{
  int iVar1;

  iVar1 = -1;
  if (param_1->field_0249 < 0) {
    switch(param_1->field_0245) {
    case 0:
    case 3:
    case 5:
      return 0;
    case 1:
      return 1;
    case 2:
    case 4:
      return 4;
    case 6:
      iVar1 = 6;
    }
    return iVar1;
  }
  return param_1->field_0249;
}

// 004B8C80 FUN_004b8c80
#line 4 "decomp/ST.exe/functions/004B8C80/decomp.c"
undefined4 __fastcall st::fn_004B8C80(TLOBaseTy *param_1)

{
  undefined4 *puVar1;
  TLOBaseTy_field_0245State TVar2;
  AnonPointee_TLOBaseTy_01F5 *pAVar3;
  byte bVar4;
  int iVar5;
  int local_EAX_675;
  int local_EAX_852;
  int local_EAX_1028;
  int iVar6;
  int TVar6;
  int uVar4;
  TLOBaseTyVTable *pTVar7;
  uint uVar8;
  undefined2 arg_2;
  undefined4 local_2c [2];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  AnonShape_0060D340_D77FEBE7 *local_c;
  int local_8;

  TVar2 = param_1->field_0245;
  local_8 = 0;
  if (TVar2 == CASE_1) {
    if (param_1->field_05DF == 5) {
      if (param_1->field_04CC + 2 <= g_playSystem_00802A38->field_00E4) {
        param_1->field_04CC = g_playSystem_00802A38->field_00E4;
        iVar5 = param_1->field_04C8;
        iVar6 = iVar5 + 1;
        param_1->field_04C8 = iVar6;
        if (PTR_00806724->entryCount + -1 <= iVar6) {
          local_18 = param_1->field_0008;
          local_24 = param_1->field_000C->systemId;
          local_20 = 0;
          local_1c = 10;
          st::fn_006E60A0(param_1,local_2c);
          return 0;
        }
        st::fn_0040116D
                  ((STT3DSprC *)&param_1->field_01D5,PTR_00806724[1].entries[iVar5 + -0xc],
                   (int)PTR_00806724->field_002C);
        return 0;
      }
    }
    else {
      puVar1 = &param_1->field_01D5;
      iVar5 = st::fn_004042AF(puVar1,'\x04');
      if ((*(int *)&param_1->field_01F5->field_0xa4 <= iVar5) &&
         (iVar5 = st::fn_004042AF(puVar1,'\x05'),
         *(int *)&param_1->field_01F5->field_0xc8 <= iVar5)) {
        local_18 = param_1->field_0008;
        local_24 = param_1->field_000C->systemId;
        local_20 = 0;
        local_1c = 10;
        st::fn_006E60A0(param_1,local_2c);
        return 0;
      }
      param_1->vfunc_D8();
      iVar5 = st::fn_004042AF(puVar1,'\x04');
      if (iVar5 == *(int *)(&DAT_007cdf52 + *(int *)(&DAT_0079125c + param_1->field_0235 * 4) * 0x32
                           )) {
        st::fn_00404264((STT3DSprC *)puVar1,0xe);
        st::fn_00404264((STT3DSprC *)puVar1,0xd);
        st::fn_00404264((STT3DSprC *)puVar1,0xc);
        st::fn_00404264((STT3DSprC *)puVar1,9);
        st::fn_00404264((STT3DSprC *)puVar1,8);
        st::fn_00404264((STT3DSprC *)puVar1,7);
        st::fn_00404264((STT3DSprC *)puVar1,0x10);
        if (*(int *)(&DAT_00791a10 + param_1->field_0235 * 4) != 0) {
          st::fn_00403616(param_1);
        }
        uVar8 = (uint)(param_1->field_024D == 4);
        uVar4 = st::fn_004049B7(*(char *)&param_1->field_0024);
        uVar4 = (int)(byte)uVar4;
        st::fn_00404A7F((int)param_1->field_0041,(int)param_1->field_0043,
                           (int)param_1->field_0045,param_1->field_05AC,(int *)param_1,0xffffffff,
                           0xffffffff,uVar4,uVar8);
        return 0;
      }
      iVar5 = *(int *)(&DAT_0079125c + param_1->field_0235 * 4);
      iVar6 = st::fn_004042AF(puVar1,'\x04');
      if (iVar6 == *(int *)(&DAT_007cdf5a + iVar5 * 0x32)) {
        iVar5 = st::fn_00404183
                          ((STT3DSprC *)puVar1,5,PTR_00806764,st::mutable_c_string("expl_bbt0" + iVar5 * 0x32),
                           CASE_1D);
        if (iVar5 != 0) {
          return 0xffff;
        }
        st::fn_00405240((STT3DSprC *)puVar1,5,g_playSystem_00802A38->field_00E4);
      }
    }
    return 0;
  }
  if (TVar2 == CASE_5) {
    if (((param_1->field_0299 != 0) &&
        (iVar5 = st::fn_004042AF(&param_1->field_01D5,'\x0e'),
        param_1->field_01F5->field_0208 + *(int *)&param_1->field_0x2a1 <= iVar5)) &&
       (*(int *)&param_1->field_0x29d == 0)) {
      st::fn_00403EFE(param_1,nullptr);
    }
  }
  else if (TVar2 == CASE_6) {
    if (param_1->field_04BC != 4) {
      bVar4 = st::fn_004049B7(*(char *)&param_1->field_023D);
      if (bVar4 == 3) {
        local_EAX_852 = st::fn_004049B7(*(char *)&param_1->field_023D);
        if (g_playSystem_00802A38->field_00E4 <
            *(int *)(&DAT_007e3dc0 + ((uint)(byte)local_EAX_852 + param_1->field_0235 * 3) * 4) / 3
            + param_1->field_04B8) goto cf_common_exit_004B9130;
      }
      else {
        iVar5 = st::fn_004042AF(&param_1->field_01D5,'\x05');
        if (iVar5 != *(int *)&param_1->field_01F5->field_0xc8) goto cf_common_exit_004B9130;
        iVar5 = param_1->field_04BC;
        if (iVar5 == 1) {
          param_1->field_04BC = 2;
          st::fn_004022A7(param_1);
          param_1->vfunc_D8();
          return 0;
        }
        if (iVar5 == 2) {
          local_EAX_1028 = st::fn_004049B7(*(char *)&param_1->field_023D);
          if (*(int *)(&DAT_007e3dc0 + ((uint)(byte)local_EAX_1028 + param_1->field_0235 * 3) * 4) /
              3 + param_1->field_04B8 <= g_playSystem_00802A38->field_00E4) {
            param_1->vfunc_90(3,0x361);
            param_1->field_04BC = 3;
            st::fn_004022A7(param_1);
            param_1->vfunc_90(3,0x361);
            param_1->vfunc_D8();
            return 0;
          }
          goto cf_common_exit_004B9130;
        }
        if (iVar5 != 3) goto cf_common_exit_004B9130;
      }
      param_1->field_04BC = 4;
      st::fn_004022A7(param_1);
      param_1->vfunc_90(3,0x362);
cf_common_exit_004B9130:
      param_1->vfunc_D8();
      return 0;
    }
    puVar1 = &param_1->field_01D5;
    iVar5 = st::fn_004042AF(puVar1,'\x04');
    if (iVar5 == 0x15) {
      st::fn_00404264((STT3DSprC *)puVar1,0xe);
      st::fn_00404264((STT3DSprC *)puVar1,0xd);
      st::fn_00404264((STT3DSprC *)puVar1,0xc);
      st::fn_00404264((STT3DSprC *)puVar1,9);
      st::fn_00404264((STT3DSprC *)puVar1,8);
      st::fn_00404264((STT3DSprC *)puVar1,7);
      st::fn_00404264((STT3DSprC *)puVar1,0x10);
      if (*(int *)(&DAT_00791a10 + param_1->field_0235 * 4) != 0) {
        st::fn_00403616(param_1);
      }
      st::fn_00405768(param_1);
      st::fn_00404264((STT3DSprC *)puVar1,5);
      iVar5 = param_1->vfunc_08();
      if (iVar5 != 0) {
        param_1->SetActivity(0);
        param_1->vfunc_D8();
        return 0;
      }
      goto cf_common_exit_004B9130;
    }
    iVar5 = st::fn_004042AF(puVar1,'\x04');
    if (iVar5 != *(int *)&param_1->field_01F5->field_0xa4) goto cf_common_exit_004B9130;
    if (*(int *)(&DAT_007e1c50 + (param_1->field_0235 * 3 + param_1->field_0239) * 4) != 0) {
      st::fn_00404412(*(char *)&param_1->field_0024,
                         (param_1->field_05D7 *
                          *(int *)(&DAT_007e1c50 +
                                  (param_1->field_0235 * 3 + param_1->field_0239) * 4) * 0x3c) /
                         10000);
    }
    if (*(int *)(&DAT_007e24fc + (param_1->field_0235 * 3 + param_1->field_0239) * 4) != 0) {
      st::fn_004055E7(*(char *)&param_1->field_0024,
                         (param_1->field_05D7 *
                          *(int *)(&DAT_007e24fc +
                                  (param_1->field_0235 * 3 + param_1->field_0239) * 4) * 0x3c) /
                         10000);
    }
    if (*(int *)(&DAT_008545ac + (param_1->field_0235 * 3 + param_1->field_0239) * 4) != 0) {
      st::fn_00404336(*(char *)&param_1->field_0024,
                         (param_1->field_05D7 *
                          *(int *)(&DAT_008545ac +
                                  (param_1->field_0235 * 3 + param_1->field_0239) * 4) * 0x3c) /
                         10000);
    }
    if (*(int *)(&DAT_007e3160 + (param_1->field_0235 * 3 + param_1->field_0239) * 4) != 0) {
      st::fn_00405E6B((int)param_1->field_0024,
                         (param_1->field_05D7 *
                          *(int *)(&DAT_007e3160 +
                                  (param_1->field_0235 * 3 + param_1->field_0239) * 4) * 0x3c) /
                         10000);
    }
    st::fn_004028F6(*(char *)&param_1->field_0024);
    if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
      st::fn_00404B8D((char)param_1->field_0024);
    }
    if (param_1->field_0024 != (byte *)(uint)(byte)param_1->field_0010->field_112D)
    goto cf_common_exit_004B8F5A;
    st::fn_00402D5B(0,(float)param_1->field_01F9,(float)param_1->field_01FD);
    local_EAX_675 = st::fn_004049B7(*(char *)&param_1->field_0024);
    local_EAX_675 = (int)(byte)local_EAX_675;
    if (local_EAX_675 == 1) {
      pTVar7 = param_1->vtable;
      arg_2 = 0x68;
    }
    else {
      if (local_EAX_675 == 2) {
        param_1->vfunc_90(6,0x69);
        goto cf_common_exit_004B8F5A;
      }
      if (local_EAX_675 != 3) goto cf_common_exit_004B8F5A;
      pTVar7 = param_1->vtable;
      arg_2 = 0x6a;
    }
    (*pTVar7->vfunc_90)(param_1,6,arg_2);
cf_common_exit_004B8F5A:
    param_1->field_0241 = 0;
    param_1->field_05D7 = 0;
    param_1->field_05DF = 1;
    st::fn_004010AA(param_1,1,0);
    local_18 = param_1->field_0008;
    local_24 = param_1->field_000C->systemId;
    local_20 = 0;
    local_1c = 10;
    st::fn_006E60A0(param_1,local_2c);
    param_1->vfunc_D8();
    return 0;
  }
  if (((param_1->field_0255 == 0) || (param_1->field_0245 != CASE_0)) || (param_1->field_0249 != 2))
  {
    if (param_1->field_0245 != CASE_4) {
      iVar5 = st::fn_004042AF(&param_1->field_01D5,'\x0e');
      if (((iVar5 == param_1->field_01F5->field_020C) &&
          (local_8 = 1, param_1->field_05AC == CASE_65)) &&
         ((param_1->field_0408 != 0 &&
          ((param_1->field_040C != nullptr &&
           (iVar5 = st::fn_006E62D0
                              (g_playSystem_00802A38,param_1->field_040C,(int *)&local_c),
           iVar5 == 0)))))) {
        st::fn_004016EA(local_c);
        param_1->vfunc_90(3,0x3d9);
      }
      if (*(int *)(&DAT_00791a10 + param_1->field_0235 * 4) != 0) {
        local_8 = st::fn_00405E75((AnonShape_004CC130_08293212 *)param_1);
      }
      goto cf_common_join_004B92EE;
    }
    if (param_1->field_03DC != 0) goto cf_common_join_004B92EE;
  }
  else {
    if (g_playSystem_00802A38->field_00E4 <
        *(int *)(&DAT_00792040 + param_1->field_0235 * 4) + param_1->field_0285)
    goto cf_common_join_004B92EE;
    param_1->field_0285 = g_playSystem_00802A38->field_00E4;
    iVar5 = st::machine_word_boundary_cast<int>(param_1->field_0259 / 0xf);
    if (*(int *)(&DAT_007be8c8 + iVar5 * 0x60) != 0) {
      iVar5 = (((*(int *)(&DAT_007be8c8 + iVar5 * 0x60) < 1) - 1 & 2) - 1) + iVar5;
      if (iVar5 < 0x18) {
        if (iVar5 < 0) {
          iVar5 = 0x17;
        }
        st::fn_00403AD0(param_1,iVar5 * 0xf);
      }
      else {
        st::fn_00403AD0(param_1,0);
      }
      goto cf_common_join_004B92EE;
    }
  }
  local_8 = 1;
cf_common_join_004B92EE:
  puVar1 = &param_1->field_01D5;
  iVar5 = st::fn_004022AC((STT3DSprC *)puVar1,'\x0e');
  iVar6 = st::fn_004022AC((STT3DSprC *)puVar1,'\r');
  if (((iVar6 < iVar5) && (iVar5 = st::fn_004022AC((STT3DSprC *)puVar1,'\r'), 1 < iVar5)) &&
     (iVar5 = st::fn_0040448F(), iVar5 == 2)) {
    pAVar3 = param_1->field_01F5;
    iVar5 = pAVar3->field_0208;
    if (iVar5 < (int)pAVar3->field_020C) {
      iVar5 = st::machine_word_boundary_cast<int>(pAVar3->field_0210 - iVar5);
    }
    else {
      iVar5 = iVar5 - pAVar3->field_0210;
    }
    local_c = (AnonShape_0060D340_D77FEBE7 *)st::fn_004022AC((STT3DSprC *)puVar1,'\x0e');
    iVar6 = st::fn_004022AC((STT3DSprC *)puVar1,'\r');
    if (((int)local_c + (-1 - iVar6) <= iVar5) && ((param_1->field_01F1 & 0x2000) == 0)) {
      st::fn_0040384B(param_1,(uint *)0xd,0);
    }
  }
  if ((local_8 != 0) &&
     (TVar6 = st::fn_00404F20((AnonShape_004B8C00_93076312 *)param_1),
     TVar6 != param_1->field_0245)) {
    st::fn_004010AA(param_1,TVar6,1);
  }
  if ((param_1->field_05DF != 0) && (param_1->field_04CC + 2 <= g_playSystem_00802A38->field_00E4))
  {
    param_1->field_04CC = g_playSystem_00802A38->field_00E4;
    iVar5 = param_1->field_04C8;
    iVar6 = iVar5 + -1;
    param_1->field_04C8 = iVar6;
    if (iVar6 == 0) {
      iVar6 = 0;
      param_1->field_05DF = 0;
      uVar8 = 0;
    }
    else {
      iVar6 = (int)PTR_00806724->field_002C;
      uVar8 = PTR_00806724->entries[iVar5 + -1];
    }
    st::fn_0040116D((STT3DSprC *)&param_1->field_01D5,uVar8,iVar6);
  }
  param_1->vfunc_D8();
  return 0;
}

// 004B9920 FUN_004b9920
#line 4 "decomp/ST.exe/functions/004B9920/decomp.c"
undefined4 __fastcall st::fn_004B9920(AnonShape_004B9920_1D6BF5BA *param_1)

{
  int iVar1;

  iVar1 = param_1->field_05AC;
  if ((iVar1 == 0x34) || (iVar1 == 0x5b)) {
    st::fn_004037B0((int)param_1);
  }
  else if (iVar1 == 0x48) {
    st::fn_00402167((int)param_1);
  }
  else if (iVar1 == 100) {
    st::fn_00405AAB((int)param_1);
  }
  else if (iVar1 == 0x62) {
    st::fn_00401D52((int)param_1);
  }
  else if (iVar1 == 0x6e) {
    st::fn_00404FB6((int)param_1);
  }
  else if (iVar1 == 0x4d) {
    st::fn_004045A2((int)param_1);
  }
  else if (iVar1 == 0x43) {
    st::fn_004031CF((int)param_1);
  }
  else if (iVar1 == 0x73) {
    st::fn_004034C7((int)param_1);
  }
  else if (iVar1 == 0x3a) {
    st::fn_00401645();
  }
  else if (iVar1 == 0x65) {
    st::fn_004037C4((int)param_1);
  }
  else if ((iVar1 == 0x3b) || (iVar1 == 0x60)) {
    st::fn_004012EE((int)param_1);
  }
  if (param_1->field_05AC == 0x5c) {
    g_packedRecords_A62x8[param_1->field_0024].field1965_0x9ca = 1;
  }
  return 0;
}

// 004B9BB0 FUN_004b9bb0
#line 4 "decomp/ST.exe/functions/004B9BB0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=004B9C6C MOV AX,word ptr
   [EBP + 0xc] */

undefined4 __thiscall st::fn_004B9BB0(void *this,int param_1,ushort param_2,undefined2 param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 local_24 [16];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  ushort local_c;
  undefined2 local_a;

  iVar2 = STField<int>(this,0x241) - param_1;
  STField<int>(this,0x241) = iVar2;
  bVar1 = st::fn_004049B7(STField<char>(this,0x23d));
  STField<int>(this,0x5d7) =
       (iVar2 * 100) / *(int *)(&DAT_007e4178 + ((uint)bVar1 + STField<int>(this,0x235) * 3) * 4);
  if (iVar2 < 1) {
    iVar2 = STField<int>(this,0x245);
    STField<undefined4>(this,0x241) = 0;
    STField<undefined4>(this,0x5d7) = 0;
    if (((iVar2 == 0) || (iVar2 == 4)) || (iVar2 == 5)) {
      STField<undefined4>(this,0x5df) = 0;
      st::fn_004010AA(st::pointer_boundary_cast<TLOBaseTy *>(this),1,1);
      if (DAT_008117bc != nullptr) {
        local_e = STField<undefined2>(this,0x32);
        local_10 = STField<undefined2>(this,0x24);
        local_a = param_3;
        local_14 = 0x5dd1;
        local_c = param_2;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)*DAT_008117bc)(local_24);
        return 0;
      }
    }
  }
  else {
    st::fn_00403BCF(st::pointer_boundary_cast<int *>(this));
  }
  return 0;
}

// 004B9CF0 FUN_004b9cf0
#line 4 "decomp/ST.exe/functions/004B9CF0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0047DF00 -> 004B9CF0 @ 0047E45E | 0047DF00 -> 004B9CF0 @ 0047EAF1

   [STPrototypeApplier] Propagated return.
   Evidence: 004B9CF0 returns zeroed full register at 004B9D04 @ 004B9D07 */

uint __fastcall st::fn_004B9CF0(AnonShape_004B9D90_4F3151F9 *param_1)

{
  st::fn_0040142E((TLOBaseTy *)param_1);
  *(undefined4 *)&param_1->field_0x4b4 = 1;
  return 0;
}

// 004B9D20 FUN_004b9d20
#line 4 "decomp/ST.exe/functions/004B9D20/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0047FAD0 -> 004B9D20 @ 0047FCC0; STBoatC::BackDismant this; stable alias ESI */

undefined4 __thiscall st::fn_004B9D20(void *this,STBoatC *param_1)

{
  if (((STField<int>(this,0x4b4) != 0) && (STField<int>(this,0x4b0) == param_1->field_0018))
     && (STField<int>(this,0x245) != 6)) {
    STField<undefined4>(this,0x4b4) = 0;
    return 1;
  }
  return 0;
}

// 004B9D90 FUN_004b9d90
#line 4 "decomp/ST.exe/functions/004B9D90/decomp.c"
undefined4 __fastcall st::fn_004B9D90(AnonShape_004B9D90_4F3151F9 *param_1)

{
  int iVar1;
  int iVar3;
  int iVar2;
  bool bVar4;

  iVar1 = param_1->field_0245;
  if (iVar1 == 1) {
    return 0;
  }
  if (iVar1 == 6) {
    return 0;
  }
  if (iVar1 == 4) {
    return 0;
  }
  iVar1 = param_1->field_05AC;
  switch(iVar1) {
  case 0x32:
  case 0x40:
  case 0x49:
  case 0x5c:
    iVar3 = param_1->field_04D0;
    if (iVar3 != 0) {
      if ((iVar3 != 1) && (iVar3 != 2)) {
        return 0;
      }
      if (iVar1 == 0x40) {
        return 0;
      }
      if (iVar1 == 0x49) {
        return 0;
      }
    }
    break;
  case 0x33:
    if (param_1->field_04D0 != 0) {
      return 0;
    }
    if (param_1->field_04F8 != 0) {
      return 0;
    }
    break;
  case 0x37:
  case 0x6c:
    if (param_1->field_04D8 != 0xffff) {
      return 0;
    }
    if (iVar1 == 0x6c) {
      iVar2 = st::fn_00404160((int)param_1);
      if (iVar2 == 0) {
        return 0;
      }
      iVar1 = param_1->field_061B;
      if (iVar1 == 0) {
        return 0;
      }
      if (*(int *)(iVar1 + 0x20) != 1000) {
        return 0;
      }
      if (*(int *)(iVar1 + 0x4d8) != 0xffff) {
        return 0;
      }
      if (g_worldGrid.sizeZ + -1 <= *(int *)(iVar1 + 0x5b8)) {
        return 0;
      }
    }
    break;
  case 0x38:
  case 0x39:
  case 0x3b:
  case 0x4f:
  case 0x52:
  case 0x5e:
  case 0x5f:
  case 0x60:
    if (param_1->field_04D0 != 0) {
      return 0;
    }
    if (param_1->field_04D8 != -1) {
      return 0;
    }
    break;
  case 0x45:
    bVar4 = param_1->field_04D0 == 3;
    goto LAB_004b9e45;
  case 0x4e:
  case 0x70:
  case 0x72:
    bVar4 = param_1->field_04D0 == 4;
LAB_004b9e45:
    if (bVar4) {
      return 0;
    }
    break;
  case 99:
    if ((param_1->field_04D0 == 0) && (param_1->field_04D4 == 0)) {
      return 0;
    }
  }
  return 1;
}

// 004BE110 FUN_004be110
#line 4 "decomp/ST.exe/functions/004BE110/decomp.c"
byte __fastcall st::fn_004BE110(int param_1)

{
  byte bVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  bVar1 = st::fn_004049B7(*(char *)(param_1 + 0x23d));
  return bVar1;
}

// 004BE180 FUN_004be180
#line 4 "decomp/ST.exe/functions/004BE180/decomp.c"
void __thiscall st::fn_004BE180(void *this,undefined4 param_1)

{
  STField<undefined4>(this,0x5db) = param_1;
  return;
}

// 004BE1A0 FUN_004be1a0
#line 4 "decomp/ST.exe/functions/004BE1A0/decomp.c"
undefined4 __fastcall st::fn_004BE1A0(int *param_1)

{
  int iVar1;

  if ((STField<byte>(param_1,0x1d1) & 2) == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0xf8))();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// 004BE1D0 FUN_004be1d0
#line 4 "decomp/ST.exe/functions/004BE1D0/decomp.c"
uint __fastcall st::fn_004BE1D0(int param_1)

{
  uint uVar1;

  uVar1 = st::fn_00403936(param_1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((uVar1 != 0) && (*(int *)(param_1 + 0x5ac) == 0x6c)) {
    uVar1 = 0;
  }
  return uVar1;
}

// 004BE200 FUN_004be200
#line 1 "decomp/ST.exe/functions/004BE200/decomp.c"

void st::fn_004BE200(void)

{
  st::fn_00403C9C();
  return;
}

// 004BE240 FUN_004be240
#line 4 "decomp/ST.exe/functions/004BE240/decomp.c"
void __thiscall st::fn_004BE240(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;

  uVar2 = 0xffffffff;
  *param_1 = '\0';
  pcVar4 = (char *)((int)this + 0x5c4);
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  memmove(param_1, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  return;
}

// 004BE290 FUN_004be290
#line 4 "decomp/ST.exe/functions/004BE290/decomp.c"
void __thiscall st::fn_004BE290(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;
  char *pcVar4_mg0;
  char *pcVar4_mg1;

  uVar2 = 0xffffffff;
  pcVar4_mg0 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4_mg0;
    pcVar4_mg0 = pcVar4_mg0 + 1;
  } while (cVar1 != '\0');
  if (0xe < ~uVar2 - 1) {
    st::fn_0072E340((char *)((int)this + 0x5c4),param_1,0xe);
    STField<undefined1>(this,0x5d2) = 0;
    return;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar4_mg1 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4_mg1 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar4_mg1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4_mg1 + -uVar2;
  pcVar5 = (char *)((int)this + 0x5c4);
  memmove(pcVar5, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  return;
}

// 004BE320 FUN_004be320
#line 4 "decomp/ST.exe/functions/004BE320/decomp.c"
undefined4 __thiscall st::fn_004BE320(void *this,undefined4 *param_1)

{
  if (param_1 != nullptr) {
    *param_1 = STField<undefined4>(this,0x4dc);
  }
  return STField<undefined4>(this,0x4e0);
}

// 004BE350 CreateTLOBase
#line 4 "decomp/ST.exe/functions/004BE350/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7DC>00403B84

   [STObjectFactoryApplier] Central object factory for 0x01FF (ST_OBJECT_TYPE_01FF).
   Evidence: registry[23] at 007CA7D8 stores type 0x01FF and executable pointer 00403B84; allocation
   size 1571 has no unique current class-layout match */

TLOBaseTy * __cdecl st::fn_004BE350(void)

{
  TLOBaseTy *pTVar1;

  pTVar1 = (TLOBaseTy *)st::fn_006B04D0(0x623);
  if (pTVar1 != nullptr) {
    pTVar1 = st::fn_004030AD(pTVar1);
    return pTVar1;
  }
  return nullptr;
}

// 004BE380 FUN_004be380
#line 4 "decomp/ST.exe/functions/004BE380/decomp.c"
int __fastcall st::fn_004BE380(AnonShape_004BE380_4A62E49E *param_1)

{
  byte bVar1;

  bVar1 = st::fn_004049B7(param_1->field_023D);
  return (param_1->field_0241 * 100) /
         *(int *)(&DAT_007e417c + ((bVar1 - 1) + param_1->field_0235 * 3) * 4);
}

// 004BE3D0 FUN_004be3d0
#line 4 "decomp/ST.exe/functions/004BE3D0/decomp.c"
void __thiscall st::fn_004BE3D0(void *this,int param_1)

{
  byte bVar1;

  bVar1 = st::fn_004049B7(STField<char>(this,0x23d));
  STField<int>(this,0x5d7) = param_1;
  STField<int>(this,0x241) =
       (*(int *)(&DAT_007e417c + ((bVar1 - 1) + STField<int>(this,0x235) * 3) * 4) * param_1) /
       100;
  return;
}

// 004BE470 FUN_004be470
#line 4 "decomp/ST.exe/functions/004BE470/decomp.c"
void __thiscall st::fn_004BE470(void *this,int param_1)

{
  int iVar1;
  byte bVar2;

  bVar2 = st::fn_004049B7(STField<char>(this,0x23d));
  STField<int>(this,0x241) = param_1;
  iVar1 = (bVar2 - 1) + STField<int>(this,0x235) * 3;
  if (*(int *)(&DAT_007e417c + iVar1 * 4) < param_1) {
    STField<int>(this,0x241) = *(int *)(&DAT_007e417c + iVar1 * 4);
  }
  STField<int>(this,0x5d7) =
       (STField<int>(this,0x241) * 100) / *(int *)(&DAT_007e417c + iVar1 * 4);
  return;
}

// 004BE6C0 FUN_004be6c0
#line 4 "decomp/ST.exe/functions/004BE6C0/decomp.c"
void __thiscall st::fn_004BE6C0(void *this,undefined4 *param_1)

{
  short sVar1;
  byte bVar2;
  undefined1 uVar3;
  int uVar4;
  undefined4 uVar5;
  int local_EAX_571;
  int iVar6;
  int iVar8;

  memset(param_1, 0, 0x36); /* compiler bulk-zero initialization */
  *(undefined1 *)param_1 = 1;
  STField<undefined1>(param_1,1) = STField<undefined1>(this,0x21d);
  bVar2 = st::fn_004049B7(STField<char>(this,0x23d));
  STField<byte>(param_1,7) = bVar2;
  if (((STField<byte>(this,0x1d1) & 4) == 0) && (STField<int>(this,0x420) == 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  STField<undefined1>(param_1,0x1d) = uVar3;
  switch(STField<undefined4>(this,0x245)) {
  case 0:
  case 1:
  case 2:
  case 5:
  case 6:
    STField<undefined1>(param_1,2) = 0;
    break;
  case 3:
  case 4:
    STField<undefined1>(param_1,2) = 1;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar3 = (**(code **)(*(int *)this + 0x7c))();
  STField<undefined1>(param_1,0x1b) = uVar3;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar3 = (**(code **)(*(int *)this + 0xc4))();
  *(undefined1 *)(param_1 + 7) = uVar3;
  STField<undefined4>(param_1,3) = STField<undefined4>(this,0x5ac);
  param_1[2] = STField<undefined4>(this,0x18);
  st::fn_0072E340((char *)(param_1 + 3),(char *)((int)this + 0x5c4),0xe);
  if (*(int *)(&DAT_00792778 + STField<int>(this,0x235) * 4) == 0) {
    STField<undefined2>(param_1,0x1e) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    STField<undefined2>(param_1,0x26) = 0xffff;
    goto LAB_004be96f;
  }
  sVar1 = *(short *)(&DAT_00792ca0 + STField<int>(this,0x235) * 6);
  STField<short>(param_1,0x1e) = sVar1;
  if (sVar1 == 0xa0) {
    STField<undefined2>(param_1,0x1e) = 0x9f;
  }
  iVar6 = (&DAT_00792ca0)[STField<int>(this,0x235) * 6];
  if (((iVar6 == 0x96) || (iVar6 == 0x97)) || (iVar6 == 0x98)) {
    uVar4 = st::fn_004049B7(STField<char>(this,0x24));
    uVar4 = (int)(byte)uVar4;
    if (uVar4 == 1) {
      iVar6 = 6;
      goto LAB_004be7f7;
    }
    if (uVar4 != 2) goto LAB_004be80a;
    iVar8 = STField<int>(this,0x24);
    iVar6 = 0x83;
LAB_004be7fb:
    uVar5 = st::fn_0040186B(iVar8,iVar6);
    STField<short>(param_1,0x22) = (short)uVar5;
  }
  else if (iVar6 == 0xa0) {
    iVar6 = 0xb;
LAB_004be7f7:
    iVar8 = STField<int>(this,0x24);
    goto LAB_004be7fb;
  }
LAB_004be80a:
  if (*(int *)(&DAT_00793e28 + STField<int>(this,0x235) * 8) == 0) {
    STField<undefined2>(param_1,0x26) = 0xffff;
  }
  else {
    STField<undefined2>(param_1,0x26) = STField<undefined2>(this,0x2c5);
  }
  if (((STField<short>(param_1,0x1e) == 0xa8) && (STField<int>(this,0x5ac) == 0x45)) &&
     (STField<undefined2>(param_1,0x26) = 0xffff, STField<int>(this,0x4d0) == 0)) {
    STField<undefined2>(param_1,0x1e) = 0;
  }
  if ((STField<short>(param_1,0x1e) == 0xa3) && (STField<int>(this,0x5ac) == 0x4e)) {
    STField<undefined2>(param_1,0x26) = 0xffff;
    if ((STField<int>(this,0x4d0) != 1) && (STField<int>(this,0x4d0) != 4)) {
      STField<undefined2>(param_1,0x1e) = 0;
    }
  }
  if (((STField<short>(param_1,0x1e) == 0xb2) && (STField<int>(this,0x5ac) == 0x70)) &&
     (STField<undefined2>(param_1,0x26) = 0xffff, STField<int>(this,0x4f0) == 0)) {
    STField<undefined2>(param_1,0x1e) = 0;
  }
  sVar1 = *(short *)(&DAT_00792cac + STField<int>(this,0x235) * 6);
  *(short *)(param_1 + 8) = sVar1;
  if (sVar1 == 0xa0) {
    *(undefined2 *)(param_1 + 8) = 0x9f;
  }
  iVar6 = (&DAT_00792cac)[STField<int>(this,0x235) * 6];
  if (((iVar6 == 0x96) || (iVar6 == 0x97)) || (iVar6 == 0x98)) {
    local_EAX_571 = st::fn_004049B7(STField<char>(this,0x24));
    local_EAX_571 = (int)(byte)local_EAX_571;
    if (local_EAX_571 == 1) {
      iVar6 = 6;
      goto LAB_004be918;
    }
    if (local_EAX_571 != 2) goto LAB_004be92b;
    iVar8 = STField<int>(this,0x24);
    iVar6 = 0x83;
LAB_004be91c:
    uVar5 = st::fn_0040186B(iVar8,iVar6);
    *(short *)(param_1 + 9) = (short)uVar5;
  }
  else if (iVar6 == 0xa0) {
    iVar6 = 0xb;
LAB_004be918:
    iVar8 = STField<int>(this,0x24);
    goto LAB_004be91c;
  }
LAB_004be92b:
  if (*(int *)(&DAT_00793e2c + STField<int>(this,0x235) * 8) != 0) {
    *(undefined2 *)(param_1 + 10) = STField<undefined2>(this,0x345);
    *(undefined1 *)((int)param_1 + (0x2e - STField<int>(this,0x5b8))) = 1;
    return;
  }
LAB_004be96f:
  *(undefined2 *)(param_1 + 10) = 0xffff;
  *(undefined1 *)((int)param_1 + (0x2e - STField<int>(this,0x5b8))) = 1;
  return;
}

