#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0074.cpp

// 00746BAB FUN_00746bab
#line 1 "decomp/ST.exe/functions/00746BAB/decomp.c"
HRESULT st::fn_00746BAB(LPUNKNOWN param_1,IID *param_2,void **param_3,int *param_4)

{
  int *piVar1;
  HRESULT HVar2;

  piVar1 = param_4;
  *param_4 = 0;
  HVar2 = st::external_000000D0((IID *)&DAT_007a1ab0,param_1,1,(IID *)&DAT_007a22b8,&param_4);
  if (-1 < HVar2) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    HVar2 = (**(code **)*param_4)(param_4,&DAT_007a1aa0,&param_1);
    if (-1 < HVar2) {
      HVar2 = (*param_1->lpVtbl[1].QueryInterface)(param_1,param_2,param_3);
      (*param_1->lpVtbl->Release)(param_1);
      if (-1 < HVar2) {
        *piVar1 = (int)param_4;
        return 0;
      }
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_4 + 8))(param_4);
  }
  return HVar2;
}

// 00746C24 FUN_00746c24
#line 1 "decomp/ST.exe/functions/00746C24/decomp.c"
void * __thiscall
st::fn_00746C24(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  st::fn_0074B7B8(this,param_1,param_2);
  STField<undefined4>(this,0x10) = 0;
  STField<undefined4>(this,0x14) = 0;
  STField<undefined4>(this,0x18) = 0;
  STField<undefined4>(this,0x1c) = 0;
  STField<undefined4>(this,0x20) = *param_4;
  STField<undefined4>(this,0x24) = param_4[1];
  STField<undefined4>(this,0x28) = param_4[2];
  STField<undefined4>(this,0x2c) = param_4[3];
  STField<undefined4>(this,0x30) = param_3;
  return this;
}

// 00746C5E FUN_00746c5e
#line 1 "decomp/ST.exe/functions/00746C5E/decomp.c"
void __fastcall st::fn_00746C5E(int param_1)

{
  int *piVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  st::fn_0074B777();
  return;
}

// 00746C84 FUN_00746c84
#line 1 "decomp/ST.exe/functions/00746C84/decomp.c"
void st::fn_00746C84(int *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;

  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = param_2;
  pcVar3 = &DAT_007a1ac0;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    iVar1 = 0x10;
    bVar4 = true;
    pcVar2 = param_2;
    pcVar3 = "\f\x01";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
      st::fn_0074B810(param_1,param_2,param_3);
      return;
    }
  }
  st::fn_0074B8A6((int *)(-(uint)(param_1 != nullptr) & (uint)(param_1 + 3)),param_3);
  return;
}

// 00746CDA FUN_00746cda
#line 1 "decomp/ST.exe/functions/00746CDA/decomp.c"
undefined4 st::fn_00746CDA(AnonShape_00746CDA_FC10F509 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    uVar1 = 0;
    *param_2 = param_1->field_0014;
    param_2[1] = param_1->field_0018;
    param_2[2] = param_1->field_001C;
    param_2[3] = param_1->field_0020;
  }
  return uVar1;
}

// 00746E32 FUN_00746e32
#line 1 "decomp/ST.exe/functions/00746E32/decomp.c"
int __thiscall st::fn_00746E32(void *this,uint *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;

  piVar2 = STField<int *>(this,0x14);
  if (piVar2 == nullptr) {
    iVar4 = -0x7ffbfded;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar4 = (**(code **)(*piVar2 + 0xc))(piVar2,param_1);
    if (-1 < iVar4) {
      uVar3 = STField<uint>(this,0x18);
      uVar1 = *param_1;
      *param_1 = *param_1 - uVar3;
      param_1[1] = (param_1[1] - STField<int>(this,0x1c)) - (uint)(uVar1 < uVar3);
      iVar4 = 0;
    }
  }
  return iVar4;
}

// 00746E65 FUN_00746e65
#line 1 "decomp/ST.exe/functions/00746E65/decomp.c"
void st::fn_00746E65(int *param_1,char *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;

  iVar3 = 0x10;
  bVar6 = true;
  iVar2 = iVar3;
  pcVar4 = param_2;
  pcVar5 = &DAT_007a1368;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *pcVar4 == *pcVar5;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (!bVar6) {
    bVar6 = true;
    iVar2 = iVar3;
    pcVar4 = param_2;
    pcVar5 = &DAT_007a1ac0;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      bVar6 = true;
      iVar2 = iVar3;
      pcVar4 = param_2;
      pcVar5 = "\f\x01";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (!bVar6) {
        bVar6 = true;
        pcVar4 = param_2;
        pcVar5 = &DAT_007a1ad0;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar6 = *pcVar4 == *pcVar5;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar6);
        if (!bVar6) {
          st::fn_0074B810(param_1,param_2,param_3);
          return;
        }
        piVar1 = param_1 + 4;
        goto LAB_00746ec5;
      }
    }
  }
  piVar1 = param_1 + 3;
LAB_00746ec5:
  st::fn_0074B8A6((int *)(-(uint)(param_1 != nullptr) & (uint)piVar1),param_3);
  return;
}

// 00746EE3 FUN_00746ee3
#line 1 "decomp/ST.exe/functions/00746EE3/decomp.c"
void * __thiscall
st::fn_00746EE3(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  st::fn_0074B7B8(this,param_1,param_2);
  STField<undefined4>(this,0x14) = 0;
  STField<undefined4>(this,0x18) = 0;
  STField<undefined4>(this,0x20) = 0;
  STField<undefined4>(this,0x24) = 0;
  STField<undefined4>(this,0x28) = *param_4;
  STField<undefined4>(this,0x2c) = param_4[1];
  STField<undefined4>(this,0x30) = param_4[2];
  STField<undefined4>(this,0x34) = param_4[3];
  STField<undefined4>(this,0x3c) = 0;
  STField<undefined4>(this,0x40) = 0;
  STField<undefined4>(this,0x44) = 0;
  STField<undefined4>(this,0x38) = param_3;
  STField<undefined4>(this,0x48) = 1;
  return this;
}

// 00746F2D FUN_00746f2d
#line 1 "decomp/ST.exe/functions/00746F2D/decomp.c"
void * __thiscall
st::fn_00746F2D(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  st::fn_0074B7B8(this,param_1,param_2);
  STField<undefined4>(this,0x14) = 0;
  STField<undefined4>(this,0x18) = 0;
  STField<undefined4>(this,0x20) = 0;
  STField<undefined4>(this,0x24) = 0;
  STField<undefined4>(this,0x28) = *param_4;
  STField<undefined4>(this,0x2c) = param_4[1];
  STField<undefined4>(this,0x30) = param_4[2];
  STField<undefined4>(this,0x34) = param_4[3];
  STField<undefined4>(this,0x3c) = 0;
  STField<undefined4>(this,0x40) = 0;
  STField<undefined4>(this,0x44) = 0;
  STField<undefined4>(this,0x38) = param_3;
  STField<undefined4>(this,0x48) = 1;
  return this;
}

// 00746F77 FUN_00746f77
#line 1 "decomp/ST.exe/functions/00746F77/decomp.c"
void __fastcall st::fn_00746F77(AnonShape_00746F77_1F40C93D *param_1)

{
  int *piVar1;

  if (param_1->field_003C != nullptr) {
    st::fn_0072E2B0(param_1->field_003C);
  }
  piVar1 = (int *)param_1->field_0018;
  if (piVar1 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1->field_0018 = 0;
  }
  st::fn_0074B777();
  return;
}

// 00746FAB FUN_00746fab
#line 1 "decomp/ST.exe/functions/00746FAB/decomp.c"
undefined4 st::fn_00746FAB(AnonShape_00746FAB_13ADB1A1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    uVar1 = 0;
    *param_2 = param_1->field_001C;
    param_2[1] = param_1->field_0020;
    param_2[2] = param_1->field_0024;
    param_2[3] = param_1->field_0028;
  }
  return uVar1;
}

// 00746FCE FUN_00746fce
#line 1 "decomp/ST.exe/functions/00746FCE/decomp.c"
/* [STVTableApplier] Virtual slot 0079DDB0+0x1C */

undefined4 st::fn_00746FCE(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;

  if (param_3 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    *param_3 = *(undefined4 *)(param_1 + 8);
    uVar1 = 0;
  }
  return uVar1;
}

// 00746FEB FUN_00746feb
#line 1 "decomp/ST.exe/functions/00746FEB/decomp.c"
/* [STVTableApplier] Virtual slot 0079DB3C+0x20

   [STVTableApplier] Virtual slot 0079DDB0+0x20

   [STVTableApplier] Virtual slot 007A1390+0x20

   [STVTableApplier] Virtual slot 007A15A8+0x20 */

undefined4 st::fn_00746FEB(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  st::external_00000018(lpCriticalSection);
  if (param_2 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_2 + 4))(param_2);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 0xc) = param_2;
  st::external_00000019(lpCriticalSection);
  return 0;
}

// 00747029 FUN_00747029
#line 1 "decomp/ST.exe/functions/00747029/decomp.c"
undefined4 st::fn_00747029(AnonShape_00747029_F1EF8B79 *param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  undefined4 uVar2;

  if (param_2 == nullptr) {
    uVar2 = 0x80004003;
  }
  else {
    lpCriticalSection = param_1->field_002C;
    st::external_00000018(lpCriticalSection);
    piVar1 = (int *)param_1->field_000C;
    if (piVar1 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    *param_2 = param_1->field_000C;
    st::external_00000019(lpCriticalSection);
    uVar2 = 0;
  }
  return uVar2;
}

// 0074706A FUN_0074706a
#line 1 "decomp/ST.exe/functions/0074706A/decomp.c"
int st::fn_0074706A(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_8;

  iVar2 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  st::external_00000018(lpCriticalSection);
  local_8 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)(param_1 + -0xc);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar3 = (**(code **)(*(int *)(param_1 + -0xc) + 0x18))();
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = 0;
    if (0 < iVar3) {
      do {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        piVar4 = (int *)(**(code **)(*piVar1 + 0x1c))(param_1);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if (((piVar4[6] != 0) && (iVar5 = (**(code **)(*piVar4 + 0x18))(), iVar5 < 0)) &&
           (-1 < local_8)) {
          local_8 = iVar5;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
      } while (param_1 < iVar3);
    }
  }
  *(undefined4 *)(iVar2 + 8) = 0;
  st::external_00000019(lpCriticalSection);
  return local_8;
}

// 007470E5 FUN_007470e5
#line 1 "decomp/ST.exe/functions/007470E5/decomp.c"
int st::fn_007470E5(AnonShape_007470E5_0A8F5E67 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  lpCriticalSection = param_1->field_002C;
  st::external_00000018(lpCriticalSection);
  iVar4 = 0;
  if (param_1->field_0008 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*(int *)&param_1[-1].field_0x24 + 0x18))();
    if (0 < iVar1) {
      do {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        piVar2 = (int *)(**(code **)(*(int *)&param_1[-1].field_0x24 + 0x1c))(iVar4);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if ((piVar2[6] != 0) && (iVar3 = (**(code **)(*piVar2 + 0x14))(), iVar3 < 0)) {
          st::external_00000019(lpCriticalSection);
          return iVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
  }
  param_1->field_0008 = 1;
  st::external_00000019(lpCriticalSection);
  return 0;
}

// 00747161 FUN_00747161
#line 1 "decomp/ST.exe/functions/00747161/decomp.c"
int st::fn_00747161(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;

  piVar2 = param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[0xb];
  st::external_00000018(lpCriticalSection);
  param_1[5] = param_2;
  param_1[6] = param_3;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  if ((param_1[2] == 0) && (iVar3 = (**(code **)(*param_1 + 0x14))(param_1), iVar3 < 0)) {
    st::external_00000019(lpCriticalSection);
    return iVar3;
  }
  if (param_1[2] != 2) {
    piVar1 = param_1 + -3;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar3 = (**(code **)(param_1[-3] + 0x18))();
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = nullptr;
    if (0 < iVar3) {
      do {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        piVar4 = (int *)(**(code **)(*piVar1 + 0x1c))(param_1);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if ((piVar4[6] != 0) && (iVar5 = (**(code **)(*piVar4 + 0x1c))(param_2,param_3), iVar5 < 0))
        {
          st::external_00000019(lpCriticalSection);
          return iVar5;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int *)((int)param_1 + 1);
      } while ((int)param_1 < iVar3);
    }
  }
  piVar2[2] = 2;
  st::external_00000019(lpCriticalSection);
  return 0;
}

// 00747212 FUN_00747212
#line 1 "decomp/ST.exe/functions/00747212/decomp.c"
/* [STVTableApplier] Virtual slot 0079DB78+0x10

   [STVTableApplier] Virtual slot 0079DDEC+0x10

   [STVTableApplier] Virtual slot 007A13D0+0x10

   [STVTableApplier] Virtual slot 007A15E8+0x10 */

int __thiscall st::fn_00747212(int param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 == nullptr) {
    iVar4 = -0x7ffbfded;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar4 = (**(code **)(*piVar2 + 0xc))(piVar2,param_2);
    if (-1 < iVar4) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar3 = *(uint *)(param_1 + 0x20);
      uVar1 = *param_2;
      *param_2 = *param_2 - uVar3;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      param_2[1] = (param_2[1] - *(int *)(param_1 + 0x24)) - (uint)(uVar1 < uVar3);
      iVar4 = 0;
    }
  }
  return iVar4;
}

// 00747245 FUN_00747245
#line 1 "decomp/ST.exe/functions/00747245/decomp.c"
int st::fn_00747245(int param_1,undefined4 *param_2)

{
  int iVar1;
  void *this;
  undefined4 *puVar2;

  if (param_2 == nullptr) {
    iVar1 = -0x7fffbffd;
  }
  else {
    this = (void *)st::fn_0072E530(0x30);
    if (this == nullptr) {
      puVar2 = nullptr;
    }
    else {
      puVar2 = st::fn_0074756B(this,(AnonShape_0074756B_58F08DE7 *)(param_1 + -0xc));
    }
    *param_2 = puVar2;
    iVar1 = (-(uint)(puVar2 != nullptr) & 0x7ff8fff2) + 0x8007000e;
  }
  return iVar1;
}

// 0074728A FUN_0074728a
#line 1 "decomp/ST.exe/functions/0074728A/decomp.c"
undefined4 st::fn_0074728A(int param_1,ushort *param_2,uint *param_3)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  if (param_3 == nullptr) {
    uVar2 = 0x80004003;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
    st::external_00000018(lpCriticalSection);
    piVar1 = (int *)(param_1 + -0xc);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar3 = (**(code **)(*(int *)(param_1 + -0xc) + 0x18))();
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = 0;
    if (0 < iVar3) {
      do {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar4 = (**(code **)(*piVar1 + 0x1c))(param_1);
        iVar5 = st::fn_0074D5D3(*(ushort **)(iVar4 + 0x14),param_2);
        if (iVar5 == 0) {
          piVar1 = (int *)(iVar4 + 0xc);
          *param_3 = -(uint)(iVar4 != 0) & (uint)piVar1;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*piVar1 + 4))(piVar1);
          st::external_00000019(lpCriticalSection);
          return 0;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
      } while (param_1 < iVar3);
    }
    *param_3 = 0;
    st::external_00000019(lpCriticalSection);
    uVar2 = 0x80040216;
  }
  return uVar2;
}

// 0074731F FUN_0074731f
#line 1 "decomp/ST.exe/functions/0074731F/decomp.c"
undefined4 st::fn_0074731F(AnonShape_0074731F_00DF946A *param_1,short *param_2)

{
  int *piVar1;
  undefined4 uVar2;

  if (param_2 == nullptr) {
    uVar2 = 0x80004003;
  }
  else {
    if (param_1->field_0030 == nullptr) {
      *param_2 = 0;
    }
    else {
      st::fn_0074D59E(param_2,param_1->field_0030,0x80);
    }
    *(undefined4 *)(param_2 + 0x80) = param_1->field_0034;
    piVar1 = (int *)param_1->field_0034;
    if (piVar1 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

// 0074736A FUN_0074736a
#line 1 "decomp/ST.exe/functions/0074736A/decomp.c"
undefined4 st::fn_0074736A(AnonShape_0074736A_AA1936BB *param_1,undefined4 *param_2,short *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;

  lpCriticalSection = param_1->field_002C;
  st::external_00000018(lpCriticalSection);
  param_1->field_0034 = param_2;
  if (param_2 == nullptr) {
    param_1->field_0038 = 0;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)*param_2)(param_2,&DAT_007a1ae0,&param_1->field_0038);
    if (-1 < iVar2) {
      piVar1 = (int *)param_1->field_0038;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  if ((HoloTy *)param_1->field_0030 != nullptr) {
    st::fn_0072E2B0((HoloTy *)param_1->field_0030);
    param_1->field_0030 = 0;
  }
  if (param_3 != nullptr) {
    iVar2 = st::fn_0074D664(param_3);
    uVar5 = (iVar2 + 1U) * 2;
    puVar3 = (undefined4 *)st::fn_0072E530(uVar5);
    param_1->field_0030 = puVar3;
    if (puVar3 != nullptr) {
      for (uVar4 = (iVar2 + 1U & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *(undefined4 *)param_3;
        param_3 = param_3 + 2;
        puVar3 = puVar3 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)puVar3 = (char)*param_3;
        param_3 = (short *)((int)param_3 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
  }
  st::external_00000019(lpCriticalSection);
  return 0;
}

// 007473FE FUN_007473fe
#line 1 "decomp/ST.exe/functions/007473FE/decomp.c"
/* [STVTableApplier] Virtual slot 0079DB3C+0x38

   [STVTableApplier] Virtual slot 0079DDB0+0x38

   [STVTableApplier] Virtual slot 007A1390+0x38

   [STVTableApplier] Virtual slot 007A15A8+0x38 */

undefined4 st::fn_007473FE(void)

{
  return 0x80004001;
}

// 00747406 FUN_00747406
#line 1 "decomp/ST.exe/functions/00747406/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0074B719 -> 00747406 @ 0074B744 */

undefined4 __thiscall st::fn_00747406(void *this,undefined4 param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;

  piVar1 = STField<int *>(this,0x44);
  if (piVar1 == nullptr) {
    uVar2 = 0x80004001;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_1,param_2,param_3);
  }
  return uVar2;
}

// 00747429 FUN_00747429
#line 1 "decomp/ST.exe/functions/00747429/decomp.c"
undefined4 __thiscall st::fn_00747429(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *local_8;

  puVar1 = STField<undefined4 *>(this,0x40);
  if (puVar1 == nullptr) {
    uVar3 = 0x80004002;
  }
  else {
    local_8 = this;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_007a1af0,&local_8);
    if (iVar2 < 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar3 = (**(code **)(*STField<int *>(this,0x40) + 0x20))
                        (STField<int *>(this,0x40),param_1);
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar3 = (**(code **)(*local_8 + 0x4c))(local_8,param_1,param_2);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  return uVar3;
}

// 0074747F FUN_0074747f
#line 1 "decomp/ST.exe/functions/0074747F/decomp.c"
/* [STVTableApplier] Virtual slot 0079DB78+0x14

   [STVTableApplier] Virtual slot 0079DDEC+0x14

   [STVTableApplier] Virtual slot 007A13D0+0x14

   [STVTableApplier] Virtual slot 007A15E8+0x14 */

undefined4 __fastcall st::fn_0074747F(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(param_1 + 0x48);
}

// 0074748E FUN_0074748e
#line 1 "decomp/ST.exe/functions/0074748E/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0074748E -> EXTERNAL:000000D0 @ 007474C3 */

undefined4 st::fn_0074748E(LPVOID *ppv)

{
  undefined4 *puVar1;
  HRESULT HVar2;
  undefined4 uVar3;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  puVar1 = (undefined4 *)(**(code **)((int)ppv[-4] + 0x20))();
  if (puVar1 == nullptr) {
    uVar3 = 1;
  }
  else {
    st::external_000000CB((LPVOID)0x0);
    HVar2 = st::external_000000D0((IID *)&DAT_007a1b00,(LPUNKNOWN)0x0,1,(IID *)&DAT_007a1b10,&ppv);
    if (-1 < HVar2) {
      st::fn_00749708(puVar1,(int *)ppv,1);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)((int)*ppv + 8))(ppv);
    }
    st::external_000000CC();
    st::external_000000CF();
    uVar3 = 0;
  }
  return uVar3;
}

// 007474F4 FUN_007474f4
#line 1 "decomp/ST.exe/functions/007474F4/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 007474F4 -> EXTERNAL:000000D0 @ 0074752A */

uint st::fn_007474F4(LPVOID *ppv)

{
  undefined4 *puVar1;
  uint uVar2;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  puVar1 = (undefined4 *)(**(code **)((int)ppv[-4] + 0x20))();
  if (puVar1 == nullptr) {
    uVar2 = 1;
  }
  else {
    st::external_000000CB((LPVOID)0x0);
    uVar2 = st::external_000000D0((IID *)&DAT_007a1b00,(LPUNKNOWN)0x0,1,(IID *)&DAT_007a1b10,&ppv);
    if (-1 < (int)uVar2) {
      uVar2 = st::fn_00749708(puVar1,(int *)ppv,0);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)((int)*ppv + 8))(ppv);
    }
    st::external_000000CC();
    st::external_000000CF();
    uVar2 = -(uint)(uVar2 != 0x80070002) & uVar2;
  }
  return uVar2;
}

// 0074756B FUN_0074756b
#line 1 "decomp/ST.exe/functions/0074756B/decomp.c"
undefined4 * __thiscall st::fn_0074756B(void *this,AnonShape_0074756B_58F08DE7 *param_1)

{
  int *piVar1;
  undefined4 uVar2;

  STField<undefined4>(this,4) = 0;
  STField<undefined4>(this,8) = 0;
  STField<AnonShape_0074756B_58F08DE7 *>(this,0xc) = param_1;
  STField<undefined4>(this,0x14) = 1;
  st::fn_0074DE63((undefined4 *)((int)this + 0x18));
  *(VTable_007A1108 **)this = &VTable_007A1108;
  piVar1 = (int *)(STField<int>(this,0xc) + 0xc);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*piVar1 + 4))(piVar1);
  if (param_1 == nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar2 = (**(code **)(*STField<int *>(this,0xc) + 0x14))();
    STField<undefined4>(this,0x10) = uVar2;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar2 = (**(code **)(*STField<int *>(this,0xc) + 0x18))();
    STField<undefined4>(this,8) = uVar2;
  }
  else {
    STField<undefined4>(this,4) = param_1->field_0004;
    STField<undefined4>(this,8) = param_1->field_0008;
    STField<undefined4>(this,0x10) = param_1->field_0010;
    st::fn_0074DFF5((undefined4 *)((int)this + 0x18),&param_1[1].field_0004);
  }
  return this;
}

// 007475E7 FUN_007475e7
#line 1 "decomp/ST.exe/functions/007475E7/decomp.c"
undefined4 * __thiscall st::fn_007475E7(void *this,byte param_1)

{
  st::fn_00747603(this);
  if ((param_1 & 1) != 0) {
    st::fn_0072E2B0(this);
  }
  return this;
}

// 00747603 FUN_00747603
#line 1 "decomp/ST.exe/functions/00747603/decomp.c"
void __fastcall st::fn_00747603(undefined4 *param_1)

{
  *param_1 = &VTable_007A1108;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)(param_1[3] + 0xc) + 8))((int *)(param_1[3] + 0xc));
  st::fn_0074DE7F(param_1 + 6);
  return;
}

// 00747622 FUN_00747622
#line 1 "decomp/ST.exe/functions/00747622/decomp.c"
undefined4 st::fn_00747622(int *param_1,char *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;

  if (param_3 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    iVar2 = 0x10;
    bVar5 = true;
    pcVar3 = param_2;
    pcVar4 = &DAT_007a1b20;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      iVar2 = 0x10;
      bVar5 = true;
      pcVar3 = "";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *param_2 == *pcVar3;
        param_2 = param_2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar5);
      if (!bVar5) {
        return 0x80004002;
      }
    }
    uVar1 = st::fn_0074B8A6(param_1,param_3);
  }
  return uVar1;
}

// 0074766E FUN_0074766e
#line 1 "decomp/ST.exe/functions/0074766E/decomp.c"
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STVTableApplier] Virtual slot 007A1108+0x4

   [STPrototypeApplier] Propagated return.
   Evidence: 0074766E returns return of KERNEL32.DLL::InterlockedIncrement @ 0074767C
   [STAbiConsistencyApplier] unknown_convention_return_revert target=return:-1: return=/undefined1
   Evidence: automation-owned propagated return is deferred until the wrapper calling convention and
   live-in parameter storage are recovered */

void st::fn_0074766E(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_stack_00000004;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  st::external_00000053((LONG *)(in_stack_00000004 + 0x14));
  return;
}

// 0074767F FUN_0074767f
#line 1 "decomp/ST.exe/functions/0074767F/decomp.c"
LONG st::fn_0074767F(int *param_1)

{
  LONG LVar1;

  LVar1 = st::external_00000051(param_1 + 5);
  if ((LVar1 == 0) && (param_1 != nullptr)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x1c))(1);
  }
  return LVar1;
}

// 007476A9 FUN_007476a9
#line 1 "decomp/ST.exe/functions/007476A9/decomp.c"
undefined4 st::fn_007476A9(AnonShape_00747E4E_3F64CF30 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *this;
  undefined4 *puVar3;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    uVar1 = 0;
    iVar2 = st::fn_00747E4E((AnonShape_00747822_A1E67AF6 *)param_1);
    if (iVar2 == 1) {
      *param_2 = 0;
      uVar1 = 0x80040203;
    }
    else {
      this = (void *)st::fn_0072E530(0x30);
      if (this == nullptr) {
        puVar3 = nullptr;
      }
      else {
        puVar3 = st::fn_0074756B(this,(AnonShape_0074756B_58F08DE7 *)param_1->field_000C);
      }
      *param_2 = puVar3;
      if (puVar3 == nullptr) {
        uVar1 = 0x8007000e;
      }
    }
  }
  return uVar1;
}

// 00747704 FUN_00747704
#line 1 "decomp/ST.exe/functions/00747704/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

uint st::fn_00747704(AnonShape_00747822_A1E67AF6 *param_1,uint param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  AnonShape_00747822_A1E67AF6 *pAVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_8;

  pAVar2 = param_1;
  if (param_3 == nullptr) {
    uVar3 = 0x80004003;
  }
  else {
    if (param_4 == nullptr) {
      if (1 < param_2) {
        return 0x80070057;
      }
    }
    else {
      *param_4 = 0;
    }
    local_8 = 0;
    iVar4 = st::fn_00747E4E(param_1);
    if (iVar4 == 1) {
      st::fn_0074784F(param_1);
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (AnonShape_00747822_A1E67AF6 *)(param_1->field_0008 - param_1->field_0004);
    if ((int)param_2 <= (int)param_1) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (AnonShape_00747822_A1E67AF6 *)param_2;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_1 == nullptr) {
      uVar3 = 1;
    }
    else {
      do {
        iVar4 = pAVar2->field_0004;
        if (pAVar2->field_0008 == iVar4) break;
        pAVar2->field_0004 = iVar4 + 1;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar4 = (**(code **)(*pAVar2->field_000C + 0x1c))(iVar4);
        if (iVar4 == 0) {
          return 0x80040203;
        }
        iVar5 = st::fn_0074DEE5(&pAVar2[1].field_0004,iVar4);
        if (iVar5 == 0) {
          piVar1 = (int *)(iVar4 + 0xc);
          *param_3 = (int)piVar1;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*piVar1 + 4))(piVar1);
          local_8 = local_8 + 1;
          param_3 = param_3 + 1;
          st::fn_0074DF72(&pAVar2[1].field_0004,iVar4);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (AnonShape_00747822_A1E67AF6 *)((int)&param_1[-1].field_0010 + 3);
        }
      } while (param_1 != nullptr);
      if (param_4 != nullptr) {
        *param_4 = local_8;
      }
      uVar3 = (uint)(param_2 != local_8);
    }
  }
  return uVar3;
}

// 007477EA FUN_007477ea
#line 1 "decomp/ST.exe/functions/007477EA/decomp.c"
undefined4 st::fn_007477EA(AnonShape_007477EA_440BD1E9 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = st::fn_00747E4E((AnonShape_00747822_A1E67AF6 *)param_1);
  if (iVar1 == 1) {
    uVar2 = 0x80040203;
  }
  else if ((uint)(param_1->field_0008 - param_1->field_0004) < param_2) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    param_1->field_0004 = param_2 + param_1->field_0004;
  }
  return uVar2;
}

// 00747822 FUN_00747822
#line 1 "decomp/ST.exe/functions/00747822/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00747822 returns zeroed full register at 00747849 @ 0074784C */

uint st::fn_00747822(AnonShape_00747822_A1E67AF6 *param_1)

{
  undefined4 uVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar1 = (**(code **)(*param_1->field_000C + 0x14))();
  param_1->field_0010 = uVar1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar1 = (**(code **)(*param_1->field_000C + 0x18))();
  param_1->field_0004 = 0;
  param_1->field_0008 = uVar1;
  st::fn_0074DE91(&param_1[1].field_0004);
  return 0;
}

// 0074784F FUN_0074784f
#line 1 "decomp/ST.exe/functions/0074784F/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

undefined4 st::fn_0074784F(AnonShape_00747822_A1E67AF6 *param_1)

{
  undefined4 uVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar1 = (**(code **)(*param_1->field_000C + 0x14))();
  param_1->field_0010 = uVar1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar1 = (**(code **)(*param_1->field_000C + 0x18))();
  param_1->field_0004 = 0;
  param_1->field_0008 = uVar1;
  return 0;
}

// 00747874 FUN_00747874
#line 1 "decomp/ST.exe/functions/00747874/decomp.c"
undefined4 * __thiscall st::fn_00747874(void *this,AnonShape_00747874_535F3AAD *param_1)

{
  undefined4 uVar1;

  STField<undefined4>(this,4) = 0;
  STField<AnonShape_00747874_535F3AAD *>(this,8) = param_1;
  STField<undefined4>(this,0x10) = 1;
  *(VTable_007A1128 **)this = &VTable_007A1128;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(param_1->field_000C + 4))(&param_1->field_000C);
  if (param_1 == nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar1 = (**(code **)(*STField<int *>(this,8) + 0x10))();
  }
  else {
    STField<undefined4>(this,4) = param_1->field_0004;
    uVar1 = param_1->field_000C;
  }
  STField<undefined4>(this,0xc) = uVar1;
  return this;
}

// 007478BC FUN_007478bc
#line 1 "decomp/ST.exe/functions/007478BC/decomp.c"
undefined4 * __thiscall st::fn_007478BC(void *this,byte param_1)

{
  st::fn_007478D8(this);
  if ((param_1 & 1) != 0) {
    st::fn_0072E2B0(this);
  }
  return this;
}

// 007478D8 FUN_007478d8
#line 1 "decomp/ST.exe/functions/007478D8/decomp.c"
void __fastcall st::fn_007478D8(undefined4 *param_1)

{
  *param_1 = &VTable_007A1128;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)(param_1[2] + 0xc) + 8))((int *)(param_1[2] + 0xc));
  return;
}

// 007478EB FUN_007478eb
#line 1 "decomp/ST.exe/functions/007478EB/decomp.c"
undefined4 st::fn_007478EB(int *param_1,char *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;

  if (param_3 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    iVar2 = 0x10;
    bVar5 = true;
    pcVar3 = param_2;
    pcVar4 = &DAT_007a1b30;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      iVar2 = 0x10;
      bVar5 = true;
      pcVar3 = "";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *param_2 == *pcVar3;
        param_2 = param_2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar5);
      if (!bVar5) {
        return 0x80004002;
      }
    }
    uVar1 = st::fn_0074B8A6(param_1,param_3);
  }
  return uVar1;
}

// 00747937 FUN_00747937
#line 1 "decomp/ST.exe/functions/00747937/decomp.c"
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STVTableApplier] Virtual slot 007A1128+0x4

   [STPrototypeApplier] Propagated return.
   Evidence: 00747937 returns return of KERNEL32.DLL::InterlockedIncrement @ 00747945
   [STAbiConsistencyApplier] unknown_convention_return_revert target=return:-1: return=/undefined1
   Evidence: automation-owned propagated return is deferred until the wrapper calling convention and
   live-in parameter storage are recovered */

void st::fn_00747937(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_stack_00000004;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  st::external_00000053((LONG *)(in_stack_00000004 + 0x10));
  return;
}

// 00747948 FUN_00747948
#line 1 "decomp/ST.exe/functions/00747948/decomp.c"
LONG st::fn_00747948(int *param_1)

{
  LONG LVar1;

  LVar1 = st::external_00000051(param_1 + 4);
  if ((LVar1 == 0) && (param_1 != nullptr)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x1c))(1);
  }
  return LVar1;
}

// 00747972 FUN_00747972
#line 1 "decomp/ST.exe/functions/00747972/decomp.c"
undefined4 st::fn_00747972(AnonShape_00747F3B_C97131D7 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *this;
  undefined4 *puVar3;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    uVar1 = 0;
    iVar2 = st::fn_00747F3B((AnonShape_00747AA5_87CB4B56 *)param_1);
    if (iVar2 == 1) {
      *param_2 = 0;
      uVar1 = 0x80040203;
    }
    else {
      this = (void *)st::fn_0072E530(0x14);
      if (this == nullptr) {
        puVar3 = nullptr;
      }
      else {
        puVar3 = st::fn_00747874(this,(AnonShape_00747874_535F3AAD *)param_1->field_0008);
      }
      *param_2 = puVar3;
      if (puVar3 == nullptr) {
        uVar1 = 0x8007000e;
      }
    }
  }
  return uVar1;
}

// 007479CD FUN_007479cd
#line 1 "decomp/ST.exe/functions/007479CD/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 007479CD -> 00747F3B @ 007479EC */

uint st::fn_007479CD(AnonShape_00747AA5_87CB4B56 *param_1,uint param_2,undefined4 *param_3,int *param_4
                 )

{
  AnonShape_00747AA5_87CB4B56 *pAVar1;
  uint uVar2;
  int iVar3;
  byte *puVar4;
  byte *puVar5;
  undefined4 local_4c [15];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  pAVar1 = param_1;
  if (param_3 == nullptr) {
    uVar2 = 0x80004003;
  }
  else {
    iVar3 = st::fn_00747F3B(param_1);
    if (iVar3 == 1) {
      uVar2 = 0x80040203;
    }
    else {
      if (param_4 == nullptr) {
        if (1 < param_2) {
          return 0x80070057;
        }
      }
      else {
        *param_4 = 0;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = nullptr;
      while (param_2 != 0) {
        st::fn_0074B91D(local_4c);
        iVar3 = pAVar1->field_0004;
        pAVar1->field_0004 = iVar3 + 1;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar3 = (**(code **)(*pAVar1->field_0008 + 0x34))(iVar3,local_4c);
        if (iVar3 != 0) {
LAB_00747a71:
          st::fn_0074B916((int)local_4c);
          break;
        }
        puVar4 = (byte *)(st::external_000000CD(0x48));
        *param_3 = puVar4;
        if (puVar4 == nullptr) goto LAB_00747a71;
        param_3 = param_3 + 1;
        puVar5 = (byte *)(local_4c);
        memmove(puVar4, puVar5, 0x48); /* compiler REP MOVS byte copy */
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_00747AA5_87CB4B56 *)&param_1->field_0x1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = param_2 - 1;
        local_8 = 0;
        local_c = 0;
        local_10 = 0;
        st::fn_0074B916((int)local_4c);
      }
      if (param_4 != nullptr) {
        *param_4 = (int)param_1;
      }
      uVar2 = (uint)(param_2 != 0);
    }
  }
  return uVar2;
}

// 00747AA5 FUN_00747aa5
#line 1 "decomp/ST.exe/functions/00747AA5/decomp.c"
uint st::fn_00747AA5(AnonShape_00747AA5_87CB4B56 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_4c [18];

  iVar1 = st::fn_00747F3B(param_1);
  if (iVar1 == 1) {
    uVar2 = 0x80040203;
  }
  else {
    param_1->field_0004 = param_1->field_0004 + param_2;
    st::fn_0074B91D(local_4c);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1->field_0008 + 0x34))(param_1->field_0004 + -1,local_4c);
    uVar2 = (uint)(iVar1 != 0);
    st::fn_0074B916((int)local_4c);
  }
  return uVar2;
}

// 00747AF8 FUN_00747af8
#line 1 "decomp/ST.exe/functions/00747AF8/decomp.c"
undefined4 st::fn_00747AF8(AnonShape_00747AF8_C78FFF68 *param_1)

{
  undefined4 uVar1;

  param_1->field_0004 = 0;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar1 = (**(code **)(*param_1->field_0008 + 0x10))();
  param_1->field_000C = uVar1;
  return 0;
}

// 00747B12 FUN_00747b12
#line 1 "decomp/ST.exe/functions/00747B12/decomp.c"
void * __thiscall
st::fn_00747B12(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            short *param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;

  st::fn_0074B7B8(this,param_1,0);
  STField<undefined4>(this,0x14) = 0;
  STField<undefined4>(this,0x18) = 0;
  st::fn_0074B91D((undefined4 *)((int)this + 0x1c));
  STField<undefined4>(this,0x6c) = 0;
  STField<undefined4>(this,100) = param_6;
  STField<undefined4>(this,0x68) = param_3;
  STField<undefined4>(this,0x70) = param_2;
  STField<undefined4>(this,0x74) = 0;
  STField<undefined4>(this,0x78) = 1;
  STField<undefined4>(this,0x80) = 0;
  STField<undefined4>(this,0x84) = 0;
  STField<undefined4>(this,0x88) = 0xffffffff;
  STField<undefined4>(this,0x8c) = 0x7fffffff;
  STField<undefined8>(this,0x90) = 0x3ff0000000000000;
  if (param_5 != nullptr) {
    iVar1 = st::fn_0074D664(param_5);
    uVar4 = (iVar1 + 1U) * 2;
    puVar2 = (undefined4 *)st::fn_0072E530(uVar4);
    STField<undefined4 *>(this,0x14) = puVar2;
    if (puVar2 != nullptr) {
      for (uVar3 = (iVar1 + 1U & 0x7fffffff) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *(undefined4 *)param_5;
        param_5 = param_5 + 2;
        puVar2 = puVar2 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)puVar2 = (char)*param_5;
        param_5 = (short *)((int)param_5 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
    }
  }
  return this;
}

// 00747BB4 FUN_00747bb4
#line 1 "decomp/ST.exe/functions/00747BB4/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall st::fn_00747BB4(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(HoloTy **)(param_1 + 0x14) != nullptr) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_0072E2B0(*(HoloTy **)(param_1 + 0x14));
  }
  st::fn_0074B916(param_1 + 0x1c);
  st::fn_0074B777();
  return;
}

// 00747BDF FUN_00747bdf
#line 1 "decomp/ST.exe/functions/00747BDF/decomp.c"
void st::fn_00747BDF(int *param_1,char *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;

  iVar2 = 0x10;
  bVar5 = true;
  pcVar3 = param_2;
  pcVar4 = &DAT_007a1b50;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    piVar1 = param_1 + 3;
  }
  else {
    iVar2 = 0x10;
    bVar5 = true;
    pcVar3 = param_2;
    pcVar4 = &DAT_007a1b40;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      st::fn_0074B810(param_1,param_2,param_3);
      return;
    }
    piVar1 = param_1 + 4;
  }
  st::fn_0074B8A6((int *)(-(uint)(param_1 != nullptr) & (uint)piVar1),param_3);
  return;
}

// 00747C3D FUN_00747c3d
#line 1 "decomp/ST.exe/functions/00747C3D/decomp.c"
/* [STVTableApplier] Virtual slot 0079DCBC+0x4

   [STVTableApplier] Virtual slot 0079DED8+0x4

   [STVTableApplier] Virtual slot 007A1510+0x4

   [STVTableApplier] Virtual slot 007A17C8+0x4

   [STVTableApplier] Virtual slot 007A1868+0x4

   [STVTableApplier] Virtual slot 007A1950+0x4

   [STVTableApplier] Virtual slot 007A19F0+0x4 */

void st::fn_00747C3D(int param_1)

{
  int *piVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = (int *)(*(int *)(param_1 + 0x70) + 0xc);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*piVar1 + 4))(piVar1);
  return;
}

// 00747C50 FUN_00747c50
#line 1 "decomp/ST.exe/functions/00747C50/decomp.c"
/* [STVTableApplier] Virtual slot 0079DCBC+0x8

   [STVTableApplier] Virtual slot 0079DED8+0x8

   [STVTableApplier] Virtual slot 007A1510+0x8

   [STVTableApplier] Virtual slot 007A17C8+0x8

   [STVTableApplier] Virtual slot 007A1868+0x8

   [STVTableApplier] Virtual slot 007A1950+0x8

   [STVTableApplier] Virtual slot 007A19F0+0x8 */

void st::fn_00747C50(int param_1)

{
  int *piVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = (int *)(*(int *)(param_1 + 0x70) + 0xc);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}

// 00747C63 FUN_00747c63
#line 1 "decomp/ST.exe/functions/00747C63/decomp.c"
int st::fn_00747C63(AnonShape_00747C63_5B932397 *param_1,int *param_2,char *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;

  if (param_2 == nullptr) {
    iVar1 = -0x7fffbffd;
  }
  else {
    lpCriticalSection = param_1->field_005C;
    st::external_00000018(lpCriticalSection);
    if (param_1->field_000C == 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(param_1->field_0064 + 0x14) == 0) {
        iVar1 = st::fn_00747E65(&param_1[-1].field_005C,param_2,param_3);
        if (iVar1 < 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)param_1[-1].field_005C[1].SpinCount)();
          st::external_00000019(lpCriticalSection);
        }
        else {
          st::external_00000019(lpCriticalSection);
          iVar1 = 0;
        }
      }
      else {
        st::external_00000019(lpCriticalSection);
        iVar1 = -0x7ffbfddc;
      }
    }
    else {
      st::external_00000019(lpCriticalSection);
      iVar1 = -0x7ffbfdfc;
    }
  }
  return iVar1;
}

// 00747CE5 FUN_00747ce5
#line 1 "decomp/ST.exe/functions/00747CE5/decomp.c"
int __thiscall st::fn_00747CE5(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_EBX;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_ESI;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (**(code **)(*(int *)this + 0x28))(param_1);
  if (iVar2 < 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0x2c))();
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)(*(int *)this + 0x20))(param_1);
    if (iVar2 == 0) {
      STField<int *>(this,0x18) = param_1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1 + 4))(param_1);
      /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x24))(unaff_EBX);
      /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*param_1 + 0x10))
                        (param_1,-(uint)(this != nullptr) & (int)this + 0xcU,unaff_ESI);
      if (-1 < iVar2) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar2 = (**(code **)(*(int *)this + 0x30))(param_1);
        if (-1 < iVar2) {
          return iVar2;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*param_1 + 0x14))(param_1);
      }
    }
    else if (((-1 < iVar2) || (iVar2 == -0x7fffbffb)) || (iVar2 == -0x7ff8ffa9)) {
      iVar2 = -0x7ffbfdd6;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0x2c))();
    piVar1 = STField<int *>(this,0x18);
    if (piVar1 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 8))(piVar1);
      STField<undefined4>(this,0x18) = 0;
    }
  }
  return iVar2;
}

// 00747D92 FUN_00747d92
#line 1 "decomp/ST.exe/functions/00747D92/decomp.c"
int __thiscall st::fn_00747D92(void *this,int *param_1,char *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *local_8;

  piVar1 = param_3;
  local_8 = this;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (**(code **)(*param_3 + 0x14))(param_3);
  if (-1 < iVar2) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = nullptr;
    local_8 = nullptr;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,1,&param_3,&local_8);
    iVar2 = 0;
    while (iVar3 == 0) {
      if ((param_2 == nullptr) ||
         (iVar3 = st::fn_0074BBC6(param_3,(AnonShape_0074BBC6_71B34D24 *)param_2), iVar3 != 0)) {
        iVar3 = st::fn_00747CE5(this,param_1);
        if (((iVar3 < 0) && (((-1 < iVar2 && (iVar3 != -0x7fffbffb)) && (iVar3 != -0x7ff8ffa9)))) &&
           (iVar3 != -0x7ffbfdd6)) {
          iVar2 = iVar3;
        }
      }
      else {
        iVar3 = -0x7ffbfdf9;
      }
      st::fn_0074BC50(param_3);
      if (iVar3 == 0) {
        return 0;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,1,&param_3,&local_8);
    }
    if (iVar2 == 0) {
      iVar2 = -0x7ffbfdf9;
    }
  }
  return iVar2;
}

// 00747E4E FUN_00747e4e
#line 1 "decomp/ST.exe/functions/00747E4E/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (3), none consume AL/AX, and every RET path defines full EAX; sites=007476A9 @ 007476C3
   -> CMP CMP EAX,0x1 | 00747704 @ 00747731 -> CMP CMP EAX,0x1 | 007477EA @ 007477F1 -> CMP CMP
   EAX,0x1

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00747704 -> 00747E4E @ 00747731 */

int __fastcall st::fn_00747E4E(AnonShape_00747822_A1E67AF6 *param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*param_1->field_000C + 0x14))();
  return (uint)(iVar1 != param_1->field_0010);
}

// 00747E65 FUN_00747e65
#line 1 "decomp/ST.exe/functions/00747E65/decomp.c"
int __thiscall st::fn_00747E65(void *this,int *param_1,char *param_2)

{
  int iVar1;
  int local_c;
  int *local_8;

  local_8 = nullptr;
  if ((param_2 != nullptr) && (iVar1 = st::fn_0074BB9A(param_2), iVar1 == 0)) {
    iVar1 = st::fn_00747CE5(this,param_1);
    return iVar1;
  }
  local_c = -0x7ffbfdf9;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,&local_8);
  if (-1 < iVar1) {
    iVar1 = st::fn_00747D92(this,param_1,param_2,local_8);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*local_8 + 8))(local_8);
    if (-1 < iVar1) {
      return 0;
    }
    if (((iVar1 != -0x7fffbffb) && (iVar1 != -0x7ff8ffa9)) && (iVar1 != -0x7ffbfdd6)) {
      local_c = iVar1;
    }
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(STField<int>(this,0xc) + 0x30))((int)this + 0xc,&local_8);
  if (iVar1 < 0) {
    return local_c;
  }
  iVar1 = st::fn_00747D92(this,param_1,param_2,local_8);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*local_8 + 8))(local_8);
  if (-1 < iVar1) {
    return 0;
  }
  if (iVar1 == -0x7fffbffb) {
    return local_c;
  }
  if (iVar1 == -0x7ff8ffa9) {
    return local_c;
  }
  if (iVar1 != -0x7ffbfdd6) {
    return iVar1;
  }
  return local_c;
}

// 00747F3B FUN_00747f3b
#line 1 "decomp/ST.exe/functions/00747F3B/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (3), none consume AL/AX, and every RET path defines full EAX; sites=00747972 @ 0074798C
   -> CMP CMP EAX,0x1 | 007479CD @ 007479EC -> CMP CMP EAX,0x1 | 00747AA5 @ 00747AB1 -> CMP CMP
   EAX,0x1

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 007479CD -> 00747F3B @ 007479EC; FUN_007479cd parameter param_1 | 00747AA5 -> 00747F3B
   @ 00747AB1; FUN_00747aa5 parameter param_1 */

int __fastcall st::fn_00747F3B(AnonShape_00747AA5_87CB4B56 *param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*param_1->field_0008 + 0x10))();
  return (uint)(iVar1 != *(int *)(param_1 + 1));
}

// 00747F52 FUN_00747f52
#line 1 "decomp/ST.exe/functions/00747F52/decomp.c"
undefined4 st::fn_00747F52(void)

{
  return 0;
}

// 00747F57 FUN_00747f57
#line 1 "decomp/ST.exe/functions/00747F57/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00747F57 returns zeroed full register at 00747F63 @ 00747F65 */

uint __thiscall st::fn_00747F57(void *this,undefined4 *param_1)

{
  st::fn_0074B98A((void *)((int)this + 0x1c),param_1);
  return 0;
}

// 00747F68 FUN_00747f68
#line 1 "decomp/ST.exe/functions/00747F68/decomp.c"
undefined4 __thiscall st::fn_00747F68(void *this,int *param_1)

{
  undefined4 uVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_1 + 0x24))(param_1,&param_1);
  if (param_1 == STField<int *>(this,100)) {
    uVar1 = 0x80040208;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 00747F91 FUN_00747f91
#line 1 "decomp/ST.exe/functions/00747F91/decomp.c"
undefined4 st::fn_00747F91(void)

{
  return 0;
}

// 00747F94 FUN_00747f94
#line 1 "decomp/ST.exe/functions/00747F94/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00747F94 -> EXTERNAL:00000019 @ 00748046 | 00747F94 -> EXTERNAL:00000019 @ 00748089 |
   00747F94 -> EXTERNAL:00000019 @ 00748096 */

int * st::fn_00747F94(LPCRITICAL_SECTION lpCriticalSection,int *param_2,int param_3)

{
  HANDLE *ppvVar1;
  LPCRITICAL_SECTION lpCriticalSection_00;
  int *piVar2;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_2 == nullptr) || (param_3 == 0)) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = (int *)0x80004003;
  }
  else {
    lpCriticalSection_00 = (LPCRITICAL_SECTION)lpCriticalSection[3].SpinCount;
    st::external_00000018(lpCriticalSection_00);
    if (lpCriticalSection->OwningThread == (HANDLE)0x0) {
      if (*(int *)(lpCriticalSection[4].LockCount + 0x14) == 0) {
        ppvVar1 = &lpCriticalSection[-1].OwningThread;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        piVar2 = (int *)(**(code **)((int)lpCriticalSection[-1].OwningThread + 0x28))(param_2);
        if ((int)piVar2 < 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)((int)*ppvVar1 + 0x2c))();
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = piVar2;
        }
        else {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          piVar2 = (int *)(**(code **)((int)*ppvVar1 + 0x20))(param_3);
          if (piVar2 == nullptr) {
            lpCriticalSection->OwningThread = param_2;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*param_2 + 4))(param_2);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)((int)*ppvVar1 + 0x24))(param_3);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            piVar2 = (int *)(**(code **)((int)*ppvVar1 + 0x30))(param_2);
            if ((int)piVar2 < 0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)(*(int *)lpCriticalSection->OwningThread + 8))
                        (lpCriticalSection->OwningThread);
              lpCriticalSection->OwningThread = (HANDLE)0x0;
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)((int)*ppvVar1 + 0x2c))();
              st::external_00000019(lpCriticalSection_00);
              return piVar2;
            }
            st::external_00000019(lpCriticalSection_00);
            return nullptr;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)((int)*ppvVar1 + 0x2c))();
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          if (((-1 < (int)piVar2) || (piVar2 == (int *)0x80004005)) ||
             (param_2 = piVar2, piVar2 == (int *)0x80070057)) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = (int *)0x8004022a;
          }
        }
        st::external_00000019(lpCriticalSection_00);
      }
      else {
        st::external_00000019(lpCriticalSection_00);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = (int *)0x80040224;
      }
    }
    else {
      st::external_00000019(lpCriticalSection_00);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = (int *)0x80040204;
    }
  }
  return param_2;
}

// 007480A5 FUN_007480a5
#line 1 "decomp/ST.exe/functions/007480A5/decomp.c"
undefined4 st::fn_007480A5(AnonShape_007480A5_22FE1AF9 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;

  lpCriticalSection = param_1->field_005C;
  st::external_00000018(lpCriticalSection);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1->field_0064 + 0x14) == 0) {
    if (param_1->field_000C == 0) {
      st::external_00000019(lpCriticalSection);
      uVar1 = 1;
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)param_1[-1].field_005C[1].SpinCount)();
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)param_1->field_000C + 8))((int *)param_1->field_000C);
      param_1->field_000C = 0;
      st::external_00000019(lpCriticalSection);
      uVar1 = 0;
    }
  }
  else {
    st::external_00000019(lpCriticalSection);
    uVar1 = 0x80040224;
  }
  return uVar1;
}

// 00748102 FUN_00748102
#line 1 "decomp/ST.exe/functions/00748102/decomp.c"
/* [STVTableApplier] Virtual slot 0079DC74+0x18

   [STVTableApplier] Virtual slot 0079DE90+0x18

   [STVTableApplier] Virtual slot 007A14C8+0x18

   [STVTableApplier] Virtual slot 007A1780+0x18

   [STVTableApplier] Virtual slot 007A1820+0x18

   [STVTableApplier] Virtual slot 007A1908+0x18

   [STVTableApplier] Virtual slot 007A19A8+0x18 */

undefined4 st::fn_00748102(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;

  if (param_2 == nullptr) {
    uVar2 = 0x80004003;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    piVar1 = *(int **)(param_1 + 0xc);
    *param_2 = (int)piVar1;
    if (piVar1 == nullptr) {
      uVar2 = 0x80040209;
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 4))(piVar1);
      uVar2 = 0;
    }
  }
  return uVar2;
}

// 00748130 FUN_00748130
#line 1 "decomp/ST.exe/functions/00748130/decomp.c"
/* [STVTableApplier] Virtual slot 0079DC74+0x1C

   [STVTableApplier] Virtual slot 0079DE90+0x1C

   [STVTableApplier] Virtual slot 007A14C8+0x1C

   [STVTableApplier] Virtual slot 007A1780+0x1C

   [STVTableApplier] Virtual slot 007A1820+0x1C

   [STVTableApplier] Virtual slot 007A1908+0x1C

   [STVTableApplier] Virtual slot 007A19A8+0x1C */

undefined4 st::fn_00748130(int param_1,AnonShape_0074BC89_92881050 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x5c);
    st::external_00000018(lpCriticalSection);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(param_1 + 0xc) == 0) {
      st::fn_0074BB83((undefined4 *)param_2);
      st::external_00000019(lpCriticalSection);
      uVar1 = 0x80040209;
    }
    else {
      st::fn_0074BC89(param_2,(undefined4 *)(param_1 + 0x10));
      st::external_00000019(lpCriticalSection);
      uVar1 = 0;
    }
  }
  return uVar1;
}

// 00748186 FUN_00748186
#line 1 "decomp/ST.exe/functions/00748186/decomp.c"
undefined4 st::fn_00748186(AnonShape_00748186_DDF6596C *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    if (param_1->field_0064 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1->field_0064 + 0xc;
    }
    *param_2 = iVar2;
    iVar2 = param_1->field_0064;
    if (iVar2 != 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)(iVar2 + 0xc) + 4))(iVar2 + 0xc);
    }
    if (param_1->field_0008 == nullptr) {
      *(undefined2 *)(param_2 + 2) = 0;
    }
    else {
      st::fn_0074D580((short *)(param_2 + 2),param_1->field_0008);
    }
    param_2[1] = param_1->field_0058;
    uVar1 = 0;
  }
  return uVar1;
}

// 007481E1 FUN_007481e1
#line 1 "decomp/ST.exe/functions/007481E1/decomp.c"
/* [STVTableApplier] Virtual slot 0079DC74+0x24

   [STVTableApplier] Virtual slot 0079DE90+0x24

   [STVTableApplier] Virtual slot 007A14C8+0x24

   [STVTableApplier] Virtual slot 007A1780+0x24

   [STVTableApplier] Virtual slot 007A1820+0x24

   [STVTableApplier] Virtual slot 007A1908+0x24

   [STVTableApplier] Virtual slot 007A19A8+0x24 */

undefined4 st::fn_007481E1(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x58);
    uVar1 = 0;
  }
  return uVar1;
}

// 00748211 FUN_00748211
#line 1 "decomp/ST.exe/functions/00748211/decomp.c"
/* [STVTableApplier] Virtual slot 0079DC74+0x2C

   [STVTableApplier] Virtual slot 0079DE90+0x2C

   [STVTableApplier] Virtual slot 007A14C8+0x2C

   [STVTableApplier] Virtual slot 007A1780+0x2C

   [STVTableApplier] Virtual slot 007A1820+0x2C

   [STVTableApplier] Virtual slot 007A1908+0x2C

   [STVTableApplier] Virtual slot 007A19A8+0x2C */

int st::fn_00748211(int param_1,int param_2)

{
  int iVar1;

  if (param_2 == 0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*(int *)(param_1 + -0xc) + 0x20))(param_2);
    if (iVar1 < 0) {
      iVar1 = 1;
    }
  }
  return iVar1;
}

// 0074823A FUN_0074823a
#line 1 "decomp/ST.exe/functions/0074823A/decomp.c"
int st::fn_0074823A(int param_1,undefined4 *param_2)

{
  int iVar1;
  void *this;
  undefined4 *puVar2;

  if (param_2 == nullptr) {
    iVar1 = -0x7fffbffd;
  }
  else {
    this = (void *)st::fn_0072E530(0x14);
    if (this == nullptr) {
      puVar2 = nullptr;
    }
    else {
      puVar2 = st::fn_00747874(this,(AnonShape_00747874_535F3AAD *)(param_1 + -0xc));
    }
    *param_2 = puVar2;
    iVar1 = (-(uint)(puVar2 != nullptr) & 0x7ff8fff2) + 0x8007000e;
  }
  return iVar1;
}

// 0074827F FUN_0074827f
#line 1 "decomp/ST.exe/functions/0074827F/decomp.c"
/* [STVTableApplier] Virtual slot 0079DED8+0x34

   [STVTableApplier] Virtual slot 007A1510+0x34

   [STVTableApplier] Virtual slot 007A17C8+0x34

   [STVTableApplier] Virtual slot 007A1950+0x34 */

undefined4 st::fn_0074827F(void)

{
  return 0x8000ffff;
}

// 00748287 FUN_00748287
#line 1 "decomp/ST.exe/functions/00748287/decomp.c"
/* [STVTableApplier] Virtual slot 0079DCBC+0x10

   [STVTableApplier] Virtual slot 0079DED8+0x10

   [STVTableApplier] Virtual slot 007A1510+0x10

   [STVTableApplier] Virtual slot 007A17C8+0x10

   [STVTableApplier] Virtual slot 007A1868+0x10

   [STVTableApplier] Virtual slot 007A1950+0x10

   [STVTableApplier] Virtual slot 007A19F0+0x10 */

undefined4 __fastcall st::fn_00748287(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(param_1 + 0x78);
}

// 00748296 FUN_00748296
#line 1 "decomp/ST.exe/functions/00748296/decomp.c"
/* [STVTableApplier] Virtual slot 0079DED8+0x14

   [STVTableApplier] Virtual slot 007A17C8+0x14

   [STVTableApplier] Virtual slot 007A1950+0x14 */

undefined4 st::fn_00748296(void)

{
  return 0;
}

// 00748299 FUN_00748299
#line 1 "decomp/ST.exe/functions/00748299/decomp.c"
/* [STVTableApplier] Virtual slot 0079DCBC+0x1C

   [STVTableApplier] Virtual slot 0079DED8+0x1C

   [STVTableApplier] Virtual slot 007A1510+0x1C

   [STVTableApplier] Virtual slot 007A17C8+0x1C

   [STVTableApplier] Virtual slot 007A1868+0x1C

   [STVTableApplier] Virtual slot 007A1950+0x1C

   [STVTableApplier] Virtual slot 007A19F0+0x1C */

undefined4 st::fn_00748299(void)

{
  return 0;
}

// 007482A5 FUN_007482a5
#line 1 "decomp/ST.exe/functions/007482A5/decomp.c"
undefined4 st::fn_007482A5(void)

{
  return 1;
}

// 007482AB FUN_007482ab
#line 1 "decomp/ST.exe/functions/007482AB/decomp.c"
undefined4 st::fn_007482AB(int param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x58);
  st::external_00000018(lpCriticalSection);
  *(undefined4 *)(param_1 + 100) = param_2;
  st::external_00000019(lpCriticalSection);
  return 0;
}

// 007482D8 FUN_007482d8
#line 1 "decomp/ST.exe/functions/007482D8/decomp.c"
/* [STAbiConsistencyApplier] x87_double_parameter_slots target=function:-1: prototype=undefined4
   __stdcall FUN_007482d8(AnonShape_007482D8_1685BA8E * param_1, undefined4 param_2, undefined4
   param_3, undefined4 param_4, undefined4 param_5, double param_6) Evidence: x87 double-width
   accesses or exact split stores into an independently typed double field prove physical EBP slot
   boundaries; merged_slots={5=1}; sites=007482E1 FLD double ptr [EBP + 0x1c]
   [STAbiConsistencyApplier] x87_stack_storage_migration target=function:-1: prototype=undefined4
   __stdcall FUN_007482d8(AnonShape_007482D8_1685BA8E * param_1, undefined4 param_2, undefined4
   param_3, undefined4 param_4, undefined4 param_5, double param_6) Evidence: retire script-owned
   dynamic x87 storage; observed_ebp_offsets=[28]; custom_storage=[Stack[0x4]:4, Stack[0x8]:4,
   Stack[0xc]:4, Stack[0x10]:4, Stack[0x14]:4, Stack[0x18]:8] */

undefined4
st::fn_007482D8(AnonShape_007482D8_1685BA8E *param_1,undefined4 param_2,undefined4 param_3,
            undefined4 param_4,undefined4 param_5,double param_6)

{
  param_1->field_0074 = param_2;
  param_1->field_0078 = param_3;
  param_1->field_007C = param_4;
  param_1->field_0080 = param_5;
  param_1->field_0084 = param_6;
  return 0;
}

// 00748308 CBaseOutputPin
#line 1 "decomp/ST.exe/functions/00748308/decomp.c"
/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall CBaseOutputPin::CBaseOutputPin(char const *,class CBaseFilter *,class
   CCritSec *,long *,unsigned short const *)
    public: __thiscall CBaseOutputPin::CBaseOutputPin(unsigned short const *,class CBaseFilter
   *,class CCritSec *,long *,unsigned short const *)

   Library: Visual Studio 2012 Release */

void * __thiscall
st::fn_00748308(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
              undefined4 param_4,short *param_5)

{
  st::fn_00747B12(this,param_1,param_2,param_3,param_4,param_5,1);
  STField<undefined4>(this,0x98) = 0;
  STField<undefined4>(this,0x9c) = 0;
  return this;
}

// 00748339 FUN_00748339
#line 1 "decomp/ST.exe/functions/00748339/decomp.c"
void __fastcall st::fn_00748339(int *param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_1 + 0x38))(param_1[0x27],param_1 + 0x26);
  return;
}

// 0074834E FUN_0074834e
#line 1 "decomp/ST.exe/functions/0074834E/decomp.c"
int __thiscall st::fn_0074834E(void *this,int *param_1)

{
  int iVar1;

  iVar1 = st::fn_00747F68(this,param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)*param_1)(param_1,&DAT_007a1b60,(int)this + 0x9c);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

// 0074837C FUN_0074837c
#line 1 "decomp/ST.exe/functions/0074837C/decomp.c"
undefined4 __fastcall st::fn_0074837C(AnonShape_0074837C_3396F25D *param_1)

{
  int *piVar1;

  piVar1 = (int *)param_1->field_0098;
  if (piVar1 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1->field_0098 = 0;
  }
  piVar1 = (int *)param_1->field_009C;
  if (piVar1 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1->field_009C = 0;
  }
  return 0;
}

// 007483B7 FUN_007483b7
#line 1 "decomp/ST.exe/functions/007483B7/decomp.c"

/* [STVTableApplier] Virtual slot 007A1868+0x48

   [STVTableApplier] Virtual slot 007A19F0+0x48 */

void st::fn_007483B7(LPVOID *param_1)

{
  st::fn_00746B90(param_1);
  return;
}

// 007483C3 FUN_007483c3
#line 1 "decomp/ST.exe/functions/007483C3/decomp.c"
int __thiscall st::fn_007483C3(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  undefined4 uStack_8;

  piVar1 = param_2;
  local_14 = 0;
  uStack_10 = 0;
  *param_2 = 0;
  local_c = 0;
  uStack_8 = 0;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_1 + 0x14))(param_1,&local_14);
  if (local_c == 0) {
    local_c = 1;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,param_2);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  if (((iVar2 < 0) || (iVar2 = (**(code **)(*(int *)this + 0x3c))(*param_2,&local_14), iVar2 < 0))
     || (iVar2 = (**(code **)(*param_1 + 0x10))(param_1,*param_2,0), iVar2 < 0)) {
    piVar3 = (int *)*param_2;
    if (piVar3 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar3 + 8))(piVar3);
      *param_2 = 0;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    piVar3 = (int *)(**(code **)(*(int *)this + 0x48))(param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if ((((int)piVar3 < 0) ||
        (piVar3 = (int *)(**(code **)(*(int *)this + 0x3c))(*param_2,&local_14), (int)piVar3 < 0))
       || (piVar3 = (int *)(**(code **)(*param_1 + 0x10))(param_1,*param_2,0), (int)piVar3 < 0)) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = piVar3;
      piVar3 = (int *)*piVar1;
      if (piVar3 == nullptr) {
        return (int)param_2;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar3 + 8))(piVar3);
      *piVar1 = 0;
      return (int)param_2;
    }
  }
  return 0;
}

// 00748481 FUN_00748481
#line 1 "decomp/ST.exe/functions/00748481/decomp.c"
/* [STVTableApplier] Virtual slot 007A1868+0x40

   [STVTableApplier] Virtual slot 007A19F0+0x40 */

undefined4 __thiscall
st::fn_00748481(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int *piVar1;
  undefined4 uVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x98);
  if (piVar1 == nullptr) {
    uVar2 = 0x80004002;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1,param_2,param_3,param_4,param_5);
  }
  return uVar2;
}

// 007484AB FUN_007484ab
#line 1 "decomp/ST.exe/functions/007484AB/decomp.c"
/* [STVTableApplier] Virtual slot 007A1868+0x44

   [STVTableApplier] Virtual slot 007A19F0+0x44 */

undefined4 __thiscall st::fn_007484AB(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == nullptr) {
    uVar2 = 0x80040209;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,param_2);
  }
  return uVar2;
}

// 007484C9 FUN_007484c9
#line 1 "decomp/ST.exe/functions/007484C9/decomp.c"
/* [STVTableApplier] Virtual slot 007A1868+0x4C

   [STVTableApplier] Virtual slot 007A19F0+0x4C */

undefined4 __fastcall st::fn_007484C9(int param_1)

{
  int *piVar1;
  undefined4 uVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 == nullptr) {
    return 0x80040209;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar2 = (**(code **)(*piVar1 + 0x38))(piVar1);
  return uVar2;
}

// 007484DD FUN_007484dd
#line 1 "decomp/ST.exe/functions/007484DD/decomp.c"
/* [STVTableApplier] Virtual slot 007A1868+0x14

   [STVTableApplier] Virtual slot 007A19F0+0x14 */

undefined4 __fastcall st::fn_007484DD(int param_1)

{
  int *piVar1;
  undefined4 uVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x98);
  if (piVar1 == nullptr) {
    return 0x8004020a;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
  return uVar2;
}

// 007484F4 FUN_007484f4
#line 1 "decomp/ST.exe/functions/007484F4/decomp.c"
/* [STVTableApplier] Virtual slot 007A1868+0x18

   [STVTableApplier] Virtual slot 007A19F0+0x18 */

undefined4 __fastcall st::fn_007484F4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;

  *(undefined4 *)(param_1 + 0x6c) = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x98);
  if (piVar1 == nullptr) {
    return 0x8004020a;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  return uVar2;
}

// 0074850F FUN_0074850f
#line 1 "decomp/ST.exe/functions/0074850F/decomp.c"
/* [STVTableApplier] Virtual slot 007A1820+0x38

   [STVTableApplier] Virtual slot 007A19A8+0x38 */

undefined4 st::fn_0074850F(void)

{
  return 0x8000ffff;
}

// 00748517 FUN_00748517
#line 1 "decomp/ST.exe/functions/00748517/decomp.c"
/* [STVTableApplier] Virtual slot 007A1820+0x3C

   [STVTableApplier] Virtual slot 007A19A8+0x3C */

undefined4 st::fn_00748517(void)

{
  return 0x8000ffff;
}

// 0074851F FUN_0074851f
#line 1 "decomp/ST.exe/functions/0074851F/decomp.c"
/* [STVTableApplier] Virtual slot 007A1820+0x40

   [STVTableApplier] Virtual slot 007A19A8+0x40 */

undefined4 st::fn_0074851F(void)

{
  return 0x8000ffff;
}

// 00748527 FUN_00748527
#line 1 "decomp/ST.exe/functions/00748527/decomp.c"
/* [STVTableApplier] Virtual slot 007A1868+0x50

   [STVTableApplier] Virtual slot 007A19F0+0x50 */

undefined4 __fastcall st::fn_00748527(int param_1)

{
  int *piVar1;
  undefined4 uVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 == nullptr) {
    return 0x80040209;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1);
  return uVar2;
}

// 0074853B FUN_0074853b
#line 1 "decomp/ST.exe/functions/0074853B/decomp.c"
/* [STVTableApplier] Virtual slot 007A1868+0x54

   [STVTableApplier] Virtual slot 007A19F0+0x54 */

undefined4 __fastcall st::fn_0074853B(int param_1)

{
  int *piVar1;
  undefined4 uVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 == nullptr) {
    return 0x80040209;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar2 = (**(code **)(*piVar1 + 0x40))(piVar1);
  return uVar2;
}

// 0074854F FUN_0074854f
#line 1 "decomp/ST.exe/functions/0074854F/decomp.c"
/* [STAbiConsistencyApplier] x87_double_parameter_slots target=function:-1: prototype=undefined4
   __thiscall FUN_0074854f(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3,
   undefined4 param_4, double param_5) Evidence: x87 double-width accesses or exact split stores
   into an independently typed double field prove physical EBP slot boundaries; merged_slots={4=1};
   sites=00748562 FLD double ptr [EBP + 0x18] */

undefined4 __thiscall
st::fn_0074854F(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            double param_5)

{
  int *piVar1;
  undefined4 uVar2;

  piVar1 = STField<int *>(this,0x18);
  if (piVar1 == nullptr) {
    uVar2 = 0x80040209;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar2 = (**(code **)(*piVar1 + 0x44))(piVar1,param_1,param_2,param_3,param_4,param_5);
  }
  return uVar2;
}

// 0074857E FUN_0074857e
#line 1 "decomp/ST.exe/functions/0074857E/decomp.c"
void * __thiscall
st::fn_0074857E(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            short *param_5)

{

  st::fn_00747B12(this,param_1,param_2,param_3,param_4,param_5,0);
  STField<undefined4>(this,0x9c) = 0;
  STField<undefined1>(this,0xa0) = 0;
  STField<undefined1>(this,0xa1) = 0;
  memset((void *)((int)this + 0xa8), 0, 0x30); /* compiler bulk-zero initialization */
  return this;
}

// 007485C5 FUN_007485c5
#line 1 "decomp/ST.exe/functions/007485C5/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall st::fn_007485C5(int param_1)

{
  int *piVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  st::fn_00747BB4(param_1);
  return;
}

// 007485EC FUN_007485ec
#line 1 "decomp/ST.exe/functions/007485EC/decomp.c"
void st::fn_007485EC(int *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;

  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = param_2;
  pcVar3 = &DAT_007a1b60;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    st::fn_0074B8A6((int *)(-(uint)(param_1 != nullptr) & (uint)(param_1 + 0x26)),param_3);
  }
  else {
    st::fn_00747BDF(param_1,param_2,param_3);
  }
  return;
}

// 0074862E FUN_0074862e
#line 1 "decomp/ST.exe/functions/0074862E/decomp.c"
int st::fn_0074862E(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  LPVOID *ppvVar2;

  if (param_2 == nullptr) {
    iVar1 = -0x7fffbffd;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + -0x30);
    st::external_00000018(lpCriticalSection);
    ppvVar2 = (LPVOID *)(param_1 + 4);
    if ((*ppvVar2 == (LPVOID)0x0) && (iVar1 = st::fn_00746B90(ppvVar2), iVar1 < 0)) {
      st::external_00000019(lpCriticalSection);
      return iVar1;
    }
    *param_2 = *ppvVar2;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)*ppvVar2 + 4))(*ppvVar2);
    st::external_00000019(lpCriticalSection);
    iVar1 = 0;
  }
  return iVar1;
}

// 0074868B FUN_0074868b
#line 1 "decomp/ST.exe/functions/0074868B/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0074868B -> EXTERNAL:00000019 @ 007486CE

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=1, reads=1, sites=007486C5 MOV AL,byte ptr
   [EBP + 0x10] */

undefined4
st::fn_0074868B(AnonShape_0074868B_7E9383CB *param_1,LPCRITICAL_SECTION lpCriticalSection,byte param_3)

{
  LPCRITICAL_SECTION lpCriticalSection_00;
  int *piVar1;
  undefined4 uVar2;

  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    lpCriticalSection_00 = *(LPCRITICAL_SECTION *)(param_1 + -4);
    st::external_00000018(lpCriticalSection_00);
    piVar1 = (int *)param_1->field_0004;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)lpCriticalSection->DebugInfo->CriticalSection)(lpCriticalSection);
    param_1->field_0004 = lpCriticalSection;
    if (piVar1 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    param_1->field_0008 = param_3;
    st::external_00000019(lpCriticalSection_00);
    uVar2 = 0;
  }
  return uVar2;
}

// 007486DD FUN_007486dd
#line 1 "decomp/ST.exe/functions/007486DD/decomp.c"
/* [STVTableApplier] Virtual slot 0079DC74+0x14

   [STVTableApplier] Virtual slot 0079DE90+0x14

   [STVTableApplier] Virtual slot 007A14C8+0x14

   [STVTableApplier] Virtual slot 007A1780+0x14

   [STVTableApplier] Virtual slot 007A1908+0x14 */

int st::fn_007486DD(AnonShape_007480A5_22FE1AF9 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;

  lpCriticalSection = param_1->field_005C;
  st::external_00000018(lpCriticalSection);
  iVar2 = st::fn_007480A5(param_1);
  if (iVar2 == 0) {
    piVar1 = *(int **)&param_1[1].field_0x28;
    if (piVar1 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)&param_1[1].field_0x28 = 0;
    }
  }
  st::external_00000019(lpCriticalSection);
  return iVar2;
}

// 00748721 FUN_00748721
#line 1 "decomp/ST.exe/functions/00748721/decomp.c"
int st::fn_00748721(AnonShape_00748721_F11EED2A *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;

  piVar1 = param_2;
  if (param_2 == nullptr) {
    iVar2 = -0x7fffbffd;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)(*(int *)&param_1[-3].field_0x28 + 0x38))();
    if (iVar2 == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)*piVar1)(piVar1,&DAT_007a1b70,&param_2);
      if (iVar2 < 0) {
        param_1->field_0010 = 0x30;
        param_1->field_0014 = 0;
        param_1->field_0030 = 0;
        param_1->field_0018 = 0;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1);
        if (iVar2 == 0) {
          param_1->field_0018 = param_1->field_0018 | 4;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1);
        if (iVar2 == 0) {
          param_1->field_0018 = param_1->field_0018 | 2;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
        if (iVar2 == 0) {
          param_1->field_0018 = param_1->field_0018 | 1;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,&param_1->field_0x20,&param_1->field_0x28);
        if (-1 < iVar2) {
          *(ushort *)&param_1->field_0018 = *(ushort *)&param_1->field_0018 | 0x110;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,&param_1->field_0034);
        if (iVar2 == 0) {
          param_1->field_0018 = param_1->field_0018 | 8;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*piVar1 + 0xc))(piVar1,&param_1->field_0x38);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar3 = (**(code **)(*piVar1 + 0x2c))(piVar1);
        param_1->field_001C = uVar3;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar3 = (**(code **)(*piVar1 + 0x10))(piVar1);
        param_1->field_003C = uVar3;
      }
      else {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar2 = (**(code **)(*param_2 + 0x4c))(param_2,0x30,&param_1->field_0010);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*param_2 + 8))(param_2);
        if (iVar2 < 0) {
          return iVar2;
        }
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if (((*(byte *)&param_1->field_0018 & 8) == 0) ||
         (iVar2 = (**(code **)(*(int *)&param_1[-3].field_0x28 + 0x20))(param_1->field_0034),
         iVar2 == 0)) {
        iVar2 = 0;
      }
      else {
        param_1[-1].field_0014 = 1;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(param_1[-3].field_0034 + 0x38))(&param_1[-3].field_0034);
        st::fn_00747406((void *)param_1[-1].field_0018,3,(int *)0x8004022a,0);
        iVar2 = -0x7ffbfe00;
      }
    }
  }
  return iVar2;
}

// 00748859 FUN_00748859
#line 1 "decomp/ST.exe/functions/00748859/decomp.c"
int st::fn_00748859(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;

  if (param_2 == 0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    *param_4 = 0;
    while (iVar1 = 0, 0 < param_3) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = param_3 + -1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*param_1 + 0x18))(param_1,*(undefined4 *)(param_2 + *param_4 * 4));
      if (iVar1 != 0) {
        return iVar1;
      }
      *param_4 = *param_4 + 1;
    }
  }
  return iVar1;
}

// 007488A3 FUN_007488a3
#line 1 "decomp/ST.exe/functions/007488A3/decomp.c"
uint st::fn_007488A3(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_10;
  int *local_c;
  int *local_8;

  iVar2 = param_1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar3 = (**(code **)(**(int **)(param_1 + -0x28) + 0x18))();
  iVar6 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = 0;
  if (0 < iVar3) {
    do {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar4 = (**(code **)(**(int **)(iVar2 + -0x28) + 0x1c))(iVar6);
      piVar1 = (int *)(iVar4 + 0xc);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar5 = (**(code **)(*piVar1 + 0x24))(piVar1,&local_10);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if ((local_10 == 1) && (iVar4 = (**(code **)(*piVar1 + 0x18))(piVar1,&local_8), -1 < iVar4)) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar4 = (**(code **)*local_8)(local_8,&DAT_007a1b60,&local_c);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*local_8 + 8))(local_8);
        if (iVar4 < 0) {
          return 0;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar4 = (**(code **)(*local_c + 0x20))(local_c);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*local_c + 8))(local_c);
        if (iVar4 != 1) {
          return 0;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  return (uint)(param_1 != 0);
}

// 00748946 FUN_00748946
#line 1 "decomp/ST.exe/functions/00748946/decomp.c"
undefined4 st::fn_00748946(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x5c);
  st::external_00000018(lpCriticalSection);
  *(undefined1 *)(param_1 + 0x95) = 1;
  st::external_00000019(lpCriticalSection);
  return 0;
}

// 0074896B FUN_0074896b
#line 1 "decomp/ST.exe/functions/0074896B/decomp.c"
undefined4 st::fn_0074896B(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x5c);
  st::external_00000018(lpCriticalSection);
  *(undefined1 *)(param_1 + 0x95) = 0;
  st::external_00000019(lpCriticalSection);
  return 0;
}

// 00748990 FUN_00748990
#line 1 "decomp/ST.exe/functions/00748990/decomp.c"
/* [STVTableApplier] Virtual slot 0079DC60+0xC

   [STVTableApplier] Virtual slot 0079DE7C+0xC

   [STVTableApplier] Virtual slot 007A14B0+0xC

   [STVTableApplier] Virtual slot 007A1768+0xC

   [STVTableApplier] Virtual slot 007A18F0+0xC */

int st::fn_00748990(undefined4 param_1,int param_2)

{
  return (-(uint)(param_2 != 0) & 0x7fffbffd) + 0x80004003;
}

// 007489A5 FUN_007489a5
#line 1 "decomp/ST.exe/functions/007489A5/decomp.c"
/* [STVTableApplier] Virtual slot 0079DED8+0x18

   [STVTableApplier] Virtual slot 007A17C8+0x18

   [STVTableApplier] Virtual slot 007A1950+0x18 */

undefined4 __fastcall st::fn_007489A5(int param_1)

{
  int *piVar1;
  undefined4 uVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (piVar1 == nullptr) {
    return 0x8004020a;
  }
  *(undefined1 *)(param_1 + 0xa1) = 0;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  return uVar2;
}

// 007489C7 FUN_007489c7
#line 1 "decomp/ST.exe/functions/007489C7/decomp.c"
/* [STVTableApplier] Virtual slot 0079DC3C+0x14

   [STVTableApplier] Virtual slot 007A1488+0x14

   [STVTableApplier] Virtual slot 007A1740+0x14 */

undefined4 st::fn_007489C7(void)

{
  return 0x80004001;
}

// 007489CF FUN_007489cf
#line 1 "decomp/ST.exe/functions/007489CF/decomp.c"
/* [STVTableApplier] Virtual slot 0079DCBC+0x38

   [STVTableApplier] Virtual slot 007A1510+0x38 */

uint __fastcall st::fn_007489CF(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(*(int *)(param_1 + 0x70) + 0x14) == 0) {
    return 0x80040227;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(char *)(param_1 + 0xa1) != '\0') {
    return 1;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return -(uint)(*(int *)(param_1 + 0x6c) != 0) & 0x8004020b;
}

// 007489F8 FUN_007489f8
#line 1 "decomp/ST.exe/functions/007489F8/decomp.c"
undefined4 __thiscall st::fn_007489F8(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 **ppuVar6;
  int **ppiVar7;
  int *apiStack_38 [2];
  int iStack_30;
  undefined4 *apuStack_2c [4];
  undefined1 *puStack_1c;
  int **ppiStack_18;
  int *local_8;

  apiStack_38[1] = STField<int *>(this,0x74);
  local_8 = this;
  if (apiStack_38[1] == nullptr) {
    apuStack_2c[3] = STField<undefined4 *>(this,0x18);
    uVar2 = 0x80040216;
    if (apuStack_2c[3] != nullptr) {
      ppiStack_18 = &local_8;
      puStack_1c = &DAT_007a1b40;
      apuStack_2c[2] = (undefined4 *)0x748a46;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)*apuStack_2c[3])();
      piVar1 = local_8;
      if (local_8 != nullptr) {
        if (STField<int>(this,0x70) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = STField<int>(this,0x70) + 0xc;
        }
        iVar4 = *local_8;
        ppiVar7 = apiStack_38;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *ppiVar7 = (int *)*param_1;
          param_1 = param_1 + 1;
          ppiVar7 = ppiVar7 + 1;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar2 = (**(code **)(iVar4 + 0xc))(piVar1,iVar3);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*local_8 + 8))(local_8);
      }
    }
  }
  else {
    if (STField<int>(this,0x70) == 0) {
      iStack_30 = 0;
    }
    else {
      iStack_30 = STField<int>(this,0x70) + 0xc;
    }
    iVar3 = *apiStack_38[1];
    ppuVar6 = apuStack_2c;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppuVar6 = (undefined4 *)*param_1;
      param_1 = param_1 + 1;
      ppuVar6 = ppuVar6 + 1;
    }
    apiStack_38[0] = (int *)0x748a2a;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar2 = (**(code **)(iVar3 + 0xc))();
  }
  return uVar2;
}

// 00748A83 FUN_00748a83
#line 1 "decomp/ST.exe/functions/00748A83/decomp.c"
void __thiscall
st::fn_00748A83(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  STField<undefined4>(this,0xc) = param_4;
  STField<undefined4>(this,0x10) = param_5;
  STField<undefined4>(this,0x14) = param_5;
  STField<undefined4>(this,4) = 0;
  STField<undefined4>(this,8) = 0;
  STField<undefined4>(this,0x18) = param_2;
  STField<undefined4>(this,0x3c) = 0;
  STField<undefined4>(this,0x40) = 0;
  STField<undefined4>(this,0x44) = 0;
  *(VTable_007A1148 **)this = &VTable_007A1148;
  return;
}

// 00748AB7 FUN_00748ab7
#line 1 "decomp/ST.exe/functions/00748AB7/decomp.c"
undefined4 * __thiscall st::fn_00748AB7(void *this,byte param_1)

{
  st::fn_00748AD3(this);
  if ((param_1 & 1) != 0) {
    st::fn_0072E2B0(this);
  }
  return this;
}

// 00748AD3 FUN_00748ad3
#line 1 "decomp/ST.exe/functions/00748AD3/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall st::fn_00748AD3(undefined4 *param_1)

{
  *param_1 = &VTable_007A1148;
  if ((LPVOID)param_1[0xf] != (LPVOID)0x0) {
    st::fn_0074BC50((LPVOID)param_1[0xf]);
  }
  return;
}

// 00748AE7 FUN_00748ae7
#line 1 "decomp/ST.exe/functions/00748AE7/decomp.c"
undefined4 st::fn_00748AE7(int *param_1,char *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;

  iVar2 = 0x10;
  bVar5 = true;
  pcVar3 = param_2;
  pcVar4 = &DAT_007a1b80;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    iVar2 = 0x10;
    bVar5 = true;
    pcVar3 = param_2;
    pcVar4 = &DAT_007a1b70;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      iVar2 = 0x10;
      bVar5 = true;
      pcVar3 = "";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *param_2 == *pcVar3;
        param_2 = param_2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar5);
      if (!bVar5) {
        return 0x80004002;
      }
    }
  }
  uVar1 = st::fn_0074B8A6(param_1,param_3);
  return uVar1;
}

// 00748B37 FUN_00748b37
#line 1 "decomp/ST.exe/functions/00748B37/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 00748B37 returns return of KERNEL32.DLL::InterlockedIncrement @ 00748B45 */

LONG st::fn_00748B37(int param_1)

{
  LONG LVar1;

  LVar1 = st::external_00000053((LONG *)(param_1 + 0x44));
  return LVar1;
}

// 00748B48 FUN_00748b48
#line 1 "decomp/ST.exe/functions/00748B48/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00748B48 returns return of KERNEL32.DLL::InterlockedDecrement @ 00748B95 */

LONG st::fn_00748B48(int *param_1)

{
  LONG LVar1;

  if (param_1[0x11] == 1) {
    LVar1 = 0;
    param_1[0x11] = 0;
  }
  else {
    LVar1 = st::external_00000051(param_1 + 0x11);
  }
  if (LVar1 == 0) {
    if ((*(byte *)(param_1 + 1) & 8) != 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1 + 0x38))(param_1,0);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[0x10] = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)(param_1[6] + 0xc) + 0x20))((int *)(param_1[6] + 0xc),param_1);
  }
  return LVar1;
}

// 00748BAE FUN_00748bae
#line 1 "decomp/ST.exe/functions/00748BAE/decomp.c"
/* [STVTableApplier] Virtual slot 007A1148+0xC */

undefined4 st::fn_00748BAE(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  return 0;
}

// 00748BC0 FUN_00748bc0
#line 1 "decomp/ST.exe/functions/00748BC0/decomp.c"
/* [STVTableApplier] Virtual slot 0079DD34+0x10

   [STVTableApplier] Virtual slot 007A1148+0x10 */

undefined4 st::fn_00748BC0(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(param_1 + 0x14);
}

// 00748BCA FUN_00748bca
#line 1 "decomp/ST.exe/functions/00748BCA/decomp.c"
undefined4 st::fn_00748BCA(AnonShape_00748BCA_3A4BA79D *param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;

  if ((param_1->field_0004 & 0x100) == 0) {
    if ((param_1->field_0004 & 0x10) == 0) {
      uVar3 = 0x80040249;
    }
    else {
      *param_2 = param_1->field_0020;
      param_2[1] = param_1->field_0024;
      uVar1 = param_1->field_0020;
      iVar2 = param_1->field_0024;
      *param_3 = uVar1 + 1;
      param_3[1] = iVar2 + (uint)(0xfffffffe < uVar1);
      uVar3 = 0x40270;
    }
  }
  else {
    *param_2 = param_1->field_0020;
    param_2[1] = param_1->field_0024;
    *param_3 = param_1->field_0028;
    param_3[1] = param_1->field_002C;
    uVar3 = 0;
  }
  return uVar3;
}

// 00748C2F FUN_00748c2f
#line 1 "decomp/ST.exe/functions/00748C2F/decomp.c"
undefined4 st::fn_00748C2F(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;

  if (param_2 == nullptr) {
    *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) & 0xfeef;
  }
  else if (param_3 == nullptr) {
    *(undefined4 *)(param_1 + 0x20) = *param_2;
    *(undefined4 *)(param_1 + 0x24) = param_2[1];
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffeff | 0x10;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = *param_2;
    *(undefined4 *)(param_1 + 0x24) = param_2[1];
    *(undefined4 *)(param_1 + 0x28) = *param_3;
    uVar1 = param_3[1];
    *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) | 0x110;
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
  }
  return 0;
}

// 00748C8E FUN_00748c8e
#line 1 "decomp/ST.exe/functions/00748C8E/decomp.c"
/* [STVTableApplier] Virtual slot 0079DD34+0x44

   [STVTableApplier] Virtual slot 007A1148+0x44 */

undefined4 st::fn_00748C8E(int param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;

  if ((*(byte *)(param_1 + 4) & 0x20) == 0) {
    uVar4 = 0x80040251;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x30);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    param_2[1] = *(undefined4 *)(param_1 + 0x34);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar1 = *(uint *)(param_1 + 0x38);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar2 = *(uint *)(param_1 + 0x30);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar3 = *(int *)(param_1 + 0x34);
    *param_3 = uVar1 + *(uint *)(param_1 + 0x30);
    param_3[1] = ((int)uVar1 >> 0x1f) + iVar3 + (uint)CARRY4(uVar1,uVar2);
    uVar4 = 0;
  }
  return uVar4;
}

// 00748CCA FUN_00748cca
#line 1 "decomp/ST.exe/functions/00748CCA/decomp.c"
/* [STVTableApplier] Virtual slot 0079DD34+0x48

   [STVTableApplier] Virtual slot 007A1148+0x48 */

undefined4 st::fn_00748CCA(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;

  if (param_2 == nullptr) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffdf;
  }
  else {
    *(int *)(param_1 + 0x30) = *param_2;
    *(int *)(param_1 + 0x34) = param_2[1];
    iVar1 = *param_3;
    iVar2 = *param_2;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20;
    *(int *)(param_1 + 0x38) = iVar1 - iVar2;
  }
  return 0;
}

// 00748CFF FUN_00748cff
#line 1 "decomp/ST.exe/functions/00748CFF/decomp.c"
/* [STVTableApplier] Virtual slot 0079DD34+0x1C

   [STVTableApplier] Virtual slot 007A1148+0x1C */

byte st::fn_00748CFF(int param_1)

{
  return ~(byte)*(undefined4 *)(param_1 + 4) & 1;
}

// 00748D11 FUN_00748d11
#line 1 "decomp/ST.exe/functions/00748D11/decomp.c"
/* [STVTableApplier] Virtual slot 0079DD34+0x20

   [STVTableApplier] Virtual slot 007A1148+0x20 */

undefined4 st::fn_00748D11(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  }
  return 0;
}

// 00748D2B FUN_00748d2b
#line 1 "decomp/ST.exe/functions/00748D2B/decomp.c"
/* [STVTableApplier] Virtual slot 0079DD34+0x3C

   [STVTableApplier] Virtual slot 007A1148+0x3C */

byte st::fn_00748D2B(int param_1)

{
  return (byte)~(byte)*(undefined4 *)(param_1 + 4) >> 2 & 1;
}

// 00748D40 FUN_00748d40
#line 1 "decomp/ST.exe/functions/00748D40/decomp.c"
/* [STVTableApplier] Virtual slot 0079DD34+0x40

   [STVTableApplier] Virtual slot 007A1148+0x40 */

undefined4 st::fn_00748D40(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffb;
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
  }
  return 0;
}

// 00748D5A FUN_00748d5a
#line 1 "decomp/ST.exe/functions/00748D5A/decomp.c"
/* [STVTableApplier] Virtual slot 0079DD34+0x24

   [STVTableApplier] Virtual slot 007A1148+0x24 */

byte st::fn_00748D5A(int param_1)

{
  return (byte)~(byte)*(undefined4 *)(param_1 + 4) >> 1 & 1;
}

// 00748D6E FUN_00748d6e
#line 1 "decomp/ST.exe/functions/00748D6E/decomp.c"
/* [STVTableApplier] Virtual slot 0079DD34+0x28

   [STVTableApplier] Virtual slot 007A1148+0x28 */

undefined4 st::fn_00748D6E(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffd;
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
  }
  return 0;
}

// 00748D88 FUN_00748d88
#line 1 "decomp/ST.exe/functions/00748D88/decomp.c"
/* [STVTableApplier] Virtual slot 0079DD34+0x2C

   [STVTableApplier] Virtual slot 007A1148+0x2C */

undefined4 st::fn_00748D88(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(param_1 + 0x10);
}

// 00748D92 FUN_00748d92
#line 1 "decomp/ST.exe/functions/00748D92/decomp.c"
/* [STVTableApplier] Virtual slot 0079DD34+0x30

   [STVTableApplier] Virtual slot 007A1148+0x30 */

undefined4 st::fn_00748D92(int param_1,int param_2)

{
  undefined4 uVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x14) < param_2) {
    uVar1 = 0x8004020d;
  }
  else {
    *(int *)(param_1 + 0x10) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}

// 00748DAE FUN_00748dae
#line 1 "decomp/ST.exe/functions/00748DAE/decomp.c"
int st::fn_00748DAE(int param_1,undefined4 *param_2)

{
  LPVOID pvVar1;
  int iVar2;

  if ((*(byte *)(param_1 + 4) & 8) == 0) {
    *param_2 = 0;
    iVar2 = 1;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pvVar1 = st::fn_0074BC6A(*(undefined4 **)(param_1 + 0x3c));
    *param_2 = pvVar1;
    iVar2 = (-(uint)(pvVar1 != (LPVOID)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  return iVar2;
}

// 00748DE3 FUN_00748de3
#line 1 "decomp/ST.exe/functions/00748DE3/decomp.c"
undefined4 st::fn_00748DE3(AnonShape_00748DE3_6873BEB9 *param_1,undefined4 *param_2)

{
  LPVOID pvVar1;

  if ((LPVOID)param_1->field_003C != (LPVOID)0x0) {
    st::fn_0074BC50((LPVOID)param_1->field_003C);
    param_1->field_003C = 0;
  }
  if (param_2 == nullptr) {
    param_1->field_0004 = param_1->field_0004 & 0xfffffff7;
  }
  else {
    pvVar1 = st::fn_0074BC6A(param_2);
    param_1->field_003C = pvVar1;
    if (pvVar1 == (LPVOID)0x0) {
      param_1->field_0004 = param_1->field_0004 & 0xfffffff7;
      return 0x8007000e;
    }
    param_1->field_0004 = param_1->field_0004 | 8;
  }
  return 0;
}

// 00748E2B FUN_00748e2b
#line 1 "decomp/ST.exe/functions/00748E2B/decomp.c"
undefined4 st::fn_00748E2B(AnonShape_00748E2B_93115374 *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint local_34 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (param_2 != 0) {
    if (param_3 == nullptr) {
      return 0x80004003;
    }
    local_34[0] = param_2;
    if (0x2f < param_2) {
      local_34[0] = 0x30;
    }
    local_34[2] = param_1->field_0004 & 0xffffffdf;
    local_34[1] = param_1->field_0008;
    local_c = param_1->field_000C;
    local_8 = param_1->field_0014;
    local_34[3] = param_1->field_0010;
    local_24 = param_1->field_0020;
    local_20 = param_1->field_0024;
    local_1c = param_1->field_0028;
    local_18 = param_1->field_002C;
    local_14 = param_1->field_0040;
    if ((param_1->field_0004 & 8) == 0) {
      local_10 = 0;
    }
    else {
      local_10 = param_1->field_003C;
    }
    puVar2 = local_34;
    for (uVar1 = local_34[0] >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *param_3 = *puVar2;
      puVar2 = puVar2 + 1;
      param_3 = param_3 + 1;
    }
    for (local_34[0] = local_34[0] & 3; local_34[0] != 0; local_34[0] = local_34[0] - 1) {
      *(char *)param_3 = (char)*puVar2;
      puVar2 = (uint *)((int)puVar2 + 1);
      param_3 = (uint *)((int)param_3 + 1);
    }
  }
  return 0;
}

// 00748ECA FUN_00748eca
#line 1 "decomp/ST.exe/functions/00748ECA/decomp.c"
undefined4 st::fn_00748ECA(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  LPVOID local_8;

  local_8 = (LPVOID)0x0;
  if (param_2 < 4) {
    return 0;
  }
  if (param_3 == nullptr) {
    return 0x80004003;
  }
  uVar1 = *param_3;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((((0x30 < param_2) || (0x30 < uVar1)) ||
       ((0xb < param_2 &&
        (((param_3[2] & 0xfffffe20) != 0 ||
         ((((param_3[2] & 0x10) != 0 && ((*(byte *)(param_1 + 4) & 0x10) == 0)) && (param_2 < 0x20))
         )))))) ||
      (((0x2b < param_2 && (param_3[10] != 0)) && (param_3[10] != *(uint *)(param_1 + 0xc))))) ||
     ((0x2f < param_2 &&
      (((param_3[0xb] != 0 && (param_3[0xb] != *(uint *)(param_1 + 0x14))) ||
       ((0x2f < param_2 && ((0xf < param_2 && ((int)param_3[0xb] < (int)param_3[3])))))))))) {
    return 0x80070057;
  }
  if ((0x27 < param_2) && ((param_3[2] & 8) != 0)) {
    if ((undefined4 *)param_3[9] == nullptr) {
      return 0x80004003;
    }
    local_8 = st::fn_0074BC6A((undefined4 *)param_3[9]);
    if (local_8 == (LPVOID)0x0) {
      return 0x8007000e;
    }
  }
  if (0x23 < param_2) {
    *(uint *)(param_1 + 0x40) = param_3[8];
  }
  if (param_2 < 0xc) {
    if (param_2 < 8) goto LAB_00748fc9;
  }
  else {
    *(uint *)(param_1 + 4) = param_3[2] | *(uint *)(param_1 + 4) & 0x20;
  }
  *(uint *)(param_1 + 8) = param_3[1];
LAB_00748fc9:
  if (0xf < param_2) {
    *(uint *)(param_1 + 0x10) = param_3[3];
  }
  if (0x1f < param_2) {
    *(uint *)(param_1 + 0x28) = param_3[6];
    *(uint *)(param_1 + 0x2c) = param_3[7];
  }
  if (0x17 < param_2) {
    *(uint *)(param_1 + 0x20) = param_3[4];
    *(uint *)(param_1 + 0x24) = param_3[5];
  }
  if ((0x27 < param_2) && ((param_3[2] & 8) != 0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(LPVOID *)(param_1 + 0x3c) != (LPVOID)0x0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      st::fn_0074BC50(*(LPVOID *)(param_1 + 0x3c));
    }
    *(LPVOID *)(param_1 + 0x3c) = local_8;
  }
  return 0;
}

// 00749024 FUN_00749024
#line 1 "decomp/ST.exe/functions/00749024/decomp.c"
void * __thiscall
st::fn_00749024(void *this,undefined4 param_1,int param_2,undefined4 *param_3,int param_4)

{
  HANDLE pvVar1;

  st::fn_0074B7B8(this,param_1,param_2);
  st::external_00000017((LPCRITICAL_SECTION)((int)this + 0x10));
  STField<undefined4>(this,0x28) = 0;
  STField<undefined4>(this,0x2c) = 0;
  STField<undefined4>(this,0x30) = 0;
  STField<undefined4>(this,0x34) = 0;
  STField<undefined4>(this,0x38) = 0;
  STField<undefined4>(this,0x3c) = 0;
  STField<undefined4>(this,0x40) = 0;
  STField<undefined4>(this,0x44) = 0;
  STField<undefined4>(this,0x48) = 0;
  STField<undefined4>(this,0x4c) = 0;
  STField<undefined4>(this,0x50) = 0;
  STField<undefined4>(this,0x54) = 0;
  if (param_4 != 0) {
    pvVar1 = st::external_00000057((LPSECURITY_ATTRIBUTES)0x0,0,0x7fffffff,(LPCSTR)0x0);
    STField<HANDLE>(this,0x30) = pvVar1;
    if (pvVar1 == (HANDLE)0x0) {
      *param_3 = 0x8007000e;
    }
  }
  return this;
}

// 00749091 FUN_00749091
#line 1 "decomp/ST.exe/functions/00749091/decomp.c"
void __fastcall st::fn_00749091(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(HANDLE *)(param_1 + 0x30) != (HANDLE)0x0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::external_00000027(*(HANDLE *)(param_1 + 0x30));
  }
  st::external_00000016((LPCRITICAL_SECTION)(-(uint)(param_1 != 0) & param_1 + 0x10U));
  st::fn_0074B777();
  return;
}

// 007490C6 FUN_007490c6
#line 1 "decomp/ST.exe/functions/007490C6/decomp.c"
void st::fn_007490C6(int *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;

  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = param_2;
  pcVar3 = &DAT_007a1a90;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    st::fn_0074B8A6((int *)(-(uint)(param_1 != nullptr) & (uint)(param_1 + 3)),param_3);
  }
  else {
    st::fn_0074B810(param_1,param_2,param_3);
  }
  return;
}

// 00749106 FUN_00749106
#line 1 "decomp/ST.exe/functions/00749106/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00749106 -> EXTERNAL:00000019 @ 0074914E | 00749106 -> EXTERNAL:00000019 @ 00749164 |
   00749106 -> EXTERNAL:00000019 @ 0074917C | 00749106 -> EXTERNAL:00000019 @ 007491B4 */

undefined4
st::fn_00749106(AnonShape_00749106_79800343 *param_1,LPCRITICAL_SECTION lpCriticalSection,
            undefined4 *param_3)

{
  LONG LVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  HANDLE pvVar3;
  undefined4 uVar4;
  LPCRITICAL_SECTION lpCriticalSection_00;

  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) || (param_3 == nullptr)) {
    uVar4 = 0x80004003;
  }
  else {
    lpCriticalSection_00 =
         (LPCRITICAL_SECTION)
         (-(uint)(param_1 != (AnonShape_00749106_79800343 *)&DAT_0000000c) &
         (uint)&param_1->field_0x4);
    st::external_00000018(lpCriticalSection_00);
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    if (lpCriticalSection->RecursionCount == 1) {
      if (param_1->field_0044 == 0) {
        if (param_1->field_0030 == param_1->field_0020) {
          LVar1 = lpCriticalSection->LockCount;
          param_1->field_0034 = LVar1;
          param_3[1] = LVar1;
          p_Var2 = lpCriticalSection->DebugInfo;
          param_1->field_002C = p_Var2;
          *param_3 = p_Var2;
          LVar1 = lpCriticalSection->RecursionCount;
          param_1->field_0038 = LVar1;
          param_3[2] = LVar1;
          pvVar3 = lpCriticalSection->OwningThread;
          param_1->field_003C = pvVar3;
          param_3[3] = pvVar3;
          param_1->field_0040 = 1;
          st::external_00000019(lpCriticalSection_00);
          uVar4 = 0;
        }
        else {
          st::external_00000019(lpCriticalSection_00);
          uVar4 = 0x80040210;
        }
      }
      else {
        st::external_00000019(lpCriticalSection_00);
        uVar4 = 0x8004020f;
      }
    }
    else {
      st::external_00000019(lpCriticalSection_00);
      uVar4 = 0x8004020e;
    }
  }
  return uVar4;
}

// 007491C3 FUN_007491c3
#line 1 "decomp/ST.exe/functions/007491C3/decomp.c"
undefined4 st::fn_007491C3(AnonShape_007491C3_A434B833 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  LPCRITICAL_SECTION lpCriticalSection;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    lpCriticalSection =
         (LPCRITICAL_SECTION)
         (-(uint)(param_1 != (AnonShape_007491C3_A434B833 *)&DAT_0000000c) &
         (uint)&param_1->field_0x4);
    st::external_00000018(lpCriticalSection);
    param_2[1] = param_1->field_0034;
    *param_2 = param_1->field_002C;
    param_2[2] = param_1->field_0038;
    param_2[3] = param_1->field_003C;
    st::external_00000019(lpCriticalSection);
    uVar1 = 0;
  }
  return uVar1;
}

// 00749212 FUN_00749212
#line 1 "decomp/ST.exe/functions/00749212/decomp.c"
/* [STVTableApplier] Virtual slot 0079DCF8+0x1C

   [STVTableApplier] Virtual slot 007A11A0+0x1C */

undefined4 st::fn_00749212(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,byte param_5)

{
  int iVar1;
  undefined4 uVar2;
  LPCRITICAL_SECTION lpCriticalSection;

  *param_2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(-(uint)(param_1 != 0xc) & param_1 + 4U);
  do {
    st::external_00000018(lpCriticalSection);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(param_1 + 0x44) == 0) {
      st::external_00000019(lpCriticalSection);
      return 0x80040211;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_0074924d:
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0x1c);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
      if (iVar1 == 0) goto LAB_0074924d;
    }
    st::external_00000019(lpCriticalSection);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x44) = 1;
      *param_2 = iVar1;
      return 0;
    }
    if ((param_5 & 4) != 0) {
      return 0x8004022e;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::external_0000006D(*(HANDLE *)(param_1 + 0x24),0xffffffff);
  } while( true );
}

// 00749299 FUN_00749299
#line 1 "decomp/ST.exe/functions/00749299/decomp.c"
undefined4 st::fn_00749299(int *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  LPCRITICAL_SECTION lpCriticalSection;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_2 == 0) {
    uVar2 = 0x80004003;
  }
  else {
    bVar1 = false;
    lpCriticalSection =
         (LPCRITICAL_SECTION)(-(uint)(param_1 != (int *)&DAT_0000000c) & (uint)(param_1 + 1));
    st::external_00000018(lpCriticalSection);
    *(int *)(param_2 + 0x1c) = param_1[7];
    param_1[8] = param_1[8] + 1;
    param_1[7] = param_2;
    if (param_1[10] != 0) {
      st::fn_0074931D((AnonShape_0074931D_CA8B6F7D *)(param_1 + -3));
    }
    if ((param_1[0x12] != 0) && (param_1[8] == param_1[0xc])) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(param_1[-3] + 0x10))();
      param_1[0x12] = 0;
      bVar1 = true;
    }
    st::external_00000019(lpCriticalSection);
    if (bVar1) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1 + 8))(param_1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

// 0074931D FUN_0074931d
#line 1 "decomp/ST.exe/functions/0074931D/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_0074931D(AnonShape_0074931D_CA8B6F7D *param_1)

{
  if (param_1->field_0034 != 0) {
    st::external_0000005A(param_1->field_0030,param_1->field_0034,(LPLONG)0x0);
    param_1->field_0034 = 0;
  }
  return;
}

// 00749339 FUN_00749339
#line 1 "decomp/ST.exe/functions/00749339/decomp.c"
int st::fn_00749339(int *param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;

  lpCriticalSection =
       (LPCRITICAL_SECTION)(-(uint)(param_1 + -3 != nullptr) & (uint)(param_1 + 1));
  st::external_00000018(lpCriticalSection);
  if (param_1[0x11] == 0) {
    param_1[0x11] = 1;
    if (param_1[0x12] == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(param_1[-3] + 0x14))();
      if (iVar1 < 0) {
        param_1[0x11] = 0;
        st::external_00000019(lpCriticalSection);
        return iVar1;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1 + 4))(param_1);
    }
    else {
      param_1[0x12] = 0;
    }
  }
  st::external_00000019(lpCriticalSection);
  return 0;
}

// 0074939F FUN_0074939f
#line 1 "decomp/ST.exe/functions/0074939F/decomp.c"
undefined4 st::fn_0074939F(int *param_1)

{
  AnonShape_0074931D_CA8B6F7D *pAVar1;
  int iVar2;
  int iVar3;
  LPCRITICAL_SECTION lpCriticalSection;

  pAVar1 = (AnonShape_0074931D_CA8B6F7D *)(param_1 + -3);
  lpCriticalSection =
       (LPCRITICAL_SECTION)
       (-(uint)(pAVar1 != nullptr) & (uint)(param_1 + 1));
  st::external_00000018(lpCriticalSection);
  if ((param_1[0x11] == 0) && (param_1[0x12] == 0)) {
    st::external_00000019(lpCriticalSection);
  }
  else {
    param_1[0x11] = 0;
    iVar3 = param_1[8];
    iVar2 = param_1[0xc];
    if (iVar2 <= iVar3) {
      param_1[0x12] = 0;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)pAVar1 + 0x10))();
    }
    else {
      param_1[0x12] = 1;
    }
    st::fn_0074931D(pAVar1);
    st::external_00000019(lpCriticalSection);
    if (iVar2 <= iVar3) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return 0;
}

// 00749415 FUN_00749415
#line 1 "decomp/ST.exe/functions/00749415/decomp.c"
uint __fastcall st::fn_00749415(AnonShape_00749415_513CA2B2 *param_1)

{
  if (((0 < param_1->field_0038) && (0 < param_1->field_0040)) && (0 < param_1->field_0044)) {
    return (uint)(param_1->field_004C == 0);
  }
  return 0x80040212;
}

// 007494B5 FUN_007494b5
#line 1 "decomp/ST.exe/functions/007494B5/decomp.c"
undefined4 * __thiscall st::fn_007494B5(void *this,byte param_1)

{
  st::fn_007496E0(this);
  if ((param_1 & 1) != 0) {
    st::fn_0072E2B0(this);
  }
  return this;
}

// 007494D1 FUN_007494d1
#line 1 "decomp/ST.exe/functions/007494D1/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 007494D1 -> EXTERNAL:00000019 @ 00749535 | 007494D1 -> EXTERNAL:00000019 @ 0074954D |
   007494D1 -> EXTERNAL:00000019 @ 007495A0 | 007494D1 -> EXTERNAL:00000019 @ 007495AD */

undefined4
st::fn_007494D1(AnonShape_007494D1_ECEF44C3 *param_1,undefined4 *param_2,
            LPCRITICAL_SECTION lpCriticalSection)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  LONG LVar3;
  HANDLE pvVar4;
  AnonShape_007494D1_ECEF44C3 *pAVar5;
  undefined4 uVar6;
  LPCRITICAL_SECTION lpCriticalSection_00;
  _SYSTEM_INFO local_28;

  pAVar5 = param_1;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    uVar6 = 0x80004003;
  }
  else {
    lpCriticalSection_00 =
         (LPCRITICAL_SECTION)
         (-(uint)(param_1 != (AnonShape_007494D1_ECEF44C3 *)&DAT_0000000c) &
         (uint)&param_1->field_0x4);
    st::external_00000018(lpCriticalSection_00);
    lpCriticalSection->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    lpCriticalSection->LockCount = 0;
    lpCriticalSection->RecursionCount = 0;
    lpCriticalSection->OwningThread = (HANDLE)0x0;
    st::external_0000001B(&local_28);
    iVar1 = param_2[2];
    if ((iVar1 == 0) || ((local_28.dwAllocationGranularity & iVar1 - 1U) != 0)) {
      st::external_00000019(lpCriticalSection_00);
      uVar6 = 0x8004020e;
    }
    else if (param_1->field_0044 == 1) {
      st::external_00000019(lpCriticalSection_00);
      uVar6 = 0x8004020f;
    }
    else if (param_1->field_0020 < param_1->field_0030) {
      st::external_00000019(lpCriticalSection_00);
      uVar6 = 0x80040210;
    }
    else {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (AnonShape_007494D1_ECEF44C3 *)(param_2[1] + param_2[3]);
      if ((int)param_1 % iVar1 != 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_007494D1_ECEF44C3 *)((int)param_1 + (iVar1 - (int)param_1 % iVar1));
      }
      iVar1 = param_2[3];
      *(int *)&pAVar5->field_0x34 = (int)param_1 - iVar1;
      lpCriticalSection->LockCount = (int)param_1 - iVar1;
      p_Var2 = (PRTL_CRITICAL_SECTION_DEBUG)*param_2;
      *(PRTL_CRITICAL_SECTION_DEBUG *)&pAVar5->field_0x2c = p_Var2;
      lpCriticalSection->DebugInfo = p_Var2;
      LVar3 = param_2[2];
      *(LONG *)&pAVar5->field_0x38 = LVar3;
      lpCriticalSection->RecursionCount = LVar3;
      pvVar4 = (HANDLE)param_2[3];
      *(HANDLE *)&pAVar5->field_0x3c = pvVar4;
      lpCriticalSection->OwningThread = pvVar4;
      *(undefined4 *)&pAVar5->field_0x40 = 1;
      st::external_00000019(lpCriticalSection_00);
      uVar6 = 0;
    }
  }
  return uVar6;
}

// 007495BF FUN_007495bf
#line 1 "decomp/ST.exe/functions/007495BF/decomp.c"
uint __fastcall st::fn_007495BF(uint param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  void *this;
  int iVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  uint local_8;

  lpCriticalSection = (LPCRITICAL_SECTION)(-(uint)(param_1 != 0) & param_1 + 0x10);
  local_8 = param_1;
  st::external_00000018(lpCriticalSection);
  uVar1 = st::fn_00749415((AnonShape_00749415_513CA2B2 *)param_1);
  local_8 = uVar1;
  if ((int)uVar1 < 0) {
    st::external_00000019(lpCriticalSection);
  }
  else {
    if (uVar1 != 1) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(param_1 + 0x58) != 0) {
        st::fn_007496A1((AnonShape_007496A1_B3436AED *)param_1);
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pvVar2 = st::external_0000002E((LPVOID)0x0,
                            (*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x48)) *
                            *(int *)(param_1 + 0x38),0x1000,4);
      *(LPVOID *)(param_1 + 0x58) = pvVar2;
      if (pvVar2 == (LPVOID)0x0) {
LAB_00749680:
        st::external_00000019(lpCriticalSection);
        return 0x8007000e;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar3 = *(int *)(param_1 + 0x3c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      while (iVar3 < *(int *)(param_1 + 0x38)) {
        this = (void *)st::fn_0072E530(0x48);
        if (this == nullptr) {
          iVar3 = 0;
        }
        else {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar3 = st::fn_00748A83(this,0,param_1,&local_8,(int)pvVar2 + *(int *)(param_1 + 0x48),
                               *(undefined4 *)(param_1 + 0x40));
        }
        if (iVar3 == 0) goto LAB_00749680;
        *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(param_1 + 0x28);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        *(int *)(param_1 + 0x28) = iVar3;
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pvVar2 = (LPVOID)((int)pvVar2 + *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x48));
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar3 = *(int *)(param_1 + 0x3c);
      }
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    st::external_00000019(lpCriticalSection);
    uVar1 = 0;
  }
  return uVar1;
}

// 007496A0 FUN_007496a0
#line 1 "decomp/ST.exe/functions/007496A0/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STVTableApplier] Virtual slot 007A11C8+0x10

   [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_007496A0(void)

{
  return;
}

// 007496A1 FUN_007496a1
#line 1 "decomp/ST.exe/functions/007496A1/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_007496A1(AnonShape_007496A1_B3436AED *param_1)

{
  int *piVar1;
  int iVar2;

  while (piVar1 = (int *)param_1->field_0028, piVar1 != nullptr) {
    iVar2 = piVar1[7];
    param_1->field_002C = param_1->field_002C + -1;
    param_1->field_0028 = iVar2;
    if (piVar1 == nullptr) break;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 0x54))(1);
  }
  param_1->field_003C = 0;
  if ((LPVOID)param_1->field_0058 != (LPVOID)0x0) {
    st::external_0000002D((LPVOID)param_1->field_0058,0,0x8000);
    param_1->field_0058 = 0;
  }
  return;
}

// 007496E0 FUN_007496e0
#line 1 "decomp/ST.exe/functions/007496E0/decomp.c"
void __fastcall st::fn_007496E0(undefined4 *param_1)

{
  *param_1 = &VTable_007A11C8;
  param_1[3] = &VTable_007A11A0;
  st::fn_0074939F(param_1 + 3);
  st::fn_007496A1((AnonShape_007496A1_B3436AED *)param_1);
  st::fn_00749091((int)param_1);
  return;
}

// 00749708 FUN_00749708
#line 1 "decomp/ST.exe/functions/00749708/decomp.c"
uint st::fn_00749708(undefined4 *param_1,int *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint local_8;

  puVar3 = param_1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == nullptr) {
    uVar4 = 1;
  }
  else {
    puVar6 = (undefined4 *)*param_1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar4 = (**(code **)(*param_2 + 0x1c))(param_2,*puVar6,puVar6[1],puVar6[2],puVar6[3]);
    if (param_3 != 0) {
      puVar6 = (undefined4 *)*param_1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar4 = (**(code **)(*param_2 + 0xc))
                        (param_2,*puVar6,puVar6[1],puVar6[2],puVar6[3],param_1[1],param_1[2]);
      if ((-1 < (int)uVar4) && (local_8 = 0, param_1[3] != 0)) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = nullptr;
        while( true ) {
          puVar5 = (undefined4 *)(puVar3[4] + (int)param_1);
          puVar6 = (undefined4 *)puVar5[5];
          puVar1 = (undefined4 *)*puVar3;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          uVar4 = (**(code **)(*param_2 + 0x14))
                            (param_2,*puVar1,puVar1[1],puVar1[2],puVar1[3],*puVar5,puVar5[1],
                             puVar5[2],puVar5[3],puVar5[4],*puVar6,puVar6[1],puVar6[2],puVar6[3],
                             puVar5[6]);
          if ((int)uVar4 < 0) break;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = 0;
          puVar6 = (undefined4 *)(puVar3[4] + (int)param_1);
          if (puVar6[7] != 0) {
            do {
              puVar1 = *(undefined4 **)(puVar6[8] + 4 + param_3 * 8);
              puVar5 = *(undefined4 **)(puVar6[8] + param_3 * 8);
              puVar2 = (undefined4 *)*puVar3;
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              uVar4 = (**(code **)(*param_2 + 0x18))
                                (param_2,*puVar2,puVar2[1],puVar2[2],puVar2[3],*puVar6,*puVar5,
                                 puVar5[1],puVar5[2],puVar5[3],*puVar1,puVar1[1],puVar1[2],puVar1[3]
                                );
              if ((int)uVar4 < 0) goto LAB_0074982d;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = param_3 + 1;
              puVar6 = (undefined4 *)(puVar3[4] + (int)param_1);
            } while (param_3 < (uint)puVar6[7]);
          }
          if ((int)uVar4 < 0) break;
          local_8 = local_8 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = param_1 + 9;
          if ((uint)puVar3[3] <= local_8) break;
        }
      }
    }
LAB_0074982d:
    uVar4 = -(uint)(uVar4 != 0x80070002) & uVar4;
  }
  return uVar4;
}

// 00749841 FUN_00749841
#line 1 "decomp/ST.exe/functions/00749841/decomp.c"

/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow */

int st::fn_00749841(RecoveredSourceFamily_dibcopy *param_1)

{
  int iVar1;

  iVar1 = param_1->field_0008;
  if (iVar1 < 0) {
    iVar1 = -((param_1->field_0004 * (uint)param_1->field_000E + 0x1f >> 3 & 0x1ffffffc) * iVar1);
  }
  else {
    iVar1 = (param_1->field_0004 * (uint)param_1->field_000E + 0x1f >> 3 & 0x1ffffffc) * iVar1;
  }
  return iVar1;
}

// 0074987C FUN_0074987c
#line 1 "decomp/ST.exe/functions/0074987C/decomp.c"
void st::fn_0074987C(undefined4 *param_1,AnonShape_0074987C_9BF4FFD0 *param_2)

{
  undefined4 *puVar1;

  if ((param_2->field_0010 == 0) ||
     (((param_2->field_0028 == DAT_007a1240 && (param_2->field_002C == DAT_007a1244)) &&
      (param_2->field_0030 == DAT_007a1248)))) {
    puVar1 = &DAT_007a16f0;
  }
  else if (((param_2->field_0028 != DAT_007a1250) || (param_2->field_002C != DAT_007a1254)) ||
          (puVar1 = &DAT_007a1700, param_2->field_0030 != DAT_007a1258)) {
    puVar1 = &DAT_0079e368;
  }
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  return;
}

// 007498EC FUN_007498ec
#line 1 "decomp/ST.exe/functions/007498EC/decomp.c"
void st::fn_007498EC(int *param_1,AnonShape_0074987C_9BF4FFD0 *param_2)

{
  short sVar1;
  int *piVar2;
  int local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = param_2->field_0010;
  if ((local_14 == 0) || (local_14 == 3)) {
    sVar1 = *(short *)&param_2->field_0xe;
    if (sVar1 == 1) {
      piVar2 = (int *)&DAT_007a1bb0;
    }
    else if (sVar1 == 4) {
      piVar2 = (int *)&DAT_007a1ba0;
    }
    else if (sVar1 == 8) {
      piVar2 = &DAT_007a16e0;
    }
    else if (sVar1 == 0x10) {
      piVar2 = (int *)st::fn_0074987C(&local_14,param_2);
    }
    else if (sVar1 == 0x18) {
      piVar2 = &DAT_007a16d0;
    }
    else if (sVar1 == 0x20) {
      piVar2 = &DAT_007a16c0;
    }
    else {
      piVar2 = &DAT_0079e368;
    }
  }
  else {
    local_10 = 0;
    local_e = 0x10;
    local_c = 0xaa000080;
    local_8 = 0x719b3800;
    piVar2 = &local_14;
  }
  *param_1 = *piVar2;
  param_1[1] = piVar2[1];
  param_1[2] = piVar2[2];
  param_1[3] = piVar2[3];
  return;
}

// 00749989 FUN_00749989
#line 1 "decomp/ST.exe/functions/00749989/decomp.c"
undefined4 st::fn_00749989(char *param_1)

{
  int iVar1;
  undefined **ppuVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  int local_8;

  local_8 = 0;
  ppuVar2 = &PTR_DAT_007a1270;
  do {
    pcVar4 = *ppuVar2;
    iVar1 = 0x10;
    bVar6 = true;
    pcVar3 = pcVar4;
    pcVar5 = "";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar6 = *pcVar3 == *pcVar5;
      pcVar3 = pcVar3 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      return STReplaceLowWord((uint32_t)(pcVar4), (uint16_t)(0xffff));
    }
    iVar1 = 0x10;
    bVar6 = true;
    pcVar3 = param_1;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar6 = *pcVar4 == *pcVar3;
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar6);
    if (bVar6) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      return CONCAT22((short)((uint)(local_8 * 3) >> 0x10),
                      *(undefined2 *)(&DAT_007a1274 + local_8 * 0xc));
    }
    local_8 = local_8 + 1;
    ppuVar2 = ppuVar2 + 3;
  } while( true );
}

// 007499DC FUN_007499dc
#line 1 "decomp/ST.exe/functions/007499DC/decomp.c"
char * st::fn_007499DC(char *param_1)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;

  iVar3 = 0;
  ppuVar2 = &PTR_DAT_007a1270;
  do {
    iVar1 = 0x10;
    bVar6 = true;
    pcVar4 = *ppuVar2;
    pcVar5 = param_1;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      return *(char **)(&UNK_007a1278 + iVar3 * 0xc);
    }
    iVar1 = 0x10;
    bVar6 = true;
    pcVar4 = *ppuVar2;
    pcVar5 = "";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      return "UNKNOWN";
    }
    iVar3 = iVar3 + 1;
    ppuVar2 = ppuVar2 + 3;
  } while( true );
}

// 00749A26 FUN_00749a26
#line 1 "decomp/ST.exe/functions/00749A26/decomp.c"
int st::fn_00749A26(int *param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = *param_1 + 0x30;
  if ((STField<ushort>(param_1,0xe) < 9) || (param_1[8] != 0)) {
    iVar2 = 1 << ((byte)STField<ushort>(param_1,0xe) & 0x1f);
    if (param_1[8] != 0) {
      iVar2 = param_1[8];
    }
    iVar1 = iVar1 + iVar2 * 4;
  }
  if (param_1[4] == 3) {
    iVar1 = iVar1 + 0xc;
  }
  return iVar1;
}

// 00749A5E FUN_00749a5e
#line 1 "decomp/ST.exe/functions/00749A5E/decomp.c"
undefined4 st::fn_00749A5E(int param_1)

{
  undefined4 uVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(ushort *)(param_1 + 0x3e) < 9) || (*(int *)(param_1 + 0x50) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// 00749A79 FUN_00749a79
#line 1 "decomp/ST.exe/functions/00749A79/decomp.c"

int st::fn_00749A79(AnonShape_00749A79_05F12707 *param_1)

{
  int iVar1;

  if (param_1->field_0040 == 3) {
    iVar1 = param_1->field_0030 + 0x3c;
  }
  else {
    iVar1 = param_1->field_0030 + 0x30;
  }
  return (int)(&param_1->field_0x0 + iVar1);
}

// 00749A93 FUN_00749a93
#line 1 "decomp/ST.exe/functions/00749A93/decomp.c"
undefined4 * __thiscall st::fn_00749A93(void *this,undefined4 *param_1,undefined4 param_2,int param_3)

{
  st::fn_00746EE3(this,param_2,param_3,(LPCRITICAL_SECTION)((int)this + 0x7c),param_1);
  STField<undefined4>(this,0x50) = 0;
  st::fn_0074D1EA((void *)((int)this + 0x54),0);
  st::fn_0074D1EA((void *)((int)this + 0x58),1);
  st::fn_0074D1EA((void *)((int)this + 0x5c),1);
  STField<undefined4>(this,0x60) = 0;
  STField<undefined4>(this,100) = 0;
  STField<undefined4>(this,0x68) = 0;
  STField<undefined4>(this,0x6c) = 0;
  STField<undefined4>(this,0x70) = 0;
  STField<undefined4>(this,0x74) = 0;
  STField<undefined4>(this,0x78) = 0;
  st::external_00000017((LPCRITICAL_SECTION)((int)this + 0x7c));
  st::external_00000017((LPCRITICAL_SECTION)((int)this + 0x94));
  STField<undefined4>(this,0xb8) = 0;
  STField<undefined4>(this,0xac) = 0;
  STField<undefined4>(this,0xb0) = 1;
  STField<undefined4>(this,0xb4) = 0;
  STField<undefined4>(this,0xbc) = 0;
  STField<undefined4>(this,0xc0) = 0;
  *(VTable_007A13D0 **)this = &VTable_007A13D0;
  STField<VTable_007A1390 *>(this,0xc) = &VTable_007A1390;
  STField<VTable_007A1378 *>(this,0x10) = &VTable_007A1378;
  st::external_00000015(STField<HANDLE>(this,0x5c));
  return this;
}

// 00749B43 FUN_00749b43
#line 1 "decomp/ST.exe/functions/00749B43/decomp.c"
int * __thiscall st::fn_00749B43(void *this,byte param_1)

{
  st::fn_00749B5F(this);
  if ((param_1 & 1) != 0) {
    st::fn_0072E2B0(this);
  }
  return this;
}

// 00749B5F FUN_00749b5f
#line 1 "decomp/ST.exe/functions/00749B5F/decomp.c"
void __fastcall st::fn_00749B5F(int *param_1)

{
  *param_1 = (int)&VTable_007A13D0;
  param_1[3] = (int)&VTable_007A1390;
  param_1[4] = (int)&VTable_007A1378;
  st::fn_0074A7E3(param_1);
  st::fn_0074A5D8((int)param_1);
  if (param_1[0x14] != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)(param_1[0x14] + 8) + 0xc))(1);
    param_1[0x14] = 0;
  }
  if ((int *)param_1[0x1e] != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)param_1[0x1e] + 0xc))(1);
    param_1[0x1e] = 0;
  }
  st::external_00000016((LPCRITICAL_SECTION)(param_1 + 0x25));
  st::external_00000016((LPCRITICAL_SECTION)(param_1 + 0x1f));
  st::fn_0074D204(param_1 + 0x17);
  st::fn_0074D204(param_1 + 0x16);
  st::fn_0074D204(param_1 + 0x15);
  st::fn_00746F77((AnonShape_00746F77_1F40C93D *)param_1);
  return;
}

// 00749BE1 FUN_00749be1
#line 1 "decomp/ST.exe/functions/00749BE1/decomp.c"
undefined4 __thiscall st::fn_00749BE1(void *this,undefined4 param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  void *this_00;
  int iVar2;
  undefined4 *puVar3;
  void *local_8;

  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x7c);
  local_8 = this;
  st::external_00000018(lpCriticalSection);
  iVar2 = STField<int>(this,0x50);
  if (iVar2 == 0) {
    local_8 = nullptr;
    this_00 = (void *)st::fn_0072E530(0x50);
    if (this_00 == nullptr) {
      puVar3 = nullptr;
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*(int *)this + 0x1c))(0);
      puVar3 = st::fn_0074EEF3(this_00,0,STField<int>(this,4),&local_8,
                            -(uint)(iVar2 != 0) & iVar2 + 0xcU);
    }
    STField<undefined4 *>(this,0x50) = puVar3;
    if (puVar3 == nullptr) {
      st::external_00000019(lpCriticalSection);
      return 0x8007000e;
    }
    if ((int)local_8 < 0) {
      if (puVar3 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(puVar3[2] + 0xc))(1);
      }
      STField<undefined4>(this,0x50) = 0;
      st::external_00000019(lpCriticalSection);
      return 0x80004002;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar1 = (**(code **)(*(int *)this + 0x24))(param_1,param_2);
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar1 = (*(code *)**(undefined4 **)(iVar2 + 8))(iVar2 + 8,param_1,param_2);
  }
  st::external_00000019(lpCriticalSection);
  return uVar1;
}

// 00749CA4 FUN_00749ca4
#line 1 "decomp/ST.exe/functions/00749CA4/decomp.c"
void st::fn_00749CA4(int *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;

  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = param_2;
  pcVar3 = &DAT_007a1210;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    iVar1 = 0x10;
    bVar4 = true;
    pcVar2 = param_2;
    pcVar3 = &DAT_007a1200;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
      st::fn_00746E65(param_1,param_2,param_3);
      return;
    }
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_1 + 0x24))(param_2,param_3);
  return;
}

// 00749CEC FUN_00749cec
#line 1 "decomp/ST.exe/functions/00749CEC/decomp.c"
/* [STVTableApplier] Virtual slot 0079DB78+0x28

   [STVTableApplier] Virtual slot 007A13D0+0x28

   [STVTableApplier] Virtual slot 007A15E8+0x28 */

undefined4 __thiscall st::fn_00749CEC(int param_1,int param_2)

{
  if (param_2 == 1) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::external_0000005B(*(HANDLE *)(param_1 + 0x58));
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::external_00000015(*(HANDLE *)(param_1 + 0x58));
  }
  return 0;
}

// 00749D09 FUN_00749d09
#line 1 "decomp/ST.exe/functions/00749D09/decomp.c"
undefined4 __fastcall st::fn_00749D09(int *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  HANDLE local_c;
  int local_8;

  local_c = (HANDLE)param_1[0x16];
  local_8 = param_1[0x15];
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_1 + 0x48))();
  do {
    DVar1 = st::external_0000006C(2,&local_c,0,10000);
  } while (DVar1 == 0x102);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_1 + 0x4c))();
  if (DVar1 == 0) {
    uVar2 = 0x80040223;
  }
  else {
    st::fn_0074A277((int)param_1);
    uVar2 = 0;
  }
  return uVar2;
}

// 00749D5F FUN_00749d5f
#line 1 "decomp/ST.exe/functions/00749D5F/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0074A143 -> 00749D5F @ 0074A16E; CBaseRenderer::BeginFlush this; stable alias ESI */

void __fastcall st::fn_00749D5F(CBaseRenderer *param_1)

{
  DWORD DVar1;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  tagMSG local_1c;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  while (*(int *)(param_1 + 0xb4) != 0) {
    st::external_00000085(&local_1c,(HWND)0x0,0,0,0);
    st::external_00000050(1);
  }
  DVar1 = st::external_0000007B(8);
  if ((DVar1 >> 0x10 & 8) != 0) {
    lParam = 0;
    wParam = 0;
    Msg = 0;
    DVar1 = st::external_0000006A();
    st::external_0000008F(DVar1,Msg,wParam,lParam);
  }
  return;
}

// 00749DB2 FUN_00749db2
#line 1 "decomp/ST.exe/functions/00749DB2/decomp.c"
/* [STVTableApplier] Virtual slot 0079DB3C+0x1C

   [STVTableApplier] Virtual slot 007A1390+0x1C

   [STVTableApplier] Virtual slot 007A15A8+0x1C */

undefined4 st::fn_00749DB2(int param_1,DWORD param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  DWORD DVar2;

  if (param_3 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    DVar2 = st::fn_0074DCF0(*(undefined4 *)(param_1 + 0x50),param_2,(HWND)0x0,0);
    *param_3 = *(undefined4 *)(param_1 + 8);
    if (DVar2 == 0x102) {
      uVar1 = 0x40237;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

// 00749DF1 FUN_00749df1
#line 1 "decomp/ST.exe/functions/00749DF1/decomp.c"
undefined4 __thiscall st::fn_00749DF1(void *this,int param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  if (((*(int *)(STField<int>(this,0x78) + 0x18) != 0) && (STField<int>(this,0x70) != 1)) &&
     ((iVar1 = (**(code **)(*(int *)this + 0xa0))(), iVar1 != 1 || (param_1 == 0)))) {
    st::external_0000005B(STField<HANDLE>(this,0x5c));
    return 1;
  }
  st::external_00000015(STField<HANDLE>(this,0x5c));
  return 0;
}

// 00749E34 FUN_00749e34
#line 1 "decomp/ST.exe/functions/00749E34/decomp.c"
undefined4 st::fn_00749E34(AnonShape_00749E34_D5356433 *param_1)

{
  undefined1 *this;
  int *piVar1;

  st::external_00000018((LPCRITICAL_SECTION)(param_1 + 1));
  if (param_1->field_0008 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(param_1->field_006C + 0x18) == 0) {
      param_1->field_0008 = 0;
    }
    else {
      st::fn_0074706A((int)param_1);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      piVar1 = *(int **)(param_1->field_006C + 0x9c);
      if (piVar1 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*piVar1 + 0x18))(piVar1);
      }
      this = &param_1[-1].field_0x64;
      st::fn_0074A81D(this,1);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x80))();
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x28))(0);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 100))();
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x6c))();
      st::external_00000015(param_1->field_0050);
      st::fn_00749D5F((CBaseRenderer *)this);
      param_1->field_0054 = 0;
    }
  }
  st::external_00000019((LPCRITICAL_SECTION)(param_1 + 1));
  return 0;
}

// 00749EC2 FUN_00749ec2
#line 1 "decomp/ST.exe/functions/00749EC2/decomp.c"
int st::fn_00749EC2(AnonShape_00749EC2_C411FB81 *param_1)

{
  AnonShape_00749EC2_C411FB81 *lpCriticalSection;
  undefined1 *this;
  int *piVar1;
  int iVar2;
  int iVar3;

  lpCriticalSection = param_1 + 1;
  st::external_00000018((LPCRITICAL_SECTION)lpCriticalSection);
  iVar2 = param_1->field_0008;
  if (iVar2 != 1) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(param_1->field_006C + 0x18) != 0) {
      iVar3 = st::fn_007470E5((AnonShape_007470E5_0A8F5E67 *)param_1);
      if (iVar3 < 0) {
        st::external_00000019((LPCRITICAL_SECTION)lpCriticalSection);
        return iVar3;
      }
      this = &param_1[-1].field_0x64;
      st::fn_0074A81D(this,1);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x80))();
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x28))(1);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x6c))();
      st::fn_0074A760((int)this);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      piVar1 = *(int **)(param_1->field_006C + 0x9c);
      if (piVar1 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*piVar1 + 0x14))(piVar1);
      }
      if (iVar2 == 0) {
        param_1->field_0054 = 0;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)this + 0x70))();
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*(int *)this + 0x30))(iVar2);
      goto LAB_00749f79;
    }
    param_1->field_0008 = 1;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (**(code **)(*(int *)&param_1[-1].field_0x64 + 0x30))(1);
LAB_00749f79:
  st::external_00000019((LPCRITICAL_SECTION)lpCriticalSection);
  return iVar2;
}

// 00749F88 FUN_00749f88
#line 1 "decomp/ST.exe/functions/00749F88/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00749F88 -> EXTERNAL:00000019 @ 00749FFB | 00749F88 -> EXTERNAL:00000019 @ 0074A048 */

int st::fn_00749F88(LPCRITICAL_SECTION lpCriticalSection,int param_2,int param_3)

{
  HANDLE *lpCriticalSection_00;
  HANDLE *this;
  int *piVar1;
  int iVar2;
  int iVar3;

  lpCriticalSection_00 = &lpCriticalSection[4].LockSemaphore;
  st::external_00000018((LPCRITICAL_SECTION)lpCriticalSection_00);
  iVar3 = lpCriticalSection->RecursionCount;
  if (iVar3 != 2) {
    if (*(int *)((int)lpCriticalSection[4].OwningThread + 0x18) != 0) {
      st::external_00000015((HANDLE)lpCriticalSection[3].RecursionCount);
      iVar2 = st::fn_00747161((int *)lpCriticalSection,param_2,param_3);
      if (iVar2 < 0) {
        st::external_00000019((LPCRITICAL_SECTION)lpCriticalSection_00);
        return iVar2;
      }
      this = &lpCriticalSection[-1].OwningThread;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)((int)lpCriticalSection[-1].OwningThread + 0x28))(1);
      st::fn_0074A81D(this,0);
      piVar1 = *(int **)((int)lpCriticalSection[4].OwningThread + 0x9c);
      if (piVar1 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*piVar1 + 0x14))(piVar1);
      }
      if (iVar3 == 0) {
        lpCriticalSection[3].OwningThread = (HANDLE)0x0;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)((int)*this + 0x70))();
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar3 = (**(code **)((int)*this + 0x7c))();
      st::external_00000019((LPCRITICAL_SECTION)lpCriticalSection_00);
      return iVar3;
    }
    st::fn_00747406(&lpCriticalSection[-1].OwningThread,1,nullptr,
                 -(uint)(&lpCriticalSection[-1].OwningThread != nullptr) &
                 (uint)lpCriticalSection);
    lpCriticalSection->RecursionCount = 2;
  }
  st::external_00000019((LPCRITICAL_SECTION)lpCriticalSection_00);
  return 0;
}

// 0074A057 FUN_0074a057
#line 1 "decomp/ST.exe/functions/0074A057/decomp.c"
/* [STVTableApplier] Virtual slot 0079DB78+0x18

   [STVTableApplier] Virtual slot 007A13D0+0x18

   [STVTableApplier] Virtual slot 007A15E8+0x18 */

undefined4 st::fn_0074A057(void)

{
  return 1;
}

// 0074A05B FUN_0074a05b
#line 1 "decomp/ST.exe/functions/0074A05B/decomp.c"
undefined4 __thiscall st::fn_0074A05B(void *this,int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  void *this_00;
  undefined4 *puVar2;
  void *local_8;

  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x7c);
  local_8 = this;
  st::external_00000018(lpCriticalSection);
  local_8 = nullptr;
  if (param_1 == 0) {
    if (STField<int>(this,0x78) == 0) {
      this_00 = (void *)st::fn_0072E530(0xe0);
      if (this_00 == nullptr) {
        puVar2 = nullptr;
      }
      else {
        puVar2 = st::fn_0074A95F(this_00,(int)this,&local_8,(short *)&DAT_007ee298);
      }
      STField<undefined4 *>(this,0x78) = puVar2;
    }
    uVar1 = STField<undefined4>(this,0x78);
    st::external_00000019(lpCriticalSection);
  }
  else {
    st::external_00000019(lpCriticalSection);
    uVar1 = 0;
  }
  return uVar1;
}

// 0074A0C1 FUN_0074a0c1
#line 1 "decomp/ST.exe/functions/0074A0C1/decomp.c"
undefined4 st::fn_0074A0C1(int param_1,ushort *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;

  if (param_3 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    iVar2 = st::fn_0074D5D3(param_2,(ushort *)&DAT_007ee298);
    if (iVar2 == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*(int *)(param_1 + -0xc) + 0x1c))(0);
      piVar3 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 0xcU);
      *param_3 = piVar3;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar3 + 4))(piVar3);
      uVar1 = 0;
    }
    else {
      *param_3 = 0;
      uVar1 = 0x80040216;
    }
  }
  return uVar1;
}

// 0074A177 FUN_0074a177
#line 1 "decomp/ST.exe/functions/0074A177/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0074A177 returns zeroed full register at 0074A18F @ 0074A192 */

uint __fastcall st::fn_0074A177(int *param_1)

{
  if ((AnonShape_0074F0D8_3A9DA5F1 *)param_1[0x14] != nullptr) {
    st::fn_0074F0D8((AnonShape_0074F0D8_3A9DA5F1 *)param_1[0x14]);
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_1 + 0x28))(1);
  return 0;
}

// 0074A193 FUN_0074a193
#line 1 "decomp/ST.exe/functions/0074A193/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0074A193 returns zeroed full register at 0074A1A1 @ 0074A1A4 */

uint __fastcall st::fn_0074A193(void *param_1)

{
  st::fn_0074A81D(param_1,1);
  STField<undefined4>(param_1,0x60) = 0;
  return 0;
}

// 0074A1A7 FUN_0074a1a7
#line 1 "decomp/ST.exe/functions/0074A1A7/decomp.c"
/* [STVTableApplier] Virtual slot 0079DB78+0x74

   [STVTableApplier] Virtual slot 007A13D0+0x74

   [STVTableApplier] Virtual slot 007A15E8+0x74 */

undefined4 st::fn_0074A1A7(void)

{
  return 0;
}

// 0074A1AA FUN_0074a1aa
#line 1 "decomp/ST.exe/functions/0074A1AA/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0074A1AA returns zeroed full register at 0074A1C0 @ 0074A1C3 */

uint __fastcall st::fn_0074A1AA(int *param_1)

{
  if ((AnonShape_0074F0D8_3A9DA5F1 *)param_1[0x14] != nullptr) {
    st::fn_0074F0D8((AnonShape_0074F0D8_3A9DA5F1 *)param_1[0x14]);
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_1 + 0x70))();
  return 0;
}

// 0074A1C4 FUN_0074a1c4
#line 1 "decomp/ST.exe/functions/0074A1C4/decomp.c"
/* [STVTableApplier] Virtual slot 007A13D0+0x90

   [STVTableApplier] Virtual slot 007A15E8+0x90 */

undefined4 st::fn_0074A1C4(void)

{
  return 0;
}

// 0074A1C9 FUN_0074a1c9
#line 1 "decomp/ST.exe/functions/0074A1C9/decomp.c"
undefined4 __fastcall st::fn_0074A1C9(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;

  piVar1 = (int *)param_1[0x2b];
  if (piVar1 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x2b] = 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1[0x1e] + 0x18) == 0) {
    uVar2 = 1;
  }
  else if (param_1[5] == 0) {
    st::fn_0074A81D(param_1,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 100))();
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x70))();
    param_1[0x18] = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x80040224;
  }
  return uVar2;
}

// 0074A220 FUN_0074a220
#line 1 "decomp/ST.exe/functions/0074A220/decomp.c"
/* [STVTableApplier] Virtual slot 0079DB78+0x58

   [STVTableApplier] Virtual slot 007A13D0+0x58

   [STVTableApplier] Virtual slot 007A15E8+0x58 */

undefined4 __thiscall st::fn_0074A220(int *param_1,int *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_ESI;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*param_2 + 0x14))(param_2,param_3,param_4);
  if (-1 < iVar1) {
    if (((int)param_4[1] <= (int)param_3[1]) &&
       (((int)param_4[1] < (int)param_3[1] || (*param_4 < *param_3)))) {
      return 0x80040228;
    }
    if (param_1[6] != 0) {
      /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable/callback call with explicit __thiscall receiver */
      uVar2 = (**(code **)(*param_1 + 0x5c))(unaff_ESI,param_3,param_4);
      return uVar2;
    }
  }
  return 0;
}

// 0074A271 FUN_0074a271
#line 1 "decomp/ST.exe/functions/0074A271/decomp.c"
/* [STVTableApplier] Virtual slot 007A13D0+0x5C */

undefined4 st::fn_0074A271(void)

{
  return 1;
}

// 0074A277 FUN_0074a277
#line 1 "decomp/ST.exe/functions/0074A277/decomp.c"
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __fastcall st::fn_0074A277(int param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}

// 0074A27C FUN_0074a27c
#line 1 "decomp/ST.exe/functions/0074A27C/decomp.c"
bool __fastcall st::fn_0074A27C(int param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(**(int **)(param_1 + 0x18) + 0x18))(*(int **)(param_1 + 0x18),iVar1);
    st::fn_0074A277(param_1);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::external_0000005B(*(HANDLE *)(param_1 + 0x54));
  return iVar1 == 0;
}

// 0074A2AB FUN_0074a2ab
#line 1 "decomp/ST.exe/functions/0074A2AB/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=0074B44A @ 0074B451
   -> TEST TEST EAX,EAX */

int __thiscall st::fn_0074A2AB(void *this,int param_1)

{
  int iVar1;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;

  if (param_1 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*(int *)this + 0x58))(param_1,&local_c,local_14);
    if (-1 < iVar1) {
      if (iVar1 == 0) {
        st::external_00000015(STField<HANDLE>(this,0x54));
        return 1;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*STField<int *>(this,0x18) + 0x10))
                        (STField<int *>(this,0x18),STField<undefined4>(this,0x20),
                         STField<undefined4>(this,0x24),local_c,local_8,
                         STField<undefined4>(this,0x54),(int)this + 0x68);
      return (uint)(-1 < iVar1);
    }
  }
  return 0;
}

// 0074A30E FUN_0074a30e
#line 1 "decomp/ST.exe/functions/0074A30E/decomp.c"
/* [STVTableApplier] Virtual slot 0079DB78+0xA8

   [STVTableApplier] Virtual slot 007A13D0+0xA8

   [STVTableApplier] Virtual slot 007A15E8+0xA8 */

undefined4 __thiscall st::fn_0074A30E(int *param_1,int param_2)

{
  undefined4 uVar1;

  if ((param_2 == 0) || (param_1[0x19] == 0)) {
    uVar1 = 1;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x38))(param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0xac))(param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x3c))(param_2);
    uVar1 = 0;
  }
  return uVar1;
}

// 0074A347 FUN_0074a347
#line 1 "decomp/ST.exe/functions/0074A347/decomp.c"
bool __fastcall st::fn_0074A347(int param_1)

{
  int iVar1;

  st::external_00000018((LPCRITICAL_SECTION)(param_1 + 0x94));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x6c);
  st::external_00000019((LPCRITICAL_SECTION)(param_1 + 0x94));
  return iVar1 != 0;
}

// 0074A36E FUN_0074a36e
#line 1 "decomp/ST.exe/functions/0074A36E/decomp.c"
undefined4 __fastcall st::fn_0074A36E(int param_1)

{
  int *piVar1;
  undefined4 uVar2;

  st::external_00000018((LPCRITICAL_SECTION)(param_1 + 0x94));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x6c);
  if (piVar1 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar2 = *(undefined4 *)(param_1 + 0x6c);
  st::external_00000019((LPCRITICAL_SECTION)(param_1 + 0x94));
  return uVar2;
}

// 0074A39B FUN_0074a39b
#line 1 "decomp/ST.exe/functions/0074A39B/decomp.c"
undefined4 __thiscall st::fn_0074A39B(void *this,int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  int iVar1;
  undefined4 uVar2;

  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x7c);
  st::external_00000018(lpCriticalSection);
  STField<undefined4>(this,0xb4) = 1;
  iVar1 = st::fn_00748721((AnonShape_00748721_F11EED2A *)(STField<int>(this,0x78) + 0x98),param_1);
  if (iVar1 == 0) {
    iVar1 = (STField<int *>(this,0x78))[0x33];
    if (iVar1 != 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*STField<int *>(this,0x78) + 0x24))(iVar1);
    }
    lpCriticalSection_00 = (LPCRITICAL_SECTION)((int)this + 0x94);
    st::external_00000018(lpCriticalSection_00);
    if (((STField<int>(this,0x6c) == 0) && (STField<int>(this,0x70) == 0)) &&
       (STField<int>(this,0x60) == 0)) {
      if (STField<void *>(this,0x50) != nullptr) {
        st::fn_0074EF87(STField<void *>(this,0x50),param_1);
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if ((STField<int>(this,100) == 1) &&
         (iVar1 = (**(code **)(*(int *)this + 0x54))(param_1), iVar1 == 0)) {
        STField<undefined4>(this,0xb4) = 0;
        st::external_00000019(lpCriticalSection_00);
        st::external_00000019(lpCriticalSection);
        return 0x8004022b;
      }
      STField<undefined4>(this,0xb8) = *(undefined4 *)(STField<int>(this,0x78) + 0xc0);
      uVar2 = *(undefined4 *)(STField<int>(this,0x78) + 0xc4);
      STField<int *>(this,0x6c) = param_1;
      STField<undefined4>(this,0xbc) = uVar2;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1 + 4))(param_1);
      if (STField<int>(this,100) == 0) {
        st::fn_0074A81D(this,1);
      }
      st::external_00000019(lpCriticalSection_00);
      st::external_00000019(lpCriticalSection);
      uVar2 = 0;
    }
    else {
      st::external_00000015(STField<HANDLE>(this,0x5c));
      STField<undefined4>(this,0xb4) = 0;
      st::external_00000019(lpCriticalSection_00);
      st::external_00000019(lpCriticalSection);
      uVar2 = 0x8000ffff;
    }
  }
  else {
    STField<undefined4>(this,0xb4) = 0;
    st::external_00000019(lpCriticalSection);
    uVar2 = 0x80004005;
  }
  return uVar2;
}

// 0074A4D1 FUN_0074a4d1
#line 1 "decomp/ST.exe/functions/0074A4D1/decomp.c"
uint __thiscall st::fn_0074A4D1(void *this,undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_retaddr;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar1 = (**(code **)(*(int *)this + 0x98))(param_1);
  if ((int)uVar1 < 0) {
    return -(uint)(uVar1 != 0x8004022b) & uVar1;
  }
  if (STField<int>(this,0x14) == 1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0x50))();
    STField<undefined4>(this,0xb4) = 0;
    st::external_00000018((LPCRITICAL_SECTION)((int)this + 0x7c));
    if (STField<int>(this,0x14) == 0) {
      st::external_00000019((LPCRITICAL_SECTION)((int)this + 0x7c));
      return 0;
    }
    STField<undefined4>(this,0xb4) = 1;
    st::external_00000018((LPCRITICAL_SECTION)((int)this + 0x94));
    /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0x34))(unaff_retaddr);
    st::external_00000019((LPCRITICAL_SECTION)((int)this + 0x94));
    st::external_00000019((LPCRITICAL_SECTION)((int)this + 0x7c));
    st::external_00000015(STField<HANDLE>(this,0x5c));
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (**(code **)(*(int *)this + 0x2c))();
  if (iVar2 < 0) {
    STField<undefined4>(this,0xb4) = 0;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0x50))();
    STField<undefined4>(this,0xb4) = 0;
    st::external_00000018((LPCRITICAL_SECTION)((int)this + 0x7c));
    if (STField<int>(this,0x14) != 0) {
      st::external_00000018((LPCRITICAL_SECTION)((int)this + 0x94));
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0xa8))(STField<undefined4>(this,0x6c));
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x70))();
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x60))();
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x6c))();
      st::external_00000019((LPCRITICAL_SECTION)((int)this + 0x94));
    }
    st::external_00000019((LPCRITICAL_SECTION)((int)this + 0x7c));
  }
  return 0;
}

// 0074A5D8 FUN_0074a5d8
#line 1 "decomp/ST.exe/functions/0074A5D8/decomp.c"
undefined4 __fastcall st::fn_0074A5D8(int param_1)

{
  int *piVar1;

  st::external_00000018((LPCRITICAL_SECTION)(param_1 + 0x94));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x6c);
  if (piVar1 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  st::external_00000019((LPCRITICAL_SECTION)(param_1 + 0x94));
  return 0;
}

// 0074A612 FUN_0074a612
#line 1 "decomp/ST.exe/functions/0074A612/decomp.c"
void __fastcall st::fn_0074A612(int *param_1)

{
  st::external_00000018((LPCRITICAL_SECTION)(param_1 + 0x25));
  if (param_1[0x30] != 0) {
    param_1[0x30] = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x60))();
  }
  st::external_00000019((LPCRITICAL_SECTION)(param_1 + 0x25));
  return;
}

// 0074A646 FUN_0074a646
#line 1 "decomp/ST.exe/functions/0074A646/decomp.c"
undefined4 __fastcall st::fn_0074A646(AnonShape_0074A646_320FC166 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  MMRESULT MVar6;
  undefined4 uVar7;
  AnonShape_0074A646_320FC166 *pAVar8;
  undefined8 uVar9;
  AnonShape_0074A646_320FC166 *local_c;
  AnonShape_0074A646_320FC166 *local_8;

  if (((param_1->field_0070 == 0) || (param_1->field_0074 != 0)) || (param_1->field_00C0 != 0)) {
LAB_0074a6c4:
    uVar7 = 0;
  }
  else {
    piVar1 = param_1->field_0018;
    local_c = param_1;
    local_8 = param_1;
    if (piVar1 != nullptr) {
      uVar2 = param_1->field_0020;
      iVar3 = param_1->field_0024;
      uVar4 = param_1->field_00B8;
      pAVar8 = (AnonShape_0074A646_320FC166 *)(uVar2 + param_1->field_00B8);
      iVar5 = param_1->field_00BC;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 0xc))(piVar1,&local_c);
      uVar9 = st::fn_0072E440
                        ((int)pAVar8 - (int)local_c,
                         ((iVar3 + iVar5 + (uint)CARRY4(uVar2,uVar4)) - (int)local_8) -
                         (uint)(pAVar8 < local_c),10000,0);
      if (0x31 < (int)(UINT)uVar9) {
        MVar6 = st::external_000000DF((UINT)uVar9,10,&LAB_0074a606,(DWORD_PTR)param_1,0);
        param_1->field_00C0 = MVar6;
        if (MVar6 != 0) goto LAB_0074a6c4;
      }
    }
    uVar7 = st::fn_0074A6CB((AnonShape_0074A6CB_17890C91 *)param_1);
  }
  return uVar7;
}

// 0074A6CB FUN_0074a6cb
#line 1 "decomp/ST.exe/functions/0074A6CB/decomp.c"
undefined4 __fastcall st::fn_0074A6CB(AnonShape_0074A6CB_17890C91 *param_1)

{
  undefined1 *lpCriticalSection;
  undefined4 uVar1;

  lpCriticalSection = &param_1->field_0x94;
  st::external_00000018((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1->field_0064 == 0) {
    st::external_00000019((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = 0;
  }
  else {
    param_1->field_00C0 = 0;
    if (param_1->field_0050 != nullptr) {
      st::fn_0074F107(param_1->field_0050);
    }
    param_1->field_0074 = 1;
    uVar1 = st::fn_00747406(param_1,1,nullptr,
                         -(uint)(param_1 != nullptr) &
                         (uint)&param_1->field_0xc);
    st::external_00000019((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return uVar1;
}

// 0074A72A FUN_0074a72a
#line 1 "decomp/ST.exe/functions/0074A72A/decomp.c"
undefined4 __fastcall st::fn_0074A72A(AnonShape_0074A72A_A408BA44 *param_1)

{
  st::fn_0074A760((int)param_1);
  st::external_00000018((LPCRITICAL_SECTION)&param_1->field_0x94);
  param_1->field_00B8 = 0;
  param_1->field_0070 = 0;
  param_1->field_0074 = 0;
  param_1->field_00BC = 0;
  st::external_00000019((LPCRITICAL_SECTION)&param_1->field_0x94);
  return 0;
}

// 0074A760 FUN_0074a760
#line 1 "decomp/ST.exe/functions/0074A760/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_0074A760(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(UINT *)(param_1 + 0xc0) != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::external_000000DC(*(UINT *)(param_1 + 0xc0));
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  return;
}

// 0074A77D FUN_0074a77d
#line 1 "decomp/ST.exe/functions/0074A77D/decomp.c"
undefined4 __fastcall st::fn_0074A77D(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  int iVar2;

  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x25);
  st::external_00000018(lpCriticalSection);
  if (param_1[0x19] != 1) {
    param_1[0x19] = 1;
    st::external_000000DD(1);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x40))();
    if (param_1[0x1b] == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar1 = (**(code **)(*param_1 + 0x60))();
      st::external_00000019(lpCriticalSection);
      return uVar1;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)(*param_1 + 0x54))(param_1[0x1b]);
    if (iVar2 == 0) {
      st::external_00000015((HANDLE)param_1[0x15]);
    }
  }
  st::external_00000019(lpCriticalSection);
  return 0;
}

// 0074A7E3 FUN_0074a7e3
#line 1 "decomp/ST.exe/functions/0074A7E3/decomp.c"
undefined4 __fastcall st::fn_0074A7E3(int *param_1)

{
  st::external_00000018((LPCRITICAL_SECTION)(param_1 + 0x25));
  param_1[0x1d] = 0;
  if (param_1[0x19] == 1) {
    param_1[0x19] = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x44))();
    st::external_000000DE(1);
  }
  st::external_00000019((LPCRITICAL_SECTION)(param_1 + 0x25));
  return 0;
}

// 0074A81D FUN_0074a81d
#line 1 "decomp/ST.exe/functions/0074A81D/decomp.c"
void __thiscall st::fn_0074A81D(void *this,undefined4 param_1)

{
  st::external_00000018((LPCRITICAL_SECTION)((int)this + 0x94));
  STField<undefined4>(this,0xb0) = param_1;
  st::external_00000019((LPCRITICAL_SECTION)((int)this + 0x94));
  return;
}

// 0074A844 FUN_0074a844
#line 1 "decomp/ST.exe/functions/0074A844/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0074A844 -> 00747406 @ 0074A881 */

void __thiscall st::fn_0074A844(void *this,int *param_1,int *param_2)

{
  int iVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)*param_1)(param_1,&DAT_007a1ae0,&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0xc))(param_1,0x19,param_2,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  st::fn_00747406(this,0x19,param_2,0);
  return;
}

// 0074A88B FUN_0074a88b
#line 1 "decomp/ST.exe/functions/0074A88B/decomp.c"
void __fastcall st::fn_0074A88B(AnonShape_0074A88B_B70E22D8 *param_1)

{
  int iVar1;
  int *piVar2;

  st::external_00000018((LPCRITICAL_SECTION)&param_1->field_0x94);
  if ((((param_1->field_0060 == 0) && (iVar1 = param_1->field_0078, *(int *)(iVar1 + 0x18) != 0)) &&
      (*(char *)(iVar1 + 0xa1) == '\0')) &&
     ((param_1->field_0070 == 0 && (param_1->field_00B0 == 1)))) {
    if (iVar1 == 0) {
      piVar2 = nullptr;
    }
    else {
      piVar2 = (int *)(iVar1 + 0xc);
    }
    st::fn_00747406(param_1,5,piVar2,0);
    st::fn_0074A81D(param_1,0);
  }
  st::external_00000019((LPCRITICAL_SECTION)&param_1->field_0x94);
  return;
}

// 0074A8EB FUN_0074a8eb
#line 1 "decomp/ST.exe/functions/0074A8EB/decomp.c"
undefined4 __fastcall st::fn_0074A8EB(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;

  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x25);
  st::external_00000018(lpCriticalSection);
  iVar1 = param_1[0x1e];
  if (*(int *)(iVar1 + 0x18) == 0) {
    st::external_00000019(lpCriticalSection);
    uVar2 = 0;
  }
  else {
    if (iVar1 == 0) {
      piVar3 = nullptr;
    }
    else {
      piVar3 = (int *)(iVar1 + 0xc);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)(iVar1 + 0xc) + 4))(iVar1 + 0xc);
    st::fn_00747406(param_1,0x16,piVar3,0);
    uVar2 = 1;
    param_1[0x18] = 1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x70))();
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)(param_1[0x1e] + 0xc) + 8))(param_1[0x1e] + 0xc);
    st::external_00000019(lpCriticalSection);
  }
  return uVar2;
}

// 0074A959 FUN_0074a959
#line 1 "decomp/ST.exe/functions/0074A959/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STVTableApplier] Virtual slot 007A13D0+0x38

   [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_0074A959(void)

{
  return;
}

// 0074A95C FUN_0074a95c
#line 1 "decomp/ST.exe/functions/0074A95C/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STVTableApplier] Virtual slot 007A13D0+0x3C

   [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_0074A95C(void)

{
  return;
}

// 0074A95F FUN_0074a95f
#line 1 "decomp/ST.exe/functions/0074A95F/decomp.c"
undefined4 * __thiscall st::fn_0074A95F(void *this,int param_1,undefined4 param_2,short *param_3)

{
  st::fn_0074857E(this,0,param_1,param_1 + 0x7c,param_2,param_3);
  STField<int>(this,0xd8) = param_1;
  *(VTable_007A1510 **)this = &VTable_007A1510;
  STField<VTable_007A14C8 *>(this,0xc) = &VTable_007A14C8;
  STField<VTable_007A14B0 *>(this,0x10) = &VTable_007A14B0;
  STField<VTable_007A1488 *>(this,0x98) = &VTable_007A1488;
  return this;
}

// 0074A9A6 FUN_0074a9a6
#line 1 "decomp/ST.exe/functions/0074A9A6/decomp.c"
undefined4 * __thiscall st::fn_0074A9A6(void *this,byte param_1)

{
  st::fn_007485C5((int)this);
  if ((param_1 & 1) != 0) {
    st::fn_0072E2B0(this);
  }
  return this;
}

// 0074A9C2 FUN_0074a9c2
#line 1 "decomp/ST.exe/functions/0074A9C2/decomp.c"
int st::fn_0074A9C2(int param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x7c);
  st::external_00000018(lpCriticalSection);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x94);
  st::external_00000018(lpCriticalSection_00);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*(int *)(param_1 + -0xc) + 0x38))();
  if (iVar1 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x68))();
    if (-1 < iVar1) {
      iVar1 = st::fn_007482A5();
    }
  }
  st::external_00000019(lpCriticalSection_00);
  st::external_00000019(lpCriticalSection);
  return iVar1;
}

// 0074AA28 FUN_0074aa28
#line 1 "decomp/ST.exe/functions/0074AA28/decomp.c"
undefined4 st::fn_0074AA28(int param_1)

{
  undefined4 uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x7c);
  st::external_00000018(lpCriticalSection_00);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x94);
  st::external_00000018(lpCriticalSection);
  st::fn_00748946(param_1);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(**(int **)(param_1 + 0xcc) + 0x84))();
  st::external_00000019(lpCriticalSection);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar1 = (**(code **)(**(int **)(param_1 + 0xcc) + 100))();
  st::external_00000019(lpCriticalSection_00);
  return uVar1;
}

// 0074AA87 FUN_0074aa87
#line 1 "decomp/ST.exe/functions/0074AA87/decomp.c"
int st::fn_0074AA87(int param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x7c);
  st::external_00000018(lpCriticalSection);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x94);
  st::external_00000018(lpCriticalSection_00);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x88))();
  if (-1 < iVar1) {
    iVar1 = st::fn_0074896B(param_1);
  }
  st::external_00000019(lpCriticalSection_00);
  st::external_00000019(lpCriticalSection);
  return iVar1;
}

// 0074AAE1 FUN_0074aae1
#line 1 "decomp/ST.exe/functions/0074AAE1/decomp.c"
/* [STVTableApplier] Virtual slot 0079DC3C+0x18

   [STVTableApplier] Virtual slot 007A1488+0x18 */

void st::fn_0074AAE1(int param_1,undefined4 param_2)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(**(int **)(param_1 + 0x40) + 0x9c))(param_2);
  return;
}

// 0074AAF7 FUN_0074aaf7
#line 1 "decomp/ST.exe/functions/0074AAF7/decomp.c"
void __fastcall st::fn_0074AAF7(int param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(**(int **)(param_1 + 0xd8) + 0x8c))();
  if (-1 < iVar1) {
    st::fn_00747F91();
  }
  return;
}

// 0074AB15 FUN_0074ab15
#line 1 "decomp/ST.exe/functions/0074AB15/decomp.c"
void __thiscall st::fn_0074AB15(void *this,undefined4 param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*STField<int *>(this,0xd8) + 0x94))(param_1);
  if (-1 < iVar1) {
    st::fn_00747F52();
  }
  return;
}

// 0074AB3D FUN_0074ab3d
#line 1 "decomp/ST.exe/functions/0074AB3D/decomp.c"
undefined4 st::fn_0074AB3D(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  short *psVar2;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    psVar2 = st::external_000000CD(8);
    *param_2 = psVar2;
    if (psVar2 == nullptr) {
      uVar1 = 0x8007000e;
    }
    else {
      st::fn_0074D580(psVar2,(short *)&DAT_007ee298);
      uVar1 = 0;
    }
  }
  return uVar1;
}

// 0074AB73 FUN_0074ab73
#line 1 "decomp/ST.exe/functions/0074AB73/decomp.c"
/* [STVTableApplier] Virtual slot 0079DCBC+0x20

   [STVTableApplier] Virtual slot 007A1510+0x20 */

void __thiscall st::fn_0074AB73(int param_1,undefined4 param_2)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(**(int **)(param_1 + 0xd8) + 0xb0))(param_2);
  return;
}

// 0074AB88 FUN_0074ab88
#line 1 "decomp/ST.exe/functions/0074AB88/decomp.c"
/* [STVTableApplier] Virtual slot 0079DCBC+0x14

   [STVTableApplier] Virtual slot 007A1510+0x14 */

void __fastcall st::fn_0074AB88(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0074ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(**(int **)(param_1 + 0xd8) + 0x74))();
  return;
}

// 0074AB93 FUN_0074ab93
#line 1 "decomp/ST.exe/functions/0074AB93/decomp.c"
/* [STVTableApplier] Virtual slot 0079DCBC+0x18

   [STVTableApplier] Virtual slot 007A1510+0x18 */

void __fastcall st::fn_0074AB93(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0074ab9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(**(int **)(param_1 + 0xd8) + 0x78))();
  return;
}

// 0074AB9E FUN_0074ab9e
#line 1 "decomp/ST.exe/functions/0074AB9E/decomp.c"
/* [STVTableApplier] Virtual slot 0079DCBC+0x24

   [STVTableApplier] Virtual slot 007A1510+0x24 */

void __thiscall st::fn_0074AB9E(void *param_1,undefined4 *param_2)

{
  uint uVar1;

  uVar1 = st::fn_00747F57(param_1,param_2);
  if (-1 < (int)uVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*STField<int *>(param_1,0xd8) + 0x90))(param_2);
  }
  return;
}

// 0074ABC4 FUN_0074abc4
#line 1 "decomp/ST.exe/functions/0074ABC4/decomp.c"
undefined4 * __thiscall st::fn_0074ABC4(void *this,undefined4 *param_1,undefined4 param_2,int param_3)

{
  st::fn_00749A93(this,param_1,param_2,param_3);
  STField<undefined4>(this,0xd4) = 0;
  STField<undefined4>(this,0x108) = 0;
  STField<undefined4>(this,0x10c) = 0;
  *(VTable_007A15E8 **)this = &VTable_007A15E8;
  STField<VTable_007A15A8 *>(this,0xc) = &VTable_007A15A8;
  STField<VTable_007A1590 *>(this,0x10) = &VTable_007A1590;
  STField<VTable_007A1568 *>(this,200) = &VTable_007A1568;
  STField<VTable_007A1550 *>(this,0xcc) = &VTable_007A1550;
  st::fn_0074AC6E(this);
  return this;
}

// 0074AC25 FUN_0074ac25
#line 1 "decomp/ST.exe/functions/0074AC25/decomp.c"
int * __thiscall st::fn_0074AC25(void *this,byte param_1)

{
  st::fn_0074AC41(this);
  if ((param_1 & 1) != 0) {
    st::fn_0072E2B0(this);
  }
  return this;
}

// 0074AC41 FUN_0074ac41
#line 1 "decomp/ST.exe/functions/0074AC41/decomp.c"
void __fastcall st::fn_0074AC41(int *param_1)

{
  *param_1 = (int)&VTable_007A15E8;
  param_1[3] = (int)&VTable_007A15A8;
  param_1[4] = (int)&VTable_007A1590;
  param_1[0x32] = (int)&VTable_007A1568;
  param_1[0x33] = (int)&VTable_007A1550;
  st::fn_00749B5F(param_1);
  return;
}

// 0074AC6E FUN_0074ac6e
#line 1 "decomp/ST.exe/functions/0074AC6E/decomp.c"
void __fastcall st::fn_0074AC6E(AnonShape_0074AC6E_15F8B431 *param_1)

{
  DWORD DVar1;

  param_1->field_0120 = 0xfffffc18;
  param_1->field_0124 = 0xffffffff;
  DVar1 = st::external_000000DA();
  param_1->field_00F4 = 0xffffffff;
  param_1->field_0140 = DVar1;
  param_1->field_00EC = 0xfffb6c20;
  param_1->field_0110 = 0;
  param_1->field_0118 = 0;
  param_1->field_0128 = 0;
  param_1->field_0130 = 0;
  param_1->field_0100 = 0;
  param_1->field_00DC = 0;
  param_1->field_00F8 = 0;
  param_1->field_00E0 = 0;
  param_1->field_00F0 = 0;
  param_1->field_00E4 = 0;
  param_1->field_010C = 0;
  param_1->field_0108 = 0;
  param_1->field_0114 = 0;
  param_1->field_011C = 0;
  param_1->field_012C = 0;
  param_1->field_013C = 0;
  param_1->field_0138 = 0;
  param_1->field_0134 = 0;
  param_1->field_00D0 = 0;
  param_1->field_00E8 = 0;
  param_1->field_00D8 = 0;
  param_1->field_0104 = 0;
  return;
}

// 0074AD27 FUN_0074ad27
#line 1 "decomp/ST.exe/functions/0074AD27/decomp.c"
/* [STVTableApplier] Virtual slot 0079DB78+0x40

   [STVTableApplier] Virtual slot 007A15E8+0x40 */

undefined4 __fastcall st::fn_0074AD27(int *param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_1 + 0xbc))();
  return 0;
}

// 0074AD32 FUN_0074ad32
#line 1 "decomp/ST.exe/functions/0074AD32/decomp.c"
/* [STVTableApplier] Virtual slot 0079DB78+0x44

   [STVTableApplier] Virtual slot 007A15E8+0x44 */

undefined4 __fastcall st::fn_0074AD32(int param_1)

{
  DWORD DVar1;

  DVar1 = st::external_000000DA();
  *(int *)(param_1 + 0x140) = DVar1 - *(int *)(param_1 + 0x140);
  return 0;
}

// 0074AD47 FUN_0074ad47
#line 1 "decomp/ST.exe/functions/0074AD47/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STVTableApplier] Virtual slot 0079DB78+0x48

   [STVTableApplier] Virtual slot 007A15E8+0x48

   [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_0074AD47(void)

{
  return;
}

// 0074AD48 FUN_0074ad48
#line 1 "decomp/ST.exe/functions/0074AD48/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STVTableApplier] Virtual slot 0079DB78+0x4C

   [STVTableApplier] Virtual slot 007A15E8+0x4C

   [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_0074AD48(void)

{
  return;
}

// 0074AD49 FUN_0074ad49
#line 1 "decomp/ST.exe/functions/0074AD49/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0074B06D -> 0074AD49 @ 0074B402

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0074AD49(void *this,undefined4 param_1,int *param_2)

{
  STField<undefined4>(this,0x138) = param_1;
  STField<int *>(this,0x13c) = param_2;
  return;
}

// 0074AD60 FUN_0074ad60
#line 1 "decomp/ST.exe/functions/0074AD60/decomp.c"
/* [STVTableApplier] Virtual slot 0079DB78+0xB4

   [STVTableApplier] Virtual slot 007A15E8+0xB4 */

void __thiscall st::fn_0074AD60(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;

  uVar4 = param_2 / 10000;
  if ((1000 < (int)uVar4) || ((int)uVar4 < -1000)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(param_1 + 0x10c) < 2) {
      uVar4 = 0;
    }
    else {
      uVar4 = (((int)uVar4 < 1) - 1 & 2000) - 1000;
    }
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar3 = *(int *)(param_1 + 0x10c);
  if (1 < iVar3) {
    puVar1 = (uint *)(param_1 + 0x110);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar4;
    *(int *)(param_1 + 0x114) =
         *(int *)(param_1 + 0x114) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar2,uVar4);
    uVar4 = uVar4 * uVar4;
    puVar1 = (uint *)(param_1 + 0x118);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar4;
    *(int *)(param_1 + 0x11c) =
         *(int *)(param_1 + 0x11c) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar2,uVar4);
  }
  if (2 < iVar3) {
    uVar4 = param_3 / 10000;
    if ((1000 < (int)uVar4) || ((int)uVar4 < 0)) {
      uVar4 = 1000;
    }
    puVar1 = (uint *)(param_1 + 0x128);
    uVar5 = uVar4 * uVar4;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar5;
    *(int *)(param_1 + 300) =
         *(int *)(param_1 + 300) + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar2,uVar5);
    puVar1 = (uint *)(param_1 + 0x130);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar4;
    *(int *)(param_1 + 0x134) =
         *(int *)(param_1 + 0x134) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar2,uVar4);
  }
  *(int *)(param_1 + 0x10c) = iVar3 + 1;
  return;
}

// 0074AE16 FUN_0074ae16
#line 1 "decomp/ST.exe/functions/0074AE16/decomp.c"
void __fastcall st::fn_0074AE16(int param_1)

{
  DWORD dwMilliseconds;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0xd8) < 1) {
    dwMilliseconds = 0;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    dwMilliseconds = *(int *)(param_1 + 0xd8) / 10000;
  }
  st::external_00000050(dwMilliseconds);
  return;
}

// 0074AE34 FUN_0074ae34
#line 1 "decomp/ST.exe/functions/0074AE34/decomp.c"
void __fastcall st::fn_0074AE34(int *param_1)

{
  param_1[0x37] = 0;
  param_1[0x38] = 5000000;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_1 + 0xb4))(param_1[0x4e],param_1[0x4f]);
  st::fn_0074AE16((int)param_1);
  return;
}

// 0074AE67 FUN_0074ae67
#line 1 "decomp/ST.exe/functions/0074AE67/decomp.c"
void __fastcall st::fn_0074AE67(int *param_1)

{
  DWORD DVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_1 + 0xb4))(param_1[0x4e],param_1[0x4f]);
  DVar1 = st::external_000000DA();
  param_1[0x39] = DVar1;
  return;
}

// 0074AE8E FUN_0074ae8e
#line 1 "decomp/ST.exe/functions/0074AE8E/decomp.c"
void __fastcall st::fn_0074AE8E(AnonShape_0074AE8E_9E31CE72 *param_1)

{
  DWORD DVar1;
  int iVar2;

  DVar1 = st::external_000000DA();
  iVar2 = (DVar1 - param_1->field_00E4) * 10000;
  if ((iVar2 < param_1->field_00DC * 2) || (iVar2 < param_1->field_00E0 * 2)) {
    param_1->field_00DC = (iVar2 + param_1->field_00DC * 3) / 4;
  }
  param_1->field_00E0 = iVar2;
  st::fn_0074AE16((int)param_1);
  return;
}

// 0074AEE2 FUN_0074aee2
#line 1 "decomp/ST.exe/functions/0074AEE2/decomp.c"
/* [STVTableApplier] Virtual slot 0079DAF0+0x10

   [STVTableApplier] Virtual slot 007A1550+0x10 */

undefined4 st::fn_0074AEE2(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + -0x20) = param_2;
  return 0;
}

// 0074AEF2 FUN_0074aef2
#line 1 "decomp/ST.exe/functions/0074AEF2/decomp.c"
/* [STVTableApplier] Virtual slot 0079DAF0+0xC

   [STVTableApplier] Virtual slot 007A1550+0xC */

undefined4 st::fn_0074AEF2(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (param_4 < 1000) {
    *(int *)(param_1 + 0xc) = (int)(0x172dd680 / (longlong)(param_4 + 0xa7)) + -330000;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return 0;
}

// 0074AF26 FUN_0074af26
#line 1 "decomp/ST.exe/functions/0074AF26/decomp.c"
undefined4 __thiscall
st::fn_0074AF26(void *this,uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint auStack_40 [2];
  uint local_1c [4];
  undefined4 local_c;
  undefined4 local_8;

  local_c = param_3;
  local_8 = param_4;
  iVar3 = STField<int>(this,0xf4);
  if (iVar3 < 0) {
    local_1c[0] = 0;
  }
  else {
    local_1c[0] = (uint)(iVar3 <= STField<int>(this,0xdc) * 2);
  }
  local_1c[1] = 1000;
  if (-1 < iVar3) {
    if (((int)param_2 < 0) || (((int)param_2 < 1 && (param_1 == 0)))) {
      iVar5 = STField<int>(this,0xf0);
      if ((20000 < iVar5) &&
         ((0x7fffffff < param_2 && (((int)param_2 < -1 || (param_1 < 0xffffb1e0)))))) {
        if ((iVar5 < iVar3) && (iVar5 < iVar3 + 20000)) {
          local_1c[1] = (iVar3 / ((iVar3 - iVar5) + 20000)) * 1000;
        }
        else {
          local_1c[1] = 2000;
        }
        if (2000 < (int)local_1c[1]) {
          local_1c[1] = 2000;
        }
      }
    }
    else {
      auStack_40[1] = 0x74af8d;
      uVar8 = st::fn_0072E440(param_1,param_2,10000,0);
      local_1c[1] = 1000 - (int)uVar8;
      if ((int)local_1c[1] < 500) {
        local_1c[1] = 500;
      }
    }
  }
  uVar2 = STField<int>(this,0xdc) / 2;
  local_1c[2] = uVar2 + param_1;
  local_1c[3] = ((int)uVar2 >> 0x1f) + param_2 + (uint)CARRY4(uVar2,param_1);
  if (STField<int>(this,0xac) == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar3 = (**(code **)**(undefined4 **)(STField<int>(this,0x78) + 0x18))();
    if (-1 < iVar3) {
      STField<undefined4>(this,0xac) = 0;
    }
  }
  piVar1 = STField<int *>(this,0xac);
  if (piVar1 == nullptr) {
    uVar4 = 1;
  }
  else {
    iVar3 = *piVar1;
    puVar6 = local_1c;
    puVar7 = auStack_40;
    memmove(puVar7, puVar6, 0x18); /* compiler REP MOVS byte copy */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar4 = (**(code **)(iVar3 + 0xc))(piVar1,-(uint)(this != nullptr) & (int)this + 0xcU);
  }
  return uVar4;
}

// 0074B06D FUN_0074b06d
#line 1 "decomp/ST.exe/functions/0074B06D/decomp.c"
uint * __thiscall st::fn_0074B06D(void *this,int *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint *puVar8;
  bool bVar9;
  int *local_20;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  uint local_8;

  puVar2 = param_2;
  uVar3 = param_2[1];
  uVar1 = *param_2;
  if ((-1 < (int)uVar3) && ((0 < (int)uVar3 || (79999 < uVar1)))) {
    *param_2 = uVar1 - 80000;
    param_2[1] = uVar3 - (uVar1 < 80000);
    uVar3 = *param_3;
    *param_3 = *param_3 - 80000;
    param_3[1] = (param_3[1] - 1) + (uint)(79999 < uVar3);
  }
  STField<uint>(this,0x100) = *param_2;
  STField<uint>(this,0x104) = param_2[1];
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*STField<int *>(this,0x18) + 0xc))(STField<int *>(this,0x18),&local_18);
  bVar9 = local_18 < STField<uint>(this,0x20);
  local_18 = local_18 - STField<uint>(this,0x20);
  local_14 = (local_14 - STField<int>(this,0x24)) - (uint)bVar9;
  puVar8 = (uint *)(local_18 - *param_2);
  uVar3 = (local_14 - param_2[1]) - (uint)(local_18 < *param_2);
  if ((uVar3 < 0x80000000) || ((-2 < (int)uVar3 && ((uint *)0xe2329aff < puVar8)))) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = puVar8;
    if ((-1 < (int)uVar3) && ((0 < (int)uVar3 || ((uint *)0x1dcd6500 < puVar8)))) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = (uint *)0x1dcd6500;
    }
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = (uint *)0xe2329b00;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar4 = (**(code **)(*(int *)this + 0xc0))(param_2,(int)param_2 >> 0x1f,local_18,local_14);
  local_8 = (uint)(iVar4 == 0);
  STField<uint>(this,0xd4) = local_8;
  local_c = STField<int>(this,0xf8);
  iVar4 = *param_3 - *puVar2;
  if ((local_c / 0x20 + local_c < iVar4) || (iVar4 < local_c - local_c / 0x20)) {
    STField<int>(this,0xf4) = iVar4;
    STField<int>(this,0xf8) = iVar4;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  if (((local_8 != 0) && (iVar5 = (**(code **)(*param_1 + 0x3c))(param_1), iVar5 == 0)) ||
     (local_8 = 0, STField<int>(this,0xd0) == -1)) {
    local_8 = 1;
  }
  if ((int)param_2 < 1) {
    iVar5 = STField<int>(this,0xe8);
    if (((int)param_2 < iVar5) && (local_8 == 0)) {
      STField<int>(this,0xe8) = iVar5 - iVar5 / 8;
    }
    else {
      STField<uint *>(this,0xe8) = param_2;
    }
  }
  else {
    STField<undefined4>(this,0xe8) = 0;
  }
  if ((int)param_2 < 0) {
    iVar5 = -(int)param_2;
  }
  else {
    iVar5 = 0;
  }
  local_10 = STField<int>(this,0xf0) * 3;
  local_c = (local_10 + iVar5) / 4;
  piVar6 = (int *)(local_18 - STField<uint>(this,0x120));
  iVar5 = (local_14 - STField<int>(this,0x124)) - (uint)(local_18 < STField<uint>(this,0x120));
  local_20 = piVar6;
  if ((-1 < iVar5) && ((0 < iVar5 || ((int *)0x989680 < piVar6)))) {
    local_20 = (int *)0x989680;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = local_20;
  if (STField<int>(this,0xf4) < STField<int>(this,0xdc) * 3) {
    if (STField<int>(this,0xd4) == 0) {
      bVar9 = (int)param_2 * 2 < iVar4;
    }
    else {
      bVar9 = (int)param_2 <= iVar4 * 4;
    }
    if ((((!bVar9) && (STField<int>(this,0xf0) < 0x13881)) && (iVar5 < 1)) &&
       ((iVar5 < 0 || (piVar6 < (int *)0x989681)))) {
      STField<undefined4>(this,0xd0) = 0xffffffff;
      STField<int>(this,0xf0) = local_c;
      return (uint *)0x80004005;
    }
  }
  bVar9 = false;
  if (local_8 == 0) {
    if ((iVar4 / 0x10 + iVar4 < STField<int>(this,0xf4)) && (iVar4 * -10 < (int)param_2)) {
      bVar9 = true;
    }
  }
  else {
    bVar9 = true;
  }
  if ((int)param_2 < -9000000) {
    bVar9 = false;
  }
  if (bVar9) {
    STField<undefined4>(this,0xd0) = 0;
    STField<int>(this,0xf0) = local_10 / 4;
    STField<int>(this,0xf4) = ((int)local_20 + STField<int>(this,0xf4) * 3) / 4;
    st::fn_0074AD49(this,param_2,local_20);
    STField<uint>(this,0x120) = local_18;
    STField<uint>(this,0x124) = local_14;
    if ((int)param_2 < STField<int>(this,0xe8)) {
      STField<uint *>(this,0xe8) = param_2;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = nullptr;
  }
  else {
    STField<int>(this,0xd0) = STField<int>(this,0xd0) + 1;
    STField<int>(this,0xf4) = iVar4;
    uVar3 = STField<uint>(this,0xe8);
    if ((int)STField<uint>(this,0xe8) < -iVar4) {
      uVar3 = -iVar4;
    }
    uVar1 = *puVar2;
    *puVar2 = *puVar2 + uVar3;
    puVar2[1] = puVar2[1] + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar1,uVar3);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = (uint *)(uint)(0 < -(int)param_2);
    STField<int>(this,0xf0) = local_c;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_3 == (uint *)0x1) {
      uVar1 = *puVar2;
      uVar3 = puVar2[1];
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (int *)(uVar1 - STField<uint>(this,0x120));
      uVar7 = (uVar3 - STField<int>(this,0x124)) - (uint)(uVar1 < STField<uint>(this,0x120));
      if ((uVar7 < 0x80000000) || ((-2 < (int)uVar7 && ((int *)0xe2329aff < param_1)))) {
        if ((-1 < (int)uVar7) && ((0 < (int)uVar7 || ((int *)0x1dcd6500 < param_1)))) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (int *)0x1dcd6500;
        }
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int *)0xe2329b00;
      }
      STField<uint>(this,0x120) = uVar1;
    }
    else {
      STField<uint>(this,0x120) = local_18;
      uVar3 = local_14;
    }
    STField<uint>(this,0x124) = uVar3;
    if (0 < -(int)param_2) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = (uint *)(*puVar2 - STField<uint>(this,0x100));
      uVar3 = (puVar2[1] - STField<int>(this,0x104)) -
              (uint)(*puVar2 < STField<uint>(this,0x100));
      if ((uVar3 < 0x80000000) || ((-2 < (int)uVar3 && ((uint *)0xe2329aff < param_2)))) {
        if ((-1 < (int)uVar3) && ((0 < (int)uVar3 || ((uint *)0x1dcd6500 < param_2)))) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = (uint *)0x1dcd6500;
        }
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = (uint *)0xe2329b00;
      }
    }
    st::fn_0074AD49(this,param_2,param_1);
  }
  return param_3;
}

// 0074B442 FUN_0074b442
#line 1 "decomp/ST.exe/functions/0074B442/decomp.c"
/* [STVTableApplier] Virtual slot 007A13D0+0x40 */

undefined4 st::fn_0074B442(void)

{
  return 0;
}

// 0074B445 FUN_0074b445
#line 1 "decomp/ST.exe/functions/0074B445/decomp.c"
/* [STVTableApplier] Virtual slot 007A13D0+0x44 */

undefined4 st::fn_0074B445(void)

{
  return 0;
}

// 0074B448 FUN_0074b448
#line 1 "decomp/ST.exe/functions/0074B448/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STVTableApplier] Virtual slot 007A13D0+0x48

   [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_0074B448(void)

{
  return;
}

// 0074B449 FUN_0074b449
#line 1 "decomp/ST.exe/functions/0074B449/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STVTableApplier] Virtual slot 007A13D0+0x4C

   [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_0074B449(void)

{
  return;
}

// 0074B44A FUN_0074b44a
#line 1 "decomp/ST.exe/functions/0074B44A/decomp.c"
bool __thiscall st::fn_0074B44A(void *this,int param_1)

{
  int iVar1;

  iVar1 = st::fn_0074A2AB(this,param_1);
  if (iVar1 == 0) {
    STField<int>(this,0x108) = STField<int>(this,0x108) + 1;
  }
  return iVar1 != 0;
}

// 0074B469 FUN_0074b469
#line 1 "decomp/ST.exe/functions/0074B469/decomp.c"
undefined4 st::fn_0074B469(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    st::external_00000018((LPCRITICAL_SECTION)(param_1 + -0x4c));
    *param_2 = *(undefined4 *)(param_1 + 0x40);
    st::external_00000019((LPCRITICAL_SECTION)(param_1 + -0x4c));
    uVar1 = 0;
  }
  return uVar1;
}

// 0074B49D FUN_0074b49d
#line 1 "decomp/ST.exe/functions/0074B49D/decomp.c"
undefined4 st::fn_0074B49D(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    st::external_00000018((LPCRITICAL_SECTION)(param_1 + -0x4c));
    *param_2 = *(undefined4 *)(param_1 + 0x44);
    st::external_00000019((LPCRITICAL_SECTION)(param_1 + -0x4c));
    uVar1 = 0;
  }
  return uVar1;
}

// 0074B4D1 FUN_0074b4d1
#line 1 "decomp/ST.exe/functions/0074B4D1/decomp.c"
undefined4 st::fn_0074B4D1(AnonShape_0074B4D1_EE56C337 *param_1,int *param_2)

{
  undefined4 uVar1;
  DWORD DVar2;
  int iVar3;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    st::external_00000018((LPCRITICAL_SECTION)&param_1[-1].field_0x30);
    if (*(int *)&param_1[-1].field_0x18 == 0) {
      iVar3 = param_1->field_0078;
    }
    else {
      DVar2 = st::external_000000DA();
      iVar3 = DVar2 - param_1->field_0078;
    }
    if (iVar3 < 1) {
      *param_2 = 0;
    }
    else {
      iVar3 = st::external_0000007A(100000,param_1->field_0044,iVar3);
      *param_2 = iVar3;
    }
    st::external_00000019((LPCRITICAL_SECTION)&param_1[-1].field_0x30);
    uVar1 = 0;
  }
  return uVar1;
}

// 0074B52E FUN_0074b52e
#line 1 "decomp/ST.exe/functions/0074B52E/decomp.c"
undefined4 st::fn_0074B52E(AnonShape_0074B52E_469E30A2 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    st::external_00000018((LPCRITICAL_SECTION)&param_1[-1].field_0x4);
    if ((*(int *)&param_1[-3].field_0x40 == 0) || (param_1->field_0044 < 2)) {
      *param_2 = 0;
    }
    else {
      uVar2 = param_1->field_0044 - 1;
      uVar3 = st::fn_0072E440
                        (param_1->field_0048,param_1->field_004C,uVar2,(int)uVar2 >> 0x1f);
      *param_2 = (int)uVar3;
    }
    st::external_00000019((LPCRITICAL_SECTION)&param_1[-1].field_0x4);
    uVar1 = 0;
  }
  return uVar1;
}

// 0074B584 FUN_0074b584
#line 1 "decomp/ST.exe/functions/0074B584/decomp.c"

int st::fn_0074B584(int param_1)

{
  int iVar1;

  iVar1 = 1;
  if (param_1 < 0x40000001) {
    if (1 < param_1) {
      do {
        iVar1 = iVar1 * 2;
      } while (iVar1 * iVar1 < param_1);
    }
    if (param_1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (iVar1 * iVar1 + param_1) / (iVar1 * 2);
      if ((-1 < iVar1) && (iVar1 = (iVar1 * iVar1 + param_1) / (iVar1 * 2), -1 < iVar1)) {
        iVar1 = (iVar1 * iVar1 + param_1) / (iVar1 * 2);
      }
    }
  }
  else {
    iVar1 = 0x8000;
  }
  return iVar1;
}

// 0074B5E6 FUN_0074b5e6
#line 1 "decomp/ST.exe/functions/0074B5E6/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 0074B5E6 -> EXTERNAL:00000019 @ 0074B659 */

undefined4 __thiscall
st::fn_0074B5E6(void *this,uint param_1,LPCRITICAL_SECTION lpCriticalSection,uint param_3,int param_4,
            uint param_5,uint param_6)

{
  undefined4 uVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  longlong lVar3;
  undefined8 uVar4;

  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    st::external_00000018((LPCRITICAL_SECTION)((int)this + 0x7c));
    if ((STField<int>(this,0x18) == 0) || ((int)param_1 < 2)) {
      lpCriticalSection->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    }
    else {
      lVar3 = st::fn_0074D786(param_5,param_6,param_5,param_6,param_1,(int)param_1 >> 0x1f,0,0);
      uVar4 = st::fn_0072E440
                        (param_3 - (uint)lVar3,
                         (param_4 - (int)((ulonglong)lVar3 >> 0x20)) - (uint)(param_3 < (uint)lVar3)
                         ,param_1 - 1,(int)(param_1 - 1) >> 0x1f);
      p_Var2 = (PRTL_CRITICAL_SECTION_DEBUG)st::fn_0074B584((int)uVar4);
      lpCriticalSection->DebugInfo = p_Var2;
    }
    st::external_00000019((LPCRITICAL_SECTION)((int)this + 0x7c));
    uVar1 = 0;
  }
  return uVar1;
}

// 0074B668 FUN_0074b668
#line 1 "decomp/ST.exe/functions/0074B668/decomp.c"

/* [STVTableApplier] Virtual slot 0079DB04+0x20

   [STVTableApplier] Virtual slot 007A1568+0x20 */

void st::fn_0074B668(int param_1,LPCRITICAL_SECTION param_2)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_0074B5E6((void *)(param_1 + -200),*(int *)(param_1 + 0x44) - 1,param_2,
               *(uint *)(param_1 + 0x50),*(int *)(param_1 + 0x54),*(uint *)(param_1 + 0x48),
               *(uint *)(param_1 + 0x4c));
  return;
}

// 0074B68F FUN_0074b68f
#line 1 "decomp/ST.exe/functions/0074B68F/decomp.c"

/* [STVTableApplier] Virtual slot 0079DB04+0x18

   [STVTableApplier] Virtual slot 007A1568+0x18 */

void st::fn_0074B68F(int param_1,LPCRITICAL_SECTION param_2)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_0074B5E6((void *)(param_1 + -200),*(int *)(param_1 + 0x44) - 2,param_2,
               *(uint *)(param_1 + 0x60),*(int *)(param_1 + 100),*(uint *)(param_1 + 0x68),
               *(uint *)(param_1 + 0x6c));
  return;
}

// 0074B6B7 FUN_0074b6b7
#line 1 "decomp/ST.exe/functions/0074B6B7/decomp.c"
void st::fn_0074B6B7(int *param_1,char *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;

  iVar2 = 0x10;
  bVar5 = true;
  pcVar3 = param_2;
  pcVar4 = &DAT_007a1230;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    piVar1 = param_1 + 0x32;
  }
  else {
    iVar2 = 0x10;
    bVar5 = true;
    pcVar3 = param_2;
    pcVar4 = &DAT_007a1b40;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      st::fn_00749CA4(param_1,param_2,param_3);
      return;
    }
    piVar1 = param_1 + 0x33;
  }
  st::fn_0074B8A6((int *)(-(uint)(param_1 != nullptr) & (uint)piVar1),param_3);
  return;
}

// 0074B719 FUN_0074b719
#line 1 "decomp/ST.exe/functions/0074B719/decomp.c"
void st::fn_0074B719(int *param_1,undefined4 *param_2,short *param_3)

{
  int *piVar1;

  piVar1 = param_1;
  if ((param_2 == nullptr) && (param_1[0xd] != 0)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*param_1)(param_1,&DAT_007a1368,&param_1);
    st::fn_00747406(piVar1 + -3,0x15,param_1,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  st::fn_0074736A((AnonShape_0074736A_AA1936BB *)piVar1,param_2,param_3);
  return;
}

// 0074B763 FUN_0074b763
#line 1 "decomp/ST.exe/functions/0074B763/decomp.c"
undefined4 __fastcall st::fn_0074B763(undefined4 param_1)

{
  st::external_00000053((LONG *)&DAT_00857504);
  return param_1;
}

// 0074B777 FUN_0074b777
#line 1 "decomp/ST.exe/functions/0074B777/decomp.c"

void st::fn_0074B777(void)

{
  LONG LVar1;

  LVar1 = st::external_00000051((LONG *)&DAT_00857504);
  if ((LVar1 == 0) && (DAT_00857500 != (HMODULE)0x0)) {
    st::external_00000079(DAT_00857500);
    DAT_00857500 = (HMODULE)0x0;
  }
  return;
}

// 0074B79E FUN_0074b79e
#line 1 "decomp/ST.exe/functions/0074B79E/decomp.c"

void st::fn_0074B79E(void)

{
  if (DAT_00857500 == (HMODULE)0x0) {
    DAT_00857500 = st::external_00000065("OleAut32.dll");
  }
  return;
}

// 0074B7B8 FUN_0074b7b8
#line 1 "decomp/ST.exe/functions/0074B7B8/decomp.c"
int __thiscall st::fn_0074B7B8(void *this,undefined4 param_1,int param_2)

{
  st::fn_0074B763((undefined4 *)((int)this + 4));
  if (param_2 == 0) {
    param_2 = (int)this;
  }
  STField<undefined4>(this,4) = param_2;
  STField<undefined4>(this,8) = 0;
  return (int)this;
}

// 0074B7E4 FUN_0074b7e4
#line 1 "decomp/ST.exe/functions/0074B7E4/decomp.c"
int __thiscall st::fn_0074B7E4(void *this,undefined4 param_1,int param_2)

{
  st::fn_0074B763((undefined4 *)((int)this + 4));
  if (param_2 == 0) {
    param_2 = (int)this;
  }
  STField<undefined4>(this,4) = param_2;
  STField<undefined4>(this,8) = 0;
  return (int)this;
}

// 0074B810 FUN_0074b810
#line 1 "decomp/ST.exe/functions/0074B810/decomp.c"
undefined4 st::fn_0074B810(int *param_1,char *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;

  if (param_3 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    iVar2 = 0x10;
    bVar4 = true;
    pcVar3 = "";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar4 = *param_2 == *pcVar3;
      param_2 = param_2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (bVar4) {
      st::fn_0074B8A6(param_1,param_3);
      uVar1 = 0;
    }
    else {
      *param_3 = 0;
      uVar1 = 0x80004002;
    }
  }
  return uVar1;
}

// 0074B84E FUN_0074b84e
#line 1 "decomp/ST.exe/functions/0074B84E/decomp.c"

/* [STVTableApplier] Virtual slot 0079DB78+0x4

   [STVTableApplier] Virtual slot 0079DDEC+0x4

   [STVTableApplier] Virtual slot 007A11C8+0x4

   [STVTableApplier] Virtual slot 007A13D0+0x4

   [STVTableApplier] Virtual slot 007A15E8+0x4

   [STVTableApplier] Virtual slot 007A1C08+0x4

   [STVTableApplier] Virtual slot 007A1CB8+0x4

   [STVTableApplier] Virtual slot 007A1D88+0x4 */

uint st::fn_0074B84E(int param_1)

{
  uint uVar1;
  uint uVar2;

  st::external_00000053((LONG *)(param_1 + 8));
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = 1;
  if (1 < uVar1) {
    uVar2 = uVar1;
  }
  return uVar2;
}

// 0074B86C FUN_0074b86c
#line 1 "decomp/ST.exe/functions/0074B86C/decomp.c"
uint st::fn_0074B86C(int *param_1)

{
  uint *lpAddend;
  LONG LVar1;
  uint uVar2;

  lpAddend = (uint *)(param_1 + 2);
  LVar1 = st::external_00000051((LONG *)lpAddend);
  if (LVar1 == 0) {
    *lpAddend = *lpAddend + 1;
    if (param_1 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1 + 0xc))(1);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if (1 < *lpAddend) {
      uVar2 = *lpAddend;
    }
  }
  return uVar2;
}

// 0074B8A6 FUN_0074b8a6
#line 1 "decomp/ST.exe/functions/0074B8A6/decomp.c"
undefined4 st::fn_0074B8A6(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    *param_2 = param_1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 4))(param_1);
    uVar1 = 0;
  }
  return uVar1;
}

// 0074B8C6 FUN_0074b8c6
#line 1 "decomp/ST.exe/functions/0074B8C6/decomp.c"
bool st::fn_0074B8C6(int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;

  piVar1 = param_2;
  if (param_1 == param_2) {
    bVar2 = true;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*param_1)(param_1,&DAT_007a22b8,&param_1);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*piVar1)(piVar1,&DAT_007a22b8,&param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_2 + 8))(param_2);
    bVar2 = param_1 == param_2;
  }
  return bVar2;
}

// 0074B916 FUN_0074b916
#line 1 "decomp/ST.exe/functions/0074B916/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_0074B916(int param_1)

{
  st::fn_0074BCE4((AnonShape_0074BCE4_7F8B87E9 *)param_1);
  return;
}

// 0074B91D FUN_0074b91d
#line 1 "decomp/ST.exe/functions/0074B91D/decomp.c"
undefined4 * __fastcall st::fn_0074B91D(undefined4 *param_1)

{
  st::fn_0074BB83(param_1);
  return param_1;
}

// 0074B929 FUN_0074b929
#line 1 "decomp/ST.exe/functions/0074B929/decomp.c"
undefined4 * __thiscall st::fn_0074B929(void *this,undefined4 *param_1)

{
  st::fn_0074BB83(this);
  *(undefined4 *)this = *param_1;
  STField<undefined4>(this,4) = param_1[1];
  STField<undefined4>(this,8) = param_1[2];
  STField<undefined4>(this,0xc) = param_1[3];
  return this;
}

// 0074B945 FUN_0074b945
#line 1 "decomp/ST.exe/functions/0074B945/decomp.c"
undefined4 * __thiscall st::fn_0074B945(void *this,undefined4 *param_1)

{
  st::fn_0074BC89(this,param_1);
  return this;
}

// 0074B958 FUN_0074b958
#line 1 "decomp/ST.exe/functions/0074B958/decomp.c"
undefined4 * __thiscall st::fn_0074B958(void *this,undefined4 *param_1)

{
  st::fn_0074BC89(this,param_1);
  return this;
}

// 0074B96B FUN_0074b96b
#line 1 "decomp/ST.exe/functions/0074B96B/decomp.c"
undefined4 * __thiscall st::fn_0074B96B(void *this,undefined4 *param_1)

{
  if (param_1 != this) {
    st::fn_0074BCE4(this);
    st::fn_0074BC89(this,param_1);
  }
  return this;
}

// 0074B98A FUN_0074b98a
#line 1 "decomp/ST.exe/functions/0074B98A/decomp.c"
void * __thiscall st::fn_0074B98A(void *this,undefined4 *param_1)

{
  st::fn_0074B96B(this,param_1);
  return this;
}

// 0074B99C FUN_0074b99c
#line 1 "decomp/ST.exe/functions/0074B99C/decomp.c"
undefined4 __thiscall st::fn_0074B99C(void *this,AnonShape_0074B99C_A57FB945 *param_1)

{
  int iVar1;
  char *pcVar2;
  AnonShape_0074B99C_A57FB945 *pAVar3;
  char *pcVar4;
  bool bVar5;

  iVar1 = 0x10;
  bVar5 = true;
  pcVar2 = this;
  pAVar3 = param_1;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar2 == *(char *)pAVar3;
    pcVar2 = pcVar2 + 1;
    pAVar3 = (AnonShape_0074B99C_A57FB945 *)&pAVar3->field_0x1;
  } while (bVar5);
  if (bVar5) {
    iVar1 = 0x10;
    bVar5 = true;
    pcVar2 = (char *)((int)this + 0x10);
    pcVar4 = &param_1->field_0x10;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *pcVar2 == *pcVar4;
      pcVar2 = pcVar2 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      iVar1 = 0x10;
      bVar5 = true;
      pcVar2 = (char *)((int)this + 0x2c);
      pcVar4 = &param_1->field_0x2c;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar5 = *pcVar2 == *pcVar4;
        pcVar2 = pcVar2 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if ((bVar5) && (iVar1 = STField<int>(this,0x40), iVar1 == param_1->field_0040)) {
        if (iVar1 != 0) {
          bVar5 = true;
          pcVar2 = STField<char *>(this,0x44);
          pcVar4 = param_1->field_0044;
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar5 = *pcVar2 == *pcVar4;
            pcVar2 = pcVar2 + 1;
            pcVar4 = pcVar4 + 1;
          } while (bVar5);
          if (!bVar5) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}

// 0074B9F5 FUN_0074b9f5
#line 1 "decomp/ST.exe/functions/0074B9F5/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=006D7380 @ 006D73EF
   -> TEST TEST EAX,EAX | 0074CA21 @ 0074CA70 -> TEST TEST EAX,EAX */

int __thiscall st::fn_0074B9F5(void *this,char *param_1)

{
  int iVar1;

  iVar1 = st::fn_0074B99C(this,(AnonShape_0074B99C_A57FB945 *)param_1);
  return (uint)(iVar1 == 0);
}

// 0074BA06 FUN_0074ba06
#line 1 "decomp/ST.exe/functions/0074BA06/decomp.c"
bool __fastcall st::fn_0074BA06(char *param_1)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;

  iVar1 = 0x10;
  bVar3 = true;
  pcVar2 = "";
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar3 = *param_1 == *pcVar2;
    param_1 = param_1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  return !bVar3;
}

// 0074BA1C FUN_0074ba1c
#line 1 "decomp/ST.exe/functions/0074BA1C/decomp.c"
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __thiscall st::fn_0074BA1C(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  STField<undefined4>(this,4) = param_1[1];
  STField<undefined4>(this,8) = param_1[2];
  STField<undefined4>(this,0xc) = param_1[3];
  return;
}

// 0074BABB FUN_0074babb
#line 1 "decomp/ST.exe/functions/0074BABB/decomp.c"
void __fastcall st::fn_0074BABB(AnonShape_0074BABB_7C20C67C *param_1)

{
  if (param_1->field_0040 != 0) {
    st::external_000000CE((LPVOID)param_1->field_0044);
  }
  param_1->field_0040 = 0;
  param_1->field_0044 = 0;
  return;
}

// 0074BAD7 FUN_0074bad7
#line 1 "decomp/ST.exe/functions/0074BAD7/decomp.c"
LPVOID __thiscall st::fn_0074BAD7(void *this,uint param_1)

{
  LPVOID pvVar1;

  if (STField<uint>(this,0x40) != param_1) {
    pvVar1 = st::external_000000CD(param_1);
    if (pvVar1 != (LPVOID)0x0) {
      if (STField<int>(this,0x40) != 0) {
        st::external_000000CE(STField<LPVOID>(this,0x44));
      }
      STField<uint>(this,0x40) = param_1;
      STField<LPVOID>(this,0x44) = pvVar1;
      return pvVar1;
    }
    if (STField<uint>(this,0x40) < param_1) {
      return (LPVOID)0x0;
    }
  }
  return STField<LPVOID>(this,0x44);
}

// 0074BB83 FUN_0074bb83
#line 1 "decomp/ST.exe/functions/0074BB83/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_0074BB83(undefined4 *param_1)

{

  memset(param_1, 0, 0x48); /* compiler bulk-zero initialization */
  param_1[10] = 1;
  param_1[8] = 1;
  return;
}

// 0074BB9A FUN_0074bb9a
#line 1 "decomp/ST.exe/functions/0074BB9A/decomp.c"
undefined4 __fastcall st::fn_0074BB9A(char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;

  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = param_1;
  pcVar3 = "";
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    iVar1 = 0x10;
    bVar4 = true;
    pcVar2 = param_1 + 0x2c;
    pcVar3 = "";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
      return 0;
    }
  }
  return 1;
}

// 0074BBC6 FUN_0074bbc6
#line 1 "decomp/ST.exe/functions/0074BBC6/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00747D92 -> 0074BBC6 @ 00747DD6 */

undefined4 __thiscall st::fn_0074BBC6(void *this,AnonShape_0074BBC6_71B34D24 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  AnonShape_0074BBC6_71B34D24 *pAVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;

  iVar2 = 0x10;
  bVar6 = true;
  pAVar3 = param_1;
  pcVar4 = "";
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *(char *)pAVar3 == *pcVar4;
    pAVar3 = (AnonShape_0074BBC6_71B34D24 *)&pAVar3->field_0x1;
    pcVar4 = pcVar4 + 1;
  } while (bVar6);
  if (bVar6) {
LAB_0074bbef:
    iVar2 = 0x10;
    bVar6 = true;
    pcVar4 = &param_1->field_0x10;
    pcVar5 = "";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      iVar2 = 0x10;
      bVar6 = true;
      pcVar4 = (char *)((int)this + 0x10);
      pcVar5 = &param_1->field_0x10;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (!bVar6) goto cf_common_exit_0074BC42;
    }
    iVar2 = 0x10;
    bVar6 = true;
    pcVar4 = &param_1->field_0x2c;
    pcVar5 = "";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      iVar2 = 0x10;
      bVar6 = true;
      pcVar4 = (char *)((int)this + 0x2c);
      pcVar5 = &param_1->field_0x2c;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if ((!bVar6) || (iVar2 = STField<int>(this,0x40), iVar2 != param_1->field_0040))
      goto cf_common_exit_0074BC42;
      if (iVar2 != 0) {
        bVar6 = true;
        pcVar4 = STField<char *>(this,0x44);
        pcVar5 = param_1->field_0044;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar6 = *pcVar4 == *pcVar5;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar6);
        if (!bVar6) goto cf_common_exit_0074BC42;
      }
    }
    uVar1 = 1;
  }
  else {
    iVar2 = 0x10;
    bVar6 = true;
    pcVar4 = this;
    pAVar3 = param_1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *pcVar4 == *(char *)pAVar3;
      pcVar4 = pcVar4 + 1;
      pAVar3 = (AnonShape_0074BBC6_71B34D24 *)&pAVar3->field_0x1;
    } while (bVar6);
    if (bVar6) goto LAB_0074bbef;
cf_common_exit_0074BC42:
    uVar1 = 0;
  }
  return uVar1;
}

// 0074BC50 FUN_0074bc50
#line 1 "decomp/ST.exe/functions/0074BC50/decomp.c"

void st::fn_0074BC50(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    st::fn_0074BCE4(param_1);
    st::external_000000CE(param_1);
  }
  return;
}

// 0074BC6A FUN_0074bc6a
#line 1 "decomp/ST.exe/functions/0074BC6A/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0074BC6A returns return of OLE32.DLL::CoTaskMemAlloc @ 0074BC86 */

LPVOID st::fn_0074BC6A(undefined4 *param_1)

{
  AnonShape_0074BC89_92881050 *pAVar1;

  pAVar1 = st::external_000000CD(0x48);
  if (pAVar1 != nullptr) {
    st::fn_0074BC89(pAVar1,param_1);
  }
  return pAVar1;
}

// 0074BC89 FUN_0074bc89
#line 1 "decomp/ST.exe/functions/0074BC89/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0074BC6A -> 0074BC89 @ 0074BC7E

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void st::fn_0074BC89(AnonShape_0074BC89_92881050 *param_1,undefined4 *param_2)

{
  int *piVar1;
  byte *puVar2;
  int iVar3;
  uint uVar5;
  byte *puVar6;
  AnonShape_0074BC89_92881050 *pAVar7;

  puVar2 = (byte *)(param_2);
  pAVar7 = param_1;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pAVar7 = *puVar2;
    puVar2 = (byte *)(puVar2 + 1);
    pAVar7 = (AnonShape_0074BC89_92881050 *)&pAVar7->field_0x4;
  }
  if (param_2[0x10] != 0) {
    puVar2 = (byte *)(st::external_000000CD(param_2[0x10]));
    param_1->field_0044 = puVar2;
    if (puVar2 == nullptr) {
      param_1->field_0040 = 0;
    }
    else {
      uVar5 = param_1->field_0040;
      puVar6 = (byte *)param_2[0x11];
      memmove(puVar2, puVar6, uVar5); /* compiler REP MOVS byte copy */
    }
  }
  piVar1 = param_1->field_003C;
  if (piVar1 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return;
}

// 0074BCE4 FUN_0074bce4
#line 1 "decomp/ST.exe/functions/0074BCE4/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_0074BCE4(AnonShape_0074BCE4_7F8B87E9 *param_1)

{
  int *piVar1;

  if (param_1->field_0040 != 0) {
    st::external_000000CE((LPVOID)param_1->field_0044);
    param_1->field_0040 = 0;
    param_1->field_0044 = 0;
  }
  piVar1 = (int *)param_1->field_003C;
  if (piVar1 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1->field_003C = 0;
  }
  return;
}

// 0074BD15 FUN_0074bd15
#line 1 "decomp/ST.exe/functions/0074BD15/decomp.c"
undefined4 st::fn_0074BD15(ushort *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;

  *param_2 = DAT_007a1da8;
  param_2[1] = DAT_007a1dac;
  param_2[2] = DAT_007a1db0;
  param_2[3] = DAT_007a1db4;
  param_2[4] = (uint)*param_1;
  param_2[5] = 0x100000;
  param_2[6] = 0xaa000080;
  param_2[7] = 0x719b3800;
  param_2[0xb] = DAT_007a1d98;
  param_2[0xc] = DAT_007a1d9c;
  param_2[0xd] = DAT_007a1da0;
  param_2[0xe] = DAT_007a1da4;
  param_2[8] = 1;
  param_2[9] = 0;
  param_2[10] = (uint)param_1[6];
  param_2[0xf] = 0;
  if (param_3 != 0) {
    if (*param_1 == 1) {
      param_2[0x10] = 0x12;
    }
    else {
      param_2[0x10] = param_1[8] + 0x12;
    }
    puVar1 = st::external_000000CD(param_2[0x10]);
    param_2[0x11] = puVar1;
    if (puVar1 == nullptr) {
      return 0x8007000e;
    }
    if (*param_1 == 1) {
      *puVar1 = *(undefined4 *)param_1;
      puVar1[1] = *(undefined4 *)(param_1 + 2);
      puVar1[2] = *(undefined4 *)(param_1 + 4);
      puVar1[3] = *(undefined4 *)(param_1 + 6);
      *(undefined2 *)(param_2[0x11] + 0x10) = 0;
    }
    else {
      uVar3 = param_2[0x10];
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = *(undefined4 *)param_1;
        param_1 = param_1 + 2;
        puVar1 = puVar1 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(char *)puVar1 = (char)*param_1;
        param_1 = (ushort *)((int)param_1 + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
    }
  }
  return 0;
}

// 0074BDE0 FUN_0074bde0
#line 1 "decomp/ST.exe/functions/0074BDE0/decomp.c"
void * __thiscall st::fn_0074BDE0(void *this,undefined4 param_1,int param_2,undefined4 *param_3)

{
  st::fn_00746EE3(this,param_1,param_2,(LPCRITICAL_SECTION)((int)this + 0x5c),param_3);
  STField<undefined4>(this,0x50) = 0;
  STField<undefined4>(this,0x54) = 0;
  STField<undefined4>(this,0x58) = 0;
  st::external_00000017((LPCRITICAL_SECTION)((int)this + 0x5c));
  st::external_00000017((LPCRITICAL_SECTION)((int)this + 0x74));
  STField<undefined4>(this,0x8c) = 0;
  STField<undefined4>(this,0x90) = 0;
  return this;
}

// 0074BE28 FUN_0074be28
#line 1 "decomp/ST.exe/functions/0074BE28/decomp.c"
void __fastcall st::fn_0074BE28(AnonShape_0074BE28_A72B0079 *param_1)

{
  if (param_1->field_008C != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1->field_008C + 0xc))(1);
  }
  if (param_1->field_0090 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1->field_0090 + 0xc))(1);
  }
  st::external_00000016((LPCRITICAL_SECTION)&param_1->field_0x74);
  st::external_00000016((LPCRITICAL_SECTION)&param_1->field_0x5c);
  st::fn_00746F77((AnonShape_00746F77_1F40C93D *)param_1);
  return;
}

// 0074BE6A FUN_0074be6a
#line 1 "decomp/ST.exe/functions/0074BE6A/decomp.c"
/* [STVTableApplier] Virtual slot 0079DDEC+0x24 */

undefined4 st::fn_0074BE6A(void)

{
  return 0x8000ffff;
}

// 0074BE72 FUN_0074be72
#line 1 "decomp/ST.exe/functions/0074BE72/decomp.c"
/* [STVTableApplier] Virtual slot 0079DDEC+0x18 */

undefined4 st::fn_0074BE72(void)

{
  return 2;
}

// 0074BE76 FUN_0074be76
#line 1 "decomp/ST.exe/functions/0074BE76/decomp.c"
undefined4 __thiscall st::fn_0074BE76(void *this,int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 local_8;

  local_8 = 0;
  if (STField<int>(this,0x8c) == 0) {
    pvVar1 = (void *)st::fn_0072E530(0xe0);
    if (pvVar1 == nullptr) {
      puVar2 = nullptr;
    }
    else {
      puVar2 = st::fn_0074C38F(pvVar1,0,(int)this,&local_8,(char *)L"XForm In");
    }
    STField<undefined4 *>(this,0x8c) = puVar2;
    if (puVar2 == nullptr) {
      return 0;
    }
    pvVar1 = (void *)st::fn_0072E530(0xa8);
    if (pvVar1 == nullptr) {
      puVar2 = nullptr;
    }
    else {
      puVar2 = st::fn_0074C658(pvVar1,0,(int)this,&local_8,(char *)L"XForm Out");
    }
    STField<undefined4 *>(this,0x90) = puVar2;
    if (puVar2 == nullptr) {
      if (STField<int *>(this,0x8c) != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*STField<int *>(this,0x8c) + 0xc))(1);
      }
      STField<undefined4>(this,0x8c) = 0;
    }
  }
  if (param_1 == 0) {
    return STField<undefined4>(this,0x8c);
  }
  if (param_1 != 1) {
    return 0;
  }
  return STField<undefined4>(this,0x90);
}

// 0074BF23 FUN_0074bf23
#line 1 "decomp/ST.exe/functions/0074BF23/decomp.c"
undefined4 st::fn_0074BF23(int param_1,ushort *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  uVar3 = 0;
  if (param_3 == nullptr) {
    uVar3 = 0x80004003;
  }
  else {
    iVar1 = st::fn_0074D5D3(param_2,(ushort *)&DAT_007ee298);
    if (iVar1 == 0) {
      uVar4 = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar1 = *(int *)(param_1 + -0xc);
    }
    else {
      iVar1 = st::fn_0074D5D3(param_2,(ushort *)&DAT_007a1738);
      if (iVar1 != 0) {
        *param_3 = 0;
        return 0x80040216;
      }
      uVar4 = 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar1 = *(int *)(param_1 + -0xc);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(iVar1 + 0x1c))(uVar4);
    piVar2 = (int *)(-(uint)(iVar1 != 0) & iVar1 + 0xcU);
    *param_3 = piVar2;
    if (piVar2 == nullptr) {
      uVar3 = 0x8007000e;
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  return uVar3;
}

// 0074BFA5 FUN_0074bfa5
#line 1 "decomp/ST.exe/functions/0074BFA5/decomp.c"
/* [STVTableApplier] Virtual slot 0079DDEC+0x38 */

undefined4 st::fn_0074BFA5(void)

{
  return 0;
}

// 0074BFA8 FUN_0074bfa8
#line 1 "decomp/ST.exe/functions/0074BFA8/decomp.c"
/* [STVTableApplier] Virtual slot 0079DDEC+0x3C */

undefined4 st::fn_0074BFA8(void)

{
  return 0;
}

// 0074BFAB FUN_0074bfab
#line 1 "decomp/ST.exe/functions/0074BFAB/decomp.c"
/* [STVTableApplier] Virtual slot 0079DDEC+0x48 */

undefined4 st::fn_0074BFAB(void)

{
  return 0;
}

// 0074BFB0 FUN_0074bfb0
#line 1 "decomp/ST.exe/functions/0074BFB0/decomp.c"
/* [STVTableApplier] Virtual slot 0079DDEC+0x4C */

undefined4 st::fn_0074BFB0(void)

{
  return 0;
}

// 0074BFBA FUN_0074bfba
#line 1 "decomp/ST.exe/functions/0074BFBA/decomp.c"
/* [STVTableApplier] Virtual slot 0079DDEC+0x44 */

undefined4 st::fn_0074BFBA(void)

{
  return 0;
}

// 0074BFBF FUN_0074bfbf
#line 1 "decomp/ST.exe/functions/0074BFBF/decomp.c"
int __thiscall st::fn_0074BFBF(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  void *local_10;
  int *local_c;
  int *local_8;

  iVar5 = STField<int>(this,0x8c);
  bVar6 = STField<int>(this,0x54) != 0;
  uVar3 = *(uint *)(iVar5 + 0xb0);
  if ((uVar3 & 1) == 0) {
    bVar6 = bVar6 | 2;
  }
  puVar1 = (undefined4 *)(iVar5 + 0xc0);
  local_c = *(int **)(STField<int>(this,0x90) + 0x98);
  puVar2 = (undefined4 *)(iVar5 + 0xb8);
  local_10 = this;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar4 = (**(code **)(*local_c + 0x1c))
                    (local_c,&local_8,-(uint)((uVar3 & 0x10) != 0) & (uint)puVar2,
                     -(uint)((uVar3 & 0x100) != 0) & (uint)puVar1,bVar6);
  *param_2 = local_8;
  if (-1 < iVar4) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar4 = (**(code **)*local_8)(local_8,&DAT_007a1b70,&local_c);
    if (iVar4 < 0) {
      if ((*(byte *)(iVar5 + 0xb0) & 0x10) != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*local_8 + 0x18))(local_8,puVar2,puVar1);
      }
      if ((*(byte *)(iVar5 + 0xb0) & 1) != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*local_8 + 0x20))(local_8,1);
      }
      if ((*(byte *)(iVar5 + 0xb0) & 4) != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*local_8 + 0x40))(local_8,1);
        STField<undefined4>(local_10,0x54) = 0;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar5 = (**(code **)(*param_1 + 0x44))(param_1,local_20,local_18);
      if (iVar5 == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*local_8 + 0x48))(local_8,local_20,local_18);
      }
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*local_c + 0x4c))(local_c,0x10,&local_50);
      local_4c = *(undefined4 *)(iVar5 + 0xac);
      local_48 = (local_48 ^ *(uint *)(iVar5 + 0xb0)) & 8 ^ *(uint *)(iVar5 + 0xb0);
      local_40 = *puVar2;
      local_3c = *(undefined4 *)(iVar5 + 0xbc);
      local_38 = *puVar1;
      local_34 = *(undefined4 *)(iVar5 + 0xc4);
      local_50 = 0x20;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*local_c + 0x50))(local_c,0x20,&local_50);
      if ((*(byte *)(iVar5 + 0xb0) & 4) != 0) {
        STField<undefined4>(local_10,0x54) = 0;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*local_c + 8))(local_c);
    }
    iVar4 = 0;
  }
  return iVar4;
}

// 0074C115 FUN_0074c115
#line 1 "decomp/ST.exe/functions/0074C115/decomp.c"
int __thiscall st::fn_0074C115(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_8;

  local_8 = this;
  if (*(int *)(STField<int>(this,0x8c) + 200) == 0) {
    iVar2 = st::fn_0074BFBF(this,param_1,&local_8);
    if (-1 < iVar2) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*(int *)this + 0x24))(param_1,local_8);
      if (-1 < iVar2) {
        if (iVar2 == 0) {
          piVar1 = *(int **)(STField<int>(this,0x90) + 0x9c);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,local_8);
          STField<undefined4>(this,0x54) = 0;
        }
        else if (iVar2 == 1) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*local_8 + 8))(local_8);
          STField<undefined4>(this,0x54) = 1;
          if (STField<int>(this,0x58) == 0) {
            st::fn_00747406(this,0xb,nullptr,0);
            STField<undefined4>(this,0x58) = 1;
          }
          return 0;
        }
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  else {
    piVar1 = *(int **)(STField<int>(this,0x90) + 0x9c);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,param_1);
  }
  return iVar2;
}

// 0074C1C4 FUN_0074c1c4
#line 1 "decomp/ST.exe/functions/0074C1C4/decomp.c"
/* [STVTableApplier] Virtual slot 0079DDEC+0x40 */

undefined4 st::fn_0074C1C4(void)

{
  return 1;
}

// 0074C1CA FUN_0074c1ca
#line 1 "decomp/ST.exe/functions/0074C1CA/decomp.c"
/* [STVTableApplier] Virtual slot 0079DDEC+0x58 */

undefined4 __fastcall st::fn_0074C1CA(int param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int **)(param_1 + 0x90) != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x90) + 0x4c))();
  }
  return uVar1;
}

// 0074C1DC FUN_0074c1dc
#line 1 "decomp/ST.exe/functions/0074C1DC/decomp.c"
/* [STVTableApplier] Virtual slot 0079DDEC+0x5C */

undefined4 __fastcall st::fn_0074C1DC(int param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int **)(param_1 + 0x90) != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x90) + 0x50))();
  }
  return uVar1;
}

// 0074C1EE FUN_0074c1ee
#line 1 "decomp/ST.exe/functions/0074C1EE/decomp.c"
/* [STVTableApplier] Virtual slot 0079DDEC+0x60 */

void __fastcall st::fn_0074C1EE(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0074c1f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(**(int **)(param_1 + 0x90) + 0x54))();
  return;
}

// 0074C1F9 FUN_0074c1f9
#line 1 "decomp/ST.exe/functions/0074C1F9/decomp.c"
/* [STVTableApplier] Virtual slot 0079DDB0+0x10 */

int st::fn_0074C1F9(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;

  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x50);
  st::external_00000018(lpCriticalSection);
  if (*(int *)(param_1 + 8) != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    piVar1 = *(int **)(param_1 + 0x80);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (((piVar1 != nullptr) && (piVar1[6] != 0)) &&
       (*(int *)(*(int *)(param_1 + 0x84) + 0x18) != 0)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 0x18))();
      st::external_00000018((LPCRITICAL_SECTION)(param_1 + 0x68));
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(**(int **)(param_1 + 0x84) + 0x18))();
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*(int *)(param_1 + -0xc) + 0x3c))();
      if (-1 < iVar2) {
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      st::external_00000019((LPCRITICAL_SECTION)(param_1 + 0x68));
      st::external_00000019(lpCriticalSection);
      return iVar2;
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  st::external_00000019(lpCriticalSection);
  return 0;
}

// 0074C28A FUN_0074c28a
#line 1 "decomp/ST.exe/functions/0074C28A/decomp.c"
/* [STVTableApplier] Virtual slot 0079DDB0+0x14 */

int st::fn_0074C28A(AnonShape_007470E5_0A8F5E67 *param_1)

{
  undefined4 *puVar1;
  AnonShape_007470E5_0A8F5E67 *pAVar2;
  AnonShape_007470E5_0A8F5E67 *pAVar3;

  pAVar3 = param_1;
  pAVar2 = param_1 + 1;
  st::external_00000018((LPCRITICAL_SECTION)&pAVar2->field_0x20);
  puVar1 = &param_1->field_0008;
  param_1 = nullptr;
  if (*puVar1 != 1) {
    if ((*(int *)&pAVar3[2].field_0x20 == 0) ||
       (*(int *)(*(int *)&pAVar3[2].field_0x20 + 0x18) == 0)) {
      if ((*(int **)&pAVar3[2].field_0x24 != nullptr) && (*(int *)&pAVar3[1].field_0x14 == 0)) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(**(int **)&pAVar3[2].field_0x24 + 0x4c))();
        *(undefined4 *)&pAVar3[1].field_0x14 = 1;
      }
    }
    else if (*(int *)(*(int *)&pAVar3[2].field_0x24 + 0x18) != 0) {
      if (*puVar1 == 0) {
        st::external_00000018((LPCRITICAL_SECTION)&pAVar3[2].field_0008);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        param_1 = (AnonShape_007470E5_0A8F5E67 *)
                  (**(code **)(*(int *)&pAVar3[-1].field_0x24 + 0x38))();
        st::external_00000019((LPCRITICAL_SECTION)&pAVar3[2].field_0008);
      }
      if (-1 < (int)param_1) {
        param_1 = (AnonShape_007470E5_0A8F5E67 *)st::fn_007470E5(pAVar3);
      }
      goto LAB_0074c313;
    }
    pAVar3->field_0008 = 1;
  }
LAB_0074c313:
  *(undefined4 *)&pAVar3[1].field_0x18 = 0;
  *(undefined4 *)&pAVar3[1].field_0x1c = 0;
  st::external_00000019((LPCRITICAL_SECTION)&pAVar2->field_0x20);
  return (int)param_1;
}

// 0074C32D FUN_0074c32d
#line 1 "decomp/ST.exe/functions/0074C32D/decomp.c"
/* [STAbiConsistencyApplier] x87_double_parameter_slots target=function:-1: prototype=undefined4
   __thiscall FUN_0074c32d(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3,
   undefined4 param_4, double param_5) Evidence: x87 double-width accesses or exact split stores
   into an independently typed double field prove physical EBP slot boundaries; merged_slots={4=1};
   sites=0074C33A FLD double ptr [EBP + 0x18] */

undefined4 __thiscall
st::fn_0074C32D(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            double param_5)

{
  undefined4 uVar1;

  if (STField<int *>(this,0x90) == nullptr) {
    uVar1 = 0;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar1 = (**(code **)(*STField<int *>(this,0x90) + 0x58))
                      (param_1,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}

// 0074C35B FUN_0074c35b
#line 1 "decomp/ST.exe/functions/0074C35B/decomp.c"
/* [STVTableApplier] Virtual slot 0079DED8+0x38

   [STVTableApplier] Virtual slot 007A17C8+0x38

   [STVTableApplier] Virtual slot 007A1950+0x38 */

uint __fastcall st::fn_0074C35B(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(*(int *)(*(int *)(param_1 + 0xd8) + 0x90) + 0x18) == 0) {
    return 0x80040209;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(*(int *)(param_1 + 0x70) + 0x14) == 0) {
    return 0x80040227;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return -(uint)(*(int *)(param_1 + 0x6c) != 0) & 0x8004020b;
}

// 0074C38F FUN_0074c38f
#line 1 "decomp/ST.exe/functions/0074C38F/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 0074BE76 -> 0074C38F @ 0074BEA7 */

undefined4 * __thiscall
st::fn_0074C38F(void *this,undefined4 param_1,int param_2,undefined4 param_3,char *text)

{
  st::fn_0074857E(this,param_1,param_2,param_2 + 0x5c,param_3,(short *)text);
  STField<int>(this,0xd8) = param_2;
  *(VTable_007A17C8 **)this = &VTable_007A17C8;
  STField<VTable_007A1780 *>(this,0xc) = &VTable_007A1780;
  STField<VTable_007A1768 *>(this,0x10) = &VTable_007A1768;
  STField<VTable_007A1740 *>(this,0x98) = &VTable_007A1740;
  return this;
}

// 0074C3D8 FUN_0074c3d8
#line 1 "decomp/ST.exe/functions/0074C3D8/decomp.c"
undefined4 * __thiscall st::fn_0074C3D8(void *this,byte param_1)

{
  st::fn_007485C5((int)this);
  if ((param_1 & 1) != 0) {
    st::fn_0072E2B0(this);
  }
  return this;
}

// 0074C3F4 FUN_0074c3f4
#line 1 "decomp/ST.exe/functions/0074C3F4/decomp.c"
void __thiscall st::fn_0074C3F4(void *this,undefined4 param_1)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_ESI;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*STField<int *>(this,0xd8) + 0x48))(0,param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_00747F68(this,unaff_ESI);
  }
  return;
}

// 0074C41B FUN_0074c41b
#line 1 "decomp/ST.exe/functions/0074C41B/decomp.c"
void __fastcall st::fn_0074C41B(int param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(**(int **)(param_1 + 0xd8) + 0x4c))(0);
  st::fn_00747F91();
  return;
}

// 0074C434 FUN_0074c434
#line 1 "decomp/ST.exe/functions/0074C434/decomp.c"
void __thiscall st::fn_0074C434(void *this,undefined4 param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*STField<int *>(this,0xd8) + 0x50))(0,param_1);
  if (-1 < iVar1) {
    st::fn_00747F52();
  }
  return;
}

// 0074C45B FUN_0074c45b
#line 1 "decomp/ST.exe/functions/0074C45B/decomp.c"
int __thiscall st::fn_0074C45B(void *this,undefined4 param_1)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_retaddr;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*STField<int *>(this,0xd8) + 0x28))(param_1);
  if (iVar1 == 0) {
    iVar1 = (STField<int *>(this,0xd8))[0x24];
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x18) == 0)) {
      iVar1 = 0;
    }
    else {
      /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*STField<int *>(this,0xd8) + 0x2c))(unaff_retaddr,iVar1 + 0x1c);
    }
  }
  return iVar1;
}

// 0074C49C FUN_0074c49c
#line 1 "decomp/ST.exe/functions/0074C49C/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0074C49C returns zeroed full register at 0074C4B9 @ 0074C4BC */

uint __thiscall st::fn_0074C49C(void *this,undefined4 *param_1)

{
  st::fn_00747F57(this,param_1);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*STField<int *>(this,0xd8) + 0x44))(0,param_1);
  return 0;
}

// 0074C4BF FUN_0074c4bf
#line 1 "decomp/ST.exe/functions/0074C4BF/decomp.c"
int st::fn_0074C4BF(int param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x74);
  st::external_00000018(lpCriticalSection);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*(int *)(param_1 + -0xc) + 0x38))();
  if (iVar1 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x58))();
  }
  st::external_00000019(lpCriticalSection);
  return iVar1;
}

// 0074C501 FUN_0074c501
#line 1 "decomp/ST.exe/functions/0074C501/decomp.c"
/* [STVTableApplier] Virtual slot 0079DE90+0x3C

   [STVTableApplier] Virtual slot 007A1780+0x3C

   [STVTableApplier] Virtual slot 007A1908+0x3C */

int st::fn_0074C501(int param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xcc) + 0x5c);
  st::external_00000018(lpCriticalSection);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1 + 0xc) == 0) ||
     (*(int *)(*(int *)(*(int *)(param_1 + 0xcc) + 0x90) + 0x18) == 0)) {
    st::external_00000019(lpCriticalSection);
    iVar1 = -0x7ffbfdf7;
  }
  else {
    iVar1 = st::fn_00748946(param_1);
    if (iVar1 < 0) {
      st::external_00000019(lpCriticalSection);
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x5c))();
      st::external_00000019(lpCriticalSection);
    }
  }
  return iVar1;
}

// 0074C571 FUN_0074c571
#line 1 "decomp/ST.exe/functions/0074C571/decomp.c"
int st::fn_0074C571(AnonShape_0074C571_537DB7FB *param_1)

{
  int iVar1;
  undefined1 *lpCriticalSection;

  lpCriticalSection = &param_1->field_00CC->field_0x5c;
  st::external_00000018((LPCRITICAL_SECTION)lpCriticalSection);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((param_1->field_000C == 0) || (*(int *)(param_1->field_00CC->field_0090 + 0x18) == 0)) {
    st::external_00000019((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = -0x7ffbfdf7;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(param_1->field_00CC->field_0000 + 0x60))();
    if (-1 < iVar1) {
      iVar1 = st::fn_0074896B((int)param_1);
    }
    st::external_00000019((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return iVar1;
}

// 0074C5D2 FUN_0074c5d2
#line 1 "decomp/ST.exe/functions/0074C5D2/decomp.c"
int st::fn_0074C5D2(AnonShape_0074C5D2_07BD206F *param_1,int *param_2)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;

  lpCriticalSection = (LPCRITICAL_SECTION)(param_1->field_0040 + 0x74);
  st::external_00000018(lpCriticalSection);
  iVar1 = st::fn_00748721((AnonShape_00748721_F11EED2A *)param_1,param_2);
  if (iVar1 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*(int *)param_1->field_0040 + 0x54))(param_2);
  }
  st::external_00000019(lpCriticalSection);
  return iVar1;
}

// 0074C613 FUN_0074c613
#line 1 "decomp/ST.exe/functions/0074C613/decomp.c"
/* [STAbiConsistencyApplier] x87_double_parameter_slots target=function:-1: prototype=undefined1
   __stdcall FUN_0074c613(AnonShape_0074C613_A217E84A * param_1, undefined4 param_2, undefined4
   param_3, undefined4 param_4, undefined4 param_5, double param_6) Evidence: x87 double-width
   accesses or exact split stores into an owner field independently typed or consumed as double
   prove physical EBP slot boundaries; merged_slots={5=1}; sites=0074C616 FLD double ptr [EBP +
   0x1c] | 0074C63A FLD double ptr [EBP + 0x1c]
   [STAbiConsistencyApplier] x87_stack_storage_migration target=function:-1: prototype=undefined1
   __stdcall FUN_0074c613(AnonShape_0074C613_A217E84A * param_1, undefined4 param_2, undefined4
   param_3, undefined4 param_4, undefined4 param_5, double param_6) Evidence: retire script-owned
   dynamic x87 storage; observed_ebp_offsets=[28]; custom_storage=[Stack[0x4]:4, Stack[0x8]:4,
   Stack[0xc]:4, Stack[0x10]:4, Stack[0x14]:4, Stack[0x18]:8] */

undefined1
st::fn_0074C613(AnonShape_0074C613_A217E84A *param_1,undefined4 param_2,undefined4 param_3,
            undefined4 param_4,undefined4 param_5,double param_6)

{
  undefined1 uVar1;

  st::fn_007482D8((AnonShape_007482D8_1685BA8E *)param_1,param_2,param_3,param_4,param_5,param_6);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar1 = (**(code **)(*param_1->field_00CC + 100))(param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

// 0074C658 FUN_0074c658
#line 1 "decomp/ST.exe/functions/0074C658/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 0074BE76 -> 0074C658 @ 0074BED6 */

undefined4 * __thiscall
st::fn_0074C658(void *this,undefined4 param_1,int param_2,undefined4 param_3,char *text)

{
  st::fn_00748308(this,param_1,param_2,param_2 + 0x5c,param_3,(short *)text);
  STField<undefined4>(this,0xa4) = 0;
  STField<int>(this,0xa0) = param_2;
  *(VTable_007A1868 **)this = &VTable_007A1868;
  STField<VTable_007A1820 *>(this,0xc) = &VTable_007A1820;
  STField<VTable_007A1808 *>(this,0x10) = &VTable_007A1808;
  return this;
}

// 0074C69E FUN_0074c69e
#line 1 "decomp/ST.exe/functions/0074C69E/decomp.c"
undefined4 * __thiscall st::fn_0074C69E(void *this,byte param_1)

{
  st::fn_0074C6BA(this);
  if ((param_1 & 1) != 0) {
    st::fn_0072E2B0(this);
  }
  return this;
}

// 0074C6BA FUN_0074c6ba
#line 1 "decomp/ST.exe/functions/0074C6BA/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall st::fn_0074C6BA(undefined4 *param_1)

{
  int *piVar1;

  piVar1 = (int *)param_1[0x29];
  *param_1 = &VTable_007A1868;
  param_1[3] = &VTable_007A1820;
  param_1[4] = &VTable_007A1808;
  if (piVar1 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  st::fn_00747BB4((int)param_1);
  return;
}

// 0074C6EA FUN_0074c6ea
#line 1 "decomp/ST.exe/functions/0074C6EA/decomp.c"
HRESULT st::fn_0074C6EA(int *param_1,char *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  HRESULT HVar2;
  int iVar3;
  void **ppvVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;

  if (param_3 == nullptr) {
    HVar2 = -0x7fffbffd;
  }
  else {
    *param_3 = 0;
    iVar3 = 0x10;
    bVar7 = true;
    pcVar5 = param_2;
    pcVar6 = &DAT_007a1210;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = *pcVar5 == *pcVar6;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) {
      iVar3 = 0x10;
      bVar7 = true;
      pcVar5 = param_2;
      pcVar6 = &DAT_007a1200;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar7 = *pcVar5 == *pcVar6;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (!bVar7) {
        HVar2 = st::fn_00747BDF(param_1,param_2,param_3);
        return HVar2;
      }
    }
    if (param_1[0x29] == 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(param_1[0x28] + 0x8c) == 0) {
        ppvVar4 = nullptr;
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        ppvVar4 = (void **)(*(int *)(param_1[0x28] + 0x8c) + 0xc);
      }
      HVar2 = st::fn_00746BAB((LPUNKNOWN)param_1[1],nullptr,ppvVar4,param_1 + 0x29);
      if (HVar2 < 0) {
        return HVar2;
      }
    }
    puVar1 = (undefined4 *)param_1[0x29];
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    HVar2 = (**(code **)*puVar1)(puVar1,param_2,param_3);
  }
  return HVar2;
}

// 0074C77C FUN_0074c77c
#line 1 "decomp/ST.exe/functions/0074C77C/decomp.c"
int __thiscall st::fn_0074C77C(void *this,undefined4 param_1)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_ESI;

  if (*(int *)((STField<int *>(this,0xa0))[0x23] + 0x18) == 0) {
    iVar1 = -0x7fff0001;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*STField<int *>(this,0xa0) + 0x48))(1,param_1);
    if (-1 < iVar1) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar1 = st::fn_0074834E(this,unaff_ESI);
    }
  }
  return iVar1;
}

// 0074C7B6 FUN_0074c7b6
#line 1 "decomp/ST.exe/functions/0074C7B6/decomp.c"
void __fastcall st::fn_0074C7B6(AnonShape_0074C7B6_0CB193FF *param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_1->field_00A0 + 0x4c))(1);
  st::fn_0074837C((AnonShape_0074837C_3396F25D *)param_1);
  return;
}

// 0074C7CF FUN_0074c7cf
#line 1 "decomp/ST.exe/functions/0074C7CF/decomp.c"
void __thiscall st::fn_0074C7CF(void *this,undefined4 param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*STField<int *>(this,0xa0) + 0x50))(1,param_1);
  if (-1 < iVar1) {
    st::fn_00748339(this);
  }
  return;
}

// 0074C7F6 FUN_0074c7f6
#line 1 "decomp/ST.exe/functions/0074C7F6/decomp.c"
/* [STVTableApplier] Virtual slot 007A1868+0x20 */

undefined4 __thiscall st::fn_0074C7F6(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = (*(int **)(param_1 + 0xa0))[0x23];
  if (*(int *)(iVar1 + 0x18) == 0) {
    uVar2 = 0x80070057;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar2 = (**(code **)(**(int **)(param_1 + 0xa0) + 0x2c))(iVar1 + 0x1c,param_2);
  }
  return uVar2;
}

// 0074C81F FUN_0074c81f
#line 1 "decomp/ST.exe/functions/0074C81F/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0074C81F returns zeroed full register at 0074C83C @ 0074C83F */

uint __thiscall st::fn_0074C81F(void *this,undefined4 *param_1)

{
  st::fn_00747F57(this,param_1);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*STField<int *>(this,0xa0) + 0x44))(1,param_1);
  return 0;
}

// 0074C842 FUN_0074c842
#line 1 "decomp/ST.exe/functions/0074C842/decomp.c"
/* [STVTableApplier] Virtual slot 007A1868+0x3C

   [STVTableApplier] Virtual slot 007A19F0+0x3C */

void __thiscall st::fn_0074C842(int param_1,undefined4 param_2,undefined4 param_3)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(**(int **)(param_1 + 0xa0) + 0x30))(param_2,param_3);
  return;
}

// 0074C858 FUN_0074c858
#line 1 "decomp/ST.exe/functions/0074C858/decomp.c"
/* [STVTableApplier] Virtual slot 007A1868+0x34

   [STVTableApplier] Virtual slot 007A19F0+0x34 */

undefined4 __thiscall st::fn_0074C858(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  LPCRITICAL_SECTION lpCriticalSection;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xa0) + 0x5c);
  st::external_00000018(lpCriticalSection);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)((*(int **)(param_1 + 0xa0))[0x23] + 0x18) == 0) {
    st::external_00000019(lpCriticalSection);
    uVar1 = 0x40103;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar1 = (**(code **)(**(int **)(param_1 + 0xa0) + 0x34))(param_2,param_3);
    st::external_00000019(lpCriticalSection);
  }
  return uVar1;
}

// 0074C8A9 FUN_0074c8a9
#line 1 "decomp/ST.exe/functions/0074C8A9/decomp.c"
void st::fn_0074C8A9(AnonShape_0074C8A9_0F993FDC *param_1)

{
  int iVar1;
  byte *puVar3;
  byte *puVar4;
  undefined4 auStack_24 [6];

  iVar1 = param_1->field_0090->field_0000;
  puVar3 = (byte *)&stack0x0000000c;
  puVar4 = (byte *)(auStack_24);
  memmove(puVar4, puVar3, 0x18); /* compiler REP MOVS byte copy */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(iVar1 + 0x40))();
  if (iVar1 == 1) {
    st::fn_007489F8(param_1->field_0090->field_008C,(undefined4 *)&stack0xfffffff4);
  }
  return;
}

// 0074C8EC FUN_0074c8ec
#line 1 "decomp/ST.exe/functions/0074C8EC/decomp.c"

/* [STVTableApplier] Virtual slot 007A1808+0x0

   [STVTableApplier] Virtual slot 007A1990+0x0 */

void st::fn_0074C8EC(void)

{
  st::fn_0074C90A();
  return;
}

// 0074C8F6 FUN_0074c8f6
#line 1 "decomp/ST.exe/functions/0074C8F6/decomp.c"

/* [STVTableApplier] Virtual slot 007A1808+0x4

   [STVTableApplier] Virtual slot 007A1990+0x4 */

void st::fn_0074C8F6(void)

{
  st::fn_0074C921();
  return;
}

// 0074C900 FUN_0074c900
#line 1 "decomp/ST.exe/functions/0074C900/decomp.c"

/* [STVTableApplier] Virtual slot 007A1808+0x8

   [STVTableApplier] Virtual slot 007A1990+0x8 */

void st::fn_0074C900(void)

{
  st::fn_0074C931();
  return;
}

// 0074C90A FUN_0074c90a
#line 1 "decomp/ST.exe/functions/0074C90A/decomp.c"
/* [STVTableApplier] Virtual slot 007A1820+0x0

   [STVTableApplier] Virtual slot 007A19A8+0x0 */

void st::fn_0074C90A(int param_1,undefined4 param_2,undefined4 param_3)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)**(undefined4 **)(param_1 + -8))(*(undefined4 **)(param_1 + -8),param_2,param_3);
  return;
}

// 0074C921 FUN_0074c921
#line 1 "decomp/ST.exe/functions/0074C921/decomp.c"
/* [STVTableApplier] Virtual slot 007A1820+0x4

   [STVTableApplier] Virtual slot 007A19A8+0x4 */

void st::fn_0074C921(int param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(**(int **)(param_1 + -8) + 4))(*(int **)(param_1 + -8));
  return;
}

// 0074C931 FUN_0074c931
#line 1 "decomp/ST.exe/functions/0074C931/decomp.c"
/* [STVTableApplier] Virtual slot 007A1820+0x8

   [STVTableApplier] Virtual slot 007A19A8+0x8 */

void st::fn_0074C931(int param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(**(int **)(param_1 + -8) + 8))(*(int **)(param_1 + -8));
  return;
}

// 0074C941 FUN_0074c941
#line 1 "decomp/ST.exe/functions/0074C941/decomp.c"
/* [STVTableApplier] Virtual slot 007A1820+0x28

   [STVTableApplier] Virtual slot 007A19A8+0x28 */

void st::fn_0074C941(undefined4 param_1,undefined4 *param_2)

{
  st::fn_0074DCA1((short *)&DAT_007a1738,param_2);
  return;
}

// 0074C952 FUN_0074c952
#line 1 "decomp/ST.exe/functions/0074C952/decomp.c"
void * __thiscall st::fn_0074C952(void *this,undefined4 param_1,int param_2,undefined4 *param_3)

{
  st::fn_0074BDE0(this,param_1,param_2,param_3);
  return this;
}

// 0074C96C FUN_0074c96c
#line 1 "decomp/ST.exe/functions/0074C96C/decomp.c"
undefined4 __thiscall st::fn_0074C96C(void *this,int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_8;

  local_8 = 0;
  if (STField<int>(this,0x8c) == 0) {
    pvVar1 = (void *)st::fn_0072E530(0xe8);
    if (pvVar1 == nullptr) {
      puVar2 = nullptr;
    }
    else {
      puVar2 = st::fn_0074CDC5(pvVar1,0,(int)this,&local_8,(char *)"Input");
    }
    STField<undefined4 *>(this,0x8c) = puVar2;
    if (puVar2 == nullptr) goto LAB_0074c9fe;
  }
  if (STField<int>(this,0x90) == 0) {
    pvVar1 = (void *)st::fn_0072E530(0xb0);
    if (pvVar1 == nullptr) {
      puVar2 = nullptr;
    }
    else {
      puVar2 = st::fn_0074CFC0(pvVar1,0,(int)this,&local_8,(char *)"Output");
    }
    STField<undefined4 *>(this,0x90) = puVar2;
    if (puVar2 == nullptr) {
      if (STField<int *>(this,0x8c) != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*STField<int *>(this,0x8c) + 0xc))(1);
      }
      STField<undefined4>(this,0x8c) = 0;
    }
  }
LAB_0074c9fe:
  if (param_1 == 0) {
    uVar3 = STField<undefined4>(this,0x8c);
  }
  else if (param_1 == 1) {
    uVar3 = STField<undefined4>(this,0x90);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// 0074CA21 FUN_0074ca21
#line 1 "decomp/ST.exe/functions/0074CA21/decomp.c"
undefined4 __thiscall st::fn_0074CA21(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  if (STField<int>(this,0x40) == 0) {
    return 0x8004025f;
  }
  if (param_1 == 1) {
    iVar1 = STField<int>(this,0x8c);
    if (*(int *)(iVar1 + 0x18) != 0) {
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = iVar1 + 0xc;
      }
      iVar3 = STField<int>(this,0x90);
LAB_0074ca90:
      uVar2 = st::fn_00747429(this,iVar1,iVar3 + 0x1c);
      return uVar2;
    }
  }
  else if ((*(int *)(STField<int>(this,0x90) + 0x18) != 0) &&
          (iVar1 = st::fn_0074B9F5((void *)(STField<int>(this,0x8c) + 0x1c),
                                (char *)(STField<int>(this,0x90) + 0x1c)), iVar1 != 0)) {
    if (STField<int>(this,0x90) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = STField<int>(this,0x90) + 0xc;
    }
    iVar3 = STField<int>(this,0x8c);
    goto LAB_0074ca90;
  }
  return 0;
}

// 0074CAA4 FUN_0074caa4
#line 1 "decomp/ST.exe/functions/0074CAA4/decomp.c"
int __thiscall st::fn_0074CAA4(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;
  undefined4 uStack_8;

  if (*(int *)(STField<int>(this,0x8c) + 0x18) == 0) {
    local_c = 0;
    uStack_8 = 0;
    local_14 = 1;
    local_10 = 1;
  }
  else {
    piVar1 = *(int **)(STField<int>(this,0x8c) + 0x9c);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,&local_14);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  *param_2 = local_14;
  param_2[1] = local_10;
  if (local_14 < 1) {
    *param_2 = 1;
  }
  if (local_10 < 1) {
    param_2[1] = 1;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,param_2,&local_24);
  if (-1 < iVar2) {
    if (((local_24 < local_14) || (local_20 < local_10)) || (local_1c < local_c)) {
      iVar2 = -0x7fffbffb;
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}

// 0074CB34 FUN_0074cb34
#line 1 "decomp/ST.exe/functions/0074CB34/decomp.c"
int * __thiscall st::fn_0074CB34(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar5;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  int *local_10;
  int *local_c;
  int *local_8;

  piVar1 = param_1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (**(code **)(*param_1 + 0x14))(param_1,local_20,local_18);
  bVar5 = iVar2 == 0;
  local_c = *(int **)(STField<int>(this,0x90) + 0x98);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (**(code **)(*local_c + 0x1c))
                    (local_c,&param_1,-(uint)bVar5 & (uint)local_20,-(uint)bVar5 & (uint)local_18,
                     STField<int>(this,0x54) != 0);
  if (iVar2 < 0) {
LAB_0074cbe0:
    param_1 = nullptr;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)*param_1)(param_1,&DAT_007a1b70,&local_8);
    if (iVar2 < 0) {
      if (bVar5) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*param_1 + 0x18))(param_1,local_20,local_18);
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
      if (iVar2 == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*param_1 + 0x20))(param_1,1);
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1);
      if ((iVar2 == 0) || (STField<int>(this,0x54) != 0)) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*param_1 + 0x40))(param_1,1);
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1);
      if (iVar2 == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*param_1 + 0x28))(param_1,1);
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,&local_c);
      if (iVar2 == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*param_1 + 0x38))(param_1,local_c);
        st::fn_0074BC50(local_c);
      }
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*local_8 + 0x50))(local_8,0x28,STField<int>(this,0x8c) + 0xa8);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*local_8 + 8))(local_8);
      if (iVar2 < 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*param_1 + 8))(param_1);
        goto LAB_0074cbe0;
      }
    }
    STField<undefined4>(this,0x54) = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)(*piVar1 + 0x44))(piVar1,local_30,local_28);
    if (iVar2 == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1 + 0x48))(param_1,local_30,local_28);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar3 = (**(code **)(*piVar1 + 0x2c))(piVar1);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x30))(param_1,uVar3);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 0x10))(piVar1);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x10))(param_1);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 0xc))(piVar1,&local_c);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0xc))(param_1,&local_10);
    memmove(local_10, local_c, uVar3); /* compiler REP MOVS byte copy */
  }
  return param_1;
}

// 0074CCE2 FUN_0074cce2
#line 1 "decomp/ST.exe/functions/0074CCE2/decomp.c"
int __thiscall st::fn_0074CCE2(void *this,int *param_1)

{
  int iVar1;

  if (*(int *)(STField<int>(this,0x8c) + 200) == 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((*(int *)(STField<int>(this,0x8c) + 0x9c) == (STField<int *>(this,0x90))[0x26]) ||
       (param_1 = st::fn_0074CB34(this,param_1), param_1 != nullptr)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*(int *)this + 0x68))(param_1);
      if (iVar1 < 0) {
        if (*(int *)(STField<int>(this,0x8c) + 0x9c) !=
            *(int *)(STField<int>(this,0x90) + 0x98)) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*param_1 + 8))(param_1);
        }
      }
      else {
        if (iVar1 == 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar1 = (**(code **)(*STField<int *>(this,0x90) + 0x44))(param_1);
        }
        else if (iVar1 == 1) {
          iVar1 = 0;
          STField<undefined4>(this,0x54) = 1;
          if (STField<int>(this,0x58) == 0) {
            st::fn_00747406(this,0xb,nullptr,0);
            STField<undefined4>(this,0x58) = 1;
          }
        }
        if (*(int *)(STField<int>(this,0x8c) + 0x9c) !=
            *(int *)(STField<int>(this,0x90) + 0x98)) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*param_1 + 8))(param_1);
        }
      }
    }
    else {
      iVar1 = -0x7fff0001;
    }
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*STField<int *>(this,0x90) + 0x44))(param_1);
  }
  return iVar1;
}

// 0074CDC5 FUN_0074cdc5
#line 1 "decomp/ST.exe/functions/0074CDC5/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 006D71D0 -> 0074CDC5 @ 006D7212 | 0074C96C -> 0074CDC5 @ 0074C99D */

undefined4 * __thiscall
st::fn_0074CDC5(void *this,undefined4 param_1,int param_2,undefined4 param_3,char *text)

{
  st::fn_0074C38F(this,param_1,param_2,param_3,text);
  STField<undefined4>(this,0xe4) = 0;
  STField<int>(this,0xe0) = param_2;
  *(VTable_007A1950 **)this = &VTable_007A1950;
  STField<VTable_007A1908 *>(this,0xc) = &VTable_007A1908;
  STField<VTable_007A18F0 *>(this,0x10) = &VTable_007A18F0;
  STField<VTable_007A18C8 *>(this,0x98) = &VTable_007A18C8;
  return this;
}

// 0074CE11 FUN_0074ce11
#line 1 "decomp/ST.exe/functions/0074CE11/decomp.c"
undefined4 * __thiscall st::fn_0074CE11(void *this,byte param_1)

{
  st::fn_007485C5((int)this);
  if ((param_1 & 1) != 0) {
    st::fn_0072E2B0(this);
  }
  return this;
}

// 0074CE2D FUN_0074ce2d
#line 1 "decomp/ST.exe/functions/0074CE2D/decomp.c"
int st::fn_0074CE2D(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_2 == nullptr) {
    iVar2 = -0x7fffbffd;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + -0x30);
    st::external_00000018(lpCriticalSection);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = *(int *)(*(int *)(param_1 + 0x48) + 0x90);
    if (*(int *)(iVar2 + 0x18) == 0) {
      st::external_00000019(lpCriticalSection);
      iVar2 = -0x7ffbfdf6;
    }
    else {
      piVar1 = *(int **)(iVar2 + 0x9c);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_2);
      if (iVar2 < 0) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x48) + 0x90) + 0x98);
        *param_2 = piVar1;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*piVar1 + 4))(piVar1);
        st::external_00000019(lpCriticalSection);
        iVar2 = 0;
      }
      else {
        st::external_00000019(lpCriticalSection);
      }
    }
  }
  return iVar2;
}

// 0074CEB2 FUN_0074ceb2
#line 1 "decomp/ST.exe/functions/0074CEB2/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006D7330 -> 0074CEB2 @ 006D733D | 0074CEB2 -> EXTERNAL:00000019 @ 0074CF11 | 0074CEB2
   -> EXTERNAL:00000019 @ 0074CF1E */

int st::fn_0074CEB2(AnonShape_0074CEB2_D881A5E3 *param_1,int *lpCriticalSection,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection_00;
  int *piVar1;
  void *this;
  int iVar2;

  if (lpCriticalSection == nullptr) {
    iVar2 = -0x7fffbffd;
  }
  else {
    param_1->field_004C = param_3;
    lpCriticalSection_00 = *(LPCRITICAL_SECTION *)&param_1[-1].field_0x20;
    st::external_00000018(lpCriticalSection_00);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*lpCriticalSection + 4))(lpCriticalSection);
    piVar1 = param_1->field_0004;
    if (piVar1 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    param_1->field_0004 = lpCriticalSection;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this = *(void **)(param_1->field_0048 + 0x90);
    if ((STField<int>(this,0x18) != 0) &&
       (iVar2 = st::fn_0074D156(this,lpCriticalSection,param_3), iVar2 < 0)) {
      st::external_00000019(lpCriticalSection_00);
      return iVar2;
    }
    st::external_00000019(lpCriticalSection_00);
    iVar2 = 0;
  }
  return iVar2;
}

// 0074CF2D FUN_0074cf2d
#line 1 "decomp/ST.exe/functions/0074CF2D/decomp.c"
/* [STVTableApplier] Virtual slot 0079DE90+0x30

   [STVTableApplier] Virtual slot 007A1908+0x30 */

undefined4 st::fn_0074CF2D(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0xd4) + 0x90) + 0x18);
  if (piVar1 == nullptr) {
    uVar2 = 0x80040209;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,param_2);
  }
  return uVar2;
}

// 0074CF58 FUN_0074cf58
#line 1 "decomp/ST.exe/functions/0074CF58/decomp.c"
int __thiscall st::fn_0074CF58(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_retaddr;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (**(code **)(*STField<int *>(this,0xe0) + 0x28))(param_1);
  if (iVar2 == 0) {
    piVar1 = *(int **)(*(int *)(STField<int>(this,0xe0) + 0x90) + 0x18);
    if (piVar1 == nullptr) {
      iVar2 = 0;
    }
    else {
      /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,unaff_retaddr);
    }
  }
  return iVar2;
}

// 0074CF93 FUN_0074cf93
#line 1 "decomp/ST.exe/functions/0074CF93/decomp.c"
/* [STVTableApplier] Virtual slot 0079DE58+0x14

   [STVTableApplier] Virtual slot 007A18C8+0x14 */

undefined4 st::fn_0074CF93(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0x90);
  if (*(int *)(iVar1 + 0x18) == 0) {
    uVar3 = 0x80004001;
  }
  else {
    piVar2 = *(int **)(iVar1 + 0x9c);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar3 = (**(code **)(*piVar2 + 0x14))(piVar2,param_2);
  }
  return uVar3;
}

// 0074CFC0 FUN_0074cfc0
#line 1 "decomp/ST.exe/functions/0074CFC0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 006D71D0 -> 0074CFC0 @ 006D7273 | 0074C96C -> 0074CFC0 @ 0074C9D4 */

undefined4 * __thiscall
st::fn_0074CFC0(void *this,undefined4 param_1,int param_2,undefined4 param_3,char *text)

{
  st::fn_0074C658(this,param_1,param_2,param_3,text);
  STField<int>(this,0xa8) = param_2;
  *(VTable_007A19F0 **)this = &VTable_007A19F0;
  STField<VTable_007A19A8 *>(this,0xc) = &VTable_007A19A8;
  STField<VTable_007A1990 *>(this,0x10) = &VTable_007A1990;
  return this;
}

// 0074CFFB FUN_0074cffb
#line 1 "decomp/ST.exe/functions/0074CFFB/decomp.c"
undefined4 * __thiscall st::fn_0074CFFB(void *this,byte param_1)

{
  st::fn_0074C6BA(this);
  if ((param_1 & 1) != 0) {
    st::fn_0072E2B0(this);
  }
  return this;
}

// 0074D017 FUN_0074d017
#line 1 "decomp/ST.exe/functions/0074D017/decomp.c"
/* [STVTableApplier] Virtual slot 007A19A8+0x30 */

undefined4 st::fn_0074D017(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x9c) + 0x8c) + 0x18);
  if (piVar1 == nullptr) {
    uVar2 = 0x80040209;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,param_2);
  }
  return uVar2;
}

// 0074D042 FUN_0074d042
#line 1 "decomp/ST.exe/functions/0074D042/decomp.c"
int __thiscall st::fn_0074D042(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_retaddr;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (**(code **)(*STField<int *>(this,0xa8) + 0x28))(param_1);
  if (iVar2 == 0) {
    piVar1 = *(int **)(*(int *)(STField<int>(this,0xa8) + 0x8c) + 0x18);
    if (piVar1 == nullptr) {
      iVar2 = 0;
    }
    else {
      /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,unaff_retaddr);
    }
  }
  return iVar2;
}

// 0074D07D FUN_0074d07d
#line 1 "decomp/ST.exe/functions/0074D07D/decomp.c"
int __thiscall st::fn_0074D07D(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  undefined4 uStack_8;

  bVar2 = false;
  *param_2 = 0;
  iVar4 = 0;
  iVar3 = *(int *)(STField<int>(this,0xa8) + 0x8c);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0xe4) == 0)) {
    *param_2 = *(int *)(iVar3 + 0x9c);
  }
  piVar1 = (int *)*param_2;
  if (piVar1 == nullptr) {
    iVar4 = -0x7ffbfdf6;
    if (STField<int>(this,0x18) != 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar4 = (**(code **)(*STField<int *>(this,0x9c) + 0xc))(STField<int *>(this,0x9c),param_2);
      bVar2 = true;
    }
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (*param_2 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar4 = (**(code **)(*(int *)this + 0x48))(param_2);
    bVar2 = true;
  }
  if (-1 < iVar4) {
    if (bVar2) {
      local_14 = 0;
      uStack_10 = 0;
      local_c = 0;
      uStack_8 = 0;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1 + 0x14))(param_1,&local_14);
      if (local_c == 0) {
        local_c = 1;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar3 = (**(code **)(*(int *)this + 0x3c))(*param_2,&local_14);
      if (iVar3 < 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)*param_2 + 8))((int *)*param_2);
        *param_2 = 0;
      }
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar4 = (**(code **)(*param_1 + 0x10))(param_1,*param_2,0);
  }
  return iVar4;
}

// 0074D156 FUN_0074d156
#line 1 "decomp/ST.exe/functions/0074D156/decomp.c"
int __thiscall st::fn_0074D156(void *this,int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;

  if (param_2 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 4))(param_1);
    piVar1 = STField<int *>(this,0x98);
    if (piVar1 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    STField<int *>(this,0x98) = param_1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)(*STField<int *>(this,0x9c) + 0x10))
                      (STField<int *>(this,0x9c),param_1,0);
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)(*param_1 + 0x10))(param_1,&local_14);
    if (-1 < iVar2) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*STField<int *>(this,0x98) + 0xc))
                        (STField<int *>(this,0x98),&local_14,&local_24);
      if (-1 < iVar2) {
        if (((local_24 < local_14) || (local_20 < local_10)) || (local_1c < local_c)) {
          iVar2 = -0x7fffbffb;
        }
        else {
          iVar2 = 0;
        }
      }
    }
  }
  return iVar2;
}

// 0074D1EA FUN_0074d1ea
#line 1 "decomp/ST.exe/functions/0074D1EA/decomp.c"
undefined4 * __thiscall st::fn_0074D1EA(void *this,BOOL param_1)

{
  HANDLE pvVar1;

  pvVar1 = st::external_00000007((LPSECURITY_ATTRIBUTES)0x0,param_1,0,(LPCSTR)0x0);
  *(HANDLE *)this = pvVar1;
  return this;
}

// 0074D204 FUN_0074d204
#line 1 "decomp/ST.exe/functions/0074D204/decomp.c"
void __fastcall st::fn_0074D204(undefined4 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    st::external_00000027((HANDLE)*param_1);
  }
  return;
}

// 0074D212 FUN_0074d212
#line 1 "decomp/ST.exe/functions/0074D212/decomp.c"
bool __thiscall st::fn_0074D212(void *this,uint param_1)

{
  DWORD DVar1;
  tagMSG local_2c;
  DWORD local_10;
  HANDLE *local_c;
  DWORD local_8;

  DVar1 = param_1;
  local_c = this;
  if (param_1 != 0xffffffff) {
    local_10 = st::external_000000DA();
  }
  do {
    local_8 = st::external_0000007C(1,local_c,0,DVar1,0x40);
    if ((local_8 == 1) && (st::external_00000085(&local_2c,(HWND)0x0,0,0,0), DVar1 != 0xffffffff)) {
      DVar1 = st::external_000000DA();
      DVar1 = -(uint)(DVar1 - local_10 < param_1) & param_1 - (DVar1 - local_10);
    }
  } while (local_8 == 1);
  return local_8 == 0;
}

// 0074D283 FUN_0074d283
#line 1 "decomp/ST.exe/functions/0074D283/decomp.c"
int __fastcall st::fn_0074D283(int param_1)

{
  st::fn_0074D1EA((void *)(param_1 + 4),1);
  st::fn_0074D1EA((void *)(param_1 + 8),0);
  st::external_00000017((LPCRITICAL_SECTION)(param_1 + 0x18));
  st::external_00000017((LPCRITICAL_SECTION)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}

// 0074D2B6 FUN_0074d2b6
#line 1 "decomp/ST.exe/functions/0074D2B6/decomp.c"
void __fastcall st::fn_0074D2B6(int param_1)

{
  st::fn_0074D761(param_1);
  st::external_00000016((LPCRITICAL_SECTION)(param_1 + 0x30));
  st::external_00000016((LPCRITICAL_SECTION)(param_1 + 0x18));
  st::fn_0074D204((undefined4 *)(param_1 + 8));
  st::fn_0074D204((undefined4 *)(param_1 + 4));
  return;
}

// 0074D33D FUN_0074d33d
#line 1 "decomp/ST.exe/functions/0074D33D/decomp.c"
undefined4 __thiscall st::fn_0074D33D(void *this,undefined4 param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;

  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x18);
  st::external_00000018(lpCriticalSection);
  if (STField<int>(this,0x14) == 0) {
    st::external_00000019(lpCriticalSection);
    uVar1 = 0x80004005;
  }
  else {
    STField<undefined4>(this,0xc) = param_1;
    st::external_00000015(STField<HANDLE>(this,4));
    st::external_0000006D(STField<HANDLE>(this,8),0xffffffff);
    uVar1 = STField<undefined4>(this,0x10);
    st::external_00000019(lpCriticalSection);
  }
  return uVar1;
}

// 0074D38B FUN_0074d38b
#line 1 "decomp/ST.exe/functions/0074D38B/decomp.c"
undefined4 __fastcall st::fn_0074D38B(int param_1)

{
  st::external_0000006D(*(HANDLE *)(param_1 + 4),0xffffffff);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(param_1 + 0xc);
}

// 0074D39E FUN_0074d39e
#line 1 "decomp/ST.exe/functions/0074D39E/decomp.c"
undefined4 __thiscall st::fn_0074D39E(void *this,undefined4 *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;

  DVar1 = st::external_0000006D(STField<HANDLE>(this,4),0);
  if (DVar1 == 0) {
    if (param_1 != nullptr) {
      *param_1 = STField<undefined4>(this,0xc);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// 0074D423 FUN_0074d423
#line 1 "decomp/ST.exe/functions/0074D423/decomp.c"
void __fastcall st::fn_0074D423(AnonShape_0074D423_CE3F4999 *param_1)

{
  HoloTy *pHVar1;
  AnonShape_0074D423_CE3F4999 *local_8;

  if (param_1->field_0008 != (HANDLE)0x0) {
    local_8 = param_1;
    st::external_0000006D(param_1->field_0008,0xffffffff);
    st::external_00000027(param_1->field_0008);
  }
  local_8 = (AnonShape_0074D423_CE3F4999 *)param_1->field_000C;
  while (local_8 != nullptr) {
    pHVar1 = (HoloTy *)st::fn_0074DEC2((int *)&local_8);
    st::fn_0072E2B0(pHVar1);
  }
  st::fn_0074DE91(&param_1->field_000C);
  if (param_1->field_003C != (HANDLE)0x0) {
    st::external_00000027(param_1->field_003C);
  }
  st::external_00000016((LPCRITICAL_SECTION)&param_1->field_0x24);
  st::fn_0074DE7F(&param_1->field_000C);
  return;
}

// 0074D4D4 FUN_0074d4d4
#line 1 "decomp/ST.exe/functions/0074D4D4/decomp.c"
int st::fn_0074D4D4(int *param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  st::external_000000CB((LPVOID)0x0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_1 + 4))();
  do {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*param_1)(&local_14);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 8))(local_14,local_10,local_c,local_8);
  } while (iVar1 == 0);
  st::external_000000CF();
  return iVar1;
}

// 0074D580 FUN_0074d580
#line 1 "decomp/ST.exe/functions/0074D580/decomp.c"

short * st::fn_0074D580(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;

  psVar2 = param_1;
  do {
    sVar1 = *param_2;
    *param_1 = sVar1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (sVar1 != 0);
  return psVar2;
}

// 0074D59E FUN_0074d59e
#line 1 "decomp/ST.exe/functions/0074D59E/decomp.c"

short * st::fn_0074D59E(short *param_1,short *param_2,int param_3)

{
  short sVar1;
  short *psVar2;

  psVar2 = param_1;
  if (param_3 != 0) {
    do {
      param_3 = param_3 + -1;
      if (param_3 == 0) break;
      sVar1 = *param_2;
      *param_1 = sVar1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (sVar1 != 0);
    if (param_3 == 0) {
      *param_1 = 0;
    }
  }
  return psVar2;
}

// 0074D5D3 FUN_0074d5d3
#line 1 "decomp/ST.exe/functions/0074D5D3/decomp.c"

int st::fn_0074D5D3(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;

  uVar2 = *param_1;
  while( true ) {
    uVar1 = *param_2;
    if (uVar2 != uVar1) {
      return (uint)uVar2 - (uint)uVar1;
    }
    param_1 = param_1 + 1;
    if ((uVar2 == 0) || (param_2 = param_2 + 1, uVar1 == 0)) break;
    uVar2 = *param_1;
  }
  return 0;
}

// 0074D60A FUN_0074d60a
#line 1 "decomp/ST.exe/functions/0074D60A/decomp.c"

int st::fn_0074D60A(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;

  while( true ) {
    uVar1 = *param_1;
    uVar2 = *param_2;
    uVar3 = uVar1;
    if ((0x40 < uVar1) && (uVar1 < 0x5b)) {
      uVar3 = uVar1 + 0x20;
    }
    uVar4 = uVar2;
    if ((0x40 < uVar2) && (uVar2 < 0x5b)) {
      uVar4 = uVar2 + 0x20;
    }
    if (uVar3 != uVar4) break;
    param_1 = param_1 + 1;
    if ((uVar1 == 0) || (param_2 = param_2 + 1, uVar2 == 0)) {
      return 0;
    }
  }
  return (uint)uVar3 - (uint)uVar4;
}

// 0074D664 FUN_0074d664
#line 1 "decomp/ST.exe/functions/0074D664/decomp.c"

int st::fn_0074D664(short *param_1)

{
  int iVar1;

  iVar1 = 0;
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

// 0074D678 FUN_0074d678
#line 1 "decomp/ST.exe/functions/0074D678/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0074D678 -> EXTERNAL:0000000F @ 0074D6D2 */

int __cdecl st::fn_0074D678(LPWSTR lpWideCharStr,LPCWSTR param_2)

{
  UINT CodePage;
  DWORD dwFlags;
  int iVar1;
  CHAR *lpMultiByteStr;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  CHAR local_204 [256];
  CHAR local_104 [256];

  lpMultiByteStr = local_104;
  lpUsedDefaultChar = (LPBOOL)0x0;
  lpDefaultChar = (LPCSTR)0x0;
  cbMultiByte = 0x100;
  iVar1 = -1;
  dwFlags = 0;
  CodePage = st::external_00000035();
  st::external_0000003F(CodePage,dwFlags,param_2,iVar1,lpMultiByteStr,cbMultiByte,lpDefaultChar,
                      lpUsedDefaultChar);
  iVar1 = st::external_0000007D(local_204,local_104,&stack0x0000000c);
  st::external_0000000F(0,0,local_204,-1,lpWideCharStr,iVar1 + 1);
  return iVar1;
}

// 0074D6DE FUN_0074d6de
#line 1 "decomp/ST.exe/functions/0074D6DE/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0074D6DE -> EXTERNAL:0000000F @ 0074D708 */

void st::fn_0074D6DE(undefined4 param_1,LPWSTR lpWideCharStr)

{
  CHAR local_24 [32];

  st::external_00000080(local_24,"%d",param_1);
  st::external_0000000F(0,0,local_24,-1,lpWideCharStr,0x20);
  return;
}

// 0074D712 FUN_0074d712
#line 1 "decomp/ST.exe/functions/0074D712/decomp.c"
undefined4 * st::fn_0074D712(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;

  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined1 *)((int)param_2 + param_3);
    puVar4 = (undefined1 *)((int)param_1 + param_3);
    while( true ) {
      puVar4 = puVar4 + -1;
      puVar3 = puVar3 + -1;
      if (param_3 == 0) break;
      param_3 = param_3 - 1;
      *puVar4 = *puVar3;
    }
  }
  else {
    uVar2 = param_3 & 3;
    puVar5 = param_1;
    for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
  }
  return param_1;
}

// 0074D761 FUN_0074d761
#line 1 "decomp/ST.exe/functions/0074D761/decomp.c"
void __fastcall st::fn_0074D761(int param_1)

{
  HANDLE hHandle;

  hHandle = (HANDLE)st::external_00000078((LONG *)(param_1 + 0x14),0);
  if (hHandle != (HANDLE)0x0) {
    st::external_0000006D(hHandle,0xffffffff);
    st::external_00000027(hHandle);
  }
  return;
}

// 0074D786 FUN_0074d786
#line 1 "decomp/ST.exe/functions/0074D786/decomp.c"
/* WARNING: Removing unreachable block (ram,0x0074d96b) */

longlong st::fn_0074D786(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                     uint param_7,uint param_8)

{
  ulonglong uVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  longlong local_EDXEAX_175;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong uVar12;
  uint local_34;
  uint local_28;
  uint local_1c;
  int local_18;
  uint local_10;
  uint local_c;
  uint local_8;

  if ((int)param_2 < 0) {
    local_c = -param_1;
    local_8 = -(param_2 + (param_1 != 0));
  }
  else {
    local_8 = param_2;
    local_c = param_1;
  }
  if ((int)param_4 < 0) {
    uVar9 = -param_3;
    local_10 = -(param_4 + (param_3 != 0));
  }
  else {
    local_10 = param_4;
    uVar9 = param_3;
  }
  if ((int)param_6 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = -param_5;
    uVar5 = -(param_6 + (param_5 != 0));
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = param_5;
    uVar5 = param_6;
  }
  if (((int)param_2 < 1) && ((int)param_2 < 0)) {
    bVar3 = 1;
  }
  else {
    bVar3 = 0;
  }
  if (((int)param_4 < 1) && ((int)param_4 < 0)) {
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  bVar2 = (bool)(bVar4 ^ bVar3);
  local_EDXEAX_175 = st::fn_0072E4F0(uVar9,0,local_c,0);
  lVar12 = st::fn_0072E4F0(local_8,0,uVar9,0);
  lVar13 = st::fn_0072E4F0(local_10,0,local_c,0);
  uVar1 = lVar13 + lVar12 + ((ulonglong)local_EDXEAX_175 >> 0x20);
  uVar9 = (uint)uVar1;
  lVar12 = st::fn_0072E4F0(local_8,0,local_10,0);
  local_34 = (uint)local_EDXEAX_175;
  uVar1 = lVar12 + (uVar1 >> 0x20);
  local_28 = (uint)(uVar1 >> 0x20);
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_7 == 0 && param_8 == 0) goto LAB_0074d94d;
  if (bVar2) {
    uVar7 = -param_7;
    uVar6 = -(param_8 + (param_7 != 0));
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (((int)param_8 < 0) || (((int)param_8 < 1 && (param_7 == 0)))) goto LAB_0074d8cc;
LAB_0074d8c2:
    local_1c = 0xffffffff;
    local_18 = -1;
  }
  else {
    uVar6 = param_8;
    uVar7 = param_7;
    if (((int)param_8 < 1) && ((int)param_8 < 0)) goto LAB_0074d8c2;
LAB_0074d8cc:
    local_1c = 0;
    local_18 = 0;
  }
  bVar10 = CARRY4(uVar7,local_34);
  local_34 = uVar7 + local_34;
  bVar11 = CARRY4(uVar6,uVar9);
  uVar6 = uVar6 + uVar9;
  uVar9 = bVar10 + uVar6;
  uVar6 = (uint)bVar11 + (uint)CARRY4((uint)bVar10,uVar6);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  lVar12 = CONCAT44(local_18 + (uint)CARRY4(uVar6,local_1c),uVar6 + local_1c);
  lVar13 = uVar1 + lVar12;
  local_28 = (uint)((ulonglong)lVar13 >> 0x20);
  uVar1 = uVar1 + lVar12;
  if (lVar13 < 0) {
    bVar2 = !bVar2;
    uVar6 = ~local_34;
    local_34 = uVar6 + 1;
    uVar9 = ~uVar9 + (uint)(0xfffffffe < uVar6);
    uVar6 = (uint)(local_34 == 0 && uVar9 == 0);
    local_28 = ~local_28 + (uint)CARRY4(~(uint)lVar13,uVar6);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar1 = CONCAT44(local_28,~(uint)lVar13 + uVar6);
  }
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_0074d94d:
  uVar12 = CONCAT44(uVar9,local_34);
  iVar8 = 0;
  if (((int)param_6 < 1) && ((int)param_6 < 0)) {
    bVar2 = !bVar2;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  if (uVar1 < CONCAT44(uVar5,param_3)) {
    if (uVar1 == 0) {
      lVar12 = st::fn_00735220(local_34,uVar9,param_3,uVar5);
      if (bVar2) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        lVar12 = CONCAT44(-((int)((ulonglong)lVar12 >> 0x20) + (uint)((int)lVar12 != 0)),
                          -(int)lVar12);
      }
    }
    else if (uVar5 == 0) {
      lVar13 = st::fn_00735220(uVar9,(uint)uVar1,param_3,0);
      uVar14 = st::fn_00735290(uVar9,(uint)uVar1,param_3,0);
      lVar12 = st::fn_00735220(local_34,(uint)uVar14,param_3,0);
      lVar12 = lVar12 + (lVar13 << 0x20);
      if (bVar2) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        lVar12 = CONCAT44(-((int)((ulonglong)lVar12 >> 0x20) + (uint)((int)lVar12 != 0)),
                          -(int)lVar12);
      }
    }
    else {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_8 = 0x40;
      do {
        lVar12 = st::fn_00741210(1,iVar8);
        lVar13 = st::fn_00741210(1,local_28);
        local_28 = (uint)((ulonglong)lVar13 >> 0x20);
        uVar9 = (uint)lVar13;
        if ((uVar12 & 0x8000000000000000U) != 0) {
          uVar9 = uVar9 + 1;
        }
        uVar12 = st::fn_00741210(1,(int)((ulonglong)uVar12 >> 0x20));
        if ((uVar5 <= local_28) && ((uVar5 < local_28 || (param_3 <= uVar9)))) {
          local_28 = (local_28 - uVar5) - (uint)(uVar9 < param_3);
          lVar12 = lVar12 + 1;
        }
        iVar8 = (int)((ulonglong)lVar12 >> 0x20);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_5 = (uint)lVar12;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_8 = param_8 - 1;
      } while (param_8 != 0);
      if (bVar2) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        lVar12 = CONCAT44(-(iVar8 + (uint)(param_5 != 0)),-param_5);
      }
    }
  }
  else if (bVar2) {
    lVar12 = -0x8000000000000000;
  }
  else {
    lVar12 = 0x7fffffffffffffff;
  }
  return lVar12;
}

// 0074DA81 FUN_0074da81
#line 1 "decomp/ST.exe/functions/0074DA81/decomp.c"
/* WARNING: Removing unreachable block (ram,0x0074dc1c) */

undefined8 st::fn_0074DA81(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  longlong local_14;

  uVar6 = param_2;
  if ((int)param_2 < 0) {
    bVar11 = param_1 != 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = -param_1;
    uVar6 = -(param_2 + bVar11);
  }
  uVar7 = param_3;
  if ((int)param_3 < 0) {
    uVar7 = -param_3;
  }
  uVar2 = param_4;
  if ((int)param_4 < 0) {
    uVar2 = -param_4;
  }
  if (((int)param_2 < 1) && ((int)param_2 < 0)) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  bVar11 = (bool)((int)param_3 < 0 ^ bVar1);
  local_14 = st::fn_0072E4F0(param_1,0,uVar7,0);
  uVar5 = 0;
  if (uVar6 != 0) {
    lVar13 = st::fn_0072E4F0(uVar6,0,uVar7,0);
    lVar13 = lVar13 + ((ulonglong)local_14 >> 0x20);
    uVar5 = (uint)((ulonglong)lVar13 >> 0x20);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_14 = CONCAT44((int)lVar13,(uint)local_14);
  }
  if (param_5 != 0) {
    uVar6 = (int)param_5 >> 0x1f;
    if (bVar11) {
      uVar6 = -(uVar6 + (param_5 != 0));
      bVar12 = (int)param_5 < 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = -param_5;
    }
    else {
      bVar12 = -1 < (int)param_5;
    }
    bVar9 = CARRY4((uint)local_14,param_5);
    uVar3 = (uint)local_14 + param_5;
    bVar10 = CARRY4(STPiece<4,4>(local_14),uVar6);
    uVar6 = STPiece<4,4>(local_14) + uVar6;
    uVar7 = bVar9 + uVar6;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_14 = CONCAT44(uVar7,uVar3);
    uVar5 = uVar5 + (uint)bVar10 + (uint)CARRY4((uint)bVar9,uVar6) + (bVar12 - 1);
    if ((int)uVar5 < 0) {
      bVar11 = !bVar11;
      uVar3 = ~uVar3;
      iVar4 = uVar3 + 1;
      iVar8 = ~uVar7 + (uint)(0xfffffffe < uVar3);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_14 = CONCAT44(iVar8,iVar4);
      uVar5 = ~uVar5 + (uint)(iVar4 == 0 && iVar8 == 0);
    }
  }
  if ((int)param_4 < 0) {
    bVar11 = !bVar11;
  }
  if (uVar5 < uVar2) {
    if ((uVar5 == 0) && (STPiece<4,4>(local_14) < uVar2)) {
      iVar4 = 0;
    }
    else {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar4 = (int)(CONCAT44(uVar5,STPiece<4,4>(local_14)) / (ulonglong)uVar2);
      if (&stack0x00000000 != (undefined1 *)0x10) {
                    /* WARNING: Ignoring partial resolution of indirect */
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        STPiece<4,4>(local_14) = (int)(CONCAT44(uVar5,STPiece<4,4>(local_14)) % (ulonglong)uVar2);
      }
    }
    iVar8 = (int)((ulonglong)local_14 / (ulonglong)uVar2);
    if (bVar11) {
      bVar11 = iVar8 != 0;
      iVar8 = -iVar8;
      iVar4 = -(iVar4 + (uint)bVar11);
    }
  }
  else if (bVar11) {
    iVar8 = 0;
    iVar4 = -0x80000000;
  }
  else {
    iVar8 = -1;
    iVar4 = 0x7fffffff;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  return CONCAT44(iVar4,iVar8);
}

// 0074DCA1 FUN_0074dca1
#line 1 "decomp/ST.exe/functions/0074DCA1/decomp.c"
undefined4 st::fn_0074DCA1(short *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    iVar2 = st::fn_0074D664(param_1);
    uVar5 = iVar2 * 2 + 2;
    puVar3 = st::external_000000CD(uVar5);
    *param_2 = puVar3;
    if (puVar3 == nullptr) {
      uVar1 = 0x8007000e;
    }
    else {
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *(undefined4 *)param_1;
        param_1 = param_1 + 2;
        puVar3 = puVar3 + 1;
      }
      uVar1 = 0;
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)puVar3 = (char)*param_1;
        param_1 = (short *)((int)param_1 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
  }
  return uVar1;
}

// 0074DCF0 FUN_0074dcf0
#line 1 "decomp/ST.exe/functions/0074DCF0/decomp.c"
DWORD st::fn_0074DCF0(undefined4 param_1,DWORD param_2,HWND param_3,UINT param_4)

{
  bool bVar1;
  HWND hWnd;
  DWORD DVar2;
  BOOL BVar3;
  DWORD DVar4;
  HANDLE pvVar5;
  bool bVar6;
  UINT UVar7;
  WPARAM wParam;
  int nPriority;
  LPARAM lParam;
  DWORD local_24;
  uint local_20;
  tagMSG local_1c;

  bVar1 = false;
  if ((param_2 != 0xffffffff) && (param_2 != 0)) {
    local_24 = st::external_00000076();
  }
  bVar6 = param_3 != (HWND)0x0;
  while( true ) {
    DVar4 = param_2;
    if (10 < param_2) {
      DVar4 = 10;
    }
    DVar2 = st::external_0000007C(1,(HANDLE *)&param_1,0,DVar4,(-(uint)bVar6 & 8) + 0x40);
    UVar7 = param_4;
    hWnd = param_3;
    if ((DVar2 != 1) && ((DVar2 != 0x102 || (DVar4 == param_2)))) break;
    if (param_3 != (HWND)0x0) {
      while (BVar3 = st::external_00000085(&local_1c,hWnd,UVar7,UVar7,1), BVar3 != 0) {
        st::external_00000084(&local_1c);
      }
    }
    st::external_00000085(&local_1c,(HWND)0x0,0,0,0);
    if ((param_2 != 0xffffffff) && (param_2 != 0)) {
      DVar4 = st::external_00000076();
      if (param_2 < DVar4 - local_24) {
        param_2 = 0;
        local_24 = DVar4;
      }
      else {
        param_2 = param_2 - (DVar4 - local_24);
        local_24 = DVar4;
      }
    }
    if (!bVar1) {
      pvVar5 = st::external_00000073();
      local_20 = st::external_00000077(pvVar5);
      if (local_20 < 2) {
        nPriority = 2;
        pvVar5 = st::external_00000073();
        st::external_00000012(pvVar5,nPriority);
      }
      bVar1 = true;
    }
  }
  if (bVar1) {
    pvVar5 = st::external_00000073();
    st::external_00000012(pvVar5,local_20);
    DVar4 = st::external_0000007B(8);
    if ((DVar4 >> 0x10 & 8) != 0) {
      lParam = 0;
      wParam = 0;
      UVar7 = 0;
      DVar4 = st::external_0000006A();
      st::external_0000008F(DVar4,UVar7,wParam,lParam);
    }
  }
  return DVar2;
}

// 0074DE63 FUN_0074de63
#line 1 "decomp/ST.exe/functions/0074DE63/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_0074DE63(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 10;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

// 0074DE7F FUN_0074de7f
#line 1 "decomp/ST.exe/functions/0074DE7F/decomp.c"
void __fastcall st::fn_0074DE7F(undefined4 *param_1)

{
  st::fn_0074DE91(param_1);
  st::fn_0074E2C1((int)(param_1 + 3));
  return;
}

// 0074DE91 FUN_0074de91
#line 1 "decomp/ST.exe/functions/0074DE91/decomp.c"
void __fastcall st::fn_0074DE91(undefined4 *param_1)

{
  HoloTy *pHVar1;
  HoloTy *pHVar2;

  pHVar2 = (HoloTy *)*param_1;
  while (pHVar2 != nullptr) {
    pHVar1 = *(HoloTy **)&pHVar2->field_0x4;
    st::fn_0072E2B0(pHVar2);
    pHVar2 = pHVar1;
  }
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

// 0074DEB7 FUN_0074deb7
#line 1 "decomp/ST.exe/functions/0074DEB7/decomp.c"
undefined4 __fastcall st::fn_0074DEB7(undefined4 *param_1)

{
  return *param_1;
}

// 0074DEBA FUN_0074deba
#line 1 "decomp/ST.exe/functions/0074DEBA/decomp.c"
undefined4 __fastcall st::fn_0074DEBA(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 0074DEC2 FUN_0074dec2
#line 1 "decomp/ST.exe/functions/0074DEC2/decomp.c"
undefined4 st::fn_0074DEC2(int *param_1)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = *param_1;
  uVar2 = 0;
  if (iVar1 != 0) {
    *param_1 = *(int *)(iVar1 + 4);
    uVar2 = *(undefined4 *)(iVar1 + 8);
  }
  return uVar2;
}

// 0074DED7 FUN_0074ded7
#line 1 "decomp/ST.exe/functions/0074DED7/decomp.c"
undefined4 st::fn_0074DED7(int param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}

// 0074DEE5 FUN_0074dee5
#line 1 "decomp/ST.exe/functions/0074DEE5/decomp.c"
int __thiscall st::fn_0074DEE5(void *this,int param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = st::fn_0074DEB7(this);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = st::fn_0074DED7(iVar1);
    if (iVar2 == param_1) break;
    if (iVar1 == 0) {
      iVar1 = *(int *)this;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return iVar1;
}

// 0074DF2B FUN_0074df2b
#line 1 "decomp/ST.exe/functions/0074DF2B/decomp.c"
int __thiscall st::fn_0074DF2B(void *this,int *param_1)

{
  int iVar1;

  iVar1 = 0;
  if (param_1 != nullptr) {
    if (*param_1 == 0) {
      *(int *)this = param_1[1];
    }
    else {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] == nullptr) {
      STField<int>(this,4) = *param_1;
    }
    else {
      *(int *)param_1[1] = *param_1;
    }
    iVar1 = param_1[2];
    st::fn_0074E2D9((void *)((int)this + 0xc),param_1);
    STField<int>(this,8) = STField<int>(this,8) + -1;
  }
  return iVar1;
}

// 0074DF72 FUN_0074df72
#line 1 "decomp/ST.exe/functions/0074DF72/decomp.c"
void __thiscall st::fn_0074DF72(void *this,undefined4 param_1)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)st::fn_0074E2FF((AnonShape_0074E2FF_47CF731F *)((int)this + 0xc));
  if ((puVar1 == nullptr) &&
     (puVar1 = (undefined4 *)st::fn_0072E530(0xc), puVar1 == nullptr)) {
    return;
  }
  puVar1[2] = param_1;
  puVar1[1] = 0;
  *puVar1 = STField<undefined4>(this,4);
  if (STField<int>(this,4) == 0) {
    *(undefined4 **)this = puVar1;
  }
  else {
    *(undefined4 **)(STField<int>(this,4) + 4) = puVar1;
  }
  STField<int>(this,8) = STField<int>(this,8) + 1;
  STField<undefined4 *>(this,4) = puVar1;
  return;
}

// 0074DFB5 FUN_0074dfb5
#line 1 "decomp/ST.exe/functions/0074DFB5/decomp.c"
void __thiscall st::fn_0074DFB5(void *this,undefined4 param_1)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)st::fn_0074E2FF((AnonShape_0074E2FF_47CF731F *)((int)this + 0xc));
  if ((puVar1 == nullptr) &&
     (puVar1 = (undefined4 *)st::fn_0072E530(0xc), puVar1 == nullptr)) {
    return;
  }
  puVar1[2] = param_1;
  *puVar1 = 0;
  puVar1[1] = *(undefined4 *)this;
  if (*(undefined4 **)this == nullptr) {
    STField<undefined4 *>(this,4) = puVar1;
  }
  else {
    **(undefined4 **)this = puVar1;
  }
  STField<int>(this,8) = STField<int>(this,8) + 1;
  *(undefined4 **)this = puVar1;
  return;
}

// 0074DFF5 FUN_0074dff5
#line 1 "decomp/ST.exe/functions/0074DFF5/decomp.c"
undefined4 __thiscall st::fn_0074DFF5(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *local_8;

  local_8 = this;
  local_8 = (void *)st::fn_0074DEB7(param_1);
  do {
    if (local_8 == nullptr) {
      return 1;
    }
    uVar1 = st::fn_0074DEC2((int *)&local_8);
    iVar2 = st::fn_0074DF72(this,uVar1);
  } while (iVar2 != 0);
  return 0;
}

// 0074E079 FUN_0074e079
#line 1 "decomp/ST.exe/functions/0074E079/decomp.c"
void __thiscall st::fn_0074E079(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;

  if (param_1 == 0) {
    st::fn_0074DFB5(this,param_2);
  }
  else if (param_1 == STField<int>(this,4)) {
    st::fn_0074DF72(this,param_2);
  }
  else {
    piVar2 = (int *)st::fn_0074E2FF((AnonShape_0074E2FF_47CF731F *)((int)this + 0xc));
    if ((piVar2 == nullptr) &&
       (piVar2 = (int *)st::fn_0072E530(0xc), piVar2 == nullptr)) {
      return;
    }
    piVar2[2] = param_2;
    piVar1 = *(int **)(param_1 + 4);
    *piVar2 = param_1;
    piVar2[1] = (int)piVar1;
    *piVar1 = (int)piVar2;
    *(int **)(param_1 + 4) = piVar2;
    STField<int>(this,8) = STField<int>(this,8) + 1;
  }
  return;
}

// 0074E0D6 FUN_0074e0d6
#line 1 "decomp/ST.exe/functions/0074E0D6/decomp.c"
undefined4 __thiscall st::fn_0074E0D6(void *this,int param_1,int *param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = st::fn_0074DEB7(param_2);
  while( true ) {
    if (iVar1 == 0) {
      return 1;
    }
    iVar2 = st::fn_0074DED7(iVar1);
    param_1 = st::fn_0074E079(this,param_1,iVar2);
    if (param_1 == 0) break;
    if (iVar1 == 0) {
      iVar1 = *param_2;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return 0;
}

// 0074E122 FUN_0074e122
#line 1 "decomp/ST.exe/functions/0074E122/decomp.c"
void __thiscall st::fn_0074E122(void *this,int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;

  if (param_1 == nullptr) {
    st::fn_0074DF72(this,param_2);
  }
  else if (param_1 == *(int **)this) {
    st::fn_0074DFB5(this,param_2);
  }
  else {
    piVar2 = (int *)st::fn_0074E2FF((AnonShape_0074E2FF_47CF731F *)((int)this + 0xc));
    if ((piVar2 == nullptr) &&
       (piVar2 = (int *)st::fn_0072E530(0xc), piVar2 == nullptr)) {
      return;
    }
    piVar2[2] = param_2;
    iVar1 = *param_1;
    *piVar2 = iVar1;
    piVar2[1] = (int)param_1;
    *param_1 = (int)piVar2;
    *(int **)(iVar1 + 4) = piVar2;
    STField<int>(this,8) = STField<int>(this,8) + 1;
  }
  return;
}

// 0074E17D FUN_0074e17d
#line 1 "decomp/ST.exe/functions/0074E17D/decomp.c"
undefined4 __thiscall st::fn_0074E17D(void *this,int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;

  puVar1 = (undefined4 *)st::fn_0074DEBA(param_2);
  while( true ) {
    if (puVar1 == nullptr) {
      return 1;
    }
    iVar2 = st::fn_0074DED7((int)puVar1);
    param_1 = (int *)st::fn_0074E122(this,param_1,iVar2);
    if (param_1 == nullptr) break;
    if (puVar1 == nullptr) {
      puVar1 = *(undefined4 **)(param_2 + 4);
    }
    else {
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  return 0;
}

// 0074E1C9 FUN_0074e1c9
#line 1 "decomp/ST.exe/functions/0074E1C9/decomp.c"
undefined4 __thiscall st::fn_0074E1C9(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;

  if (param_1 != nullptr) {
    iVar3 = 0;
    piVar2 = param_1;
    do {
      piVar2 = (int *)*piVar2;
      iVar3 = iVar3 + 1;
    } while (piVar2 != nullptr);
    if (param_2[1] != 0) {
      *(undefined4 *)(param_2[1] + 4) = *(undefined4 *)this;
    }
    if (*(int **)this != nullptr) {
      **(int **)this = param_2[1];
    }
    if (*param_2 == 0) {
      *param_2 = *(int *)this;
    }
    iVar1 = param_1[1];
    *(int *)this = iVar1;
    if (iVar1 == 0) {
      STField<undefined4>(this,4) = 0;
    }
    param_2[1] = (int)param_1;
    if (*(undefined4 **)this != nullptr) {
      **(undefined4 **)this = 0;
    }
    param_1[1] = 0;
    STField<int>(this,8) = STField<int>(this,8) - iVar3;
    param_2[2] = param_2[2] + iVar3;
  }
  return 1;
}

// 0074E2C1 FUN_0074e2c1
#line 1 "decomp/ST.exe/functions/0074E2C1/decomp.c"
void __fastcall st::fn_0074E2C1(int param_1)

{
  HoloTy *pHVar1;
  HoloTy *pHVar2;

  pHVar2 = *(HoloTy **)(param_1 + 8);
  while (pHVar2 != nullptr) {
    pHVar1 = *(HoloTy **)&pHVar2->field_0x4;
    st::fn_0072E2B0(pHVar2);
    pHVar2 = pHVar1;
  }
  return;
}

// 0074E2D9 FUN_0074e2d9
#line 1 "decomp/ST.exe/functions/0074E2D9/decomp.c"
void __thiscall st::fn_0074E2D9(void *this,undefined4 *param_1)

{
  if (STField<int>(this,4) < *(int *)this) {
    param_1[1] = STField<undefined4>(this,8);
    STField<int>(this,4) = STField<int>(this,4) + 1;
    STField<undefined4 *>(this,8) = param_1;
  }
  else {
    st::fn_0072E2B0((HoloTy *)param_1);
  }
  return;
}

// 0074E2FF FUN_0074e2ff
#line 1 "decomp/ST.exe/functions/0074E2FF/decomp.c"
void __fastcall st::fn_0074E2FF(AnonShape_0074E2FF_47CF731F *param_1)

{
  undefined4 uVar1;

  if (param_1->field_0008 != 0) {
    uVar1 = *(undefined4 *)(param_1->field_0008 + 4);
    param_1->field_0004 = param_1->field_0004 + -1;
    param_1->field_0008 = uVar1;
  }
  return;
}

// 0074E310 FUN_0074e310
#line 1 "decomp/ST.exe/functions/0074E310/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_0074E310(int *param_1)

{
  int *piVar1;

  piVar1 = (int *)*param_1;
  if (piVar1 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}

// 0074E31D FUN_0074e31d
#line 1 "decomp/ST.exe/functions/0074E31D/decomp.c"
undefined4 st::fn_0074E31D(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    *param_2 = 1;
    uVar1 = 0;
  }
  return uVar1;
}

// 0074E337 FUN_0074e337
#line 1 "decomp/ST.exe/functions/0074E337/decomp.c"
uint st::fn_0074E337(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,int *param_5)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;

  if (param_5 == nullptr) {
    return 0x80004003;
  }
  *param_5 = 0;
  if (param_3 != nullptr) {
    return 0x8002802b;
  }
  if (*param_1 == 0) {
    hModule = (HMODULE)st::fn_0074B79E();
    if ((hModule == (HMODULE)0x0) ||
       (pFVar1 = st::external_00000064(hModule,"LoadRegTypeLib"), pFVar1 == (FARPROC)0x0)) {
LAB_0074e3ab:
      DVar3 = st::external_00000028();
      return -(uint)(DVar3 != 0) & (DVar3 & 0xffff | 0x80070000);
    }
    iVar2 = (*pFVar1)(&DAT_007a1db8,1,0,param_4,&param_3);
    if (iVar2 < 0) {
      pFVar1 = st::external_00000064(hModule,"LoadTypeLib");
      if (pFVar1 == (FARPROC)0x0) goto LAB_0074e3ab;
      uVar4 = (*pFVar1)(L"control.tlb",&param_3);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar4 = (**(code **)(*param_3 + 0x18))(param_3,param_2,param_1);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_3 + 8))(param_3);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
  }
  *param_5 = *param_1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)*param_1 + 4))((int *)*param_1);
  return 0;
}

// 0074E40E FUN_0074e40e
#line 1 "decomp/ST.exe/functions/0074E40E/decomp.c"
uint st::fn_0074E40E(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5
                 ,undefined4 param_6)

{
  uint uVar1;

  uVar1 = st::fn_0074E337(param_1,param_2,nullptr,param_5,(int *)&param_5);
  if (-1 < (int)uVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar1 = (**(code **)(*param_5 + 0x28))(param_5,param_3,param_4,param_6);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_5 + 8))(param_5);
  }
  return uVar1;
}

// 0074E450 FUN_0074e450
#line 1 "decomp/ST.exe/functions/0074E450/decomp.c"
int __thiscall st::fn_0074E450(void *this,undefined4 param_1,int param_2)

{
  st::fn_0074B7B8((void *)((int)this + 4),param_1,param_2);
  STField<undefined4>(this,0x10) = 0;
  return (int)this;
}

// 0074E46D FUN_0074e46d
#line 1 "decomp/ST.exe/functions/0074E46D/decomp.c"
void st::fn_0074E46D(int *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;

  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = param_2;
  pcVar3 = &DAT_007a1220;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    st::fn_0074B8A6(param_1 + -1,param_3);
  }
  else {
    st::fn_0074B810(param_1,param_2,param_3);
  }
  return;
}

// 0074E4DA FUN_0074e4da
#line 1 "decomp/ST.exe/functions/0074E4DA/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0074E4DA returns return of FUN_0074e40e @ 0074E4FB */

uint st::fn_0074E4DA(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                 undefined4 param_6)

{
  uint uVar1;

  uVar1 = st::fn_0074E40E((int *)(param_1 + 0x10),&DAT_007a1220,param_3,param_4,param_5,param_6);
  return uVar1;
}

// 0074E4FE FUN_0074e4fe
#line 1 "decomp/ST.exe/functions/0074E4FE/decomp.c"
int st::fn_0074E4FE(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  bool bVar4;

  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = "";
  piVar3 = param_3;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == (char)*piVar3;
    pcVar2 = pcVar2 + 1;
    piVar3 = (int *)((int)piVar3 + 1);
  } while (bVar4);
  if (bVar4) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,0,param_4,&param_3);
    if (-1 < iVar1) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*param_3 + 0x2c))
                        (param_3,param_1,param_2,param_5,param_6,param_7,param_8,param_9);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_3 + 8))(param_3);
    }
  }
  else {
    iVar1 = -0x7ffdffff;
  }
  return iVar1;
}

// 0074E560 FUN_0074e560
#line 1 "decomp/ST.exe/functions/0074E560/decomp.c"
int __thiscall st::fn_0074E560(void *this,undefined4 param_1,int param_2)

{
  st::fn_0074B7B8((void *)((int)this + 4),param_1,param_2);
  STField<undefined4>(this,0x10) = 0;
  return (int)this;
}

// 0074E57D FUN_0074e57d
#line 1 "decomp/ST.exe/functions/0074E57D/decomp.c"
void st::fn_0074E57D(int *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;

  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = param_2;
  pcVar3 = &DAT_007a10d8;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    iVar1 = 0x10;
    bVar4 = true;
    pcVar2 = param_2;
    pcVar3 = &DAT_007a1dc8;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
      st::fn_0074B810(param_1,param_2,param_3);
      return;
    }
  }
  st::fn_0074B8A6(param_1 + -1,param_3);
  return;
}

// 0074E5FE FUN_0074e5fe
#line 1 "decomp/ST.exe/functions/0074E5FE/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0074E5FE returns return of FUN_0074e40e @ 0074E61F */

uint st::fn_0074E5FE(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                 undefined4 param_6)

{
  uint uVar1;

  uVar1 = st::fn_0074E40E((int *)(param_1 + 0x10),&DAT_007a10d8,param_3,param_4,param_5,param_6);
  return uVar1;
}

// 0074E622 FUN_0074e622
#line 1 "decomp/ST.exe/functions/0074E622/decomp.c"
int st::fn_0074E622(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  bool bVar4;

  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = "";
  piVar3 = param_3;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == (char)*piVar3;
    pcVar2 = pcVar2 + 1;
    piVar3 = (int *)((int)piVar3 + 1);
  } while (bVar4);
  if (bVar4) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,0,param_4,&param_3);
    if (-1 < iVar1) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*param_3 + 0x2c))
                        (param_3,param_1,param_2,param_5,param_6,param_7,param_8,param_9);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_3 + 8))(param_3);
    }
  }
  else {
    iVar1 = -0x7ffdffff;
  }
  return iVar1;
}

// 0074E684 FUN_0074e684
#line 1 "decomp/ST.exe/functions/0074E684/decomp.c"
int __thiscall st::fn_0074E684(void *this,undefined4 param_1,int param_2)

{
  st::fn_0074B7B8((void *)((int)this + 4),param_1,param_2);
  STField<undefined4>(this,0x10) = 0;
  return (int)this;
}

// 0074E6A1 FUN_0074e6a1
#line 1 "decomp/ST.exe/functions/0074E6A1/decomp.c"
int __thiscall st::fn_0074E6A1(void *this,undefined4 param_1,int param_2)

{
  st::fn_0074B7B8((void *)((int)this + 4),param_1,param_2);
  STField<undefined4>(this,0x10) = 0;
  return (int)this;
}

// 0074E6BE FUN_0074e6be
#line 1 "decomp/ST.exe/functions/0074E6BE/decomp.c"
void st::fn_0074E6BE(int *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;

  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = param_2;
  pcVar3 = &DAT_007a1210;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    st::fn_0074B8A6(param_1 + -1,param_3);
  }
  else {
    st::fn_0074B810(param_1,param_2,param_3);
  }
  return;
}

// 0074E6F6 FUN_0074e6f6
#line 1 "decomp/ST.exe/functions/0074E6F6/decomp.c"
/* [STVTableApplier] Virtual slot 007A1C18+0xC

   [STVTableApplier] Virtual slot 007A1CC8+0xC */

void st::fn_0074E6F6(int param_1,undefined4 *param_2)

{
  st::fn_0074E31D(param_1 + 0x10,param_2);
  return;
}

// 0074E70A FUN_0074e70a
#line 1 "decomp/ST.exe/functions/0074E70A/decomp.c"
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STVTableApplier] Virtual slot 007A1C18+0x10

   [STVTableApplier] Virtual slot 007A1CC8+0x10

   [STPrototypeApplier] Propagated return.
   Evidence: 0074E70A returns return of FUN_0074e337 @ 0074E728
   [STAbiConsistencyApplier] unknown_convention_return_revert target=return:-1: return=/undefined1
   Evidence: automation-owned propagated return is deferred until the wrapper calling convention and
   live-in parameter storage are recovered */

void st::fn_0074E70A(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_stack_00000004;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *in_stack_00000008;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_stack_0000000c;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *in_stack_00000010;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  st::fn_0074E337((int *)(in_stack_00000004 + 0x10),&DAT_007a1210,in_stack_00000008,in_stack_0000000c,
               in_stack_00000010);
  return;
}

// 0074E72B FUN_0074e72b
#line 1 "decomp/ST.exe/functions/0074E72B/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0074E72B returns return of FUN_0074e40e @ 0074E74C */

uint st::fn_0074E72B(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                 undefined4 param_6)

{
  uint uVar1;

  uVar1 = st::fn_0074E40E((int *)(param_1 + 0x10),&DAT_007a1210,param_3,param_4,param_5,param_6);
  return uVar1;
}

// 0074E74F FUN_0074e74f
#line 1 "decomp/ST.exe/functions/0074E74F/decomp.c"
int st::fn_0074E74F(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  bool bVar4;

  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = "";
  piVar3 = param_3;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == (char)*piVar3;
    pcVar2 = pcVar2 + 1;
    piVar3 = (int *)((int)piVar3 + 1);
  } while (bVar4);
  if (bVar4) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,0,param_4,&param_3);
    if (-1 < iVar1) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*param_3 + 0x2c))
                        (param_3,param_1,param_2,param_5,param_6,param_7,param_8,param_9);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_3 + 8))(param_3);
    }
  }
  else {
    iVar1 = -0x7ffdffff;
  }
  return iVar1;
}

// 0074E7B1 FUN_0074e7b1
#line 1 "decomp/ST.exe/functions/0074E7B1/decomp.c"
undefined4 * __thiscall
st::fn_0074E7B1(void *this,undefined4 param_1,int param_2,undefined4 *param_3,int param_4)

{
  st::fn_0074E684((undefined4 *)((int)this + 4),param_1,param_2);
  *(VTable_007A1C60 **)this = &VTable_007A1C60;
  STField<int>(this,0x18) = param_4;
  STField<undefined4>(this,4) = &VTable_007A1C18;
  STField<VTable_007A1C08 *>(this,8) = &VTable_007A1C08;
  if (param_4 == 0) {
    *param_3 = 0x80004003;
  }
  return this;
}

// 0074E7F6 FUN_0074e7f6
#line 1 "decomp/ST.exe/functions/0074E7F6/decomp.c"
/* [STVTableApplier] Virtual slot 007A1C08+0xC */

HoloTy * __thiscall st::fn_0074E7F6(int param_1,byte param_2)

{
  HoloTy *pHVar1;

  pHVar1 = (HoloTy *)(param_1 + -8);
  st::fn_0074E823((-(uint)(pHVar1 != nullptr) & param_1 - 4U) + 4);
  if ((param_2 & 1) != 0) {
    st::fn_0072E2B0(pHVar1);
  }
  return pHVar1;
}

// 0074E823 FUN_0074e823
#line 1 "decomp/ST.exe/functions/0074E823/decomp.c"
void __fastcall st::fn_0074E823(int param_1)

{
  st::fn_0074E310((int *)(param_1 + 0xc));
  st::fn_0074B777();
  return;
}

// 0074E847 FUN_0074e847
#line 1 "decomp/ST.exe/functions/0074E847/decomp.c"
undefined4 st::fn_0074E847(int *param_1,char *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;

  if (param_3 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    *param_3 = 0;
    iVar2 = 0x10;
    bVar5 = true;
    pcVar3 = param_2;
    pcVar4 = &DAT_007a1200;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      uVar1 = st::fn_0074B8A6(param_1 + -2,param_3);
    }
    else {
      uVar1 = st::fn_0074E6BE(param_1,param_2,param_3);
    }
  }
  return uVar1;
}

// 0074E88E FUN_0074e88e
#line 1 "decomp/ST.exe/functions/0074E88E/decomp.c"
undefined4 __thiscall st::fn_0074E88E(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  void *local_8;

  piVar1 = param_1;
  *param_1 = 0;
  local_8 = this;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (**(code **)(*STField<int *>(this,0x18) + 0x18))(STField<int *>(this,0x18),&param_1);
  if (-1 < iVar2) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)*param_1)(param_1,&DAT_007a1210,&local_8);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
    if (-1 < iVar2) {
      *piVar1 = (int)local_8;
      return 0;
    }
  }
  return 0x80004001;
}

// 0074E8DF FUN_0074e8df
#line 1 "decomp/ST.exe/functions/0074E8DF/decomp.c"
undefined4 __thiscall st::fn_0074E8DF(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  void *local_8;

  piVar1 = param_1;
  *param_1 = 0;
  local_8 = this;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (**(code **)(*STField<int *>(this,0x18) + 0x18))(STField<int *>(this,0x18),&param_1);
  if (-1 < iVar2) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)*param_1)(param_1,&DAT_007a1200,&local_8);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
    if (-1 < iVar2) {
      *piVar1 = (int)local_8;
      return 0;
    }
  }
  return 0x80004001;
}

// 0074E930 FUN_0074e930
#line 1 "decomp/ST.exe/functions/0074E930/decomp.c"
int st::fn_0074E930(int *param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = st::fn_0074E8DF(param_1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

// 0074E962 FUN_0074e962
#line 1 "decomp/ST.exe/functions/0074E962/decomp.c"
int st::fn_0074E962(int *param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = st::fn_0074E8DF(param_1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

// 0074E994 FUN_0074e994
#line 1 "decomp/ST.exe/functions/0074E994/decomp.c"
int st::fn_0074E994(int *param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = st::fn_0074E8DF(param_1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x14))(param_1,param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

// 0074E9C6 FUN_0074e9c6
#line 1 "decomp/ST.exe/functions/0074E9C6/decomp.c"
int st::fn_0074E9C6(int *param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = st::fn_0074E8DF(param_1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

// 0074E9F8 FUN_0074e9f8
#line 1 "decomp/ST.exe/functions/0074E9F8/decomp.c"
int st::fn_0074E9F8(int *param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = st::fn_0074E8DF(param_1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x24))(param_1,param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

// 0074EA2A FUN_0074ea2a
#line 1 "decomp/ST.exe/functions/0074EA2A/decomp.c"
int st::fn_0074EA2A(int *param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = st::fn_0074E8DF(param_1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x1c))(param_1,param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

// 0074EA5C FUN_0074ea5c
#line 1 "decomp/ST.exe/functions/0074EA5C/decomp.c"
int st::fn_0074EA5C(int *param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = st::fn_0074E8DF(param_1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

// 0074EA8E FUN_0074ea8e
#line 1 "decomp/ST.exe/functions/0074EA8E/decomp.c"
int st::fn_0074EA8E(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;

  iVar1 = st::fn_0074E8DF(param_1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x34))(param_1,param_2,param_3,param_4,param_5,param_6);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

// 0074EACC FUN_0074eacc
#line 1 "decomp/ST.exe/functions/0074EACC/decomp.c"
int st::fn_0074EACC(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;

  iVar1 = st::fn_0074E8DF(param_1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,param_4,param_5);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

// 0074EB07 FUN_0074eb07
#line 1 "decomp/ST.exe/functions/0074EB07/decomp.c"
int st::fn_0074EB07(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;

  iVar1 = st::fn_0074E8DF(param_1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x3c))(param_1,param_2,param_3);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

// 0074EB3C FUN_0074eb3c
#line 1 "decomp/ST.exe/functions/0074EB3C/decomp.c"
int __thiscall st::fn_0074EB3C(void *this,undefined *param_1,undefined4 param_2)

{
  int iVar1;
  int *local_8;

  local_8 = this;
  iVar1 = st::fn_0074E8DF(this,(int *)&local_8);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (*(code *)param_1)(local_8,param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*local_8 + 8))(local_8);
  }
  return iVar1;
}

// 0074EB6B FUN_0074eb6b
#line 1 "decomp/ST.exe/functions/0074EB6B/decomp.c"
int st::fn_0074EB6B(int *param_1,undefined4 param_2)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_retaddr;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*param_1 + 0x50))(param_2,0);
  if (iVar1 < 0) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar1 = st::fn_0074EB3C(param_1,&LAB_0075055c,unaff_retaddr);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

// 0074EB99 FUN_0074eb99
#line 1 "decomp/ST.exe/functions/0074EB99/decomp.c"
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STVTableApplier] Virtual slot 007A1C60+0x2C

   [STVTableApplier] Virtual slot 007A1D10+0x2C

   [STPrototypeApplier] Propagated return.
   Evidence: 0074EB99 returns return of FUN_0074eb3c @ 0074EBAB
   [STAbiConsistencyApplier] unknown_convention_return_revert target=return:-1: return=/undefined1
   Evidence: automation-owned propagated return is deferred until the wrapper calling convention and
   live-in parameter storage are recovered */

void st::fn_0074EB99(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *in_stack_00000004;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_stack_00000008;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  st::fn_0074EB3C(in_stack_00000004,&LAB_00750553,in_stack_00000008);
  return;
}

// 0074EBAE FUN_0074ebae
#line 1 "decomp/ST.exe/functions/0074EBAE/decomp.c"
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STVTableApplier] Virtual slot 007A1C60+0x28

   [STVTableApplier] Virtual slot 007A1D10+0x28

   [STPrototypeApplier] Propagated return.
   Evidence: 0074EBAE returns return of FUN_0074eb3c @ 0074EBC0
   [STAbiConsistencyApplier] unknown_convention_return_revert target=return:-1: return=/undefined1
   Evidence: automation-owned propagated return is deferred until the wrapper calling convention and
   live-in parameter storage are recovered */

void st::fn_0074EBAE(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *in_stack_00000004;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_stack_00000008;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  st::fn_0074EB3C(in_stack_00000004,&LAB_00750541,in_stack_00000008);
  return;
}

// 0074EBC3 FUN_0074ebc3
#line 1 "decomp/ST.exe/functions/0074EBC3/decomp.c"
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STVTableApplier] Virtual slot 007A1C60+0x4C

   [STVTableApplier] Virtual slot 007A1D10+0x4C

   [STPrototypeApplier] Propagated return.
   Evidence: 0074EBC3 returns return of FUN_0074eb3c @ 0074EBD5
   [STAbiConsistencyApplier] unknown_convention_return_revert target=return:-1: return=/undefined1
   Evidence: automation-owned propagated return is deferred until the wrapper calling convention and
   live-in parameter storage are recovered */

void st::fn_0074EBC3(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *in_stack_00000004;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_stack_00000008;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  st::fn_0074EB3C(in_stack_00000004,&LAB_0075054a,in_stack_00000008);
  return;
}

// 0074EBD8 FUN_0074ebd8
#line 1 "decomp/ST.exe/functions/0074EBD8/decomp.c"
int st::fn_0074EBD8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;

  iVar1 = st::fn_0074E8DF(param_1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

// 0074EC0D FUN_0074ec0d
#line 1 "decomp/ST.exe/functions/0074EC0D/decomp.c"
int st::fn_0074EC0D(int *param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = st::fn_0074E8DF(param_1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1,param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

// 0074EC3F FUN_0074ec3f
#line 1 "decomp/ST.exe/functions/0074EC3F/decomp.c"
int st::fn_0074EC3F(int *param_1,double param_2)

{
  int iVar1;

  if (param_2 == 0.0) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    iVar1 = st::fn_0074E8DF(param_1,(int *)&param_1);
    if (-1 < iVar1) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*param_1 + 0x44))(param_1,param_2);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return iVar1;
}

// 0074EC87 FUN_0074ec87
#line 1 "decomp/ST.exe/functions/0074EC87/decomp.c"
int st::fn_0074EC87(int *param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = st::fn_0074E88E(param_1 + -1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x1c))(param_1,param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

// 0074ECBC FUN_0074ecbc
#line 1 "decomp/ST.exe/functions/0074ECBC/decomp.c"
int st::fn_0074ECBC(int *param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = st::fn_0074E88E(param_1 + -1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x24))(param_1,param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

// 0074ECF1 FUN_0074ecf1
#line 1 "decomp/ST.exe/functions/0074ECF1/decomp.c"
/* [STAbiConsistencyApplier] x87_double_parameter_slots target=function:-1: prototype=int __stdcall
   FUN_0074ecf1(int * param_1, double param_2) Evidence: x87 double-width accesses or exact split
   stores into an independently typed double field prove physical EBP slot boundaries;
   merged_slots={1=1}; sites=0074ED0B FLD double ptr [EBP + 0xc]
   [STAbiConsistencyApplier] x87_stack_storage_migration target=function:-1: prototype=int __stdcall
   FUN_0074ecf1(int * param_1, double param_2) Evidence: retire script-owned dynamic x87 storage;
   observed_ebp_offsets=[12]; custom_storage=[Stack[0x4]:4, Stack[0x8]:8] */

int st::fn_0074ECF1(int *param_1,double param_2)

{
  int iVar1;

  iVar1 = st::fn_0074E88E(param_1 + -1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

// 0074ED2B FUN_0074ed2b
#line 1 "decomp/ST.exe/functions/0074ED2B/decomp.c"
int st::fn_0074ED2B(int *param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = st::fn_0074E88E(param_1 + -1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

// 0074ED60 FUN_0074ed60
#line 1 "decomp/ST.exe/functions/0074ED60/decomp.c"
/* [STAbiConsistencyApplier] x87_double_parameter_slots target=function:-1: prototype=int __stdcall
   FUN_0074ed60(int * param_1, double param_2) Evidence: x87 double-width accesses or exact split
   stores into an independently typed double field prove physical EBP slot boundaries;
   merged_slots={1=1}; sites=0074ED7A FLD double ptr [EBP + 0xc]
   [STAbiConsistencyApplier] x87_stack_storage_migration target=function:-1: prototype=int __stdcall
   FUN_0074ed60(int * param_1, double param_2) Evidence: retire script-owned dynamic x87 storage;
   observed_ebp_offsets=[12]; custom_storage=[Stack[0x4]:4, Stack[0x8]:8] */

int st::fn_0074ED60(int *param_1,double param_2)

{
  int iVar1;

  iVar1 = st::fn_0074E88E(param_1 + -1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x2c))(param_1,param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

// 0074ED9A FUN_0074ed9a
#line 1 "decomp/ST.exe/functions/0074ED9A/decomp.c"
int st::fn_0074ED9A(int *param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = st::fn_0074E88E(param_1 + -1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

// 0074EDCF FUN_0074edcf
#line 1 "decomp/ST.exe/functions/0074EDCF/decomp.c"
/* [STAbiConsistencyApplier] x87_double_parameter_slots target=function:-1: prototype=int __stdcall
   FUN_0074edcf(int * param_1, double param_2) Evidence: x87 double-width accesses or exact split
   stores into an independently typed double field prove physical EBP slot boundaries;
   merged_slots={1=1}; sites=0074EDE9 FLD double ptr [EBP + 0xc]
   [STAbiConsistencyApplier] x87_stack_storage_migration target=function:-1: prototype=int __stdcall
   FUN_0074edcf(int * param_1, double param_2) Evidence: retire script-owned dynamic x87 storage;
   observed_ebp_offsets=[12]; custom_storage=[Stack[0x4]:4, Stack[0x8]:8] */

int st::fn_0074EDCF(int *param_1,double param_2)

{
  int iVar1;

  iVar1 = st::fn_0074E88E(param_1 + -1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x34))(param_1,param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

// 0074EE09 FUN_0074ee09
#line 1 "decomp/ST.exe/functions/0074EE09/decomp.c"
int st::fn_0074EE09(int *param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = st::fn_0074E88E(param_1 + -1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x3c))(param_1,param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

// 0074EE3E FUN_0074ee3e
#line 1 "decomp/ST.exe/functions/0074EE3E/decomp.c"
int st::fn_0074EE3E(int *param_1,double param_2)

{
  int iVar1;

  if (param_2 == 0.0) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    iVar1 = st::fn_0074E88E(param_1 + -1,(int *)&param_1);
    if (-1 < iVar1) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return iVar1;
}

// 0074EE89 FUN_0074ee89
#line 1 "decomp/ST.exe/functions/0074EE89/decomp.c"
int st::fn_0074EE89(int *param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = st::fn_0074E88E(param_1 + -1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

// 0074EEBE FUN_0074eebe
#line 1 "decomp/ST.exe/functions/0074EEBE/decomp.c"
int st::fn_0074EEBE(int *param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = st::fn_0074E88E(param_1 + -1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x44))(param_1,param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

// 0074EEF3 FUN_0074eef3
#line 1 "decomp/ST.exe/functions/0074EEF3/decomp.c"
undefined4 * __thiscall
st::fn_0074EEF3(void *this,undefined4 param_1,int param_2,undefined4 *param_3,int param_4)

{
  st::fn_0074E7B1(this,param_1,param_2,param_3,param_4);
  st::external_00000017((LPCRITICAL_SECTION)((int)this + 0x1c));
  STField<undefined4>(this,0x48) = 1;
  STField<undefined4>(this,0x38) = 0;
  STField<undefined4>(this,0x40) = 0;
  STField<undefined4>(this,0x3c) = 0;
  STField<undefined4>(this,0x44) = 0;
  *(VTable_007A1D10 **)this = &VTable_007A1D10;
  STField<VTable_007A1CC8 *>(this,4) = &VTable_007A1CC8;
  STField<VTable_007A1CB8 *>(this,8) = &VTable_007A1CB8;
  return this;
}

// 0074EF44 FUN_0074ef44
#line 1 "decomp/ST.exe/functions/0074EF44/decomp.c"
int __thiscall st::fn_0074EF44(void *this,byte param_1)

{
  st::fn_0074EF64((int)this);
  if ((param_1 & 1) != 0) {
    st::fn_0072E2B0((HoloTy *)((int)this + -8));
  }
  return (int)this + -8;
}

// 0074EF64 FUN_0074ef64
#line 1 "decomp/ST.exe/functions/0074EF64/decomp.c"
void __fastcall st::fn_0074EF64(int param_1)

{
  st::external_00000016((LPCRITICAL_SECTION)(param_1 + 0x14));
  st::fn_0074E823((-(uint)(param_1 != 8) & param_1 - 4U) + 4);
  return;
}

// 0074EF87 FUN_0074ef87
#line 1 "decomp/ST.exe/functions/0074EF87/decomp.c"
int __thiscall st::fn_0074EF87(void *this,int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x1c);
  st::external_00000018(lpCriticalSection);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1,&local_c,&local_14);
  if (iVar1 < 0) {
    st::external_00000019(lpCriticalSection);
  }
  else {
    STField<undefined4>(this,0x48) = 0;
    STField<undefined4>(this,0x38) = local_c;
    STField<undefined4>(this,0x3c) = local_8;
    STField<undefined4>(this,0x40) = local_14;
    STField<undefined4>(this,0x44) = local_10;
    st::external_00000019(lpCriticalSection);
    iVar1 = 0;
  }
  return iVar1;
}

// 0074EFEA FUN_0074efea
#line 1 "decomp/ST.exe/functions/0074EFEA/decomp.c"
undefined4 __thiscall
st::fn_0074EFEA(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  st::external_00000018((LPCRITICAL_SECTION)((int)this + 0x1c));
  STField<undefined4>(this,0x48) = 0;
  STField<undefined4>(this,0x38) = param_1;
  STField<undefined4>(this,0x3c) = param_2;
  STField<undefined4>(this,0x40) = param_3;
  STField<undefined4>(this,0x44) = param_4;
  st::external_00000019((LPCRITICAL_SECTION)((int)this + 0x1c));
  return 0;
}

// 0074F026 FUN_0074f026
#line 1 "decomp/ST.exe/functions/0074F026/decomp.c"
/* [STVTableApplier] Virtual slot 007A1C60+0x0

   [STVTableApplier] Virtual slot 007A1D10+0x0 */

void st::fn_0074F026(int param_1,undefined4 param_2,undefined4 param_3)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)**(undefined4 **)(param_1 + 0xc))(*(undefined4 **)(param_1 + 0xc),param_2,param_3);
  return;
}

// 0074F03D FUN_0074f03d
#line 1 "decomp/ST.exe/functions/0074F03D/decomp.c"
/* [STVTableApplier] Virtual slot 007A1C60+0x4

   [STVTableApplier] Virtual slot 007A1D10+0x4 */

void st::fn_0074F03D(int param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(**(int **)(param_1 + 0xc) + 4))(*(int **)(param_1 + 0xc));
  return;
}

// 0074F04D FUN_0074f04d
#line 1 "decomp/ST.exe/functions/0074F04D/decomp.c"
int __thiscall st::fn_0074F04D(void *this,undefined4 param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;

  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x1c);
  st::external_00000018(lpCriticalSection);
  if (STField<int>(this,0x48) == 1) {
    st::external_00000019(lpCriticalSection);
    iVar1 = -0x7fffbffb;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*(int *)this + 0x34))
                      (this,param_1,0,STField<undefined4>(this,0x38),
                       STField<undefined4>(this,0x3c),&DAT_007a1dd8);
    if ((param_2 != 0) && (-1 < iVar1)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*(int *)this + 0x34))
                        (this,param_2,0,STField<undefined4>(this,0x40),
                         STField<undefined4>(this,0x44),&DAT_007a1dd8);
    }
    st::external_00000019(lpCriticalSection);
  }
  return iVar1;
}

// 0074F0C0 FUN_0074f0c0
#line 1 "decomp/ST.exe/functions/0074F0C0/decomp.c"
/* [STVTableApplier] Virtual slot 007A1C60+0x8

   [STVTableApplier] Virtual slot 007A1D10+0x8 */

void st::fn_0074F0C0(int param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc));
  return;
}

// 0074F0D0 FUN_0074f0d0
#line 1 "decomp/ST.exe/functions/0074F0D0/decomp.c"
/* [STVTableApplier] Virtual slot 007A1C60+0x50 */

undefined4 st::fn_0074F0D0(void)

{
  return 0x80004005;
}

// 0074F0D8 FUN_0074f0d8
#line 1 "decomp/ST.exe/functions/0074F0D8/decomp.c"
undefined4 __fastcall st::fn_0074F0D8(AnonShape_0074F0D8_3A9DA5F1 *param_1)

{
  st::external_00000018((LPCRITICAL_SECTION)&param_1->field_0x1c);
  param_1->field_0038 = 0;
  param_1->field_0040 = 0;
  param_1->field_003C = 0;
  param_1->field_0044 = 0;
  param_1->field_0048 = 1;
  st::external_00000019((LPCRITICAL_SECTION)&param_1->field_0x1c);
  return 0;
}

// 0074F107 FUN_0074f107
#line 1 "decomp/ST.exe/functions/0074F107/decomp.c"
int __fastcall st::fn_0074F107(int *param_1)

{
  int iVar1;
  int *local_c;
  int *local_8;

  if (param_1[0x12] == 1) {
    iVar1 = -0x7fffbffb;
  }
  else {
    local_c = param_1;
    local_8 = param_1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x2c))(param_1,&local_c);
    if (-1 < iVar1) {
      st::external_00000018((LPCRITICAL_SECTION)(param_1 + 7));
      param_1[0x10] = (int)local_c;
      param_1[0xe] = (int)local_c;
      param_1[0x11] = (int)local_8;
      param_1[0xf] = (int)local_8;
      st::external_00000019((LPCRITICAL_SECTION)(param_1 + 7));
    }
  }
  return iVar1;
}

// 0074F158 FUN_0074f158
#line 1 "decomp/ST.exe/functions/0074F158/decomp.c"
int __thiscall
st::fn_0074F158(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  st::fn_0074B7B8((void *)((int)this + 4),param_1,param_2);
  STField<undefined4>(this,0x10) = 0;
  STField<undefined4>(this,0x14) = 0;
  STField<undefined4>(this,0x18) = 0;
  STField<undefined4>(this,0x1c) = 0;
  STField<undefined4>(this,0x34) = param_4;
  STField<undefined4>(this,0x20) = 0xffffffff;
  STField<undefined4>(this,0x24) = 0x3fffffff;
  STField<undefined4>(this,0x10) = STField<undefined4>(this,0x20);
  STField<undefined4>(this,0x14) = STField<undefined4>(this,0x24);
  STField<undefined4>(this,0x30) = 0x37;
  STField<undefined8>(this,0x28) = 0x3ff0000000000000;
  return (int)this;
}

// 0074F1A9 FUN_0074f1a9
#line 1 "decomp/ST.exe/functions/0074F1A9/decomp.c"
undefined4 st::fn_0074F1A9(int *param_1,char *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;

  iVar2 = 0x10;
  bVar5 = true;
  pcVar3 = param_2;
  pcVar4 = &DAT_007a1200;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    if (param_3 == nullptr) {
      uVar1 = 0x80004003;
    }
    else {
      uVar1 = st::fn_0074B8A6(param_1 + -1,param_3);
    }
  }
  else {
    uVar1 = st::fn_0074B810(param_1,param_2,param_3);
  }
  return uVar1;
}

// 0074F1F0 FUN_0074f1f0
#line 1 "decomp/ST.exe/functions/0074F1F0/decomp.c"
uint st::fn_0074F1F0(undefined4 param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    iVar2 = 0x10;
    bVar4 = true;
    pcVar3 = &DAT_007a1dd8;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar4 = *param_2 == *pcVar3;
      param_2 = param_2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    uVar1 = (uint)!bVar4;
  }
  return uVar1;
}

// 0074F368 FUN_0074f368
#line 1 "decomp/ST.exe/functions/0074F368/decomp.c"
undefined4
st::fn_0074F368(undefined4 param_1,undefined4 *param_2,char *param_3,undefined4 param_4,
            undefined4 param_5,char *param_6)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;

  if (param_2 == nullptr) {
    return 0x80004003;
  }
  if (param_3 == nullptr) {
LAB_0074f393:
    if (param_6 != nullptr) {
      iVar2 = 0x10;
      bVar4 = true;
      pcVar3 = &DAT_007a1dd8;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar4 = *param_6 == *pcVar3;
        param_6 = param_6 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if (!bVar4) goto LAB_0074f3a5;
    }
    *param_2 = param_4;
    param_2[1] = param_5;
    uVar1 = 0;
  }
  else {
    iVar2 = 0x10;
    bVar4 = true;
    pcVar3 = &DAT_007a1dd8;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar4 = *param_3 == *pcVar3;
      param_3 = param_3 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (bVar4) goto LAB_0074f393;
LAB_0074f3a5:
    uVar1 = 0x80070057;
  }
  return uVar1;
}

// 0074F3C0 FUN_0074f3c0
#line 1 "decomp/ST.exe/functions/0074F3C0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0074F3C0 -> EXTERNAL:00000019 @ 0074F48C */

undefined4
st::fn_0074F3C0(int *param_1,uint *param_2,uint param_3,uint *param_4,
            LPCRITICAL_SECTION lpCriticalSection)

{
  uint *puVar1;
  LPCRITICAL_SECTION lpCriticalSection_00;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  LPCRITICAL_SECTION p_Var7;

  p_Var7 = (LPCRITICAL_SECTION)((uint)lpCriticalSection & 3);
  uVar6 = param_3 & 3;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    if (param_4 == nullptr) {
      return 0x80004003;
    }
    if (p_Var7 != lpCriticalSection) {
      return 0x80070057;
    }
  }
  if (param_3 != 0) {
    if (param_2 == nullptr) {
      return 0x80004003;
    }
    if ((uVar6 != 1) && (uVar6 != 2)) {
      return 0x80070057;
    }
  }
  lpCriticalSection_00 = (LPCRITICAL_SECTION)param_1[0xd];
  st::external_00000018(lpCriticalSection_00);
  if (uVar6 == 1) {
    param_1[6] = *param_2;
    param_1[7] = param_2[1];
  }
  else if (uVar6 == 2) {
    uVar3 = *param_2;
    uVar2 = param_2[1];
    puVar1 = (uint *)(param_1 + 6);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    param_1[7] = param_1[7] + uVar2 + (uint)CARRY4(uVar4,uVar3);
  }
  if (p_Var7 == (LPCRITICAL_SECTION)0x1) {
    param_1[8] = *param_4;
    uVar4 = param_4[1];
  }
  else {
    if (p_Var7 == (LPCRITICAL_SECTION)0x3) {
      uVar4 = *param_4;
      uVar3 = param_4[1];
      param_1[8] = param_1[6] + *param_4;
      param_1[9] = param_1[7] + uVar3 + (uint)CARRY4(param_1[6],uVar4);
      goto cf_common_exit_0074F489;
    }
    if (p_Var7 != (LPCRITICAL_SECTION)0x2) goto cf_common_exit_0074F489;
    uVar4 = param_4[1] + param_1[9] + (uint)CARRY4(*param_4,param_1[8]);
    param_1[8] = *param_4 + param_1[8];
  }
  param_1[9] = uVar4;
cf_common_exit_0074F489:
  st::external_00000019(lpCriticalSection_00);
  uVar5 = 0;
  if (p_Var7 != (LPCRITICAL_SECTION)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar5 = (**(code **)(*param_1 + 0x54))();
  }
  if (uVar6 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar5 = (**(code **)(*param_1 + 0x50))();
  }
  return uVar5;
}

// 0074F59B FUN_0074f59b
#line 1 "decomp/ST.exe/functions/0074F59B/decomp.c"
void * __thiscall
st::fn_0074F59B(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  st::fn_0074E684(this,param_1,param_2);
  STField<undefined4>(this,0x18) = 0;
  STField<undefined4>(this,0x1c) = 0;
  STField<undefined4>(this,0x20) = 0;
  STField<undefined4>(this,0x24) = 0;
  STField<undefined4>(this,0x38) = param_4;
  STField<undefined4>(this,0x28) = 0xffffffff;
  STField<undefined4>(this,0x2c) = 0x7fffffff;
  STField<undefined8>(this,0x30) = 0x3ff0000000000000;
  return this;
}

// 0074F5D8 FUN_0074f5d8
#line 1 "decomp/ST.exe/functions/0074F5D8/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 st::fn_0074F5D8(int param_1,double *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
    st::external_00000018(lpCriticalSection);
    *param_2 = (double)*(longlong *)(param_1 + 0x18) * _DAT_007a1bf8;
    st::external_00000019(lpCriticalSection);
    uVar1 = 0;
  }
  return uVar1;
}

// 0074F75F FUN_0074f75f
#line 1 "decomp/ST.exe/functions/0074F75F/decomp.c"
int __thiscall st::fn_0074F75F(void *this,undefined4 param_1,int param_2)

{
  st::fn_0074B7B8((void *)((int)this + 4),param_1,param_2);
  STField<undefined4>(this,0x10) = 0;
  return (int)this;
}

// 0074F77C FUN_0074f77c
#line 1 "decomp/ST.exe/functions/0074F77C/decomp.c"
void st::fn_0074F77C(int *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;

  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = param_2;
  pcVar3 = &DAT_007a1de8;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    st::fn_0074B8A6(param_1 + -1,param_3);
  }
  else {
    st::fn_0074B810(param_1,param_2,param_3);
  }
  return;
}

// 0074F7E9 FUN_0074f7e9
#line 1 "decomp/ST.exe/functions/0074F7E9/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0074F7E9 returns return of FUN_0074e40e @ 0074F80A */

uint st::fn_0074F7E9(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                 undefined4 param_6)

{
  uint uVar1;

  uVar1 = st::fn_0074E40E((int *)(param_1 + 0x10),&DAT_007a1de8,param_3,param_4,param_5,param_6);
  return uVar1;
}

// 0074F80D FUN_0074f80d
#line 1 "decomp/ST.exe/functions/0074F80D/decomp.c"
int st::fn_0074F80D(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  bool bVar4;

  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = "";
  piVar3 = param_3;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == (char)*piVar3;
    pcVar2 = pcVar2 + 1;
    piVar3 = (int *)((int)piVar3 + 1);
  } while (bVar4);
  if (bVar4) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,0,param_4,&param_3);
    if (-1 < iVar1) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*param_3 + 0x2c))
                        (param_3,param_1,param_2,param_5,param_6,param_7,param_8,param_9);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_3 + 8))(param_3);
    }
  }
  else {
    iVar1 = -0x7ffdffff;
  }
  return iVar1;
}

// 0074F86F FUN_0074f86f
#line 1 "decomp/ST.exe/functions/0074F86F/decomp.c"
int __thiscall st::fn_0074F86F(void *this,undefined4 param_1,int param_2)

{
  st::fn_0074B7B8((void *)((int)this + 4),param_1,param_2);
  STField<undefined4>(this,0x10) = 0;
  return (int)this;
}

// 0074F88C FUN_0074f88c
#line 1 "decomp/ST.exe/functions/0074F88C/decomp.c"
void st::fn_0074F88C(int *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;

  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = param_2;
  pcVar3 = &DAT_007a1df8;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    st::fn_0074B8A6(param_1 + -1,param_3);
  }
  else {
    st::fn_0074B810(param_1,param_2,param_3);
  }
  return;
}

// 0074F8F9 FUN_0074f8f9
#line 1 "decomp/ST.exe/functions/0074F8F9/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0074F8F9 returns return of FUN_0074e40e @ 0074F91A */

uint st::fn_0074F8F9(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                 undefined4 param_6)

{
  uint uVar1;

  uVar1 = st::fn_0074E40E((int *)(param_1 + 0x10),&DAT_007a1df8,param_3,param_4,param_5,param_6);
  return uVar1;
}

// 0074F91D FUN_0074f91d
#line 1 "decomp/ST.exe/functions/0074F91D/decomp.c"
int st::fn_0074F91D(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  bool bVar4;

  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = "";
  piVar3 = param_3;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == (char)*piVar3;
    pcVar2 = pcVar2 + 1;
    piVar3 = (int *)((int)piVar3 + 1);
  } while (bVar4);
  if (bVar4) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,0,param_4,&param_3);
    if (-1 < iVar1) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*param_3 + 0x2c))
                        (param_3,param_1,param_2,param_5,param_6,param_7,param_8,param_9);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_3 + 8))(param_3);
    }
  }
  else {
    iVar1 = -0x7ffdffff;
  }
  return iVar1;
}

// 0074F97F FUN_0074f97f
#line 1 "decomp/ST.exe/functions/0074F97F/decomp.c"
int __thiscall st::fn_0074F97F(void *this,undefined4 param_1,int param_2)

{
  st::fn_0074B7B8((void *)((int)this + 4),param_1,param_2);
  STField<undefined4>(this,0x10) = 0;
  return (int)this;
}

// 0074F99C FUN_0074f99c
#line 1 "decomp/ST.exe/functions/0074F99C/decomp.c"
void st::fn_0074F99C(int *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;

  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = param_2;
  pcVar3 = &DAT_007a1e18;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    iVar1 = 0x10;
    bVar4 = true;
    pcVar2 = param_2;
    pcVar3 = &DAT_007a1e08;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
      st::fn_0074B810(param_1,param_2,param_3);
      return;
    }
  }
  st::fn_0074B8A6(param_1 + -1,param_3);
  return;
}

// 0074FA1D FUN_0074fa1d
#line 1 "decomp/ST.exe/functions/0074FA1D/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0074FA1D returns return of FUN_0074e40e @ 0074FA3E */

uint st::fn_0074FA1D(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                 undefined4 param_6)

{
  uint uVar1;

  uVar1 = st::fn_0074E40E((int *)(param_1 + 0x10),&DAT_007a1e18,param_3,param_4,param_5,param_6);
  return uVar1;
}

// 0074FA41 FUN_0074fa41
#line 1 "decomp/ST.exe/functions/0074FA41/decomp.c"
int st::fn_0074FA41(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  bool bVar4;

  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = "";
  piVar3 = param_3;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == (char)*piVar3;
    pcVar2 = pcVar2 + 1;
    piVar3 = (int *)((int)piVar3 + 1);
  } while (bVar4);
  if (bVar4) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,0,param_4,&param_3);
    if (-1 < iVar1) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*param_3 + 0x2c))
                        (param_3,param_1,param_2,param_5,param_6,param_7,param_8,param_9);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_3 + 8))(param_3);
    }
  }
  else {
    iVar1 = -0x7ffdffff;
  }
  return iVar1;
}

// 0074FAA3 FUN_0074faa3
#line 1 "decomp/ST.exe/functions/0074FAA3/decomp.c"
int * __thiscall st::fn_0074FAA3(void *this,int param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  ushort *puVar5;
  uint uVar6;
  undefined2 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint local_8;

  STField<undefined4>(this,0xc) = 0;
  STField<undefined4>(this,4) = 0;
  STField<int>(this,8) = param_1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
  }
  else {
    uVar4 = st::fn_0072E530(param_1 << 4);
    *(undefined4 *)this = uVar4;
    local_8 = 0;
    if (STField<int>(this,8) != 0) {
      piVar8 = (int *)(param_2 + 8);
      do {
        iVar3 = piVar8[-2];
        puVar7 = (undefined2 *)(*(int *)this + (-8 - param_2) + (int)piVar8);
        *puVar7 = (short)iVar3;
        switch((short)iVar3) {
        case 2:
        case 0xb:
          puVar7[4] = (short)*piVar8;
          break;
        case 5:
        case 7:
          *(undefined8 *)(puVar7 + 4) = *(undefined8 *)piVar8;
          break;
        case 6:
          *(int *)(puVar7 + 4) = *piVar8;
          *(int *)(puVar7 + 6) = piVar8[1];
          break;
        case 8:
          if (*piVar8 == 0) {
            *(undefined4 *)(puVar7 + 4) = 0;
          }
          else {
            uVar1 = *(ushort *)(*piVar8 + -2);
            puVar5 = (ushort *)st::fn_0072E530((uint)uVar1 * 2 + 2);
            *puVar5 = uVar1;
            *(ushort **)(puVar7 + 4) = puVar5 + 1;
            puVar9 = (undefined4 *)*piVar8;
            puVar5 = puVar5 + 1;
            for (uVar6 = (uint)(uVar1 >> 1); uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined4 *)puVar5 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar5 = puVar5 + 2;
            }
            for (uVar6 = (uint)uVar1 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)puVar5 = *(undefined1 *)puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
              puVar5 = (ushort *)((int)puVar5 + 1);
            }
          }
        case 3:
        case 4:
        case 10:
          *(int *)(puVar7 + 4) = *piVar8;
          break;
        case 9:
        case 0xd:
          piVar2 = (int *)*piVar8;
          *(int **)(puVar7 + 4) = piVar2;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*piVar2 + 4))(piVar2);
          break;
        case 0x11:
          *(char *)(puVar7 + 4) = (char)*piVar8;
        }
        local_8 = local_8 + 1;
        piVar8 = piVar8 + 4;
      } while (local_8 < STField<uint>(this,8));
    }
  }
  return this;
}

// 0074FBF6 FUN_0074fbf6
#line 1 "decomp/ST.exe/functions/0074FBF6/decomp.c"
void __fastcall st::fn_0074FBF6(int *param_1)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;

  uVar3 = 0;
  if (param_1[2] != 0) {
    iVar4 = 0;
    do {
      psVar2 = (short *)(*param_1 + iVar4);
      sVar1 = *psVar2;
      if (sVar1 == 8) {
        if (*(int *)(psVar2 + 4) != 0) {
          st::fn_0072E2B0((HoloTy *)(*(int *)(psVar2 + 4) + -2));
        }
      }
      else if ((sVar1 == 9) || (sVar1 == 0xd)) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(**(int **)(psVar2 + 4) + 8))(*(int **)(psVar2 + 4));
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (uVar3 < (uint)param_1[2]);
  }
  st::fn_0072E2B0((HoloTy *)*param_1);
  return;
}

// 0074FC49 FUN_0074fc49
#line 1 "decomp/ST.exe/functions/0074FC49/decomp.c"
/* [STAbiConsistencyApplier] x87_double_parameter_slots target=function:-1: prototype=int *
   __thiscall FUN_0074fc49(void * this, int * param_1, int * param_2, uint * param_3, int param_4,
   double param_5, int param_6, int param_7, short param_8, int param_9, int param_10, int param_11,
   undefined4 param_12, int param_13) Evidence: x87 double-width accesses or exact split stores into
   an independently typed double field prove physical EBP slot boundaries; merged_slots={4=2};
   sites=0074FC96 FLD double ptr [EBP + 0x18] */

int * __thiscall
st::fn_0074FC49(void *this,int *param_1,int *param_2,uint *param_3,int param_4,double param_5,
            int param_6,int param_7,short param_8,int param_9,int param_10,int param_11,
            undefined4 param_12,int param_13)

{
  uint uVar1;
  longlong lVar2;
  int *local_8;

  local_8 = this;
  st::fn_0074B7B8(this,0,(int)param_2);
  STField<int>(this,0x14) = param_4;
  STField<int>(this,0x20) = param_6;
  STField<int>(this,0x24) = param_7;
  STField<short>(this,0x28) = param_8;
  STField<int>(this,0x2c) = param_11;
  STField<int *>(this,0x10) = param_1;
  STField<int>(this,0x30) = param_13;
  st::fn_0074FAA3((void *)((int)this + 0x34),param_9,param_10);
  STField<undefined4>(this,0x48) = 0;
  STField<undefined4>(this,0x4c) = 0x80004004;
  *(VTable_007A1D88 **)this = &VTable_007A1D88;
  STField<VTable_007A1D68 *>(this,0xc) = &VTable_007A1D68;
  lVar2 = st::fn_0072E288();
  STField<longlong>(this,0x18) = lVar2;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar1 = (**(code **)*STField<undefined4 *>(this,0x14))
                    (STField<undefined4 *>(this,0x14),STField<undefined4>(this,0x20),&param_2);
  if (-1 < (int)uVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_2 + 8))(param_2);
    uVar1 = st::fn_0074E337((int *)((int)this + 0x48),param_6,nullptr,0,(int *)&local_8);
    if (-1 < (int)uVar1) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*local_8 + 8))(local_8);
      if (param_8 == 4) {
        STField<undefined4>(this,0x40) = 1;
        STField<undefined4 *>(this,0x38) = (undefined4 *)((int)this + 0x44);
        STField<undefined4>(this,0x44) = 0xfffffffd;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar1 = (**(code **)(*param_1 + 8))(this);
      if (-1 < (int)uVar1) {
        return this;
      }
    }
  }
  *param_3 = uVar1;
  return this;
}

// 0074FD33 FUN_0074fd33
#line 1 "decomp/ST.exe/functions/0074FD33/decomp.c"
/* [STVTableApplier] Virtual slot 007A1D68+0x0 */

void st::fn_0074FD33(int param_1,undefined4 param_2,undefined4 param_3)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)**(undefined4 **)(param_1 + -8))(*(undefined4 **)(param_1 + -8),param_2,param_3);
  return;
}

// 0074FD4A FUN_0074fd4a
#line 1 "decomp/ST.exe/functions/0074FD4A/decomp.c"
/* [STVTableApplier] Virtual slot 007A1D68+0x4 */

void st::fn_0074FD4A(int param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(**(int **)(param_1 + -8) + 4))(*(int **)(param_1 + -8));
  return;
}

// 0074FD5A FUN_0074fd5a
#line 1 "decomp/ST.exe/functions/0074FD5A/decomp.c"
/* [STVTableApplier] Virtual slot 007A1D68+0x8 */

void st::fn_0074FD5A(int param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(**(int **)(param_1 + -8) + 8))(*(int **)(param_1 + -8));
  return;
}

// 0074FD6A FUN_0074fd6a
#line 1 "decomp/ST.exe/functions/0074FD6A/decomp.c"
undefined4 * __thiscall st::fn_0074FD6A(void *this,byte param_1)

{
  st::fn_0074FD86((int)this);
  if ((param_1 & 1) != 0) {
    st::fn_0072E2B0(this);
  }
  return this;
}

// 0074FD86 FUN_0074fd86
#line 1 "decomp/ST.exe/functions/0074FD86/decomp.c"
void __fastcall st::fn_0074FD86(int param_1)

{
  st::fn_0074E310((int *)(param_1 + 0x48));
  st::fn_0074FBF6((int *)(param_1 + 0x34));
  st::fn_0074B777();
  return;
}

// 0074FDAB FUN_0074fdab
#line 1 "decomp/ST.exe/functions/0074FDAB/decomp.c"
void st::fn_0074FDAB(int *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;

  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = param_2;
  pcVar3 = &DAT_007a1e28;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    st::fn_0074B8A6((int *)(-(uint)(param_1 != nullptr) & (uint)(param_1 + 3)),param_3);
  }
  else {
    st::fn_0074B810(param_1,param_2,param_3);
  }
  return;
}

// 0074FDEB FUN_0074fdeb
#line 1 "decomp/ST.exe/functions/0074FDEB/decomp.c"
int st::fn_0074FDEB(int param_1)

{
  int iVar1;

  if (*(int **)(param_1 + 4) == nullptr) {
    iVar1 = -0x7ffbfdcc;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xc))(param_1 + -0xc);
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 4) = 0;
      iVar1 = 0;
    }
  }
  return iVar1;
}

// 0074FE15 FUN_0074fe15
#line 1 "decomp/ST.exe/functions/0074FE15/decomp.c"
/* [STVTableApplier] Virtual slot 007A1D68+0x10 */

undefined4 st::fn_0074FE15(void)

{
  return 0x80004001;
}

// 0074FE1D FUN_0074fe1d
#line 1 "decomp/ST.exe/functions/0074FE1D/decomp.c"
/* [STVTableApplier] Virtual slot 007A1D68+0x18 */

undefined4 st::fn_0074FE1D(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else if (*(int *)(param_1 + 4) == 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x40);
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80004004;
  }
  return uVar1;
}

// 0074FE47 FUN_0074fe47
#line 1 "decomp/ST.exe/functions/0074FE47/decomp.c"
/* [STAbiConsistencyApplier] machine_stack_arity_expansion target=function:-1: prototype=int
   __stdcall FUN_0074fe47(AnonShape_0074FE47_5517BCCF * param_1, double param_2)
   previous_return_type=/int Evidence: every machine RET purges exactly 12 explicit stack bytes
   while the current signature describes 4; every incoming byte is read before an overlapping
   listing write; newly exposed x87 double slot(s)=[12]; inferred=[EBP+0xC=/double]; sites=0074FE4A
   FLD double ptr [EBP + 0xc] | 0074FE5B MOV ESI,dword ptr [EBP + 0x8]; ret_sites=0074FEA1 RET 0xc
    */

int st::fn_0074FE47(AnonShape_0074FE47_5517BCCF *param_1,double param_2)

{
  int iVar1;
  longlong lVar2;

  lVar2 = st::fn_0072E288();
  iVar1 = st::fn_0074FEA4((void *)param_1->field_0004,(uint)lVar2,(int)((ulonglong)lVar2 >> 0x20),
                       param_1->field_0024);
  if (iVar1 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*(int *)param_1->field_0004 + 0xc))(&param_1[-1].field_0x1c);
    if (-1 < iVar1) {
      param_1->field_000C = (int)lVar2;
      param_1->field_0010 = (int)((ulonglong)lVar2 >> 0x20);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*(int *)param_1->field_0004 + 8))();
    }
  }
  else {
    iVar1 = -0x7ffbfdcd;
  }
  return iVar1;
}

// 0074FEA4 FUN_0074fea4
#line 1 "decomp/ST.exe/functions/0074FEA4/decomp.c"
undefined4 __thiscall st::fn_0074FEA4(void *this,uint param_1,int param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  uint local_c;
  int local_8;

  piVar1 = STField<int *>(this,0x60);
  if (piVar1 != nullptr) {
    if (param_3 != 0) {
      if (STField<int>(this,100) == 0) {
        return 0;
      }
      bVar2 = CARRY4(param_1,STField<uint>(this,0x68));
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 + STField<uint>(this,0x68);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = param_2 + STField<int>(this,0x6c) + (uint)bVar2;
    }
    local_c = 0;
    local_8 = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*piVar1 + 0xc))(piVar1,&local_c);
    if ((param_2 <= local_8) && ((param_2 < local_8 || (param_1 <= local_c)))) {
      return 1;
    }
  }
  return 0;
}

// 0074FEF7 FUN_0074fef7
#line 1 "decomp/ST.exe/functions/0074FEF7/decomp.c"
uint __fastcall st::fn_0074FEF7(AnonShape_0074FEF7_7E5655A4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 local_30 [32];
  undefined1 local_10 [4];
  int *local_c;
  int *local_8;

  if (param_1->field_0010 == 0) {
    uVar1 = 0x80040234;
  }
  else {
    uVar1 = st::fn_0074E337((int *)&param_1->field_0x48,param_1->field_0020,nullptr,0,
                         (int *)&local_8);
    if (-1 < (int)uVar1) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar1 = (**(code **)*param_1->field_0014)(param_1->field_0014,param_1->field_0020,&local_c);
      if ((int)uVar1 < 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*local_8 + 8))(local_8);
      }
      else {
        /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
        uVar2 = (**(code **)(*local_8 + 0x2c))
                          (local_8,local_c,param_1->field_0024,
                           CONCAT22((short)((uint)&param_1->field_0x34 >> 0x10),param_1->field_0028)
                           ,&param_1->field_0x34,param_1->field_002C,local_30,local_10);
        param_1->field_004C = uVar2;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*local_c + 8))(local_c);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*local_8 + 8))(local_8);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar1 = (**(code **)(*(int *)param_1->field_0010 + 0xc))(param_1);
        param_1->field_0010 = 0;
      }
    }
  }
  return uVar1;
}

// 0074FF8C FUN_0074ff8c
#line 1 "decomp/ST.exe/functions/0074FF8C/decomp.c"
int __fastcall st::fn_0074FF8C(AnonShape_0074FF8C_0691EA28 *param_1)

{
  st::external_00000017((LPCRITICAL_SECTION)&param_1->field_0x8);
  st::fn_0074DE63((undefined4 *)&param_1->field_0x20);
  st::fn_0074DE63((undefined4 *)&param_1->field_0x38);
  st::fn_0074D1EA(&param_1->field_0x50,1);
  param_1->field_0054 = 0;
  param_1->field_0058 = 0;
  param_1->field_005C = 0;
  param_1->field_0060 = 0;
  param_1->field_0064 = 0;
  param_1->field_0068 = 0;
  param_1->field_006C = 0;
  return (int)param_1;
}

// 0074FFD2 FUN_0074ffd2
#line 1 "decomp/ST.exe/functions/0074FFD2/decomp.c"
void __fastcall st::fn_0074FFD2(AnonShape_0074FFD2_D127A427 *param_1)

{
  int *piVar1;
  int iVar2;
  int local_8;

  local_8 = param_1->field_0020;
  while (local_8 != 0) {
    iVar2 = st::fn_0074DEC2(&local_8);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)(iVar2 + 0xc) + 8))(iVar2 + 0xc);
  }
  st::fn_0074DE91(&param_1->field_0020);
  local_8 = param_1->field_0038;
  while (local_8 != 0) {
    iVar2 = st::fn_0074DEC2(&local_8);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)(iVar2 + 0xc) + 8))(iVar2 + 0xc);
  }
  st::fn_0074DE91(&param_1->field_0038);
  piVar1 = param_1->field_0060;
  if (piVar1 != nullptr) {
    if (param_1->field_0054 != 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 0x18))(piVar1,param_1->field_0054);
      param_1->field_0054 = 0;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1->field_0060 + 8))(param_1->field_0060);
  }
  st::fn_0074D204((undefined4 *)&param_1->field_0x50);
  st::fn_0074DE7F(&param_1->field_0038);
  st::fn_0074DE7F(&param_1->field_0020);
  st::external_00000016((LPCRITICAL_SECTION)&param_1->field_0x8);
  return;
}

