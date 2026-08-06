#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0063.cpp

// 00630000 FUN_00630000
#line 4 "decomp/ST.exe/functions/00630000/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall st::fn_00630000(void *this,int param_1)

{
  STT3DSprC *this_00;
  int iVar1;
  int *piVar2;
  int local_8;

  piVar2 = (int *)((int)this + 0x1e5);
  local_8 = 5;
  do {
    if (*piVar2 != 0) {
      iVar1 = st::fn_004038F5(param_1,*(int *)(*piVar2 + 0x1c));
      *(int *)(*piVar2 + 0x2c) = iVar1;
      this_00 = *(STT3DSprC **)(*piVar2 + 0x10);
      if (this_00 != nullptr) {
        st::fn_00401064(this_00,'\x0e',*(uint *)(*piVar2 + 0x2c));
        st::fn_004030BC(this_00,'\x0e');
        iVar1 = *piVar2;
        st::fn_004045D9
                  (this_00,(float)*(int *)(iVar1 + 0x20) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(iVar1 + 0x24) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(iVar1 + 0x28) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      }
    }
    piVar2 = piVar2 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

// 006300E0 FUN_006300e0
#line 4 "decomp/ST.exe/functions/006300E0/decomp.c"
int __fastcall st::fn_006300E0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;

  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x1e5);
  iVar3 = 5;
  do {
    if ((int *)*piVar2 != nullptr) {
      iVar1 = iVar1 + *(int *)*piVar2;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar1;
}

// 00630110 FUN_00630110
#line 4 "decomp/ST.exe/functions/00630110/decomp.c"
int __thiscall st::fn_00630110(void *this,char param_1)

{
  int iVar1;

  iVar1 = 0;
  if (STField<int>(this,0x1fa) != 2) {
    iVar1 = st::fn_00403A12((int)this);
    st::fn_004055E7(param_1,iVar1);
    STField<undefined4>(this,0x1fa) = 2;
  }
  return iVar1;
}

// 00630160 FUN_00630160
#line 4 "decomp/ST.exe/functions/00630160/decomp.c"
undefined4 __thiscall st::fn_00630160(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;

  uVar2 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)((int)this + param_1 * 4 + 0x1e5);
  if ((((piVar1 != nullptr) && (piVar1[8] == param_2)) && (piVar1[9] == param_3)) &&
     (0 < *piVar1)) {
    uVar2 = 1;
  }
  return uVar2;
}

// 006301B0 FUN_006301b0
#line 4 "decomp/ST.exe/functions/006301B0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006301B0 -> 0062FCA0 @ 006301B7

   [STPrototypeApplier] Propagated return.
   Evidence: 006301B0 returns return of STRubbishC::sub_0062FCA0 @ 006301BD */

int __thiscall st::fn_006301B0(void *this,AnonShape_0062FCA0_22A9EE35 *param_1)

{
  int iVar1;

  iVar1 = st::fn_00403EDB(this,param_1);
  return iVar1;
}

// 006301D0 FUN_006301d0
#line 4 "decomp/ST.exe/functions/006301D0/decomp.c"
int __thiscall st::fn_006301D0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;

  iVar2 = 0;
  iVar3 = 0;
  piVar4 = (int *)((int)this + 0x1e5);
  do {
    if ((*piVar4 != 0) && ((iVar1 = *(int *)(*piVar4 + 4), iVar1 == 3 || (iVar1 == 6)))) {
      *param_1 = iVar3;
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 5);
  return iVar2;
}

// 00630220 FUN_00630220
#line 4 "decomp/ST.exe/functions/00630220/decomp.c"
undefined4 __thiscall st::fn_00630220(void *this,int param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x1e5);
  if ((iVar1 != 0) && ((iVar1 = *(int *)(iVar1 + 4), iVar1 == 3 || (iVar1 == 6)))) {
    return 1;
  }
  return 0;
}

// 00630340 FUN_00630340
#line 4 "decomp/ST.exe/functions/00630340/decomp.c"
undefined4 __thiscall
st::fn_00630340(void *this,int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((-1 < param_1) && (param_1 < 5)) &&
      (iVar1 = *(int *)((int)this + param_1 * 4 + 0x1e5), iVar1 != 0)) &&
     ((*(int *)(iVar1 + 4) == 3 || (*(int *)(iVar1 + 4) == 6)))) {
    if ((param_3 != nullptr) &&
       ((param_2 != nullptr && (param_4 != nullptr)))) {
      *param_3 = *(undefined4 *)(iVar1 + 0x10);
      *param_2 = *(int *)((int)this + param_1 * 4 + 0x1e5) + 0x14;
      *param_4 = *(undefined4 *)(*(int *)((int)this + param_1 * 4 + 0x1e5) + 8);
      *(undefined4 *)(*(int *)((int)this + param_1 * 4 + 0x1e5) + 0x10) = 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}

// 006303E0 FUN_006303e0
#line 4 "decomp/ST.exe/functions/006303E0/decomp.c"
bool __thiscall st::fn_006303E0(void *this,int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x1e5);
  if (iVar1 != 0) {
    *param_3 = *(undefined4 *)(iVar1 + 0x10);
    *param_2 = *(int *)((int)this + param_1 * 4 + 0x1e5) + 0x14;
  }
  return iVar1 != 0;
}

// 00630840 CreateSTManRuin
#line 4 "decomp/ST.exe/functions/00630840/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA99C>00402AEF

   [STObjectFactoryApplier] Central object factory for 0x0146 (ST_OBJECT_ST_MAN_RUIN).
   Evidence: registry[79] at 007CA998 stores type 0x0146 and executable pointer 00402AEF; allocation
   size 117 uniquely matches /STManRuinC; calls named constructor STManRuinC::STManRuinC */

STManRuinC * __cdecl st::fn_00630840(void)

{
  STManRuinC *this;

  this = (STManRuinC *)st::fn_006B04D0(0x75);
  if (this != nullptr) {
    g_manRuin_008117B0 = st::fn_00403D0A(this);
    return g_manRuin_008117B0;
  }
  g_manRuin_008117B0 = nullptr;
  return nullptr;
}

// 006308B0 FUN_006308b0
#line 4 "decomp/ST.exe/functions/006308B0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006308B0 returns return of sub_006E60A0 @ 006308D6 */

int __fastcall st::fn_006308B0(void *param_1)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = STField<undefined4>(param_1,8);
  local_18 = 0;
  local_14 = 10;
  iVar1 = st::fn_006E60A0(param_1,local_24);
  return iVar1;
}

// 00630FF0 FUN_00630ff0
#line 4 "decomp/ST.exe/functions/00630FF0/decomp.c"
undefined4 st::fn_00630FF0(void)

{
  return 1;
}

// 006315D0 FUN_006315d0
#line 4 "decomp/ST.exe/functions/006315D0/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void __thiscall st::fn_006315D0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  STManRuinC *this_00;
  int iVar2;
  short *psVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  undefined4 local_1c;
  undefined4 local_10;
  STManRuinC *local_c;
  DArrayTy *local_8;

  local_8 = STField<DArrayTy *>(this,0x38);
  if ((local_8 != nullptr) && (iVar7 = STField<int>(this,0x34), iVar7 != 0)) {
    iVar2 = (g_worldGrid.sizeX * param_3 + param_2) * (int)g_worldGrid.sizeY + param_1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_4 == 1) {
      if (*(char *)(iVar7 + iVar2) != '\0') {
        return;
      }
    }
    else {
      if (param_4 != 4) {
        return;
      }
      iVar8 = g_worldGrid.sizeY + iVar2;
      if ((((*(char *)(iVar7 + iVar2) == '\0') && (*(char *)(iVar7 + 1 + iVar2) == '\0')) &&
          (*(char *)(iVar7 + iVar8) == '\0')) && (*(char *)(iVar7 + 1 + iVar8) == '\0')) {
        return;
      }
    }
    uVar6 = local_8->count;
    uVar9 = 0;
    if (0 < (int)uVar6) {
      bVar11 = uVar6 != 0;
      do {
        if (bVar11) {
          psVar3 = DArrayAt<short>(local_8, uVar9);
        }
        else {
          psVar3 = nullptr;
        }
        iVar7 = (int)*psVar3;
        if (psVar3[3] == 1) {
          if ((iVar7 == param_1) && (psVar3[1] == param_2)) {
            sVar1 = psVar3[2];
joined_r0x006316fc:
            if (sVar1 == param_3) {
LAB_00631713:
              if ((int)uVar9 < 0) {
                return;
              }
              if (uVar9 < uVar6) {
                puVar4 = DArrayAt<undefined4>(local_8, uVar9);
              }
              else {
                puVar4 = nullptr;
              }
              puVar10 = puVar4;
              psVar3 = &local_24;
              local_c = this;
              for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
                *(undefined4 *)psVar3 = *puVar10;
                puVar10 = puVar10 + 1;
                psVar3 = psVar3 + 2;
              }
              st::fn_006E91D0(g_sT3DSMAPContext_00807598,(int *)puVar4[4]);
              this_00 = local_c;
              iVar7 = st::fn_0040461A(local_c,uVar9);
              if (iVar7 == 0) {
                return;
              }
              st::fn_00401D57
                        (this_00,local_24,local_22,local_20,local_1c,(int)local_1e,local_10);
              this_00->field_0044 = 1;
              if ((this_00->field_0048 == 0) ||
                 (puVar5 = st::fn_00405C9F
                                     (this_00,this_00->field_0040,this_00->field_004C,1,1,0),
                 puVar5 != nullptr)) {
                this_00->field_0044 = 2;
              }
              uVar6 = st::fn_00405ECA(this_00,&this_00->field_0040,this_00->field_0061);
              if (((uVar6 == 0) && (this_00->field_0048 != 0)) && (this_00->field_0061 != 0)) {
                st::fn_006E8BA0(g_sT3DSMAPContext_00807598,this_00->field_0061);
              }
              this_00->field_0061 = 0xffffffff;
              return;
            }
          }
        }
        else {
          if (((((iVar7 == param_1) && (psVar3[1] == param_2)) && (psVar3[2] == param_3)) ||
              (((iVar7 + 1 == param_1 && (psVar3[1] == param_2)) && (psVar3[2] == param_3)))) ||
             (((iVar7 == param_1 && (psVar3[1] + 1 == param_2)) && (psVar3[2] == param_3))))
          goto LAB_00631713;
          if ((iVar7 + 1 == param_1) && (psVar3[1] + 1 == param_2)) {
            sVar1 = psVar3[2];
            goto joined_r0x006316fc;
          }
        }
        uVar9 = uVar9 + 1;
        bVar11 = uVar9 < uVar6;
        if ((int)uVar6 <= (int)uVar9) {
          return;
        }
      } while( true );
    }
  }
  return;
}

// 00631910 FUN_00631910
#line 4 "decomp/ST.exe/functions/00631910/decomp.c"
int __thiscall
st::fn_00631910(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  DArrayTy *pDVar1;
  int iVar2;
  undefined4 local_28 [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  memset(local_28, 0, 0x24); /* compiler bulk-zero initialization */
  local_28[1] = param_2;
  iVar2 = 0;
  local_18 = param_5;
  local_c = param_8;
  local_28[2] = param_3;
  local_28[3] = param_4;
  local_28[0] = param_1;
  local_14 = param_6;
  local_10 = param_7;
  local_8 = 0;
  if (STField<int>(this,0x69) == 0) {
    pDVar1 = st::fn_006AE290(nullptr,10,0x24,10);
    STField<DArrayTy *>(this,0x69) = pDVar1;
  }
  if (STField<DArrayTy *>(this,0x69) != nullptr) {
    iVar2 = st::fn_006AE1C0(STField<DArrayTy *>(this,0x69),local_28);
    if (iVar2 < 0) goto LAB_006319a2;
  }
  st::fn_0040457A(this,param_5,param_6,(byte)param_2,param_1,param_3,iVar2);
LAB_006319a2:
  return iVar2 + 1;
}

// 006319E0 FUN_006319e0
#line 4 "decomp/ST.exe/functions/006319E0/decomp.c"
undefined4 __thiscall st::fn_006319E0(void *this,uint param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;

  uVar2 = 0;
  iVar3 = STField<int>(this,0x69);
  if (iVar3 != 0) {
    uVar1 = *(uint *)(iVar3 + 0xc);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (((param_1 < uVar1) &&
        (puVar5 = (undefined4 *)(*(int *)(iVar3 + 8) * param_1 + *(int *)(iVar3 + 0x1c)),
        puVar5 != nullptr)) && (puVar5[2] == param_2)) {
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      return 1;
    }
    uVar4 = 0;
    if (0 < (int)uVar1) {
      bVar6 = uVar1 != 0;
      do {
        if (((bVar6) &&
            (puVar5 = (undefined4 *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c)),
            puVar5 != nullptr)) && (puVar5[2] == param_2)) {
          for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          uVar2 = 1;
        }
        iVar3 = STField<int>(this,0x69);
        uVar4 = uVar4 + 1;
        bVar6 = uVar4 < *(uint *)(iVar3 + 0xc);
      } while ((int)uVar4 < (int)*(uint *)(iVar3 + 0xc));
    }
  }
  return uVar2;
}

// 00631AA0 FUN_00631aa0
#line 4 "decomp/ST.exe/functions/00631AA0/decomp.c"
int __thiscall
st::fn_00631AA0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  DArrayTy *pDVar1;
  int iVar2;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;

  memset(local_30, 0, 0x29); /* compiler bulk-zero initialization */
  local_30[1] = param_2;
  local_30[0] = param_1;
  local_30[2] = param_3;
  local_30[3] = param_4;
  local_20 = param_5;
  local_18 = param_7;
  local_1c = param_6;
  local_14 = param_8;
  if (STField<int>(this,0x6d) == 0) {
    pDVar1 = st::fn_006AE290(nullptr,10,0x29,10);
    STField<DArrayTy *>(this,0x6d) = pDVar1;
  }
  if (STField<DArrayTy *>(this,0x6d) != nullptr) {
    iVar2 = st::fn_006AE1C0(STField<DArrayTy *>(this,0x6d),local_30);
    return iVar2 + 1;
  }
  return 1;
}

// 00631B60 FUN_00631b60
#line 4 "decomp/ST.exe/functions/00631B60/decomp.c"
undefined4 __thiscall st::fn_00631B60(void *this,uint param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;

  uVar2 = 0;
  iVar3 = STField<int>(this,0x6d);
  if (iVar3 != 0) {
    uVar1 = *(uint *)(iVar3 + 0xc);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (((param_1 < uVar1) &&
        (puVar5 = (undefined4 *)(*(int *)(iVar3 + 8) * param_1 + *(int *)(iVar3 + 0x1c)),
        puVar5 != nullptr)) && (puVar5[1] == param_2)) {
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      *(undefined1 *)puVar5 = 0;
      return 1;
    }
    uVar4 = 0;
    if (0 < (int)uVar1) {
      bVar6 = uVar1 != 0;
      do {
        if (((bVar6) &&
            (puVar5 = (undefined4 *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c)),
            puVar5 != nullptr)) && (puVar5[1] == param_2)) {
          for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          *(undefined1 *)puVar5 = 0;
          uVar2 = 1;
        }
        iVar3 = STField<int>(this,0x6d);
        uVar4 = uVar4 + 1;
        bVar6 = uVar4 < *(uint *)(iVar3 + 0xc);
      } while ((int)uVar4 < (int)*(uint *)(iVar3 + 0xc));
    }
  }
  return uVar2;
}

// 00631C20 FUN_00631c20
#line 4 "decomp/ST.exe/functions/00631C20/decomp.c"
void __thiscall
st::fn_00631C20(void *this,int param_1,int param_2,byte param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  bool bVar8;

  if (STField<int>(this,0x6d) != 0) {
    iVar3 = *(int *)(STField<int>(this,0x6d) + 0xc);
    uVar7 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = STField<int>(this,0x6d);
        if (((((uVar7 < *(uint *)(iVar5 + 0xc)) &&
              (puVar6 = (uint *)(*(int *)(iVar5 + 8) * uVar7 + *(int *)(iVar5 + 0x1c)),
              puVar6 != nullptr)) &&
             (iVar5 = st::fn_006ACED8(param_1,param_2,puVar6[3],puVar6[4]), iVar5 < (int)puVar6[6])) &&
            (*puVar6 < 8)) &&
           ((g_playSystem_00802A38 == nullptr ||
            (g_bulkInitializedRecords_008087C7[*puVar6].field_0022 < 8)))) {
          bVar1 = (byte)*puVar6;
          if (DAT_00808a8f == '\0') {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_3 == bVar1) {
LAB_00631d60:
              iVar5 = 0;
            }
            else {
              uVar4 = (uint)param_3;
              bVar2 = g_playerRelationMatrix[uVar4][bVar1];
              if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar4] == 0)) {
                iVar5 = -2;
              }
              else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][uVar4] == 0)) {
                iVar5 = -1;
              }
              else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar4] == 1)) {
                iVar5 = 1;
              }
              else {
                if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][uVar4] != 1)) goto LAB_00631d60;
                iVar5 = 2;
              }
            }
            bVar8 = iVar5 < 0;
          }
          else {
            bVar8 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                    g_bulkInitializedRecords_008087C7[param_3].field_0023;
          }
          if (bVar8) {
            STField<undefined4>(puVar6,0x25) = param_5;
            *(byte *)(puVar6 + 8) = 1;
            STField<undefined4>(puVar6,0x21) = param_6;
          }
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar3);
    }
  }
  return;
}

// 00631E00 FUN_00631e00
#line 4 "decomp/ST.exe/functions/00631E00/decomp.c"
undefined4 __thiscall
st::fn_00631E00(void *this,uint param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,int *param_7)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_8;

  iVar5 = STField<int>(this,0x69);
  local_8 = 0;
  uVar2 = 0;
  if (iVar5 != 0) {
    uVar1 = *(uint *)(iVar5 + 0xc);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((((param_1 < uVar1) &&
         (piVar3 = (int *)(*(int *)(iVar5 + 8) * param_1 + *(int *)(iVar5 + 0x1c)),
         piVar3 != nullptr)) && (piVar3[2] == param_2)) &&
       ((*piVar3 == 0xbe || (*piVar3 == 0xa8)))) {
      *param_3 = *(undefined4 *)(piVar3[7] + 0x266);
      *param_4 = *(undefined4 *)(piVar3[7] + 0x26a);
      *param_5 = *(undefined4 *)(piVar3[7] + 0x26e);
      *param_6 = *(undefined4 *)(piVar3[7] + 0x292);
      if (param_7 != nullptr) {
        *param_7 = piVar3[7];
      }
      return 1;
    }
    uVar4 = 0;
    if (0 < (int)uVar1) {
      bVar6 = uVar1 != 0;
      do {
        if (((bVar6) &&
            (piVar3 = (int *)(*(int *)(iVar5 + 8) * uVar4 + *(int *)(iVar5 + 0x1c)),
            piVar3 != nullptr)) &&
           ((piVar3[2] == param_2 && ((*piVar3 == 0xbe || (*piVar3 == 0xa8)))))) {
          *param_3 = *(undefined4 *)(piVar3[7] + 0x266);
          *param_4 = *(undefined4 *)(piVar3[7] + 0x26a);
          *param_5 = *(undefined4 *)(piVar3[7] + 0x26e);
          *param_6 = *(undefined4 *)(piVar3[7] + 0x292);
          if (param_7 != nullptr) {
            *param_7 = piVar3[7];
          }
          local_8 = 1;
        }
        uVar4 = uVar4 + 1;
        iVar5 = STField<int>(this,0x69);
        bVar6 = uVar4 < *(uint *)(iVar5 + 0xc);
        uVar2 = local_8;
      } while ((int)uVar4 < (int)*(uint *)(iVar5 + 0xc));
    }
  }
  return uVar2;
}

// 00631F90 FUN_00631f90
#line 4 "decomp/ST.exe/functions/00631F90/decomp.c"
void __fastcall st::fn_00631F90(AnonShape_00631F90_0DA5B9BC *param_1)

{
  if ((DArrayTy *)param_1->field_0069 != nullptr) {
    st::fn_006AE110((DArrayTy *)param_1->field_0069);
    param_1->field_0069 = 0;
  }
  if ((DArrayTy *)param_1->field_006D != nullptr) {
    st::fn_006AE110((DArrayTy *)param_1->field_006D);
    param_1->field_006D = 0;
  }
  return;
}

// 00631FD0 FUN_00631fd0
#line 4 "decomp/ST.exe/functions/00631FD0/decomp.c"
undefined4 * st::fn_00631FD0(void)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)st::fn_0072E530(0xb1);
  if (puVar1 != nullptr) {
    puVar1 = st::fn_00401447(puVar1);
    return puVar1;
  }
  return nullptr;
}

// 00632000 FUN_00632000
#line 4 "decomp/ST.exe/functions/00632000/decomp.c"
undefined4 * __fastcall st::fn_00632000(undefined4 *param_1)

{

  memset(param_1, 0, 0xb1); /* compiler bulk-zero initialization */
  return param_1;
}

// 00632030 FUN_00632030
#line 4 "decomp/ST.exe/functions/00632030/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00632030_param_1Enum. Cases:
   CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_28=40;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115
    */

void st::fn_00632030(Global_sub_00632030_param_1Enum param_1,undefined4 *param_2,undefined4 *param_3,
                 undefined4 *param_4,undefined4 *param_5)

{
  *param_5 = 0;
  switch(param_1) {
  case CASE_19:
  case CASE_1A:
  case CASE_1B:
  case CASE_1C:
  case CASE_1D:
  case CASE_1E:
  case CASE_1F:
  case CASE_20:
  case CASE_21:
  case CASE_22:
  case CASE_23:
  case CASE_24:
  case CASE_25:
  case CASE_28:
  case CASE_6B:
    *param_2 = 0x96;
    *param_3 = 0x96;
    *param_4 = 0xbe;
    *param_5 = 0xffffffa6;
    return;
  default:
    *param_2 = 0x96;
    *param_3 = 0x96;
    *param_4 = 0x96;
    *param_5 = 0xffffffe2;
    return;
  case CASE_53:
    *param_2 = 0x10e;
    *param_3 = 0x10e;
    *param_4 = 0xdc;
    *param_5 = 0xffffffc9;
    return;
  case CASE_54:
    *param_2 = 0x8c;
    *param_3 = 0x8c;
    *param_4 = 0x6e;
    *param_5 = 0xffffffa6;
    return;
  case CASE_55:
  case CASE_56:
  case CASE_57:
  case CASE_58:
  case CASE_59:
    *param_2 = 0x96;
    *param_3 = 0x96;
    *param_4 = 0xd2;
    *param_5 = 0xffffffa6;
    return;
  case CASE_5A:
    *param_2 = 0x8c;
    *param_3 = 0xaa;
    *param_4 = 0xb4;
    *param_5 = 0xffffffa6;
    return;
  case CASE_5B:
    *param_2 = 0xe6;
    *param_3 = 0xe6;
    *param_4 = 0xdc;
    *param_5 = 0xffffffdd;
    return;
  case CASE_5C:
  case CASE_60:
    *param_2 = 0x10e;
    *param_3 = 0x10e;
    *param_4 = 0xe6;
    *param_5 = 0xffffffa6;
    return;
  case CASE_5D:
  case CASE_6D:
  case CASE_73:
    *param_2 = 0xe6;
    *param_3 = 0xe6;
    *param_4 = 0x8c;
    *param_5 = 0xffffffdd;
    return;
  case CASE_5E:
  case CASE_61:
    *param_2 = 0xaa;
    *param_3 = 0xaa;
    *param_4 = 0xe6;
    *param_5 = 0xffffffa6;
    return;
  case CASE_5F:
    *param_2 = 0x140;
    *param_3 = 0x140;
    *param_4 = 0xd2;
    *param_5 = 0xffffffe2;
    return;
  case CASE_62:
  case CASE_70:
    *param_2 = 0xf2;
    *param_3 = 0xf2;
    *param_4 = 0xc3;
    *param_5 = 0xffffffa6;
    return;
  case CASE_63:
    *param_2 = 0xdc;
    *param_3 = 0xdc;
    *param_4 = 0x73;
    *param_5 = 0xffffffa6;
    return;
  case CASE_64:
    *param_2 = 0x127;
    *param_3 = 0x10e;
    *param_4 = 0xd2;
    *param_5 = 0xffffffbf;
    return;
  case CASE_65:
  case CASE_68:
  case CASE_69:
  case CASE_6A:
  case CASE_72:
    *param_2 = 0x96;
    *param_3 = 0x96;
    *param_4 = 0xd2;
    *param_5 = 0xffffffa6;
    return;
  case CASE_66:
    *param_2 = 0xaf;
    *param_3 = 0xaf;
    *param_4 = 0xd2;
    *param_5 = 0xffffffa6;
    return;
  case CASE_67:
  case CASE_71:
    *param_2 = 0xaa;
    *param_3 = 0xaa;
    *param_4 = 0xd2;
    *param_5 = 0xffffffa6;
    return;
  case CASE_6C:
    *param_2 = 0xf0;
    *param_3 = 0xf0;
    *param_4 = 0x73;
    *param_5 = 0xffffffa6;
    return;
  case CASE_6E:
    *param_2 = 0xe6;
    *param_3 = 0xe6;
    *param_4 = 0xcd;
    *param_5 = 0xffffffab;
    return;
  }
}

// 006324C0 FUN_006324c0
#line 4 "decomp/ST.exe/functions/006324C0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_006324C0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_006324C0(void *this,Global_sub_006324C0_param_1Enum param_1,
            Global_sub_00632030_param_1Enum param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  st::fn_00402C16(param_2,&param_2,&local_8,&local_c,&local_10);
  switch(param_1) {
  case CASE_0:
    st::fn_00403C92(this,DAT_007d1a38,DAT_007d1a3c,DAT_007d1a40,CASE_0,0x7d1a38);
    return;
  case CASE_1:
    st::fn_00403C92(this,DAT_007d1a88,DAT_007d1a8c,DAT_007d1a90,CASE_1,0x7d1a88);
    return;
  case CASE_2:
    _DAT_007d1ae8 = param_2;
    _DAT_007d1aec = local_8;
    _DAT_007d1af0 = local_c;
    _DAT_007d1b24 = local_10;
    st::fn_00403C92(this,DAT_007d1ad8,DAT_007d1adc,DAT_007d1ae0,CASE_2,0x7d1ad8);
    return;
  case CASE_3:
    st::fn_00403C92(this,DAT_007d1b28,DAT_007d1b2c,DAT_007d1b30,CASE_3,0x7d1b28);
    return;
  case CASE_4:
    st::fn_00403C92(this,DAT_007d1b60,DAT_007d1b64,DAT_007d1b68,CASE_4,0x7d1b60);
  }
  return;
}

// 00632650 FUN_00632650
#line 4 "decomp/ST.exe/functions/00632650/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSwitchEnumApplier] Switch target param_4 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00632650_param_4Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4
   [STAbiConsistencyApplier] stack_parameter_scalar_role target=parameter:5: parameter=/uint
   Evidence: generic pointer has a scalar-only incoming lifetime before its first slot overwrite:
   frame_offset=0x14, direct_reads=3, scalar_operations=2, signed_comparisons=0, unsigned_bounds=2,
   pointer_dereferences=0, slot_reused=false; sites=00632685 incoming load: MOV EAX,dword ptr [EBP +
   0x14] | 00632699 scalar operation: LEA EAX,[EDI + EDX*0x1] | 006326E9 incoming load: MOV
   ECX,dword ptr [EBP + 0x14] | 006326FF scalar operation: LEA ECX,[EBP + -0x3c] | 00632718 incoming
   load: MOV EDX,dword ptr [EBP + 0x14]

   [STDiscriminatedPayloadApplier] Case-local payload view: param_4 == 1 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/Global_FUN_00632650_00632650_Case_1. The carrier
   ABI remains /uint.

   [STDiscriminatedPayloadApplier] Case-local payload view: param_4 == 2 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/Global_FUN_00632650_00632650_Case_2. The carrier
   ABI remains /uint.

   [STDiscriminatedPayloadApplier] Case-local payload view: param_4 == 3 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/Global_FUN_00632650_00632650_Case_3. The carrier
   ABI remains /uint.

   [STDiscriminatedPayloadApplier] Case-local payload view: param_4 == 4 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/Global_FUN_00632650_00632650_Case_4. The carrier
   ABI remains /uint. */

undefined4 __thiscall
st::fn_00632650(void *this,uint param_1,int param_2,undefined4 param_3,
            Global_sub_00632650_param_4Enum param_4,uint param_5)

{
  DArrayTy *pDVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_40 [15];

  if (*(int *)this != 0) {
    st::fn_004049EE(this);
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_2 == 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = 1;
  }
  memset(local_40, 0, 0x39); /* compiler bulk-zero initialization */
  uVar5 = 0;
  switch(param_4) {
  case CASE_0:
  case CASE_2:
  case CASE_4:
    pDVar1 = st::fn_006AE290(nullptr,param_1 * param_2,0x39,10);
    *(DArrayTy **)this = pDVar1;
    uVar5 = param_1 * param_2;
    break;
  case CASE_1:
    pDVar1 = st::fn_006AE290(nullptr,param_1 + param_2,0x39,10);
    *(DArrayTy **)this = pDVar1;
    uVar5 = param_1;
    break;
  case CASE_3:
    pDVar1 = st::fn_006AE290(nullptr,(param_1 + 4) * param_2 + 1,0x39,10);
    *(DArrayTy **)this = pDVar1;
    uVar5 = param_1 * param_2;
  }
  pDVar1 = *(DArrayTy **)this;
  if (pDVar1 == nullptr) {
    uVar2 = 0;
  }
  else {
    switch(param_4) {
    case CASE_0:
    case CASE_1:
      uVar5 = (param_1 - 1) + param_2;
      if (param_4 != CASE_1) {
        uVar5 = param_1 - 1;
      }
      st::fn_006AE140(pDVar1,uVar5,local_40);
      uVar5 = *(uint *)(*(int *)this + 0xc);
      STField<undefined4>(this,0xd) = param_3;
      STField<undefined1>(this,4) = 1;
      STField<uint>(this,0x19) = param_1;
      STField<int>(this,0x1d) = param_2;
      STField<Global_sub_00632650_param_4Enum>(this,0x11) = param_4;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<undefined4>(this,0xa1) = *(undefined4 *)(param_5 + 0x10);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<undefined4>(this,0xa5) = *(undefined4 *)(param_5 + 0x14);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<undefined4>(this,0xa9) = *(undefined4 *)(param_5 + 0x18);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<undefined4>(this,0x15) = *(undefined4 *)(param_5 + 0x48);
      break;
    case CASE_2:
      st::fn_006AE140(pDVar1,param_1 * param_2 - 1,local_40);
      uVar5 = *(uint *)(*(int *)this + 0xc);
      STField<int>(this,0x1d) = param_2;
      STField<undefined1>(this,4) = 1;
      STField<uint>(this,0x19) = param_1;
      STField<undefined4>(this,0x11) = 2;
      STField<undefined4>(this,0xd) = param_3;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<undefined4>(this,0xa1) = *(undefined4 *)(param_5 + 0x10);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<undefined4>(this,0xa5) = *(undefined4 *)(param_5 + 0x14);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<undefined4>(this,0xa9) = *(undefined4 *)(param_5 + 0x18);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<undefined4>(this,0xad) = *(undefined4 *)(param_5 + 0x4c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<undefined4>(this,0x15) = *(undefined4 *)(param_5 + 0x48);
      break;
    case CASE_3:
      uVar5 = (param_1 + 4) * param_2 + 1;
      STField<uint>(this,0x21) = uVar5;
      STField<undefined4>(this,0x11) = 3;
      st::fn_006AE140(pDVar1,uVar5,local_40);
      STField<undefined1>(this,4) = 1;
      STField<undefined4>(this,0x19) = *(undefined4 *)param_5;
      STField<undefined4>(this,0x1d) = *(undefined4 *)(param_5 + 4);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<undefined4>(this,0x9d) = *(undefined4 *)(param_5 + 0x10);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<undefined4>(this,0xa1) = *(undefined4 *)(param_5 + 0x14);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<undefined4>(this,0xa5) = *(undefined4 *)(param_5 + 0x18);
      STField<undefined4>(this,0x25) = *(undefined4 *)(param_5 + 8);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<undefined4>(this,0x29) = *(undefined4 *)(param_5 + 0xc);
      STField<undefined4>(this,0x41) = 0;
      STField<undefined4>(this,0x45) = 0x3f490fdb;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<float>(this,0x6d) = *(float *)(param_5 + 0x30) * _DAT_0079d1a4;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<float>(this,0x69) = *(float *)(param_5 + 0x2c) * _DAT_0079d1a4;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<undefined4>(this,0x81) = *(undefined4 *)(param_5 + 0x24);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<undefined4>(this,0x85) = *(undefined4 *)(param_5 + 0x28);
      STField<undefined4>(this,0x89) = 0x3f860a92;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<undefined4>(this,0x61) = *(undefined4 *)(param_5 + 0x1c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<undefined4>(this,0x65) = *(undefined4 *)(param_5 + 0x20);
      break;
    case CASE_4:
      st::fn_006AE140(pDVar1,param_1 * param_2 - 1,local_40);
      uVar5 = *(uint *)(*(int *)this + 0xc);
      STField<int>(this,0x1d) = param_2;
      STField<undefined1>(this,4) = 1;
      STField<uint>(this,0x19) = param_1;
      STField<undefined4>(this,0x11) = 4;
      STField<undefined4>(this,0xd) = param_3;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<undefined4>(this,0xa1) = *(undefined4 *)(param_5 + 0x10);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<undefined4>(this,0xa5) = *(undefined4 *)(param_5 + 0x14);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<undefined4>(this,0xa9) = *(undefined4 *)(param_5 + 0x18);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<undefined4>(this,0x15) = *(undefined4 *)(param_5 + 0x48);
    }
    st::fn_00405EFC(this);
    st::fn_004035C1(this);
    uVar2 = 1;
    if (STField<char>(this,4) == '\0') {
      uVar4 = 0;
      if (0 < (int)uVar5) {
        do {
          iVar3 = *(int *)this;
          if (uVar4 < *(uint *)(iVar3 + 0xc)) {
            iVar3 = *(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c);
          }
          else {
            iVar3 = 0;
          }
          uVar4 = uVar4 + 1;
          *(undefined4 *)(iVar3 + 4) = 0xffffffff;
        } while ((int)uVar4 < (int)uVar5);
      }
      return 1;
    }
  }
  return uVar2;
}

// 00632E30 FUN_00632e30
#line 4 "decomp/ST.exe/functions/00632E30/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall st::fn_00632E30(AnonShape_00632E30_A9A0278F *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  float *pfVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  int local_14;
  float local_10;
  undefined4 local_c;
  float local_8;

  local_c = 0;
  local_8 = 0.0;
  switch(param_1->field_0011) {
  case 0:
    param_1->field_005D = DAT_007d1a54;
    local_8 = _DAT_0079c5a4 / (float)param_1->field_0019;
    param_1->field_0061 = DAT_007d1a58;
    param_1->field_0075 = DAT_007d1a64;
    param_1->field_0079 = DAT_007d1a68;
    param_1->field_0065 = DAT_007d1a5c;
    param_1->field_006D = DAT_007d1a60;
    param_1->field_007D = _DAT_007d1a6c * _DAT_0079d1a4;
    param_1->field_0081 = _DAT_007d1a70 * _DAT_0079d1a4;
    param_1->field_0085 = DAT_007d1a74;
    param_1->field_0089 = DAT_007d1a78;
    goto LAB_00632f7e;
  case 1:
    local_8 = _DAT_0079c5a4 / (float)param_1->field_0019;
    fVar1 = _DAT_007d1aa4 * _DAT_0079d1a4;
    param_1->field_0061 = 0;
    param_1->field_005D = fVar1;
    param_1->field_0075 = _DAT_007d1ab4 * _DAT_0079d1a4;
    param_1->field_0079 = _DAT_007d1ab8 * _DAT_0079d1a4;
    param_1->field_0065 = _DAT_007d1aac * _DAT_0079d1a4;
    param_1->field_006D = _DAT_007d1ab0 * _DAT_0079d1a4;
    param_1->field_0069 = _DAT_007d1ab4 * _DAT_0079d1a4;
    param_1->field_007D = _DAT_007d1abc * _DAT_0079d1a4;
    param_1->field_0081 = _DAT_007d1ac0 * _DAT_0079d1a4;
    param_1->field_0085 = DAT_007d1ac4;
    param_1->field_0089 = DAT_007d1ac8;
LAB_00632f7e:
    local_c = 1;
    param_1->field_008D = 0x40c90fdb;
    param_1->field_0091 = 0x40c90fdb;
    break;
  case 2:
    param_1->field_005D = DAT_007d1af4;
    local_8 = _DAT_0079c5a4 / (float)param_1->field_0019;
    param_1->field_0061 = DAT_007d1af8;
    fVar1 = _DAT_0079034c;
    param_1->field_0075 = _DAT_007d1b04 * _DAT_0079d1a4;
    param_1->field_0079 = _DAT_007d1b08 * _DAT_0079d1a4;
    param_1->field_0065 = _DAT_007d1afc * _DAT_0079d1a4;
    param_1->field_006D = _DAT_007d1b00 * _DAT_0079d1a4;
    param_1->field_007D = _DAT_007d1b0c * _DAT_0079d1a4;
    param_1->field_0081 = _DAT_007d1b10 * _DAT_0079d1a4;
    param_1->field_0085 = DAT_007d1b14;
    param_1->field_0089 = DAT_007d1b18;
    if (*(int *)param_1 != 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar7 = *(int *)(*(int *)param_1 + 0xc);
      uVar11 = 0;
      if (0 < iVar7) {
        do {
          iVar12 = *(int *)param_1;
          if (uVar11 < *(uint *)(iVar12 + 0xc)) {
            iVar12 = *(int *)(iVar12 + 8) * uVar11 + *(int *)(iVar12 + 0x1c);
          }
          else {
            iVar12 = 0;
          }
          if ((0 < (int)uVar11) && ((int)uVar11 % param_1->field_0019 == 0)) {
            fVar1 = _DAT_0079034c;
          }
          if (iVar12 != 0) {
            *(float *)(iVar12 + 0x21) = fVar1;
            fVar1 = fVar1 + local_8;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iVar7);
      }
    }
    local_10 = 0.0;
    if (0 < param_1->field_001D) {
      pfVar8 = (float *)&param_1->field_0x21;
      do {
        fVar1 = (float)param_1->field_0091 - (float)(int)local_10 * param_1->field_007D;
        if (fVar1 < _DAT_0079034c) {
          if (_DAT_0079034c < *pfVar8) {
            uVar11 = param_1->field_0019 * (int)local_10;
            iVar7 = param_1->field_0019 + uVar11;
            if (*(int *)param_1 != 0) {
              for (; (int)uVar11 < iVar7; uVar11 = uVar11 + 1) {
                iVar12 = *(int *)param_1;
                if ((uVar11 < *(uint *)(iVar12 + 0xc)) &&
                   (iVar12 = *(int *)(iVar12 + 8) * uVar11 + *(int *)(iVar12 + 0x1c), iVar12 != 0))
                {
                  *(undefined4 *)(iVar12 + 8) = 0;
                }
              }
            }
          }
        }
        else if (*pfVar8 <= _DAT_0079034c) {
          uVar11 = param_1->field_0019 * (int)local_10;
          iVar7 = param_1->field_0019 + uVar11;
          if (*(int *)param_1 != 0) {
            for (; (int)uVar11 < iVar7; uVar11 = uVar11 + 1) {
              iVar12 = *(int *)param_1;
              if ((uVar11 < *(uint *)(iVar12 + 0xc)) &&
                 (iVar12 = *(int *)(iVar12 + 8) * uVar11 + *(int *)(iVar12 + 0x1c), iVar12 != 0)) {
                *(undefined4 *)(iVar12 + 8) = 1;
              }
            }
          }
        }
        local_10 = (float)((int)local_10 + 1);
        *pfVar8 = fVar1;
        pfVar8 = pfVar8 + 1;
      } while ((int)local_10 < param_1->field_001D);
    }
    break;
  case 3:
    pvVar5 = st::fn_006AAC70(param_1->field_0019 << 3);
    fVar1 = (float)param_1->field_006D - param_1->field_0069;
    param_1->field_0039 = (int)pvVar5;
    param_1->field_0031 = 0;
    bVar4 = fVar1 != _DAT_0079034c;
    param_1->field_0035 = 0;
    if (bVar4) {
      iVar7 = param_1->field_0019;
      local_10 = 0.0;
      fVar2 = (float)param_1->field_0089;
      if (0 < iVar7) {
        do {
          *(float *)((int)pvVar5 + (int)local_10 * 4) =
               (float)(int)local_10 * (fVar1 / (float)(iVar7 + -1)) + param_1->field_0069;
          *(float *)(param_1->field_0039 + ((int)local_10 + param_1->field_0019) * 4) =
               (float)(int)local_10 * (fVar2 / (float)iVar7);
          pvVar5 = (void *)param_1->field_0039;
          if (param_1->field_0045 < *(float *)((int)pvVar5 + (int)local_10 * 4)) {
            param_1->field_0035 = param_1->field_0035 + 1;
          }
          else {
            param_1->field_0031 = param_1->field_0031 + 1;
          }
          local_10 = (float)((int)local_10 + 1);
        } while ((int)local_10 < param_1->field_0019);
      }
    }
    bVar4 = param_1->field_0081 != _DAT_0079034c;
    param_1->field_0071 = 0x40490fdb;
    if (bVar4) {
      lVar13 = st::fn_0072E288();
      local_14 = (int)lVar13;
      if (local_14 < 1) {
        local_14 = 1;
      }
      param_1->field_0081 = _DAT_0079d1a4 / (float)local_14;
    }
    iVar7 = param_1->field_001D;
    param_1->field_0079 = 0;
    fVar1 = _DAT_0079d1a4 / (float)iVar7;
    param_1->field_0099 = iVar7 * 4;
    param_1->field_007D = fVar1;
    param_1->field_0075 = _DAT_0079c5a4 / (float)(iVar7 * 3);
    if (*(int *)param_1 != 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar7 = *(int *)(*(int *)param_1 + 0xc);
      uVar11 = 0;
      if (0 < iVar7) {
        do {
          iVar12 = *(int *)param_1;
          if (uVar11 < *(uint *)(iVar12 + 0xc)) {
            puVar6 = (undefined4 *)(*(int *)(iVar12 + 8) * uVar11 + *(int *)(iVar12 + 0x1c));
          }
          else {
            puVar6 = nullptr;
          }
          *(undefined1 *)(puVar6 + 3) = 0;
          STField<undefined4>(puVar6,0x21) = 0;
          if ((int)uVar11 < param_1->field_001D * 2) {
            uVar9 = param_1->field_0025;
          }
          else {
            uVar9 = param_1->field_0029;
          }
          *puVar6 = uVar9;
          if (uVar11 == iVar7 - 1U) {
            *puVar6 = param_1->field_0025;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iVar7);
      }
    }
    uVar11 = g_playSystem_00802A38->field_00E4;
    param_1->field_002D = 0;
    param_1->field_0005 = uVar11;
    break;
  case 4:
    param_1->field_005D = DAT_007d1b7c;
    local_8 = _DAT_0079c5a4 / (float)param_1->field_0019;
    param_1->field_0061 = DAT_007d1b80;
    param_1->field_0075 = _DAT_007d1b8c * _DAT_0079d1a4;
    param_1->field_0079 = _DAT_007d1b90 * _DAT_0079d1a4;
    param_1->field_0065 = _DAT_007d1b84 * _DAT_0079d1a4;
    param_1->field_006D = _DAT_007d1b88 * _DAT_0079d1a4;
    param_1->field_007D = _DAT_007d1b94 * _DAT_0079d1a4;
    param_1->field_0081 = _DAT_007d1b98 * _DAT_0079d1a4;
    param_1->field_0085 = DAT_007d1b9c;
    param_1->field_0089 = DAT_007d1ba0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((*(int *)param_1 != 0) && (iVar7 = *(int *)(*(int *)param_1 + 0xc), iVar7 != 0)) {
      uVar11 = 0;
      local_10 = 0.0;
      local_8 = _DAT_0079c5a4 / (float)param_1->field_001D;
      if (0 < param_1->field_001D) {
        do {
          iVar12 = *(int *)param_1;
          if ((uVar11 < *(uint *)(iVar12 + 0xc)) &&
             (iVar12 = *(int *)(iVar12 + 8) * uVar11 + *(int *)(iVar12 + 0x1c), iVar12 != 0)) {
            *(float *)(iVar12 + 0x21) = local_10;
            *(undefined4 *)(iVar12 + 0x25) = param_1->field_006D;
            *(undefined4 *)(iVar12 + 8) = 1;
          }
          uVar10 = param_1->field_001D + uVar11;
          iVar12 = *(int *)param_1;
          if ((uVar10 < *(uint *)(iVar12 + 0xc)) &&
             (iVar12 = *(int *)(iVar12 + 8) * uVar10 + *(int *)(iVar12 + 0x1c), iVar12 != 0)) {
            *(float *)(iVar12 + 0x21) = local_10;
            *(undefined4 *)(iVar12 + 0x25) = param_1->field_006D;
            param_1->field_0071 = param_1->field_006D;
            uVar10 = st::fn_0072E6C0();
            *(undefined4 *)(iVar12 + 8) = 1;
            *(undefined4 *)(iVar12 + 0x1d) = 7;
            *(int *)(iVar12 + 0x19) = (int)uVar10 % 7;
          }
          local_10 = local_10 + local_8;
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < param_1->field_001D);
      }
      for (uVar11 = param_1->field_001D * 2; (int)uVar11 < iVar7; uVar11 = uVar11 + 1) {
        iVar12 = *(int *)param_1;
        if (uVar11 < *(uint *)(iVar12 + 0xc)) {
          iVar12 = *(int *)(iVar12 + 8) * uVar11 + *(int *)(iVar12 + 0x1c);
        }
        else {
          iVar12 = 0;
        }
        uVar10 = st::fn_0072E6C0();
        local_8 = (float)((int)uVar10 % 0x168) * _DAT_0079d1a8;
        if (iVar12 != 0) {
          *(float *)(iVar12 + 0x21) = local_8;
          uVar10 = st::fn_0072E6C0();
          fVar1 = (float)param_1->field_0079;
          fVar2 = (float)param_1->field_006D;
          fVar3 = (float)param_1->field_006D;
          *(undefined4 *)(iVar12 + 0x19) = 0;
          *(float *)(iVar12 + 0x25) =
               ((fVar1 - fVar2) * (float)((int)uVar10 % (iVar7 + 1))) / (float)iVar7 + fVar3;
          uVar10 = g_playSystem_00802A38->field_00E4;
          *(undefined4 *)(iVar12 + 8) = 1;
          *(uint *)(iVar12 + 0x35) = uVar10;
        }
      }
    }
  }
  iVar7 = param_1->field_0011;
  if (((iVar7 == 0) || (iVar7 == 1)) && (*(int *)param_1 != 0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar11 = *(uint *)(*(int *)param_1 + 0xc);
    if (iVar7 == 1) {
      iVar7 = param_1->field_001D;
      iVar12 = 0;
      uVar11 = uVar11 - iVar7;
      fVar1 = _DAT_0079c5a4 / (float)iVar7;
      fVar2 = fVar1 * _DAT_00790784;
      uVar10 = uVar11;
      if (0 < iVar7) {
        do {
          iVar7 = *(int *)param_1;
          if ((uVar10 < *(uint *)(iVar7 + 0xc)) &&
             (iVar7 = *(int *)(iVar7 + 8) * uVar10 + *(int *)(iVar7 + 0x1c), iVar7 != 0)) {
            *(float *)(iVar7 + 0x21) = fVar2;
            fVar2 = fVar2 + fVar1;
            *(undefined4 *)(iVar7 + 8) = 1;
            *(undefined4 *)(iVar7 + 0x19) = 3;
          }
          iVar12 = iVar12 + 1;
          uVar10 = uVar10 + 1;
        } while (iVar12 < param_1->field_001D);
      }
    }
    uVar10 = 0;
    fVar1 = _DAT_0079034c;
    if (0 < (int)uVar11) {
      do {
        iVar7 = *(int *)param_1;
        if ((uVar10 < *(uint *)(iVar7 + 0xc)) &&
           (iVar7 = *(int *)(iVar7 + 8) * uVar10 + *(int *)(iVar7 + 0x1c), iVar7 != 0)) {
          *(float *)(iVar7 + 0x21) = fVar1;
          fVar1 = fVar1 + local_8;
          *(undefined4 *)(iVar7 + 8) = 1;
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar11);
    }
  }
  return local_c;
}

// 00633770 FUN_00633770
#line 4 "decomp/ST.exe/functions/00633770/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall st::fn_00633770(void *this,int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  bool bVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_06;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_07;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_08;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_09;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0_10;
  float10 fVar24;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST1_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST1_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST1_02;
  longlong lVar25;
  int local_18;
  uint local_14;

  switch(STField<undefined4>(this,0x11)) {
  case 0:
    uVar13 = 0;
    if (*(int *)this != 0) {
      iVar14 = *(int *)(*(int *)this + 0xc);
      fVar23 = (float10)(g_playSystem_00802A38->field_00E4 - STField<int>(this,5));
      fVar19 = (float10)fsin(fVar23 * (float10)STField<float>(this,0x5d));
      fVar24 = (float10)_DAT_0079cd88;
      fVar7 = (float10)_DAT_007901c0;
      fVar1 = STField<float>(this,0x75);
      fVar6 = STField<float>(this,0x65);
      fVar2 = STField<float>(this,0x65);
      fVar20 = (float10)fcos(fVar23 * (float10)STField<float>(this,0x61));
      fVar23 = (float10)_DAT_0079cd88;
      fVar8 = (float10)_DAT_007901c0;
      fVar3 = STField<float>(this,0x79);
      fVar4 = STField<float>(this,0x6d);
      fVar5 = STField<float>(this,0x6d);
      if (0 < iVar14) {
        do {
          iVar18 = *(int *)this;
          if ((uVar13 < *(uint *)(iVar18 + 0xc)) &&
             (iVar18 = *(int *)(iVar18 + 8) * uVar13 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) {
            fVar21 = (float10)fcos((float10)STField<float>(this,0x7d) +
                                   (float10)*(float *)(iVar18 + 0x21) +
                                   (float10)(float)(((float10)fVar1 - (float10)fVar6) *
                                                    (fVar19 + fVar24) * fVar7 + (float10)fVar2));
            fVar22 = (float10)fcos((float10)STField<float>(this,0x81) +
                                   (float10)*(float *)(iVar18 + 0x21) +
                                   (float10)(float)(((float10)fVar3 - (float10)fVar4) *
                                                    (fVar20 + fVar23) * fVar8 + (float10)fVar5));
            fVar22 = fVar22 * (float10)STField<float>(this,0x91);
            fsin(fVar22);
            fcos(fVar21 * (float10)STField<float>(this,0x8d));
            lVar25 = st::fn_0072E288();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            fsin(extraout_ST1);
            *(int *)(iVar18 + 0xd) = (int)lVar25 + STField<int>(this,0x95);
            lVar25 = st::fn_0072E288();
            fcos((float10)(float)fVar22);
            *(int *)(iVar18 + 0x11) = (int)lVar25 + STField<int>(this,0x99);
            lVar25 = st::fn_0072E288();
            *(int *)(iVar18 + 0x15) = (int)lVar25 + STField<int>(this,0x9d);
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < iVar14);
        return;
      }
    }
    break;
  case 1:
    fcos((float10)param_1 * (float10)_DAT_0079d1c4);
    fsin((float10)param_1 * (float10)_DAT_0079d1c4);
    if (STField<float>(this,0x79) < STField<float>(this,0x8d)) {
      STField<float>(this,0x8d) =
           (STField<float>(this,0x8d) - STField<float>(this,0x79)) +
           STField<float>(this,0x6d);
    }
    if (*(int *)this != 0) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = STField<int>(this,0x1d);
      iVar14 = param_1 * 2;
      uVar13 = *(int *)(*(int *)this + 0xc) - param_1;
      fVar1 = _DAT_0079d1a4 - (STField<float>(this,0x91) + STField<float>(this,0x91));
      local_14 = 0;
      if (0 < param_1) {
        local_18 = 0;
        uVar10 = uVar13;
        do {
          iVar18 = *(int *)this;
          if ((uVar10 < *(uint *)(iVar18 + 0xc)) &&
             (iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) {
            fVar24 = ((float10)local_18 * (float10)_DAT_0079d1a4) / (float10)param_1 +
                     (float10)STField<float>(this,0x8d) + (float10)(fVar1 / (float)iVar14);
            fVar23 = ((float10)STField<float>(this,0x69) - (float10)STField<float>(this,0x65))
                     + (float10)STField<float>(this,0x65);
            fsin(fVar23);
            fcos(fVar24);
            fsin(fVar24);
            lVar25 = st::fn_0072E288();
            *(int *)(iVar18 + 0xd) = (int)lVar25 + STField<int>(this,0x95);
            lVar25 = st::fn_0072E288();
            fcos((float10)(float)fVar23);
            *(int *)(iVar18 + 0x11) = (int)lVar25 + STField<int>(this,0x99);
            lVar25 = st::fn_0072E288();
            *(int *)(iVar18 + 0x15) = (int)lVar25 + STField<int>(this,0x9d);
          }
          local_18 = local_18 + 2;
          local_14 = local_14 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = STField<int>(this,0x1d);
          uVar10 = uVar10 + 1;
        } while ((int)local_14 < param_1);
      }
      local_14 = 0;
      if (0 < (int)uVar13) {
        do {
          iVar14 = *(int *)this;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((local_14 < *(uint *)(iVar14 + 0xc)) &&
             (iVar14 = *(int *)(iVar14 + 8) * local_14 + *(int *)(iVar14 + 0x1c), iVar14 != 0)) {
            fVar24 = (float10)*(float *)(iVar14 + 0x21) + (float10)STField<float>(this,0x8d);
            fVar23 = (float10)fsin(((float10)STField<int>(this,0x1d) * (float10)(int)local_14 *
                                   (float10)_DAT_0079c5a4) / (float10)STField<int>(this,0x19) +
                                   (float10)STField<float>(this,0x91));
            fVar23 = ((float10)STField<float>(this,0x69) - (float10)STField<float>(this,0x65))
                     * (fVar23 + (float10)_DAT_0079cd88) * (float10)_DAT_007901c0 +
                     (float10)STField<float>(this,0x65);
            fsin(fVar23);
            fcos(fVar24);
            fsin(fVar24);
            lVar25 = st::fn_0072E288();
            *(int *)(iVar14 + 0xd) = (int)lVar25 + STField<int>(this,0x95);
            lVar25 = st::fn_0072E288();
            fcos((float10)(float)fVar23);
            *(int *)(iVar14 + 0x11) = (int)lVar25 + STField<int>(this,0x99);
            lVar25 = st::fn_0072E288();
            *(int *)(iVar14 + 0x15) = (int)lVar25 + STField<int>(this,0x9d);
          }
          local_14 = local_14 + 1;
        } while ((int)local_14 < (int)uVar13);
      }
    }
    STField<float>(this,0x8d) = STField<float>(this,0x89) + STField<float>(this,0x8d);
    STField<float>(this,0x91) = STField<float>(this,0x85) + STField<float>(this,0x91);
    if (STField<float>(this,0x81) != _DAT_0079034c) {
      fVar1 = STField<float>(this,0x81) + STField<float>(this,0x69);
      STField<float>(this,0x69) = fVar1;
      if (STField<float>(this,0x81) <= _DAT_0079034c) {
        if (fVar1 <= STField<float>(this,0x65)) {
          STField<float>(this,0x81) = -STField<float>(this,0x81);
          return;
        }
      }
      else if (STField<float>(this,0x75) <= fVar1) {
        STField<float>(this,0x81) = -STField<float>(this,0x81);
        return;
      }
    }
    break;
  case 2:
    fcos((float10)param_1 * (float10)_DAT_0079d1c4);
    fsin((float10)param_1 * (float10)_DAT_0079d1c4);
    fVar24 = (float10)STField<float>(this,0x91);
    if (STField<float>(this,0x79) < STField<float>(this,0x8d)) {
      STField<float>(this,0x8d) =
           (STField<float>(this,0x8d) - STField<float>(this,0x79)) +
           STField<float>(this,0x6d);
    }
    if (STField<float>(this,0x75) < STField<float>(this,0x91)) {
      STField<float>(this,0x91) =
           (STField<float>(this,0x91) - STField<float>(this,0x75)) +
           STField<float>(this,0x65);
    }
    local_14 = 0;
    if (0 < STField<int>(this,0x1d)) {
      pfVar11 = (float *)((int)this + 0x21);
      do {
        fVar1 = (float)(int)local_14 * STField<float>(this,0x7d);
        fVar6 = STField<float>(this,0x91) - fVar1;
        if (fVar6 < _DAT_0079034c) {
          if (_DAT_0079034c < *pfVar11) {
            if (*pfVar11 < STField<float>(this,0x75)) {
              fVar6 = (STField<float>(this,0x75) + STField<float>(this,0x91)) - fVar1;
            }
            if (fVar6 < _DAT_0079034c) {
              uVar13 = STField<int>(this,0x19) * local_14;
              iVar14 = STField<int>(this,0x19) + uVar13;
              if (*(int *)this != 0) {
                for (; (int)uVar13 < iVar14; uVar13 = uVar13 + 1) {
                  iVar18 = *(int *)this;
                  if ((uVar13 < *(uint *)(iVar18 + 0xc)) &&
                     (iVar18 = *(int *)(iVar18 + 8) * uVar13 + *(int *)(iVar18 + 0x1c), iVar18 != 0)
                     ) {
                    *(undefined4 *)(iVar18 + 8) = 0;
                  }
                }
              }
            }
          }
        }
        else if (*pfVar11 <= _DAT_0079034c) {
          uVar13 = STField<int>(this,0x19) * local_14;
          iVar14 = STField<int>(this,0x19) + uVar13;
          if (*(int *)this != 0) {
            for (; (int)uVar13 < iVar14; uVar13 = uVar13 + 1) {
              iVar18 = *(int *)this;
              if ((uVar13 < *(uint *)(iVar18 + 0xc)) &&
                 (iVar18 = *(int *)(iVar18 + 8) * uVar13 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) {
                *(undefined4 *)(iVar18 + 8) = 1;
              }
            }
          }
        }
        local_14 = local_14 + 1;
        *pfVar11 = fVar6;
        pfVar11 = pfVar11 + 1;
      } while ((int)local_14 < STField<int>(this,0x1d));
    }
    if (*(int *)this != 0) {
      iVar14 = *(int *)(*(int *)this + 0xc);
      uVar13 = 0;
      if (0 < iVar14) {
        do {
          if (STField<int>(this,0x19) != 0) {
            fVar24 = (float10)*(float *)((int)this +
                                        ((int)uVar13 / STField<int>(this,0x19)) * 4 + 0x21);
          }
          iVar18 = *(int *)this;
          if ((uVar13 < *(uint *)(iVar18 + 0xc)) &&
             (iVar18 = *(int *)(iVar18 + 8) * uVar13 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) {
            fVar23 = (float10)*(float *)(iVar18 + 0x21) + (float10)STField<float>(this,0x8d);
            fsin(fVar24);
            fcos(fVar23);
            fsin(fVar23);
            lVar25 = st::fn_0072E288();
            *(int *)(iVar18 + 0xd) = (int)lVar25 + STField<int>(this,0x95);
            lVar25 = st::fn_0072E288();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            fcos(extraout_ST0);
            *(int *)(iVar18 + 0x11) = (int)lVar25 + STField<int>(this,0x99);
            lVar25 = st::fn_0072E288();
            *(int *)(iVar18 + 0x15) = (int)lVar25 + STField<int>(this,0x9d);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            fVar24 = extraout_ST0_00;
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < iVar14);
      }
    }
    STField<float>(this,0x8d) =
         (float)param_2 * STField<float>(this,0x89) * _DAT_0079d078 +
         STField<float>(this,0x8d);
    STField<float>(this,0x91) = STField<float>(this,0x85) + STField<float>(this,0x91);
    return;
  case 3:
    uVar13 = 0;
    bVar9 = false;
    fcos((float10)param_1 * (float10)_DAT_0079d1c4);
    fsin((float10)param_1 * (float10)_DAT_0079d1c4);
    switch(STField<undefined4>(this,0x2d)) {
    case 0:
      iVar14 = *(int *)this;
      if (iVar14 != 0) {
        uVar13 = *(uint *)(iVar14 + 0xc);
        fVar1 = (float)(g_playSystem_00802A38->field_00E4 - STField<int>(this,5)) *
                STField<float>(this,0x81);
        if (fVar1 < STField<float>(this,0x71)) {
          if (_DAT_0079034c < fVar1) {
            uVar10 = STField<int>(this,0x1d) * 2 - 1;
            if (uVar10 < uVar13) {
              iVar14 = *(int *)(iVar14 + 8) * uVar10 + *(int *)(iVar14 + 0x1c);
            }
            else {
              iVar14 = 0;
            }
            *(undefined4 *)(iVar14 + 8) = 1;
            *(float *)(iVar14 + 0x21) = fVar1 + STField<float>(this,0x41);
            iVar14 = *(int *)this;
            if (uVar13 - 1 < *(uint *)(iVar14 + 0xc)) {
              iVar14 = *(int *)(iVar14 + 8) * (uVar13 - 1) + *(int *)(iVar14 + 0x1c);
            }
            else {
              iVar14 = 0;
            }
            *(undefined4 *)(iVar14 + 8) = 1;
            *(float *)(iVar14 + 0x21) = STField<float>(this,0x41) - fVar1;
          }
          lVar25 = st::fn_0072E288();
          iVar14 = (int)lVar25;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          fVar1 = (float)(extraout_ST0_01 - (float10)iVar14 * (float10)STField<float>(this,0x75));
          if (iVar14 < 1) {
            if (*(int *)(*(int *)this + 0xc) == 0) {
              iVar14 = 0;
            }
            else {
              iVar14 = *(int *)(*(int *)this + 0x1c);
            }
            *(undefined4 *)(iVar14 + 8) = 1;
            *(undefined4 *)(iVar14 + 0x21) = STField<undefined4>(this,0x41);
          }
          else {
            iVar18 = 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = iVar14;
            if (0 < iVar14) {
              do {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_2 = param_2 + -1;
                if (iVar18 % 3 == 0) {
                  uVar10 = iVar18 / 3;
                  iVar17 = *(int *)this;
                  if (uVar10 < *(uint *)(iVar17 + 0xc)) {
                    iVar17 = *(int *)(iVar17 + 8) * uVar10 + *(int *)(iVar17 + 0x1c);
                  }
                  else {
                    iVar17 = 0;
                  }
                  *(undefined4 *)(iVar17 + 8) = 1;
                  *(float *)(iVar17 + 0x21) =
                       (float)param_2 * STField<float>(this,0x75) + STField<float>(this,0x41)
                       + fVar1;
                  if (iVar14 != STField<int>(this,0x1d)) {
                    iVar17 = *(int *)this;
                    uVar10 = STField<int>(this,0x1d) / 2 + uVar10;
                    if (uVar10 < *(uint *)(iVar17 + 0xc)) {
                      iVar17 = *(int *)(iVar17 + 8) * uVar10 + *(int *)(iVar17 + 0x1c);
                    }
                    else {
                      iVar17 = 0;
                    }
                    *(undefined4 *)(iVar17 + 8) = 1;
                    *(float *)(iVar17 + 0x21) =
                         STField<float>(this,0x41) -
                         ((float)param_2 * STField<float>(this,0x75) + fVar1);
                  }
                }
                else {
                  iVar17 = iVar18 % 3 + (iVar18 / 3) * 2;
                  uVar10 = iVar17 + STField<int>(this,0x1d) * 2;
                  iVar16 = *(int *)this;
                  if (uVar10 < *(uint *)(iVar16 + 0xc)) {
                    iVar16 = *(int *)(iVar16 + 8) * uVar10 + *(int *)(iVar16 + 0x1c);
                  }
                  else {
                    iVar16 = 0;
                  }
                  fVar6 = (float)param_2;
                  *(undefined4 *)(iVar16 + 8) = 1;
                  *(float *)(iVar16 + 0x21) =
                       fVar6 * STField<float>(this,0x75) + STField<float>(this,0x41) + fVar1;
                  uVar10 = STField<int>(this,0x99) + iVar17;
                  iVar17 = *(int *)this;
                  if (uVar10 < *(uint *)(iVar17 + 0xc)) {
                    iVar16 = *(int *)(iVar17 + 8) * uVar10;
                    iVar17 = *(int *)(iVar17 + 0x1c);
                    *(undefined4 *)(iVar16 + 8 + iVar17) = 1;
                    *(float *)(iVar16 + iVar17 + 0x21) =
                         STField<float>(this,0x41) -
                         (fVar6 * STField<float>(this,0x75) + fVar1);
                  }
                  else {
                    uRam00000008 = 1;
                    fRam00000021 = STField<float>(this,0x41) -
                                   (fVar6 * STField<float>(this,0x75) + fVar1);
                  }
                }
                iVar18 = iVar18 + 1;
              } while (iVar18 <= iVar14);
            }
          }
        }
        else {
          uVar10 = 0;
          bVar9 = true;
          if (0 < (int)uVar13) {
            do {
              iVar14 = *(int *)this;
              if (uVar10 < *(uint *)(iVar14 + 0xc)) {
                iVar14 = *(int *)(iVar14 + 8) * uVar10 + *(int *)(iVar14 + 0x1c);
              }
              else {
                iVar14 = 0;
              }
              uVar10 = uVar10 + 1;
              *(undefined4 *)(iVar14 + 8) = 0;
            } while ((int)uVar10 < (int)uVar13);
          }
          local_14 = 0;
          if (0 < STField<int>(this,0x1d)) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = 2;
            do {
              iVar14 = *(int *)this;
              if (local_14 < *(uint *)(iVar14 + 0xc)) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar14 = *(int *)(iVar14 + 8) * local_14 + *(int *)(iVar14 + 0x1c);
              }
              else {
                iVar14 = 0;
              }
              fVar1 = STField<float>(this,0x75);
              *(undefined4 *)(iVar14 + 8) = 1;
              *(float *)(iVar14 + 0x21) = (float)(int)local_14 * fVar1 * _DAT_007904fc;
              iVar14 = *(int *)this;
              uVar10 = (STField<int>(this,0x1d) + local_14) * 2;
              if (uVar10 < *(uint *)(iVar14 + 0xc)) {
                iVar14 = *(int *)(iVar14 + 8) * uVar10 + *(int *)(iVar14 + 0x1c);
              }
              else {
                iVar14 = 0;
              }
              fVar1 = STField<float>(this,0x75);
              *(undefined4 *)(iVar14 + 8) = 1;
              *(float *)(iVar14 + 0x21) = (float)(param_1 + -1) * fVar1;
              uVar10 = (STField<int>(this,0x1d) + local_14) * 2 + 1;
              iVar14 = *(int *)this;
              if (uVar10 < *(uint *)(iVar14 + 0xc)) {
                iVar14 = *(int *)(iVar14 + 8) * uVar10 + *(int *)(iVar14 + 0x1c);
              }
              else {
                iVar14 = 0;
              }
              fVar6 = (float)param_1;
              local_14 = local_14 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = param_1 + 3;
              fVar1 = STField<float>(this,0x75);
              *(undefined4 *)(iVar14 + 8) = 1;
              *(float *)(iVar14 + 0x21) = fVar6 * fVar1;
            } while ((int)local_14 < STField<int>(this,0x1d));
          }
        }
        uVar10 = 0;
        if (0 < (int)uVar13) {
          do {
            iVar14 = *(int *)this;
            if (((uVar10 < *(uint *)(iVar14 + 0xc)) &&
                (iVar14 = *(int *)(iVar14 + 8) * uVar10 + *(int *)(iVar14 + 0x1c), iVar14 != 0)) &&
               (*(int *)(iVar14 + 8) == 1)) {
              fVar1 = STField<float>(this,0x45);
              fVar24 = (float10)*(float *)(iVar14 + 0x21) + (float10)STField<float>(this,0x41);
              fsin((float10)fVar1);
              fcos(fVar24);
              fsin(fVar24);
              lVar25 = st::fn_0072E288();
              *(int *)(iVar14 + 0xd) = (int)lVar25 + STField<int>(this,0x8d);
              lVar25 = st::fn_0072E288();
              fcos((float10)fVar1);
              *(int *)(iVar14 + 0x11) = (int)lVar25 + STField<int>(this,0x91);
              lVar25 = st::fn_0072E288();
              *(int *)(iVar14 + 0x15) = (int)lVar25 + STField<int>(this,0x95);
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)uVar13);
        }
        if (bVar9) {
          STField<undefined4>(this,0x2d) = 1;
          uVar13 = g_playSystem_00802A38->field_00E4;
          STField<undefined4>(this,9) = 0xf;
          STField<uint>(this,5) = uVar13;
          return;
        }
      }
      break;
    case 1:
      if (*(int *)this != 0) {
        iVar14 = *(int *)(*(int *)this + 0xc);
        uVar13 = g_playSystem_00802A38->field_00E4 - STField<int>(this,5);
        fVar1 = (float)uVar13 * STField<float>(this,0x61) + STField<float>(this,0x79);
        if (STField<uint>(this,9) <= uVar13) {
          iVar18 = STField<int>(this,0x1d);
          uVar13 = 0;
          if (0 < iVar18) {
            do {
              iVar17 = *(int *)this;
              if (uVar13 < *(uint *)(iVar17 + 0xc)) {
                iVar16 = *(int *)(iVar17 + 8) * uVar13 + *(int *)(iVar17 + 0x1c);
              }
              else {
                iVar16 = 0;
              }
              if (iVar18 + uVar13 < *(uint *)(iVar17 + 0xc)) {
                iVar18 = *(int *)(iVar17 + 8) * (iVar18 + uVar13) + *(int *)(iVar17 + 0x1c);
              }
              else {
                iVar18 = 0;
              }
              *(undefined4 *)(iVar18 + 0x21) = *(undefined4 *)(iVar16 + 0x21);
              *(undefined4 *)(iVar18 + 8) = 1;
              iVar18 = *(int *)this;
              uVar10 = (STField<int>(this,0x1d) + uVar13) * 2;
              if (uVar10 < *(uint *)(iVar18 + 0xc)) {
                iVar17 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c);
              }
              else {
                iVar17 = 0;
              }
              uVar10 = (uVar13 + STField<int>(this,0x1d) * 2) * 2;
              if (uVar10 < *(uint *)(iVar18 + 0xc)) {
                iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c);
              }
              else {
                iVar18 = 0;
              }
              *(undefined4 *)(iVar18 + 0x21) = *(undefined4 *)(iVar17 + 0x21);
              *(undefined4 *)(iVar18 + 8) = 1;
              uVar10 = (STField<int>(this,0x1d) + uVar13) * 2 + 1;
              iVar18 = *(int *)this;
              if (uVar10 < *(uint *)(iVar18 + 0xc)) {
                iVar17 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c);
              }
              else {
                iVar17 = 0;
              }
              uVar10 = (uVar13 + STField<int>(this,0x1d) * 2) * 2 + 1;
              if (uVar10 < *(uint *)(iVar18 + 0xc)) {
                iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c);
              }
              else {
                iVar18 = 0;
              }
              *(undefined4 *)(iVar18 + 0x21) = *(undefined4 *)(iVar17 + 0x21);
              *(undefined4 *)(iVar18 + 8) = 1;
              iVar18 = STField<int>(this,0x1d);
              uVar13 = uVar13 + 1;
            } while ((int)uVar13 < iVar18);
          }
          STField<float>(this,0x7d) =
               STField<float>(this,0x75) * _DAT_007904fc * _DAT_00790784;
          lVar25 = st::fn_0072E288();
          STField<undefined4>(this,0x2d) = 2;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          STField<float>(this,0x81) = (float)(extraout_ST0_02 / (float10)(int)lVar25);
          fVar6 = _DAT_0079c5a4;
          STField<uint>(this,5) = g_playSystem_00802A38->field_00E4;
          if (fVar1 <= fVar6) {
            STField<float>(this,0x79) = fVar1;
          }
          else {
            lVar25 = st::fn_0072E288();
            STField<float>(this,0x79) = fVar1 - (float)((int)lVar25 << 1) * _DAT_0079d1a4;
          }
        }
        uVar13 = 0;
        if (0 < iVar14) {
          do {
            iVar18 = *(int *)this;
            if (((uVar13 < *(uint *)(iVar18 + 0xc)) &&
                (iVar18 = *(int *)(iVar18 + 8) * uVar13 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) &&
               (*(int *)(iVar18 + 8) == 1)) {
              fVar6 = STField<float>(this,0x45);
              fVar24 = (float10)fVar1 + (float10)*(float *)(iVar18 + 0x21);
              fsin((float10)fVar6);
              fcos(fVar24);
              fsin(fVar24);
              lVar25 = st::fn_0072E288();
              *(int *)(iVar18 + 0xd) = (int)lVar25 + STField<int>(this,0x8d);
              lVar25 = st::fn_0072E288();
              fcos((float10)fVar6);
              *(int *)(iVar18 + 0x11) = (int)lVar25 + STField<int>(this,0x91);
              lVar25 = st::fn_0072E288();
              *(int *)(iVar18 + 0x15) = (int)lVar25 + STField<int>(this,0x95);
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < iVar14);
          return;
        }
      }
      break;
    case 2:
      if (*(int *)this != 0) {
        iVar14 = *(int *)(*(int *)this + 0xc);
        fVar6 = (float)(g_playSystem_00802A38->field_00E4 - STField<int>(this,5));
        fVar1 = fVar6 * STField<float>(this,0x61) + STField<float>(this,0x79);
        fVar6 = fVar6 * STField<float>(this,0x81);
        if ((STField<float>(this,0x7d) <= fVar6) ||
           (STField<float>(this,0x7d) - fVar6 < _DAT_0079d1bc)) {
          bVar9 = true;
        }
        iVar18 = STField<int>(this,0x1d);
        if (0 < iVar18) {
          do {
            iVar17 = *(int *)this;
            if (iVar18 + uVar13 < *(uint *)(iVar17 + 0xc)) {
              iVar18 = *(int *)(iVar17 + 8) * (iVar18 + uVar13) + *(int *)(iVar17 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            fVar6 = STField<float>(this,0x81);
            *(undefined4 *)(iVar18 + 8) = 1;
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + fVar6;
            iVar18 = *(int *)this;
            uVar10 = (uVar13 + STField<int>(this,0x1d) * 2) * 2;
            if (uVar10 < *(uint *)(iVar18 + 0xc)) {
              iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            fVar6 = STField<float>(this,0x81);
            *(undefined4 *)(iVar18 + 8) = 1;
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + fVar6;
            iVar18 = *(int *)this;
            uVar10 = (uVar13 + STField<int>(this,0x1d) * 2) * 2 + 1;
            if (uVar10 < *(uint *)(iVar18 + 0xc)) {
              iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            fVar6 = STField<float>(this,0x81);
            *(undefined4 *)(iVar18 + 8) = 1;
            uVar13 = uVar13 + 1;
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + fVar6;
            iVar18 = STField<int>(this,0x1d);
          } while ((int)uVar13 < iVar18);
        }
        uVar13 = 0;
        if (0 < iVar14) {
          do {
            iVar18 = *(int *)this;
            if (((uVar13 < *(uint *)(iVar18 + 0xc)) &&
                (iVar18 = *(int *)(iVar18 + 8) * uVar13 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) &&
               (*(int *)(iVar18 + 8) == 1)) {
              fVar6 = STField<float>(this,0x45);
              fVar24 = (float10)fVar1 + (float10)*(float *)(iVar18 + 0x21);
              fsin((float10)fVar6);
              fcos(fVar24);
              fsin(fVar24);
              lVar25 = st::fn_0072E288();
              *(int *)(iVar18 + 0xd) = (int)lVar25 + STField<int>(this,0x8d);
              lVar25 = st::fn_0072E288();
              fcos((float10)fVar6);
              *(int *)(iVar18 + 0x11) = (int)lVar25 + STField<int>(this,0x91);
              lVar25 = st::fn_0072E288();
              *(int *)(iVar18 + 0x15) = (int)lVar25 + STField<int>(this,0x95);
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < iVar14);
        }
        fVar6 = _DAT_0079c5a4;
        if (bVar9) {
          STField<undefined4>(this,0x2d) = 3;
          if (fVar1 <= fVar6) {
            STField<float>(this,0x79) = fVar1;
          }
          else {
            lVar25 = st::fn_0072E288();
            STField<float>(this,0x79) = fVar1 - (float)((int)lVar25 << 1) * _DAT_0079d1a4;
          }
          if (STField<float>(this,0x65) != _DAT_0079034c) {
            lVar25 = st::fn_0072E288();
            uVar13 = (int)(uint)lVar25 >> 0x1f;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = ((uint)lVar25 ^ uVar13) - uVar13;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_1 == 0) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = 1;
            }
            fVar24 = (float10)param_1;
            iVar14 = *(int *)this;
            STField<float>(this,0x51) =
                 (float)(((float10)STField<float>(this,0x69) -
                         (float10)STField<float>(this,0x45)) / fVar24);
            STField<float>(this,0x55) =
                 (float)(((float10)STField<float>(this,0x6d) -
                         (float10)STField<float>(this,0x45)) / fVar24);
            if (*(int *)(iVar14 + 0xc) == 0) {
              iVar18 = 0;
            }
            else {
              iVar18 = *(int *)(iVar14 + 0x1c);
            }
            iVar17 = STField<int>(this,0x19);
            fVar1 = ABS(*(float *)(STField<int>(this,0x39) + iVar17 * 4) -
                        *(float *)(iVar18 + 0x21));
            STField<float>(this,0x49) = fVar1;
            if (STField<float>(this,0x89) < fVar1) {
              st::fn_0072E288();
              lVar25 = st::fn_0072E288();
              uVar13 = (int)(uint)lVar25 >> 0x1f;
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              STField<float>(this,0x49) =
                   (float)(extraout_ST0_03 -
                          (float10)(int)(((uint)lVar25 ^ uVar13) - uVar13) *
                          (float10)STField<float>(this,0x89));
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              fVar24 = extraout_ST1_00;
            }
            if (_DAT_0079034c < STField<float>(this,0x49)) {
              STField<float>(this,0x49) =
                   STField<float>(this,0x49) - STField<float>(this,0x89);
            }
            if (STField<uint>(this,0x1d) < *(uint *)(iVar14 + 0xc)) {
              iVar14 = *(int *)(iVar14 + 8) * STField<uint>(this,0x1d) + *(int *)(iVar14 + 0x1c);
            }
            else {
              iVar14 = 0;
            }
            fVar1 = ABS(*(float *)(STField<int>(this,0x39) + -4 + iVar17 * 8) -
                        *(float *)(iVar14 + 0x21));
            STField<float>(this,0x4d) = fVar1;
            if (STField<float>(this,0x89) < fVar1) {
              st::fn_0072E288();
              lVar25 = st::fn_0072E288();
              uVar13 = (int)(uint)lVar25 >> 0x1f;
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              STField<float>(this,0x4d) =
                   (float)(extraout_ST0_04 -
                          (float10)(int)(((uint)lVar25 ^ uVar13) - uVar13) *
                          (float10)STField<float>(this,0x89));
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              fVar24 = extraout_ST1_01;
            }
            STField<float>(this,0x59) = (float)((float10)STField<float>(this,0x49) / fVar24);
            STField<float>(this,0x5d) = (float)((float10)STField<float>(this,0x4d) / fVar24);
            STField<uint>(this,5) = g_playSystem_00802A38->field_00E4;
            return;
          }
        }
      }
      break;
    case 3:
      if (*(int *)this != 0) {
        iVar14 = *(int *)(*(int *)this + 0xc);
        fVar2 = (float)(g_playSystem_00802A38->field_00E4 - STField<int>(this,5));
        fVar6 = fVar2 * STField<float>(this,0x61) + STField<float>(this,0x79);
        fVar3 = fVar2 * STField<float>(this,0x51);
        fVar1 = STField<float>(this,0x55);
        if ((fVar3 + STField<float>(this,0x45) <= STField<float>(this,0x69)) ||
           ((STField<float>(this,0x45) - fVar3) + STField<float>(this,0x69) <
            (float)_DAT_0079d1b0)) {
          bVar9 = true;
        }
        if (0 < STField<int>(this,0x1d)) {
          do {
            iVar18 = *(int *)this;
            if (uVar13 < *(uint *)(iVar18 + 0xc)) {
              iVar18 = *(int *)(iVar18 + 8) * uVar13 + *(int *)(iVar18 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + STField<float>(this,0x59);
            fVar4 = STField<float>(this,0x51);
            *(undefined4 *)(iVar18 + 8) = 1;
            *(float *)(iVar18 + 0x25) = *(float *)(iVar18 + 0x25) + fVar4;
            iVar18 = *(int *)this;
            uVar10 = (STField<int>(this,0x1d) + uVar13) * 2;
            if (uVar10 < *(uint *)(iVar18 + 0xc)) {
              iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + STField<float>(this,0x59);
            fVar4 = STField<float>(this,0x51);
            *(undefined4 *)(iVar18 + 8) = 1;
            *(float *)(iVar18 + 0x25) = *(float *)(iVar18 + 0x25) + fVar4;
            iVar18 = *(int *)this;
            uVar10 = (STField<int>(this,0x1d) + uVar13) * 2 + 1;
            if (uVar10 < *(uint *)(iVar18 + 0xc)) {
              iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + STField<float>(this,0x59);
            fVar4 = STField<float>(this,0x51);
            *(undefined4 *)(iVar18 + 8) = 1;
            *(float *)(iVar18 + 0x25) = *(float *)(iVar18 + 0x25) + fVar4;
            iVar18 = *(int *)this;
            uVar10 = STField<int>(this,0x1d) + uVar13;
            if (uVar10 < *(uint *)(iVar18 + 0xc)) {
              iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + STField<float>(this,0x5d);
            fVar4 = STField<float>(this,0x55);
            *(undefined4 *)(iVar18 + 8) = 1;
            *(float *)(iVar18 + 0x25) = fVar4 + *(float *)(iVar18 + 0x25);
            iVar18 = *(int *)this;
            uVar10 = (uVar13 + STField<int>(this,0x1d) * 2) * 2;
            if (uVar10 < *(uint *)(iVar18 + 0xc)) {
              iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + STField<float>(this,0x5d);
            fVar4 = STField<float>(this,0x55);
            *(undefined4 *)(iVar18 + 8) = 1;
            *(float *)(iVar18 + 0x25) = fVar4 + *(float *)(iVar18 + 0x25);
            uVar10 = (uVar13 + STField<int>(this,0x1d) * 2) * 2 + 1;
            iVar18 = *(int *)this;
            if (uVar10 < *(uint *)(iVar18 + 0xc)) {
              iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            uVar13 = uVar13 + 1;
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + STField<float>(this,0x5d);
            fVar4 = STField<float>(this,0x55);
            *(undefined4 *)(iVar18 + 8) = 1;
            *(float *)(iVar18 + 0x25) = fVar4 + *(float *)(iVar18 + 0x25);
          } while ((int)uVar13 < STField<int>(this,0x1d));
        }
        iVar18 = STField<int>(this,0x35);
        if ((0 < iVar18) && (!bVar9)) {
          iVar17 = STField<int>(this,0x19) - iVar18;
          fVar4 = *(float *)(STField<int>(this,0x39) + iVar17 * 4);
          if (fVar4 <= fVar2 * fVar1 + STField<float>(this,0x45)) {
            fVar1 = STField<float>(this,0x45);
            iVar15 = 0;
            iVar16 = STField<int>(this,0x1d);
            fVar2 = *(float *)(STField<int>(this,0x39) +
                              (STField<int>(this,0x19) * 2 - iVar18) * 4);
            if (0 < iVar16) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = 0;
              do {
                iVar18 = *(int *)this;
                uVar13 = (iVar17 + 5) * iVar16 + iVar15;
                if ((uVar13 < *(uint *)(iVar18 + 0xc)) &&
                   (iVar18 = *(int *)(iVar18 + 8) * uVar13 + *(int *)(iVar18 + 0x1c), iVar18 != 0))
                {
                  *(float *)(iVar18 + 0x25) = fVar4 - fVar1;
                  fVar5 = STField<float>(this,0x75);
                  *(undefined4 *)(iVar18 + 8) = 1;
                  *(float *)(iVar18 + 0x21) = (float)param_1 * fVar5 + fVar2;
                }
                iVar15 = iVar15 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = param_1 + 3;
                iVar16 = STField<int>(this,0x1d);
              } while (iVar15 < iVar16);
            }
            STField<int>(this,0x35) = STField<int>(this,0x35) + -1;
          }
        }
        iVar18 = STField<int>(this,0x31);
        if ((0 < iVar18) && (!bVar9)) {
          fVar1 = *(float *)(STField<int>(this,0x39) + (iVar18 + -1) * 4);
          if (fVar3 + STField<float>(this,0x45) <= fVar1) {
            fVar2 = STField<float>(this,0x45);
            iVar16 = 0;
            fVar3 = *(float *)(STField<int>(this,0x39) +
                              (STField<int>(this,0x19) + iVar18 + -1) * 4);
            iVar17 = STField<int>(this,0x1d);
            if (0 < iVar17) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = 0;
              do {
                iVar15 = *(int *)this;
                uVar13 = (iVar18 + 4) * iVar17 + iVar16;
                if ((uVar13 < *(uint *)(iVar15 + 0xc)) &&
                   (iVar17 = *(int *)(iVar15 + 8) * uVar13 + *(int *)(iVar15 + 0x1c), iVar17 != 0))
                {
                  *(float *)(iVar17 + 0x25) = fVar1 - fVar2;
                  fVar4 = STField<float>(this,0x75);
                  *(undefined4 *)(iVar17 + 8) = 1;
                  *(float *)(iVar17 + 0x21) = (float)param_1 * fVar4 + fVar3;
                }
                iVar16 = iVar16 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = param_1 + 3;
                iVar17 = STField<int>(this,0x1d);
              } while (iVar16 < iVar17);
            }
            STField<int>(this,0x31) = STField<int>(this,0x31) + -1;
          }
        }
        uVar13 = 0;
        if (0 < iVar14) {
          do {
            iVar18 = *(int *)this;
            if (((uVar13 < *(uint *)(iVar18 + 0xc)) &&
                (iVar18 = *(int *)(iVar18 + 8) * uVar13 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) &&
               (*(int *)(iVar18 + 8) == 1)) {
              fVar24 = (float10)fVar6 + (float10)*(float *)(iVar18 + 0x21);
              fVar23 = (float10)*(float *)(iVar18 + 0x25) + (float10)STField<float>(this,0x45);
              fsin(fVar23);
              fcos(fVar24);
              fsin(fVar24);
              lVar25 = st::fn_0072E288();
              *(int *)(iVar18 + 0xd) = (int)lVar25 + STField<int>(this,0x8d);
              lVar25 = st::fn_0072E288();
              fcos((float10)(float)fVar23);
              *(int *)(iVar18 + 0x11) = (int)lVar25 + STField<int>(this,0x91);
              lVar25 = st::fn_0072E288();
              *(int *)(iVar18 + 0x15) = (int)lVar25 + STField<int>(this,0x95);
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < iVar14);
        }
        if (bVar9) {
          if (fVar6 <= _DAT_0079c5a4) {
            STField<float>(this,0x79) = fVar6;
          }
          else {
            lVar25 = st::fn_0072E288();
            STField<float>(this,0x79) = fVar6 - (float)((int)lVar25 << 1) * _DAT_0079d1a4;
          }
          STField<undefined4>(this,0x2d) = 4;
          uVar13 = g_playSystem_00802A38->field_00E4;
          STField<undefined4>(this,9) = 0x14;
          STField<uint>(this,5) = uVar13;
          return;
        }
      }
      break;
    case 4:
      if (*(int *)this != 0) {
        uVar10 = 0;
        uVar13 = g_playSystem_00802A38->field_00E4 - STField<int>(this,5);
        iVar14 = *(int *)(*(int *)this + 0xc);
        fVar24 = (float10)uVar13 * (float10)STField<float>(this,0x61) +
                 (float10)STField<float>(this,0x79);
        if (0 < iVar14) {
          do {
            iVar18 = *(int *)this;
            if (((uVar10 < *(uint *)(iVar18 + 0xc)) &&
                (iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) &&
               (*(int *)(iVar18 + 8) == 1)) {
              fVar24 = fVar24 + (float10)*(float *)(iVar18 + 0x21);
              fVar23 = (float10)*(float *)(iVar18 + 0x25) + (float10)STField<float>(this,0x45);
              fsin(fVar23);
              fcos(fVar24);
              fsin(fVar24);
              lVar25 = st::fn_0072E288();
              *(int *)(iVar18 + 0xd) = (int)lVar25 + STField<int>(this,0x8d);
              lVar25 = st::fn_0072E288();
              fcos((float10)(float)fVar23);
              *(int *)(iVar18 + 0x11) = (int)lVar25 + STField<int>(this,0x91);
              lVar25 = st::fn_0072E288();
              *(int *)(iVar18 + 0x15) = (int)lVar25 + STField<int>(this,0x95);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              fVar24 = extraout_ST0_05;
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < iVar14);
        }
        if (STField<uint>(this,9) <= uVar13) {
          lVar25 = st::fn_0072E288();
          iVar14 = (int)lVar25;
          STField<undefined4>(this,0x35) = 0;
          STField<undefined4>(this,0x2d) = 5;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          STField<float>(this,0x55) = (float)-(extraout_ST0_06 / (float10)iVar14);
          STField<float>(this,0x5d) = -(STField<float>(this,0x89) / (float)iVar14);
          fVar24 = (float10)_DAT_0079c5a4;
          uVar13 = g_playSystem_00802A38->field_00E4;
          STField<int>(this,9) = iVar14;
          STField<uint>(this,5) = uVar13;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          if (extraout_ST1_02 <= fVar24) {
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            STField<float>(this,0x79) = (float)extraout_ST1_02;
            return;
          }
          lVar25 = st::fn_0072E288();
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          STField<float>(this,0x79) =
               (float)(extraout_ST0_07 - (float10)((int)lVar25 << 1) * (float10)_DAT_0079d1a4);
        }
      }
      break;
    case 5:
      if (*(int *)this != 0) {
        iVar14 = *(int *)(*(int *)this + 0xc);
        uVar10 = g_playSystem_00802A38->field_00E4 - STField<int>(this,5);
        fVar23 = (float10)uVar10;
        iVar18 = STField<int>(this,0x1d);
        fVar1 = STField<float>(this,0x55);
        fVar24 = (float10)STField<float>(this,0x79) -
                 fVar23 * (float10)STField<float>(this,0x61);
        if (0 < iVar18) {
          do {
            iVar17 = *(int *)this;
            if (iVar18 + uVar13 < *(uint *)(iVar17 + 0xc)) {
              iVar18 = *(int *)(iVar17 + 8) * (iVar18 + uVar13) + *(int *)(iVar17 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + STField<float>(this,0x5d);
            fVar6 = STField<float>(this,0x55);
            *(undefined4 *)(iVar18 + 8) = 1;
            *(float *)(iVar18 + 0x25) = fVar6 + *(float *)(iVar18 + 0x25);
            iVar18 = *(int *)this;
            uVar12 = (uVar13 + STField<int>(this,0x1d) * 2) * 2;
            if (uVar12 < *(uint *)(iVar18 + 0xc)) {
              iVar18 = *(int *)(iVar18 + 8) * uVar12 + *(int *)(iVar18 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + STField<float>(this,0x5d);
            fVar6 = STField<float>(this,0x55);
            *(undefined4 *)(iVar18 + 8) = 1;
            *(float *)(iVar18 + 0x25) = fVar6 + *(float *)(iVar18 + 0x25);
            iVar18 = *(int *)this;
            uVar12 = (uVar13 + STField<int>(this,0x1d) * 2) * 2 + 1;
            if (uVar12 < *(uint *)(iVar18 + 0xc)) {
              iVar18 = *(int *)(iVar18 + 8) * uVar12 + *(int *)(iVar18 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            uVar13 = uVar13 + 1;
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + STField<float>(this,0x5d);
            fVar6 = STField<float>(this,0x55);
            *(undefined4 *)(iVar18 + 8) = 1;
            *(float *)(iVar18 + 0x25) = fVar6 + *(float *)(iVar18 + 0x25);
            iVar18 = STField<int>(this,0x1d);
          } while ((int)uVar13 < iVar18);
        }
        if ((STField<int>(this,0x35) < STField<int>(this,0x19) + -2) &&
           (iVar18 = STField<int>(this,0x19) - STField<int>(this,0x35),
           (float)(fVar23 * (float10)fVar1) + STField<float>(this,0x6d) <=
           *(float *)(STField<int>(this,0x39) + (iVar18 + -2) * 4))) {
          iVar17 = STField<int>(this,0x1d);
          iVar16 = 0;
          if (0 < iVar17) {
            do {
              iVar15 = *(int *)this;
              uVar13 = (iVar18 + 3) * iVar17 + iVar16;
              if (uVar13 < *(uint *)(iVar15 + 0xc)) {
                iVar17 = *(int *)(iVar15 + 8) * uVar13 + *(int *)(iVar15 + 0x1c);
              }
              else {
                iVar17 = 0;
              }
              *(undefined4 *)(iVar17 + 8) = 0;
              iVar17 = STField<int>(this,0x1d);
              iVar16 = iVar16 + 1;
            } while (iVar16 < iVar17);
          }
          STField<int>(this,0x35) = STField<int>(this,0x35) + 1;
        }
        uVar13 = 0;
        if (0 < iVar14) {
          do {
            iVar18 = *(int *)this;
            if (((uVar13 < *(uint *)(iVar18 + 0xc)) &&
                (iVar18 = *(int *)(iVar18 + 8) * uVar13 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) &&
               (*(int *)(iVar18 + 8) == 1)) {
              fVar24 = fVar24 + (float10)*(float *)(iVar18 + 0x21);
              fVar23 = (float10)*(float *)(iVar18 + 0x25) + (float10)STField<float>(this,0x45);
              fsin(fVar23);
              fcos(fVar24);
              fsin(fVar24);
              lVar25 = st::fn_0072E288();
              *(int *)(iVar18 + 0xd) = (int)lVar25 + STField<int>(this,0x8d);
              lVar25 = st::fn_0072E288();
              fcos((float10)(float)fVar23);
              *(int *)(iVar18 + 0x11) = (int)lVar25 + STField<int>(this,0x91);
              lVar25 = st::fn_0072E288();
              *(int *)(iVar18 + 0x15) = (int)lVar25 + STField<int>(this,0x95);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              fVar24 = extraout_ST0_08;
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < iVar14);
        }
        if (STField<uint>(this,9) <= uVar10) {
          if (fVar24 <= (float10)_DAT_0079c5a4) {
            STField<float>(this,0x79) = (float)fVar24;
          }
          else {
            lVar25 = st::fn_0072E288();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            STField<float>(this,0x79) =
                 (float)(extraout_ST0_09 - (float10)((int)lVar25 << 1) * (float10)_DAT_0079d1a4);
          }
          STField<undefined4>(this,0x2d) = 6;
          uVar13 = g_playSystem_00802A38->field_00E4;
          STField<undefined4>(this,9) = 0x14f;
          STField<uint>(this,5) = uVar13;
          return;
        }
      }
      break;
    case 6:
      if (*(int *)this != 0) {
        uVar10 = 0;
        uVar13 = g_playSystem_00802A38->field_00E4 - STField<int>(this,5);
        iVar14 = *(int *)(*(int *)this + 0xc);
        fVar1 = STField<float>(this,0x61);
        fVar6 = STField<float>(this,0x79);
        if (0 < iVar14) {
          do {
            iVar18 = *(int *)this;
            if (((uVar10 < *(uint *)(iVar18 + 0xc)) &&
                (iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) &&
               (*(int *)(iVar18 + 8) == 1)) {
              fVar24 = (float10)((float)uVar13 * fVar1 + fVar6) + (float10)*(float *)(iVar18 + 0x21);
              fVar23 = (float10)*(float *)(iVar18 + 0x25) + (float10)STField<float>(this,0x45);
              fsin(fVar23);
              fcos(fVar24);
              fsin(fVar24);
              lVar25 = st::fn_0072E288();
              *(int *)(iVar18 + 0xd) = (int)lVar25 + STField<int>(this,0x8d);
              lVar25 = st::fn_0072E288();
              fcos((float10)(float)fVar23);
              *(int *)(iVar18 + 0x11) = (int)lVar25 + STField<int>(this,0x91);
              lVar25 = st::fn_0072E288();
              *(int *)(iVar18 + 0x15) = (int)lVar25 + STField<int>(this,0x95);
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < iVar14);
        }
        if (STField<uint>(this,9) <= uVar13) {
          STField<undefined4>(this,0x2d) = 0;
          return;
        }
      }
    }
    break;
  case 4:
    fcos((float10)param_1 * (float10)_DAT_0079d1c4);
    fsin((float10)param_1 * (float10)_DAT_0079d1c4);
    if (*(int *)this != 0) {
      iVar14 = *(int *)(*(int *)this + 0xc);
      iVar18 = STField<int>(this,0x1d);
      uVar13 = 0;
      if (0 < iVar18 * 2) {
        do {
          iVar17 = *(int *)this;
          if ((uVar13 < *(uint *)(iVar17 + 0xc)) &&
             (iVar17 = *(int *)(iVar17 + 8) * uVar13 + *(int *)(iVar17 + 0x1c), iVar17 != 0)) {
            fVar1 = *(float *)(iVar17 + 0x21) + STField<float>(this,0x8d);
            if ((int)uVar13 < iVar18) {
              fVar6 = *(float *)(iVar17 + 0x25);
            }
            else {
              fVar6 = STField<float>(this,0x71);
            }
            fsin((float10)fVar6);
            fcos((float10)fVar1);
            fsin((float10)fVar1);
            lVar25 = st::fn_0072E288();
            *(int *)(iVar17 + 0xd) = (int)lVar25 + STField<int>(this,0x95);
            lVar25 = st::fn_0072E288();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            fcos(extraout_ST0_10);
            *(int *)(iVar17 + 0x11) = (int)lVar25 + STField<int>(this,0x99);
            lVar25 = st::fn_0072E288();
            *(int *)(iVar17 + 0x15) = (int)lVar25 + STField<int>(this,0x9d);
          }
          iVar18 = STField<int>(this,0x1d);
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < iVar18 * 2);
      }
      for (uVar13 = STField<int>(this,0x1d) * 2; (int)uVar13 < iVar14; uVar13 = uVar13 + 1) {
        iVar18 = *(int *)this;
        if ((uVar13 < *(uint *)(iVar18 + 0xc)) &&
           (iVar18 = *(int *)(iVar18 + 8) * uVar13 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) {
          uVar10 = g_playSystem_00802A38->field_00E4 - *(int *)(iVar18 + 0x35);
          fVar24 = (float10)*(float *)(iVar18 + 0x21) + (float10)STField<float>(this,0x8d);
          fVar1 = (float)uVar10 * STField<float>(this,0x85) +
                  (float)(uVar10 * uVar10) * STField<float>(this,0x89) * _DAT_0079d1ac +
                  *(float *)(iVar18 + 0x25);
          if (fVar1 <= STField<float>(this,0x71)) {
            *(undefined4 *)(iVar18 + 8) = 1;
          }
          else {
            *(undefined4 *)(iVar18 + 8) = 0;
          }
          if (STField<float>(this,0x79) < fVar1) {
            *(undefined4 *)(iVar18 + 0x25) = STField<undefined4>(this,0x65);
            *(uint *)(iVar18 + 0x35) = g_playSystem_00802A38->field_00E4;
          }
          fsin((float10)fVar1);
          fcos(fVar24);
          fsin(fVar24);
          lVar25 = st::fn_0072E288();
          *(int *)(iVar18 + 0xd) = (int)lVar25 + STField<int>(this,0x95);
          lVar25 = st::fn_0072E288();
          fcos((float10)fVar1);
          *(int *)(iVar18 + 0x11) = (int)lVar25 + STField<int>(this,0x99);
          lVar25 = st::fn_0072E288();
          *(int *)(iVar18 + 0x15) = (int)lVar25 + STField<int>(this,0x9d);
        }
      }
      if (STField<float>(this,0x71) < STField<float>(this,0x79)) {
        STField<float>(this,0x71) =
             STField<float>(this,0x89) + STField<float>(this,0x89) +
             STField<float>(this,0x71);
      }
      STField<float>(this,0x8d) = STField<float>(this,0x89) + STField<float>(this,0x8d);
      return;
    }
  }
  return;
}

// 00635A40 FUN_00635a40
#line 4 "decomp/ST.exe/functions/00635A40/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall st::fn_00635A40(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;

  if (*(int *)this != 0) {
    iVar1 = *(int *)(*(int *)this + 0xc);
    uVar4 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = *(int *)this;
        if (((uVar4 < *(uint *)(iVar3 + 0xc)) &&
            (iVar3 = *(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c), iVar3 != 0)) &&
           (-1 < (int)*(uint *)(iVar3 + 4))) {
          st::fn_006EA270
                    (g_sT3DSMAPContext_00807598,*(uint *)(iVar3 + 4),0,*(uint *)(iVar3 + 0x19));
          st::fn_006EA960
                    (g_sT3DSMAPContext_00807598,*(uint *)(iVar3 + 4),
                     (float)*(int *)(iVar3 + 0xd) * _DAT_007904f8 * _DAT_007904f0,
                     (float)*(int *)(iVar3 + 0x11) * _DAT_007904f8 * _DAT_007904f0,
                     (float)*(int *)(iVar3 + 0x15) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
          iVar2 = *(int *)(iVar3 + 0x19) + 1;
          *(int *)(iVar3 + 0x19) = iVar2;
          if (*(int *)(iVar3 + 0x1d) <= iVar2) {
            *(undefined4 *)(iVar3 + 0x19) = 0;
          }
          if (*(int *)(iVar3 + 8) == 1) {
            if (*(char *)(iVar3 + 0xc) == '\0') {
              st::fn_006EAAA0(g_sT3DSMAPContext_00807598,*(uint *)(iVar3 + 4),0);
              *(undefined1 *)(iVar3 + 0xc) = 1;
            }
            if (param_1 == 0) {
              if (*(char *)(iVar3 + 0xc) != '\0') {
                uVar5 = *(uint *)(iVar3 + 4);
                goto LAB_00635b61;
              }
            }
            else if (*(char *)(iVar3 + 0xc) == '\0') {
              st::fn_006EAAA0(g_sT3DSMAPContext_00807598,*(uint *)(iVar3 + 4),0);
              *(undefined1 *)(iVar3 + 0xc) = 1;
            }
          }
          else if (*(char *)(iVar3 + 0xc) != '\0') {
            uVar5 = *(uint *)(iVar3 + 4);
LAB_00635b61:
            st::fn_006EAB60(g_sT3DSMAPContext_00807598,uVar5);
            *(undefined1 *)(iVar3 + 0xc) = 0;
          }
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar1);
    }
  }
  return;
}

// 00635BF0 FUN_00635bf0
#line 4 "decomp/ST.exe/functions/00635BF0/decomp.c"
undefined4 st::fn_00635BF0(int param_1,int param_2,int param_3)

{
  short sVar1;
  VisibleClassTy *pVVar2;
  uint uVar3;
  int iVar4;
  int iVar5;

  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    iVar4 = (short)(((short)(param_1 / 0xc9) + sVar1) -
                   (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar4 = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar5 = (short)(((short)(param_2 / 0xc9) + sVar1) -
                   (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (short)(((short)(param_3 / 200) + sVar1) -
                     (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (int)(short)(((short)(param_3 / 200) + sVar1) -
                          (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  if ((((iVar4 < g_sT3DSMAPContext_00807598->field_0048) ||
       (g_sT3DSMAPContext_00807598->field_0058 < iVar4)) ||
      (iVar5 < g_sT3DSMAPContext_00807598->field_0044)) ||
     (g_sT3DSMAPContext_00807598->field_0054 < iVar5)) {
    uVar3 = 0;
  }
  else {
    uVar3 = st::fn_006DDBD0();
  }
  pVVar2 = g_visibleClass_00802A88;
  if (((char)uVar3 != '\0') && (g_visibleClass_00802A88 != nullptr)) {
    if ((((DAT_0080874d != -1) &&
         ((uVar3 = 0, g_visibleClass_00802A88->field_00F8 != 0 &&
          (st::fn_00403F53
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar4,iVar5,
                      &param_2,&param_3), uVar3 = param_1, -1 < param_1)))) &&
        ((param_1 < 5 &&
         ((((-1 < param_2 && (param_2 < pVVar2->field_0030)) &&
           (uVar3 = g_centeredOffsets5[param_1] + param_3, -1 < (int)uVar3)) &&
          (((int)uVar3 < pVVar2->field_0034 && (pVVar2->field_004C != nullptr)))))))) &&
       (uVar3 = (uint)pVVar2->field_004C[param_2 + uVar3 * pVVar2->field_0030], uVar3 == 0)) {
      return 0;
    }
    return STReplaceLowByte((uint32_t)(uVar3), (uint8_t)(1));
  }
  return uVar3;
}

// 00635DA0 FUN_00635da0
#line 4 "decomp/ST.exe/functions/00635DA0/decomp.c"
undefined4 __cdecl st::fn_00635DA0(int param_1,int param_2,int param_3)

{
  short sVar1;
  VisibleClassTy *pVVar2;
  uint uVar3;
  int iVar4;
  int iVar5;

  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    iVar4 = (short)(((short)(param_1 / 0xc9) + sVar1) -
                   (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar4 = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar5 = (short)(((short)(param_2 / 0xc9) + sVar1) -
                   (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (short)(((short)(param_3 / 200) + sVar1) -
                     (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (int)(short)(((short)(param_3 / 200) + sVar1) -
                          (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  if ((((iVar4 < g_sT3DSMAPContext_00807598->field_0048) ||
       (g_sT3DSMAPContext_00807598->field_0058 < iVar4)) ||
      (iVar5 < g_sT3DSMAPContext_00807598->field_0044)) ||
     (g_sT3DSMAPContext_00807598->field_0054 < iVar5)) {
    uVar3 = 0;
  }
  else {
    uVar3 = st::fn_006DDBD0();
  }
  pVVar2 = g_visibleClass_00802A88;
  if (((char)uVar3 != '\0') && (g_visibleClass_00802A88 != nullptr)) {
    if ((((DAT_0080874d != -1) &&
         ((uVar3 = 0, g_visibleClass_00802A88->field_00F8 != 0 &&
          (st::fn_00403F53
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar4,iVar5,
                      &param_2,&param_3), uVar3 = param_1, -1 < param_1)))) &&
        ((param_1 < 5 &&
         ((((-1 < param_2 && (param_2 < pVVar2->field_0030)) &&
           (uVar3 = g_centeredOffsets5[param_1] + param_3, -1 < (int)uVar3)) &&
          (((int)uVar3 < pVVar2->field_0034 && (pVVar2->field_004C != nullptr)))))))) &&
       (uVar3 = (uint)pVVar2->field_004C[param_2 + uVar3 * pVVar2->field_0030], uVar3 == 0)) {
      return 0;
    }
    return STReplaceLowByte((uint32_t)(uVar3), (uint8_t)(1));
  }
  return uVar3;
}

// 00635F50 FUN_00635f50
#line 4 "decomp/ST.exe/functions/00635F50/decomp.c"
void __fastcall st::fn_00635F50(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  if (*param_1 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)(*param_1 + 0xc);
    uVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *param_1;
        if (((uVar3 < *(uint *)(iVar2 + 0xc)) &&
            (iVar2 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c), iVar2 != 0)) &&
           (*(char *)(iVar2 + 0xc) != '\0')) {
          st::fn_006EAB60(g_sT3DSMAPContext_00807598,*(uint *)(iVar2 + 4));
          *(undefined1 *)(iVar2 + 0xc) = 0;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < iVar1);
    }
  }
  return;
}

// 00635FD0 FUN_00635fd0
#line 4 "decomp/ST.exe/functions/00635FD0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=1,
   ignored=8, unknown=0 */

void __fastcall st::fn_00635FD0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  if ((STField<int>(param_1,0x11) == 3) && (STField<int>(param_1,0x39) != 0)) {
    st::fn_006AB060((void **)((int)param_1 + 0x39));
  }
  if (*param_1 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)(*param_1 + 0xc);
    uVar4 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = *param_1;
        if (((uVar4 < *(uint *)(iVar3 + 0xc)) &&
            (iVar3 = *(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c), iVar3 != 0)) &&
           (uVar2 = *(uint *)(iVar3 + 4), -1 < (int)uVar2)) {
          st::fn_006E8BA0(g_sT3DSMAPContext_00807598,uVar2);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar1);
    }
    st::fn_006AE110((DArrayTy *)*param_1);
    *param_1 = 0;
  }
  return;
}

// 00636060 FUN_00636060
#line 4 "decomp/ST.exe/functions/00636060/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00636060(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;

  cVar1 = STField<char>(this,4);
  uVar2 = st::fn_004044DA(param_1,param_2,param_3);
  STField<char>(this,4) = (char)uVar2;
  switch(STField<undefined4>(this,0x11)) {
  case 0:
  case 1:
  case 2:
  case 4:
    STField<int>(this,0x95) = param_1;
    STField<int>(this,0x99) = param_2;
    STField<int>(this,0x9d) = STField<int>(this,0xad) + param_3;
    break;
  case 3:
    STField<int>(this,0x91) = param_2;
    STField<int>(this,0x8d) = param_1;
    STField<int>(this,0x95) = param_3;
  }
  if ((char)uVar2 == '\0') {
    if (cVar1 != '\0') {
      st::fn_00401E65(this);
    }
    return;
  }
  st::fn_00402180(this,param_4,param_5);
  st::fn_00403DDC(this,1);
  return;
}

// 00636170 FUN_00636170
#line 4 "decomp/ST.exe/functions/00636170/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 st::fn_00636170(void)

{
  int *piVar1;
  int iVar2;

  piVar1 = (int *)st::fn_0072EA70("NumbM.dat",&DAT_007d1d98);
  if (piVar1 != nullptr) {
    iVar2 = st::fn_00730050(piVar1,&DAT_007d1d88);
    if (iVar2 < 1) {
      st::fn_0072EA90(piVar1);
      _DAT_007d1bb0 = 0xffffffff;
      return 0;
    }
    st::fn_0072EA90(piVar1);
    _DAT_007d1bb0 = 0xffffffff;
  }
  return 0;
}

// 00636200 FUN_00636200
#line 4 "decomp/ST.exe/functions/00636200/decomp.c"
undefined4 * st::fn_00636200(void)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)st::fn_0072E530(0x34);
  if (puVar1 != nullptr) {
    puVar1 = st::fn_004048A9(puVar1);
    return puVar1;
  }
  return nullptr;
}

// 00636230 FUN_00636230
#line 4 "decomp/ST.exe/functions/00636230/decomp.c"
undefined4 * __fastcall st::fn_00636230(undefined4 *param_1)

{

  memset(param_1, 0, 0x34); /* compiler bulk-zero initialization */
  return param_1;
}

// 006364B0 FUN_006364b0
#line 4 "decomp/ST.exe/functions/006364B0/decomp.c"
uint st::fn_006364B0(int param_1)

{
  ushort *puVar1;
  char *text;
  uint local_8;

  local_8 = 0xffffffff;
  if (param_1 == 0) {
    puVar1 = st::fn_00709AF0
                       (PTR_00806764,CASE_1D,"blast_p",0xffffffff,0,0,0,nullptr);
    if ((puVar1 != nullptr) && (g_sT3DSMAPContext_00807598 != nullptr)) {
      st::fn_006E8660
                (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar1,9),
                 STField<uint>(puVar1,0xd),(int)STField<uint>(puVar1,9) / 2,
                 (int)STField<uint>(puVar1,0xd) / 2,0);
      st::fn_006E98E0
                (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar1,STField<int>(puVar1,0x21),1);
      st::fn_006EA270(g_sT3DSMAPContext_00807598,local_8,0,0);
    }
  }
  else if ((0 < param_1) && (param_1 < 3)) {
    if (param_1 == 1) {
      text = "shapeM";
    }
    else {
      text = "shapeB";
    }
    puVar1 = st::fn_00709AF0
                       (PTR_00806774,CASE_1D,text,0xffffffff,0,1,0,nullptr);
    if ((puVar1 != nullptr) && (g_sT3DSMAPContext_00807598 != nullptr)) {
      st::fn_006E8660
                (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar1,9),
                 STField<uint>(puVar1,0xd),(int)STField<uint>(puVar1,9) / 2,
                 (int)STField<uint>(puVar1,0xd) / 2,0);
      st::fn_006E98E0
                (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar1,STField<int>(puVar1,0x21),1);
      st::fn_006EA270(g_sT3DSMAPContext_00807598,local_8,0,0);
      if (param_1 == 1) {
        st::fn_006EA8A0(g_sT3DSMAPContext_00807598,local_8,0,2,nullptr);
        return local_8;
      }
      st::fn_006EA8A0(g_sT3DSMAPContext_00807598,local_8,0,2,PTR_008032b8);
      return local_8;
    }
  }
  return local_8;
}

// 006366D0 FUN_006366d0
#line 4 "decomp/ST.exe/functions/006366D0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_006366D0(AnonShape_006366D0_80B1100F *param_1)

{
  dword dVar1;
  DArrayTy *pDVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;

  if (param_1->field_002C != nullptr) {
    dVar1 = param_1->field_002C->count;
    uVar5 = 0;
    if (0 < (int)dVar1) {
      do {
        pDVar2 = param_1->field_002C;
        if (((uVar5 < pDVar2->count) &&
            (pvVar4 = DArrayAt<void>(pDVar2, uVar5),
            pvVar4 != nullptr)) && (uVar3 = STField<uint>(pvVar4,4), -1 < (int)uVar3)) {
          st::fn_006E8BA0(g_sT3DSMAPContext_00807598,uVar3);
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)dVar1);
    }
    st::fn_006AE110(param_1->field_002C);
    param_1->field_002C = nullptr;
  }
  return;
}

// 00636750 FUN_00636750
#line 4 "decomp/ST.exe/functions/00636750/decomp.c"
void __fastcall st::fn_00636750(AnonShape_00636750_9523C2A1 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  if (param_1->field_002C != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)(param_1->field_002C + 0xc);
    uVar4 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = param_1->field_002C;
        if (((uVar4 < *(uint *)(iVar3 + 0xc)) &&
            (iVar3 = *(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c), iVar3 != 0)) &&
           (*(int *)(iVar3 + 4) < 0)) {
          uVar2 = st::fn_00402A22(param_1->field_0004);
          *(uint *)(iVar3 + 4) = uVar2;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar1);
    }
  }
  return;
}

// 006367D0 FUN_006367d0
#line 4 "decomp/ST.exe/functions/006367D0/decomp.c"
undefined4 __fastcall st::fn_006367D0(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  short local_10;
  int local_c;
  int local_8;

  bVar1 = false;
  if (param_1[0xb] != 0) {
    uVar10 = g_playSystem_00802A38->field_00E4 - param_1[0xc];
    iVar2 = param_1[1];
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        iVar2 = (param_1[8] * uVar10 - (uVar10 * uVar10 * 0x29) / 100) + param_1[6];
        param_1[7] = iVar2;
        local_c = 0;
        if (0 < param_1[2]) {
          do {
            iVar11 = *param_1;
            local_8 = 0;
            uVar8 = iVar11 * local_c;
            if (local_c == param_1[9]) {
              if (0 < iVar11) {
                do {
                  iVar11 = param_1[0xb];
                  if ((uVar8 < *(uint *)(iVar11 + 0xc)) &&
                     (iVar11 = *(int *)(iVar11 + 8) * uVar8 + *(int *)(iVar11 + 0x1c), iVar11 != 0))
                  {
                    if (iVar2 < 300) {
                      uVar3 = st::fn_0072E6C0();
                      uVar3 = uVar3 % ((uVar10 * 3 >> 1) + 0x1f);
                      uVar4 = st::fn_0072E6C0();
                      uVar4 = uVar4 & 0x80000001;
                      if ((int)uVar4 < 0) {
                        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
                      }
                      iVar5 = (-(uint)(uVar4 != 0) & 2) - 1;
                      *(int *)(iVar11 + 0xe) =
                           /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                           (*(int *)(iVar11 + 0x26) * param_1[7]) / 10000 +
                           (int)(*(int *)(iVar11 + 0x2a) * iVar5 * uVar3) / 10000 + param_1[3];
                      *(int *)(iVar11 + 0x12) =
                           /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                           ((*(int *)(iVar11 + 0x2a) * param_1[7]) / 10000 -
                           (int)(*(int *)(iVar11 + 0x26) * iVar5 * uVar3) / 10000) + param_1[4];
                      iVar5 = param_1[5];
                      *(undefined4 *)(iVar11 + 0x1a) = 4;
                      *(int *)(iVar11 + 0x16) = iVar5;
                      uVar3 = uVar10 / 6 + 4;
                      *(uint *)(iVar11 + 0x1e) = uVar3;
                      if (10 < uVar3) {
                        *(undefined4 *)(iVar11 + 0x1e) = 10;
                      }
                      iVar5 = *(int *)(iVar11 + 0xe);
                      *(int *)(iVar11 + 0x22) = param_1[2] + 4;
                      sVar6 = (short)(iVar5 >> 0x1f);
                      if (iVar5 < 0) {
                        local_10 = (((short)(iVar5 / 0xc9) + sVar6) -
                                   (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
                      }
                      else {
                        local_10 = ((short)(iVar5 / 0xc9) + sVar6) -
                                   (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
                      }
                      iVar5 = *(int *)(iVar11 + 0x12);
                      sVar6 = (short)(iVar5 >> 0x1f);
                      if (iVar5 < 0) {
                        sVar6 = (((short)(iVar5 / 0xc9) + sVar6) -
                                (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
                      }
                      else {
                        sVar6 = ((short)(iVar5 / 0xc9) + sVar6) -
                                (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
                      }
                      iVar5 = *(int *)(iVar11 + 0x16);
                      sVar7 = (short)(iVar5 >> 0x1f);
                      if (iVar5 < 0) {
                        sVar7 = (((short)(iVar5 / 200) + sVar7) -
                                (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1;
                      }
                      else {
                        sVar7 = ((short)(iVar5 / 200) + sVar7) -
                                (short)((longlong)iVar5 * 0x51eb851f >> 0x3f);
                      }
                      iVar5 = st::fn_00404D3B(local_10,sVar6,sVar7);
                      if (iVar5 == 0) {
                        *(undefined4 *)(iVar11 + 8) = 0;
                      }
                      else {
                        *(undefined4 *)(iVar11 + 8) = 1;
                      }
                      *(undefined1 *)(iVar11 + 0xc) = 1;
                      bVar1 = true;
                    }
                    else {
                      *(undefined4 *)(iVar11 + 8) = 0;
                    }
                  }
                  local_8 = local_8 + 1;
                  uVar8 = uVar8 + 1;
                } while (local_8 < *param_1);
              }
            }
            else if (0 < iVar11) {
              do {
                iVar11 = param_1[0xb];
                if (((uVar8 < *(uint *)(iVar11 + 0xc)) &&
                    (iVar11 = *(int *)(iVar11 + 8) * uVar8 + *(int *)(iVar11 + 0x1c), iVar11 != 0))
                   && (*(int *)(iVar11 + 8) == 1)) {
                  *(undefined1 *)(iVar11 + 0xc) = 0;
                  iVar5 = *(int *)(iVar11 + 0x1e) + 1;
                  *(int *)(iVar11 + 0x1e) = iVar5;
                  if (iVar5 < *(int *)(iVar11 + 0x22)) {
                    *(undefined4 *)(iVar11 + 8) = 1;
                    bVar1 = true;
                  }
                  else {
                    *(undefined4 *)(iVar11 + 8) = 0;
                  }
                }
                local_8 = local_8 + 1;
                uVar8 = uVar8 + 1;
              } while (local_8 < *param_1);
            }
            local_c = local_c + 1;
          } while (local_c < param_1[2]);
        }
        iVar2 = param_1[9];
        param_1[9] = iVar2 + 1;
        if (param_1[2] <= iVar2 + 1) {
          param_1[9] = 0;
        }
        if (!bVar1) {
          return 1;
        }
        return 0;
      }
      if (iVar2 != 2) {
        return 1;
      }
    }
    iVar2 = (param_1[8] * uVar10 - (uVar10 * uVar10 * 0x21) / 100) + param_1[6];
    param_1[7] = iVar2;
    local_c = 0;
    if (0 < param_1[2]) {
      do {
        iVar11 = *param_1;
        uVar8 = iVar11 * local_c;
        if (local_c == param_1[9]) {
          local_8 = 0;
          if (0 < iVar11) {
            do {
              iVar11 = param_1[0xb];
              if ((uVar8 < *(uint *)(iVar11 + 0xc)) &&
                 (iVar11 = *(int *)(iVar11 + 8) * uVar8 + *(int *)(iVar11 + 0x1c), iVar11 != 0)) {
                if (iVar2 < 500) {
                  uVar3 = st::fn_0072E6C0();
                  uVar3 = uVar3 % ((uVar10 * 3 >> 1) + 0x1f);
                  uVar4 = st::fn_0072E6C0();
                  uVar4 = uVar4 & 0x80000001;
                  if ((int)uVar4 < 0) {
                    uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
                  }
                  iVar5 = (-(uint)(uVar4 != 0) & 2) - 1;
                  *(int *)(iVar11 + 0xe) =
                       /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                       (*(int *)(iVar11 + 0x26) * param_1[7]) / 10000 +
                       (int)(*(int *)(iVar11 + 0x2a) * iVar5 * uVar3) / 10000 + param_1[3];
                  *(int *)(iVar11 + 0x12) =
                       /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                       ((*(int *)(iVar11 + 0x2a) * param_1[7]) / 10000 -
                       (int)(*(int *)(iVar11 + 0x26) * iVar5 * uVar3) / 10000) + param_1[4];
                  *(int *)(iVar11 + 0x16) = param_1[5];
                  *(undefined4 *)(iVar11 + 0x1a) = 4;
                  if (param_1[1] == 0) {
                    uVar3 = uVar10 / 6 + 4;
                    *(uint *)(iVar11 + 0x1e) = uVar3;
                    if (10 < uVar3) {
                      *(undefined4 *)(iVar11 + 0x1e) = 10;
                    }
                    *(int *)(iVar11 + 0x22) = param_1[2] + *(int *)(iVar11 + 0x1e);
                  }
                  else {
                    iVar5 = uVar10 / 3 + 4;
                    *(int *)(iVar11 + 0x1e) = iVar5;
                    *(int *)(iVar11 + 0x22) = iVar5 + param_1[2];
                  }
                  iVar5 = *(int *)(iVar11 + 0xe);
                  *(int *)(iVar11 + 0x22) = param_1[2] + 4;
                  sVar6 = (short)(iVar5 >> 0x1f);
                  if (iVar5 < 0) {
                    local_10 = (((short)(iVar5 / 0xc9) + sVar6) -
                               (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
                  }
                  else {
                    local_10 = ((short)(iVar5 / 0xc9) + sVar6) -
                               (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
                  }
                  iVar5 = *(int *)(iVar11 + 0x12);
                  sVar6 = (short)(iVar5 >> 0x1f);
                  if (iVar5 < 0) {
                    sVar6 = (((short)(iVar5 / 0xc9) + sVar6) -
                            (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
                  }
                  else {
                    sVar6 = ((short)(iVar5 / 0xc9) + sVar6) -
                            (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
                  }
                  iVar5 = *(int *)(iVar11 + 0x16);
                  sVar7 = (short)(iVar5 >> 0x1f);
                  if (iVar5 < 0) {
                    sVar7 = (((short)(iVar5 / 200) + sVar7) -
                            (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1;
                  }
                  else {
                    sVar7 = ((short)(iVar5 / 200) + sVar7) -
                            (short)((longlong)iVar5 * 0x51eb851f >> 0x3f);
                  }
                  iVar5 = st::fn_00404D3B(local_10,sVar6,sVar7);
                  if (iVar5 == 0) {
                    *(undefined4 *)(iVar11 + 8) = 0;
                  }
                  else {
                    *(undefined4 *)(iVar11 + 8) = 1;
                  }
                  *(undefined1 *)(iVar11 + 0xc) = 1;
                  bVar1 = true;
                }
                else {
                  *(undefined4 *)(iVar11 + 8) = 0;
                }
              }
              local_8 = local_8 + 1;
              uVar8 = uVar8 + 1;
            } while (local_8 < *param_1);
          }
        }
        else {
          iVar5 = 0;
          if (0 < iVar11) {
            do {
              iVar11 = param_1[0xb];
              if (((uVar8 < *(uint *)(iVar11 + 0xc)) &&
                  (iVar11 = *(int *)(iVar11 + 8) * uVar8 + *(int *)(iVar11 + 0x1c), iVar11 != 0)) &&
                 (*(int *)(iVar11 + 8) == 1)) {
                *(undefined1 *)(iVar11 + 0xc) = 0;
                iVar9 = *(int *)(iVar11 + 0x1e) + 1;
                *(int *)(iVar11 + 0x1e) = iVar9;
                if (iVar9 < *(int *)(iVar11 + 0x22)) {
                  *(undefined4 *)(iVar11 + 8) = 1;
                  bVar1 = true;
                }
                else {
                  *(undefined4 *)(iVar11 + 8) = 0;
                }
              }
              iVar5 = iVar5 + 1;
              uVar8 = uVar8 + 1;
            } while (iVar5 < *param_1);
          }
        }
        local_c = local_c + 1;
      } while (local_c < param_1[2]);
    }
    iVar2 = param_1[9];
    param_1[9] = iVar2 + 1;
    if (param_1[2] <= iVar2 + 1) {
      param_1[9] = 0;
    }
    if (bVar1) {
      return 0;
    }
  }
  return 1;
}

// 00637180 FUN_00637180
#line 4 "decomp/ST.exe/functions/00637180/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall st::fn_00637180(AnonShape_00637180_4094267C *param_1)

{
  int iVar1;
  AnonNested_00637180_002C_C78B37DA *pAVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  if (param_1->field_002C != nullptr) {
    iVar1 = *(int *)&param_1->field_002C->field_0xc;
    uVar5 = 0;
    if (0 < iVar1) {
      do {
        pAVar2 = param_1->field_002C;
        if (((uVar5 < *(uint *)&pAVar2->field_0xc) &&
            (iVar4 = pAVar2->field_0008 * uVar5 + pAVar2->field_001C, iVar4 != 0)) &&
           (uVar3 = *(uint *)(iVar4 + 4), -1 < (int)uVar3)) {
          if (*(int *)(iVar4 + 8) == 1) {
            st::fn_006EA270
                      (g_sT3DSMAPContext_00807598,uVar3,0,*(uint *)(iVar4 + 0x1e));
            if (*(char *)(iVar4 + 0xc) != '\0') {
              st::fn_006EA960
                        (g_sT3DSMAPContext_00807598,*(uint *)(iVar4 + 4),
                         (float)*(int *)(iVar4 + 0xe) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)(iVar4 + 0x12) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)(iVar4 + 0x16) * _DAT_007904f8 * _DAT_007904f0 +
                         _DAT_007904fc);
            }
            if (*(char *)(iVar4 + 0xd) == '\0') {
              st::fn_006EAAA0(g_sT3DSMAPContext_00807598,*(uint *)(iVar4 + 4),0);
              *(undefined1 *)(iVar4 + 0xd) = 1;
            }
          }
          else if (*(char *)(iVar4 + 0xd) != '\0') {
            st::fn_006EAB60(g_sT3DSMAPContext_00807598,uVar3);
            *(undefined1 *)(iVar4 + 0xd) = 0;
          }
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar1);
    }
  }
  return;
}

// 006372E0 FUN_006372e0
#line 4 "decomp/ST.exe/functions/006372E0/decomp.c"
undefined4 __fastcall st::fn_006372E0(int *param_1)

{
  int iVar1;

  iVar1 = st::fn_004037F6(param_1);
  if (iVar1 != 0) {
    return 1;
  }
  if (param_1[10] == 0) {
    iVar1 = st::fn_00402162
                      ((AnonReceiver_00636260 *)param_1);
    param_1[10] = iVar1;
    if (iVar1 != 0) {
      st::fn_00404089((AnonShape_00636750_9523C2A1 *)param_1);
    }
    if (param_1[10] == 0) {
      return 0;
    }
  }
  st::fn_00403D05((AnonShape_00637180_4094267C *)param_1);
  return 0;
}

// 00637350 FUN_00637350
#line 4 "decomp/ST.exe/functions/00637350/decomp.c"
/* [STPrototypeApplier] Propagated parameter 5.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00637461 MOV AX,word ptr
   [EBP + 0x1c]

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0044EE30 -> 00637350 @ 00450FD8; zero-filled partial register load at 00450FBE */

int __cdecl
st::fn_00637350(int param_1,int param_2,int param_3,int param_4,uint param_5,ushort param_6,
            ushort param_7,undefined4 param_8,uint param_9)

{
  byte bVar1;
  byte bVar2;
  STWorldObject *this;
  short sVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  short sVar11;
  int iVar14;
  bool bVar15;
  int local_58 [5];
  uint *local_44;
  uint local_38 [3];
  ushort local_2c;
  ushort local_2a;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_8 = 0;
  sVar9 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    iVar10 = (short)(((short)(param_1 / 0xc9) + sVar9) -
                    (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar10 = (int)(short)(((short)(param_1 / 0xc9) + sVar9) -
                         (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar9 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar4 = (short)(((short)(param_2 / 0xc9) + sVar9) -
                   (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar4 = (int)(short)(((short)(param_2 / 0xc9) + sVar9) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  sVar9 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    local_c = (short)(((short)(param_3 / 200) + sVar9) -
                     (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    local_c = (int)(short)(((short)(param_3 / 200) + sVar9) -
                          (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  uVar7 = iVar4 - param_4;
  if ((int)uVar7 < 0) {
    uVar7 = 0;
  }
  local_1c = iVar10 - param_4;
  if (local_1c < 0) {
    local_1c = 0;
  }
  local_18 = iVar4 + 1 + param_4;
  if (g_worldGrid.sizeY < local_18) {
    local_18 = (int)g_worldGrid.sizeY;
  }
  local_14 = iVar10 + 1 + param_4;
  if (g_worldGrid.sizeX < local_14) {
    local_14 = (int)g_worldGrid.sizeX;
  }
  local_10 = local_c + -1;
  if (local_10 < 0) {
    local_10 = 0;
  }
  local_c = local_c + 2;
  if (5 < local_c) {
    local_c = 5;
  }
  memset(local_38, 0, 0x1c); /* compiler bulk-zero initialization */
  local_38[2] = param_5;
  local_2a = param_6;
  local_2c = param_7;
  local_38[0] = param_9;
  local_38[1] = param_8;
  iVar10 = local_c;
  iVar4 = local_10;
  sVar9 = g_worldGrid.sizeX;
  if ((int)uVar7 < local_18) {
    do {
      iVar8 = iVar4;
      iVar14 = local_1c;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_9 = uVar7;
      if (local_1c < local_14) {
        do {
          iVar4 = iVar8;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          _param_6 = iVar14;
          if (iVar8 < iVar10) {
            do {
              sVar11 = (short)iVar14;
              if (((((((-1 < sVar11) && (sVar11 < sVar9)) && (sVar3 = (short)uVar7, -1 < sVar3)) &&
                    ((sVar3 < g_worldGrid.sizeY && (sVar6 = (short)iVar8, -1 < sVar6)))) &&
                   ((sVar6 < g_worldGrid.sizeZ &&
                    ((this = g_worldGrid.cells
                             [(int)sVar3 * (int)sVar9 + (int)sVar6 * (int)g_worldGrid.planeStride +
                              (int)sVar11].objects[0], this != nullptr &&
                     (iVar10 = (*this->vtable[5].slots_00_28[0])(), uVar7 = param_9, iVar10 != 0))))
                   )) && (this[1].vtable < (STWorldObjectVTable *)0x8)) &&
                 ((g_playSystem_00802A38 == nullptr ||
                  (g_bulkInitializedRecords_008087C7[(int)this[1].vtable].field_0022 < 8)))) {
                bVar1 = *(byte *)&this[1].vtable;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_8 = STReplaceLowByte((uint32_t)(param_8), (uint8_t)(bVar1));
                if (DAT_00808a8f == '\0') {
                  if (bVar1 == (byte)param_5) {
LAB_006375fd:
                    iVar10 = 0;
                  }
                  else {
                    uVar5 = param_5 & 0xff;
                    bVar2 = g_playerRelationMatrix[bVar1][uVar5];
                    if ((bVar2 == 0) && (g_playerRelationMatrix[uVar5][bVar1] == 0)) {
                      iVar10 = -2;
                    }
                    else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar5][bVar1] == 0)) {
                      iVar10 = -1;
                    }
                    else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar5][bVar1] == 1)) {
                      iVar10 = 1;
                    }
                    else {
                      if ((bVar2 != 1) || (g_playerRelationMatrix[uVar5][bVar1] != 1))
                      goto LAB_006375fd;
                      iVar10 = 2;
                    }
                  }
                  bVar15 = iVar10 < 0;
                }
                else {
                  bVar15 = g_bulkInitializedRecords_008087C7[param_5 & 0xff].field_0023 !=
                           g_bulkInitializedRecords_008087C7[bVar1].field_0023;
                  iVar14 = _param_6;
                }
                if ((bVar15) &&
                   (iVar10 = (*this->vtable[5].slots_00_28[2])(), uVar7 = param_9, iVar10 != 0)) {
                  st::fn_004031E3(this,(undefined2 *)((int)&param_4 + 2),
                                     (int *)((int)&param_3 + 2),(int *)&stack0x0000001e);
                  iVar10 = st::fn_006ACED8((int)STPiece<2,2>(param_4),(int)STPiece<2,2>(param_3),param_1,param_2);
                  uVar7 = param_9;
                  if (iVar10 < 0x28b) {
                    memset(local_58, 0, 0x20); /* compiler bulk-zero initialization */
                    local_58[2] = *(int *)&this->field_0x18;
                    local_58[3] = 4;
                    local_58[4] = 0x110;
                    local_44 = local_38;
                    (*this->vtable->slots_00_28[0])(local_58);
                    local_8 = local_8 + 1;
                    uVar7 = param_9;
                    iVar14 = _param_6;
                  }
                }
              }
              iVar8 = iVar8 + 1;
              iVar10 = local_c;
              iVar4 = local_10;
              sVar9 = g_worldGrid.sizeX;
            } while (iVar8 < local_c);
          }
          iVar14 = iVar14 + 1;
          iVar8 = iVar4;
        } while (iVar14 < local_14);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < local_18);
  }
  return local_8;
}

// 006377B0 FUN_006377b0
#line 4 "decomp/ST.exe/functions/006377B0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl st::fn_006377B0(uint param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  ushort *puVar1;
  uint local_8;

  puVar1 = st::fn_00709AF0
                     (PTR_00806774,CASE_1D,"bulb_tel",0xffffffff,0,1,0,nullptr);
  if ((puVar1 != nullptr) && (g_sT3DSMAPContext_00807598 != nullptr)) {
    st::fn_006E8660
              (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar1,9),
               STField<uint>(puVar1,0xd),0x5a,0x33,0);
    st::fn_006E98E0
              (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar1,STField<int>(puVar1,0x21),1);
    st::fn_006EA270(g_sT3DSMAPContext_00807598,local_8,0,param_6);
    st::fn_006EA960
              (g_sT3DSMAPContext_00807598,local_8,(float)param_3 * _DAT_007904f8 * _DAT_007904f0,
               (float)param_4 * _DAT_007904f8 * _DAT_007904f0,
               (float)param_5 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    st::fn_006EA460(g_sT3DSMAPContext_00807598,local_8,param_1);
    if (param_2 == 0) {
      param_1 = 0xffffffff;
    }
    st::fn_006EA050(g_sT3DSMAPContext_00807598,local_8,1,param_1,0);
    st::fn_006EAAA0(g_sT3DSMAPContext_00807598,local_8,0);
  }
  return;
}

// 00637930 FUN_00637930
#line 4 "decomp/ST.exe/functions/00637930/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __cdecl
st::fn_00637930(uint param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,int param_7)

{
  undefined4 uVar1;
  ushort *puVar2;
  uint local_8;

  uVar1 = st::fn_004054C0(param_3,param_4,param_5);
  if ((((char)uVar1 != '\0') &&
      (puVar2 = st::fn_00709AF0
                          (PTR_0080678c,CASE_1D,"tlo_emb6",0xffffffff,0,1,0,
                           nullptr), puVar2 != nullptr)) &&
     (g_sT3DSMAPContext_00807598 != nullptr)) {
    st::fn_006E8660
              (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar2,9),
               STField<uint>(puVar2,0xd),0x10,0x15,0);
    st::fn_006E98E0
              (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar2,STField<int>(puVar2,0x21),1);
    st::fn_006EA270(g_sT3DSMAPContext_00807598,local_8,0,param_6);
    st::fn_006EA960
              (g_sT3DSMAPContext_00807598,local_8,(float)param_3 * _DAT_007904f8 * _DAT_007904f0,
               (float)param_4 * _DAT_007904f8 * _DAT_007904f0,
               (float)param_5 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    st::fn_006EA460(g_sT3DSMAPContext_00807598,local_8,param_1);
    if (param_2 == 0) {
      param_1 = 0xffffffff;
    }
    st::fn_006EA050(g_sT3DSMAPContext_00807598,local_8,1,param_1,param_7);
    st::fn_006EAAA0(g_sT3DSMAPContext_00807598,local_8,0);
  }
  return;
}

// 00637AE0 FUN_00637ae0
#line 4 "decomp/ST.exe/functions/00637AE0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __cdecl st::fn_00637AE0(int param_1,int param_2,int param_3)

{
  ushort *puVar1;
  uint local_8;

  puVar1 = st::fn_00709AF0
                     (PTR_00806774,CASE_1D,"star_pp",0xffffffff,0,1,0,nullptr);
  if ((puVar1 != nullptr) && (g_sT3DSMAPContext_00807598 != nullptr)) {
    st::fn_006E8660
              (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar1,9),
               STField<uint>(puVar1,0xd),0x5a,0x45,0);
    st::fn_006E98E0
              (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar1,STField<int>(puVar1,0x21),1);
    st::fn_006EA960
              (g_sT3DSMAPContext_00807598,local_8,(float)param_1 * _DAT_007904f8 * _DAT_007904f0,
               (float)param_2 * _DAT_007904f8 * _DAT_007904f0,
               (float)param_3 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    st::fn_006EA270(g_sT3DSMAPContext_00807598,local_8,0,0);
    st::fn_006EA4E0(g_sT3DSMAPContext_00807598,local_8,1,0x5a,0x45);
    st::fn_006EA050(g_sT3DSMAPContext_00807598,local_8,1,0xffffffff,0);
    st::fn_006EAAA0(g_sT3DSMAPContext_00807598,local_8,0);
  }
  return;
}

// 00637C50 FUN_00637c50
#line 4 "decomp/ST.exe/functions/00637C50/decomp.c"
void __cdecl st::fn_00637C50(uint param_1,uint param_2,int param_3)

{
  ushort *puVar1;
  char *text;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  uVar3 = param_2;
  if (param_2 == 0) {
    text = "mstarB";
  }
  else {
    text = "GrstarB";
  }
  puVar1 = st::fn_00709AF0
                     (PTR_00806774,CASE_1D,text,0xffffffff,0,1,0,nullptr);
  if ((puVar1 != nullptr) && (g_sT3DSMAPContext_00807598 != nullptr)) {
    if (uVar3 == 0) {
      uVar3 = STField<uint>(puVar1,0xd);
      uVar2 = STField<uint>(puVar1,9);
      uVar5 = 0x45;
      uVar4 = 0x5a;
    }
    else {
      uVar3 = STField<uint>(puVar1,0xd);
      uVar2 = STField<uint>(puVar1,9);
      uVar5 = 100;
      uVar4 = 0x78;
    }
    st::fn_006E8660
              (g_sT3DSMAPContext_00807598,(int *)&param_2,1,0,uVar2,uVar3,uVar4,uVar5,0);
    st::fn_006E98E0
              (g_sT3DSMAPContext_00807598,param_2,0,*(int *)puVar1,STField<int>(puVar1,0x21),1);
    st::fn_006EA270(g_sT3DSMAPContext_00807598,param_2,0,0);
    st::fn_006EA050(g_sT3DSMAPContext_00807598,param_2,2,param_1,param_3);
    st::fn_006EAAA0(g_sT3DSMAPContext_00807598,param_2,0);
  }
  return;
}

// 00637D80 FUN_00637d80
#line 4 "decomp/ST.exe/functions/00637D80/decomp.c"
void __cdecl st::fn_00637D80(uint param_1,int param_2)

{
  ushort *puVar1;
  uint local_8;

  puVar1 = st::fn_00709AF0
                     (PTR_00806774,CASE_1D,"mstarR",0xffffffff,0,1,0,nullptr);
  if ((puVar1 != nullptr) && (g_sT3DSMAPContext_00807598 != nullptr)) {
    st::fn_006E8660
              (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar1,9),
               STField<uint>(puVar1,0xd),0x5a,0x45,0);
    st::fn_006E98E0
              (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar1,STField<int>(puVar1,0x21),1);
    st::fn_006EA270(g_sT3DSMAPContext_00807598,local_8,0,0);
    st::fn_006EA050(g_sT3DSMAPContext_00807598,local_8,2,param_1,param_2);
    st::fn_006EAAA0(g_sT3DSMAPContext_00807598,local_8,0);
  }
  return;
}

// 00637E60 FUN_00637e60
#line 4 "decomp/ST.exe/functions/00637E60/decomp.c"
void __cdecl st::fn_00637E60(uint param_1,int param_2)

{
  ushort *puVar1;
  uint local_8;

  puVar1 = st::fn_00709AF0
                     (PTR_00806774,CASE_1D,"star_em",0xffffffff,0,1,0,nullptr);
  if ((puVar1 != nullptr) && (g_sT3DSMAPContext_00807598 != nullptr)) {
    st::fn_006E8660
              (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar1,9),
               STField<uint>(puVar1,0xd),0x5a,0x45,0);
    st::fn_006E98E0
              (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar1,STField<int>(puVar1,0x21),1);
    st::fn_006EA270(g_sT3DSMAPContext_00807598,local_8,0,0);
    st::fn_006EA050(g_sT3DSMAPContext_00807598,local_8,1,param_1,param_2);
    st::fn_006EAAA0(g_sT3DSMAPContext_00807598,local_8,0);
  }
  return;
}

// 00637F40 FUN_00637f40
#line 4 "decomp/ST.exe/functions/00637F40/decomp.c"
void __cdecl st::fn_00637F40(uint param_1,uint param_2,int param_3)

{
  ushort *puVar1;
  char *text;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  uVar3 = param_2;
  if (param_2 == 0) {
    text = "mstarG";
  }
  else {
    text = "mstarGb";
  }
  puVar1 = st::fn_00709AF0
                     (PTR_00806774,CASE_1D,text,0xffffffff,0,1,0,nullptr);
  if ((puVar1 != nullptr) && (g_sT3DSMAPContext_00807598 != nullptr)) {
    if (uVar3 == 0) {
      uVar3 = STField<uint>(puVar1,0xd);
      uVar2 = STField<uint>(puVar1,9);
      uVar5 = 0x45;
      uVar4 = 0x5a;
    }
    else {
      uVar3 = STField<uint>(puVar1,0xd);
      uVar2 = STField<uint>(puVar1,9);
      uVar5 = 100;
      uVar4 = 0x78;
    }
    st::fn_006E8660
              (g_sT3DSMAPContext_00807598,(int *)&param_2,1,0,uVar2,uVar3,uVar4,uVar5,0);
    st::fn_006E98E0
              (g_sT3DSMAPContext_00807598,param_2,0,*(int *)puVar1,STField<int>(puVar1,0x21),1);
    st::fn_006EA270(g_sT3DSMAPContext_00807598,param_2,0,0);
    st::fn_006EA050(g_sT3DSMAPContext_00807598,param_2,2,param_1,param_3);
    st::fn_006EAAA0(g_sT3DSMAPContext_00807598,param_2,0);
  }
  return;
}

// 00638070 FUN_00638070
#line 4 "decomp/ST.exe/functions/00638070/decomp.c"
void __cdecl st::fn_00638070(uint param_1,int param_2)

{
  ushort *puVar1;
  uint local_8;

  puVar1 = st::fn_00709AF0
                     (PTR_00806774,CASE_1D,"iso_frnt",0xffffffff,0,1,0,nullptr);
  if ((puVar1 != nullptr) && (g_sT3DSMAPContext_00807598 != nullptr)) {
    st::fn_006E8660
              (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar1,9),
               STField<uint>(puVar1,0xd),0x5a,0x45,0);
    st::fn_006E98E0
              (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar1,STField<int>(puVar1,0x21),1);
    st::fn_006EA270(g_sT3DSMAPContext_00807598,local_8,0,0);
    st::fn_006EA050(g_sT3DSMAPContext_00807598,local_8,2,param_1,param_2);
    st::fn_006EAAA0(g_sT3DSMAPContext_00807598,local_8,0);
  }
  puVar1 = st::fn_00709AF0
                     (PTR_00806774,CASE_1D,"iso_back",0xffffffff,0,1,0,nullptr);
  if ((puVar1 != nullptr) && (g_sT3DSMAPContext_00807598 != nullptr)) {
    st::fn_006E8660
              (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar1,9),
               STField<uint>(puVar1,0xd),0x5a,0x45,0);
    st::fn_006E98E0
              (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar1,STField<int>(puVar1,0x21),1);
    st::fn_006EA270(g_sT3DSMAPContext_00807598,local_8,0,0);
    st::fn_006EA050(g_sT3DSMAPContext_00807598,local_8,2,param_1,param_2);
    st::fn_006EA460(g_sT3DSMAPContext_00807598,param_1,local_8);
    st::fn_006EAAA0(g_sT3DSMAPContext_00807598,local_8,0);
  }
  return;
}

// 00638230 FUN_00638230
#line 4 "decomp/ST.exe/functions/00638230/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl st::fn_00638230(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  ushort *puVar1;
  uint local_8;

  puVar1 = st::fn_00709AF0
                     (PTR_00806774,CASE_1D,"rippleM",0xffffffff,0,1,0,nullptr);
  if ((puVar1 != nullptr) && (g_sT3DSMAPContext_00807598 != nullptr)) {
    st::fn_006E8660
              (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar1,9),
               STField<uint>(puVar1,0xd),(int)STField<uint>(puVar1,9) / 2,
               (int)STField<uint>(puVar1,0xd) / 2 - 0x17,0);
    st::fn_006E98E0
              (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar1,STField<int>(puVar1,0x21),1);
    st::fn_006EA270(g_sT3DSMAPContext_00807598,local_8,0,0);
    st::fn_006EA8A0(g_sT3DSMAPContext_00807598,local_8,0,2,nullptr);
    st::fn_006EA960
              (g_sT3DSMAPContext_00807598,local_8,(float)param_3 * _DAT_007904f8 * _DAT_007904f0,
               (float)param_4 * _DAT_007904f8 * _DAT_007904f0,
               (float)param_5 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    st::fn_006EA4E0
              (g_sT3DSMAPContext_00807598,local_8,1,STField<int>(puVar1,9) / 2,
               STField<int>(puVar1,0xd) / 2 + -0x17);
    st::fn_006EA050
              (g_sT3DSMAPContext_00807598,local_8,1,0xffffffff,param_2);
    st::fn_006EAAA0(g_sT3DSMAPContext_00807598,local_8,0);
  }
  return;
}

// 006383E0 FUN_006383e0
#line 4 "decomp/ST.exe/functions/006383E0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00638697 MOV DX,word ptr
   [EBP + 0x18]

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0063868F MOV CX,word ptr
   [EBP + 0x1c] */

int __cdecl
st::fn_006383E0(int param_1,int param_2,int param_3,undefined4 param_4,ushort param_5,ushort param_6,
            undefined4 param_7,undefined4 param_8,int param_9)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  STWorldObject *this;
  short sVar9;
  int iVar10;
  undefined4 **ppuVar11;
  undefined4 *local_a8;
  int *local_a4;
  int local_a0;
  int local_90;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 *local_74 [9];
  int local_50;
  undefined4 local_48 [3];
  ushort local_3c;
  ushort local_3a;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079d1c8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff4c;
  local_80 = 0;
  sVar9 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    iVar10 = (short)(((short)(param_1 / 0xc9) + sVar9) -
                    (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar10 = (int)(short)(((short)(param_1 / 0xc9) + sVar9) -
                         (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar9 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar5 = (short)(((short)(param_2 / 0xc9) + sVar9) -
                   (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(param_2 / 0xc9) + sVar9) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  sVar9 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    iVar6 = (short)(((short)(param_3 / 200) + sVar9) -
                   (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar6 = (int)(short)(((short)(param_3 / 200) + sVar9) -
                        (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  iVar8 = iVar5 - param_9;
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  local_20 = iVar10 - param_9;
  if (local_20 < 0) {
    local_20 = 0;
  }
  iVar3 = local_20;
  local_78 = iVar6 - param_9;
  if (local_78 < 0) {
    local_78 = 0;
  }
  iVar5 = iVar5 + 1 + param_9;
  if (g_worldGrid.sizeY < iVar5) {
    iVar5 = (int)g_worldGrid.sizeY;
  }
  local_7c = iVar10 + 1 + param_9;
  if (g_worldGrid.sizeX < local_7c) {
    local_7c = (int)g_worldGrid.sizeX;
  }
  local_90 = iVar6 + 1 + param_9;
  if (5 < local_90) {
    local_90 = 5;
  }
  local_8 = 0;
  ExceptionList = &local_14;
  st::fn_0072DA40();
  local_8 = 0xffffffff;
  local_a0 = 0;
  local_1c = &stack0xffffff4c;
  do {
    if (iVar5 <= iVar8) {
      ExceptionList = local_14;
      return local_80;
    }
    local_a4 = (int *)&stack0xffffff4c;
    local_50 = iVar8;
    iVar10 = iVar3;
    for (; iVar10 < local_7c; iVar10 = iVar10 + 1) {
      if (local_78 < local_90) {
        local_a8 = (undefined4 *)(&stack0xffffff4c + local_a0 * 4);
        iVar6 = local_78;
        do {
          sVar9 = (short)iVar10;
          if (((((sVar9 < 0) || (g_worldGrid.sizeX <= sVar9)) || (sVar2 = (short)iVar8, sVar2 < 0))
              || ((g_worldGrid.sizeY <= sVar2 || (sVar7 = (short)iVar6, sVar7 < 0)))) ||
             (g_worldGrid.sizeZ <= sVar7)) {
            this = nullptr;
          }
          else {
            this = STGridAt3D(g_worldGrid, sVar9, sVar2, sVar7).objects[0];
          }
          if ((this != nullptr) &&
             (iVar3 = (*this->vtable[5].slots_00_28[0])(), iVar8 = local_50, iVar3 != 0)) {
            bVar1 = false;
            if ((this->value_20 == 1000) &&
               (iVar8 = this->GetObjectTypeId(),
               *(int *)(&DAT_00791d68 + iVar8 * 4) == 1)) {
              iVar8 = 0;
              if (0 < local_a0) {
                piVar4 = local_a4;
                do {
                  if (*piVar4 == *(int *)&this->field_0x18) {
                    bVar1 = true;
                    break;
                  }
                  iVar8 = iVar8 + 1;
                  piVar4 = piVar4 + 1;
                } while (iVar8 < local_a0);
              }
              iVar8 = local_50;
              if (bVar1) goto LAB_006386ce;
              *local_a8 = *(undefined4 *)&this->field_0x18;
              local_a0 = local_a0 + 1;
              local_a8 = local_a8 + 1;
            }
            ppuVar11 = local_74;
            for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
              *ppuVar11 = nullptr;
              ppuVar11 = ppuVar11 + 1;
            }
            memset(local_48, 0, 0x1c); /* compiler bulk-zero initialization */
            local_74[2] = *(undefined4 **)&this->field_0x18;
            local_74[3] = (undefined4 *)0x4;
            local_48[2] = param_4;
            local_3c = param_6;
            local_3a = param_5;
            local_48[0] = param_8;
            local_48[1] = param_7;
            local_74[4] = (undefined4 *)0x110;
            local_74[5] = local_48;
            (*this->vtable->slots_00_28[0])(local_74);
            local_80 = local_80 + 1;
            iVar8 = local_50;
          }
LAB_006386ce:
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_90);
      }
      iVar3 = local_20;
    }
    iVar8 = iVar8 + 1;
  } while( true );
}

// 00638830 FUN_00638830
#line 4 "decomp/ST.exe/functions/00638830/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl st::fn_00638830(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  ushort *puVar1;
  uint local_8;

  puVar1 = st::fn_00709AF0
                     (PTR_00806774,CASE_1D,"rippleB",0xffffffff,0,1,0,nullptr);
  if ((puVar1 != nullptr) && (g_sT3DSMAPContext_00807598 != nullptr)) {
    st::fn_006E8660
              (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar1,9),
               STField<uint>(puVar1,0xd),(int)STField<uint>(puVar1,9) / 2,
               (int)STField<uint>(puVar1,0xd) / 2 - 0x17,0);
    st::fn_006E98E0
              (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar1,STField<int>(puVar1,0x21),1);
    st::fn_006EA270(g_sT3DSMAPContext_00807598,local_8,0,0);
    st::fn_006EA8A0(g_sT3DSMAPContext_00807598,local_8,0,2,PTR_008032bc);
    st::fn_006EA960
              (g_sT3DSMAPContext_00807598,local_8,(float)param_3 * _DAT_007904f8 * _DAT_007904f0,
               (float)param_4 * _DAT_007904f8 * _DAT_007904f0,
               (float)param_5 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    st::fn_006EA4E0
              (g_sT3DSMAPContext_00807598,local_8,1,STField<int>(puVar1,9) / 2,
               STField<int>(puVar1,0xd) / 2 + -0x17);
    st::fn_006EA050
              (g_sT3DSMAPContext_00807598,local_8,2,0xffffffff,param_2);
    st::fn_006EAAA0(g_sT3DSMAPContext_00807598,local_8,0);
  }
  return;
}

// 006389F0 FUN_006389f0
#line 4 "decomp/ST.exe/functions/006389F0/decomp.c"
undefined4 __cdecl st::fn_006389F0(short param_1,short param_2,short param_3)

{
  STWorldObject *pSVar1;
  int iVar2;
  undefined4 local_28 [8];
  undefined4 local_8;

  local_8 = 0;
  iVar2 = st::fn_00404D3B(param_1,param_2,param_3);
  if (((((iVar2 == 0) && (-1 < param_1)) && (param_1 < g_worldGrid.sizeX)) &&
      ((-1 < param_2 && (param_2 < g_worldGrid.sizeY)))) &&
     ((-1 < param_3 &&
      ((param_3 < g_worldGrid.sizeZ &&
       (pSVar1 = STGridAt3D(g_worldGrid, param_1, param_2, param_3).objects[1],
       pSVar1 != nullptr)))))) {
    iVar2 = pSVar1->value_20;
    if ((iVar2 == 0xbe) || ((iVar2 == 0x1ae || (iVar2 == 0x8c)))) {
      local_8 = 0xffffffff;
    }
    else {
      memset(local_28, 0, 0x20); /* compiler bulk-zero initialization */
      switch(pSVar1->value_20) {
      case 0x32:
      case 0xfa:
      case 0x10e:
      case 0x118:
        local_28[2] = *(undefined4 *)&pSVar1->field_0x8;
        local_28[3] = 2;
        local_28[4] = 0x128;
        (*g_playSystem_00802A38->vtable->SendMessage)
                  ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,(int)local_28);
        return 1;
      }
    }
  }
  return local_8;
}

// 00638CA0 FUN_00638ca0
#line 4 "decomp/ST.exe/functions/00638CA0/decomp.c"
undefined4 __thiscall st::fn_00638CA0(void *this,STMessage *param_1)

{
  STT3DSprC *this_00;
  byte bVar1;
  STMessageId SVar2;
  short sVar3;
  VisibleClassTy *pVVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *puVar9;
  byte *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_10;
  int local_c;
  byte *local_8;

  iVar5 = st::fn_00404F07(this,param_1);
  if (iVar5 == 0xffff) {
    return 0xffff;
  }
  SVar2 = param_1->id;
  if (MESS_SHARED_0003 < SVar2) {
    if (SVar2 != MESS_SHARED_010F) {
      return 0;
    }
    local_8 = st::fn_006AAC70(0x7a);
    st::fn_00402AC7(this,(undefined4 *)local_8);
    st::fn_004025F9
              (g_playSystem_00802A38,STField<int *>(this,0x18),local_8,
               (AnonShape_0060EA30_DCEB68AD *)0x7a);
    st::fn_006AB060(&local_8);
    return 0;
  }
  if (SVar2 == MESS_SHARED_0003) {
    st::fn_004021D5((STT3DSprC *)((int)this + 0x1d5));
    return 0;
  }
  if (SVar2 != MESS_ID_NONE) {
    if (SVar2 != MESS_ID_CREATE) {
      return 0;
    }
    puVar9 = (byte *)((param_1->arg0).ptr);
    if (puVar9[3] == 2) {
      st::fn_004056B4(this,puVar9);
      puVar9 = (byte *)((int)this + 0x2ab);
      memset(puVar9, 0, 0x2d); /* compiler bulk-zero initialization */
      puVar9 = (byte *)((byte *)puVar9 + 0x2c);
      iVar5 = 0;
      if (STField<char>(this,0x26f) == '\x02') {
        STField<undefined1>(this,0x26f) = 3;
      }
    }
    else {
      puVar10 = (byte *)((int)this + 0x231);
      memmove(puVar10, puVar9, 0x2e); /* compiler REP MOVS byte copy */
      st::fn_0040319D(this,g_playSystem_00802A38->field_00E4);
    }
    if (STField<char>(this,0x270) == '\0') {
      return 0;
    }
    if (STField<char>(this,0x26f) == '\x01') {
      return 0;
    }
    st::fn_00402234(this);
    return 0;
  }
  switch(STField<undefined1>(this,0x26f)) {
  case 0:
    if (STField<char>(this,0x270) == '\0') {
      st::fn_00402234(this);
    }
    uVar6 = st::fn_004033A5(this,g_playSystem_00802A38->field_00E4);
    if (0 < (int)uVar6) {
      iVar5 = STField<int>(this,0x2bf);
      if (iVar5 != 0) {
        if (STField<int>(this,0x2c7) == 0) {
          st::fn_006EA460
                    (STField<void *>(this,0x211),STField<uint>(this,0x1ed),
                     *(int *)(iVar5 + 0x1ed));
        }
        else {
          st::fn_006EA3E0
                    (STField<void *>(this,0x211),STField<uint>(this,0x1ed),
                     *(int *)(iVar5 + 0x1ed));
        }
      }
      uVar12 = 0x53;
      uVar11 = 0x5a;
      iVar5 = 1;
      uVar6 = st::fn_004052CC((STT3DSprC *)((int)this + 0x1d5));
      st::fn_006EA4E0
                (STField<void *>(this,0x211),uVar6,iVar5,uVar11,uVar12);
      STField<undefined1>(this,0x26f) = 2;
      st::fn_00402234(this);
      return 0;
    }
    if (STField<char>(this,0x270) == '\0') {
      return 0;
    }
    st::fn_00403107(this,STField<ushort>(this,0x27a),STField<short>(this,0x27e),
                 STField<ushort>(this,0x282));
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0xd8))();
    pVVar4 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == nullptr) {
      return 0;
    }
    iVar5 = STField<int>(this,0x282);
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (STMessage *)
                ((short)(((short)(iVar5 / 200) + sVar3) -
                        (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (STMessage *)
                (int)(short)(((short)(iVar5 / 200) + sVar3) -
                            (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
    }
    iVar5 = STField<int>(this,0x27e);
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                          (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
    }
    iVar7 = STField<int>(this,0x27a);
    sVar3 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    if (((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
         (st::fn_00403F53
                    (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar7,iVar5,
                     &local_c,&local_10), -1 < (int)param_1)) &&
        ((((int)param_1 < 5 && (-1 < local_c)) &&
         ((local_c < pVVar4->field_0030 &&
          ((local_10 = local_10 + g_centeredOffsets5[(int)param_1], -1 < local_10 &&
           (local_10 < pVVar4->field_0034)))))))) && (pVVar4->field_004C != nullptr)) {
      bVar1 = pVVar4->field_004C[local_c + local_10 * pVVar4->field_0030];
joined_r0x00639236:
      if (bVar1 == 0) {
        if (STField<char>(this,0x271) == '\0') {
          return 0;
        }
        st::fn_00403D0F((STT3DSprC *)((int)this + 0x1d5));
        STField<undefined1>(this,0x271) = 0;
        return 0;
      }
    }
    break;
  case 1:
    if (g_playSystem_00802A38->field_00E4 - STField<int>(this,0x2a3) <
        STField<uint>(this,0x251)) {
      return 0;
    }
    STField<undefined1>(this,0x26f) = 0;
    uVar6 = g_playSystem_00802A38->field_00E4;
    STField<undefined4>(this,0x251) = 0;
    STField<uint>(this,0x2a3) = uVar6;
    if (STField<char>(this,0x270) == '\0') {
      return 0;
    }
    st::fn_00402234(this);
    return 0;
  case 2:
    if (STField<char>(this,0x270) == '\0') {
      STField<undefined1>(this,0x26f) = 3;
      return 0;
    }
    this_00 = (STT3DSprC *)((int)this + 0x1d5);
    iVar5 = st::fn_004042AF(this_00,'\r');
    if (STField<char>(this,0x2a2) != '\0') {
      iVar7 = st::fn_004022AC(this_00,'\x0e');
      iVar8 = st::fn_004042AF(this_00,'\x0e');
      if ((iVar7 + -1 <= iVar8) && (STField<char>(this,0x270) != '\0')) {
        st::fn_00404264(this_00,0xe);
      }
    }
    if ((iVar5 == 0x17) && (STField<char>(this,0x270) != '\0')) {
      st::fn_00405240(this_00,0xf,g_playSystem_00802A38->field_00E4);
    }
    iVar5 = st::fn_004022AC(this_00,'\r');
    iVar7 = st::fn_004042AF(this_00,'\r');
    if (iVar5 + -1 == iVar7) {
      st::fn_00404264(this_00,0xd);
    }
    iVar5 = st::fn_004022AC(this_00,'\x0f');
    iVar7 = st::fn_004042AF(this_00,'\x0f');
    if (iVar5 + -1 == iVar7) {
      STField<undefined1>(this,0x26f) = 3;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0xd8))();
    pVVar4 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == nullptr) {
      return 0;
    }
    iVar5 = STField<int>(this,0x282);
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (STMessage *)
                ((short)(((short)(iVar5 / 200) + sVar3) -
                        (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (STMessage *)
                (int)(short)(((short)(iVar5 / 200) + sVar3) -
                            (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
    }
    iVar5 = STField<int>(this,0x27e);
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                          (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
    }
    iVar7 = STField<int>(this,0x27a);
    sVar3 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    if ((((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
          (st::fn_00403F53
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar7,iVar5,
                      &local_10,&local_c), -1 < (int)param_1)) &&
         (((int)param_1 < 5 && (-1 < local_10)))) &&
        ((local_10 < pVVar4->field_0030 &&
         ((local_c = local_c + g_centeredOffsets5[(int)param_1], -1 < local_c &&
          (local_c < pVVar4->field_0034)))))) && (pVVar4->field_004C != nullptr)) {
      bVar1 = pVVar4->field_004C[local_10 + local_c * pVVar4->field_0030];
      goto joined_r0x00639236;
    }
    break;
  case 3:
    st::fn_00405484(this);
    return 0;
  default:
    goto switchD_00638d7a_default;
  }
  if (STField<char>(this,0x271) == '\0') {
    st::fn_00402982((void *)((int)this + 0x1d5),0);
    STField<undefined1>(this,0x271) = 1;
    return 0;
  }
switchD_00638d7a_default:
  return 0;
}

// 00639450 FUN_00639450
#line 4 "decomp/ST.exe/functions/00639450/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7BC>00402FCC

   [STObjectFactoryApplier] Central object factory for 0x010C (ST_OBJECT_TYPE_010C).
   Evidence: registry[19] at 007CA7B8 stores type 0x010C and executable pointer 00402FCC; allocation
   size 728 has no unique current class-layout match */

void * __cdecl st::fn_00639450(void)

{
  AnonShape_00639480_B53D0B0F *pAVar1;

  pAVar1 = (AnonShape_00639480_B53D0B0F *)st::fn_006B04D0(0x2d8);
  if (pAVar1 != nullptr) {
    pAVar1 = st::fn_00402397(pAVar1);
    return pAVar1;
  }
  return nullptr;
}

// 00639480 FUN_00639480
#line 4 "decomp/ST.exe/functions/00639480/decomp.c"
/* [STReturnSemanticsApplier] typed_pointer_return.
   Evidence: all 1 value-return path(s) forward Listing variable param_1 with evidence-backed
   structure /SubmarineTitans/Recovered/PointerShapes/AnonShape_00639480_B53D0B0F (current recovered
   extent=628) */

AnonShape_00639480_B53D0B0F * __fastcall st::fn_00639480(AnonShape_00639480_B53D0B0F *param_1)

{
  int iVar1;

  st::fn_00401933((STGameObjC *)param_1);
  st::fn_00401316((AnonShape_004AB810_8E5693D5 *)&param_1->field_01D5);
  param_1->field_01D5 = &st_global_0079D338;
  *(VTable_0079D1D8 **)param_1 = &st_global_0079D1D8;
  memset(&param_1->field_0x231, 0, 0x3e); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&param_1->field_0x272, 0, 0x39); /* compiler bulk-zero initialization */
  param_1->field_0x270 = 1;
  param_1->field_026F = 0;
  param_1->field_0271 = 0;
  return param_1;
}

// 00639500 FUN_00639500
#line 4 "decomp/ST.exe/functions/00639500/decomp.c"
void __thiscall st::fn_00639500(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = (int)STField<short>(this,0x245);
  STField<int>(this,0x282) = (int)STField<short>(this,0x249);
  STField<int>(this,0x27a) = iVar1;
  iVar2 = (int)STField<short>(this,0x247);
  STField<int>(this,0x27e) = iVar2;
  STField<int>(this,0x25f) = STField<short>(this,0x24b) - iVar1;
  STField<int>(this,0x263) = STField<short>(this,0x24d) - iVar2;
  iVar1 = st::fn_006ACED8(iVar1,iVar2,(int)STField<short>(this,0x24b),
                       (int)STField<short>(this,0x24d));
  STField<int>(this,0x267) = iVar1;
  if (iVar1 == 0) {
    STField<undefined4>(this,0x267) = 1;
  }
  iVar1 = (STField<int>(this,0x267) + -100) / 0x32;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  STField<int>(this,0x26b) =
       (((&DAT_007d1dc0)[iVar1 * 3] * (int)STField<short>(this,0x249) +
        (&DAT_007d1dc4)[iVar1 * 3]) * (int)STField<short>(this,0x249) +
       (&DAT_007d1dc8)[iVar1 * 3]) / 0x19a28;
  STField<undefined4>(this,0x2a3) = param_1;
  if (STField<int>(this,0x251) != 0) {
    STField<undefined1>(this,0x26f) = 1;
  }
  return;
}

// 00639630 FUN_00639630
#line 4 "decomp/ST.exe/functions/00639630/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00639630 returns return of sub_006E60A0 @ 00639656 */

int __fastcall st::fn_00639630(void *param_1)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = STField<undefined4>(param_1,8);
  local_18 = 0;
  local_14 = 10;
  iVar1 = st::fn_006E60A0(param_1,local_24);
  return iVar1;
}

// 00639670 FUN_00639670
#line 4 "decomp/ST.exe/functions/00639670/decomp.c"
uint __thiscall st::fn_00639670(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_10;
  undefined4 local_c;
  short local_6;

  iVar4 = param_1 - STField<int>(this,0x2a3);
  if (iVar4 == 0) {
    return 0;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = ((iVar4 * 500) / 0x1e + (iVar4 * iVar4 * 1000) / 900) / 10;
  STField<undefined4>(this,0x286) = STField<undefined4>(this,0x27a);
  STField<undefined4>(this,0x28e) = STField<undefined4>(this,0x282);
  STField<undefined4>(this,0x28a) = STField<undefined4>(this,0x27e);
  local_c = (STField<int>(this,0x25f) * param_1) / STField<int>(this,0x267) +
            (int)STField<short>(this,0x245);
  STField<int>(this,0x27a) = local_c;
  iVar3 = (int)STField<short>(this,0x247) +
          (STField<int>(this,0x263) * param_1) / STField<int>(this,0x267);
  STField<int>(this,0x27e) = iVar3;
  iVar1 = (int)STField<short>(this,0x249) -
          ((STField<int>(this,0x26b) * iVar4 * 10) / 0x1e - (iVar4 * iVar4 * 300) / 900) / 10;
  iVar4 = STField<int>(this,0x286);
  STField<int>(this,0x282) = iVar1;
  uVar2 = st::fn_00404516
                    ((AnonReceiver_00601500 *)((int)this + 0x2ab),local_c,iVar3,iVar1,iVar4,iVar4,
                     iVar4,STField<int>(this,0x255),0x35c,STField<int>(this,0x25b),
                     STField<ushort>(this,0x259),0x10c,0,0);
  if ((int)uVar2 < 1) {
    return 0;
  }
  if (uVar2 == 1) {
    STField<undefined4>(this,0x27e) = STField<undefined4>(this,0x2cf);
    STField<undefined4>(this,0x27a) = STField<undefined4>(this,0x2cb);
    STField<undefined4>(this,0x282) = STField<undefined4>(this,0x2d3);
    STField<undefined4>(this,0x2bf) = 0;
    return 1;
  }
  if (uVar2 != 5) {
    if (uVar2 != 2) {
      return uVar2;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if ((STField<int *>(this,0x2bf) != nullptr) &&
       (iVar4 = (**(code **)(*STField<int *>(this,0x2bf) + 0xe0))
                          (STField<undefined4>(this,0x2c3),(int)&param_1 + 2,&local_6,
                           (int)&local_c + 2,&local_10), iVar4 != 0)) {
      STField<int>(this,0x2cf) = (int)local_6;
      STField<int>(this,0x27e) = (int)local_6;
      STField<int>(this,0x2cb) = (int)STPiece<2,2>(param_1);
      STField<int>(this,0x27a) = (int)STPiece<2,2>(param_1);
      STField<int>(this,0x2d3) = (int)STPiece<2,2>(local_c);
      STField<int>(this,0x282) = (int)STPiece<2,2>(local_c);
      STField<undefined4>(this,0x2c7) = local_10;
      return 2;
    }
  }
  st::fn_00405484(this);
  return uVar2;
}

// 00639990 FUN_00639990
#line 4 "decomp/ST.exe/functions/00639990/decomp.c"
undefined4 __fastcall st::fn_00639990(AnonShape_00639990_2135AB0A *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;

  if (param_1->field_026F < 2) {
    puVar1 = &param_1->field_0x1d5;
    iVar2 = st::fn_00404183((STT3DSprC *)puVar1,0xd,PTR_00806774,"trmbomb",0x1d);
    if (iVar2 != 0) {
      return 0xffff;
    }
    iVar2 = st::fn_00404183((STT3DSprC *)puVar1,0xf,PTR_00806764,(char *)&DAT_007d1db8,0x1d);
    if (iVar2 != 0) {
      return 0xffff;
    }
    st::fn_004022D4(puVar1,'\x0f');
    st::fn_00403107(param_1,param_1->field_027A,param_1->field_027E,param_1->field_0282);
    uVar3 = st::fn_004022AC((STT3DSprC *)puVar1,'\r');
    param_1->field_0296 = uVar3;
    st::fn_00403ED6(puVar1,'\r');
    st::fn_00405240((STT3DSprC *)puVar1,0xd,g_playSystem_00802A38->field_00E4);
    param_1->field_0271 = 1;
  }
  else {
    if (param_1->field_026F != 2) {
      return 0;
    }
    puVar1 = &param_1->field_0x1d5;
    iVar2 = st::fn_00404183((STT3DSprC *)puVar1,0xd,PTR_00806774,&DAT_007d1db0,0x1d);
    if (iVar2 != 0) {
      return 0xffff;
    }
    iVar2 = st::fn_00404183((STT3DSprC *)puVar1,0xe,PTR_00806774,"expmask2",0x1d);
    if (iVar2 != 0) {
      return 0xffff;
    }
    st::fn_00405240((STT3DSprC *)puVar1,0xe,g_playSystem_00802A38->field_00E4);
    param_1->field_02A2 = 1;
    st::fn_00405240((STT3DSprC *)puVar1,0xd,g_playSystem_00802A38->field_00E4);
    param_1->field_0271 = 1;
    if (param_1->field_0292 != 0) {
      st::fn_00401064((STT3DSprC *)puVar1,'\r',param_1->field_0292);
    }
    if (param_1->field_0292 != 0) {
      st::fn_00401064((STT3DSprC *)puVar1,'\x0e',param_1->field_0292);
    }
    st::fn_00403107(param_1,param_1->field_027A,param_1->field_027E,param_1->field_0282);
    st::fn_004044EE((STT3DSprC *)puVar1,PTR_008032b8,0x10);
    st::fn_00403233((STT3DSprC *)puVar1,'\x0e');
    uVar3 = st::fn_004022AC((STT3DSprC *)puVar1,'\r');
    param_1->field_0296 = uVar3;
    uVar3 = st::fn_004022AC((STT3DSprC *)puVar1,'\x0e');
    param_1->field_029E = uVar3;
  }
  param_1->field_02A7 = g_playSystem_00802A38->field_00E4;
  return 0;
}

// 00639BF0 FUN_00639bf0
#line 4 "decomp/ST.exe/functions/00639BF0/decomp.c"
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __thiscall st::fn_00639BF0(void *this,undefined4 *param_1)

{
  byte *puVar2;

  STField<undefined4>(this,0x23d) = 2;
  if (this != nullptr) {
    puVar2 = (byte *)((int)this + 0x231);
    memmove(param_1, puVar2, 0x7a); /* compiler REP MOVS byte copy */
    return;
  }
  puVar2 = nullptr;
  memmove(param_1, puVar2, 0x7a); /* compiler REP MOVS byte copy */
  return;
}

// 00639C40 FUN_00639c40
#line 4 "decomp/ST.exe/functions/00639C40/decomp.c"
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __thiscall st::fn_00639C40(void *this,undefined4 *param_1)

{
  byte *puVar2;

  if (this != nullptr) {
    puVar2 = (byte *)((int)this + 0x231);
    memmove(puVar2, param_1, 0x7a); /* compiler REP MOVS byte copy */
    return;
  }
  puVar2 = nullptr;
  memmove(puVar2, param_1, 0x7a); /* compiler REP MOVS byte copy */
  return;
}

// 00639C90 FUN_00639c90
#line 4 "decomp/ST.exe/functions/00639C90/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall st::fn_00639C90(void *this,STMessage *param_1)

{
  STT3DSprC *pSVar1;
  byte bVar2;
  short sVar3;
  STMessageId SVar4;
  short sVar5;
  ushort uVar6;
  STMessage *pSVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  VisibleClassTy *pVVar11;
  uint uVar12;
  byte *puVar13;
  byte *puVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  int local_10;
  uint local_c;
  AnonPointee_TLOBaseTy_0607 *local_8;

  pSVar7 = param_1;
  iVar8 = st::fn_00404F07(this,param_1);
  if (iVar8 == 0xffff) {
    return 0xffff;
  }
  SVar4 = pSVar7->id;
  if (MESS_SHARED_0003 < SVar4) {
    if (SVar4 == MESS_SHARED_010F) {
      local_8 = (AnonPointee_TLOBaseTy_0607 *)st::fn_00405236(this,&local_10);
      local_14 = st::fn_004018D4((STT3DSprC *)((int)this + 0x1d5),(uint *)&param_1);
      if (param_1 != nullptr) {
        local_8 = st::fn_006ACF50(local_8,(int)&param_1->unknown_00 + local_10);
        puVar13 = (byte *)(local_14);
        puVar14 = (byte *)((int)&local_8->field_0000 + local_10);
        for (uVar10 = (uint)param_1 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar14 = *puVar13;
          puVar13 = (byte *)(puVar13 + 1);
          puVar14 = (byte *)(puVar14 + 1);
        }
        for (uVar10 = (uint)param_1 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar14 = *(undefined1 *)puVar13;
          puVar13 = (byte *)((int)puVar13 + 1);
          puVar14 = (byte *)((int)puVar14 + 1);
        }
      }
      st::fn_004025F9
                (g_playSystem_00802A38,STField<int *>(this,0x18),(byte *)local_8,
                 (AnonShape_0060EA30_DCEB68AD *)((int)&param_1->unknown_00 + local_10));
      st::fn_006AB060(&local_8);
      st::fn_006AB060(&local_14);
      return 0;
    }
    if (SVar4 != MESS_HITKILL) {
      return 0;
    }
    st::fn_00403D0F((STT3DSprC *)((int)this + 0x1d5));
switchD_00639e3d_caseD_d:
    st::fn_00405808(this);
    return 0;
  }
  if (SVar4 == MESS_SHARED_0003) {
    st::fn_004021D5((STT3DSprC *)((int)this + 0x1d5));
    if (-1 < (int)STField<uint>(this,0x33a)) {
      st::fn_006E8BA0
                (STField<void *>(this,0x211),STField<uint>(this,0x33a));
      STField<undefined4>(this,0x33a) = 0xffffffff;
    }
    if (-1 < (int)STField<uint>(this,0x353)) {
      st::fn_006E8BA0
                (STField<void *>(this,0x211),STField<uint>(this,0x353));
      STField<undefined4>(this,0x353) = 0xffffffff;
    }
    st::fn_004056A0(this);
    st::fn_004050EC(this);
    return 0;
  }
  if (SVar4 != MESS_ID_NONE) {
    if (SVar4 != MESS_ID_CREATE) {
      return 0;
    }
    puVar13 = (byte *)((pSVar7->arg0).ptr);
    if (puVar13[3] == 2) {
      st::fn_00402711(this,puVar13);
      memset((void *)((int)this + 899), 0, 0x2d); /* compiler bulk-zero initialization */
      return 0;
    }
    puVar14 = (byte *)((int)this + 0x231);
    memmove(puVar14, puVar13, 0x34); /* compiler REP MOVS byte copy */
    st::fn_00404CC8(this,g_playSystem_00802A38->field_00E4);
    if (STField<uint>(this,0x245) < 2) {
      iVar8 = st::fn_00404183
                        ((STT3DSprC *)((int)this + 0x1d5),0xd,PTR_00806774,"trmmine",0x1d);
      if (iVar8 != 0) {
        return 0xffff;
      }
      st::fn_00401EBA((STT3DSprC *)((int)this + 0x1d5),0xd,0x28,0x3b,'\0');
      iVar8 = 0x461;
    }
    else {
      if (STField<uint>(this,0x245) != 2) goto LAB_00639dab;
      iVar8 = st::fn_00404183
                        ((STT3DSprC *)((int)this + 0x1d5),0xd,PTR_00806774,"vacmine",0x1d);
      if (iVar8 != 0) {
        return 0xffff;
      }
      st::fn_00401EBA((STT3DSprC *)((int)this + 0x1d5),0xd,0,9,'\0');
      iVar8 = 0x49a;
    }
    st::fn_00403797(this,iVar8);
LAB_00639dab:
    st::fn_00403107(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
                 STField<ushort>(this,0x26e));
    st::fn_00403ED6((STT3DSprC *)((int)this + 0x1d5),'\r');
    st::fn_00405240((STT3DSprC *)((int)this + 0x1d5),0xd,g_playSystem_00802A38->field_00E4);
    STField<undefined1>(this,0x29f) = 1;
    STField<undefined1>(this,0x265) = 1;
    return 0;
  }
  switch(STField<undefined1>(this,0x265)) {
  case 1:
    uVar10 = st::fn_004027ED(this,g_playSystem_00802A38->field_00E4);
    if (0 < (int)uVar10) {
      if (uVar10 != 2) {
        st::fn_00403D0F((STT3DSprC *)((int)this + 0x1d5));
        STField<undefined1>(this,0x29f) = 0;
        STField<uint>(this,0x28e) = g_playSystem_00802A38->field_00E4;
        STField<undefined1>(this,0x265) = 2;
        return 0;
      }
      pSVar1 = (STT3DSprC *)((int)this + 0x1d5);
      iVar8 = st::fn_00404183(pSVar1,0xd,PTR_00806774,"exptme",0x1d);
      if (iVar8 == 0) {
        iVar8 = st::fn_00404183(pSVar1,0xf,PTR_00806764,"expl_s0",0x1d);
        if (iVar8 == 0) {
          st::fn_004022D4(pSVar1,'\x0f');
          st::fn_00405240(pSVar1,0xd,g_playSystem_00802A38->field_00E4);
          STField<undefined1>(this,0x29f) = 1;
          st::fn_00402A95(STField<undefined4>(this,0x266),STField<undefined4>(this,0x26a),
                             STField<undefined4>(this,0x26e),0,(int)this,0,0);
          st::fn_00403107(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
                       STField<ushort>(this,0x26e));
          if ((STField<int>(this,0x397) != 0) && (STField<int>(this,0x39f) == 0)) {
            st::fn_006EA460
                      (STField<void *>(this,0x211),STField<uint>(this,0x1ed),
                       *(int *)(STField<int>(this,0x397) + 0x1ed));
          }
          STField<undefined1>(this,0x265) = 8;
          return 0;
        }
        return 0xffff;
      }
      return 0xffff;
    }
    st::fn_00403107(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
                 STField<ushort>(this,0x26e));
    if ((STField<uint>(this,0x245) < 2) || (iVar8 = 0x50, STField<uint>(this,0x245) != 2)) {
      iVar8 = 0x78;
    }
    uVar10 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar10;
    st::fn_00401433
              (g_traksClass_00802A7C,0,1,uVar10 >> 0x10 & 1,STField<int>(this,0x266),
               STField<int>(this,0x26a),STField<int>(this,0x26e) - iVar8,0,0,0,0,0,0,-1,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0xd8))();
    pVVar11 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == nullptr) {
      return 0;
    }
    iVar8 = STField<int>(this,0x26e);
    sVar3 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      local_c = (short)(((short)(iVar8 / 200) + sVar3) -
                       (short)((longlong)iVar8 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      local_c = (uint)(short)(((short)(iVar8 / 200) + sVar3) -
                             (short)((longlong)iVar8 * 0x51eb851f >> 0x3f));
    }
    iVar8 = STField<int>(this,0x26a);
    sVar3 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar3) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar3) -
                          (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
    }
    iVar9 = STField<int>(this,0x266);
    sVar3 = (short)(iVar9 >> 0x1f);
    if (iVar9 < 0) {
      iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar3) - (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar3) -
                          (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
    }
    if ((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
        (st::fn_00403F53
                   (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar8,
                    &local_18,&local_1c), -1 < (int)local_c)) &&
       (((((int)local_c < 5 && (-1 < local_18)) &&
         ((local_18 < pVVar11->field_0030 &&
          ((local_1c = local_1c + g_centeredOffsets5[local_c], -1 < local_1c &&
           (local_1c < pVVar11->field_0034)))))) && (pVVar11->field_004C != nullptr)))) {
      bVar2 = pVVar11->field_004C[local_18 + local_1c * pVVar11->field_0030];
joined_r0x0063a754:
      if (bVar2 == 0) {
        if (STField<char>(this,0x29f) == '\0') {
          return 0;
        }
        st::fn_00403D0F((STT3DSprC *)((int)this + 0x1d5));
        STField<undefined1>(this,0x29f) = 0;
        return 0;
      }
    }
    break;
  case 2:
    if (g_playSystem_00802A38->field_00E4 - STField<int>(this,0x28e) < 0x1f) {
      return 0;
    }
    sVar3 = STField<short>(this,0x255);
    STField<short>(this,0x24f) = sVar3;
    STField<undefined2>(this,0x251) = 0x1333;
    iVar9 = (int)sVar3;
    STField<short>(this,0x24d) = STField<short>(this,0x253);
    STField<int>(this,0x266) = (int)STField<short>(this,0x253);
    STField<int>(this,0x26a) = iVar9;
    iVar8 = STField<int>(this,0x266);
    sVar5 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar5) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar5) -
                          (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
    }
    STField<int>(this,0x286) = iVar8;
    if (iVar9 < 0) {
      iVar8 = (short)((sVar3 / 0xc9 + (sVar3 >> 0xf)) - (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar8 = (int)(short)((sVar3 / 0xc9 + (sVar3 >> 0xf)) -
                          (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
    }
    STField<int>(this,0x28a) = iVar8;
    if (STField<uint>(this,0x245) < 2) {
      iVar9 = 0;
      iVar8 = 0;
    }
    else {
      if (STField<uint>(this,0x245) != 2) goto LAB_0063a27d;
      iVar9 = 10;
      iVar8 = 10;
    }
    st::fn_00401EBA((void *)((int)this + 0x1d5),0xd,iVar8,iVar9,'\0');
LAB_0063a27d:
    STField<undefined1>(this,0x29e) = 4;
    st::fn_00405240((STT3DSprC *)((int)this + 0x1d5),0xd,g_playSystem_00802A38->field_00E4);
    st::fn_00402982((STT3DSprC *)((int)this + 0x1d5),0);
    STField<undefined1>(this,0x29f) = 1;
    STField<uint>(this,0x28e) = g_playSystem_00802A38->field_00E4;
    st::fn_00403107(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
                 STField<ushort>(this,0x26e));
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0xd8))();
    pVVar11 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 != nullptr) {
      iVar8 = STField<int>(this,0x26e);
      sVar3 = (short)(iVar8 >> 0x1f);
      if (iVar8 < 0) {
        local_c = (short)(((short)(iVar8 / 200) + sVar3) -
                         (short)((longlong)iVar8 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        local_c = (uint)(short)(((short)(iVar8 / 200) + sVar3) -
                               (short)((longlong)iVar8 * 0x51eb851f >> 0x3f));
      }
      iVar8 = STField<int>(this,0x26a);
      sVar3 = (short)(iVar8 >> 0x1f);
      if (iVar8 < 0) {
        iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar3) -
                       (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar3) -
                            (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
      }
      iVar9 = STField<int>(this,0x266);
      sVar3 = (short)(iVar9 >> 0x1f);
      if (iVar9 < 0) {
        iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar3) -
                       (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar3) -
                            (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
      }
      if (((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
           (st::fn_00403F53
                      (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar8,
                       &local_1c,&local_18), (int)local_c < 0)) ||
          (((4 < (int)local_c || (local_1c < 0)) ||
           ((pVVar11->field_0030 <= local_1c ||
            ((local_18 = local_18 + g_centeredOffsets5[local_c], local_18 < 0 ||
             (pVVar11->field_0034 <= local_18)))))))) ||
         ((pVVar11->field_004C == nullptr ||
          (pVVar11->field_004C[local_1c + local_18 * pVVar11->field_0030] != 0)))) {
        if (STField<char>(this,0x29f) == '\0') {
          st::fn_00402982((void *)((int)this + 0x1d5),0);
          STField<undefined1>(this,0x29f) = 1;
        }
      }
      else if (STField<char>(this,0x29f) != '\0') {
        st::fn_00403D0F((STT3DSprC *)((int)this + 0x1d5));
        STField<undefined1>(this,0x29f) = 0;
      }
    }
    STField<undefined1>(this,0x265) = 3;
    STField<undefined4>(this,0x292) = 0x13;
    return 0;
  case 3:
    iVar8 = st::fn_00401B13(this,g_playSystem_00802A38->field_00E4);
    if (0 < iVar8) {
      STField<uint>(this,0x28e) = g_playSystem_00802A38->field_00E4;
      STField<undefined1>(this,0x265) = 4;
      if (g_visibleClass_00802A88 != nullptr) {
        iVar8 = STField<int>(this,0x26a);
        sVar3 = (short)(iVar8 >> 0x1f);
        if (iVar8 < 0) {
          iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar3) -
                         (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar3) -
                              (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
        }
        iVar9 = STField<int>(this,0x266);
        sVar3 = (short)(iVar9 >> 0x1f);
        if (iVar9 < 0) {
          iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar3) -
                         (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar3) -
                              (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
        }
        st::fn_00401FD2
                  (g_visibleClass_00802A88,iVar9,iVar8,nullptr,STField<uint>(this,0x259)
                   ,(undefined *)0x5,0x271);
      }
      if (STField<short>(this,0x263) != -1) {
        st::fn_00402707(this,(int)STField<short>(this,0x253),
                           (int)STField<short>(this,0x255),(int)STField<short>(this,0x263));
      }
      STField<undefined4>(this,0x292) = 0x41;
      STField<undefined2>(this,0x251) = STField<undefined2>(this,0x26e);
      iVar8 = STField<int>(this,0x245);
      if (((iVar8 == 1) || (iVar8 == 0)) || (iVar8 == 2)) {
        STField<undefined1>(this,0x265) = 5;
        STField<undefined4>(this,0x292) = 0x13;
      }
    }
    if ((g_playSystem_00802A38->field_00E4 & 1) == 0) {
      iVar8 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<int>(this,0x1c) = iVar8;
      iVar8 = iVar8 * 0x41c64e6d + 0x3039;
      STField<int>(this,0x1c) = iVar8;
      uVar10 = iVar8 * 0x41c64e6d + 0x3039;
      uVar6 = (ushort)(uVar10 >> 0x10);
      STField<uint>(this,0x1c) = uVar10;
      st::fn_00401433
                (g_traksClass_00802A7C,1,1,uVar10 >> 0x10 & 1,STField<int>(this,0x266),
                 STField<int>(this,0x26a),STField<int>(this,0x26e),uVar6 & 1,uVar6 & 1,0,0,0,0
                 ,-1,0,0);
    }
    st::fn_00403107(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
                 STField<ushort>(this,0x26e));
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0xd8))();
    pVVar11 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == nullptr) {
      return 0;
    }
    iVar8 = STField<int>(this,0x26e);
    sVar3 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      local_c = (short)(((short)(iVar8 / 200) + sVar3) -
                       (short)((longlong)iVar8 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      local_c = (uint)(short)(((short)(iVar8 / 200) + sVar3) -
                             (short)((longlong)iVar8 * 0x51eb851f >> 0x3f));
    }
    iVar8 = STField<int>(this,0x26a);
    sVar3 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar3) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar3) -
                          (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
    }
    iVar9 = STField<int>(this,0x266);
    sVar3 = (short)(iVar9 >> 0x1f);
    if (iVar9 < 0) {
      iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar3) - (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar3) -
                          (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
    }
    if (((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
         (st::fn_00403F53
                    (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar8,
                     &local_1c,&local_18), -1 < (int)local_c)) &&
        (((int)local_c < 5 && (-1 < local_1c)))) && (iVar8 = pVVar11->field_0030, local_1c < iVar8))
    {
      iVar9 = g_centeredOffsets5[local_c];
LAB_0063a728:
      iVar9 = iVar9 + local_18;
      if (((-1 < iVar9) && (iVar9 < pVVar11->field_0034)) && (pVVar11->field_004C != nullptr)) {
        bVar2 = pVVar11->field_004C[iVar9 * iVar8 + local_1c];
        goto joined_r0x0063a754;
      }
    }
    break;
  case 4:
    iVar8 = st::fn_004023C9(this,g_playSystem_00802A38->field_00E4);
    if (0 < iVar8) {
      return 0;
    }
    st::fn_00403107(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
                 STField<ushort>(this,0x26e));
    if ((g_playSystem_00802A38->field_00E4 & 1) == 0) {
      iVar8 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<int>(this,0x1c) = iVar8;
      iVar8 = iVar8 * 0x41c64e6d + 0x3039;
      STField<int>(this,0x1c) = iVar8;
      uVar10 = iVar8 * 0x41c64e6d + 0x3039;
      uVar6 = (ushort)(uVar10 >> 0x10);
      STField<uint>(this,0x1c) = uVar10;
      st::fn_00401433
                (g_traksClass_00802A7C,1,1,uVar10 >> 0x10 & 1,STField<int>(this,0x266),
                 STField<int>(this,0x26a),STField<int>(this,0x26e),uVar6 & 1,uVar6 & 1,0,0,0,0
                 ,-1,0,0);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0xd8))();
    pVVar11 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == nullptr) {
      return 0;
    }
    iVar8 = STField<int>(this,0x26e);
    sVar3 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      local_c = (short)(((short)(iVar8 / 200) + sVar3) -
                       (short)((longlong)iVar8 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      local_c = (uint)(short)(((short)(iVar8 / 200) + sVar3) -
                             (short)((longlong)iVar8 * 0x51eb851f >> 0x3f));
    }
    iVar8 = STField<int>(this,0x26a);
    sVar3 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar3) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar3) -
                          (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
    }
    iVar9 = STField<int>(this,0x266);
    sVar3 = (short)(iVar9 >> 0x1f);
    if (iVar9 < 0) {
      iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar3) - (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar3) -
                          (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
    }
    if ((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
        (st::fn_00403F53
                   (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar8,
                    &local_1c,&local_18), -1 < (int)local_c)) &&
       ((((int)local_c < 5 && (-1 < local_1c)) && (iVar8 = pVVar11->field_0030, local_1c < iVar8))))
    {
      iVar9 = g_centeredOffsets5[local_c];
      goto LAB_0063a728;
    }
    break;
  case 5:
    uVar10 = st::fn_00405D4E(this,g_playSystem_00802A38->field_00E4);
    if (uVar10 == 0) {
      st::fn_00403107(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
                   STField<ushort>(this,0x26e));
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0xd8))();
      pVVar11 = g_visibleClass_00802A88;
      if (g_visibleClass_00802A88 != nullptr) {
        iVar8 = STField<int>(this,0x26e);
        sVar3 = (short)(iVar8 >> 0x1f);
        if (iVar8 < 0) {
          local_c = (int)(short)(((short)(iVar8 / 200) + sVar3) -
                                (short)((longlong)iVar8 * 0x51eb851f >> 0x3f)) - 1;
        }
        else {
          local_c = (uint)(short)(((short)(iVar8 / 200) + sVar3) -
                                 (short)((longlong)iVar8 * 0x51eb851f >> 0x3f));
        }
        iVar8 = STField<int>(this,0x26a);
        sVar3 = (short)(iVar8 >> 0x1f);
        if (iVar8 < 0) {
          iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar3) -
                         (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar3) -
                              (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
        }
        iVar9 = STField<int>(this,0x266);
        sVar3 = (short)(iVar9 >> 0x1f);
        if (iVar9 < 0) {
          iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar3) -
                         (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar3) -
                              (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
        }
        if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
            ((st::fn_00403F53
                        (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar8,
                         &local_1c,&local_18), (int)local_c < 0 ||
             (((4 < (int)local_c || (local_1c < 0)) || (pVVar11->field_0030 <= local_1c)))))) ||
           (((local_18 = g_centeredOffsets5[local_c] + local_18, local_18 < 0 ||
             (pVVar11->field_0034 <= local_18)) ||
            ((pVVar11->field_004C == nullptr ||
             (pVVar11->field_004C[local_18 * pVVar11->field_0030 + local_1c] != 0)))))) {
          if (STField<char>(this,0x29f) == '\0') {
            st::fn_00402982((void *)((int)this + 0x1d5),0);
            STField<undefined1>(this,0x29f) = 1;
          }
        }
        else if (STField<char>(this,0x29f) != '\0') {
          st::fn_00403D0F((STT3DSprC *)((int)this + 0x1d5));
          STField<undefined1>(this,0x29f) = 0;
        }
      }
      iVar8 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<int>(this,0x1c) = iVar8;
      iVar8 = iVar8 * 0x41c64e6d + 0x3039;
      STField<int>(this,0x1c) = iVar8;
      uVar10 = iVar8 * 0x41c64e6d + 0x3039;
      uVar6 = (ushort)(uVar10 >> 0x10);
      STField<uint>(this,0x1c) = uVar10;
      st::fn_00401433
                (g_traksClass_00802A7C,1,1,uVar10 >> 0x10 & 1,STField<int>(this,0x266),
                 STField<int>(this,0x26a),STField<int>(this,0x26e),uVar6 & 1,uVar6 & 1,0,0,0,0
                 ,-1,0,0);
      st::fn_004031C0(this);
      return 0;
    }
    STField<int>(this,0x26e) = STField<int>(this,0x27a) + 100;
    st::fn_00404264((STT3DSprC *)((int)this + 0x1d5),0xd);
    if (STField<uint>(this,0x245) < 2) {
      iVar8 = st::fn_00402E78(this,1);
      if (iVar8 == 0) {
        uVar10 = st::fn_00405AA1(this,500);
        if (-1 < (int)uVar10) {
          st::fn_00401CF3(this,STField<undefined4>(this,0x266),
                             STField<undefined4>(this,0x26a),STField<int>(this,0x26e),10);
          st::fn_00403850(this,'\n');
          st::fn_00401ED8(this,1);
        }
        STField<undefined1>(this,0x265) = 9;
        return 0;
      }
      return 0xffff;
    }
    if (STField<uint>(this,0x245) != 2) {
      return 0;
    }
    iVar8 = st::fn_004050B5(this,1);
    if (iVar8 == 0) {
      uVar10 = st::fn_00405AA1(this,0x168);
      if (-1 < (int)uVar10) {
        st::fn_00401CF3(this,STField<undefined4>(this,0x266),
                           STField<undefined4>(this,0x26a),STField<int>(this,0x26e),0xb);
        st::fn_00403850(this,'\v');
        st::fn_00401ED8(this,1);
      }
      if ((-1 < (int)STField<uint>(this,0x33a)) && (STField<char>(this,0x346) == '\0')) {
        st::fn_006EAAA0
                  (STField<void *>(this,0x211),STField<uint>(this,0x33a),0);
        STField<undefined1>(this,0x346) = 1;
        st::fn_00401D16(this,1);
      }
      STField<undefined1>(this,0x265) = 10;
      st::fn_00403797(this,0x49b);
      return 0;
    }
    return 0xffff;
  case 6:
    iVar8 = st::fn_004023C9(this,g_playSystem_00802A38->field_00E4);
    if (iVar8 == 4) {
      pSVar1 = (STT3DSprC *)((int)this + 0x1d5);
      st::fn_00401EBA(pSVar1,0xd,0x10,0x13,'\0');
      st::fn_00403ED6(pSVar1,'\r');
      st::fn_00405240(pSVar1,0xd,g_playSystem_00802A38->field_00E4);
      STField<undefined1>(this,0x29f) = 1;
      STField<undefined1>(this,0x29e) = 3;
      STField<undefined1>(this,0x265) = 7;
      STField<uint>(this,0x28e) = g_playSystem_00802A38->field_00E4;
    }
    iVar8 = st::fn_004042AF((void *)((int)this + 0x1d5),'\r');
    if (iVar8 % 7 == 0) {
      st::fn_004043CC(this,iVar8 / 7);
    }
    st::fn_00403107(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
                 STField<ushort>(this,0x26e));
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0xd8))();
    pVVar11 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == nullptr) {
      return 0;
    }
    iVar8 = STField<int>(this,0x26e);
    sVar3 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      local_c = (short)(((short)(iVar8 / 200) + sVar3) -
                       (short)((longlong)iVar8 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      local_c = (uint)(short)(((short)(iVar8 / 200) + sVar3) -
                             (short)((longlong)iVar8 * 0x51eb851f >> 0x3f));
    }
    iVar8 = STField<int>(this,0x26a);
    sVar3 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar3) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar3) -
                          (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
    }
    iVar9 = STField<int>(this,0x266);
    sVar3 = (short)(iVar9 >> 0x1f);
    if (iVar9 < 0) {
      iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar3) - (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar3) -
                          (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
    }
    if (((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
         (st::fn_00403F53
                    (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar8,
                     &local_1c,&local_18), -1 < (int)local_c)) &&
        (((int)local_c < 5 && (-1 < local_1c)))) && (iVar8 = pVVar11->field_0030, local_1c < iVar8))
    {
      iVar9 = g_centeredOffsets5[local_c];
      goto LAB_0063a728;
    }
    break;
  case 7:
    pSVar1 = (STT3DSprC *)((int)this + 0x1d5);
    iVar8 = st::fn_00404183(pSVar1,0xd,PTR_00806774,"exptme",0x1d);
    if (iVar8 != 0) {
      return 0xffff;
    }
    iVar8 = st::fn_00404183(pSVar1,0xf,PTR_00806764,"expl_s0",0x1d);
    if (iVar8 == 0) {
      st::fn_004022D4(pSVar1,'\x0f');
      st::fn_004022D4(pSVar1,'\r');
      st::fn_00405240(pSVar1,0xd,g_playSystem_00802A38->field_00E4);
      STField<undefined1>(this,0x29f) = 1;
      st::fn_00403107(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
                   STField<ushort>(this,0x26e));
      STField<undefined1>(this,0x265) = 8;
      st::fn_00403107(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
                   STField<ushort>(this,0x26e));
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0xd8))();
      return 0;
    }
    return 0xffff;
  case 8:
    pSVar1 = (STT3DSprC *)((int)this + 0x1d5);
    iVar8 = st::fn_004042AF(pSVar1,'\r');
    if (iVar8 == 0x17) {
      st::fn_00405240(pSVar1,0xf,g_playSystem_00802A38->field_00E4);
    }
    iVar8 = st::fn_004022AC(pSVar1,'\r');
    iVar9 = st::fn_004042AF(pSVar1,'\r');
    if (iVar8 + -1 == iVar9) {
      st::fn_00404264(pSVar1,0xd);
    }
    iVar8 = st::fn_004022AC(pSVar1,'\x0f');
    iVar9 = st::fn_004042AF(pSVar1,'\x0f');
    if (iVar8 + -1 == iVar9) {
      STField<undefined1>(this,0x265) = 0xd;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0xd8))();
    return 0;
  case 9:
    if (STField<int>(this,0x34b) != 0) {
      iVar8 = STField<int>(this,0x34f);
      if (iVar8 < 2) {
        iVar8 = *(int *)(&DAT_007d1fd4 + iVar8 * 4);
        fVar21 = (float)STField<int>(this,0x26e) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc;
        fVar20 = (float)STField<int>(this,0x26a) * _DAT_007904f8 * _DAT_007904f0;
        uVar16 = **(undefined4 **)(STField<int>(this,0x34b) + 0x21);
        fVar19 = (float)STField<int>(this,0x266) * _DAT_007904f8 * _DAT_007904f0;
        uVar18 = 0xf7;
        uVar17 = 0x108;
      }
      else {
        iVar8 = *(int *)(&DAT_007d1fd4 + iVar8 * 4);
        fVar21 = 0.0;
        fVar20 = 0.0;
        fVar19 = 0.0;
        uVar18 = 0;
        uVar17 = 0;
        uVar16 = 0;
      }
      st::fn_006EAD40(STField<void *>(this,0x211),PTR_008032cc + iVar8 * 0x80,uVar16,uVar17,uVar18,
                   fVar19,fVar20,fVar21);
      if (STField<int>(this,0x34f) == 2) {
        iVar8 = STField<int>(this,0x26a);
        sVar3 = (short)(iVar8 >> 0x1f);
        if (iVar8 < 0) {
          iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar3) -
                         (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar3) -
                              (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
        }
        iVar9 = STField<int>(this,0x266);
        sVar3 = (short)(iVar9 >> 0x1f);
        if (iVar9 < 0) {
          iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar3) -
                         (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar3) -
                              (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
        }
        st::fn_004025A4(this,iVar9,iVar8,2);
        st::fn_00403797(this,0x462);
      }
      if ((STField<int>(this,0x34f) == 3) && (-1 < (int)STField<uint>(this,0x33a))) {
        st::fn_006EAAA0
                  (STField<void *>(this,0x211),STField<uint>(this,0x33a),0);
      }
      iVar8 = STField<int>(this,0x34f) + 1;
      STField<int>(this,0x34f) = iVar8;
      if (iVar8 == 7) {
        st::fn_006C83B0((int *)g_ddxContext_008075A8,2,3,(int *)&DAT_007d1ff8);
      }
      if (8 < STField<int>(this,0x34f)) {
        st::fn_006EAD40(STField<void *>(this,0x211),0,0,0x108,0xf7,
                     (float)STField<int>(this,0x266) * _DAT_007904f8 * _DAT_007904f0,
                     (float)STField<int>(this,0x26a) * _DAT_007904f8 * _DAT_007904f0,
                     (float)STField<int>(this,0x26e) * _DAT_007904f8 * _DAT_007904f0 +
                     _DAT_007904fc);
        STField<undefined4>(this,0x34b) = 0;
      }
      if (STField<int>(this,0x34f) < 3) {
        return 0;
      }
    }
    uVar10 = STField<uint>(this,0x33a);
    if ((-1 < (int)uVar10) && ((g_playSystem_00802A38->field_00E4 & 1) == 0)) {
      uVar12 = STField<int>(this,0x33e) + 1;
      STField<uint>(this,0x33e) = uVar12;
      if ((int)uVar12 < STField<int>(this,0x342)) {
        st::fn_006EA270(STField<ST3DSMAPContext *>(this,0x211),uVar10,0,uVar12);
      }
      else {
        st::fn_006E8BA0(STField<void *>(this,0x211),uVar10);
        STField<undefined4>(this,0x33a) = 0xffffffff;
      }
    }
    uVar10 = STField<uint>(this,0x353);
    if ((-1 < (int)uVar10) && ((g_playSystem_00802A38->field_00E4 & 1) == 0)) {
      uVar12 = STField<int>(this,0x357) + 1;
      STField<uint>(this,0x357) = uVar12;
      if ((int)uVar12 < STField<int>(this,0x35b)) {
        st::fn_006EA270(STField<ST3DSMAPContext *>(this,0x211),uVar10,0,uVar12);
      }
      else {
        st::fn_006E8BA0(STField<void *>(this,0x211),uVar10);
        STField<undefined4>(this,0x353) = 0xffffffff;
      }
    }
    if ((STField<int>(this,0x353) == -1) && (STField<int>(this,0x33a) == -1)) {
      STField<undefined1>(this,0x265) = 0xd;
      return 0;
    }
    if (STField<int>(this,0x336) == 0) {
      return 0;
    }
    st::fn_0040285B(this,10);
    st::fn_0040370B(this);
    iVar8 = STField<int>(this,0x2c0) * 10;
    if (iVar8 - STField<int>(this,0x2b0) == 0 || iVar8 < STField<int>(this,0x2b0)) {
      return 0;
    }
    st::fn_004056A0(this);
    return 0;
  case 10:
    uVar10 = local_c >> 8;
    local_c = local_c & 0xffffff00;
    if (-1 < STField<int>(this,0x363)) {
      if (STField<int>(this,0x367) == 0) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_c = CONCAT31((int3)uVar10,1);
        iVar8 = (STField<ST3DSMAPContext *>(this,0x211))->field_0380;
        st::fn_006E3210
                  (STField<ST3DSMAPContext *>(this,0x211),
                   (STField<int>(this,0x2a4) * iVar8) / 0xc9,
                   (STField<int>(this,0x2a8) * iVar8) / 0xc9);
        lVar15 = st::fn_0072E288();
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (STMessage *)((short)lVar15 + 0x2d);
      }
      uVar10 = STField<int>(this,0x367) + 1;
      STField<uint>(this,0x367) = uVar10;
      if ((int)uVar10 < STField<int>(this,0x36b)) {
        st::fn_006EA270
                  (STField<ST3DSMAPContext *>(this,0x211),STField<uint>(this,0x363),0,uVar10);
      }
      else {
        st::fn_006E8BA0
                  (STField<void *>(this,0x211),STField<uint>(this,0x363));
        STField<undefined4>(this,0x363) = 0xffffffff;
      }
    }
    iVar8 = st::fn_00403E09(this);
    if (iVar8 != 0) {
      if (-1 < iVar8) {
        st::fn_00401CF3(this,STField<undefined4>(this,0x266),
                           STField<undefined4>(this,0x26a),STField<int>(this,0x26e),0xc);
        st::fn_00403850(this,'\f');
        st::fn_00401ED8(this,0);
        iVar8 = STField<int>(this,0x37f);
        if (iVar8 != 0) {
          if ((g_playSystem_00802A38->field_00E4 & 1) == 0) {
            *(char *)(iVar8 + 0x15) = *(char *)(iVar8 + 0x15) + -1;
            uVar10 = *STField<uint *>(this,0x37f);
            if (-1 < (int)uVar10) {
              st::fn_006E9720
                        (STField<void *>(this,0x211),uVar10,
                         (uint)(PTR_008032b8 +
                               (uint)*(byte *)((int)STField<uint *>(this,0x37f) + 0x15) * 0x80));
              st::fn_006E96D0
                        (STField<void *>(this,0x211),*STField<uint *>(this,0x37f));
            }
          }
          else {
            st::fn_004050EC(this);
          }
        }
        if (STField<int>(this,0x34b) != 0) {
          fVar21 = STField<float>(this,0x332) + _DAT_007904fc;
          iVar8 = STField<int>(this,0x34f) + 1;
          STField<int>(this,0x34f) = iVar8;
          st::fn_006EAD40(STField<void *>(this,0x211),
                       PTR_008032cc + *(int *)(&DAT_007d1fd4 + iVar8 * 4) * 0x80,
                       **(undefined4 **)(STField<int>(this,0x34b) + 0x21),0x108,0xf7,
                       (float)STField<int>(this,0x2a4) * _DAT_007904f8 * _DAT_007904f0,
                       (float)STField<int>(this,0x2a8) * _DAT_007904f8 * _DAT_007904f0,fVar21);
          STField<int>(this,0x34f) = STField<int>(this,0x34f) + 1;
        }
        STField<undefined1>(this,0x265) = 0xb;
        st::fn_00401D16(this,0);
        return 0;
      }
      STField<undefined1>(this,0x265) = 0xd;
      st::fn_00401D16(this,0);
      return 0;
    }
    st::fn_00405786(this,(char)local_c);
    st::fn_00401D16(this,0);
    return 0;
  case 0xb:
    if (STField<int>(this,0x34b) != 0) {
      iVar8 = STField<int>(this,0x34f);
      if (iVar8 < 2) {
        fVar21 = STField<float>(this,0x332) + _DAT_007904fc;
        fVar20 = (float)STField<int>(this,0x2a8) * _DAT_007904f8 * _DAT_007904f0;
        uVar16 = **(undefined4 **)(STField<int>(this,0x34b) + 0x21);
        iVar8 = *(int *)(&DAT_007d1fd4 + iVar8 * 4);
        fVar19 = (float)STField<int>(this,0x2a4) * _DAT_007904f8 * _DAT_007904f0;
        uVar18 = 0xf7;
        uVar17 = 0x108;
      }
      else {
        iVar8 = *(int *)(&DAT_007d1fd4 + iVar8 * 4);
        fVar21 = 0.0;
        fVar20 = 0.0;
        fVar19 = 0.0;
        uVar18 = 0;
        uVar17 = 0;
        uVar16 = 0;
      }
      st::fn_006EAD40(STField<void *>(this,0x211),PTR_008032cc + iVar8 * 0x80,uVar16,uVar17,uVar18,
                   fVar19,fVar20,fVar21);
      iVar8 = STField<int>(this,0x34f) + 1;
      STField<int>(this,0x34f) = iVar8;
      if (iVar8 == 7) {
        st::fn_006C83B0((int *)g_ddxContext_008075A8,2,3,(int *)&DAT_007d1ff8);
      }
      if (8 < STField<int>(this,0x34f)) {
        st::fn_006EAD40(STField<void *>(this,0x211),0,0,0x108,0xf7,
                     (float)STField<int>(this,0x2a4) * _DAT_007904f8 * _DAT_007904f0,
                     (float)STField<int>(this,0x2a8) * _DAT_007904f8 * _DAT_007904f0,
                     STField<float>(this,0x332) + _DAT_007904fc);
        STField<undefined4>(this,0x34b) = 0;
      }
    }
    iVar8 = STField<int>(this,0x37f);
    if (iVar8 != 0) {
      if ((g_playSystem_00802A38->field_00E4 & 1) == 0) {
        *(char *)(iVar8 + 0x15) = *(char *)(iVar8 + 0x15) + -1;
        uVar10 = *STField<uint *>(this,0x37f);
        if (-1 < (int)uVar10) {
          st::fn_006E9720
                    (STField<void *>(this,0x211),uVar10,
                     (uint)(PTR_008032b8 +
                           (uint)*(byte *)((int)STField<uint *>(this,0x37f) + 0x15) * 0x80));
          st::fn_006E96D0
                    (STField<void *>(this,0x211),*STField<uint *>(this,0x37f));
        }
      }
      else {
        st::fn_004050EC(this);
      }
    }
    st::fn_0040285B(this,0xc);
    st::fn_0040370B(this);
    if (STField<int>(this,0x2b8) < STField<int>(this,0x2b0)) {
      st::fn_004056A0(this);
      STField<undefined1>(this,0x265) = 0xd;
    }
    st::fn_00401D16(this,0);
    return 0;
  default:
    goto switchD_00639e3d_caseD_c;
  case 0xd:
    goto switchD_00639e3d_caseD_d;
  }
  if (STField<char>(this,0x29f) == '\0') {
    st::fn_00402982((void *)((int)this + 0x1d5),0);
    STField<undefined1>(this,0x29f) = 1;
    return 0;
  }
switchD_00639e3d_caseD_c:
  return 0;
}

// 0063BF70 FUN_0063bf70
#line 4 "decomp/ST.exe/functions/0063BF70/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7C4>00405EED

   [STObjectFactoryApplier] Central object factory for 0x010D (ST_OBJECT_TYPE_010D).
   Evidence: registry[20] at 007CA7C0 stores type 0x010D and executable pointer 00405EED; allocation
   size 944 has no unique current class-layout match */

void * __cdecl st::fn_0063BF70(void)

{
  AnonShape_0063BFA0_2C9DA96E *pAVar1;

  pAVar1 = (AnonShape_0063BFA0_2C9DA96E *)st::fn_006B04D0(0x3b0);
  if (pAVar1 != nullptr) {
    pAVar1 = st::fn_00405623(pAVar1);
    return pAVar1;
  }
  return nullptr;
}

// 0063BFA0 FUN_0063bfa0
#line 4 "decomp/ST.exe/functions/0063BFA0/decomp.c"
/* [STReturnSemanticsApplier] typed_pointer_return.
   Evidence: all 1 value-return path(s) forward Listing variable param_1 with evidence-backed
   structure /SubmarineTitans/Recovered/PointerShapes/AnonShape_0063BFA0_2C9DA96E (current recovered
   extent=888) */

AnonShape_0063BFA0_2C9DA96E * __fastcall st::fn_0063BFA0(AnonShape_0063BFA0_2C9DA96E *param_1)

{
  st::fn_00401933((STGameObjC *)param_1);
  st::fn_00401316((AnonShape_004AB810_8E5693D5 *)&param_1->field_01D5);
  param_1->field_01D5 = &st_global_0079D49C;
  param_1->field_0292 = 0;
  param_1->field_029A = 0;
  param_1->field_029F = 0;
  param_1->field_0336 = 0;
  *(VTable_0079D33C **)param_1 = &st_global_0079D33C;
  param_1->field_033A = 0xffffffff;
  param_1->field_0353 = 0xffffffff;
  param_1->field_0363 = 0xffffffff;
  param_1->field_0373 = 0xffffffff;
  param_1->field_0265 = 4;
  return param_1;
}

// 0063C030 FUN_0063c030
#line 4 "decomp/ST.exe/functions/0063C030/decomp.c"
void __thiscall st::fn_0063C030(void *this,undefined4 param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  sVar1 = STField<short>(this,0x24d);
  iVar3 = (int)sVar1;
  sVar2 = STField<short>(this,0x24f);
  iVar4 = (int)sVar2;
  iVar5 = (int)STField<short>(this,0x251);
  STField<int>(this,0x266) = iVar3;
  STField<int>(this,0x26a) = iVar4;
  STField<int>(this,0x26e) = iVar5;
  STField<int>(this,0x272) = iVar3;
  STField<int>(this,0x276) = iVar4;
  STField<int>(this,0x27a) = iVar5;
  if (iVar3 < 0) {
    iVar3 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar3 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                        (short)((longlong)iVar3 * 0x28c1979 >> 0x3f));
  }
  STField<int>(this,0x286) = iVar3;
  if (iVar4 < 0) {
    iVar3 = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar3 = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                        (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
  }
  STField<int>(this,0x28a) = iVar3;
  if (STField<int>(this,0x245) == 2) {
    STField<undefined2>(this,599) = 0x451;
  }
  STField<int>(this,0x27e) = iVar5;
  STField<undefined4>(this,0x28e) = param_1;
  STField<int>(this,0x282) = (int)STField<short>(this,599);
  STField<undefined4>(this,0x292) = 0x41;
  STField<undefined4>(this,0x296) = 1;
  STField<undefined4>(this,0x29a) = 1;
  STField<undefined1>(this,0x29e) = 1;
  return;
}

// 0063C170 FUN_0063c170
#line 4 "decomp/ST.exe/functions/0063C170/decomp.c"
uint __thiscall st::fn_0063C170(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_c;
  short local_8;
  short local_6;

  iVar3 = param_1 - STField<int>(this,0x28e);
  STField<undefined4>(this,0x27a) = STField<undefined4>(this,0x26e);
  iVar3 = (iVar3 + 0x40) * iVar3 * 8;
  iVar3 = (int)STField<short>(this,0x251) + ((int)(iVar3 + (iVar3 >> 0x1f & 0x3fU)) >> 6);
  STField<int>(this,0x26e) = iVar3;
  if (iVar3 < 0) {
    iVar1 = (short)(iVar3 / 200) + -1;
  }
  else {
    iVar1 = (int)(short)(iVar3 / 200);
  }
  if (0x18 < iVar1) {
    return 10;
  }
  uVar2 = st::fn_00404516
                    ((AnonReceiver_00601500 *)((int)this + 899),STField<int>(this,0x266),
                     STField<int>(this,0x26a),iVar3,STField<int>(this,0x272),
                     STField<int>(this,0x276),STField<int>(this,0x27a),
                     STField<int>(this,0x235),50000,STField<int>(this,0x25d),
                     STField<ushort>(this,0x261),0xa8,0,0);
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      STField<undefined4>(this,0x266) = STField<undefined4>(this,0x3a3);
      STField<undefined4>(this,0x26a) = STField<undefined4>(this,0x3a7);
      STField<undefined4>(this,0x26e) = STField<undefined4>(this,0x3ab);
      STField<undefined4>(this,0x397) = 0;
      return 1;
    }
    if (uVar2 == 2) {
      if (STField<int *>(this,0x397) != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar3 = (**(code **)(*STField<int *>(this,0x397) + 0xe0))
                          (STField<undefined4>(this,0x39b),(int)&param_1 + 2,&local_6,&local_8,
                           &local_c);
        if (iVar3 == 0) {
          STField<int>(this,0x3a3) = (int)STPiece<2,2>(param_1);
          STField<int>(this,0x266) = (int)STPiece<2,2>(param_1);
          STField<int>(this,0x3a7) = (int)local_6;
          STField<undefined4>(this,0x39f) = local_c;
          STField<int>(this,0x3ab) = (int)local_8;
          STField<int>(this,0x26a) = (int)local_6;
          STField<int>(this,0x26e) = (int)local_8;
          return 2;
        }
      }
      st::fn_00405808(this);
    }
  }
  return uVar2;
}

// 0063C380 FUN_0063c380
#line 4 "decomp/ST.exe/functions/0063C380/decomp.c"
uint __thiscall st::fn_0063C380(void *this,int param_1)

{
  uint uVar1;
  int iVar2;

  iVar2 = param_1 - STField<int>(this,0x28e);
  STField<undefined4>(this,0x27a) = STField<undefined4>(this,0x26e);
  iVar2 = ((int)STField<short>(this,0x251) - (STField<int>(this,0x296) * iVar2 * iVar2) / 10)
          - STField<int>(this,0x292) * iVar2;
  STField<int>(this,0x26e) = iVar2;
  if (STField<int>(this,0x245) != 2) {
    uVar1 = st::fn_00404516
                      ((AnonReceiver_00601500 *)((int)this + 899),STField<int>(this,0x266),
                       STField<int>(this,0x26a),iVar2,STField<int>(this,0x272),
                       STField<int>(this,0x276),STField<int>(this,0x27a),
                       STField<int>(this,0x235),50000,STField<int>(this,0x25d),
                       STField<ushort>(this,0x261),0xa8,0,0);
    return uVar1;
  }
  if (iVar2 <= STField<short>(this,599)) {
    return 1;
  }
  return 0;
}

// 0063C4A0 FUN_0063c4a0
#line 4 "decomp/ST.exe/functions/0063C4A0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00639C90 @ 0063A462
   -> TEST TEST EAX,EAX */

int __thiscall st::fn_0063C4A0(void *this,int param_1)

{
  int iVar1;

  STField<undefined4>(this,0x27a) = STField<undefined4>(this,0x26e);
  iVar1 = (int)STField<short>(this,0x251) -
          (param_1 - STField<int>(this,0x28e)) * STField<int>(this,0x292);
  STField<int>(this,0x26e) = iVar1;
  return (uint)(iVar1 < 0x3e9);
}

// 0063C510 FUN_0063c510
#line 4 "decomp/ST.exe/functions/0063C510/decomp.c"
int __thiscall st::fn_0063C510(void *this,int param_1)

{
  STT3DSprC *this_00;
  short sVar1;
  VisibleClassTy *pVVar2;
  int iVar3;
  int iVar4;
  int local_10;
  int local_c;
  int local_8;

  iVar4 = param_1 - STField<int>(this,0x28e);
  iVar4 = ((STField<int>(this,0x292) * iVar4 - (STField<int>(this,0x296) * iVar4 * iVar4) / 2)
          * 3) / 10;
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  if (STField<int>(this,0x29a) == 1) {
    iVar4 = STField<short>(this,0x251) - iVar4;
    STField<undefined4>(this,0x27a) = STField<undefined4>(this,0x26e);
    STField<int>(this,0x26e) = iVar4;
    if (iVar4 < STField<int>(this,0x282)) {
      STField<int>(this,0x26e) = STField<int>(this,0x282);
    }
    if (STField<int>(this,0x26e) < 1000) {
      st::fn_00404516
                ((AnonReceiver_00601500 *)((int)this + 899),STField<int>(this,0x266),
                 STField<int>(this,0x26a),STField<int>(this,0x26e),STField<int>(this,0x272)
                 ,STField<int>(this,0x276),STField<int>(this,0x27a),
                 STField<int>(this,0x235),50000,STField<int>(this,0x25d),
                 STField<ushort>(this,0x261),0xa8,0,0);
    }
  }
  iVar4 = st::fn_00402F36(this);
  if (iVar4 == 3) {
    if ((STField<char>(this,0x29e) == '\x04') || (STField<char>(this,0x29e) == '\x01')) {
      this_00 = (STT3DSprC *)((int)this + 0x1d5);
      st::fn_00401EBA(this_00,0xd,0,0x13,'\0');
      st::fn_00405240(this_00,0xd,g_playSystem_00802A38->field_00E4);
      STField<undefined1>(this,0x29f) = 1;
      st::fn_004017D5(this_00,'\r');
      st::fn_00403107(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
                   STField<ushort>(this,0x26e));
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0xd8))();
      pVVar2 = g_visibleClass_00802A88;
      if (g_visibleClass_00802A88 != nullptr) {
        iVar4 = STField<int>(this,0x26e);
        sVar1 = (short)(iVar4 >> 0x1f);
        if (iVar4 < 0) {
          local_8 = (short)(((short)(iVar4 / 200) + sVar1) -
                           (short)((longlong)iVar4 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          local_8 = (int)(short)(((short)(iVar4 / 200) + sVar1) -
                                (short)((longlong)iVar4 * 0x51eb851f >> 0x3f));
        }
        iVar4 = STField<int>(this,0x26a);
        sVar1 = (short)(iVar4 >> 0x1f);
        if (iVar4 < 0) {
          iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar1) -
                         (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar1) -
                              (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
        }
        iVar3 = STField<int>(this,0x266);
        sVar1 = (short)(iVar3 >> 0x1f);
        if (iVar3 < 0) {
          iVar3 = (short)(((short)(iVar3 / 0xc9) + sVar1) -
                         (short)((longlong)iVar3 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar3 = (int)(short)(((short)(iVar3 / 0xc9) + sVar1) -
                              (short)((longlong)iVar3 * 0x28c1979 >> 0x3f));
        }
        if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
              (st::fn_00403F53
                         (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar3,iVar4,
                          &local_c,&local_10), local_8 < 0)) || ((4 < local_8 || (local_c < 0)))) ||
            ((pVVar2->field_0030 <= local_c ||
             ((local_10 = g_centeredOffsets5[local_8] + local_10, local_10 < 0 ||
              (pVVar2->field_0034 <= local_10)))))) ||
           ((pVVar2->field_004C == nullptr ||
            (pVVar2->field_004C[local_c + local_10 * pVVar2->field_0030] != 0)))) {
          if (STField<char>(this,0x29f) == '\0') {
            st::fn_00402982((void *)((int)this + 0x1d5),0);
            STField<undefined1>(this,0x29f) = 1;
          }
        }
        else if (STField<char>(this,0x29f) != '\0') {
          st::fn_00403D0F((STT3DSprC *)((int)this + 0x1d5));
          STField<undefined1>(this,0x29f) = 0;
        }
      }
      STField<undefined1>(this,0x265) = 6;
      STField<undefined1>(this,0x29e) = 2;
      return 3;
    }
    if (STField<int>(this,0x26e) == STField<int>(this,0x282)) {
      return 4;
    }
  }
  return iVar4;
}

// 0063C8F0 FUN_0063c8f0
#line 4 "decomp/ST.exe/functions/0063C8F0/decomp.c"
int __thiscall st::fn_0063C8F0(void *this,int param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = param_1 - STField<int>(this,0x28e);
  STField<int>(this,0x266) = (int)STField<short>(this,0x24d);
  STField<int>(this,0x26a) = (int)STField<short>(this,0x24f);
  iVar2 = ((STField<int>(this,0x292) * iVar2 - (STField<int>(this,0x296) * iVar2 * iVar2) / 2)
          * 3) / 10;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  iVar1 = STField<int>(this,0x29a);
  if (iVar1 == 1) {
    iVar2 = STField<short>(this,0x251) - iVar2;
    STField<int>(this,0x26e) = iVar2;
    if (iVar2 < STField<int>(this,0x282)) {
      STField<int>(this,0x26e) = STField<int>(this,0x282);
    }
  }
  else if (iVar1 == 2) {
    iVar2 = STField<int>(this,0x26e) + iVar2;
    STField<int>(this,0x26e) = iVar2;
    if (STField<int>(this,0x282) < iVar2) {
      STField<int>(this,0x26e) = STField<int>(this,0x282);
    }
  }
  else if (iVar1 == 3) {
    iVar2 = STField<int>(this,0x26e) - iVar2;
    STField<int>(this,0x26e) = iVar2;
    if (iVar2 < STField<int>(this,0x282)) {
      STField<int>(this,0x26e) = STField<int>(this,0x282);
    }
  }
  iVar2 = st::fn_00402F36(this);
  if (((iVar2 == 0) && (STField<int>(this,0x26e) < (int)STField<short>(this,599))) &&
     (STField<char>(this,0x29e) == '\x01')) {
    iVar2 = 4;
  }
  return iVar2;
}

// 0063CA50 FUN_0063ca50
#line 4 "decomp/ST.exe/functions/0063CA50/decomp.c"
undefined4 __thiscall st::fn_0063CA50(void *this,undefined4 param_1)

{
  int iVar1;

  iVar1 = STField<int>(this,0x29a);
  if (iVar1 == 1) {
    STField<undefined4>(this,0x292) = 10;
    STField<undefined4>(this,0x28e) = param_1;
    STField<undefined4>(this,0x296) = 1;
    STField<undefined4>(this,0x29a) = 2;
    STField<int>(this,0x282) = STField<short>(this,599) + 0x19;
    STField<undefined4>(this,0x27e) = STField<undefined4>(this,0x26e);
  }
  else {
    if (iVar1 == 2) {
      STField<undefined4>(this,0x292) = 6;
      STField<undefined4>(this,0x28e) = param_1;
      STField<undefined4>(this,0x27e) = STField<undefined4>(this,0x26e);
      STField<undefined4>(this,0x296) = 1;
      STField<int>(this,0x282) = (int)STField<short>(this,599);
      STField<undefined4>(this,0x29a) = 3;
      return 0;
    }
    if (iVar1 == 3) {
      return 1;
    }
  }
  return 0;
}

// 0063CB30 FUN_0063cb30
#line 4 "decomp/ST.exe/functions/0063CB30/decomp.c"
undefined4 __fastcall st::fn_0063CB30(AnonShape_0063CB30_3EF2BD1B *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;

  if ((int)param_1->field_0266 < 0) {
    param_1->field_0266 = 0;
    return 2;
  }
  if ((int)param_1->field_026A < 0) {
    param_1->field_026A = 0;
    return 2;
  }
  if ((int)param_1->field_026E < 0x5a) {
    param_1->field_026E = 0x5a;
    return 2;
  }
  uVar1 = param_1->field_0266 - (int)param_1->field_0253;
  uVar3 = (int)uVar1 >> 0x1f;
  if ((((int)((uVar1 ^ uVar3) - uVar3) < 6) &&
      (uVar1 = param_1->field_026A - (int)param_1->field_0255, uVar3 = (int)uVar1 >> 0x1f,
      (int)((uVar1 ^ uVar3) - uVar3) < 6)) &&
     ((uVar1 = param_1->field_026E - param_1->field_0282, uVar3 = (int)uVar1 >> 0x1f,
      iVar2 = (uVar1 ^ uVar3) - uVar3, iVar2 < 6 || (iVar2 < 0x97)))) {
    return 3;
  }
  return 0;
}

// 0063CC10 FUN_0063cc10
#line 4 "decomp/ST.exe/functions/0063CC10/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0063CC10 returns return of sub_006E60A0 @ 0063CC36 */

int __fastcall st::fn_0063CC10(void *param_1)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = STField<undefined4>(param_1,8);
  local_18 = 0;
  local_14 = 10;
  iVar1 = st::fn_006E60A0(param_1,local_24);
  return iVar1;
}

// 0063CC50 FUN_0063cc50
#line 4 "decomp/ST.exe/functions/0063CC50/decomp.c"
undefined4 __thiscall st::fn_0063CC50(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_48 [5];
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  short local_2e;
  short local_2c;
  undefined2 local_2a;
  uint local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  memset(local_48, 0, 0x2e); /* compiler bulk-zero initialization */
  local_34 = STField<undefined2>(this,0x266);
  local_48[3] = 1;
  local_48[2] = 1;
  local_48[1] = STField<undefined4>(this,0x235);
  local_32 = STField<undefined2>(this,0x26a);
  local_30 = STField<undefined2>(this,0x26e);
  local_48[0] = 0x6e;
  if (3 < param_1) {
    return 0;
  }
  local_2e = local_34;
  local_2c = local_32;
  if (param_1 == 0) {
    local_2a = 0;
    g_playSystem_00802A38->vfunc_08(0x10c,0,0,(short)local_48,0);
    return 1;
  }
  local_10 = STField<int>(this,0x286) - param_1;
  if (local_10 < 0) {
    local_10 = 0;
  }
  iVar5 = local_10;
  local_8 = STField<int>(this,0x286) + 1 + param_1;
  if (g_worldGrid.sizeX <= local_8) {
    local_8 = g_worldGrid.sizeX + -1;
  }
  local_c = STField<int>(this,0x28a) - param_1;
  if (local_c < 0) {
    local_c = 0;
  }
  local_14 = STField<int>(this,0x28a) + 1 + param_1;
  if (g_worldGrid.sizeX <= local_14) {
    local_14 = g_worldGrid.sizeY + -1;
  }
  local_2a = 0;
  g_playSystem_00802A38->vfunc_08(0x10c,0,0,(short)local_48,0);
  iVar7 = iVar5;
  if (iVar5 < local_8) {
    do {
      if ((iVar5 == iVar7) || (local_18 = 0, iVar5 == local_8 + -1)) {
        local_18 = 1;
      }
      iVar7 = local_c;
      if (local_c < local_14) {
        do {
          if (((local_18 != 0) || (iVar7 == local_c)) || (iVar7 == local_14 + -1)) {
            if (param_1 == 2) {
              iVar1 = STField<int>(this,0x286) + -2;
              if (((((iVar5 == iVar1) && (iVar7 == STField<int>(this,0x28a) + -2)) ||
                   ((iVar6 = STField<int>(this,0x286) + 2, iVar5 == iVar6 &&
                    (iVar7 == STField<int>(this,0x28a) + -2)))) ||
                  ((iVar5 == iVar1 && (iVar7 == STField<int>(this,0x28a) + 2)))) ||
                 ((iVar5 == iVar6 && (iVar7 == STField<int>(this,0x28a) + 2))))
              goto LAB_0063cf09;
            }
            uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
            STField<uint>(this,0x1c) = uVar2;
            local_28 = (uVar2 >> 0x10) % 0xb;
            sVar3 = (short)iVar5 * 0xc9;
            local_2e = sVar3 + 100;
            sVar4 = (short)iVar7 * 0xc9;
            local_2c = sVar4 + 100;
            if (param_1 == 1) {
              iVar1 = STField<int>(this,0x286) + -1;
              if ((iVar5 == iVar1) && (iVar7 == STField<int>(this,0x28a) + -1)) {
                local_2e = sVar3 + 0x7d;
                local_2c = sVar4 + 0x7d;
              }
              iVar6 = STField<int>(this,0x286) + 1;
              if ((iVar5 == iVar6) && (iVar7 == STField<int>(this,0x28a) + -1)) {
                local_2e = local_2e + -0x19;
                local_2c = local_2c + 0x19;
              }
              if ((iVar5 == iVar1) && (iVar7 == STField<int>(this,0x28a) + 1)) {
                local_2e = local_2e + 0x19;
                local_2c = local_2c + -0x19;
              }
              if ((iVar5 == iVar6) && (iVar7 == STField<int>(this,0x28a) + 1)) {
                local_2e = local_2e + -0x19;
                local_2c = local_2c + -0x19;
              }
            }
            local_2a = 0;
            g_playSystem_00802A38->vfunc_08(0x10c,0,0,(short)local_48,0);
          }
LAB_0063cf09:
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_14);
      }
      iVar5 = iVar5 + 1;
      iVar7 = local_10;
    } while (iVar5 < local_8);
  }
  return 1;
}

// 0063CFF0 FUN_0063cff0
#line 4 "decomp/ST.exe/functions/0063CFF0/decomp.c"
undefined4 * __thiscall st::fn_0063CFF0(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  byte *puVar4;
  byte *puVar5;
  undefined4 *local_10;
  uint local_c;
  uint local_8;

  iVar2 = STField<int>(this,0x336);
  local_8 = 0x152;
  if (iVar2 != 0) {
    local_8 = *(int *)(iVar2 + 0xc) * *(int *)(iVar2 + 8) + 0x172;
  }
  puVar1 = st::fn_006AAC70(local_8);
  STField<undefined4>(this,0x249) = 1;
  STField<undefined4>(this,0x23d) = 2;
  if (this == nullptr) {
    puVar4 = nullptr;
  }
  else {
    puVar4 = (byte *)((int)this + 0x231);
  }
  puVar5 = (byte *)(puVar1);
  for (iVar2 = 0x54; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = (byte *)(puVar4 + 1);
    puVar5 = (byte *)(puVar5 + 1);
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
  if (STField<uint *>(this,0x336) != nullptr) {
    local_10 = (undefined4 *)st::fn_006B0020(STField<uint *>(this,0x336),(int *)&local_c);
    STField<uint>(puVar1,0x152) = local_c;
    puVar4 = (byte *)(local_10);
    puVar5 = (byte *)((int)puVar1 + 0x156);
    memmove(puVar5, puVar4, local_c); /* compiler REP MOVS byte copy */
    st::fn_006AB060(&local_10);
    *param_1 = local_8;
    return puVar1;
  }
  *param_1 = local_8;
  return puVar1;
}

// 0063D100 FUN_0063d100
#line 4 "decomp/ST.exe/functions/0063D100/decomp.c"
void __thiscall st::fn_0063D100(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte *puVar3;
  AnonShape_004AD790_77673787 *pAVar4;
  byte *puVar5;
  void *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (this == nullptr) {
    puVar5 = nullptr;
  }
  else {
    puVar5 = (byte *)((int)this + 0x231);
  }
  puVar3 = (byte *)(param_1);
  memmove(puVar5, puVar3, 0x152); /* compiler REP MOVS byte copy */
  STField<undefined4>(this,0x347) = 0;
  pAVar4 = (AnonShape_004AD790_77673787 *)((int)param_1 + 0x152);
  if (STField<int>(this,0x336) != 0) {
    uVar1 = st::fn_006B0060(nullptr,(uint *)((int)param_1 + 0x156));
    STField<undefined4>(this,0x336) = uVar1;
    pAVar4 = (AnonShape_004AD790_77673787 *)((int)param_1 + 0x156 + *(int *)pAVar4);
  }
  local_20 = st::fn_006AAC70(0x44);
  iVar2 = 0;
  do {
    *(int **)(iVar2 + (int)local_20) = PTR_00806774;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x44);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0x10;
  local_8 = 0;
  st::fn_00404CA5((STT3DSprC *)((int)this + 0x1d5),(int *)&local_20,pAVar4);
  st::fn_00403107(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
               STField<ushort>(this,0x26e));
  st::fn_006AB060(&local_20);
  if (-1 < STField<int>(this,0x33a)) {
    STField<undefined4>(this,0x33a) = 0xffffffff;
    STField<undefined4>(this,0x353) = 0xffffffff;
    iVar2 = st::fn_00402E78(this,(uint)(STField<int>(this,0x34b) != 0));
    if (iVar2 == 0) {
      st::fn_00401F19(this);
      st::fn_00401ED8(this,1);
      st::fn_006EAAA0
                (STField<void *>(this,0x211),STField<uint>(this,0x33a),0);
    }
  }
  return;
}

// 0063D410 FUN_0063d410
#line 4 "decomp/ST.exe/functions/0063D410/decomp.c"
void __fastcall st::fn_0063D410(AnonShape_0063D410_5C8A60D7 *param_1)

{
  int iVar1;
  AnonNested_0063D410_0336_B4CDA572 *pAVar2;
  int iVar3;
  uint uVar4;

  if (param_1->field_0336 != nullptr) {
    iVar1 = param_1->field_0336->field_000C;
    uVar4 = 0;
    if (0 < iVar1) {
      do {
        pAVar2 = param_1->field_0336;
        if ((uVar4 < (uint)pAVar2->field_000C) &&
           (iVar3 = pAVar2->field_0008 * uVar4 + pAVar2->field_001C, iVar3 != 0)) {
          *(undefined4 *)(iVar3 + 0x38) = 0xffffffff;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar1);
    }
  }
  return;
}

// 0063D460 FUN_0063d460
#line 4 "decomp/ST.exe/functions/0063D460/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_0063D460(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;

  if (param_3 < 0) {
    param_3 = 0;
  }
  if (param_4 == 10) {
    memset((void *)((int)this + 0x2a4), 0, 0x92); /* compiler bulk-zero initialization */
    iVar2 = 0;
    STField<undefined4>(this,0x2a8) = param_2;
    STField<undefined4>(this,0x2a4) = param_1;
    STField<int>(this,0x2ac) = param_3;
    STField<undefined4>(this,0x2b0) = 0x6ac;
    STField<undefined4>(this,0x2b4) = 0x109;
    STField<undefined1>(this,0x328) = 4;
    STField<undefined4>(this,700) = 0x32;
    STField<undefined4>(this,0x2c0) = 0;
  }
  else {
    if (param_4 == 0xb) {
      memset((void *)((int)this + 0x2a4), 0, 0x92); /* compiler bulk-zero initialization */
      STField<undefined4>(this,0x2a8) = param_2;
      STField<undefined4>(this,0x2a4) = param_1;
      STField<undefined4>(this,0x2b4) = 0x32;
      STField<undefined4>(this,700) = 0x32;
      STField<int>(this,0x2ac) = param_3;
      STField<undefined4>(this,0x2b0) = 0x3ed;
      STField<undefined1>(this,0x328) = 4;
      STField<undefined4>(this,0x2c0) = 0;
      uVar1 = g_playSystem_00802A38->field_00E4;
      STField<undefined4>(this,0x33e) = 0;
      STField<uint>(this,0x32e) = uVar1;
      return;
    }
    if (param_4 == 0xc) {
      STField<undefined4>(this,0x2a8) = param_2;
      iVar2 = STField<int>(this,0x2c0);
      STField<undefined4>(this,0x2a4) = param_1;
      STField<int>(this,0x2ac) = param_3;
      STField<undefined4>(this,0x2b4) = STField<undefined4>(this,0x2b8);
      STField<undefined4>(this,0x2b0) = 0x50;
      STField<undefined4>(this,0x2c0) = 0;
      STField<undefined1>(this,0x328) = 4;
      STField<undefined4>(this,700) = 0x24;
      STField<int>(this,0x32a) = (iVar2 * 0x23) / 5;
      STField<uint>(this,0x32e) = g_playSystem_00802A38->field_00E4;
      return;
    }
  }
  return;
}

// 0063D660 FUN_0063d660
#line 4 "decomp/ST.exe/functions/0063D660/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall st::fn_0063D660(void *this,char param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0;
  float10 fVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0_06;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST1_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST1_01;
  longlong lVar9;
  uint local_8;

  uVar4 = 0;
  if (STField<int>(this,0x336) == 0) {
    return 0;
  }
  iVar5 = *(int *)(STField<int>(this,0x336) + 0xc);
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == '\n') {
    fVar3 = _DAT_007d2044 + _DAT_007d2044;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_1 = 0;
    STField<undefined4>(this,0x2b8) = STField<undefined4>(this,0x2b4);
    iVar1 = STField<int>(this,700);
    STField<undefined4>(this,0x29a) = 1;
    local_8 = 0;
    if (0 < iVar5) {
      do {
        iVar2 = STField<int>(this,0x336);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((local_8 < *(uint *)(iVar2 + 0xc)) &&
           (puVar6 = (undefined4 *)(*(int *)(iVar2 + 8) * local_8 + *(int *)(iVar2 + 0x1c)),
           puVar6 != nullptr)) {
          fVar7 = (float10)(int)_param_1 * (float10)(fVar3 / (float)iVar1);
          puVar6[10] = (float)fVar7;
          fcos(fVar7);
          lVar9 = st::fn_0072E288();
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          fsin(extraout_ST0_06);
          puVar6[2] = (int)lVar9 + STField<int>(this,0x2a4);
          lVar9 = st::fn_0072E288();
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          _param_1 = uVar4 + 1;
          puVar6[3] = (int)lVar9 + STField<int>(this,0x2a8);
          puVar6[4] = (float)STField<int>(this,0x2ac) * _DAT_007904f8 * _DAT_007904f0;
          puVar6[5] = STField<undefined4>(this,0x2a4);
          puVar6[6] = STField<undefined4>(this,0x2a8);
          puVar6[7] = STField<undefined4>(this,0x2ac);
          iVar2 = STField<int>(this,0x2b4);
          puVar6[1] = 1;
          puVar6[9] = 10;
          puVar6[8] = 5;
          *puVar6 = 0;
          puVar6[0xb] = (float)iVar2;
          uVar4 = _param_1;
          if (0x31 < (int)_param_1) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            _param_1 = 0;
            uVar4 = _param_1;
          }
        }
        local_8 = local_8 + 1;
      } while ((int)local_8 < iVar5);
    }
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_1 == '\v') {
      fVar8 = (float10)_DAT_007d2044 * (float10)_DAT_0079d4a4;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      _param_1 = 0;
      STField<undefined4>(this,0x2b8) = STField<undefined4>(this,0x2b4);
      STField<undefined4>(this,0x29a) = 1;
      fVar7 = fVar8 + fVar8;
      do {
        iVar5 = STField<int>(this,0x336);
        if ((uVar4 < *(uint *)(iVar5 + 0xc)) &&
           (puVar6 = (undefined4 *)(*(int *)(iVar5 + 8) * uVar4 + *(int *)(iVar5 + 0x1c)),
           puVar6 != nullptr)) {
          puVar6[10] = (float)((float10)(int)_param_1 * fVar7);
          fcos((float10)(int)_param_1 * fVar7);
          lVar9 = st::fn_0072E288();
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          fsin(extraout_ST0_00);
          puVar6[2] = (int)lVar9 + STField<int>(this,0x2a4);
          lVar9 = st::fn_0072E288();
          puVar6[3] = (int)lVar9 + STField<int>(this,0x2a8);
          puVar6[4] = (float)STField<int>(this,0x2ac) * _DAT_007904f8 * _DAT_007904f0;
          puVar6[5] = STField<undefined4>(this,0x2a4);
          puVar6[6] = STField<undefined4>(this,0x2a8);
          puVar6[7] = STField<undefined4>(this,0x2ac);
          iVar5 = STField<int>(this,0x2b4);
          puVar6[1] = 1;
          puVar6[9] = 1;
          *puVar6 = 1;
          puVar6[0xb] = (float)iVar5;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          _param_1 = _param_1 + 1;
          puVar6[8] = 0;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          fVar7 = extraout_ST0_01;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          fVar8 = extraout_ST1;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 0x32);
      fVar7 = (float10)_DAT_007d2044 * (float10)_DAT_0079d4a0;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      _param_1 = 0;
      uVar4 = 0x32;
      do {
        iVar5 = STField<int>(this,0x336);
        if ((uVar4 < *(uint *)(iVar5 + 0xc)) &&
           (puVar6 = (undefined4 *)(*(int *)(iVar5 + 8) * uVar4 + *(int *)(iVar5 + 0x1c)),
           puVar6 != nullptr)) {
          fVar8 = (float10)(int)_param_1 * fVar7 + fVar8;
          puVar6[10] = (float)fVar8;
          fcos(fVar8);
          lVar9 = st::fn_0072E288();
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          fsin(extraout_ST0_02);
          puVar6[2] = (int)lVar9 + STField<int>(this,0x2a4);
          lVar9 = st::fn_0072E288();
          puVar6[3] = (int)lVar9 + STField<int>(this,0x2a8);
          puVar6[4] = (float)STField<int>(this,0x2ac) * _DAT_007904f8 * _DAT_007904f0;
          puVar6[5] = STField<undefined4>(this,0x2a4);
          puVar6[6] = STField<undefined4>(this,0x2a8);
          puVar6[7] = STField<undefined4>(this,0x2ac);
          iVar5 = STField<int>(this,0x2b4);
          puVar6[1] = 1;
          puVar6[9] = 1;
          puVar6[8] = 0;
          puVar6[0xb] = (float)iVar5;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          _param_1 = _param_1 + 1;
          *puVar6 = 2;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          fVar7 = extraout_ST0_03;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          fVar8 = extraout_ST1_00;
        }
        iVar5 = uVar4 - 0x31;
        uVar4 = uVar4 + 1;
      } while (iVar5 < 10);
      fVar7 = (float10)_DAT_007d2044 * (float10)_DAT_0079d4a0;
      iVar5 = 0;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      _param_1 = 0;
      local_8 = 0x3c;
      do {
        iVar1 = STField<int>(this,0x336);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((local_8 < *(uint *)(iVar1 + 0xc)) &&
           (puVar6 = (undefined4 *)(*(int *)(iVar1 + 8) * local_8 + *(int *)(iVar1 + 0x1c)),
           puVar6 != nullptr)) {
          fVar8 = (float10)(int)_param_1 * fVar7 + fVar8;
          puVar6[10] = (float)fVar8;
          fcos(fVar8);
          lVar9 = st::fn_0072E288();
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          fsin(extraout_ST0_04);
          puVar6[2] = (int)lVar9 + STField<int>(this,0x2a4);
          lVar9 = st::fn_0072E288();
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          _param_1 = iVar5 + 1;
          puVar6[3] = (int)lVar9 + STField<int>(this,0x2a8);
          puVar6[4] = (float)STField<int>(this,0x2ac) * _DAT_007904f8 * _DAT_007904f0;
          puVar6[5] = STField<undefined4>(this,0x2a4);
          puVar6[6] = STField<undefined4>(this,0x2a8);
          puVar6[7] = STField<undefined4>(this,0x2ac);
          iVar5 = STField<int>(this,0x2b4);
          puVar6[1] = 2;
          puVar6[9] = 0x19;
          puVar6[8] = 10;
          *puVar6 = 3;
          puVar6[0xb] = (float)iVar5;
          iVar5 = _param_1;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          fVar7 = extraout_ST0_05;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          fVar8 = extraout_ST1_01;
          if (9 < (int)_param_1) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            _param_1 = 0;
            iVar5 = _param_1;
          }
        }
        iVar1 = local_8 - 0x3b;
        local_8 = local_8 + 1;
      } while (iVar1 < 300);
      puVar6 = st::fn_006AAC70(0x1b);
      STField<undefined4 *>(this,0x37f) = puVar6;
      if (puVar6 != nullptr) {
        *puVar6 = 0xffffffff;
        iVar5 = st::fn_00405114(this,STField<int>(this,0x2a4),STField<int>(this,0x2a8),
                                   STField<undefined4>(this,0x2b4));
        if (iVar5 != 0) {
          st::fn_0040243C(this);
        }
      }
      iVar5 = (STField<ST3DSMAPContext *>(this,0x211))->field_0380;
      fVar7 = st::fn_006E3210
                        (STField<ST3DSMAPContext *>(this,0x211),
                         (STField<int>(this,0x2a4) * iVar5) / 0xc9,
                         (STField<int>(this,0x2a8) * iVar5) / 0xc9);
      STField<float>(this,0x332) = (float)(fVar7 + (float10)_DAT_00790500);
      return 0;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((param_1 == '\f') && (iVar1 = STField<int>(this,700), iVar1 != 0)) {
      fVar3 = _DAT_007d2044 + _DAT_007d2044;
      STField<undefined4>(this,0x2b8) = STField<undefined4>(this,0x2b4);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      _param_1 = 0;
      STField<undefined4>(this,0x29a) = 1;
      local_8 = 0;
      if (0 < iVar5) {
        do {
          iVar2 = STField<int>(this,0x336);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((local_8 < *(uint *)(iVar2 + 0xc)) &&
             (puVar6 = (undefined4 *)(*(int *)(iVar2 + 8) * local_8 + *(int *)(iVar2 + 0x1c)),
             puVar6 != nullptr)) {
            fVar7 = (float10)(int)_param_1 * (float10)(fVar3 / (float)iVar1);
            puVar6[10] = (float)fVar7;
            fcos(fVar7);
            lVar9 = st::fn_0072E288();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            fsin(extraout_ST0);
            puVar6[2] = (int)lVar9 + STField<int>(this,0x2a4);
            lVar9 = st::fn_0072E288();
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            _param_1 = uVar4 + 1;
            puVar6[3] = (int)lVar9 + STField<int>(this,0x2a8);
            puVar6[4] = (float)STField<int>(this,0x2ac) * _DAT_007904f8 * _DAT_007904f0;
            puVar6[5] = STField<undefined4>(this,0x2a4);
            puVar6[6] = STField<undefined4>(this,0x2a8);
            puVar6[7] = STField<undefined4>(this,0x2ac);
            iVar2 = STField<int>(this,0x2b4);
            puVar6[1] = 1;
            puVar6[9] = 10;
            puVar6[8] = 5;
            *puVar6 = 0;
            puVar6[0xb] = (float)iVar2;
            uVar4 = _param_1;
            if (STField<int>(this,700) <= (int)_param_1) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              _param_1 = 0;
              uVar4 = _param_1;
            }
          }
          local_8 = local_8 + 1;
        } while ((int)local_8 < iVar5);
        return 0;
      }
    }
  }
  return 0;
}

// 0063DE20 FUN_0063de20
#line 4 "decomp/ST.exe/functions/0063DE20/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0063DE20 -> 00568DD0 @ 0063DEAC */

void __thiscall st::fn_0063DE20(void *this,int soundId)

{
  int iVar1;
  short sVar2;
  SoundPosition local_10;

  iVar1 = STField<int>(this,0x266);
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    local_10.x = (short)(((short)(iVar1 / 0xc9) + sVar2) -
                        (short)((longlong)iVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.x = (int)(short)(((short)(iVar1 / 0xc9) + sVar2) -
                             (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
  }
  iVar1 = STField<int>(this,0x26a);
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    local_10.y = (short)(((short)(iVar1 / 0xc9) + sVar2) -
                        (short)((longlong)iVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.y = (int)(short)(((short)(iVar1 / 0xc9) + sVar2) -
                             (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
  }
  local_10.unknown = STField<int>(this,0x18);
  st::fn_00404BD8((SoundClassTy *)&g_sound,SOUND_MODE_2,nullptr,soundId,&local_10,0);
  return;
}

// 0063E410 FUN_0063e410
#line 4 "decomp/ST.exe/functions/0063E410/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_0063E410(AnonShape_0063E410_6FBC68F2 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_c;
  uint local_8;

  if (param_1->field_0336 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)(param_1->field_0336 + 0xc);
    iVar5 = param_1->field_02C0;
    if ((iVar5 < 1) || (0x4a < iVar5)) {
      local_c = (iVar5 + 5) % 10;
      local_10 = param_1->field_02BC + local_c;
    }
    else {
      local_c = (iVar5 + -1) * param_1->field_02BC;
      local_10 = param_1->field_02BC + local_c;
    }
    local_8 = 0;
    if (0 < iVar1) {
      do {
        iVar5 = param_1->field_0336;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (((local_8 < *(uint *)(iVar5 + 0xc)) &&
            (iVar5 = *(int *)(iVar5 + 8) * local_8 + *(int *)(iVar5 + 0x1c), iVar5 != 0)) &&
           (uVar2 = *(uint *)(iVar5 + 0x38), -1 < (int)uVar2)) {
          if (*(int *)(iVar5 + 4) == 1) {
            if ((local_c <= (int)local_8) && ((int)local_8 < local_10)) {
              *(undefined4 *)(iVar5 + 4) = 0;
              st::fn_006EA270
                        (param_1->field_0211,uVar2,0,
                         *(uint *)(&DAT_007d1f98 + *(int *)(iVar5 + 0x20) * 4));
              st::fn_006EA960
                        (param_1->field_0211,*(uint *)(iVar5 + 0x38),
                         (float)*(int *)(iVar5 + 8) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)(iVar5 + 0xc) * _DAT_007904f8 * _DAT_007904f0,
                         *(float *)(iVar5 + 0x10) + _DAT_007904fc);
              st::fn_006EAAA0(param_1->field_0211,*(uint *)(iVar5 + 0x38),0);
            }
          }
          else {
            uVar3 = g_playSystem_00802A38->field_00E4;
            if ((1 < uVar3 - *(uint *)(iVar5 + 0x30)) || (uVar3 == *(uint *)(iVar5 + 0x30))) {
              *(uint *)(iVar5 + 0x30) = uVar3;
              iVar4 = *(int *)(iVar5 + 0x24) + -1;
              if (*(int *)(iVar5 + 0x20) < iVar4) {
                *(int *)(iVar5 + 0x20) = *(int *)(iVar5 + 0x20) + 1;
              }
              else {
                *(int *)(iVar5 + 0x20) = iVar4;
              }
              st::fn_006EA270
                        (param_1->field_0211,uVar2,0,
                         *(uint *)(&DAT_007d1f98 + *(int *)(iVar5 + 0x20) * 4));
              st::fn_006EA960
                        (param_1->field_0211,*(uint *)(iVar5 + 0x38),
                         (float)*(int *)(iVar5 + 8) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)(iVar5 + 0xc) * _DAT_007904f8 * _DAT_007904f0,
                         *(float *)(iVar5 + 0x10) + _DAT_007904fc);
            }
          }
        }
        local_8 = local_8 + 1;
      } while ((int)local_8 < iVar1);
    }
  }
  return;
}

// 0063E660 FUN_0063e660
#line 4 "decomp/ST.exe/functions/0063E660/decomp.c"
void __fastcall st::fn_0063E660(AnonShape_0063E660_4D42AB87 *param_1)

{
  int iVar1;
  AnonNested_0063E660_0336_9C5AD80D *pAVar2;
  int iVar3;
  uint uVar4;

  if (param_1->field_0336 != nullptr) {
    iVar1 = param_1->field_0336->field_000C;
    uVar4 = 0;
    if (0 < iVar1) {
      do {
        pAVar2 = param_1->field_0336;
        if (((uVar4 < (uint)pAVar2->field_000C) &&
            (iVar3 = pAVar2->field_0008 * uVar4 + pAVar2->field_001C, iVar3 != 0)) &&
           (-1 < (int)*(uint *)(iVar3 + 0x38))) {
          st::fn_006E8BA0(param_1->field_0211,*(uint *)(iVar3 + 0x38));
          *(undefined4 *)(iVar3 + 0x38) = 0xffffffff;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar1);
    }
    st::fn_006AE110((DArrayTy *)param_1->field_0336);
    param_1->field_0336 = nullptr;
  }
  return;
}

// 0063E700 FUN_0063e700
#line 4 "decomp/ST.exe/functions/0063E700/decomp.c"
int __thiscall st::fn_0063E700(void *this,int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  undefined4 local_3c [8];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_1c = param_1 - param_3;
  iVar2 = param_2 - param_3;
  local_14 = param_2 + 1 + param_3;
  local_10 = param_1 + 1 + param_3;
  local_c = 0;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (local_1c < 0) {
    local_1c = 0;
  }
  if (g_worldGrid.sizeY < local_14) {
    local_14 = (int)g_worldGrid.sizeY;
  }
  if (g_worldGrid.sizeX < local_10) {
    local_10 = (int)g_worldGrid.sizeX;
  }
  iVar4 = local_1c;
  sVar3 = g_worldGrid.sizeX;
  local_8 = iVar2;
  if (iVar2 < local_14) {
    do {
      iVar6 = iVar4;
      local_18 = iVar4;
      local_8 = iVar2;
      if (iVar4 < local_10) {
        do {
          iVar6 = 0;
          local_18 = iVar4;
          do {
            if (-1 < (short)iVar4) {
              sVar5 = (short)iVar6;
              if (((((short)iVar4 < sVar3) && (sVar1 = (short)iVar2, -1 < sVar1)) &&
                  (sVar1 < g_worldGrid.sizeY)) &&
                 (((-1 < sVar5 && (sVar5 < g_worldGrid.sizeZ)) &&
                  (iVar2 = local_8, iVar4 = local_18,
                  g_worldGrid.cells
                  [(int)sVar1 * (int)sVar3 + (int)sVar5 * (int)g_worldGrid.planeStride +
                   (int)(short)local_18].objects[1] != nullptr)))) {
                local_c = local_c + 1;
                st::fn_00403E22(STField<int>(this,0x259),0,
                                   (int)g_worldGrid.cells
                                        [(int)sVar1 * (int)sVar3 +
                                         (int)sVar5 * (int)g_worldGrid.planeStride +
                                         (int)(short)local_18].objects[1],
                                   (short)STField<undefined4>(this,0x25d),
                                   STField<ushort>(this,0x261),0xa8,0x128);
                iVar2 = local_8;
                sVar3 = g_worldGrid.sizeX;
              }
              if (((-1 < (short)iVar4) && ((short)iVar4 < sVar3)) &&
                 (((sVar1 = (short)iVar2, -1 < sVar1 &&
                   (((sVar1 < g_worldGrid.sizeY && (-1 < sVar5)) && (sVar5 < g_worldGrid.sizeZ))))
                  && (iVar2 = local_8, iVar4 = local_18,
                     g_worldGrid.cells
                     [(int)sVar1 * (int)sVar3 + (int)sVar5 * (int)g_worldGrid.planeStride +
                      (int)(short)local_18].objects[0] != nullptr)))) {
                local_c = local_c + 1;
                st::fn_00403E22(STField<int>(this,0x259),0,
                                   (int)g_worldGrid.cells
                                        [(int)sVar1 * (int)sVar3 +
                                         (int)sVar5 * (int)g_worldGrid.planeStride +
                                         (int)(short)local_18].objects[0],
                                   (short)STField<undefined4>(this,0x25d),
                                   STField<ushort>(this,0x261),0xa8,0x128);
                iVar2 = local_8;
                sVar3 = g_worldGrid.sizeX;
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < 5);
          iVar4 = iVar4 + 1;
          iVar6 = local_1c;
          local_18 = iVar4;
        } while (iVar4 < local_10);
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar6;
      local_8 = iVar2;
    } while (iVar2 < local_14);
  }
  memset(local_3c, 0, 0x20); /* compiler bulk-zero initialization */
  local_3c[3] = 2;
  local_3c[4] = 0x128;
  st::fn_00403B70(param_1,param_2,param_3,local_3c,1);
  return local_c;
}

// 0063E9C0 FUN_0063e9c0
#line 4 "decomp/ST.exe/functions/0063E9C0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0063E9C0(void *this,int param_1)

{
  float fVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0;
  float10 fVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST1;
  longlong lVar12;
  longlong lVar13;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;

  uVar9 = (STField<int>(this,0x2c0) % 10) * STField<int>(this,700);
  if (STField<uint>(this,0x245) < 2) {
    local_18 = 10;
    cVar2 = STField<char>(this,0x329);
    if ((cVar2 == '\0') && ((STField<int>(this,0x2b0) - STField<int>(this,0x2b8)) / 10 == 1))
    {
      STField<undefined1>(this,0x329) = 5;
      goto cf_common_join_0063EACD;
    }
    if (cVar2 == '\0') goto cf_common_join_0063EACD;
    uVar7 = g_playSystem_00802A38->field_00E4;
  }
  else {
    if (STField<uint>(this,0x245) == 2) {
      local_18 = 5;
      goto cf_common_join_0063EACD;
    }
    local_18 = 10;
    cVar2 = STField<char>(this,0x329);
    if ((cVar2 == '\0') && ((STField<int>(this,0x2b0) - STField<int>(this,0x2b8)) / 10 == 1))
    {
      STField<undefined1>(this,0x329) = 5;
      goto cf_common_join_0063EACD;
    }
    if (cVar2 == '\0') goto cf_common_join_0063EACD;
    uVar7 = g_playSystem_00802A38->field_00E4;
  }
  local_18 = 10;
  if (uVar7 % 10 == 0) {
    local_18 = 10;
    STField<char>(this,0x329) = cVar2 + '\x01';
  }
cf_common_join_0063EACD:
  local_14 = uVar9;
  if ((int)uVar9 < (int)(STField<int>(this,700) + uVar9)) {
    do {
      iVar10 = STField<int>(this,0x336);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((local_14 < *(uint *)(iVar10 + 0xc)) &&
         (iVar10 = *(int *)(iVar10 + 8) * local_14 + *(int *)(iVar10 + 0x1c), iVar10 != 0)) {
        STField<int>(this,0x1c) = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        if (param_1 == 10) {
          iVar4 = local_18 * STField<int>(this,0x2c0) + STField<int>(this,0x2b4);
        }
        else {
          iVar4 = STField<int>(this,0x2c0);
          iVar4 = ((iVar4 * iVar4 * -0x5f) / 2000 - iVar4 * local_18) + STField<int>(this,0x2b4);
        }
        *(float *)(iVar10 + 0x2c) = (float)iVar4;
        lVar12 = st::fn_0072E288();
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        fcos(extraout_ST0);
        lVar13 = st::fn_0072E288();
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        fsin(extraout_ST1);
        iVar4 = (int)lVar13 + *(int *)(iVar10 + 0x14);
        *(int *)(iVar10 + 8) = iVar4;
        lVar13 = st::fn_0072E288();
        iVar5 = (int)lVar13 + *(int *)(iVar10 + 0x18);
        *(int *)(iVar10 + 0xc) = iVar5;
        sVar8 = (short)(iVar4 >> 0x1f);
        sVar3 = (short)(iVar5 >> 0x1f);
        if (param_1 == 10) {
          if ((int)local_14 % (int)(uint)STField<byte>(this,0x328) == 0) {
            iVar6 = (int)(local_14 - uVar9) / (int)(uint)STField<byte>(this,0x328);
            if (iVar4 < 0) {
              local_c = (short)(((short)(iVar4 / 0xc9) + sVar8) -
                               (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              local_c = (int)(short)(((short)(iVar4 / 0xc9) + sVar8) -
                                    (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
            }
            if (iVar5 < 0) {
              iVar4 = (short)(((short)(iVar5 / 0xc9) + sVar3) -
                             (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar4 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                                  (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
            }
            if ((local_c != *(short *)((int)this + iVar6 * 4 + 0x2c4)) ||
               (iVar4 != *(short *)((int)this + iVar6 * 4 + 0x2c6))) {
              *(short *)((int)this + iVar6 * 4 + 0x2c4) = (short)local_c;
              iVar5 = (int)lVar12 / 0xc9;
              sVar8 = (short)iVar4;
              *(short *)((int)this + iVar6 * 4 + 0x2c6) = sVar8;
              if (iVar5 < 1) {
                local_1c = 4000;
              }
              else {
                local_1c = (int)(4000 / (longlong)iVar5);
              }
              local_10 = 0;
              do {
                if (-1 < (short)local_c) {
                  sVar3 = (short)local_10;
                  if ((((((short)local_c < g_worldGrid.sizeX) && (-1 < sVar8)) &&
                       (sVar8 < g_worldGrid.sizeY)) && ((-1 < sVar3 && (sVar3 < g_worldGrid.sizeZ)))
                      ) && (STGridAt3D(g_worldGrid, local_c, sVar8, sVar3).objects[0]
                            != nullptr)) {
                    st::fn_00403E22(STField<int>(this,0x259),local_1c,
                                       (int)STGridAt3D(g_worldGrid, local_c, sVar8, sVar3).objects[0],
                                       (short)STField<undefined4>(this,0x25d),
                                       STField<ushort>(this,0x261),0xa8,0x110);
                  }
                  if ((((short)local_c < g_worldGrid.sizeX) && (-1 < sVar8)) &&
                     ((sVar8 < g_worldGrid.sizeY &&
                      (((-1 < sVar3 && (sVar3 < g_worldGrid.sizeZ)) &&
                       (STGridAt3D(g_worldGrid, local_c, sVar8, sVar3).objects[1] !=
                        nullptr)))))) {
                    st::fn_00403E22(STField<int>(this,0x259),local_1c,
                                       (int)STGridAt3D(g_worldGrid, local_c, sVar8, sVar3).objects[1],
                                       (short)STField<undefined4>(this,0x25d),
                                       STField<ushort>(this,0x261),0xa8,0x110);
                  }
                }
                local_10 = local_10 + 1;
              } while (local_10 < 5);
            }
          }
        }
        else if (((g_playSystem_00802A38->field_00E4 & 1) != 0) &&
                ((int)local_14 % (int)(uint)STField<byte>(this,0x328) == 0)) {
          iVar6 = (int)(local_14 - uVar9) / (int)(uint)STField<byte>(this,0x328);
          if (iVar4 < 0) {
            local_c = (short)(((short)(iVar4 / 0xc9) + sVar8) -
                             (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            local_c = (int)(short)(((short)(iVar4 / 0xc9) + sVar8) -
                                  (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
          }
          if (iVar5 < 0) {
            iVar4 = (short)(((short)(iVar5 / 0xc9) + sVar3) -
                           (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar4 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                                (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
          }
          if ((local_c != *(short *)((int)this + iVar6 * 4 + 0x2c4)) ||
             (iVar4 != *(short *)((int)this + iVar6 * 4 + 0x2c6))) {
            *(short *)((int)this + iVar6 * 4 + 0x2c4) = (short)local_c;
            iVar5 = (int)lVar12 / 0xc9;
            sVar8 = (short)iVar4;
            *(short *)((int)this + iVar6 * 4 + 0x2c6) = sVar8;
            if (iVar5 < 1) {
              local_1c = 4000;
            }
            else {
              local_1c = (int)(4000 / (longlong)iVar5);
            }
            local_10 = 0;
            do {
              if ((((-1 < (short)local_c) && ((short)local_c < g_worldGrid.sizeX)) && (-1 < sVar8))
                 && (((sVar8 < g_worldGrid.sizeY && (sVar3 = (short)local_10, -1 < sVar3)) &&
                     ((sVar3 < g_worldGrid.sizeZ &&
                      (STGridAt3D(g_worldGrid, local_c, sVar8, sVar3).objects[0] !=
                       nullptr)))))) {
                st::fn_00403E22(STField<int>(this,0x259),local_1c,
                                   (int)STGridAt3D(g_worldGrid, local_c, sVar8, sVar3).
                                        objects[0],(short)STField<undefined4>(this,0x25d),
                                   STField<ushort>(this,0x261),0xa8,0x110);
              }
              local_10 = local_10 + 1;
            } while (local_10 < 5);
          }
        }
        uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar7;
        *(uint *)(iVar10 + 8) = *(int *)(iVar10 + 8) + (uVar7 >> 0x10) % 6;
        uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar7;
        iVar5 = *(int *)(iVar10 + 0xc) + (uVar7 >> 0x10) % 6;
        *(int *)(iVar10 + 0xc) = iVar5;
        iVar4 = (STField<ST3DSMAPContext *>(this,0x211))->field_0380;
        fVar11 = st::fn_006E3210
                           (STField<ST3DSMAPContext *>(this,0x211),
                            (*(int *)(iVar10 + 8) * iVar4) / 0xc9,(iVar5 * iVar4) / 0xc9);
        fVar1 = (float)fVar11;
        if (*(float *)(iVar10 + 0x10) != fVar1) {
          if (fVar1 <= *(float *)(iVar10 + 0x10)) {
            if (*(float *)(iVar10 + 0x10) <= fVar1 - _DAT_0079d4a8) {
              *(float *)(iVar10 + 0x10) = fVar1;
            }
            else {
              *(float *)(iVar10 + 0x10) = fVar1 - _DAT_0079d4a8;
            }
          }
          else if (fVar1 - _DAT_00790504 <= *(float *)(iVar10 + 0x10)) {
            *(float *)(iVar10 + 0x10) = fVar1;
          }
          else {
            st::fn_006E8BA0
                      (STField<void *>(this,0x211),*(uint *)(iVar10 + 0x38));
            *(undefined4 *)(iVar10 + 0x38) = 0xffffffff;
          }
        }
        *(uint *)(iVar10 + 0x30) = g_playSystem_00802A38->field_00E4;
        uVar7 = STField<byte>(this,0x329) + 5;
        *(uint *)(iVar10 + 0x20) = uVar7;
        if (0xf < uVar7) {
          *(undefined4 *)(iVar10 + 0x20) = 0xe;
        }
        iVar4 = *(int *)(iVar10 + 0x20) + 5;
        *(int *)(iVar10 + 0x24) = iVar4;
        if (0xf < iVar4) {
          *(undefined4 *)(iVar10 + 0x24) = 0xf;
        }
      }
      local_14 = local_14 + 1;
    } while ((int)local_14 < (int)(uVar9 + STField<int>(this,700)));
  }
  iVar10 = STField<int>(this,0x2c0) + 1;
  STField<int>(this,0x2c0) = iVar10;
  if ((1 < STField<uint>(this,0x245)) && (STField<uint>(this,0x245) == 2)) {
    STField<int>(this,0x2b8) =
         (STField<int>(this,0x2b4) - (iVar10 * iVar10 * 0x5f) / 2000) - iVar10 * local_18;
    return;
  }
  STField<int>(this,0x2b8) = iVar10 * local_18 + STField<int>(this,0x2b4);
  return;
}

// 0063F340 FUN_0063f340
#line 4 "decomp/ST.exe/functions/0063F340/decomp.c"
void __fastcall st::fn_0063F340(AnonShape_0063F340_151E9E14 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;

  puVar3 = param_1->field_0347;
  if (puVar3 == nullptr) {
    puVar3 = st::fn_00709AF0
                       (PTR_00806774,CASE_1D,"expl_nb0",0xffffffff,0,1,0,nullptr);
    param_1->field_0347 = puVar3;
    param_1->field_033E = *(int *)puVar3 + -7;
    if (puVar3 == nullptr) {
      return;
    }
  }
  iVar1 = param_1->field_033E;
  if (iVar1 < 1) {
    param_1->field_0342 = **(undefined4 **)(STField<int>(puVar3,0x21) + iVar1 * 4);
    return;
  }
  uVar2 = **(undefined4 **)(STField<int>(puVar3,0x21) + 4 + (iVar1 + -1) * 4);
  param_1->field_033E = iVar1 + -1;
  param_1->field_0342 = uVar2;
  return;
}

// 0063F790 FUN_0063f790
#line 4 "decomp/ST.exe/functions/0063F790/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall st::fn_0063F790(AnonShape_0063F790_F83B8A8C *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  ST3DSMAPContext *pSVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0;
  float10 fVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST1_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST1_01;
  longlong lVar14;
  int local_14;
  int local_10;
  uint local_c;

  local_14 = 0;
  if (param_1->field_0336 == 0) {
    return -1;
  }
  iVar12 = param_1->field_02C0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar3 = *(int *)(param_1->field_0336 + 0xc);
  iVar5 = (int)param_1->field_0257 - (iVar12 + 8) * iVar12;
  iVar6 = iVar12 * 0x23 + param_1->field_02B4;
  local_c = 0;
  do {
    iVar11 = param_1->field_0336;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((local_c < *(uint *)(iVar11 + 0xc)) &&
       (iVar11 = *(int *)(iVar11 + 8) * local_c + *(int *)(iVar11 + 0x1c), iVar11 != 0)) {
      *(float *)(iVar11 + 0x2c) = (float)iVar6;
      st::fn_0072E288();
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      fcos(extraout_ST0);
      lVar14 = st::fn_0072E288();
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      fsin(extraout_ST1);
      iVar8 = (int)lVar14 + *(int *)(iVar11 + 0x14);
      *(int *)(iVar11 + 8) = iVar8;
      lVar14 = st::fn_0072E288();
      iVar7 = (int)lVar14 + *(int *)(iVar11 + 0x18);
      fVar1 = (float)iVar5 * _DAT_007904f8;
      *(int *)(iVar11 + 0xc) = iVar7;
      *(float *)(iVar11 + 0x10) = fVar1 * _DAT_007904f0;
      pSVar4 = (ST3DSMAPContext *)param_1->field_0211;
      fVar13 = st::fn_006E3210
                         (pSVar4,(iVar8 * pSVar4->field_0380) / 0xc9,
                          (iVar7 * pSVar4->field_0380) / 0xc9);
      fVar1 = (float)fVar13;
      if (*(float *)(iVar11 + 0x10) <= fVar1) {
        if (fVar1 <= *(float *)(iVar11 + 0x10)) {
          if (*(float *)(iVar11 + 0x10) <= fVar1 - _DAT_0079d4a8) {
            *(float *)(iVar11 + 0x10) = fVar1;
          }
          else {
            *(float *)(iVar11 + 0x10) = fVar1 - _DAT_0079d4a8;
          }
        }
        else {
          st::fn_006E8BA0((void *)param_1->field_0211,*(uint *)(iVar11 + 0x38));
          *(undefined4 *)(iVar11 + 0x38) = 0xffffffff;
          *(undefined4 *)(iVar11 + 0x34) = 0xffffffff;
        }
      }
    }
    local_c = local_c + 1;
  } while ((int)local_c < 0x32);
  local_10 = 0;
  local_c = 0x32;
  do {
    iVar11 = param_1->field_0336;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((local_c < *(uint *)(iVar11 + 0xc)) &&
       (iVar11 = *(int *)(iVar11 + 8) * local_c + *(int *)(iVar11 + 0x1c), iVar11 != 0)) {
      *(float *)(iVar11 + 0x2c) = (float)iVar6;
      st::fn_0072E288();
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      fcos(extraout_ST0_00);
      lVar14 = st::fn_0072E288();
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      fsin(extraout_ST1_00);
      iVar8 = (int)lVar14 + *(int *)(iVar11 + 0x14);
      *(int *)(iVar11 + 8) = iVar8;
      lVar14 = st::fn_0072E288();
      iVar7 = (int)lVar14 + *(int *)(iVar11 + 0x18);
      fVar1 = (float)iVar5 * _DAT_007904f8;
      *(int *)(iVar11 + 0xc) = iVar7;
      *(float *)(iVar11 + 0x10) = fVar1 * _DAT_007904f0;
      pSVar4 = (ST3DSMAPContext *)param_1->field_0211;
      fVar13 = st::fn_006E3210
                         (pSVar4,(iVar8 * pSVar4->field_0380) / 0xc9,
                          (iVar7 * pSVar4->field_0380) / 0xc9);
      fVar1 = (float)fVar13;
      if (fVar1 < *(float *)(iVar11 + 0x10)) {
        local_10 = local_10 + 1;
      }
      else if (fVar1 <= *(float *)(iVar11 + 0x10)) {
        if (fVar1 - _DAT_0079d4a8 < *(float *)(iVar11 + 0x10)) {
          *(float *)(iVar11 + 0x10) = fVar1 - _DAT_0079d4a8;
        }
      }
      else {
        st::fn_006E8BA0((void *)param_1->field_0211,*(uint *)(iVar11 + 0x38));
        *(undefined4 *)(iVar11 + 0x38) = 0xffffffff;
        *(undefined4 *)(iVar11 + 0x34) = 0xffffffff;
      }
    }
    iVar11 = local_c - 0x31;
    local_c = local_c + 1;
  } while (iVar11 < 10);
  if (local_10 == 0) {
    local_14 = 1;
  }
  else if (param_1->field_037F != 0) {
    *(int *)(param_1->field_037F + 0xc) = iVar6;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((*(char *)(param_1->field_037F + 0x15) == '\0') &&
       ((g_playSystem_00802A38->field_00E4 & 1) == 0)) {
      *(undefined1 *)(param_1->field_037F + 0x15) = 1;
      uVar9 = *(uint *)param_1->field_037F;
      if (-1 < (int)uVar9) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        st::fn_006E9720
                  ((void *)param_1->field_0211,uVar9,
                   (uint)(PTR_008032b8 + (uint)*(byte *)((int)param_1->field_037F + 0x15) * 0x80));
      }
    }
  }
  if (0 < iVar12) {
    iVar5 = iVar12 * 2 + -1;
    iVar6 = param_1->field_02C0 % 0x1e + 6;
    sVar2 = param_1->field_0257;
    uVar9 = iVar6 * 10;
    iVar12 = uVar9 + 10;
    if ((int)uVar9 < iVar12) {
      do {
        iVar11 = param_1->field_0336;
        if (uVar9 < *(uint *)(iVar11 + 0xc)) {
          iVar11 = *(int *)(iVar11 + 8) * uVar9 + *(int *)(iVar11 + 0x1c);
        }
        else {
          iVar11 = 0;
        }
        if (*(int *)(iVar11 + 4) == 2) {
          *(undefined4 *)(iVar11 + 4) = 3;
        }
        if (iVar11 != 0) {
          iVar8 = param_1->field_0336;
          uVar10 = iVar6 * -10 + 0x3c + uVar9;
          if (uVar10 < *(uint *)(iVar8 + 0xc)) {
            iVar8 = *(int *)(iVar8 + 8) * uVar10 + *(int *)(iVar8 + 0x1c);
          }
          else {
            iVar8 = 0;
          }
          if (-1 < *(int *)(iVar8 + 0x34)) {
            *(float *)(iVar11 + 0x2c) = (float)(param_1->field_02C0 * 0x23 + param_1->field_02B4);
            st::fn_0072E288();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            fcos(extraout_ST0_01);
            lVar14 = st::fn_0072E288();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            fsin(extraout_ST1_01);
            iVar8 = (int)lVar14 + *(int *)(iVar11 + 0x14);
            *(int *)(iVar11 + 8) = iVar8;
            lVar14 = st::fn_0072E288();
            iVar7 = (int)lVar14 + *(int *)(iVar11 + 0x18);
            fVar1 = (float)(((iVar5 * -8) / 2 -
                            ((int)(iVar5 * iVar5 + (iVar5 * iVar5 >> 0x1f & 3U)) >> 2)) + (int)sVar2
                           ) * _DAT_007904f8;
            *(int *)(iVar11 + 0xc) = iVar7;
            *(float *)(iVar11 + 0x10) = fVar1 * _DAT_007904f0;
            pSVar4 = (ST3DSMAPContext *)param_1->field_0211;
            fVar13 = st::fn_006E3210
                               (pSVar4,(iVar8 * pSVar4->field_0380) / 0xc9,
                                (iVar7 * pSVar4->field_0380) / 0xc9);
            fVar1 = (float)fVar13;
            if (*(float *)(iVar11 + 0x10) <= fVar1) {
              if (*(float *)(iVar11 + 0x10) < fVar1) {
                st::fn_006E8BA0
                          ((void *)param_1->field_0211,*(uint *)(iVar11 + 0x38));
                *(undefined4 *)(iVar11 + 0x38) = 0xffffffff;
                *(undefined4 *)(iVar11 + 0x34) = 0xffffffff;
                goto LAB_0063fc75;
              }
              if (*(float *)(iVar11 + 0x10) <= fVar1 - _DAT_0079d4a8) {
                *(float *)(iVar11 + 0x10) = fVar1;
              }
              else {
                *(float *)(iVar11 + 0x10) = fVar1 - _DAT_0079d4a8;
              }
            }
            uVar10 = g_playSystem_00802A38->field_00E4;
            *(undefined4 *)(iVar11 + 0x20) = 10;
            *(uint *)(iVar11 + 0x30) = uVar10;
          }
        }
LAB_0063fc75:
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < iVar12);
    }
  }
  if ((local_14 != 0) && (uVar9 = 0x3c, 0x3c < iVar3)) {
    iVar12 = param_1->field_0336;
    do {
      if ((((uVar9 < *(uint *)(iVar12 + 0xc)) &&
           (iVar5 = *(int *)(iVar12 + 8) * uVar9 + *(int *)(iVar12 + 0x1c), iVar5 != 0)) &&
          (-1 < *(int *)(iVar5 + 0x34))) && (*(int *)(iVar5 + 0x20) < *(int *)(iVar5 + 0x24) + -1))
      {
        local_10 = local_10 + 1;
        break;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iVar3);
  }
  if (local_10 == 0) {
    local_14 = local_14 + 1;
  }
  iVar12 = param_1->field_02C0 + 1;
  param_1->field_02C0 = iVar12;
  param_1->field_02B8 = iVar12 * 0x23 + param_1->field_02B4;
  return local_14;
}

// 0063FE70 FUN_0063fe70
#line 4 "decomp/ST.exe/functions/0063FE70/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall st::fn_0063FE70(void *this,char param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_8;

  if (STField<int>(this,0x336) != 0) {
    iVar1 = *(int *)(STField<int>(this,0x336) + 0xc);
    local_8 = 0;
    if (0 < iVar1) {
      do {
        iVar5 = STField<int>(this,0x336);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (((local_8 < *(uint *)(iVar5 + 0xc)) &&
            (iVar5 = *(int *)(iVar5 + 8) * local_8 + *(int *)(iVar5 + 0x1c), iVar5 != 0)) &&
           (uVar2 = *(uint *)(iVar5 + 0x38), -1 < (int)uVar2)) {
          iVar4 = *(int *)(iVar5 + 4);
          if ((iVar4 == 1) || (iVar4 == 3)) {
            if ((param_1 != '\0') || (iVar4 == 3)) {
              *(undefined4 *)(iVar5 + 4) = 0;
              st::fn_006EA270
                        (STField<ST3DSMAPContext *>(this,0x211),uVar2,0,*(uint *)(iVar5 + 0x20));
              st::fn_006EA960
                        (STField<void *>(this,0x211),*(uint *)(iVar5 + 0x38),
                         (float)*(int *)(iVar5 + 8) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)(iVar5 + 0xc) * _DAT_007904f8 * _DAT_007904f0,
                         *(float *)(iVar5 + 0x10) + _DAT_007904fc);
              st::fn_006EAAA0
                        (STField<void *>(this,0x211),*(uint *)(iVar5 + 0x38),0);
            }
          }
          else if (iVar4 != 2) {
            if ((int)local_8 < 0x3c) {
              *(uint *)(iVar5 + 0x30) = g_playSystem_00802A38->field_00E4;
              iVar4 = *(int *)(iVar5 + 0x24) + -1;
              if (*(int *)(iVar5 + 0x20) < iVar4) {
                *(int *)(iVar5 + 0x20) = *(int *)(iVar5 + 0x20) + 1;
              }
              else {
                *(int *)(iVar5 + 0x20) = iVar4;
              }
              st::fn_006EA270
                        (STField<ST3DSMAPContext *>(this,0x211),uVar2,0,*(uint *)(iVar5 + 0x20));
              st::fn_006EA960
                        (STField<void *>(this,0x211),*(uint *)(iVar5 + 0x38),
                         (float)*(int *)(iVar5 + 8) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)(iVar5 + 0xc) * _DAT_007904f8 * _DAT_007904f0,
                         *(float *)(iVar5 + 0x10) + _DAT_007904fc);
            }
            else {
              uVar3 = g_playSystem_00802A38->field_00E4;
              if ((1 < uVar3 - *(uint *)(iVar5 + 0x30)) || (uVar3 == *(uint *)(iVar5 + 0x30))) {
                *(uint *)(iVar5 + 0x30) = uVar3;
                iVar4 = *(int *)(iVar5 + 0x24) + -1;
                if (*(int *)(iVar5 + 0x20) < iVar4) {
                  *(int *)(iVar5 + 0x20) = *(int *)(iVar5 + 0x20) + 1;
                }
                else {
                  *(int *)(iVar5 + 0x20) = iVar4;
                }
                st::fn_006EA270
                          (STField<ST3DSMAPContext *>(this,0x211),uVar2,0,*(uint *)(iVar5 + 0x20));
              }
              st::fn_006EA960
                        (STField<void *>(this,0x211),*(uint *)(iVar5 + 0x38),
                         (float)*(int *)(iVar5 + 8) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)(iVar5 + 0xc) * _DAT_007904f8 * _DAT_007904f0,
                         *(float *)(iVar5 + 0x10) + _DAT_007904fc);
            }
          }
        }
        local_8 = local_8 + 1;
      } while ((int)local_8 < iVar1);
    }
    if ((STField<uint *>(this,0x37f) != nullptr) &&
       (uVar2 = *STField<uint *>(this,0x37f), -1 < (int)uVar2)) {
      st::fn_006E96D0(STField<void *>(this,0x211),uVar2);
    }
  }
  return;
}

