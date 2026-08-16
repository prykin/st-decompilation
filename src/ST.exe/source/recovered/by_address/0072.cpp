#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0072.cpp

// 00720960 CreateList
#line 4 "decomp/ST.exe/functions/00720960/decomp.c"
/* [STObjectFactoryApplier] Central object factory for 0x0007 (ST_OBJECT_TYPE_0007).
   Evidence: exact registry pointer; create function first */

ListClassTy * __cdecl st::fn_00720960(void)

{
  ListClassTy *pLVar1;

  pLVar1 = (ListClassTy *)st::fn_006B04D0(0x20c);
  if (pLVar1 != nullptr) {
    st::fn_0072B700((undefined4 *)pLVar1);
    pLVar1->field_01E8 = 0;
    pLVar1->field_01E4 = 0;
    pLVar1->field_01E0 = 0;
    pLVar1->field_01F8 = 0;
    pLVar1->vtable = &st_global_0079E2A4;
    return pLVar1;
  }
  return nullptr;
}

// 007209D0 FUN_007209d0
#line 4 "decomp/ST.exe/functions/007209D0/decomp.c"
int __thiscall st::fn_007209D0(void *this,undefined4 param_1)

{
  int iVar1;

  if (((STField<uint>(this,0x1c) & 0xf0000000) == 0) && (STField<int>(this,0x138) != 0)) {
    STField<undefined4>(this,0x160) = param_1;
    if ((STField<uint>(this,0x1c) == 1) && ((STField<byte>(this,0x20) & 4) == 0)) {
      STField<undefined2>(this,0x164) = STField<undefined2>(this,0x204);
      STField<undefined2>(this,0x166) = STField<undefined2>(this,0x208);
    }
    else {
      STField<undefined2>(this,0x166) = 0xffff;
      STField<undefined2>(this,0x164) = 0xffff;
    }
    iVar1 = st::fn_006E5FE0(this,(undefined4 *)((int)this + 0x14c));
    return -(uint)(iVar1 != 0);
  }
  return 0;
}

// 007233B0 CreateEditor
#line 4 "decomp/ST.exe/functions/007233B0/decomp.c"
/* [STObjectFactoryApplier] Central object factory for 0x0006 (ST_OBJECT_TYPE_0006).
   Evidence: exact registry pointer; create function first */

EditorClassTy * __cdecl st::fn_007233B0(void)

{
  EditorClassTy *pEVar1;

  pEVar1 = (EditorClassTy *)st::fn_006B04D0(0x218);
  if (pEVar1 != nullptr) {
    pEVar1 = st::fn_007209B0(pEVar1);
    return pEVar1;
  }
  return nullptr;
}

// 007233D0 FUN_007233d0
#line 4 "decomp/ST.exe/functions/007233D0/decomp.c"
int __thiscall st::fn_007233D0(void *this,undefined4 param_1)

{
  int iVar1;

  STField<undefined4>(this,0x58) = param_1;
  iVar1 = st::fn_006E5FE0(this,(undefined4 *)((int)this + 0x44));
  return -(uint)(iVar1 != 0);
}

// 007233F0 FUN_007233f0
#line 4 "decomp/ST.exe/functions/007233F0/decomp.c"
int __fastcall st::fn_007233F0(AnonShape_007233F0_CA87FFD3 *param_1)

{
  AnonNested_007233F0_0064_6FCF4A7B *pAVar1;
  int iVar2;
  int iVar3;

  pAVar1 = param_1->field_0064;
  iVar2 = pAVar1->field_0000;
  iVar3 = -1;
  if (iVar2 != 0) {
    iVar3 = 0;
    while (iVar2 != param_1->field_0068) {
      iVar2 = pAVar1->field_0070;
      pAVar1 = (AnonNested_007233F0_0064_6FCF4A7B *)&pAVar1->field_0070;
      iVar3 = iVar3 + 1;
      if (iVar2 == 0) {
        return -1;
      }
    }
  }
  return iVar3;
}

// 007242D0 FUN_007242d0
#line 4 "decomp/ST.exe/functions/007242D0/decomp.c"
/* [STObjectFactoryApplier] Central object factory for 0x0005 (ST_OBJECT_TYPE_0005).
   Evidence: exact registry pointer; create function first */

void * __cdecl st::fn_007242D0(void)

{
  undefined4 *this;

  this = st::fn_006B04D0(0x78);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    *this = st::machine_word_boundary_cast<undefined4>(&st_global_0079E2C0);
    this[0x19] = 0;
    this[6] = 0;
    return this;
  }
  return nullptr;
}

// 00724330 FUN_00724330
#line 4 "decomp/ST.exe/functions/00724330/decomp.c"
int __thiscall st::fn_00724330(void *this,int param_1)

{
  int iVar1;

  iVar1 = 1;
  if ((STField<int>(this,0x58) != 0) && (STField<int>(this,0x5c) != 0)) {
    iVar1 = (param_1 / STField<int>(this,0x5c)) * STField<int>(this,0x60) + 1;
  }
  return iVar1;
}

// 00724360 FUN_00724360
#line 4 "decomp/ST.exe/functions/00724360/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_00724360(AnonShape_00724360_3CA25F92 *param_1)

{
  undefined4 local_24 [2];
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  uint local_10;

  if (param_1->field_0048 == 0) {
    local_1c = param_1->field_0024;
    local_18 = st::pointer_boundary_cast<undefined1 *>(&DAT_80000002);
    local_14 = 0x20;
    local_10 = 0;
    if (local_1c != 0) {
      st::fn_006E6060(param_1,local_24);
    }
    local_1c = param_1->field_001C;
    if (local_1c != 0) {
      st::fn_006E6060(param_1,local_24);
    }
    local_1c = param_1->field_0020;
    if (local_1c != 0) {
      st::fn_006E6060(param_1,local_24);
      return;
    }
  }
  else {
    local_1c = param_1->field_0024;
    if (local_1c != 0) {
      local_18 = st::pointer_boundary_cast<undefined1 *>(&DAT_80000002);
      local_14 = 0x20;
      local_10 = 1;
      st::fn_006E6060(param_1,local_24);
    }
    local_1c = param_1->field_001C;
    if (local_1c != 0) {
      local_18 = st::pointer_boundary_cast<undefined1 *>(&DAT_80000002);
      local_14 = 0x21;
      st::fn_006E6060(param_1,local_24);
      if ((local_10 != 2) || (param_1->field_004C == 0)) {
        local_10 = (uint)(param_1->field_004C != 0);
        local_14 = 0x20;
        local_18 = st::pointer_boundary_cast<undefined1 *>(&DAT_80000002);
        st::fn_006E6060(param_1,local_24);
      }
    }
    local_1c = param_1->field_0020;
    if (local_1c != 0) {
      local_18 = st::pointer_boundary_cast<undefined1 *>(&DAT_80000002);
      local_14 = 0x21;
      st::fn_006E6060(param_1,local_24);
      if ((local_10 != 2) || (param_1->field_0048 + -1 <= param_1->field_004C)) {
        local_10 = (uint)(param_1->field_004C < param_1->field_0048 + -1);
        local_14 = 0x20;
        local_18 = st::pointer_boundary_cast<undefined1 *>(&DAT_80000002);
        st::fn_006E6060(param_1,local_24);
      }
    }
  }
  return;
}

// 00724D00 CreateSlider
#line 4 "decomp/ST.exe/functions/00724D00/decomp.c"
/* [STObjectFactoryApplier] Central object factory for 0x0004 (ST_OBJECT_TYPE_0004).
   Evidence: exact registry pointer; create function first */

SliderClassTy * __cdecl st::fn_00724D00(void)

{
  SliderClassTy *pSVar1;

  pSVar1 = (SliderClassTy *)st::fn_006B04D0(100);
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_00724310(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 00724D20 FUN_00724d20
#line 4 "decomp/ST.exe/functions/00724D20/decomp.c"
/* [STVTableApplier] Virtual slot 0079E2C8+0x8 */

undefined4 __fastcall st::fn_00724D20(int *param_1)

{
  undefined4 uVar1;

  if ((param_1[7] & 0xf0000000U) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00724d2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar1 = (**(code **)(*param_1 + 8))();
    return uVar1;
  }
  return 0;
}

// 00724D40 FUN_00724d40
#line 4 "decomp/ST.exe/functions/00724D40/decomp.c"
/* [STVTableApplier] Virtual slot 0079E2C8+0xC */

undefined4 __fastcall st::fn_00724D40(void *param_1)

{
  int iVar1;

  STField<undefined2>(param_1,0x17e) = STField<undefined2>(param_1,0x198);
  STField<undefined2>(param_1,0x17c) = STField<undefined2>(param_1,0x194);
  STField<int>(param_1,0x180) = (int)param_1 + 0x24;
  iVar1 = st::fn_006E5FE0(param_1,(undefined4 *)((int)param_1 + 0x168));
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return 0;
}

// 00724D90 FUN_00724d90
#line 4 "decomp/ST.exe/functions/00724D90/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall st::fn_00724D90(AnonShape_00724D90_F568CE21 *param_1)

{
  longlong lVar1;

  if (param_1->field_0020 == 1) {
    param_1->field_0194 = 0;
    lVar1 = st::fn_0072E288();
    param_1->field_0198 = (int)lVar1;
    return;
  }
  lVar1 = st::fn_0072E288();
  param_1->field_0194 = (int)lVar1;
  param_1->field_0198 = 0;
  return;
}

// 00724E20 FUN_00724e20
#line 4 "decomp/ST.exe/functions/00724E20/decomp.c"
void __thiscall st::fn_00724E20(void *this,int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;

  iVar1 = STField<int>(this,0x13c);
  if (STField<int>(this,0x20) != 1) {
    if (param_1 <= iVar1 / 2) {
      STField<undefined4>(this,400) = 0;
      return;
    }
    if ((STField<int>(this,0x2c) - iVar1) + iVar1 / 2 <= param_1) {
      STField<int>(this,400) = STField<int>(this,0x18c) + -1;
      return;
    }
    lVar2 = st::fn_0072E288();
    STField<int>(this,400) = (int)lVar2;
    return;
  }
  if (param_2 <= iVar1 / 2) {
    STField<undefined4>(this,400) = 0;
    return;
  }
  if ((STField<int>(this,0x30) - iVar1) + iVar1 / 2 <= param_2) {
    STField<int>(this,400) = STField<int>(this,0x18c) + -1;
    return;
  }
  lVar2 = st::fn_0072E288();
  STField<int>(this,400) = (int)lVar2;
  return;
}

// 00724F00 FUN_00724f00
#line 4 "decomp/ST.exe/functions/00724F00/decomp.c"
bool __thiscall st::fn_00724F00(void *this,int param_1,int param_2)

{
  int iVar1;

  if (STField<int>(this,0x20) == 1) {
    if ((param_2 < STField<int>(this,0x28) + STField<int>(this,0x198)) ||
       (STField<int>(this,0x13c) + STField<int>(this,0x28) + STField<int>(this,0x198) <
        param_2)) {
      return false;
    }
  }
  else {
    if (param_1 < STField<int>(this,0x24) + STField<int>(this,0x194)) {
      return false;
    }
    if (STField<int>(this,0x13c) + STField<int>(this,0x24) + STField<int>(this,0x194) <
        param_1) {
      return false;
    }
  }
  if (STField<int>(this,0x140) != 0) {
    iVar1 = st::fn_006B55C0(STField<int>(this,0x140),STField<int>(this,0x144),
                         (param_1 - STField<int>(this,0x194)) - STField<int>(this,0x24),
                         (param_2 - STField<int>(this,0x198)) - STField<int>(this,0x28));
    return SUB41(iVar1,0);
  }
  return true;
}

// 00724FA0 FUN_00724fa0
#line 4 "decomp/ST.exe/functions/00724FA0/decomp.c"
int __thiscall st::fn_00724FA0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = STField<int>(this,0x24);
  iVar2 = 0;
  if ((((iVar1 <= param_1) && (param_1 < STField<int>(this,0x2c) + iVar1)) &&
      (STField<int>(this,0x28) <= param_2)) &&
     (param_2 < STField<int>(this,0x30) + STField<int>(this,0x28))) {
    iVar2 = 1;
  }
  if (((STField<byte>(this,0x188) & 1) != 0) && (iVar2 != 0)) {
    iVar2 = 0;
    if (((STField<int>(this,0x2c) - param_1) + STField<int>(this,0x28) + iVar1 < param_2) ||
       (param_2 < (STField<int>(this,0x30) - param_1) + STField<int>(this,0x28) + iVar1)) {
      iVar2 = 1;
    }
  }
  return iVar2;
}

// 00725520 CreateTrackbar
#line 4 "decomp/ST.exe/functions/00725520/decomp.c"
/* [STObjectFactoryApplier] Central object factory for 0x0003 (ST_OBJECT_TYPE_0003).
   Evidence: exact registry pointer; create function first */

TrackbarClassTy * __cdecl st::fn_00725520(void)

{
  TrackbarClassTy *pTVar1;

  pTVar1 = (TrackbarClassTy *)st::fn_006B04D0(0x19c);
  if (pTVar1 != nullptr) {
    st::fn_0072B700((undefined4 *)pTVar1);
    pTVar1->vtable = &st_global_0079E2CC;
    pTVar1->field_0134 = 0;
    return pTVar1;
  }
  return nullptr;
}

// 00725680 FUN_00725680
#line 4 "decomp/ST.exe/functions/00725680/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __cdecl st::fn_00725680(int *param_1)

{
  if (*param_1 != 0) {
    st::fn_006AB060(param_1);
  }
  return;
}

// 00725910 FUN_00725910
#line 4 "decomp/ST.exe/functions/00725910/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005BAE00 -> 00725910 @ 005BB365 | 005BAE00 -> 00725910 @ 005BB3D4 | 005E7FE0 ->
   00725910 @ 005E8148 | 005E84D0 -> 00725910 @ 005E8D28 | 005E84D0 -> 00725910 @ 005E8D96

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00725910 -> EXTERNAL:00000072 @ 00725B18 | 00725910 -> EXTERNAL:00000072 @ 00725C0F */

int __cdecl
st::fn_00725910(HANDLE hFindFile,char *text,undefined4 param_3,undefined *param_4,undefined4 param_5,
            byte param_6)

{
  char cVar1;
  int iVar3;
  HANDLE pvVar4;
  BOOL BVar5;
  int iVar2;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  CHAR *pCVar9;
  char *pcVar10;
  CHAR *pCVar11;
  char *pcVar12;
  _WIN32_FIND_DATAA local_248;
  char local_108 [260];
  char *pcVar8_mg2;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar3 = (*(code *)param_4)(hFindFile,param_3,1,param_5);
  if (iVar3 == 0) {
    uVar6 = 0xffffffff;
    pcVar8 = st::pointer_boundary_cast<char *>(hFindFile);
    do {
      pcVar12 = pcVar8;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar12;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar12 + -uVar6;
    pcVar12 = local_108;
    memmove(pcVar12, pcVar8, uVar6); /* compiler REP MOVS byte copy */
    uVar7 = 0;
    st::fn_006B8280(local_108,local_108);
    uVar6 = 0xffffffff;
    pcVar8_mg2 = text;
    do {
      pcVar8 = pcVar8_mg2;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar8 = pcVar8_mg2 + 1;
      cVar1 = *pcVar8_mg2;
      pcVar8_mg2 = pcVar8;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar3 = -1;
    pcVar12 = local_108;
    do {
      pcVar10 = pcVar12;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar10 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar10;
    } while (cVar1 != '\0');
    pcVar8 = pcVar8 + -uVar6;
    pcVar12 = pcVar10 + -1;
    memmove(pcVar12, pcVar8, uVar6); /* compiler REP MOVS byte copy */
    uVar7 = 0;
    pvVar4 = st::external_00000070(local_108,st::pointer_boundary_cast<LPWIN32_FIND_DATAA>(&local_248));
    if (pvVar4 != (HANDLE)0xffffffff) {
      do {
        if (((byte)local_248.dwFileAttributes & 0x10) == 0) {
          uVar6 = 0xffffffff;
          pcVar8 = st::pointer_boundary_cast<char *>(hFindFile);
          do {
            pcVar12 = pcVar8;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar12 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar12;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          pcVar8 = pcVar12 + -uVar6;
          pcVar12 = local_108;
          memmove(pcVar12, pcVar8, uVar6); /* compiler REP MOVS byte copy */
          uVar7 = 0;
          st::fn_006B8280(local_108,local_108);
          uVar6 = 0xffffffff;
          pCVar9 = local_248.cFileName;
          do {
            pCVar11 = pCVar9;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pCVar11 = pCVar9 + 1;
            cVar1 = *pCVar9;
            pCVar9 = pCVar11;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          iVar3 = -1;
          pcVar8 = local_108;
          do {
            pcVar12 = pcVar8;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar12 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar12;
          } while (cVar1 != '\0');
          pCVar9 = pCVar11 + -uVar6;
          pcVar8 = pcVar12 + -1;
          memmove(pcVar8, pCVar9, uVar6); /* compiler REP MOVS byte copy */
          uVar7 = 0;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar3 = (*(code *)param_4)(local_108,&local_248,0,param_5);
          if (iVar3 != 0) {
            st::external_00000072(pvVar4);
            return iVar3;
          }
        }
        BVar5 = st::external_00000071(pvVar4,st::pointer_boundary_cast<LPWIN32_FIND_DATAA>(&local_248));
      } while (BVar5 != 0);
    }
    st::external_00000072(pvVar4);
    if ((param_6 & 1) == 0) {
      uVar6 = 0xffffffff;
      pcVar8 = st::pointer_boundary_cast<char *>(hFindFile);
      do {
        pcVar12 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar12;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar8 = pcVar12 + -uVar6;
      pcVar12 = local_108;
      memmove(pcVar12, pcVar8, uVar6); /* compiler REP MOVS byte copy */
      uVar7 = 0;
      st::fn_006B8280(local_108,local_108);
      uVar6 = 0xffffffff;
      pcVar8 = &st_global_007CC8BC;
      do {
        pcVar12 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar12;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar3 = -1;
      pcVar8 = local_108;
      do {
        pcVar10 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar10;
      } while (cVar1 != '\0');
      pcVar8 = pcVar12 + -uVar6;
      pcVar12 = pcVar10 + -1;
      memmove(pcVar12, pcVar8, uVar6); /* compiler REP MOVS byte copy */
      uVar7 = 0;
      pvVar4 = st::external_00000070(local_108,st::pointer_boundary_cast<LPWIN32_FIND_DATAA>(&local_248));
      if (pvVar4 == (HANDLE)0xffffffff) {
        return -0x6f;
      }
      do {
        if ((((byte)local_248.dwFileAttributes & 0x10) != 0) && (local_248.cFileName[0] != '.')) {
          uVar6 = 0xffffffff;
          pcVar8 = st::pointer_boundary_cast<char *>(hFindFile);
          do {
            pcVar12 = pcVar8;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar12 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar12;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          pcVar8 = pcVar12 + -uVar6;
          pcVar12 = local_108;
          memmove(pcVar12, pcVar8, uVar6); /* compiler REP MOVS byte copy */
          uVar7 = 0;
          st::fn_006B8280(local_108,local_108);
          uVar6 = 0xffffffff;
          pCVar9 = local_248.cFileName;
          do {
            pCVar11 = pCVar9;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pCVar11 = pCVar9 + 1;
            cVar1 = *pCVar9;
            pCVar9 = pCVar11;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          iVar3 = -1;
          pcVar8 = local_108;
          do {
            pcVar12 = pcVar8;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar12 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar12;
          } while (cVar1 != '\0');
          pCVar9 = pCVar11 + -uVar6;
          pcVar8 = pcVar12 + -1;
          memmove(pcVar8, pCVar9, uVar6); /* compiler REP MOVS byte copy */
          iVar2 = st::fn_00725910(st::pointer_boundary_cast<HANDLE>(local_108),text,st::machine_word_boundary_cast<undefined4>(&local_248),param_4,param_5,0);
          if (iVar2 != 0) {
            st::external_00000072(pvVar4);
            return iVar2;
          }
        }
        BVar5 = st::external_00000071(pvVar4,st::pointer_boundary_cast<LPWIN32_FIND_DATAA>(&local_248));
      } while (BVar5 != 0);
      st::external_00000072(pvVar4);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar3 = (*(code *)param_4)(hFindFile,param_3,2,param_5);
  }
  return iVar3;
}

// 00725C20 FUN_00725c20
#line 4 "decomp/ST.exe/functions/00725C20/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00725C20 -> EXTERNAL:00000006 @ 00725C39 */

undefined4 __cdecl st::fn_00725C20(LPCSTR lpPathName,undefined4 param_2,char param_3)

{
  if (param_3 != '\0') {
    if (param_3 == '\x02') {
      st::external_00000006(lpPathName);
    }
    return 0;
  }
  st::external_00000024(lpPathName,0);
  st::external_0000006F(lpPathName);
  return 0;
}

// 00725E30 FUN_00725e30
#line 4 "decomp/ST.exe/functions/00725E30/decomp.c"
void __cdecl st::fn_00725E30(int *param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < *(short *)(iVar1 + 0x23)) {
      do {
        if (*(cMf32 **)(iVar1 + 0x25) == nullptr) {
          st::fn_006AB060((void *)(iVar1 + 0x2d + iVar2 * 4));
        }
        else {
          st::fn_006F20E0(*(cMf32 **)(iVar1 + 0x25),(uint *)(iVar1 + 0x2d + iVar2 * 4));
        }
        iVar1 = *param_1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(short *)(iVar1 + 0x23));
    }
    st::fn_006AB060(param_1);
  }
  return;
}

// 00726260 FUN_00726260
#line 4 "decomp/ST.exe/functions/00726260/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00709A10 -> 00726260 @ 00709A5F */

void __cdecl st::fn_00726260(uint *param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;

  psVar1 = (short *)*param_1;
  if (psVar1 != nullptr) {
    iVar2 = 0;
    if (0 < (int)psVar1[1] * (int)*psVar1) {
      iVar3 = 0;
      do {
        st::fn_006F20E0(*(cMf32 **)(psVar1 + 4),(uint *)(iVar3 + 0x12 + (int)psVar1));
        psVar1 = (short *)*param_1;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 10;
      } while (iVar2 < (int)psVar1[1] * (int)*psVar1);
    }
    st::fn_006AB060(param_1);
  }
  return;
}

// 00726870 FUN_00726870
#line 4 "decomp/ST.exe/functions/00726870/decomp.c"
void __cdecl st::fn_00726870(int *param_1)

{
  int *piVar1;
  int iVar2;

  piVar1 = (int *)*param_1;
  if (piVar1 != nullptr) {
    if (STField<int>(piVar1,0x11) != 0) {
      iVar2 = 0;
      if (0 < *piVar1) {
        do {
          st::fn_006F20E0(STField<cMf32 *>(piVar1,5),
                            (uint *)(STField<int>(piVar1,0x11) + iVar2 * 4));
          piVar1 = (int *)*param_1;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *piVar1);
      }
      st::fn_006AB060((void *)(*param_1 + 0x11));
    }
    st::fn_006AB060(param_1);
  }
  return;
}

// 00726BD0 FUN_00726bd0
#line 4 "decomp/ST.exe/functions/00726BD0/decomp.c"
void __cdecl st::fn_00726BD0(int *param_1)

{
  int iVar1;

  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (*(cMf32 **)(iVar1 + 2) != nullptr) {
      st::fn_006F20E0(*(cMf32 **)(iVar1 + 2),(uint *)(iVar1 + 10));
    }
    st::fn_006AB060(param_1);
  }
  return;
}

// 00726CE0 FUN_00726ce0
#line 4 "decomp/ST.exe/functions/00726CE0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00726CE0(void *this,int param_1)

{
  DAT_0085708c = STField<undefined4>(this,0xc);
  DAT_00857090 = STField<undefined4>(this,0x28);
  DAT_0085707c = STField<undefined4>(this,0x14);
  DAT_008570dc = STField<int>(this,0x30) << 0x10;
  DAT_0085705c = STField<int>(this,0x38) << 0x10;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  _DAT_00857100 = *(int *)(param_1 + 0xc);
  if (_DAT_00857100 == 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    _DAT_00857100 = *(int *)(param_1 + 0x10);
  }
  if (STField<int>(this,0x280) != 0) {
    DAT_0085709c = (uint)*(byte *)(STField<int>(this,0x280) + 4) << 1;
  }
  if (STField<int>(this,0x124) == 1) {
    DAT_0085706c = '\x02' << ((byte)(STField<int>(this,0x35c) << 1) & 0x1f);
    DAT_00857058 = '\x01' << ((byte)(STField<int>(this,0x35c) << 1) & 0x1f);
  }
  return;
}

// 00726D80 FUN_00726d80
#line 4 "decomp/ST.exe/functions/00726D80/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl st::fn_00726D80(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int *local_30;
  int *local_2c;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_8 = DAT_008570d0;
  local_10 = DAT_00857054;
  local_c = DAT_00857050;
  local_30 = st::pointer_boundary_cast<int *>(&DAT_00857044);
  local_2c = st::pointer_boundary_cast<int *>(&DAT_008570ac);
  local_18 = DAT_008570c8;
  local_14 = DAT_008570cc >> 0x10;
  do {
    iVar5 = local_2c[1];
    iVar9 = local_2c[-1];
    iVar1 = local_30[-1];
    iVar11 = *local_2c >> 0x10;
    iVar2 = *local_30;
    iVar6 = iVar11 - local_14;
    if (iVar6 < 1) {
      if (iVar6 < 0) {
        iVar7 = -iVar6;
        DAT_00857094 = (local_18 - iVar9) / iVar7;
        DAT_008570e4 = (local_8 - iVar5) / iVar7;
        DAT_008570fc = (local_c - iVar1) / iVar7;
        _DAT_00857080 = (local_10 - iVar2) / iVar7;
        local_1c = iVar11;
        local_18 = iVar9;
        local_10 = iVar2;
        local_c = iVar1;
        local_8 = iVar5;
        if (iVar11 < DAT_00857064) {
          iVar8 = DAT_00857064 - iVar11;
          if (-iVar8 != iVar6 && -1 < iVar7 + -iVar8) {
            local_18 = DAT_00857094 * iVar8 + iVar9;
            local_8 = DAT_008570e4 * iVar8 + iVar5;
            local_c = DAT_008570fc * iVar8 + iVar1;
            local_10 = _DAT_00857080 * iVar8 + iVar2;
          }
          local_1c = DAT_00857064;
        }
        if (DAT_008570ec < local_14) {
          local_14 = DAT_008570ec;
        }
        if (local_1c < local_14) {
          piVar12 = param_1 + (local_1c - DAT_00857064) * 8;
          iVar6 = local_14 - local_1c;
          do {
            piVar12[1] = local_8;
            piVar12[2] = local_c;
            *piVar12 = local_18 >> 0x10;
            piVar12[3] = local_10;
            local_18 = local_18 + DAT_00857094;
            local_8 = local_8 + DAT_008570e4;
            local_c = local_c + DAT_008570fc;
            local_10 = local_10 + _DAT_00857080;
            piVar12 = piVar12 + 8;
            iVar7 = iVar6 + -1;
            bVar3 = 0 < iVar6;
            iVar6 = iVar7;
          } while (iVar7 != 0 && bVar3);
        }
      }
    }
    else {
      DAT_00857094 = (iVar9 - local_18) / iVar6;
      DAT_008570e4 = (iVar5 - local_8) / iVar6;
      DAT_008570fc = (iVar1 - local_c) / iVar6;
      _DAT_00857080 = (iVar2 - local_10) / iVar6;
      local_1c = local_14;
      if (local_14 < DAT_00857064) {
        local_14 = DAT_00857064 - local_14;
        if (iVar6 != local_14 && -1 < iVar6 - local_14) {
          local_18 = local_18 + DAT_00857094 * local_14;
          local_8 = local_8 + DAT_008570e4 * local_14;
          local_c = local_c + DAT_008570fc * local_14;
          local_10 = local_10 + _DAT_00857080 * local_14;
        }
        local_1c = DAT_00857064;
      }
      local_14 = iVar11;
      if (DAT_008570ec < iVar11) {
        local_14 = DAT_008570ec;
      }
      if (local_1c < local_14) {
        piVar12 = param_1 + (local_1c - DAT_00857064) * 8;
        iVar6 = local_14 - local_1c;
        do {
          piVar12[5] = local_8;
          piVar12[6] = local_c;
          piVar12[4] = local_18 >> 0x10;
          piVar12[7] = local_10;
          local_18 = local_18 + DAT_00857094;
          local_8 = local_8 + DAT_008570e4;
          local_c = local_c + DAT_008570fc;
          local_10 = local_10 + _DAT_00857080;
          piVar12 = piVar12 + 8;
          iVar7 = iVar6 + -1;
          bVar3 = 0 < iVar6;
          iVar6 = iVar7;
        } while (iVar7 != 0 && bVar3);
      }
    }
    local_2c = local_2c + 4;
    local_30 = local_30 + 2;
    local_18 = iVar9;
    local_14 = iVar11;
    local_10 = iVar2;
    local_c = iVar1;
    local_8 = iVar5;
  } while ((int)local_2c < 0x8570cd);
  iVar5 = DAT_008570ec - DAT_00857064;
  if (param_2 == 0) {
    do {
      while( true ) {
        iVar9 = param_1[4];
        uVar10 = iVar9 - *param_1;
        param_1[4] = uVar10;
        if (uVar10 != 0 && *param_1 <= iVar9) break;
LAB_00727219:
        param_1 = param_1 + 8;
        iVar9 = iVar5 + -1;
        bVar3 = iVar5 < 1;
        iVar5 = iVar9;
        if (iVar9 == 0 || bVar3) {
          return;
        }
      }
      if (uVar10 == 1) {
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        goto LAB_00727219;
      }
      if (uVar10 < 200) {
        iVar9 = *(int *)(&DAT_007f0d48 + uVar10 * 4);
        lVar4 = (longlong)(param_1[5] - param_1[1]) * (longlong)iVar9;
        param_1[5] = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
        lVar4 = (longlong)(param_1[6] - param_1[2]) * (longlong)iVar9;
        param_1[6] = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
        lVar4 = (longlong)(param_1[7] - param_1[3]) * (longlong)iVar9;
        param_1[7] = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
        param_1 = param_1 + 8;
        iVar9 = iVar5 + -1;
        bVar3 = iVar5 < 1;
        iVar5 = iVar9;
        if (iVar9 == 0 || bVar3) {
          return;
        }
      }
      else {
        param_1[5] = (param_1[5] - param_1[1]) / (int)uVar10;
        param_1[6] = (param_1[6] - param_1[2]) / (int)uVar10;
        param_1[7] = (param_1[7] - param_1[3]) / (int)uVar10;
        param_1 = param_1 + 8;
        iVar9 = iVar5 + -1;
        bVar3 = iVar5 < 1;
        iVar5 = iVar9;
        if (iVar9 == 0 || bVar3) {
          return;
        }
      }
    } while( true );
  }
  do {
    iVar9 = param_1[4];
    iVar1 = *param_1;
    if (((DAT_00857060 < iVar9) && (iVar1 < DAT_008570e8)) &&
       (uVar10 = iVar9 - iVar1, uVar10 != 0 && iVar1 <= iVar9)) {
      if (uVar10 == 1) {
        param_1[4] = 1;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        if ((iVar1 < DAT_00857060) || (DAT_008570e8 <= iVar1)) goto LAB_0072716f;
      }
      else {
        if (uVar10 < 200) {
          iVar9 = *(int *)(&DAT_007f0d48 + uVar10 * 4);
          lVar4 = (longlong)(param_1[5] - param_1[1]) * (longlong)iVar9;
          param_1[5] = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
          lVar4 = (longlong)(param_1[6] - param_1[2]) * (longlong)iVar9;
          param_1[6] = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
          lVar4 = (longlong)(param_1[7] - param_1[3]) * (longlong)iVar9;
          param_1[7] = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
        }
        else {
          param_1[5] = (param_1[5] - param_1[1]) / (int)uVar10;
          param_1[6] = (param_1[6] - param_1[2]) / (int)uVar10;
          param_1[7] = (param_1[7] - param_1[3]) / (int)uVar10;
        }
        iVar9 = st::machine_word_boundary_cast<int>(param_1[4] - DAT_008570e8);
        if (iVar9 != 0 && DAT_008570e8 <= param_1[4]) {
          uVar10 = uVar10 - iVar9;
        }
        iVar9 = *param_1 - DAT_00857060;
        if (*param_1 < DAT_00857060) {
          uVar10 = uVar10 + iVar9;
          *param_1 = DAT_00857060;
          iVar9 = -iVar9;
          param_1[1] = st::machine_word_boundary_cast<int>(param_1[1] + param_1[5] * iVar9);
          param_1[2] = st::machine_word_boundary_cast<int>(param_1[2] + param_1[6] * iVar9);
          param_1[3] = st::machine_word_boundary_cast<int>(param_1[3] + param_1[7] * iVar9);
        }
        param_1[4] = uVar10;
      }
    }
    else {
LAB_0072716f:
      param_1[4] = 0;
    }
    param_1 = param_1 + 8;
    iVar9 = iVar5 + -1;
    bVar3 = iVar5 < 1;
    iVar5 = iVar9;
    if (iVar9 == 0 || bVar3) {
      return;
    }
  } while( true );
}

// 00727230 FUN_00727230
#line 4 "decomp/ST.exe/functions/00727230/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void st::fn_00727230(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar4_mg2;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint *puVar15;
  bool bVar16;
  bool bVar17;
  int local_10;
  int local_8;

  iVar2 = 0;
  local_8 = DAT_008570ec - DAT_00857064;
  iVar8 = 1;
  if (0 < local_8) {
    while (param_1[4] == 0) {
      iVar2 = iVar2 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 + 8;
      if (local_8 <= iVar2) {
        return;
      }
    }
    if (param_1[6] < 0) {
      iVar8 = -1;
    }
    if (iVar2 < local_8) {
      local_8 = local_8 - iVar2;
      local_10 = (DAT_00857064 + iVar2) * DAT_00857090 + DAT_0085708c;
      piVar4 = param_1;
      if (iVar8 < 0) {
LAB_00727639:
        DAT_008570f0 = piVar4[4];
        if (0 < (int)DAT_008570f0) {
          iVar8 = piVar4[6];
          iVar9 = iVar8;
          if ((short)iVar8 != 0) {
            iVar9 = iVar8 + 0x10000;
          }
          DAT_008570f4 = piVar4[7];
          uVar1 = DAT_008570f4;
          iVar10 = DAT_0085709c;
          if (((int)DAT_008570f4 < 0) && (iVar10 = -DAT_0085709c, (short)DAT_008570f4 != 0)) {
            uVar1 = DAT_008570f4 + 0x10000;
          }
          DAT_00857074 = (iVar9 >> 0x10) + ((int)uVar1 >> 0x10) * DAT_0085709c;
          uVar3 = (iVar8 >> 1) + piVar4[2];
          uVar1 = ((int)DAT_008570f4 >> 1) + piVar4[3];
          puVar14 = (undefined1 *)(*piVar4 + local_10);
          puVar11 = (undefined1 *)
                    (((int)uVar3 >> 0x10) + ((int)uVar1 >> 0x10) * DAT_0085709c + _DAT_00857100);
          if (iVar10 < 0) {
            DAT_008570f4 = -DAT_008570f4;
            uVar1 = ~uVar1;
          }
          DAT_00857084 = -DAT_00857074 - iVar10;
          _DAT_00857088 = -DAT_00857074;
          DAT_008570f4 = DAT_008570f4 << 0x10;
          uVar1 = uVar1 << 0x10;
          uVar5 = ~uVar3 << 0x10;
          uVar6 = DAT_008570f0;
          uVar3 = iVar8 * -0x10000;
          do {
            DAT_008570f0 = uVar6;
            uVar6 = DAT_008570f0;
            DAT_008570e0 = uVar3;
            if (DAT_008570f0 < 0x10) goto LAB_007278b0;
            puVar12 = puVar11 + (-(uint)CARRY4(uVar5,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)CARRY4(uVar1,DAT_008570f4) * -4));
            bVar16 = CARRY4(uVar1 + DAT_008570f4,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4 + DAT_008570f4;
            *puVar14 = *puVar11;
            uVar6 = uVar5 + uVar3 + uVar3;
            puVar11 = puVar12 + (-(uint)CARRY4(uVar5 + uVar3,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[1] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (-(uint)CARRY4(uVar6,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[2] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar11 = puVar12 + (-(uint)CARRY4(uVar5,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[3] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (-(uint)CARRY4(uVar6,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[4] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar11 = puVar12 + (-(uint)CARRY4(uVar5,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[5] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (-(uint)CARRY4(uVar6,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[6] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar11 = puVar12 + (-(uint)CARRY4(uVar5,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[7] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (-(uint)CARRY4(uVar6,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[8] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar11 = puVar12 + (-(uint)CARRY4(uVar5,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[9] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (-(uint)CARRY4(uVar6,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[10] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar11 = puVar12 + (-(uint)CARRY4(uVar5,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[0xb] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (-(uint)CARRY4(uVar6,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[0xc] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar13 = puVar12 + (-(uint)CARRY4(uVar5,uVar3) -
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[0xd] = *puVar12;
            uVar7 = uVar6 + uVar3;
            iVar8 = *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[0xe] = *puVar13;
            uVar5 = uVar7 + uVar3;
            puVar11 = puVar13 + (-(uint)CARRY4(uVar6,uVar3) - iVar8) +
                      (-(uint)CARRY4(uVar7,uVar3) - *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
            puVar14[0xf] = puVar13[-(uint)CARRY4(uVar6,uVar3) - iVar8];
            puVar14 = puVar14 + 0x10;
            uVar6 = DAT_008570f0 - 0x10;
            uVar3 = DAT_008570e0;
          } while (DAT_008570f0 - 0x10 != 0);
        }
        goto LAB_007278ce;
      }
      do {
        DAT_008570f0 = piVar4[4];
        if (0 < (int)DAT_008570f0) {
          iVar8 = piVar4[6];
          DAT_008570f4 = piVar4[7];
          uVar1 = DAT_008570f4;
          iVar9 = DAT_0085709c;
          if (((int)DAT_008570f4 < 0) && (iVar9 = -DAT_0085709c, (short)DAT_008570f4 != 0)) {
            uVar1 = DAT_008570f4 + 0x10000;
          }
          DAT_00857074 = (iVar8 >> 0x10) + ((int)uVar1 >> 0x10) * DAT_0085709c;
          iVar10 = (iVar8 >> 1) + piVar4[2];
          uVar1 = ((int)DAT_008570f4 >> 1) + piVar4[3];
          puVar14 = (undefined1 *)(*piVar4 + local_10);
          puVar11 = (undefined1 *)
                    ((iVar10 >> 0x10) + ((int)uVar1 >> 0x10) * DAT_0085709c + _DAT_00857100);
          if (iVar9 < 0) {
            DAT_008570f4 = -DAT_008570f4;
            uVar1 = ~uVar1;
          }
          DAT_00857084 = iVar9 + DAT_00857074;
          DAT_008570f4 = DAT_008570f4 << 0x10;
          uVar5 = iVar10 * 0x10000;
          uVar1 = uVar1 << 0x10;
          uVar6 = DAT_008570f0;
          _DAT_00857088 = DAT_00857074;
          uVar3 = iVar8 << 0x10;
          do {
            DAT_008570f0 = uVar6;
            DAT_008570e0 = uVar3;
            if (DAT_008570f0 < 0x10) {
              uVar6 = DAT_008570f0;
              if (DAT_008570f0 < 8) goto LAB_007275f0;
              puVar12 = puVar11 + (uint)CARRY4(uVar5,uVar3) +
                                  *(int *)(&DAT_00857088 + (uint)CARRY4(uVar1,DAT_008570f4) * -4);
              bVar16 = CARRY4(uVar1 + DAT_008570f4,DAT_008570f4);
              uVar1 = uVar1 + DAT_008570f4 + DAT_008570f4;
              *puVar14 = *puVar11;
              uVar6 = uVar5 + uVar3 + uVar3;
              puVar11 = puVar12 + (uint)CARRY4(uVar5 + uVar3,uVar3) +
                                  *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
              bVar16 = CARRY4(uVar1,DAT_008570f4);
              uVar1 = uVar1 + DAT_008570f4;
              puVar14[1] = *puVar12;
              uVar5 = uVar6 + uVar3;
              puVar12 = puVar11 + (uint)CARRY4(uVar6,uVar3) +
                                  *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
              bVar16 = CARRY4(uVar1,DAT_008570f4);
              uVar1 = uVar1 + DAT_008570f4;
              puVar14[2] = *puVar11;
              uVar6 = uVar5 + uVar3;
              puVar11 = puVar12 + (uint)CARRY4(uVar5,uVar3) +
                                  *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
              bVar16 = CARRY4(uVar1,DAT_008570f4);
              uVar1 = uVar1 + DAT_008570f4;
              puVar14[3] = *puVar12;
              uVar5 = uVar6 + uVar3;
              puVar12 = puVar11 + (uint)CARRY4(uVar6,uVar3) +
                                  *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
              bVar16 = CARRY4(uVar1,DAT_008570f4);
              uVar1 = uVar1 + DAT_008570f4;
              puVar14[4] = *puVar11;
              uVar6 = uVar5 + uVar3;
              puVar11 = puVar12 + (uint)CARRY4(uVar5,uVar3) +
                                  *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
              bVar16 = CARRY4(uVar1,DAT_008570f4);
              uVar1 = uVar1 + DAT_008570f4;
              puVar14[5] = *puVar12;
              uVar7 = uVar6 + uVar3;
              iVar8 = *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
              bVar16 = CARRY4(uVar1,DAT_008570f4);
              uVar1 = uVar1 + DAT_008570f4;
              puVar14[6] = *puVar11;
              uVar5 = uVar7 + uVar3;
              puVar14[7] = puVar11[(uint)CARRY4(uVar6,uVar3) + iVar8];
              puVar11 = puVar11 + (uint)CARRY4(uVar6,uVar3) + iVar8 +
                        (uint)CARRY4(uVar7,uVar3) + *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
              puVar14 = puVar14 + 8;
              uVar6 = DAT_008570f0 - 8;
              if (uVar6 != 0) {
LAB_007275f0:
                do {
                  bVar16 = CARRY4(uVar1,DAT_008570f4);
                  uVar1 = uVar1 + DAT_008570f4;
                  bVar17 = CARRY4(uVar5,DAT_008570e0);
                  uVar5 = uVar5 + DAT_008570e0;
                  *puVar14 = *puVar11;
                  puVar11 = puVar11 + (uint)bVar17 + *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
                  uVar3 = uVar6 - 1;
                  bVar16 = 0 < (int)uVar6;
                  uVar6 = uVar3;
                  puVar14 = puVar14 + 1;
                } while (uVar3 != 0 && bVar16);
              }
              break;
            }
            puVar12 = puVar11 + (uint)CARRY4(uVar5,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)CARRY4(uVar1,DAT_008570f4) * -4);
            bVar16 = CARRY4(uVar1 + DAT_008570f4,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4 + DAT_008570f4;
            *puVar14 = *puVar11;
            uVar6 = uVar5 + uVar3 + uVar3;
            puVar11 = puVar12 + (uint)CARRY4(uVar5 + uVar3,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[1] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (uint)CARRY4(uVar6,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[2] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar11 = puVar12 + (uint)CARRY4(uVar5,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[3] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (uint)CARRY4(uVar6,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[4] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar11 = puVar12 + (uint)CARRY4(uVar5,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[5] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (uint)CARRY4(uVar6,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[6] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar11 = puVar12 + (uint)CARRY4(uVar5,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[7] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (uint)CARRY4(uVar6,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[8] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar11 = puVar12 + (uint)CARRY4(uVar5,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[9] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (uint)CARRY4(uVar6,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[10] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar11 = puVar12 + (uint)CARRY4(uVar5,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[0xb] = *puVar12;
            uVar5 = uVar6 + uVar3;
            puVar12 = puVar11 + (uint)CARRY4(uVar6,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[0xc] = *puVar11;
            uVar6 = uVar5 + uVar3;
            puVar11 = puVar12 + (uint)CARRY4(uVar5,uVar3) +
                                *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[0xd] = *puVar12;
            uVar7 = uVar6 + uVar3;
            iVar8 = *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            bVar16 = CARRY4(uVar1,DAT_008570f4);
            uVar1 = uVar1 + DAT_008570f4;
            puVar14[0xe] = *puVar11;
            uVar5 = uVar7 + uVar3;
            puVar14[0xf] = puVar11[(uint)CARRY4(uVar6,uVar3) + iVar8];
            puVar11 = puVar11 + (uint)CARRY4(uVar6,uVar3) + iVar8 +
                      (uint)CARRY4(uVar7,uVar3) + *(int *)(&DAT_00857088 + (uint)bVar16 * -4);
            puVar14 = puVar14 + 0x10;
            uVar6 = DAT_008570f0 - 0x10;
            uVar3 = DAT_008570e0;
          } while (DAT_008570f0 - 0x10 != 0);
        }
        local_10 = local_10 + DAT_00857090;
        iVar8 = local_8 + -1;
        bVar16 = 0 < local_8;
        piVar4 = piVar4 + 8;
        local_8 = iVar8;
      } while (iVar8 != 0 && bVar16);
LAB_007278f0:
      piVar4_mg2 = param_1;
      int scalar_param_1 = DAT_0085707c + (DAT_00857064 + iVar2) * DAT_00857090 * 2; /* split integer lifetime from pointer-typed SSA storage */
      local_8 = (DAT_008570ec - DAT_00857064) - iVar2;
      do {
        uVar1 = piVar4_mg2[4];
        puVar15 = (uint *)(*piVar4_mg2 * 2 + scalar_param_1);
        if (0 < (int)uVar1) {
          uVar3 = piVar4_mg2[1];
          iVar2 = piVar4_mg2[5];
          uVar5 = uVar1;
          if (((uint)puVar15 & 2) != 0) {
            *(short *)puVar15 = (short)(uVar3 >> 0x10);
            puVar15 = (uint *)((int)puVar15 + 2);
            uVar3 = uVar3 + iVar2;
            uVar5 = uVar1 - 1;
            if (uVar5 == 0 || (int)uVar1 < 1) goto LAB_0072797d;
          }
          while (1 < (int)uVar5) {
            uVar6 = uVar3 + iVar2;
            uVar1 = uVar3 >> 0x10;
            uVar3 = uVar6 + iVar2;
            *puVar15 = uVar1 | uVar6 & 0xffff0000;
            puVar15 = puVar15 + 1;
            uVar5 = uVar5 - 2;
          }
          if ((uVar5 - 2 & 1) != 0) {
            *(short *)puVar15 = (short)(uVar3 >> 0x10);
          }
        }
LAB_0072797d:
        param_1 = (int *)((int)param_1 + DAT_00857090 * 2);
        piVar4_mg2 = piVar4_mg2 + 8;
        iVar2 = local_8 + -1;
        bVar16 = 0 < local_8;
        local_8 = iVar2;
      } while (iVar2 != 0 && bVar16);
    }
  }
  return;
LAB_007278b0:
  do {
    bVar16 = CARRY4(uVar1,DAT_008570f4);
    uVar1 = uVar1 + DAT_008570f4;
    bVar17 = CARRY4(uVar5,DAT_008570e0);
    uVar5 = uVar5 + DAT_008570e0;
    *puVar14 = *puVar11;
    puVar14 = puVar14 + 1;
    puVar11 = puVar11 + (-(uint)bVar17 - *(int *)(&DAT_00857088 + (uint)bVar16 * -4));
    uVar3 = uVar6 - 1;
    bVar16 = 0 < (int)uVar6;
    uVar6 = uVar3;
  } while (uVar3 != 0 && bVar16);
LAB_007278ce:
  local_10 = local_10 + DAT_00857090;
  iVar8 = local_8 + -1;
  bVar16 = local_8 < 1;
  piVar4 = piVar4 + 8;
  local_8 = iVar8;
  if (iVar8 == 0 || bVar16) goto LAB_007278f0;
  goto LAB_00727639;
}

// 007279B0 FUN_007279b0
#line 4 "decomp/ST.exe/functions/007279B0/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall st::fn_007279B0(void *this,int param_1,int param_2,int param_3)

{
  alignas(4) byte st_stack_frame[80];

  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 auStack_48 [2];
  uint uStack_40;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_0079e2e8);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_1 + 0x28) + param_2 * 0x1c;
  piVar3 = (int *)((uint)*(byte *)(iVar2 + 1) * 0x10 + param_3);
  DAT_008570a8 = *piVar3;
  DAT_008570ac = piVar3[1];
  DAT_008570b0 = piVar3[2];
  _DAT_008570b4 = piVar3[3];
  piVar3 = (int *)((uint)*(byte *)(iVar2 + 2) * 0x10 + param_3);
  DAT_008570b8 = *piVar3;
  DAT_008570bc = piVar3[1];
  DAT_008570c0 = piVar3[2];
  _DAT_008570c4 = piVar3[3];
  piVar3 = (int *)((uint)*(byte *)(iVar2 + 3) * 0x10 + param_3);
  DAT_008570c8 = *piVar3;
  DAT_008570cc = piVar3[1];
  DAT_008570d0 = piVar3[2];
  _DAT_008570d4 = piVar3[3];
  iVar4 = *(int *)(iVar2 + 4);
  if (0xfff5 < iVar4) {
    iVar4 = 0xfff6;
  }
  DAT_00857040 = iVar4 * DAT_0085709c;
  iVar4 = *(int *)(iVar2 + 8);
  if (0xfff5 < iVar4) {
    iVar4 = 0xfff6;
  }
  DAT_00857044 = iVar4 * DAT_0085709c;
  iVar4 = *(int *)(iVar2 + 0xc);
  if (0xfff5 < iVar4) {
    iVar4 = 0xfff6;
  }
  DAT_00857048 = iVar4 * DAT_0085709c;
  iVar4 = *(int *)(iVar2 + 0x10);
  if (0xfff5 < iVar4) {
    iVar4 = 0xfff6;
  }
  DAT_0085704c = iVar4 * DAT_0085709c;
  iVar4 = *(int *)(iVar2 + 0x14);
  if (0xfff5 < iVar4) {
    iVar4 = 0xfff6;
  }
  DAT_00857050 = iVar4 * DAT_0085709c;
  iVar2 = *(int *)(iVar2 + 0x18);
  if (0xfff5 < iVar2) {
    iVar2 = 0xfff6;
  }
  DAT_00857054 = iVar2 * DAT_0085709c;
  iVar2 = DAT_008570ac;
  if (DAT_008570bc < DAT_008570ac) {
    iVar2 = DAT_008570bc;
  }
  iVar4 = DAT_008570ac;
  if (DAT_008570ac < DAT_008570bc) {
    iVar4 = DAT_008570bc;
  }
  if (DAT_008570cc < iVar2) {
    iVar2 = DAT_008570cc;
  }
  if (iVar4 < DAT_008570cc) {
    iVar4 = DAT_008570cc;
  }
  iVar6 = DAT_008570a8;
  if (DAT_008570b8 < DAT_008570a8) {
    iVar6 = DAT_008570b8;
  }
  iVar5 = DAT_008570a8;
  if (DAT_008570a8 < DAT_008570b8) {
    iVar5 = DAT_008570b8;
  }
  DAT_00857070 = (uint)(DAT_008570a8 < DAT_008570b8);
  if (DAT_008570c8 < iVar6) {
    iVar6 = DAT_008570c8;
  }
  if (iVar5 < DAT_008570c8) {
    DAT_00857070 = 2;
    iVar5 = DAT_008570c8;
  }
  iVar6 = iVar6 >> 0x10;
  iVar1 = STField<int>(this,0x30);
  DAT_00857060 = iVar6;
  if (iVar6 < iVar1) {
    DAT_00857060 = iVar1;
  }
  local_20 = (uint)(iVar6 < iVar1);
  DAT_008570e8 = iVar5 >> 0x10;
  if (STField<int>(this,0x38) < iVar5 >> 0x10) {
    local_20 = 1;
    DAT_008570e8 = STField<int>(this,0x38);
  }
  DAT_00857064 = iVar2 >> 0x10;
  if (iVar2 >> 0x10 < STField<int>(this,0x34)) {
    DAT_00857064 = STField<int>(this,0x34);
  }
  DAT_008570ec = iVar4 >> 0x10;
  if (STField<int>(this,0x3c) < iVar4 >> 0x10) {
    DAT_008570ec = STField<int>(this,0x3c);
  }
  if ((DAT_00857064 < DAT_008570ec) && (DAT_00857060 < DAT_008570e8)) {
    iVar2 = (DAT_008570ec - DAT_00857064) + 1;
    uStack_40 = 0x727c13;
    local_8 = 0xffffffff;
    *(uint *)((int)&uStack_40 + iVar2 * -0x20) = local_20;
    auStack_48[iVar2 * 0xfffffff8U + 1] = (st_stack_frame + 16) + iVar2 * -0x20;
    auStack_48[iVar2 * -8] = 0x727c2e;
    ExceptionList = &local_14;
    st::fn_00726D80((int *)auStack_48[iVar2 * 0xfffffff8U + 1],
                 *(int *)((int)&uStack_40 + iVar2 * -0x20));
    *(undefined1 **)((int)&uStack_40 + iVar2 * -0x20) = (st_stack_frame + 16) + iVar2 * -0x20;
    auStack_48[iVar2 * 0xfffffff8U + 1] = 0x727c37;
    st::fn_00727230(*(int **)((int)&uStack_40 + iVar2 * -0x20));
  }
  ExceptionList = local_14;
  return;
}

// 00727C80 FUN_00727c80
#line 4 "decomp/ST.exe/functions/00727C80/decomp.c"
undefined4 st::fn_00727C80(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;

  if (param_2 != DAT_00857070) {
    do {
      iVar1 = *param_1 + param_2;
      if (iVar1 < 3) {
        if (iVar1 < 0) {
          iVar1 = 2;
        }
      }
      else {
        iVar1 = 0;
      }
      iVar2 = ((int)(&DAT_008570ac)[iVar1 * 4] >> 0x10) -
              ((int)(&DAT_008570ac)[param_2 * 4] >> 0x10);
      param_1[1] = iVar2;
      if (0 < iVar2) {
        param_1[2] = iVar1;
        param_1[9] = (&DAT_008570a8)[param_2 * 4];
        iVar2 = st::fn_006DB610((&DAT_008570a8)[iVar1 * 4] - (&DAT_008570a8)[param_2 * 4],
                             st::machine_word_boundary_cast<int>(param_1[1] << 0x10));
        param_1[10] = iVar2;
        iVar2 = (&DAT_008570b0)[param_2 * 4];
        param_1[7] = iVar2;
        iVar1 = st::fn_006DB610((&DAT_008570b0)[iVar1 * 4] - iVar2,st::machine_word_boundary_cast<int>(param_1[1] << 0x10));
        param_1[8] = iVar1;
        return 1;
      }
      param_2 = iVar1;
    } while (iVar1 != DAT_00857070);
  }
  return 0;
}

// 00727D50 FUN_00727d50
#line 1 "decomp/ST.exe/functions/00727D50/decomp.c"

/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=00727DA0 @ 00728139
   -> TEST TEST EAX,EAX | 00727DA0 @ 00728148 -> TEST TEST EAX,EAX */

int st::fn_00727D50(int *param_1)

{
  int iVar1;

  iVar1 = param_1[1];
  param_1[1] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    iVar1 = st::fn_00727C80(param_1,param_1[2]);
    return (uint)(iVar1 != 0);
  }
  param_1[9] = st::machine_word_boundary_cast<int>(param_1[9] + param_1[10]);
  param_1[7] = st::machine_word_boundary_cast<int>(param_1[7] + param_1[8]);
  return 1;
}

// 00728170 FUN_00728170
#line 4 "decomp/ST.exe/functions/00728170/decomp.c"
void __cdecl st::fn_00728170(AnonShape_00728170_E57D1DF1 *param_1,AnonShape_00728170_7560EBA7 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_ECX;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  uint local_c;

  if ((((int)DAT_008570dc < (int)param_2->field_0024) &&
      ((int)param_1->field_0024 < (int)DAT_0085705c)) &&
     ((int)param_1->field_0024 >> 0x10 < (int)param_2->field_0024 >> 0x10)) {
    local_c = param_1->field_001C;
    iVar4 = st::machine_word_boundary_cast<int>(param_2->field_001C - local_c);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar4 = (int)(CONCAT44(iVar4 >> 0x10,iVar4 * 0x10000) /
                 (longlong)
                 (int)((param_2->field_0024 & 0xffff0000) - (param_1->field_0024 & 0xffff0000)));
    uVar3 = st::machine_word_boundary_cast<uint>(param_2->field_0024 & 0xffff0000);
    if ((int)DAT_0085705c <= (int)uVar3) {
      uVar3 = DAT_0085705c;
    }
    uVar7 = st::machine_word_boundary_cast<uint>(param_1->field_0024 & 0xffff0000);
    if ((int)uVar7 < (int)DAT_008570dc) {
      uVar2 = st::fn_006DB5F0(iVar4,DAT_008570dc - uVar7);
      local_c = local_c + uVar2;
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      uVar3 = extraout_ECX;
      uVar7 = DAT_008570dc;
    }
    uVar1 = DAT_008570f8;
    if (uVar3 - uVar7 != 0 && (int)uVar7 <= (int)uVar3) {
      iVar8 = (uVar7 >> 0x10) + DAT_00857090 * DAT_00857098;
      puVar6 = (uint *)(iVar8 * 2 + DAT_0085707c);
      uVar7 = uVar3 - uVar7 >> 0x10;
      puVar9 = (undefined1 *)(iVar8 + DAT_0085708c);
      for (uVar3 = uVar7; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar9 = uVar1;
        puVar9 = puVar9 + 1;
      }
      uVar3 = uVar7;
      if (((uint)puVar6 & 2) != 0) {
        *(short *)puVar6 = (short)(local_c >> 0x10);
        puVar6 = (uint *)((int)puVar6 + 2);
        local_c = local_c + iVar4;
        uVar3 = uVar7 - 1;
        if (uVar3 == 0 || uVar7 == 0) {
          return;
        }
      }
      while (1 < (int)uVar3) {
        uVar5 = local_c + iVar4;
        uVar7 = local_c >> 0x10;
        local_c = uVar5 + iVar4;
        *puVar6 = uVar7 | uVar5 & 0xffff0000;
        puVar6 = puVar6 + 1;
        uVar3 = uVar3 - 2;
      }
      if ((uVar3 - 2 & 1) != 0) {
        *(short *)puVar6 = (short)(local_c >> 0x10);
      }
    }
  }
  return;
}

// 007285D0 FUN_007285d0
#line 4 "decomp/ST.exe/functions/007285D0/decomp.c"
void __cdecl st::fn_007285D0(int param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;

  uVar1 = DAT_008570f8;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar2 = *(uint *)(param_2 + 0x24) & 0xffff0000;
  if ((int)DAT_0085705c <= (int)uVar2) {
    uVar2 = DAT_0085705c;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar3 = *(uint *)(param_1 + 0x24) & 0xffff0000;
  if ((int)uVar3 < (int)DAT_008570dc) {
    uVar3 = DAT_008570dc;
  }
  if (uVar2 - uVar3 != 0 && (int)uVar3 <= (int)uVar2) {
    puVar4 = (undefined1 *)((uVar3 >> 0x10) + DAT_00857090 * DAT_00857098 + DAT_0085708c);
    for (uVar2 = uVar2 - uVar3 >> 0x10; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}

// 00728640 FUN_00728640
#line 4 "decomp/ST.exe/functions/00728640/decomp.c"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall st::fn_00728640(void *this,int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  byte *pbVar9;
  uint *puVar10;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_c;
  int local_8;

  local_c = STField<int>(this,0x28);
  auto param_1_after_write = param_1 + g_runtimeRecords_00857110[g_runtimeRecordCount_00857114].field_0002 * param_2; /* compiler stack-slot lifetime split */
  local_8 = g_runtimeRecords_00857110[g_runtimeRecordCount_00857114].field_0002 * local_c +
            STField<int>(this,0xc);
  local_28 = 1;
  iVar5 = st::fn_007287E0(&local_28,g_runtimeRecordCount_00857114);
  if (iVar5 != 0) {
    local_44 = -1;
    iVar5 = st::fn_007287E0(&local_44,g_runtimeRecordCount_00857114);
    if (iVar5 != 0) {
      do {
        iVar6 = local_1c >> 0x10;
        iVar5 = (local_38 >> 0x10) - iVar6;
        if (iVar5 != 0 && iVar6 <= local_38 >> 0x10) {
          puVar10 = (uint *)(param_1_after_write + iVar6);
          pbVar9 = (byte *)(local_8 + iVar6);
          uVar7 = 0;
          if (2 < iVar5) {
            uVar7 = (uint)*pbVar9;
            if (((uint)puVar10 & 1) != 0) {
              pbVar9 = pbVar9 + 1;
              *(undefined1 *)puVar10 = *(undefined1 *)(param_3 + uVar7);
              puVar10 = (uint *)((int)puVar10 + 1);
              iVar5 = iVar5 + -1;
              uVar7 = (uint)*pbVar9;
            }
            if (((uint)puVar10 & 2) != 0) {
              pbVar1 = pbVar9 + 1;
              pbVar9 = pbVar9 + 2;
              iVar5 = iVar5 + -2;
              *(ushort *)puVar10 =
                   /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                   CONCAT11(*(undefined1 *)(param_3 + (uint)*pbVar1),
                            *(undefined1 *)(param_3 + uVar7));
              uVar7 = (uint)*pbVar9;
              puVar10 = (uint *)((int)puVar10 + 2);
            }
            while (3 < iVar5) {
              pbVar1 = pbVar9 + 2;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              uVar8 = CONCAT11(*(undefined1 *)(param_3 + (uint)pbVar9[1]),
                               *(undefined1 *)(param_3 + uVar7));
              pbVar2 = pbVar9 + 3;
              pbVar9 = pbVar9 + 4;
              *puVar10 = (uint)uVar8 |
                         /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                         CONCAT22(uVar8,CONCAT11(*(undefined1 *)(param_3 + (uint)*pbVar2),
                                                 *(undefined1 *)(param_3 + (uint)*pbVar1))) << 0x10;
              uVar7 = (uint)*pbVar9;
              puVar10 = puVar10 + 1;
              iVar5 = iVar5 + -4;
            }
            if (iVar5 == 0) goto LAB_0072876c;
          }
          bVar3 = pbVar9[1];
          *(undefined1 *)puVar10 = *(undefined1 *)(param_3 + uVar7);
          if (iVar5 != 1) {
            bVar4 = pbVar9[2];
            STField<undefined1>(puVar10,1) = *(undefined1 *)(param_3 + (uint)bVar3);
            if (iVar5 != 2) {
              STField<undefined1>(puVar10,2) = *(undefined1 *)(param_3 + (uint)bVar4);
            }
          }
        }
LAB_0072876c:
        local_24 = local_24 + -1;
        if (local_24 == 0) {
          iVar5 = st::fn_007287E0(&local_28,local_20);
          if (iVar5 == 0) {
            return;
          }
        }
        else {
          local_1c = local_1c + local_18;
        }
        local_40 = local_40 + -1;
        if (local_40 == 0) {
          iVar5 = st::fn_007287E0(&local_44,local_3c);
          if (iVar5 == 0) {
            return;
          }
        }
        else {
          local_38 = local_38 + local_34;
        }
        param_1_after_write = param_1_after_write + param_2;
        local_8 = local_8 + local_c;
      } while( true );
    }
  }
  return;
}

// 007287E0 FUN_007287e0
#line 4 "decomp/ST.exe/functions/007287E0/decomp.c"
undefined4 st::fn_007287E0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;

  if (param_2 != DAT_00857104) {
    do {
      iVar2 = *param_1 + param_2;
      if (iVar2 < DAT_0085710c) {
        if (iVar2 < 0) {
          iVar2 = DAT_0085710c + -1;
        }
      }
      else {
        iVar2 = 0;
      }
      iVar1 = (int)g_runtimeRecords_00857110[iVar2].field_0002 -
              (int)g_runtimeRecords_00857110[param_2].field_0002;
      param_1[1] = iVar1;
      if (0 < iVar1) {
        param_1[2] = iVar2;
        param_1[3] = (int)g_runtimeRecords_00857110[param_2].field_0000 << 0x10;
        param_1[4] = (((int)g_runtimeRecords_00857110[iVar2].field_0000 -
                      (int)g_runtimeRecords_00857110[param_2].field_0000) * 0x10000) / param_1[1];
        param_1[5] = (int)(short)g_runtimeRecords_00857110[param_2].field_0004 << 0x10;
        param_1[6] = (((int)(short)g_runtimeRecords_00857110[iVar2].field_0004 -
                      (int)(short)g_runtimeRecords_00857110[param_2].field_0004) * 0x10000) /
                     param_1[1];
        return 1;
      }
      param_2 = iVar2;
    } while (iVar2 != DAT_00857104);
  }
  return 0;
}

// 007288A0 FUN_007288a0
#line 4 "decomp/ST.exe/functions/007288A0/decomp.c"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall st::fn_007288A0(void *this,int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  uint *puVar13;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_14;
  int local_10;
  AnonShape_007288A0_88D3FF06 *local_c;
  int local_8;

  iVar10 = (int)g_runtimeRecords_00857110[g_runtimeRecordCount_00857114].field_0002;
  auto param_1_after_write = param_1 + iVar10 * param_2; /* compiler stack-slot lifetime split */
  local_14 = STField<int>(this,0x28);
  iVar12 = iVar10 * local_14 + STField<int>(this,0xc);
  local_30 = 1;
  local_10 = iVar10;
  local_c = st::pointer_boundary_cast<AnonShape_007288A0_88D3FF06 *>(this);
  local_8 = iVar12;
  iVar5 = st::fn_007287E0(&local_30,g_runtimeRecordCount_00857114);
  if (iVar5 != 0) {
    local_4c = -1;
    iVar5 = st::fn_007287E0(&local_4c,g_runtimeRecordCount_00857114);
    if ((iVar5 != 0) && (iVar10 < STField<int>(this,0x3c))) {
      do {
        if (*(int *)&((AnonShape_007288A0_88D3FF06 *)this)->field_0x34 <= iVar10) {
          iVar5 = local_40 >> 0x10;
          if (local_c->field_0038 <= iVar5) {
            iVar5 = local_c->field_0038;
          }
          iVar6 = local_24 >> 0x10;
          if (iVar6 < local_c->field_0030) {
            iVar6 = local_c->field_0030;
          }
          iVar7 = iVar5 - iVar6;
          this = local_c;
          iVar10 = local_10;
          iVar12 = local_8;
          if (iVar7 != 0 && iVar6 <= iVar5) {
            puVar13 = (uint *)(param_1_after_write + iVar6);
            pbVar11 = (byte *)(local_8 + iVar6);
            uVar8 = 0;
            if (2 < iVar7) {
              uVar8 = (uint)*pbVar11;
              if (((uint)puVar13 & 1) != 0) {
                pbVar11 = pbVar11 + 1;
                *(undefined1 *)puVar13 = *(undefined1 *)(param_3 + uVar8);
                puVar13 = (uint *)((int)puVar13 + 1);
                iVar7 = iVar7 + -1;
                uVar8 = (uint)*pbVar11;
              }
              if (((uint)puVar13 & 2) != 0) {
                pbVar1 = pbVar11 + 1;
                pbVar11 = pbVar11 + 2;
                iVar7 = iVar7 + -2;
                *(ushort *)puVar13 =
                     /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                     CONCAT11(*(undefined1 *)(param_3 + (uint)*pbVar1),
                              *(undefined1 *)(param_3 + uVar8));
                uVar8 = (uint)*pbVar11;
                puVar13 = (uint *)((int)puVar13 + 2);
              }
              while (3 < iVar7) {
                pbVar1 = pbVar11 + 2;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                uVar9 = CONCAT11(*(undefined1 *)(param_3 + (uint)pbVar11[1]),
                                 *(undefined1 *)(param_3 + uVar8));
                pbVar2 = pbVar11 + 3;
                pbVar11 = pbVar11 + 4;
                *puVar13 = (uint)uVar9 |
                           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                           CONCAT22(uVar9,CONCAT11(*(undefined1 *)(param_3 + (uint)*pbVar2),
                                                   *(undefined1 *)(param_3 + (uint)*pbVar1))) <<
                           0x10;
                uVar8 = (uint)*pbVar11;
                puVar13 = puVar13 + 1;
                iVar7 = iVar7 + -4;
              }
              if (iVar7 == 0) goto LAB_00728a04;
            }
            bVar3 = pbVar11[1];
            *(undefined1 *)puVar13 = *(undefined1 *)(param_3 + uVar8);
            if (iVar7 != 1) {
              bVar4 = pbVar11[2];
              STField<undefined1>(puVar13,1) = *(undefined1 *)(param_3 + (uint)bVar3);
              if (iVar7 != 2) {
                STField<undefined1>(puVar13,2) = *(undefined1 *)(param_3 + (uint)bVar4);
              }
            }
          }
        }
LAB_00728a04:
        local_2c = local_2c + -1;
        if (local_2c == 0) {
          iVar5 = st::fn_007287E0(&local_30,local_28);
          if (iVar5 == 0) {
            return;
          }
        }
        else {
          local_24 = local_24 + local_20;
        }
        local_48 = local_48 + -1;
        if (local_48 == 0) {
          iVar5 = st::fn_007287E0(&local_4c,local_44);
          if (iVar5 == 0) {
            return;
          }
        }
        else {
          local_40 = local_40 + local_3c;
        }
        param_1_after_write = param_1_after_write + param_2;
        iVar10 = iVar10 + 1;
        iVar12 = iVar12 + local_14;
        local_10 = iVar10;
        local_8 = iVar12;
      } while (iVar10 < STField<int>(this,0x3c));
    }
  }
  return;
}

// 00728DA0 FUN_00728da0
#line 4 "decomp/ST.exe/functions/00728DA0/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __thiscall
st::fn_00728DA0(void *this,int param_1,int param_2,short *param_3,uint param_4,int param_5,int param_6)

{
  alignas(4) byte st_stack_frame[224];

  byte bVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  short *psVar7;
  undefined4 *puVar8;
  RuntimeRecord_00857110_0008 *pRVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  short asStack_c8 [2];
  undefined4 uStack_c4;
  short local_b0 [8];
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_88;
  int local_7c;
  int local_78;
  int local_6c;
  RuntimeRecord_00857110_0008 *local_60;
  int local_54;
  int local_50;
  uint local_48;
  int local_44;
  uint local_40;
  uint local_34;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_0079e2f8);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_78 = 0;
  local_98 = 0;
  DAT_0085710c = param_4;
  if (2 < (int)param_4) {
    uStack_c4 = 0x728e05;
    iVar4 = param_4 * -8;
    (&uStack_c4)[param_4 * -2] = 0x728e1b;
    (&uStack_c4)[param_4 * -4] = 0x728e32;
    iVar5 = -(param_4 + 3 & 0xfffffffc);
    puVar13 = (st_stack_frame + 28) + iVar5 + param_4 * -0x10;
    local_8 = 0xffffffff;
    DAT_0085710c = 1;
    *(undefined4 *)((st_stack_frame + 28) + iVar4) = *(undefined4 *)param_3;
    *(undefined4 *)((st_stack_frame + 32) + iVar4) = *(undefined4 *)(param_3 + 2);
    pRVar9 = (RuntimeRecord_00857110_0008 *)((st_stack_frame + 36) + iVar4);
    ExceptionList = &local_14;
    if (1 < (int)param_4) {
      iVar14 = param_4 - 1;
      g_runtimeRecords_00857110 = pRVar9;
      ExceptionList = &local_14;
      do {
        psVar7 = param_3 + 4;
        if ((*psVar7 != pRVar9[-1].field_0000) || (param_3[5] != pRVar9[-1].field_0002)) {
          sVar2 = psVar7[1];
          pRVar9->field_0000 = psVar7[0];
          pRVar9->field_0002 = sVar2;
          g_runtimeRecords_00857110->field_0004 = *(int *)(param_3 + 6);
          pRVar9 = g_runtimeRecords_00857110 + 1;
          DAT_0085710c = DAT_0085710c + 1;
          g_runtimeRecords_00857110 = pRVar9;
        }
        iVar14 = iVar14 + -1;
        param_3 = psVar7;
      } while (iVar14 != 0);
    }
    if ((*(short *)((st_stack_frame + 28) + iVar4) == asStack_c8[param_4 * -4 + DAT_0085710c * 4]) &&
       (*(short *)((st_stack_frame + 30) + iVar4) == asStack_c8[param_4 * -4 + DAT_0085710c * 4 + 1])) {
      DAT_0085710c = DAT_0085710c - 1;
    }
    local_6c = -1;
    local_94 = 0;
LAB_00728ee6:
    while (uVar11 = DAT_0085710c,
          g_runtimeRecords_00857110 = (RuntimeRecord_00857110_0008 *)((st_stack_frame + 28) + iVar4),
          3 < (int)DAT_0085710c) {
      iVar14 = (int)g_runtimeRecords_00857110->field_0000;
      local_a0 = (int)*(short *)((st_stack_frame + 30) + iVar4);
      g_runtimeRecordCount_00857114 = 0;
      DAT_00857104 = 0;
      puVar8 = (undefined4 *)((st_stack_frame + 28) + iVar5 + param_4 * -0x10);
      for (uVar10 = DAT_0085710c >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined1 *)puVar8 = 0;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      local_40 = 0;
      local_9c = iVar14;
      local_44 = iVar14;
      do {
        iVar12 = (int)g_runtimeRecords_00857110[local_40].field_0000;
        if (iVar12 < local_9c) {
          local_9c = iVar12;
        }
        if (iVar14 < iVar12) {
          iVar14 = iVar12;
          local_44 = iVar12;
        }
        if (g_runtimeRecords_00857110[local_40].field_0002 !=
            g_runtimeRecords_00857110[DAT_0085710c - 1].field_0002) goto LAB_00728f70;
        local_40 = local_40 + 1;
      } while ((int)local_40 < (int)DAT_0085710c);
      local_40 = 0;
LAB_00728f70:
      local_60 = g_runtimeRecords_00857110 + local_40;
      local_90 = (int)local_60->field_0002;
      uVar11 = local_40;
      iVar14 = local_90;
      do {
        uVar11 = uVar11 - 1;
        if ((int)uVar11 < 0) {
          uVar11 = DAT_0085710c - 1;
        }
      } while ((uVar11 != local_40) &&
              (iVar14 = (int)g_runtimeRecords_00857110[uVar11].field_0002, iVar14 == local_90));
      local_54 = 0;
      local_88 = 0;
      local_48 = 0x7fffffff;
      bVar6 = false;
      uVar11 = local_40;
      iVar12 = (int)local_60->field_0000;
      iVar15 = local_90;
      local_50 = local_a0;
LAB_00728fcd:
      do {
        local_40 = local_40 + 1;
        if ((int)DAT_0085710c <= (int)local_40) {
          if (!bVar6) {
            bVar6 = true;
            local_40 = 0;
            local_60 = g_runtimeRecords_00857110;
            goto LAB_00729005;
          }
          break;
        }
        local_60 = local_60 + 1;
LAB_00729005:
        local_78 = (int)local_60->field_0000;
        local_98 = (int)local_60->field_0002;
        if (local_78 < local_9c) {
          local_9c = local_78;
        }
        if (local_44 < local_78) {
          local_44 = local_78;
        }
      } while (local_98 == iVar15);
      if (((iVar14 < iVar15) && (local_98 < iVar15)) &&
         (bVar1 = ((st_stack_frame + 28))[uVar11 + iVar5 + param_4 * -0x10], (bVar1 & 1) == 0)) {
        ((st_stack_frame + 28))[uVar11 + iVar5 + param_4 * -0x10] = bVar1 | 1;
        iVar14 = uVar11 - 1;
        if (iVar14 < 0) {
          iVar14 = DAT_0085710c - 1;
        }
        if (((iVar15 - g_runtimeRecords_00857110[iVar14].field_0002) *
             (local_78 - g_runtimeRecords_00857110[iVar14].field_0000) -
             (iVar12 - g_runtimeRecords_00857110[iVar14].field_0000) *
             (local_98 - g_runtimeRecords_00857110[iVar14].field_0002) < 0) &&
           (((st_stack_frame + 28))[uVar11 + iVar5 + param_4 * -0x10] = bVar1 | 5,
           (int)uVar11 < (int)local_48)) {
          local_48 = uVar11;
        }
        local_54 = local_54 + 1;
        iVar14 = iVar15;
        if (local_50 < iVar15) {
          DAT_00857104 = uVar11;
          local_50 = iVar15;
        }
      }
      else {
        bVar3 = iVar15 < iVar14;
        iVar14 = iVar15;
        if (((bVar3) && (iVar15 < local_98)) &&
           (bVar1 = ((st_stack_frame + 28))[uVar11 + iVar5 + param_4 * -0x10], (bVar1 & 2) == 0)) {
          ((st_stack_frame + 28))[uVar11 + iVar5 + param_4 * -0x10] = bVar1 | 2;
          iVar14 = uVar11 - 1;
          if (iVar14 < 0) {
            iVar14 = DAT_0085710c - 1;
          }
          if (((local_90 - g_runtimeRecords_00857110[iVar14].field_0002) *
               (local_78 - g_runtimeRecords_00857110[iVar14].field_0000) -
               (iVar12 - g_runtimeRecords_00857110[iVar14].field_0000) *
               (local_98 - g_runtimeRecords_00857110[iVar14].field_0002) < 0) &&
             (((st_stack_frame + 28))[uVar11 + iVar5 + param_4 * -0x10] = bVar1 | 6,
             (int)uVar11 < (int)local_48)) {
            local_48 = uVar11;
          }
          local_88 = local_88 + 1;
          iVar14 = local_90;
          if (local_90 < local_a0) {
            local_a0 = local_90;
            g_runtimeRecordCount_00857114 = uVar11;
          }
        }
      }
      if (!bVar6) {
        local_90 = local_98;
        uVar11 = local_40;
        iVar12 = local_78;
        iVar15 = local_98;
        goto LAB_00728fcd;
      }
      local_34 = DAT_0085710c;
      if (((1 < local_54) || (1 < local_88)) && ((int)local_48 < (int)DAT_0085710c)) {
        local_34 = local_48;
      }
      if ((int)DAT_0085710c <= (int)local_34) goto LAB_007294f8;
      sVar2 = g_runtimeRecords_00857110[local_34].field_0002;
      if ((((st_stack_frame + 28))[local_34 + iVar5 + param_4 * -0x10] & 1) == 0) {
        bVar6 = false;
        uVar11 = local_34;
        do {
          while( true ) {
            uVar11 = uVar11 + 1;
            if ((int)DAT_0085710c <= (int)uVar11) {
              uVar11 = 0;
            }
            uVar10 = DAT_0085710c;
            if (uVar11 == local_34) goto LAB_0072926d;
            uVar10 = uVar11;
            if (sVar2 != g_runtimeRecords_00857110[uVar11].field_0002) break;
            if (bVar6) goto LAB_0072926d;
            bVar6 = false;
          }
          bVar6 = true;
        } while (sVar2 < g_runtimeRecords_00857110[uVar11].field_0002);
LAB_0072926d:
        if ((int)DAT_0085710c <= (int)uVar10) goto LAB_007294f8;
        bVar6 = false;
        uVar11 = local_34;
        do {
          while( true ) {
            uVar11 = uVar11 - 1;
            if ((int)uVar11 < 0) {
              uVar11 = DAT_0085710c - 1;
            }
            if (uVar11 == local_34) goto LAB_007292a6;
            if (sVar2 == g_runtimeRecords_00857110[uVar10].field_0002) break;
            bVar6 = true;
            if (g_runtimeRecords_00857110[uVar10].field_0002 <= sVar2) goto LAB_007292a6;
          }
        } while (!bVar6);
      }
      else {
        bVar6 = false;
        local_7c = 0;
        uVar11 = local_34;
        do {
          while( true ) {
            uVar11 = uVar11 + 1;
            if ((int)DAT_0085710c <= (int)uVar11) {
              uVar11 = 0;
            }
            uVar10 = DAT_0085710c;
            if (uVar11 == local_34) goto LAB_007291f7;
            local_7c = local_7c + 1;
            uVar10 = uVar11;
            if (sVar2 != g_runtimeRecords_00857110[uVar11].field_0002) break;
            if (bVar6) goto LAB_007291f7;
            bVar6 = false;
          }
          bVar6 = true;
        } while (g_runtimeRecords_00857110[uVar11].field_0002 <= sVar2);
LAB_007291f7:
        if ((int)uVar10 < (int)DAT_0085710c) {
          iVar14 = 0;
          bVar6 = false;
          uVar11 = local_34;
          do {
            while( true ) {
              uVar11 = uVar11 - 1;
              if ((int)uVar11 < 0) {
                uVar11 = DAT_0085710c - 1;
              }
              if (uVar11 == local_34) goto LAB_00729231;
              iVar14 = iVar14 + 1;
              if (sVar2 == g_runtimeRecords_00857110[uVar11].field_0002) break;
              bVar6 = true;
              if (sVar2 < g_runtimeRecords_00857110[uVar11].field_0002) goto LAB_00729231;
            }
          } while (!bVar6);
LAB_00729231:
          if (iVar14 < local_7c) {
            uVar10 = uVar11;
          }
        }
      }
LAB_007292a6:
      if ((int)DAT_0085710c <= (int)uVar10) goto LAB_007294f8;
      if (local_94 < local_6c) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        puVar8 = *(undefined4 **)((st_stack_frame + 32) + local_94 * 8 + param_4 * -0x10);
      }
      else {
        *(undefined4 *)(puVar13 + -4) = 0x7292db;
        iVar14 = DAT_0085710c * -8;
        puVar8 = (undefined4 *)(puVar13 + iVar14);
        local_8 = 0xffffffff;
        *(undefined1 **)((st_stack_frame + 32) + local_94 * 8 + param_4 * -0x10) = puVar13 + iVar14;
        local_6c = local_94;
        puVar13 = puVar13 + iVar14;
      }
      iVar14 = 0;
      uVar11 = local_34;
      while( true ) {
        *puVar8 = *(undefined4 *)(g_runtimeRecords_00857110 + uVar11);
        puVar8[1] = g_runtimeRecords_00857110[uVar11].field_0004;
        puVar8 = puVar8 + 2;
        iVar14 = iVar14 + 1;
        if (uVar11 == uVar10) break;
        uVar11 = uVar11 + 1;
        if ((int)DAT_0085710c <= (int)uVar11) {
          uVar11 = 0;
        }
      }
      *(int *)((st_stack_frame + 28) + local_94 * 8 + param_4 * -0x10) = iVar14;
      local_94 = local_94 + 1;
      if (local_94 < local_6c) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        puVar8 = *(undefined4 **)((st_stack_frame + 32) + local_94 * 8 + param_4 * -0x10);
      }
      else {
        *(undefined4 *)(puVar13 + -4) = 0x72936b;
        iVar14 = DAT_0085710c * -8;
        puVar8 = (undefined4 *)(puVar13 + iVar14);
        local_8 = 0xffffffff;
        *(undefined1 **)((st_stack_frame + 32) + local_94 * 8 + param_4 * -0x10) = puVar13 + iVar14;
        puVar13 = puVar13 + iVar14;
        local_6c = local_94;
      }
      *puVar8 = *(undefined4 *)(g_runtimeRecords_00857110 + uVar10);
      puVar8[1] = g_runtimeRecords_00857110[uVar10].field_0004;
      uVar11 = 1;
      while (uVar10 != local_34) {
        uVar10 = uVar10 + 1;
        if ((int)DAT_0085710c <= (int)uVar10) {
          uVar10 = 0;
        }
        puVar8[2] = *(undefined4 *)(g_runtimeRecords_00857110 + uVar10);
        puVar8[3] = g_runtimeRecords_00857110[uVar10].field_0004;
        uVar11 = uVar11 + 1;
        puVar8 = puVar8 + 2;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      puVar8 = *(undefined4 **)((st_stack_frame + 32) + local_94 * 8 + param_4 * -0x10);
      puVar16 = (undefined4 *)((st_stack_frame + 28) + iVar4);
      DAT_0085710c = uVar11;
      for (iVar14 = (uVar11 & 0x1fffffff) << 1; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar16 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar16 = puVar16 + 1;
      }
      for (iVar14 = 0; iVar14 != 0; iVar14 = iVar14 + -1) {
        *(undefined1 *)puVar16 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar16 = (undefined4 *)((int)puVar16 + 1);
      }
    }
    local_44 = (int)g_runtimeRecords_00857110->field_0000;
    iVar12 = (int)*(short *)((st_stack_frame + 30) + iVar4);
    iVar14 = (int)*(short *)((st_stack_frame + 36) + iVar4);
    local_9c = local_44;
    if (iVar14 < local_44) {
      local_9c = iVar14;
    }
    if (local_44 < iVar14) {
      local_44 = iVar14;
    }
    iVar14 = (int)*(short *)((st_stack_frame + 38) + iVar4);
    local_a0 = iVar12;
    if (iVar14 < iVar12) {
      local_a0 = iVar14;
    }
    g_runtimeRecordCount_00857114 = (int)(iVar14 < iVar12);
    iVar14 = (int)*(short *)((st_stack_frame + 38) + iVar4);
    local_50 = iVar12;
    if (iVar12 < iVar14) {
      local_50 = iVar14;
    }
    DAT_00857104 = (uint)(iVar12 < iVar14);
    iVar14 = (int)local_b0[param_4 * -4];
    if (iVar14 < local_9c) {
      local_9c = iVar14;
    }
    if (local_44 < iVar14) {
      local_44 = iVar14;
    }
    if (local_b0[param_4 * -4 + 1] < local_a0) {
      g_runtimeRecordCount_00857114 = 2;
      local_a0 = (int)local_b0[param_4 * -4 + 1];
    }
    if (local_50 < local_b0[param_4 * -4 + 1]) {
      DAT_00857104 = 2;
      local_50 = (int)local_b0[param_4 * -4 + 1];
    }
LAB_007294f8:
    if (2 < (int)DAT_0085710c) {
      if (param_5 == 0) {
        *(int *)(puVar13 + -4) = param_6;
        *(int *)(puVar13 + -8) = param_2;
        *(int *)(puVar13 + -0xc) = param_1;
        *(undefined4 *)(puVar13 + -0x10) = 0x729571;
        st::fn_00728A80
                  (st::pointer_boundary_cast<AnonReceiver_00728640 *>(this),*(int *)(puVar13 + -0xc),*(int *)(puVar13 + -8),*(int *)(puVar13 + -4));
      }
      else if (((local_9c < STField<int>(this,0x30)) || (STField<int>(this,0x38) <= local_44))
              || ((local_a0 < STField<int>(this,0x34) || (STField<int>(this,0x3c) <= local_50)
                  ))) {
        *(int *)(puVar13 + -4) = param_6;
        *(int *)(puVar13 + -8) = param_2;
        *(int *)(puVar13 + -0xc) = param_1;
        *(undefined4 *)(puVar13 + -0x10) = 0x729558;
        st::fn_007288A0(this,*(int *)(puVar13 + -0xc),*(int *)(puVar13 + -8),*(int *)(puVar13 + -4));
      }
      else {
        *(int *)(puVar13 + -4) = param_6;
        *(int *)(puVar13 + -8) = param_2;
        *(int *)(puVar13 + -0xc) = param_1;
        *(undefined4 *)(puVar13 + -0x10) = 0x729545;
        st::fn_00728640(this,*(int *)(puVar13 + -0xc),*(int *)(puVar13 + -8),*(int *)(puVar13 + -4));
      }
    }
    local_94 = local_94 + -1;
    if (-1 < local_94) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      DAT_0085710c = *(uint *)((st_stack_frame + 28) + local_94 * 8 + param_4 * -0x10);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      puVar8 = *(undefined4 **)((st_stack_frame + 32) + local_94 * 8 + param_4 * -0x10);
      puVar16 = (undefined4 *)((st_stack_frame + 28) + iVar4);
      for (iVar14 = (DAT_0085710c & 0x1fffffff) << 1; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar16 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar16 = puVar16 + 1;
      }
      for (iVar14 = 0; iVar14 != 0; iVar14 = iVar14 + -1) {
        *(undefined1 *)puVar16 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar16 = (undefined4 *)((int)puVar16 + 1);
      }
      goto LAB_00728ee6;
    }
  }
  ExceptionList = local_14;
  return 0;
}

// 007295BF FUN_007295bf
#line 4 "decomp/ST.exe/functions/007295BF/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:0079E30C>007292FF | P:0079E318>00729389 */

undefined4 st::fn_007295BF(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;

  *(undefined4 *)(unaff_EBP + -0x54) = 0xfffffffe;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  return *(undefined4 *)(unaff_EBP + -0x54);
}

// 007295F0 FUN_007295f0
#line 4 "decomp/ST.exe/functions/007295F0/decomp.c"
int __fastcall st::fn_007295F0(AnonShape_007295F0_722683CC *param_1)

{
  alignas(4) byte st_stack_frame[96];

  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint local_2c;
  int local_28;
  int local_24;
  uint *local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_0079e320);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 0);
  iVar7 = 0;
  local_2c = 0;
  local_24 = 0;
  iVar1 = param_1->field_0328;
  iVar2 = param_1->field_0320;
  local_8 = 0;
  iVar6 = iVar1 + -1;
  pbVar5 = (byte *)(param_1->field_0330 + iVar6 * 0x68);
  ExceptionList = &local_14;
  for (; iVar1 - iVar2 <= iVar6; iVar6 = iVar6 + -1) {
    local_20 = *(uint **)(pbVar5 + 100);
    if ((((*(uint *)(pbVar5 + 4) & 0x8000) != 0) && ((*pbVar5 & 2) != 0)) &&
       (puVar8 = (uint *)(*(int *)(pbVar5 + 0x60) * 0x10 + local_20[0x3c]), (*puVar8 & 2) == 0)) {
      if (local_2c == 0) {
        iVar7 = st::fn_006BBE40(&param_1->entries_0004[0x10]->field_0000,&local_2c,&local_24,0);
        local_28 = iVar7;
        if (iVar7 != 0) break;
        local_2c = local_2c + param_1->field_0024 * local_24 + param_1->field_0020;
        local_28 = 0;
      }
      uVar4 = local_20[0x41];
      if (uVar4 == 0) {
        if ((param_1->field_0144 == 0) || (param_1->field_0158 == 0)) {
          uVar4 = param_1->field_027C;
        }
        else {
          iVar3 = param_1->field_0278;
          iVar7 = (((int)*(short *)(puVar8[3] + 4) - param_1->field_016C) * iVar3) /
                  (param_1->field_0170 - param_1->field_016C);
          if (iVar7 < 0) {
            uVar4 = param_1->field_027C;
          }
          else {
            if (iVar3 <= iVar7) {
              iVar7 = iVar3 + -1;
            }
            uVar4 = st::machine_word_boundary_cast<uint>(param_1->field_027C + iVar7 * 0x100);
          }
        }
      }
      iVar7 = st::fn_00728DA0(param_1,local_2c,local_24,(short *)puVar8[3],puVar8[2],*puVar8 & 1,uVar4);
      local_28 = iVar7;
      if (iVar7 != 0) break;
      *local_20 = *local_20 | 0x10;
    }
    *local_20 = *local_20 & 0xffffffdf;
    pbVar5 = pbVar5 + -0x68;
  }
  local_8 = 0xffffffff;
  if (local_2c != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(param_1->entries_0004[0x10]->field_0000 + 0x80))(param_1->entries_0004[0x10],0);
  }
  ExceptionList = local_14;
  return iVar7;
}

// 007297E0 FUN_007297e0
#line 4 "decomp/ST.exe/functions/007297E0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 7.
   Evidence: 00708650 -> 007297E0 @ 00708888; unproven partial register write at 00708865 | 007297E0
   -> 0072A550 @ 00729BCA | 007297E0 -> 0072A550 @ 00729F36 | 007297E0 -> 0072A660 @ 00729B94 |
   007297E0 -> 0072A660 @ 00729EE7 | 007297E0 -> 0072A8A0 @ 0072A3D6 | 007297E0 -> 0072A9D0 @
   0072A38D | 0072AC20 -> 007297E0 @ 0072AC6E; FUN_0072ac20 parameter param_7 */

undefined4 __thiscall
st::fn_007297E0(void *this,byte *param_1,byte *param_2,uint *param_3,uint *param_4,int *param_5,
            int param_6,byte param_7,int param_8,int param_9,uint param_10)

{
  int _param_7 = static_cast<int>(param_7);

  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  int local_74;
  byte *local_70;
  int local_6c;
  int local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  byte *local_28;
  byte *local_24;
  byte *local_20;
  byte *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  byte *pbVar8;

  pbVar8 = param_2;
  local_60 = 1;
  local_58 = 1;
  iVar3 = STField<int>(this,0x24) * (int)param_2 + STField<int>(this,0x20);
  local_8 = 0x80000000;
  local_2c = (param_6 + -1 + param_8 * 2) / 2;
  param_3[1] = st::machine_word_boundary_cast<uint>(param_3[1] + 0x8000 & 0xffff0000);
  *param_3 = *param_3 + 0x8000 & 0xffff0000;
  uVar7 = *param_4 + 0x8000 & 0xffff0000;
  *param_4 = uVar7;
  param_4[1] = st::machine_word_boundary_cast<uint>(param_4[1] + 0x8000 & 0xffff0000);
  uVar1 = *param_3;
  if ((int)uVar7 < (int)uVar1) {
    local_3c = *param_4;
    local_38 = param_4[1];
    local_34 = param_4[2];
    local_30 = param_4[3];
    local_4c = *param_3;
    local_48 = param_3[1];
    local_44 = param_3[2];
    local_40 = param_3[3];
  }
  else {
    local_38 = param_3[1];
    local_34 = param_3[2];
    local_30 = param_3[3];
    local_48 = param_4[1];
    local_44 = param_4[2];
    local_40 = param_4[3];
    local_4c = uVar7;
    local_3c = uVar1;
  }
  iVar10 = local_4c - local_3c;
  uVar4 = local_48 - local_38;
  local_28 = (byte *)(local_44 - local_34);
  uVar8 = (int)uVar4 >> 0x1f;
  if ((int)uVar7 < (int)uVar1) {
    param_10 = st::fn_0072A520(param_10);
    iVar5 = (uVar4 ^ uVar8) - uVar8;
    if (iVar5 < iVar10) {
      iVar5 = iVar10;
    }
    local_8 = 1 << ((byte)((uint)iVar5 >> 0x10) & 0x1f);
  }
  if (iVar10 < (int)((uVar4 ^ uVar8) - uVar8)) {
    local_c = (int)local_38 >> 0x10;
    iVar5 = (int)local_48 >> 0x10;
    if (local_c < iVar5) {
      local_60 = iVar10 / (iVar5 - local_c);
      local_58 = (int)local_28 / (iVar5 - local_c);
      iVar10 = param_5[1];
      if (local_c < iVar10) {
        local_c = iVar10 - local_c;
        local_3c = local_3c + local_c * local_60;
        local_34 = local_34 + local_c * local_58;
        local_8 = local_8 >> ((byte)local_c & 0x1f);
        local_c = iVar10;
      }
      iVar10 = param_5[3];
      if (iVar10 <= iVar5) {
        local_4c = local_4c - ((iVar5 - iVar10) + 1) * local_60;
        iVar5 = iVar10 + -1;
      }
      local_14 = (iVar5 - local_c) + 1;
      if (local_14 < 1) {
        return 0;
      }
      puVar6 = STField<uint *>(this,0x28);
      local_1c = param_2;
    }
    else {
      if (iVar5 != local_c) {
        local_60 = iVar10 / (local_c - iVar5);
        local_58 = (int)local_28 / (local_c - iVar5);
      }
      if (param_5[3] <= local_c) {
        iVar10 = (local_c - param_5[3]) + 1;
        local_3c = local_3c + iVar10 * local_60;
        local_34 = local_34 + iVar10 * local_58;
        local_c = st::machine_word_boundary_cast<int>(param_5[3] + -1);
      }
      iVar10 = param_5[1];
      if (iVar5 < iVar10) {
        local_4c = local_4c - (iVar10 - iVar5) * local_60;
        iVar5 = iVar10;
      }
      local_14 = (local_c - iVar5) + 1;
      if (local_14 == 0) {
        return 0;
      }
      local_1c = (byte *)-(int)param_2;
      puVar6 = (uint *)-STField<int>(this,0x28);
    }
    local_10 = (int)local_4c >> 0x10;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = (uint *)param_9;
    iVar5 = (int)local_3c >> 0x10;
    iVar10 = -local_2c;
    local_18 = param_8 + -1;
    if (-1 < local_18) {
      local_24 = (byte *)(local_3c & 0xffff);
      local_20 = (byte *)(local_10 - iVar5);
      local_28 = (byte *)(iVar10 + iVar5);
      local_2c = param_8;
      do {
        local_50 = param_10;
        local_54 = local_8;
        local_64 = (uint)local_24;
        local_74 = local_14;
        local_5c = local_34;
        if (((int)local_28 < *param_5) || (param_5[2] <= (int)(local_28 + (int)local_20))) {
          local_68 = param_5[2];
          local_70 = local_28;
          local_6c = *param_5;
          st::fn_0072AA60(param_1 + local_c * (int)param_2 + iVar10 + iVar5 + iVar3,(int)local_1c,
                       (ushort *)
                       (STField<int>(this,0x14) +
                       (STField<int>(this,0x28) * local_c + iVar10 + iVar5) * 2),puVar6,&local_74
                       ,param_3);
        }
        else {
          st::fn_0072AB80(param_1 + local_c * (int)param_2 + iVar10 + iVar5 + iVar3,(int)local_1c,
                       (ushort *)
                       (STField<int>(this,0x14) +
                       (STField<int>(this,0x28) * local_c + iVar10 + iVar5) * 2),puVar6,&local_74
                       ,param_3);
        }
        iVar10 = iVar10 + 1;
        local_28 = local_28 + 1;
        param_3 = param_3 + 0x40;
        local_2c = local_2c + -1;
      } while (local_2c != 0);
      local_2c = 0;
    }
    if (-1 < param_6 + -1) {
      local_20 = (byte *)(local_10 - iVar5);
      local_24 = (byte *)(local_3c & 0xffff);
      pbVar9 = (byte *)(iVar10 + iVar5);
      do {
        local_50 = param_10;
        local_74 = local_14;
        local_54 = local_8;
        local_5c = local_34;
        local_64 = (uint)local_24;
        if (((int)pbVar9 < *param_5) || (param_5[2] <= (int)(pbVar9 + (int)local_20))) {
          local_68 = param_5[2];
          local_70 = pbVar9;
          local_6c = *param_5;
          st::fn_0072A8A0(st::pointer_boundary_cast<undefined1 *>(param_1 + local_c * (int)param_2 + iVar10 + iVar5 + iVar3),(int)local_1c,
                       (ushort *)
                       (STField<int>(this,0x14) +
                       (STField<int>(this,0x28) * local_c + iVar10 + iVar5) * 2),puVar6,&local_74
                       ,param_7);
        }
        else {
          st::fn_0072A9D0(st::pointer_boundary_cast<undefined1 *>(param_1 + local_c * (int)param_2 + iVar10 + iVar5 + iVar3),(int)local_1c,
                       (ushort *)
                       (STField<int>(this,0x14) +
                       (STField<int>(this,0x28) * local_c + iVar10 + iVar5) * 2),puVar6,&local_74
                       ,param_7);
        }
        iVar10 = iVar10 + 1;
        pbVar9 = pbVar9 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + -1;
      } while (param_6 != 0);
    }
    param_3 = (uint *)(param_8 * 0x100 + -0x100 + param_9);
    if (-1 < local_18) {
      local_24 = (byte *)(local_3c & 0xffff);
      local_20 = (byte *)(local_10 - iVar5);
      pbVar9 = (byte *)(iVar10 + iVar5);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      _param_7 = local_18 + 1;
      do {
        local_50 = param_10;
        local_54 = local_8;
        local_64 = (uint)local_24;
        local_74 = local_14;
        local_5c = local_34;
        if (((int)pbVar9 < *param_5) || (param_5[2] <= (int)(pbVar9 + (int)local_20))) {
          local_68 = param_5[2];
          local_70 = pbVar9;
          local_6c = *param_5;
          st::fn_0072AA60(param_1 + local_c * (int)param_2 + iVar10 + iVar5 + iVar3,(int)local_1c,
                       (ushort *)
                       (STField<int>(this,0x14) +
                       (STField<int>(this,0x28) * local_c + iVar10 + iVar5) * 2),puVar6,&local_74
                       ,param_3);
        }
        else {
          st::fn_0072AB80(param_1 + local_c * (int)param_2 + iVar10 + iVar5 + iVar3,(int)local_1c,
                       (ushort *)
                       (STField<int>(this,0x14) +
                       (STField<int>(this,0x28) * local_c + iVar10 + iVar5) * 2),puVar6,&local_74
                       ,param_3);
        }
        iVar10 = iVar10 + 1;
        pbVar9 = pbVar9 + 1;
        param_3 = param_3 + -0x40;
        _param_7 = _param_7 + -1;
      } while (_param_7 != 0);
    }
  }
  else {
    iVar5 = (int)local_3c >> 0x10;
    iVar10 = (int)local_4c >> 0x10;
    if (iVar10 != iVar5) {
      local_60 = (int)uVar4 / (iVar10 - iVar5);
      local_58 = (int)local_28 / (iVar10 - iVar5);
    }
    iVar2 = *param_5;
    if (iVar5 < iVar2) {
      iVar5 = iVar2 - iVar5;
      local_38 = local_38 + iVar5 * local_60;
      local_34 = local_34 + iVar5 * local_58;
      local_8 = local_8 >> ((byte)iVar5 & 0x1f);
      iVar5 = iVar2;
    }
    iVar2 = param_5[2];
    if (iVar2 <= iVar10) {
      local_48 = local_48 - ((iVar10 - iVar2) + 1) * local_60;
      iVar10 = iVar2 + -1;
    }
    local_14 = (iVar10 - iVar5) + 1;
    if (0 < local_14) {
      local_1c = (byte *)((int)local_48 >> 0x10);
      pbVar9 = (byte *)-local_2c;
      local_c = (int)local_38 >> 0x10;
      param_3 = (uint *)param_9;
      if ((int)local_38 < (int)local_48) {
        local_18 = param_8 + -1;
        if (-1 < local_18) {
          local_10 = local_38 & 0xffff;
          local_20 = pbVar9 + local_c;
          local_24 = param_1 + (int)local_20 * (int)param_2 + iVar5 + iVar3;
          iVar10 = (int)local_1c - local_c;
          local_28 = (byte *)param_8;
          do {
            local_54 = local_8;
            local_74 = local_14;
            local_50 = param_10;
            local_64 = local_10;
            local_5c = local_34;
            if (((int)local_20 < param_5[1]) || (param_5[3] <= (int)(local_20 + iVar10))) {
              local_68 = param_5[3];
              local_70 = local_20;
              local_6c = param_5[1];
              st::fn_0072A6F0(local_24,(int)param_2,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)local_20 * STField<int>(this,0x28) + iVar5) * 2),
                           STField<int>(this,0x28),&local_74,param_3);
            }
            else {
              st::fn_0072A810(local_24,(int)param_2,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)local_20 * STField<int>(this,0x28) + iVar5) * 2),
                           STField<int>(this,0x28),&local_74,param_3);
            }
            local_24 = local_24 + (int)param_2;
            local_20 = local_20 + 1;
            param_3 = param_3 + 0x40;
            local_28 = (byte *)((int)local_28 + -1);
          } while (local_28 != nullptr);
          local_28 = nullptr;
          pbVar9 = pbVar9 + param_8;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = pbVar9;
        if (-1 < param_6 + -1) {
          local_10 = local_38 & 0xffff;
          local_24 = param_2 + local_c;
          param_3 = (uint *)(param_1 + (int)local_24 * (int)pbVar8 + iVar5 + iVar3);
          iVar10 = (int)local_1c - local_c;
          param_2 = param_2 + param_6;
          do {
            local_54 = local_8;
            local_74 = local_14;
            local_50 = param_10;
            local_64 = local_10;
            local_5c = local_34;
            if (((int)local_24 < param_5[1]) || (param_5[3] <= (int)(local_24 + iVar10))) {
              local_68 = param_5[3];
              local_70 = local_24;
              local_6c = param_5[1];
              st::fn_0072A550(param_3,(int)pbVar8,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)local_24 * STField<int>(this,0x28) + iVar5) * 2),
                           STField<int>(this,0x28),&local_74,param_7);
            }
            else {
              st::fn_0072A660(param_3,(int)pbVar8,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)local_24 * STField<int>(this,0x28) + iVar5) * 2),
                           STField<int>(this,0x28),&local_74,param_7);
            }
            param_3 = (uint *)((int)param_3 + (int)pbVar8);
            local_24 = local_24 + 1;
            param_6 = param_6 + -1;
          } while (param_6 != 0);
        }
        param_3 = (uint *)(param_8 * 0x100 + -0x100 + param_9);
        if (-1 < local_18) {
          local_10 = local_38 & 0xffff;
          pbVar9 = param_2 + local_c;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = param_1 + (int)pbVar9 * (int)pbVar8 + iVar5 + iVar3;
          iVar3 = (int)local_1c - local_c;
          param_2 = (byte *)(local_18 + 1);
          do {
            local_50 = param_10;
            local_54 = local_8;
            local_64 = local_10;
            local_74 = local_14;
            local_5c = local_34;
            if (((int)pbVar9 < param_5[1]) || (param_5[3] <= (int)(pbVar9 + iVar3))) {
              local_68 = param_5[3];
              local_70 = pbVar9;
              local_6c = param_5[1];
              st::fn_0072A6F0(param_1,(int)pbVar8,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)pbVar9 * STField<int>(this,0x28) + iVar5) * 2),
                           STField<int>(this,0x28),&local_74,param_3);
            }
            else {
              st::fn_0072A810(param_1,(int)pbVar8,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)pbVar9 * STField<int>(this,0x28) + iVar5) * 2),
                           STField<int>(this,0x28),&local_74,param_3);
            }
            param_1 = param_1 + (int)pbVar8;
            pbVar9 = pbVar9 + 1;
            param_3 = param_3 + -0x40;
            param_2 = param_2 + -1;
          } while (param_2 != nullptr);
          return 0;
        }
      }
      else {
        local_18 = param_8 + -1;
        if (-1 < local_18) {
          local_10 = local_38 & 0xffff;
          local_20 = pbVar9 + local_c;
          local_28 = (byte *)-(int)local_20;
          local_24 = param_1 + (int)local_20 * (int)param_2 + iVar5 + iVar3;
          iVar10 = (int)local_1c - local_c;
          local_2c = param_8;
          do {
            local_54 = local_8;
            local_74 = local_14;
            local_50 = param_10;
            local_64 = local_10;
            local_5c = local_34;
            if (((int)local_20 < param_5[3]) && (param_5[1] <= (int)(local_20 + iVar10))) {
              st::fn_0072A810(local_24,-(int)param_2,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)local_20 * STField<int>(this,0x28) + iVar5) * 2),
                           -STField<int>(this,0x28),&local_74,param_3);
            }
            else {
              local_70 = local_28;
              local_6c = 1 - param_5[3];
              local_68 = 1 - param_5[1];
              st::fn_0072A6F0(local_24,-(int)param_2,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)local_20 * STField<int>(this,0x28) + iVar5) * 2),
                           -STField<int>(this,0x28),&local_74,param_3);
            }
            local_28 = local_28 + -1;
            local_24 = local_24 + (int)param_2;
            local_20 = local_20 + 1;
            param_3 = param_3 + 0x40;
            local_2c = local_2c + -1;
          } while (local_2c != 0);
          local_2c = 0;
          pbVar9 = pbVar9 + param_8;
        }
        param_2 = pbVar9;
        if (-1 < param_6 + -1) {
          local_10 = local_38 & 0xffff;
          local_24 = param_2 + local_c;
          local_28 = (byte *)-(int)local_24;
          param_3 = (uint *)(param_1 + (int)local_24 * (int)pbVar8 + iVar5 + iVar3);
          iVar10 = (int)local_1c - local_c;
          param_2 = param_2 + param_6;
          do {
            local_54 = local_8;
            local_74 = local_14;
            local_50 = param_10;
            local_64 = local_10;
            local_5c = local_34;
            if (((int)local_24 < param_5[3]) && (param_5[1] <= (int)(local_24 + iVar10))) {
              st::fn_0072A660(param_3,-(int)pbVar8,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)local_24 * STField<int>(this,0x28) + iVar5) * 2),
                           -STField<int>(this,0x28),&local_74,param_7);
            }
            else {
              local_70 = local_28;
              local_6c = 1 - param_5[3];
              local_68 = 1 - param_5[1];
              st::fn_0072A550(param_3,-(int)pbVar8,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)local_24 * STField<int>(this,0x28) + iVar5) * 2),
                           -STField<int>(this,0x28),&local_74,param_7);
            }
            param_3 = (uint *)((int)param_3 + (int)pbVar8);
            local_28 = local_28 + -1;
            local_24 = local_24 + 1;
            param_6 = param_6 + -1;
          } while (param_6 != 0);
        }
        param_3 = (uint *)(param_8 * 0x100 + -0x100 + param_9);
        if (-1 < local_18) {
          local_10 = local_38 & 0xffff;
          pbVar9 = param_2 + local_c;
          param_2 = (byte *)-(int)pbVar9;
          param_1 = param_1 + (int)pbVar9 * (int)pbVar8 + iVar5 + iVar3;
          iVar3 = (int)local_1c - local_c;
          _param_7 = local_18 + 1;
          do {
            local_50 = param_10;
            local_54 = local_8;
            local_64 = local_10;
            local_74 = local_14;
            local_5c = local_34;
            if (((int)pbVar9 < param_5[3]) && (param_5[1] <= (int)(pbVar9 + iVar3))) {
              st::fn_0072A810(param_1,-(int)pbVar8,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)pbVar9 * STField<int>(this,0x28) + iVar5) * 2),
                           -STField<int>(this,0x28),&local_74,param_3);
            }
            else {
              local_70 = param_2;
              local_6c = 1 - param_5[3];
              local_68 = 1 - param_5[1];
              st::fn_0072A6F0(param_1,-(int)pbVar8,
                           (ushort *)
                           (STField<int>(this,0x14) +
                           ((int)pbVar9 * STField<int>(this,0x28) + iVar5) * 2),
                           -STField<int>(this,0x28),&local_74,param_3);
            }
            param_2 = param_2 + -1;
            param_1 = param_1 + (int)pbVar8;
            pbVar9 = pbVar9 + 1;
            param_3 = param_3 + -0x40;
            _param_7 = _param_7 + -1;
          } while (_param_7 != 0);
          return 0;
        }
      }
    }
  }
  return 0;
}

// 0072A520 FUN_0072a520
#line 4 "decomp/ST.exe/functions/0072A520/decomp.c"
uint __cdecl st::fn_0072A520(uint param_1)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uint in_EAX;
  int iVar1;
  bool bVar2;

  iVar1 = 0x20;
  do {
    bVar2 = (param_1 & 1) != 0;
    param_1 = param_1 >> 1 | (uint)bVar2 << 0x1f;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    in_EAX = in_EAX << 1 | (uint)bVar2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  return in_EAX;
}

// 0072A550 FUN_0072a550
#line 4 "decomp/ST.exe/functions/0072A550/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 007297E0 -> 0072A550 @ 00729BCA | 007297E0 -> 0072A550 @ 00729F36

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 007297E0 -> 0072A550 @ 00729BCA; FUN_007297e0 parameter param_7 | 007297E0 -> 0072A550
   @ 00729F36; FUN_007297e0 parameter param_7 */

void __cdecl
st::fn_0072A550(uint *param_1,int param_2,ushort *param_3,int param_4,int *param_5,byte param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  iVar2 = param_5[1];
  if (iVar2 < param_5[2]) {
    do {
      iVar1 = *param_5;
      *param_5 = iVar1 + -1;
      if (iVar1 + -1 < 0) break;
      uVar3 = param_5[8];
      param_1 = (uint *)((int)param_1 + 1);
      param_3 = param_3 + 1;
      param_5[8] = uVar3 >> 1;
      if (uVar3 >> 1 == 0) {
        param_5[8] = -0x80000000;
      }
      uVar3 = st::machine_word_boundary_cast<uint>(param_5[4] + param_5[5]);
      param_5[4] = uVar3;
      if (uVar3 >> 0x10 != 0) {
        param_5[4] = uVar3 & 0xffff;
        param_1 = (uint *)((int)param_1 + param_2);
        param_5[1] = iVar2 + 1;
        param_3 = param_3 + param_4;
        if (param_5[3] <= iVar2 + 1) break;
      }
      param_5[6] = st::machine_word_boundary_cast<int>(param_5[6] + param_5[7]);
      iVar2 = param_5[1];
    } while (iVar2 < param_5[2]);
  }
  if (param_5[1] < param_5[3]) {
    iVar2 = *param_5 + -1;
    *param_5 = iVar2;
    while (-1 < iVar2) {
      if (((param_5[9] & param_5[8]) != 0) && (param_5[6] >> 0x10 < (int)(uint)*param_3)) {
        *(byte *)param_1 = param_6;
      }
      uVar3 = param_5[8];
      param_5[8] = uVar3 >> 1;
      if (uVar3 >> 1 == 0) {
        param_5[8] = -0x80000000;
      }
      uVar3 = st::machine_word_boundary_cast<uint>(param_5[4] + param_5[5]);
      param_1 = (uint *)((int)param_1 + 1);
      param_3 = param_3 + 1;
      param_5[4] = uVar3;
      if (uVar3 >> 0x10 != 0) {
        param_1 = (uint *)((int)param_1 + param_2);
        param_5[4] = uVar3 & 0xffff;
        iVar2 = param_5[1];
        param_3 = param_3 + param_4;
        param_5[1] = iVar2 + 1;
        if (param_5[3] <= iVar2 + 1) {
          return;
        }
      }
      iVar2 = *param_5 + -1;
      param_5[6] = st::machine_word_boundary_cast<int>(param_5[6] + param_5[7]);
      *param_5 = iVar2;
    }
  }
  return;
}

// 0072A660 FUN_0072a660
#line 4 "decomp/ST.exe/functions/0072A660/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 007297E0 -> 0072A660 @ 00729B94 | 007297E0 -> 0072A660 @ 00729EE7

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 007297E0 -> 0072A660 @ 00729B94; FUN_007297e0 parameter param_7 | 007297E0 -> 0072A660
   @ 00729EE7; FUN_007297e0 parameter param_7

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl
st::fn_0072A660(uint *param_1,int param_2,ushort *param_3,int param_4,int *param_5,byte param_6)

{
  int iVar1;
  uint uVar2;

  iVar1 = *param_5 + -1;
  *param_5 = iVar1;
  while (-1 < iVar1) {
    if (((param_5[9] & param_5[8]) != 0) && (param_5[6] >> 0x10 < (int)(uint)*param_3)) {
      *(byte *)param_1 = param_6;
    }
    uVar2 = param_5[8];
    param_5[8] = uVar2 >> 1;
    if (uVar2 >> 1 == 0) {
      param_5[8] = -0x80000000;
    }
    uVar2 = st::machine_word_boundary_cast<uint>(param_5[4] + param_5[5]);
    param_1 = (uint *)((int)param_1 + 1);
    param_3 = param_3 + 1;
    param_5[4] = uVar2;
    if (uVar2 >> 0x10 != 0) {
      param_3 = param_3 + param_4;
      param_1 = (uint *)((int)param_1 + param_2);
      param_5[4] = uVar2 & 0xffff;
    }
    iVar1 = *param_5 + -1;
    param_5[6] = st::machine_word_boundary_cast<int>(param_5[6] + param_5[7]);
    *param_5 = iVar1;
  }
  return;
}

// 0072A6F0 FUN_0072a6f0
#line 4 "decomp/ST.exe/functions/0072A6F0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 5.
   Evidence: 007297E0 -> 0072A6F0 @ 00729AC4 | 007297E0 -> 0072A6F0 @ 00729CD1 | 007297E0 ->
   0072A6F0 @ 00729E01 | 007297E0 -> 0072A6F0 @ 0072A06C

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __cdecl
st::fn_0072A6F0(byte *param_1,int param_2,ushort *param_3,int param_4,int *param_5,uint *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  iVar2 = param_5[1];
  if (iVar2 < param_5[2]) {
    do {
      iVar1 = *param_5;
      *param_5 = iVar1 + -1;
      if (iVar1 + -1 < 0) break;
      uVar3 = param_5[8];
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
      param_5[8] = uVar3 >> 1;
      if (uVar3 >> 1 == 0) {
        param_5[8] = -0x80000000;
      }
      uVar3 = st::machine_word_boundary_cast<uint>(param_5[4] + param_5[5]);
      param_5[4] = uVar3;
      if (uVar3 >> 0x10 != 0) {
        param_5[4] = uVar3 & 0xffff;
        param_1 = param_1 + param_2;
        param_5[1] = iVar2 + 1;
        param_3 = param_3 + param_4;
        if (param_5[3] <= iVar2 + 1) break;
      }
      param_5[6] = st::machine_word_boundary_cast<int>(param_5[6] + param_5[7]);
      iVar2 = param_5[1];
    } while (iVar2 < param_5[2]);
  }
  if (param_5[1] < param_5[3]) {
    iVar2 = *param_5 + -1;
    *param_5 = iVar2;
    while (-1 < iVar2) {
      if (((param_5[9] & param_5[8]) != 0) && (param_5[6] >> 0x10 < (int)(uint)*param_3)) {
        *param_1 = *(byte *)((uint)*param_1 + (int)param_6);
      }
      uVar3 = param_5[8];
      param_5[8] = uVar3 >> 1;
      if (uVar3 >> 1 == 0) {
        param_5[8] = -0x80000000;
      }
      uVar3 = st::machine_word_boundary_cast<uint>(param_5[4] + param_5[5]);
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
      param_5[4] = uVar3;
      if (uVar3 >> 0x10 != 0) {
        param_1 = param_1 + param_2;
        param_5[4] = uVar3 & 0xffff;
        iVar2 = param_5[1];
        param_3 = param_3 + param_4;
        param_5[1] = iVar2 + 1;
        if (param_5[3] <= iVar2 + 1) {
          return;
        }
      }
      iVar2 = *param_5 + -1;
      param_5[6] = st::machine_word_boundary_cast<int>(param_5[6] + param_5[7]);
      *param_5 = iVar2;
    }
  }
  return;
}

// 0072A810 FUN_0072a810
#line 4 "decomp/ST.exe/functions/0072A810/decomp.c"
/* [STPrototypeApplier] Propagated parameter 5.
   Evidence: 007297E0 -> 0072A810 @ 00729A8E | 007297E0 -> 0072A810 @ 00729C9B | 007297E0 ->
   0072A810 @ 00729DB2 | 007297E0 -> 0072A810 @ 0072A01D

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl
st::fn_0072A810(byte *param_1,int param_2,ushort *param_3,int param_4,int *param_5,uint *param_6)

{
  int iVar1;
  uint uVar2;

  iVar1 = *param_5 + -1;
  *param_5 = iVar1;
  while (-1 < iVar1) {
    if (((param_5[9] & param_5[8]) != 0) && (param_5[6] >> 0x10 < (int)(uint)*param_3)) {
      *param_1 = *(byte *)((uint)*param_1 + (int)param_6);
    }
    uVar2 = param_5[8];
    param_5[8] = uVar2 >> 1;
    if (uVar2 >> 1 == 0) {
      param_5[8] = -0x80000000;
    }
    uVar2 = st::machine_word_boundary_cast<uint>(param_5[4] + param_5[5]);
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
    param_5[4] = uVar2;
    if (uVar2 >> 0x10 != 0) {
      param_3 = param_3 + param_4;
      param_1 = param_1 + param_2;
      param_5[4] = uVar2 & 0xffff;
    }
    iVar1 = *param_5 + -1;
    param_5[6] = st::machine_word_boundary_cast<int>(param_5[6] + param_5[7]);
    *param_5 = iVar1;
  }
  return;
}

// 0072A8A0 FUN_0072a8a0
#line 4 "decomp/ST.exe/functions/0072A8A0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 007297E0 -> 0072A8A0 @ 0072A3D6

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 007297E0 -> 0072A8A0 @ 0072A3D6; FUN_007297e0 parameter param_7 */

void __cdecl
st::fn_0072A8A0(undefined1 *param_1,int param_2,ushort *param_3,uint *param_4,int *param_5,byte param_6
            )

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  iVar3 = param_5[1];
  if (iVar3 < param_5[2]) {
    do {
      iVar1 = *param_5;
      *param_5 = iVar1 + -1;
      if (iVar1 + -1 < 0) break;
      param_1 = param_1 + param_2;
      param_3 = param_3 + (int)param_4;
      uVar4 = param_5[8];
      param_5[8] = uVar4 >> 1;
      if (uVar4 >> 1 == 0) {
        param_5[8] = -0x80000000;
      }
      uVar4 = st::machine_word_boundary_cast<uint>(param_5[4] + param_5[5]);
      param_5[4] = uVar4;
      if (uVar4 >> 0x10 != 0) {
        uVar2 = param_5[8];
        param_1 = param_1 + 1;
        param_3 = param_3 + 1;
        param_5[8] = uVar2 >> 1;
        if (uVar2 >> 1 == 0) {
          param_5[8] = -0x80000000;
        }
        param_5[4] = uVar4 & 0xffff;
        param_5[1] = iVar3 + 1;
        if (param_5[3] <= iVar3 + 1) break;
      }
      param_5[6] = st::machine_word_boundary_cast<int>(param_5[6] + param_5[7]);
      iVar3 = param_5[1];
    } while (iVar3 < param_5[2]);
  }
  if (param_5[1] < param_5[3]) {
    iVar3 = *param_5 + -1;
    *param_5 = iVar3;
    while (-1 < iVar3) {
      if (((param_5[9] & param_5[8]) != 0) && (param_5[6] >> 0x10 < (int)(uint)*param_3)) {
        *param_1 = param_6;
      }
      uVar4 = param_5[8];
      param_5[8] = uVar4 >> 1;
      if (uVar4 >> 1 == 0) {
        param_5[8] = -0x80000000;
      }
      param_1 = param_1 + param_2;
      uVar4 = st::machine_word_boundary_cast<uint>(param_5[4] + param_5[5]);
      param_3 = param_3 + (int)param_4;
      param_5[4] = uVar4;
      if (uVar4 >> 0x10 != 0) {
        param_5[4] = uVar4 & 0xffff;
        iVar3 = param_5[1];
        param_1 = param_1 + 1;
        param_3 = param_3 + 1;
        param_5[1] = iVar3 + 1;
        if (param_5[3] <= iVar3 + 1) {
          return;
        }
      }
      iVar3 = *param_5 + -1;
      param_5[6] = st::machine_word_boundary_cast<int>(param_5[6] + param_5[7]);
      *param_5 = iVar3;
    }
  }
  return;
}

// 0072A9D0 FUN_0072a9d0
#line 4 "decomp/ST.exe/functions/0072A9D0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 007297E0 -> 0072A9D0 @ 0072A38D

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 007297E0 -> 0072A9D0 @ 0072A38D; FUN_007297e0 parameter param_7 */

void __cdecl
st::fn_0072A9D0(undefined1 *param_1,int param_2,ushort *param_3,uint *param_4,int *param_5,byte param_6
            )

{
  int iVar1;
  uint uVar2;

  iVar1 = *param_5 + -1;
  *param_5 = iVar1;
  while (-1 < iVar1) {
    if (((param_5[9] & param_5[8]) != 0) && (param_5[6] >> 0x10 < (int)(uint)*param_3)) {
      *param_1 = param_6;
    }
    uVar2 = param_5[8];
    param_5[8] = uVar2 >> 1;
    if (uVar2 >> 1 == 0) {
      param_5[8] = -0x80000000;
    }
    param_3 = param_3 + (int)param_4;
    uVar2 = st::machine_word_boundary_cast<uint>(param_5[4] + param_5[5]);
    param_1 = param_1 + param_2;
    param_5[4] = uVar2;
    if (uVar2 >> 0x10 != 0) {
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
      param_5[4] = uVar2 & 0xffff;
    }
    iVar1 = *param_5 + -1;
    param_5[6] = st::machine_word_boundary_cast<int>(param_5[6] + param_5[7]);
    *param_5 = iVar1;
  }
  return;
}

// 0072AA60 FUN_0072aa60
#line 4 "decomp/ST.exe/functions/0072AA60/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 007297E0 -> 0072AA60 @ 0072A2CC | 007297E0 -> 0072AA60 @ 0072A4E3

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 007297E0 -> 0072AA60 @ 0072A2CC | 007297E0 -> 0072AA60 @ 0072A4E3

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __cdecl
st::fn_0072AA60(byte *param_1,int param_2,ushort *param_3,uint *param_4,int *param_5,uint *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  iVar2 = param_5[1];
  if (iVar2 < param_5[2]) {
    do {
      iVar1 = *param_5;
      *param_5 = iVar1 + -1;
      if (iVar1 + -1 < 0) break;
      param_1 = param_1 + param_2;
      param_3 = param_3 + (int)param_4;
      uVar3 = param_5[8];
      param_5[8] = uVar3 >> 1;
      if (uVar3 >> 1 == 0) {
        param_5[8] = -0x80000000;
      }
      uVar3 = st::machine_word_boundary_cast<uint>(param_5[4] + param_5[5]);
      param_5[4] = uVar3;
      if (uVar3 >> 0x10 != 0) {
        param_1 = param_1 + 1;
        param_5[4] = uVar3 & 0xffff;
        param_3 = param_3 + 1;
        param_5[1] = iVar2 + 1;
        if (param_5[3] <= iVar2 + 1) break;
      }
      param_5[6] = st::machine_word_boundary_cast<int>(param_5[6] + param_5[7]);
      iVar2 = param_5[1];
    } while (iVar2 < param_5[2]);
  }
  if (param_5[1] < param_5[3]) {
    iVar2 = *param_5 + -1;
    *param_5 = iVar2;
    while (-1 < iVar2) {
      if (((param_5[9] & param_5[8]) != 0) && (param_5[6] >> 0x10 < (int)(uint)*param_3)) {
        *param_1 = *(byte *)((uint)*param_1 + (int)param_6);
      }
      uVar3 = param_5[8];
      param_5[8] = uVar3 >> 1;
      if (uVar3 >> 1 == 0) {
        param_5[8] = -0x80000000;
      }
      param_1 = param_1 + param_2;
      uVar3 = st::machine_word_boundary_cast<uint>(param_5[4] + param_5[5]);
      param_3 = param_3 + (int)param_4;
      param_5[4] = uVar3;
      if (uVar3 >> 0x10 != 0) {
        param_5[4] = uVar3 & 0xffff;
        iVar2 = param_5[1];
        param_1 = param_1 + 1;
        param_3 = param_3 + 1;
        param_5[1] = iVar2 + 1;
        if (param_5[3] <= iVar2 + 1) {
          return;
        }
      }
      iVar2 = *param_5 + -1;
      param_5[6] = st::machine_word_boundary_cast<int>(param_5[6] + param_5[7]);
      *param_5 = iVar2;
    }
  }
  return;
}

// 0072AB80 FUN_0072ab80
#line 4 "decomp/ST.exe/functions/0072AB80/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 007297E0 -> 0072AB80 @ 0072A283 | 007297E0 -> 0072AB80 @ 0072A49A

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 007297E0 -> 0072AB80 @ 0072A283 | 007297E0 -> 0072AB80 @ 0072A49A

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl
st::fn_0072AB80(byte *param_1,int param_2,ushort *param_3,uint *param_4,int *param_5,uint *param_6)

{
  int iVar1;
  uint uVar2;

  iVar1 = *param_5 + -1;
  *param_5 = iVar1;
  while (-1 < iVar1) {
    if (((param_5[9] & param_5[8]) != 0) && (param_5[6] >> 0x10 < (int)(uint)*param_3)) {
      *param_1 = *(byte *)((uint)*param_1 + (int)param_6);
    }
    uVar2 = param_5[8];
    param_5[8] = uVar2 >> 1;
    if (uVar2 >> 1 == 0) {
      param_5[8] = -0x80000000;
    }
    param_3 = param_3 + (int)param_4;
    uVar2 = st::machine_word_boundary_cast<uint>(param_5[4] + param_5[5]);
    param_1 = param_1 + param_2;
    param_5[4] = uVar2;
    if (uVar2 >> 0x10 != 0) {
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
      param_5[4] = uVar2 & 0xffff;
    }
    iVar1 = *param_5 + -1;
    param_5[6] = st::machine_word_boundary_cast<int>(param_5[6] + param_5[7]);
    *param_5 = iVar1;
  }
  return;
}

// 0072AC20 FUN_0072ac20
#line 4 "decomp/ST.exe/functions/0072AC20/decomp.c"
/* [STPrototypeApplier] Propagated parameter 7.
   Evidence: 00708650 -> 0072AC20 @ 0070897B; unproven partial register write at 00708958 | 0072AC20
   -> 007297E0 @ 0072AC6E */

int __thiscall
st::fn_0072AC20(void *this,byte *param_1,byte *param_2,uint *param_3,int param_4,int *param_5,
            int param_6,byte param_7,int param_8,int param_9,uint param_10)

{
  int iVar1;
  int iVar2;

  if (1 < param_4) {
    iVar1 = param_4 + -1;
    auto param_4_after_write = 0; /* compiler stack-slot lifetime split */
    if (0 < iVar1) {
      do {
        iVar2 = st::fn_007297E0(this,param_1,param_2,param_3,param_3 + 4,param_5,param_6,param_7,
                             param_8,param_9,param_10);
        if (iVar2 != 0) {
          return iVar2;
        }
        param_4_after_write = param_4_after_write + 1;
        param_3 = param_3 + 4;
      } while (param_4_after_write < iVar1);
    }
  }
  return 0;
}

// 0072AE80 FUN_0072ae80
#line 1 "decomp/ST.exe/functions/0072AE80/decomp.c"

void st::fn_0072AE80(void)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  int local_c;
  int local_8;

  do {
    do {
      st::external_0000006D(*(HANDLE *)(*PTR_00857134 + 0x508),0xffffffff);
      DAT_0085712c = DAT_00857130;
      iVar3 = 0;
      DAT_00857138 = DAT_0085711c;
    } while (DAT_0085711c < 1);
    do {
      DVar1 = st::external_0000006D(*(HANDLE *)(*PTR_00857134 + 0x508),DAT_0085712c);
      if (DVar1 == 0x102) {
        st::external_00000018((LPCRITICAL_SECTION)(*PTR_00857134 + 0x4f0));
        if (((uint)PTR_00857134[0x68] <= DAT_007f1080) ||
           (PTR_00857118 = *(uint **)(PTR_00857134[0x6c] + DAT_007f1080 * 4),
           (*PTR_00857118 & 0x8000) == 0)) {
          st::external_00000019((LPCRITICAL_SECTION)(*PTR_00857134 + 0x4f0));
          break;
        }
        if ((PTR_00857118[0x30] != 0) &&
           ((iVar2 = st::fn_0071B630
                               (st::pointer_boundary_cast<void *>(DAT_00857128),st::pointer_boundary_cast<undefined4 *>(&local_c),st::pointer_boundary_cast<undefined4 *>(&local_8),nullptr), iVar2 != 0 &&
            (st::fn_006B3730
                       (st::pointer_boundary_cast<uint *>(PTR_00857134),DAT_007f1080,0xfffffffe,local_c - DAT_00857120,
                        local_8 - DAT_00857124), (*PTR_00857118 & 4) != 0)))) {
          st::fn_0072B0B0();
        }
        st::external_00000019((LPCRITICAL_SECTION)(*PTR_00857134 + 0x4f0));
        iVar3 = iVar3 + 1;
      }
      else {
        iVar3 = 0;
      }
    } while (iVar3 < DAT_00857138);
  } while( true );
}

// 0072AFC0 FUN_0072afc0
#line 4 "decomp/ST.exe/functions/0072AFC0/decomp.c"
void st::fn_0072AFC0(void)

{
  if (DAT_0085713c != (HANDLE)0x0) {
    if (PTR_00857134 != nullptr) {
      st::external_00000018((LPCRITICAL_SECTION)(*PTR_00857134 + 0x4f0));
      st::external_00000027(*(HANDLE *)(*PTR_00857134 + 0x508));
      *(undefined4 *)(*PTR_00857134 + 0x508) = 0;
    }
    st::external_00000010(st::pointer_boundary_cast<HANDLE>(DAT_0085713c),0);
    DAT_0085713c = st::machine_word_boundary_cast<undefined4>((HANDLE)0x0);
    if (PTR_00857134 == nullptr) {
      DAT_0085713c = st::machine_word_boundary_cast<undefined4>((HANDLE)0x0);
      return;
    }
    st::external_00000019((LPCRITICAL_SECTION)(*PTR_00857134 + 0x4f0));
  }
  if (PTR_00857134 != nullptr) {
    st::fn_006B3BB0(st::pointer_boundary_cast<int *>(PTR_00857134),DAT_007f1080);
    DAT_007f1080 = 0xffffffff;
    PTR_00857134 = nullptr;
  }
  return;
}

// 0072B070 FUN_0072b070
#line 4 "decomp/ST.exe/functions/0072B070/decomp.c"
void st::fn_0072B070(undefined4 param_1,undefined4 param_2)

{
  DAT_00857130 = param_1;
  DAT_0085711c = param_2;
  return;
}

// 0072B090 FUN_0072b090
#line 4 "decomp/ST.exe/functions/0072B090/decomp.c"
void st::fn_0072B090(undefined4 param_1,undefined4 param_2)

{
  DAT_00857120 = param_1;
  DAT_00857124 = param_2;
  return;
}

// 0072B0B0 FUN_0072b0b0
#line 4 "decomp/ST.exe/functions/0072B0B0/decomp.c"
void st::fn_0072B0B0(void)

{
  alignas(4) byte st_stack_frame[172];

  int *piVar1;
  LONG LVar2;
  LONG LVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *source;
  uint local_98;
  uint local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  uint local_80;
  int local_7c [5];
  int local_68;
  int local_64;
  byte *local_60;
  uint local_5c;
  int local_58;
  tagPOINT local_54;
  int local_4c;
  int local_48;
  int local_44 [2];
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  RecoveredSourceFamily_dibcopy *local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_0079e330);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 0);
  local_3c = 0;
  ExceptionList = &local_14;
  iVar4 = st::fn_006BBE40(*(int **)(*PTR_00857134 + 0x44),&local_24,(int *)&local_20,0);
  if (iVar4 == 0) {
    if ((*PTR_00857118 & 1) == 0) {
      iVar4 = -1;
      local_5c = 0xffffffff;
      local_68 = -1;
      local_80 = 0xffffffff;
    }
    else {
      local_8 = 0;
      st::fn_006CEA60((byte *)(PTR_00857118[2] * (int)local_20 + PTR_00857118[1] + local_24),(int)local_20,
               (byte *)PTR_00857118[0x30],PTR_00857118[3],PTR_00857118[3],PTR_00857118[4]);
      local_8 = 0xffffffff;
      local_5c = PTR_00857118[1];
      local_68 = st::machine_word_boundary_cast<int>(PTR_00857118[3] + local_5c);
      local_80 = PTR_00857118[2];
      iVar4 = st::machine_word_boundary_cast<int>(PTR_00857118[4] + local_80);
    }
    *PTR_00857118 = *PTR_00857118 & 0xfffffffe;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    piVar1 = st::pointer_boundary_cast<int *>(PTR_00857134 + PTR_00857118[0x14] * 4 + 5);
    PTR_00857118[10] = st::machine_word_boundary_cast<uint>(PTR_00857118[10] + PTR_00857134[PTR_00857118[0x14] * 2 + 0x47]);
    PTR_00857118[0xb] = st::machine_word_boundary_cast<uint>(PTR_00857118[0xb] + PTR_00857134[PTR_00857118[0x14] * 2 + 0x48]);
    PTR_00857118[6] = st::machine_word_boundary_cast<uint>(PTR_00857118[6] + PTR_00857134[PTR_00857118[0x14] * 2 + 0x47]);
    PTR_00857118[7] = st::machine_word_boundary_cast<uint>(PTR_00857118[7] + PTR_00857134[PTR_00857118[0x14] * 2 + 0x48]);
    local_84 = iVar4;
    if ((*PTR_00857118 & 0x20) != 0) {
      if (PTR_00857118[8] == 0xffffffff) {
        st::fn_006CF950(PTR_00857118);
      }
      if (((0 < (int)PTR_00857118[0xc]) && (0 < (int)PTR_00857118[0xd])) &&
         (iVar5 = st::fn_006CFEB0((int *)&local_38,(int *)(PTR_00857118 + 10),piVar1), iVar5 != 0)) {
        local_8 = 1;
        source = (byte *)(local_34 * (int)local_20 + local_38 + local_24);
        local_60 = source;
        st::fn_006CEA60((byte *)PTR_00857118[0x30],local_30,source,(int)local_20,local_30,local_2c);
        local_88 = local_38 - PTR_00857118[10];
        st::fn_006D2820(source,local_20,*(byte **)(PTR_00857118[0x33] + PTR_00857118[0x31] * 4),
                     local_88,local_34 - PTR_00857118[0xb],local_30,local_2c,PTR_00857118[0x2c],
                     nullptr,0,0,nullptr);
        local_8 = 0xffffffff;
      }
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(**(int **)(*PTR_00857134 + 0x44) + 0x80))(*(int **)(*PTR_00857134 + 0x44),0);
    local_54.x = PTR_00857134[1];
    local_54.y = PTR_00857134[2];
    local_4c = PTR_00857134[3];
    local_48 = PTR_00857134[4];
    st::external_0000009B(*(HWND *)(*PTR_00857134 + 4),st::pointer_boundary_cast<LPPOINT>(&local_54));
    LVar3 = local_54.y;
    LVar2 = local_54.x;
    local_58 = local_54.x;
    local_64 = local_54.y;
    if ((local_30 != 0) && (local_2c != 0)) {
      if (((int)local_5c < 0) ||
         (iVar4 = st::fn_006B0460(local_7c,(int *)&local_38,(int *)(PTR_00857118 + 1)), iVar4 == 0)) {
        local_98 = local_38;
        local_94 = local_34;
        local_90 = local_30 + local_38;
        local_8c = local_2c + local_34;
        local_54.x = local_38 + LVar2;
        local_54.y = local_34 + LVar3;
        local_4c = local_90 + LVar2;
        local_48 = local_8c + LVar3;
        piVar1 = *(int **)(*PTR_00857134 + 0x34);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        local_3c = (**(code **)(*piVar1 + 0x14))
                             (piVar1,&local_54,*(undefined4 *)(*PTR_00857134 + 0x44),&local_98,
                              0x1000000,0);
        iVar4 = local_84;
        if ((local_3c != 0) &&
           (local_3c = st::fn_006BBE40(*(int **)(*PTR_00857134 + 0x34),&local_28,local_44,0),
           iVar4 = local_84, local_3c == 0)) {
          local_3c = st::fn_006BBE40(*(int **)(*PTR_00857134 + 0x44),&local_24,(int *)&local_20,0);
          iVar4 = local_84;
          if (local_3c == 0) {
            local_8 = 2;
            st::fn_006CEA60((byte *)(local_44[0] * local_54.y + local_28 + local_54.x),local_44[0],
                     (byte *)(local_94 * (int)local_20 + local_98 + local_24),(int)local_20,local_30
                     ,local_2c);
            iVar4 = local_84;
            local_8 = 0xffffffff;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(**(int **)(*PTR_00857134 + 0x44) + 0x80))
                      (*(int **)(*PTR_00857134 + 0x44),0);
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(**(int **)(*PTR_00857134 + 0x34) + 0x80))(*(int **)(*PTR_00857134 + 0x34),0);
        }
      }
      else {
        uVar6 = PTR_00857118[1];
        local_5c = local_38;
        if ((int)uVar6 <= (int)local_38) {
          local_5c = uVar6;
        }
        local_68 = local_38 + local_30;
        if ((int)(local_38 + local_30) <= (int)(uVar6 + PTR_00857118[3])) {
          local_68 = uVar6 + PTR_00857118[3];
        }
        uVar6 = PTR_00857118[2];
        local_80 = local_34;
        if ((int)uVar6 <= (int)local_34) {
          local_80 = uVar6;
        }
        iVar4 = local_2c + local_34;
        if ((int)(local_2c + local_34) <= (int)(uVar6 + PTR_00857118[4])) {
          iVar4 = uVar6 + PTR_00857118[4];
        }
      }
      *PTR_00857118 = *PTR_00857118 | 1;
    }
    if (-1 < (int)local_5c) {
      local_98 = local_5c;
      local_94 = local_80;
      local_90 = local_68;
      local_54.x = local_5c + LVar2;
      local_54.y = local_80 + LVar3;
      local_4c = local_68 + LVar2;
      local_48 = iVar4 + LVar3;
      piVar1 = *(int **)(*PTR_00857134 + 0x34);
      local_8c = iVar4;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar5 = (**(code **)(*piVar1 + 0x14))
                        (piVar1,&local_54,*(undefined4 *)(*PTR_00857134 + 0x44),&local_98,0x1000000,
                         0);
      uVar6 = 0;
      if ((iVar5 != 0) &&
         (uVar6 = st::fn_006BBE40(*(int **)(*PTR_00857134 + 0x34),&local_28,local_44,0), uVar6 == 0)) {
        uVar6 = st::fn_006BBE40(*(int **)(*PTR_00857134 + 0x44),&local_24,(int *)&local_20,0);
        if (uVar6 == 0) {
          local_8 = 3;
          st::fn_006CEA60((byte *)(local_44[0] * local_54.y + local_28 + local_54.x),local_44[0],
                   (byte *)(local_94 * (int)local_20 + local_98 + local_24),(int)local_20,
                   local_68 - local_5c,iVar4 - local_80);
          local_8 = 0xffffffff;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(**(int **)(*PTR_00857134 + 0x44) + 0x80))(*(int **)(*PTR_00857134 + 0x44),0);
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(**(int **)(*PTR_00857134 + 0x34) + 0x80))(*(int **)(*PTR_00857134 + 0x34),0);
      }
      local_3c = local_3c | uVar6;
    }
    if (local_3c == 0) {
      *PTR_00857118 = *PTR_00857118 & 0xfffffff9;
    }
    PTR_00857118[1] = local_38;
    PTR_00857118[2] = local_34;
    PTR_00857118[3] = local_30;
    PTR_00857118[4] = local_2c;
  }
  ExceptionList = local_14;
  return;
}

// 0072B700 FUN_0072b700
#line 4 "decomp/ST.exe/functions/0072B700/decomp.c"
undefined4 * __fastcall st::fn_0072B700(undefined4 *param_1)

{
  st::fn_006E5FB0(param_1);
  *param_1 = st::machine_word_boundary_cast<undefined4>(&st_global_0079E360);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x38] = 0;
  param_1[0x4a] = 0;
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  param_1[0x1c] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x27] = 0;
  param_1[0x2b] = 0;
  param_1[0x30] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  param_1[0x4b] = 0;
  param_1[0xd] = 1;
  param_1[0xe] = 1;
  return param_1;
}

