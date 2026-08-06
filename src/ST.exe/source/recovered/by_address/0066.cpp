#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0066.cpp

// 00660010 FUN_00660010
#line 4 "decomp/ST.exe/functions/00660010/decomp.c"
undefined4 __fastcall st::fn_00660010(AiFltClassTy *param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  DArrayTy *array;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  STGroupBoatC *this;
  undefined4 local_14;
  DArrayTy *local_10;
  undefined2 local_c;
  undefined4 local_8;

  local_8 = 0;
  sVar1 = param_1->field_0039;
  param_1->field_00A7 = 0;
  if (0 < sVar1) {
    if (sVar1 < 3) {
      iVar4 = 0x33;
      goto LAB_00660050;
    }
    if (sVar1 == 3) {
      iVar4 = 0x62;
      goto LAB_00660050;
    }
  }
  iVar4 = 0;
LAB_00660050:
  array = (DArrayTy *)st::fn_004038E1(param_1,iVar4,(sVar1 != 3) - 1 & 2,nullptr);
  if (array == nullptr) {
    return 0xfffffffe;
  }
  uVar3 = st::fn_0040343B(param_1);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (CONCAT22(extraout_var,uVar3) == 0) {
    st::fn_006AE110(array);
    return 0xffffffff;
  }
  if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
    this = st::fn_00405CF9(*(char *)&param_1->field_0024,param_1->field_007D);
    if (this != nullptr) {
      if (param_1->field_0039 == 3) {
        local_14 = 1;
        local_10 = nullptr;
        local_c = 0;
        this->sub_00498D20(0x11,(short)&local_14);
        uVar2 = local_8;
        st::fn_006AE110(array);
        return uVar2;
      }
      local_14 = 0;
      local_10 = array;
      this->sub_00498D20(4,(short)&local_14);
      uVar2 = local_8;
      st::fn_006AE110(array);
      return uVar2;
    }
  }
  st::fn_006AE110(array);
  return 0xfffffffd;
}

// 00660420 FUN_00660420
#line 4 "decomp/ST.exe/functions/00660420/decomp.c"
undefined4 __thiscall st::fn_00660420(void *this,undefined4 param_1)

{
  STGroupBoatC *this_00;
  undefined4 local_1c [6];

  STField<undefined4>(this,0xa7) = 0;
  memset(local_1c, 0, 0x18); /* compiler bulk-zero initialization */
  local_1c[0] = 0;
  local_1c[2] = param_1;
  if ((STField<ushort>(this,0x7d) != 0xfffe) && (g_allPlayers_007FA174 != nullptr))
  {
    this_00 = st::fn_00405CF9(STField<char>(this,0x24),STField<ushort>(this,0x7d));
    if (this_00 != nullptr) {
      this_00->sub_00498D20(2,(short)local_1c);
      return 0;
    }
  }
  return 0xffffffff;
}

// 006604B0 FUN_006604b0
#line 4 "decomp/ST.exe/functions/006604B0/decomp.c"
undefined4 __fastcall st::fn_006604B0(AiFltClassTy *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  STGroupBoatC *this;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  local_8 = 0;
  param_1->field_00A7 = 0;
  uVar1 = st::fn_0040343B(param_1);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (CONCAT22(extraout_var,uVar1) != 0) {
    local_c = param_3;
    if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
      this = st::fn_00405CF9(*(char *)&param_1->field_0024,param_1->field_007D);
      if (this != nullptr) {
        this->sub_00498D20(6,(short)&local_c);
        return 0;
      }
    }
  }
  return 0xffffffff;
}

// 00660540 FUN_00660540
#line 4 "decomp/ST.exe/functions/00660540/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00664960 -> 00660540 @ 006653F2; MOVSX at 006653E0 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00664960 -> 00660540 @ 006653F2; MOVSX at 006653D7 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00664960 -> 00660540 @ 006653F2; MOVSX at 006653D0 establishes signed source width 2 */

undefined4 __thiscall
st::fn_00660540(void *this,undefined4 param_1,short param_2,short param_3,short param_4,
            undefined2 param_5,char param_6,char *param_7)

{
  STGroupBoatC *this_00;
  int iVar1;
  short *psVar2;
  short local_24;
  short local_22;
  short local_20;
  undefined4 local_1e;
  int local_1a;
  char local_16 [15];
  undefined2 local_7;

  psVar2 = &local_24;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    psVar2[0] = 0;
    psVar2[1] = 0;
    psVar2 = psVar2 + 2;
  }
  *psVar2 = 0;
  *(undefined1 *)(psVar2 + 1) = 0;
  local_22 = param_3;
  local_1a = (int)param_6;
  local_1e = param_1;
  local_20 = param_4;
  local_24 = param_2;
  STField<undefined4>(this,0xa7) = 0;
  local_7 = param_5;
  if (param_7 != nullptr) {
    st::fn_0072E340(local_16,param_7,0xe);
  }
  if ((STField<ushort>(this,0x7d) != 0xfffe) && (g_allPlayers_007FA174 != nullptr))
  {
    this_00 = st::fn_00405CF9(STField<char>(this,0x24),STField<ushort>(this,0x7d));
    if (this_00 != nullptr) {
      this_00->sub_00498D20(9,(short)&local_24);
      return 0;
    }
  }
  return 0xffffffff;
}

// 00660620 FUN_00660620
#line 4 "decomp/ST.exe/functions/00660620/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall
st::fn_00660620(AnonShape_00660620_6BCED4D7 *param_1,undefined4 param_2,uint param_3)

{
  STGroupBoatC *pSVar1;
  DArrayTy *array;
  undefined4 local_18;
  DArrayTy *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_18 = 0;
  local_14 = nullptr;
  local_10 = 0;
  local_c = 0;
  param_1->field_00A7 = 0;
  local_8 = 0;
  pSVar1 = st::fn_00405CF9(param_1->field_0024,(ushort)param_3);
  if (pSVar1 != nullptr) {
    array = (DArrayTy *)st::fn_00402DB5((STGroupC *)pSVar1);
    if ((array != nullptr) || (_DAT_0000000c != 0)) {
      local_18 = 0;
      local_14 = array;
      if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
        pSVar1 = st::fn_00405CF9(param_1->field_0024,param_1->field_007D);
        if (pSVar1 != nullptr) {
          pSVar1->sub_00498D20(5,(short)&local_18);
          if (array != nullptr) {
            st::fn_006AE110(array);
          }
          return 0;
        }
      }
      if (array != nullptr) {
        st::fn_006AE110(array);
      }
    }
  }
  return 0xffffffff;
}

// 00660700 FUN_00660700
#line 4 "decomp/ST.exe/functions/00660700/decomp.c"
undefined4 __thiscall
st::fn_00660700(void *this,short param_1,short param_2,short param_3,int param_4,int param_5,
            int param_6)

{
  STWorldObject *this_00;
  short sVar1;
  int iVar2;
  STGroupBoatC *this_01;
  short sVar3;
  undefined4 local_14;
  undefined4 local_10;
  short local_c;
  short sStack_a;
  short local_8;
  short sStack_6;

  local_14 = 0;
  STField<undefined4>(this,0xa7) = 0;
  sVar1 = (short)param_4;
  sVar3 = (short)param_5;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_10 = CONCAT22(sVar3,sVar1);
  local_c = (short)param_6;
  sStack_a = param_1;
  sStack_a = param_1;
  local_8 = param_2;
  local_8 = param_2;
  sStack_6 = param_3;
  if (((param_4 < 0) || (param_5 < 0)) || (param_6 < 0)) {
    local_14 = 2;
  }
  else {
    if (sVar1 < 0) {
      return 0xffffffff;
    }
    if (g_worldGrid.sizeX <= sVar1) {
      return 0xffffffff;
    }
    if (sVar3 < 0) {
      return 0xffffffff;
    }
    if (g_worldGrid.sizeY <= sVar3) {
      return 0xffffffff;
    }
    if (local_c < 0) {
      return 0xffffffff;
    }
    if (g_worldGrid.sizeZ <= local_c) {
      return 0xffffffff;
    }
    this_00 = STGridAt3D(g_worldGrid, sVar1, sVar3, local_c).objects[0];
    if (this_00 == nullptr) {
      return 0xffffffff;
    }
    iVar2 = this_00->GetObjectTypeId();
    if (iVar2 == 0x37) {
      local_14 = 0;
      *(int *)&this_00[0x1d].field_0x1c = (int)sStack_a;
      this_00[0x1d].value_20 = (int)local_8;
      this_00[0x1e].vtable = (STWorldObjectVTable *)(int)sStack_6;
      *(undefined4 *)&this_00[0x1d].field_0x18 = 1;
    }
    else {
      iVar2 = this_00->GetObjectTypeId();
      if (iVar2 != 0x6c) {
        return 0xffffffff;
      }
      local_14 = 1;
      st::fn_00402FD6(this_00,(undefined4 *)&param_1,(undefined4 *)&param_2,
                         (undefined4 *)&param_3);
      sStack_a = param_1;
      local_8 = param_2;
      sStack_6 = param_3;
    }
  }
  if (((STField<ushort>(this,0x7d) != 0xfffe) && (g_allPlayers_007FA174 != nullptr))
     && (this_01 = st::fn_00405CF9(STField<char>(this,0x24),STField<ushort>(this,0x7d)),
        this_01 != nullptr)) {
    this_01->sub_00498D20(0x10,(short)&local_14);
    return 0;
  }
  return 0xffffffff;
}

// 00660910 FUN_00660910
#line 4 "decomp/ST.exe/functions/00660910/decomp.c"
undefined4 __thiscall st::fn_00660910(void *this,short param_1,short param_2,short param_3)

{
  STWorldObject *pSVar1;
  undefined4 uVar2;
  STGroupBoatC *this_00;
  undefined1 local_c;
  undefined2 uStack_b;
  undefined1 uStack_9;
  undefined2 local_8;
  undefined1 local_6;

  STField<undefined4>(this,0xa7) = 0;
  if (((((-1 < param_1) && (param_1 < g_worldGrid.sizeX)) && (-1 < param_2)) &&
      ((param_2 < g_worldGrid.sizeY && (-1 < param_3)))) && (param_3 < g_worldGrid.sizeZ)) {
    pSVar1 = STGridAt3D(g_worldGrid, param_1, param_2, param_3).objects[0];
    if (pSVar1 != nullptr) {
      local_c = *(undefined1 *)&pSVar1[1].vtable;
      uStack_b = *(undefined2 *)&pSVar1[1].field_0xe;
      uVar2 = *(undefined4 *)&pSVar1->field_0x18;
      uStack_9 = (undefined1)uVar2;
      local_8 = (undefined2)((uint)uVar2 >> 8);
      local_6 = (undefined1)((uint)uVar2 >> 0x18);
      if ((STField<ushort>(this,0x7d) != 0xfffe) &&
         (g_allPlayers_007FA174 != nullptr)) {
        this_00 = st::fn_00405CF9(STField<char>(this,0x24),STField<ushort>(this,0x7d));
        if (this_00 != nullptr) {
          this_00->sub_00498D20(0xf,(short)&local_c);
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}

// 00660A40 FUN_00660a40
#line 4 "decomp/ST.exe/functions/00660A40/decomp.c"
undefined4 __thiscall st::fn_00660A40(void *this,short param_1,short param_2,short param_3)

{
  STGroupBoatC *this_00;
  undefined4 local_8;

  STField<undefined4>(this,0xa7) = 0;
  if (((((-1 < param_1) && (param_1 < g_worldGrid.sizeX)) && (-1 < param_2)) &&
      ((param_2 < g_worldGrid.sizeY && (-1 < param_3)))) && (param_3 < g_worldGrid.sizeZ)) {
    if (STGridAt3D(g_worldGrid, param_1, param_2, param_3).objects[0] != nullptr) {
      local_8 = *(undefined4 *)
                 &STGridAt3D(g_worldGrid, param_1, param_2, param_3).objects[0]->field_0x18;
      if ((STField<ushort>(this,0x7d) != 0xfffe) &&
         (g_allPlayers_007FA174 != nullptr)) {
        this_00 = st::fn_00405CF9(STField<char>(this,0x24),STField<ushort>(this,0x7d));
        if (this_00 != nullptr) {
          this_00->sub_00498D20(0xb,(short)&local_8);
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}

// 00660B50 FUN_00660b50
#line 4 "decomp/ST.exe/functions/00660B50/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00664960 -> 00660B50 @ 00666DA3; MOVSX at 00666D98 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00660C14 TEST AX,AX classifies dword parameter loaded at 00660C11 | 00660C19 CMP
   AX,word ptr [0x007fb244] classifies dword parameter loaded at 00660C11 | 00664960 -> 00660B50 @
   00666DA3; MOVSX at 00666D88 establishes signed source width 2 */

undefined4 __fastcall
st::fn_00660B50(AnonShape_00660620_6BCED4D7 *param_1,int param_2,short param_3,short param_4,
            int param_5,int param_6)

{
  STGroupBoatC *pSVar1;
  short local_14;
  short sStack_12;
  short local_10;
  undefined4 local_c;
  short local_8;

  param_1->field_00A7 = 0;
  if (param_6 == 0) {
    local_8 = (short)param_5;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c = (AnonShape_00660620_6BCED4D7 *)CONCAT22(param_4,param_3);
    if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
      pSVar1 = st::fn_00405CF9(param_1->field_0024,param_1->field_007D);
      if (pSVar1 != nullptr) {
        pSVar1->sub_00498D20(0xc,(short)&local_c);
        return 0;
      }
    }
  }
  else if ((((-1 < param_3) && (param_3 < g_worldGrid.sizeX)) && (-1 < param_4)) &&
          (param_4 < g_worldGrid.sizeY)) {
    if ((-1 < (short)param_5) && ((short)param_5 < g_worldGrid.sizeZ)) {
      if (STGridAt3D(g_worldGrid, param_3, param_4, param_5).objects[0] != nullptr)
      {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        _local_14 = CONCAT22(param_4,param_3);
        if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
          local_10 = (short)param_5;
          local_c = param_1;
          pSVar1 = st::fn_00405CF9(param_1->field_0024,param_1->field_007D);
          if (pSVar1 != nullptr) {
            pSVar1->sub_00498D20(0x12,(short)&local_14);
            return 0;
          }
        }
      }
    }
  }
  return 0xffffffff;
}

// 00660D10 FUN_00660d10
#line 4 "decomp/ST.exe/functions/00660D10/decomp.c"
int __cdecl st::fn_00660D10(int param_1,int param_2)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (int)*(short *)(param_1 + 0xc) - (int)*(short *)(param_2 + 0xc);
}

// 00660D40 FUN_00660d40
#line 4 "decomp/ST.exe/functions/00660D40/decomp.c"
void __fastcall st::fn_00660D40(AnonShape_00660D40_E58DF1E6 *param_1)

{
  uint uVar1;
  AnonShape_00660D40_F4300C26 *pAVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  AnonShape_0068EB30_4F4B480A *pAVar8;
  bool bVar9;
  AnonShape_0068EB30_4F4B480A local_5c;
  AiPlrClassTy *local_10;
  uint local_c;
  AnonShape_00660D40_F4300C26 *local_8;

  if (((param_1->field_0284 != 0) && (param_1->field_020B != 0)) &&
     (g_allPlayers_007FA174 != nullptr)) {
    local_8 = (AnonShape_00660D40_F4300C26 *)param_1;
    local_10 = st::fn_00401DC5(param_1->field_0024);
    iVar7 = param_1->field_020B;
    local_c = 0;
    if (0 < *(int *)(iVar7 + 0xc)) {
      bVar9 = *(int *)(iVar7 + 0xc) != 0;
      do {
        if (bVar9) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar7 = *(int *)(iVar7 + 8) * local_c + *(int *)(iVar7 + 0x1c);
        }
        else {
          iVar7 = 0;
        }
        sVar3 = param_1->field_007B;
        iVar6 = 0;
        uVar5 = local_c;
        if ((-(uint)(sVar3 != 1) & 2) != 0xffffffff) {
          do {
            uVar1 = *(uint *)(iVar7 + iVar6 * 4);
            if ((((uVar1 != 0) && (*(int *)(iVar7 + 0x28) == 0)) && (*(int *)(iVar7 + 0x24) == 0))
               && (((uVar1 != 0 && (uVar1 < 0x29)) || (sVar3 == 1)))) {
              pAVar8 = &local_5c;
              for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(undefined4 *)pAVar8 = 0;
                pAVar8 = (AnonShape_0068EB30_4F4B480A *)((int)&pAVar8->field_0003 + 1);
              }
              *(undefined2 *)pAVar8 = 0;
              pAVar2 = local_8;
              STPiece<0,4>(local_5c) = *(undefined4 *)(iVar7 + iVar6 * 4);
              STPiece<8,4>(local_5c) = 0;
              if (iVar6 == 0) {
                local_5c.field_0006 = *(short *)(iVar7 + 0xc);
              }
              else {
                local_5c.field_0006 = 0;
              }
              STPiece<4,2>(local_5c) = SUB42(uVar5,0);
              if (local_10 != nullptr) {
                STPiece<8,4>(local_5c) = local_10->field_065C;
                local_10->field_065C = STPiece<8,4>(local_5c) + 1;
              }
              STPiece<12,2>(local_5c) = local_8->field_007D;
              STPiece<22,2>(local_5c) = *(undefined2 *)(iVar7 + 0xe);
              STPiece<24,2>(local_5c) = *(undefined2 *)(iVar7 + 0x10);
              STPiece<26,2>(local_5c) = *(undefined2 *)(iVar7 + 0x12);
              STPiece<28,1>(local_5c) = *(char *)(iVar7 + 0x14);
              if ((((char)STPiece<28,1>(local_5c) < '\0') || ('\a' < (char)STPiece<28,1>(local_5c))) &&
                 ((STPiece<28,1>(local_5c) = local_8->field_0081, (char)STPiece<28,1>(local_5c) < '\0' ||
                  ('\a' < (char)STPiece<28,1>(local_5c))))) {
                STPiece<28,1>(local_5c) = local_8->field_0024;
              }
              st::fn_0072E340(&local_5c.field_0x1d,(char *)(iVar7 + 0x15),0xe);
              if (iVar6 == 0) {
                sVar3 = *(short *)&pAVar2->field_0x7f;
              }
              else {
                sVar3 = 0;
              }
              st::fn_004056BE(*(AiTactClassTy **)&pAVar2[4].field_0x74,&local_5c,sVar3);
              uVar5 = local_c;
              param_1 = (AnonShape_00660D40_E58DF1E6 *)local_8;
            }
            sVar3 = param_1->field_007B;
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)((-(uint)(sVar3 != 1) & 2) + 1));
        }
        iVar7 = param_1->field_020B;
        local_c = uVar5 + 1;
        bVar9 = local_c < *(uint *)(iVar7 + 0xc);
      } while ((int)local_c < (int)*(uint *)(iVar7 + 0xc));
    }
  }
  return;
}

// 006616B0 FUN_006616b0
#line 4 "decomp/ST.exe/functions/006616B0/decomp.c"
void __thiscall st::fn_006616B0(void *this,uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint local_10;

  iVar1 = STField<int>(this,0x20b);
  local_10 = 0;
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (0 < (int)uVar2) {
    do {
      if (local_10 < uVar2) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        puVar5 = (uint *)(*(int *)(iVar1 + 8) * local_10 + *(int *)(iVar1 + 0x1c));
      }
      else {
        puVar5 = nullptr;
      }
      if ((puVar5[10] == 0) && (puVar5[9] == 0)) {
        iVar6 = 0;
        uVar4 = -(uint)(STField<short>(this,0x7b) != 1) & 2;
        puVar7 = puVar5;
        if (uVar4 != 0xffffffff) {
          do {
            uVar3 = *puVar7;
            if ((uVar3 == param_1) &&
               (((uVar3 != 0 && (uVar3 < 0x29)) || (STField<short>(this,0x7b) == 1)))) {
              puVar5[9] = param_2;
              return;
            }
            iVar6 = iVar6 + 1;
            puVar7 = puVar7 + 1;
          } while (iVar6 < (int)(uVar4 + 1));
        }
      }
      local_10 = local_10 + 1;
    } while ((int)local_10 < (int)uVar2);
  }
  return;
}

// 00661790 FUN_00661790
#line 4 "decomp/ST.exe/functions/00661790/decomp.c"
void __thiscall st::fn_00661790(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0x20b);
  uVar4 = 0;
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    while( true ) {
      if (bVar5) {
        iVar3 = *(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c);
      }
      else {
        iVar3 = 0;
      }
      if (*(int *)(iVar3 + 0x24) == param_2) break;
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar2;
      if ((int)uVar2 <= (int)uVar4) {
        return;
      }
    }
    *(undefined4 *)(iVar3 + 0x24) = 0;
  }
  return;
}

// 00664600 FUN_00664600
#line 4 "decomp/ST.exe/functions/00664600/decomp.c"
undefined4 __thiscall st::fn_00664600(void *this,uint param_1)

{
  dword dVar1;

  dVar1 = (STField<DArrayTy *>(this,0x217))->count;
  if (((dVar1 != 0) && ((int)param_1 < (int)dVar1)) && (-1 < (int)param_1)) {
    st::fn_006B0C70(STField<DArrayTy *>(this,0x217),param_1);
    return *(undefined4 *)(STField<int>(this,0x217) + 0xc);
  }
  return 0xffffffff;
}

// 00664650 FUN_00664650
#line 4 "decomp/ST.exe/functions/00664650/decomp.c"
undefined4 __thiscall st::fn_00664650(void *this,int param_1)

{
  dword dVar1;
  int *piVar2;
  DArrayTy *array;
  uint index;
  bool bVar3;

  array = STField<DArrayTy *>(this,0x217);
  dVar1 = array->count;
  if (dVar1 != 0) {
    index = 0;
    if (0 < (int)dVar1) {
      bVar3 = dVar1 != 0;
      do {
        if (bVar3) {
          piVar2 = DArrayAt<int>(array, index);
        }
        else {
          piVar2 = nullptr;
        }
        if (*piVar2 == param_1) {
          st::fn_006B0C70(array,index);
        }
        array = STField<DArrayTy *>(this,0x217);
        index = index + 1;
        bVar3 = index < array->count;
      } while ((int)index < (int)array->count);
    }
    return *(undefined4 *)(STField<int>(this,0x217) + 0xc);
  }
  return 0xffffffff;
}

// 006646E0 FUN_006646e0
#line 4 "decomp/ST.exe/functions/006646E0/decomp.c"
undefined4 __fastcall st::fn_006646E0(int param_1)

{
  dword dVar1;
  uint *puVar2;
  DArrayTy *array;
  uint index;
  bool bVar3;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  array = *(DArrayTy **)(param_1 + 0x217);
  dVar1 = array->count;
  if (dVar1 == 0) {
    return 0xffffffff;
  }
  index = 0;
  if (0 < (int)dVar1) {
    bVar3 = dVar1 != 0;
    do {
      if (bVar3) {
        puVar2 = DArrayAt<uint>(array, index);
      }
      else {
        puVar2 = nullptr;
      }
      if ((0x31 < *puVar2) && (*puVar2 < 100)) {
        st::fn_006B0C70(array,index);
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      array = *(DArrayTy **)(param_1 + 0x217);
      index = index + 1;
      bVar3 = index < array->count;
    } while ((int)index < (int)array->count);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(*(int *)(param_1 + 0x217) + 0xc);
}

// 00668150 CreateAiFlt
#line 4 "decomp/ST.exe/functions/00668150/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9B4>00401136

   [STObjectFactoryApplier] Central object factory for 0x0400 (ST_OBJECT_TYPE_0400).
   Evidence: registry[82] at 007CA9B0 stores type 0x0400 and executable pointer 00401136; allocation
   size 648 has no unique current class-layout match */

AiFltClassTy * __cdecl st::fn_00668150(void)

{
  AiFltClassTy *pAVar1;

  pAVar1 = (AiFltClassTy *)st::fn_006B04D0(0x288);
  if (pAVar1 != nullptr) {
    pAVar1 = st::fn_004047A5(pAVar1);
    return pAVar1;
  }
  return nullptr;
}

// 00668670 FUN_00668670
#line 4 "decomp/ST.exe/functions/00668670/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl st::fn_00668670(int param_1)

{
  undefined4 *puVar1;
  int iVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(char *)(param_1 + 0x18) != '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x1eb);
    iVar2 = 7;
    do {
      if ((DArrayTy *)*puVar1 != nullptr) {
        st::fn_006AE110((DArrayTy *)*puVar1);
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 006686C0 FUN_006686c0
#line 4 "decomp/ST.exe/functions/006686C0/decomp.c"
void __cdecl st::fn_006686C0(int *param_1)

{
  if (*param_1 != 0) {
    st::fn_00402293(*param_1);
    st::fn_006AB060(param_1);
  }
  return;
}

// 006686F0 FUN_006686f0
#line 4 "decomp/ST.exe/functions/006686F0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_006686F0_param_1Enum. Cases:
   CASE_320=800;CASE_321=801;CASE_384=900;CASE_385=901;CASE_386=902;CASE_387=903;CASE_388=904;CASE_389=905;CASE_38A=906;CASE_38C=908;CASE_38D=909;CASE_38E=910;CASE_38F=911;CASE_7D1=2001;CASE_7D2=2002;CASE_7D3=2003;CASE_7D4=2004;CASE_7D6=2006;CASE_7D7=2007;CASE_7DA=2010;CASE_7DC=2012;CASE_7DD=2013;CASE_7DE=2014;CASE_7E4=2020;CASE_7E5=2021;CASE_7E6=2022;CASE_7E7=2023;CASE_7E8=2024;CASE_7E9=2025;CASE_7EA=2026;CASE_7EB=2027;CASE_7EC=2028;CASE_7ED=2029;CASE_7EE=2030;CASE_7EF=2031;CASE_7F0=2032;CASE_7F2=2034;CASE_7F3=2035;CASE_7F4=2036;CASE_7F5=2037;CASE_7F6=2038;CASE_7F7=2039;CASE_7F8=2040;CASE_7F9=2041;CASE_7FA=2042;CASE_7FB=2043;CASE_7FC=2044;CASE_80C=2060;CASE_80D=2061;CASE_80E=2062;CASE_80F=2063;CASE_810=2064;CASE_816=2070;CASE_817=2071;CASE_818=2072;CASE_819=2073;CASE_81A=2074;CASE_81B=2075;CASE_81C=2076;CASE_81D=2077;CASE_82A=2090;CASE_82B=2091;CASE_82C=2092;CASE_82D=2093;CASE_82E=2094;CASE_82F=2095;CASE_830=2096;CASE_831=2097;CASE_848=2120;CASE_849=2121;CASE_84A=2122;CASE_84B=2123;CASE_84C=2124;CASE_84D=2125
    */

undefined4 __cdecl st::fn_006686F0(Global_sub_006686F0_param_1Enum param_1)

{
  if (0x7f1 < (int)param_1) {
    switch(param_1) {
    case CASE_7F2:
    case CASE_7F3:
    case CASE_7F4:
    case CASE_7FC:
    case CASE_819:
    case CASE_81B:
    case CASE_81C:
    case CASE_82A:
    case CASE_830:
      goto switchD_006687a8_caseD_7f2;
    case CASE_7F5:
    case CASE_7FB:
      return 7;
    case CASE_7F6:
    case CASE_7F7:
switchD_00668784_caseD_7ee:
      return 10;
    case CASE_7F8:
    case CASE_7F9:
    case CASE_82F:
      return 8;
    case CASE_7FA:
      return 0xb;
    default:
      goto cf_common_exit_006687E7;
    case CASE_80C:
    case CASE_80D:
    case CASE_810:
    case CASE_831:
switchD_0066874d_caseD_38f:
      return 6;
    case CASE_80E:
    case CASE_80F:
      return 5;
    case CASE_816:
    case CASE_817:
    case CASE_818:
    case CASE_848:
      goto cf_common_exit_00668754;
    case CASE_81A:
    case CASE_81D:
    case CASE_82D:
      goto cf_common_exit_00668773;
    case CASE_82B:
    case CASE_82C:
      return 4;
    case CASE_82E:
      return 0xc;
    case CASE_849:
    case CASE_84A:
    case CASE_84B:
    case CASE_84C:
    case CASE_84D:
switchD_00668784_caseD_7d7:
      return 0;
    }
  }
  if (param_1 == 0x7f1) {
switchD_006687a8_caseD_7f2:
    return 3;
  }
  if (0x7d5 < (int)param_1) {
    switch(param_1) {
    case CASE_7D6:
    case CASE_7DD:
    case CASE_7DE:
    case CASE_7E5:
    case CASE_7E7:
    case CASE_7E8:
    case CASE_7EA:
    case CASE_7EC:
      goto cf_common_exit_00668754;
    case CASE_7D7:
    case CASE_7DA:
    case CASE_7DC:
    case CASE_7E4:
    case CASE_7E9:
    case CASE_7EB:
    case CASE_7ED:
      goto switchD_00668784_caseD_7d7;
    default:
      goto cf_common_exit_006687E7;
    case CASE_7E6:
      goto cf_common_exit_00668773;
    case CASE_7EE:
    case CASE_7EF:
    case CASE_7F0:
      goto switchD_00668784_caseD_7ee;
    }
  }
  if (param_1 != 0x7d5) {
    if (0x38b < (int)param_1) {
      if (2000 < (int)param_1) {
        switch(param_1) {
        case CASE_7D1:
        case CASE_7D3:
          goto cf_common_exit_00668773;
        case CASE_7D2:
        case CASE_7D4:
          goto cf_common_exit_00668754;
        default:
cf_common_exit_006687E7:
          return 0xffffffff;
        }
      }
      if (param_1 != 2000) {
        switch(param_1) {
        case CASE_38C:
          goto cf_common_exit_00668754;
        case CASE_38D:
          break;
        case CASE_38E:
          return 9;
        case CASE_38F:
          goto switchD_0066874d_caseD_38f;
        default:
          goto cf_common_exit_006687E7;
        }
      }
cf_common_exit_00668773:
      return 2;
    }
    if (param_1 != 0x38b) {
      switch(param_1) {
      case CASE_320:
      case CASE_321:
      case CASE_384:
      case CASE_385:
      case CASE_386:
      case CASE_387:
      case CASE_38A:
        break;
      default:
        goto cf_common_exit_006687E7;
      case CASE_388:
      case CASE_389:
        goto cf_common_exit_00668773;
      }
    }
  }
cf_common_exit_00668754:
  return 1;
}

// 00668A30 FUN_00668a30
#line 4 "decomp/ST.exe/functions/00668A30/decomp.c"
undefined4 __cdecl st::fn_00668A30(int param_1)

{
  if ((899 < param_1) && ((param_1 < 0x386 || (param_1 == 0x38d)))) {
    return 1;
  }
  return 0;
}

// 00668A70 FUN_00668a70
#line 4 "decomp/ST.exe/functions/00668A70/decomp.c"
undefined4 __cdecl st::fn_00668A70(int param_1)

{
  if ((899 < param_1) && (param_1 < 0x390)) {
    return 1;
  }
  return 0;
}

// 00668AA0 FUN_00668aa0
#line 4 "decomp/ST.exe/functions/00668AA0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00668AA0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_7F6=2038;CASE_7F7=2039;CASE_7F8=2040;CASE_7F9=2041;CASE_7FA=2042;CASE_7FB=2043;CASE_80E=2062;CASE_80F=2063;CASE_810=2064;CASE_819=2073;CASE_81B=2075;CASE_81C=2076;CASE_81D=2077;CASE_82A=2090;CASE_82B=2091;CASE_82C=2092;CASE_82E=2094;CASE_82F=2095

   [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00668AA0_param_2Enum. Cases:
   CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9

   [STDiscriminatedPayloadApplier] Case-local payload view: param_1 == 2 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/Global_FUN_00668aa0_00668AA0_Case_2. The carrier
   ABI remains pointer:/undefined1.

   [STDiscriminatedPayloadApplier] Case-local payload view: param_1 == 4 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/Global_FUN_00668aa0_00668AA0_Case_4. The carrier
   ABI remains pointer:/undefined1.

   [STDiscriminatedPayloadApplier] Case-local payload view: param_1 == 6 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/Global_FUN_00668aa0_00668AA0_Case_6. The carrier
   ABI remains pointer:/undefined1.

   [STDiscriminatedPayloadApplier] Case-local payload view: param_1 == 7 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/Global_FUN_00668aa0_00668AA0_Case_7. The carrier
   ABI remains pointer:/undefined1.

   [STDiscriminatedPayloadApplier] Case-local payload view: param_1 == 8 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/Global_FUN_00668aa0_00668AA0_Case_8. The carrier
   ABI remains pointer:/undefined1.

   [STDiscriminatedPayloadApplier] Case-local payload view: param_1 == 11 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/Global_FUN_00668aa0_00668AA0_Case_B. The carrier
   ABI remains pointer:/undefined1.

   [STDiscriminatedPayloadApplier] Case-local payload view: param_1 == 2063 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/Global_FUN_00668aa0_00668AA0_Case_80F. The
   carrier ABI remains pointer:/undefined1.

   [STDiscriminatedPayloadApplier] Case-local payload view: param_1 == 2064 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/Global_FUN_00668aa0_00668AA0_Case_810. The
   carrier ABI remains pointer:/undefined1.

   [STDiscriminatedPayloadApplier] Case-local payload view: param_1 == 2076 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/Global_FUN_00668aa0_00668AA0_Case_81C. The
   carrier ABI remains pointer:/undefined1.

   [STDiscriminatedPayloadApplier] Case-local payload view: param_1 == 2077 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/Global_FUN_00668aa0_00668AA0_Case_81D. The
   carrier ABI remains pointer:/undefined1.

   [STDiscriminatedPayloadApplier] Case-local payload view: param_1 == 2090 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/Global_FUN_00668aa0_00668AA0_Case_82A. The
   carrier ABI remains pointer:/undefined1.

   [STDiscriminatedPayloadApplier] Case-local payload view: param_1 == 2091 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/Global_FUN_00668aa0_00668AA0_Case_82B. The
   carrier ABI remains pointer:/undefined1.

   [STDiscriminatedPayloadApplier] Case-local payload view: param_1 == 2092 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/Global_FUN_00668aa0_00668AA0_Case_82C. The
   carrier ABI remains pointer:/undefined1. */

undefined4 __cdecl
st::fn_00668AA0(Global_sub_00668AA0_param_1Enum param_1,Global_sub_00668AA0_param_2Enum param_2,
            undefined1 *param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;

  if ((int)param_1 < 0x80e) {
    if (0x80b < (int)param_1) goto switchD_00668c18_caseD_810;
    if (0x7f5 < (int)param_1) {
      switch(param_1) {
      case CASE_7F6:
      case CASE_7F7:
        switch(param_2) {
        case CASE_2:
        case CASE_4:
        case CASE_5:
        case CASE_6:
          goto cf_common_exit_00668C44;
        case CASE_3:
          goto cf_common_exit_00668C64;
        case CASE_7:
        case CASE_8:
        case CASE_9:
          goto cf_common_exit_00668C88;
        default:
          return 0;
        }
      case CASE_7F8:
        switch(param_2) {
        case CASE_0:
        case CASE_2:
        case CASE_3:
        case CASE_4:
          goto cf_common_exit_00668C44;
        case CASE_1:
          goto cf_common_exit_00668C64;
        case CASE_5:
        case CASE_6:
        case CASE_7:
          goto cf_common_exit_00668C88;
        default:
          return 0;
        }
      case CASE_7F9:
        switch(param_2) {
        case CASE_0:
        case CASE_5:
        case CASE_6:
        case CASE_7:
          goto cf_common_exit_00668C88;
        case CASE_1:
          goto cf_common_exit_00668C64;
        case CASE_2:
        case CASE_3:
        case CASE_4:
          goto cf_common_exit_00668C44;
        default:
          return 0;
        }
      case CASE_7FA:
        switch(param_2) {
        case CASE_1:
        case CASE_3:
        case CASE_8:
        case CASE_9:
        case CASE_A:
          goto cf_common_exit_00668C88;
        case CASE_2:
        case CASE_5:
        case CASE_6:
        case CASE_7:
          goto cf_common_exit_00668C44;
        case CASE_4:
          goto cf_common_exit_00668C64;
        default:
          return 0;
        }
      case CASE_7FB:
        goto switchD_00668bab_switchD;
      default:
        return 0;
      }
    }
    if (param_1 != 0x7f5) {
      if ((int)param_1 < 0x38f) {
        if (param_1 != 0x38e) {
          if (param_1 == 0x388) {
            if (param_2 != CASE_1) {
              return 0;
            }
            *param_3 = 1;
            *(undefined4 *)(param_3 + 1) = 10;
            return 1;
          }
          if (param_1 != 0x389) {
            return 0;
          }
          if (param_2 != CASE_1) {
            return 0;
          }
          *param_3 = 1;
          *(undefined4 *)(param_3 + 1) = 5;
          return 1;
        }
        if ((int)param_2 < 6) {
          return 0;
        }
        if (8 < (int)param_2) {
          return 0;
        }
      }
      else {
        if (param_1 != 0x38f) {
          if ((int)param_1 < 0x7ee) {
            return 0;
          }
          if (0x7f0 < (int)param_1) {
            return 0;
          }
          switch(param_2) {
          case CASE_3:
          case CASE_7:
          case CASE_8:
          case CASE_9:
            goto cf_common_exit_00668C88;
          case CASE_4:
          case CASE_5:
          case CASE_6:
            goto cf_common_exit_00668C44;
          default:
            return 0;
          }
        }
        if ((int)param_2 < 4) {
          return 0;
        }
        if (5 < (int)param_2) {
          return 0;
        }
      }
      goto LAB_00668ce2;
    }
    goto switchD_00668bab_switchD;
  }
  switch(param_1) {
  case CASE_80E:
  case CASE_80F:
    if ((int)param_2 < 1) {
      return 0;
    }
    bVar3 = SBORROW4(param_2,4);
    iVar1 = param_2 - CASE_4;
    bVar2 = param_2 == CASE_4;
    goto LAB_00668c3e;
  case CASE_810:
switchD_00668c18_caseD_810:
    if ((int)param_2 < 2) {
      return 0;
    }
    bVar3 = SBORROW4(param_2,5);
    iVar1 = param_2 - CASE_5;
    bVar2 = param_2 == CASE_5;
LAB_00668c3e:
    if (bVar2 || bVar3 != iVar1 < 0) {
cf_common_exit_00668C44:
      *param_3 = 1;
      *(undefined4 *)(param_3 + 1) = 0;
      return 1;
    }
    break;
  case CASE_819:
  case CASE_81B:
  case CASE_81C:
    iVar1 = param_2 - CASE_2;
    goto LAB_00668ce0;
  case CASE_81D:
    iVar1 = param_2 - CASE_1;
LAB_00668ce0:
    if (iVar1 == 0) {
LAB_00668ce2:
      *param_3 = 1;
      *(undefined4 *)(param_3 + 1) = 1;
      return 1;
    }
    break;
  case CASE_82A:
    if (param_2 == CASE_2) {
cf_common_exit_00668C64:
      *param_3 = 3;
      *(undefined2 *)(param_3 + 1) = 0;
      return 1;
    }
    break;
  case CASE_82B:
    goto LAB_00668c86;
  case CASE_82C:
    if (param_2 == CASE_2) {
cf_common_exit_00668CC0:
      *param_3 = 1;
      *(undefined4 *)(param_3 + 1) = 0x3fffffff;
      return 1;
    }
LAB_00668c86:
    if (param_2 == CASE_3) {
cf_common_exit_00668C88:
      *param_3 = 1;
      *(undefined4 *)(param_3 + 1) = 0xffffffff;
      return 1;
    }
    break;
  case CASE_82E:
    switch(param_2) {
    case CASE_2:
      goto cf_common_exit_00668CC0;
    case CASE_3:
    case CASE_6:
    case CASE_7:
    case CASE_8:
      goto cf_common_exit_00668C44;
    case CASE_4:
    case CASE_9:
    case CASE_A:
    case CASE_B:
      goto cf_common_exit_00668C88;
    case CASE_5:
      goto cf_common_exit_00668C64;
    default:
      break;
    }
  case CASE_82F:
    switch(param_2) {
    case CASE_4:
      goto cf_common_exit_00668CC0;
    case CASE_5:
      goto cf_common_exit_00668C44;
    case CASE_6:
      goto cf_common_exit_00668C88;
    case CASE_7:
      goto cf_common_exit_00668C64;
    }
  }
  return 0;
switchD_00668bab_switchD:
  switch(param_2);
}

// 0066AB60 FUN_0066ab60
#line 1 "decomp/ST.exe/functions/0066AB60/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0066AB60 -> 004357F0 @ 0066AB8E */

int st::fn_0066AB60(char playerId,byte *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  AiPlrClassTy *this;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  bool bVar10;

  if (((param_2 != nullptr) && (param_3 != nullptr)) &&
     (g_allPlayers_007FA174 != nullptr)) {
    this = st::fn_00401DC5(playerId);
    if ((this != nullptr) &&
       (iVar3 = st::fn_004017C6(this,param_2,param_3), iVar3 != 0)) {
      return iVar3;
    }
    if ((g_allPlayers_007FA174 != nullptr) &&
       (iVar4 = st::fn_004021F8(playerId), iVar4 != 0)) {
      uVar2 = *(uint *)(iVar4 + 0xc);
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        if (uVar2 < *(uint *)(iVar4 + 0xc)) {
          piVar5 = (int *)(*(int *)(iVar4 + 8) * uVar2 + *(int *)(iVar4 + 0x1c));
        }
        else {
          piVar5 = nullptr;
        }
        if ((*piVar5 != 0) && (iVar6 = st::fn_00405902(*piVar5), iVar6 != 0)) {
          pbVar9 = (byte *)(iVar6 + 0x3b);
          pbVar7 = param_2;
          do {
            bVar1 = *pbVar7;
            bVar10 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_0066ac18:
              iVar8 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_0066ac1d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar10 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_0066ac18;
            pbVar7 = pbVar7 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_0066ac1d:
          if (iVar8 == 0) {
            return iVar6;
          }
        }
      }
    }
  }
  return 0;
}

// 0066AC80 FUN_0066ac80
#line 4 "decomp/ST.exe/functions/0066AC80/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:0: previous_type=/undefined4
   parameter=/char Evidence: entry-use width=/char; unmasked_dword_reads=0; evidence=0066AC86 MOV
   ECX,dword ptr [EBP + 0x8]; first-use mask or exact narrow callee formal
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: previous_type=/uint
   parameter=/ushort Evidence: entry-use width=/ushort; unmasked_dword_reads=0; evidence=0066AC83
   MOV EAX,dword ptr [EBP + 0xc]; first-use mask or exact narrow callee formal
   [STAbiConsistencyApplier] stack_parameter_width_revert target=parameter:0: parameter=/undefined4
   Evidence: previous automatic narrow-width proof no longer qualifies; restoring generated baseline
   /undefined4
   [STAbiConsistencyApplier] stack_parameter_width_revert target=parameter:1: parameter=/uint
   Evidence: previous automatic narrow-width proof no longer qualifies; restoring generated baseline
   /uint */

int st::fn_0066AC80(char param_1,ushort param_2)

{
  STGroupBoatC *pSVar1;
  int iVar2;

  pSVar1 = st::fn_00405CF9(param_1,param_2);
  if ((pSVar1 != nullptr) && (iVar2 = st::fn_00405902((int)pSVar1), iVar2 != 0)) {
    return iVar2;
  }
  return 0;
}

