#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0075.cpp

// 00750080 FUN_00750080
#line 4 "decomp/ST.exe/functions/00750080/decomp.c"
/* [STAbiConsistencyApplier] x87_double_parameter_slots target=function:-1: prototype=int *
   __thiscall FUN_00750080(void * this, undefined4 * param_1, int param_2, double param_3, int
   param_4, int param_5, short param_6, int param_7, int param_8, int param_9, undefined4 param_10,
   int param_11) Evidence: x87 double-width accesses or exact split stores into an independently
   typed double field prove physical EBP slot boundaries; merged_slots={2=1}; sites=007500AF FLD
   double ptr [EBP + 0x10] */

int * __thiscall
st::fn_00750080(void *this,undefined4 *param_1,int param_2,double param_3,int param_4,int param_5,
            short param_6,int param_7,int param_8,int param_9,undefined4 param_10,int param_11)

{
  int *piVar1;
  void *this_00;
  int *piVar1_mg0;
  int *local_8;

  local_8 = st::pointer_boundary_cast<int *>(this);
  /* ST_CALLSITE[00750090]: CALL dword ptr [0x0085bb8c] */
  st::external_00000018((LPCRITICAL_SECTION)((int)this + 8));
  local_8 = nullptr;
  *param_1 = 0;
  this_00 = (void *)st::fn_0072E530(0x50);
  if (this_00 == nullptr) {
    piVar1_mg0 = nullptr;
  }
  else {
    piVar1_mg0 = st::fn_0074FC49(this_00,st::pointer_boundary_cast<int *>(this),nullptr,(uint *)&local_8,param_2,param_3,param_4,
                              param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  }
  if (piVar1_mg0 == nullptr) {
    local_8 = (int *)0x8007000e;
  }
  else {
    *param_1 = st::machine_word_boundary_cast<undefined4>(piVar1_mg0);
  }
  piVar1 = local_8;
  /* ST_CALLSITE[007500F6]: CALL dword ptr [0x0085bb90] */
  st::external_00000019((LPCRITICAL_SECTION)((int)this + 8));
  return piVar1;
}

// 00750104 FUN_00750104
#line 4 "decomp/ST.exe/functions/00750104/decomp.c"
undefined4 __thiscall st::fn_00750104(void *this,AnonShape_00750104_599B328B *param_1)

{
  int iVar1;
  int *this_00;
  int *local_8;

  local_8 = st::pointer_boundary_cast<int *>(this);
  /* ST_CALLSITE[00750115]: CALL dword ptr [0x0085bb8c] */
  st::external_00000018((LPCRITICAL_SECTION)((int)this + 8));
  /* ST_CALLSITE[00750125]: CALL dword ptr [ECX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(param_1->field_000C + 4))(&param_1->field_000C);
  this_00 = (int *)((int)this + 0x38);
  if (param_1->field_0030 == 0) {
    this_00 = (int *)((int)this + 0x20);
  }
  local_8 = (int *)*this_00;
  while (local_8 != nullptr) {
    iVar1 = st::fn_0074DED7((int)local_8);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((param_1->field_001C < *(int *)(iVar1 + 0x1c)) ||
       ((param_1->field_001C <= *(int *)(iVar1 + 0x1c) &&
        (param_1->field_0018 < *(uint *)(iVar1 + 0x18))))) break;
    st::fn_0074DEC2((int *)&local_8);
  }
  if (local_8 == nullptr) {
    st::fn_0074DF72(this_00,st::machine_word_boundary_cast<undefined4>(param_1));
  }
  else {
    st::fn_0074E122(this_00,local_8,(int)param_1);
  }
  st::fn_00750287(st::pointer_boundary_cast<AnonShape_00750287_BC8A1854 *>(this));
  /* ST_CALLSITE[00750190]: CALL dword ptr [0x0085bb90] */
  st::external_00000019((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

// 0075019F FUN_0075019f
#line 4 "decomp/ST.exe/functions/0075019F/decomp.c"
undefined4 __thiscall st::fn_0075019F(void *this,AnonShape_0075019F_4BD22E12 *param_1)

{
  AnonShape_0075019F_4BD22E12 *pAVar1;
  int *this_00;
  undefined4 local_c;
  int *local_8;

  /* ST_CALLSITE[007501B1]: CALL dword ptr [0x0085bb8c] */
  st::external_00000018((LPCRITICAL_SECTION)((int)this + 8));
  local_c = 0;
  this_00 = (int *)((int)this + 0x38);
  if (param_1->field_0030 == 0) {
    this_00 = (int *)((int)this + 0x20);
  }
  local_8 = (int *)*this_00;
  while ((local_8 != nullptr &&
         (pAVar1 = (AnonShape_0075019F_4BD22E12 *)st::fn_0074DED7((int)local_8), pAVar1 != param_1))) {
    st::fn_0074DEC2((int *)&local_8);
  }
  if (local_8 == nullptr) {
    local_c = 0x80040216;
  }
  else {
    st::fn_0074DF2B(this_00,local_8);
    /* ST_CALLSITE[00750212]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(param_1->field_000C + 8))(&param_1->field_000C);
    st::fn_00750287(st::pointer_boundary_cast<AnonShape_00750287_BC8A1854 *>(this));
  }
  /* ST_CALLSITE[0075021F]: CALL dword ptr [0x0085bb90] */
  st::external_00000019((LPCRITICAL_SECTION)((int)this + 8));
  return local_c;
}

// 0075022F FUN_0075022f
#line 4 "decomp/ST.exe/functions/0075022F/decomp.c"
undefined4 __thiscall st::fn_0075022F(void *this,int *param_1)

{
  int *piVar1;

  /* ST_CALLSITE[00750238]: CALL dword ptr [0x0085bb8c] */
  st::external_00000018((LPCRITICAL_SECTION)((int)this + 8));
  if (param_1 != nullptr) {
    /* ST_CALLSITE[00750249]: CALL dword ptr [EAX + 0x4] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 4))(param_1);
  }
  piVar1 = STField<int *>(this,0x60);
  if (piVar1 != nullptr) {
    if (STField<int>(this,0x54) != 0) {
      /* ST_CALLSITE[0075025E]: CALL dword ptr [EDX + 0x18] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 0x18))(piVar1,STField<int>(this,0x54));
      STField<undefined4>(this,0x54) = 0;
    }
    /* ST_CALLSITE[0075026B]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*STField<int *>(this,0x60) + 8))(STField<int *>(this,0x60));
  }
  STField<int *>(this,0x60) = param_1;
  st::fn_00750287(st::pointer_boundary_cast<AnonShape_00750287_BC8A1854 *>(this));
  /* ST_CALLSITE[00750279]: CALL dword ptr [0x0085bb90] */
  st::external_00000019((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

// 00750287 FUN_00750287
#line 4 "decomp/ST.exe/functions/00750287/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_00750287(AnonShape_00750287_BC8A1854 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int local_8;

  if (param_1->field_0060 != 0) {
    st::external_0000005B((HANDLE)param_1->field_0050);
    uVar3 = 0;
    local_8 = 0;
    if (0 < param_1->field_0028) {
      iVar1 = st::fn_0074DED7(param_1->field_0020);
      local_8 = *(int *)(iVar1 + 0x1c);
      uVar3 = *(uint *)(iVar1 + 0x18);
    }
    if ((param_1->field_0064 != 0) && (0 < param_1->field_0040)) {
      iVar1 = st::fn_0074DED7(param_1->field_0038);
      uVar2 = *(uint *)(iVar1 + 0x18) + param_1->field_0068;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar1 = *(int *)(iVar1 + 0x1c) + param_1->field_006C +
              (uint)CARRY4(*(uint *)(iVar1 + 0x18),param_1->field_0068);
      if ((uVar3 == 0 && local_8 == 0) ||
         ((iVar1 <= local_8 && ((iVar1 < local_8 || (uVar2 < uVar3)))))) {
        local_8 = iVar1;
        uVar3 = uVar2;
      }
    }
    if (((-1 < local_8) && ((0 < local_8 || (uVar3 != 0)))) &&
       ((uVar3 != param_1->field_0058 || (local_8 != param_1->field_005C)))) {
      if (param_1->field_0054 != 0) {
        /* ST_CALLSITE[00750320]: CALL dword ptr [EDX + 0x18] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*(int *)param_1->field_0060 + 0x18))
                  /* ST_CALLSITE[00750320]: CALL dword ptr [EDX + 0x18] */
                  ((int *)param_1->field_0060,param_1->field_0054);
        st::external_0000005B((HANDLE)param_1->field_0050);
      }
      /* ST_CALLSITE[0075033F]: CALL dword ptr [EDX + 0x10] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)param_1->field_0060 + 0x10))
                /* ST_CALLSITE[0075033F]: CALL dword ptr [EDX + 0x10] */
                ((int *)param_1->field_0060,uVar3,local_8,0,0,param_1->field_0050,
                 &param_1->field_0054);
      param_1->field_0058 = uVar3;
      param_1->field_005C = local_8;
    }
  }
  return;
}

// 0075034D FUN_0075034d
#line 4 "decomp/ST.exe/functions/0075034D/decomp.c"
undefined4 __thiscall st::fn_0075034D(void *this,undefined4 param_1,undefined4 param_2)

{
  /* ST_CALLSITE[00750355]: CALL dword ptr [0x0085bb8c] */
  st::external_00000018((LPCRITICAL_SECTION)((int)this + 8));
  STField<undefined4>(this,0x68) = param_1;
  STField<undefined4>(this,0x6c) = param_2;
  STField<undefined4>(this,100) = 1;
  st::fn_00750287(st::pointer_boundary_cast<AnonShape_00750287_BC8A1854 *>(this));
  /* ST_CALLSITE[00750378]: CALL dword ptr [0x0085bb90] */
  st::external_00000019((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

// 00750385 FUN_00750385
#line 4 "decomp/ST.exe/functions/00750385/decomp.c"
undefined4 __fastcall st::fn_00750385(AnonShape_00750287_BC8A1854 *param_1)

{
  /* ST_CALLSITE[0075038D]: CALL dword ptr [0x0085bb8c] */
  st::external_00000018((LPCRITICAL_SECTION)&param_1->field_0x8);
  param_1->field_0064 = 0;
  st::fn_00750287(param_1);
  /* ST_CALLSITE[0075039F]: CALL dword ptr [0x0085bb90] */
  st::external_00000019((LPCRITICAL_SECTION)&param_1->field_0x8);
  return 0;
}

// 007503AA FUN_007503aa
#line 4 "decomp/ST.exe/functions/007503AA/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 007503AA -> EXTERNAL:0000006D @ 00750436 */

undefined4 __thiscall st::fn_007503AA(void *this,int *param_1,DWORD dwMilliseconds)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;

  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  while( true ) {
    /* ST_CALLSITE[007503C2]: CALL dword ptr [0x0085bb8c] */
    st::external_00000018(lpCriticalSection);
    iVar4 = 0;
    if (0 < STField<int>(this,0x28)) {
      iVar4 = st::fn_0074DED7(STField<int>(this,0x20));
    }
    if ((STField<int>(this,100) != 0) && (0 < STField<int>(this,0x40))) {
      iVar1 = st::fn_0074DED7(STField<int>(this,0x38));
      iVar3 = STField<int>(this,0x6c) + *(int *)(iVar1 + 0x1c) +
              (uint)CARRY4(STField<uint>(this,0x68),*(uint *)(iVar1 + 0x18));
      if ((iVar4 == 0) ||
         ((iVar3 <= *(int *)(iVar4 + 0x1c) &&
          ((iVar3 < *(int *)(iVar4 + 0x1c) ||
           (STField<uint>(this,0x68) + *(uint *)(iVar1 + 0x18) < *(uint *)(iVar4 + 0x18))))))) {
        iVar4 = iVar1;
      }
    }
    if ((iVar4 != 0) &&
       (iVar1 = st::fn_0074FEA4(this,*(uint *)(iVar4 + 0x18),*(int *)(iVar4 + 0x1c),
                             *(int *)(iVar4 + 0x30)), iVar1 != 0)) break;
    /* ST_CALLSITE[0075042E]: CALL EBX */
    st::external_00000019(lpCriticalSection);
    /* ST_CALLSITE[00750436]: CALL dword ptr [0x0085bce0] */
    DVar2 = st::external_0000006D(STField<HANDLE>(this,0x50),dwMilliseconds);
    if (DVar2 != 0) {
      return 0x80004004;
    }
  }
  /* ST_CALLSITE[0075044C]: CALL dword ptr [ECX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*(int *)(iVar4 + 0xc) + 4))(iVar4 + 0xc);
  *param_1 = iVar4;
  /* ST_CALLSITE[00750457]: CALL EBX */
  st::external_00000019(lpCriticalSection);
  return 0;
}

// 00750469 FUN_00750469
#line 4 "decomp/ST.exe/functions/00750469/decomp.c"
undefined4 __thiscall st::fn_00750469(void *this,uint param_1,int param_2,int *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  int iVar3;

  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  /* ST_CALLSITE[00750479]: CALL dword ptr [0x0085bb8c] */
  st::external_00000018(lpCriticalSection);
  iVar3 = 0;
  iVar2 = 0;
  if (0 < STField<int>(this,0x40)) {
    iVar2 = st::fn_0074DED7(STField<int>(this,0x38));
  }
  if (0 < STField<int>(this,0x28)) {
    iVar3 = st::fn_0074DED7(STField<int>(this,0x20));
  }
  if ((iVar3 == 0) ||
     (iVar1 = st::fn_0074FEA4(this,*(uint *)(iVar3 + 0x18),*(int *)(iVar3 + 0x1c),0), iVar1 == 0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) <= param_2)) &&
       ((*(int *)(iVar2 + 0x1c) < param_2 || (*(uint *)(iVar2 + 0x18) <= param_1)))) {
      /* ST_CALLSITE[007504EA]: CALL dword ptr [ECX + 0x4] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)(iVar3 + 0xc) + 4))(iVar3 + 0xc);
      *param_3 = iVar2;
      goto LAB_0075051f;
    }
    if ((STField<int>(this,100) == 0) || (iVar3 == 0)) {
LAB_0075052c:
      /* ST_CALLSITE[0075052F]: CALL dword ptr [0x0085bb90] */
      st::external_00000019(lpCriticalSection);
      return 0x80040216;
    }
    iVar2 = STField<int>(this,0x6c) + param_2 + (uint)CARRY4(STField<uint>(this,0x68),param_1);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((iVar2 < *(int *)(iVar3 + 0x1c)) ||
       ((iVar2 <= *(int *)(iVar3 + 0x1c) &&
        (STField<uint>(this,0x68) + param_1 < *(uint *)(iVar3 + 0x18))))) goto LAB_0075052c;
  }
  else {
    /* ST_CALLSITE[007504C8]: CALL dword ptr [ECX + 0x4] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)(iVar3 + 0xc) + 4))(iVar3 + 0xc);
  }
  *param_3 = iVar3;
LAB_0075051f:
  /* ST_CALLSITE[00750522]: CALL dword ptr [0x0085bb90] */
  st::external_00000019(lpCriticalSection);
  return 0;
}

// 00750565 FUN_00750565
#line 1 "decomp/ST.exe/functions/00750565/decomp.c"

/* [STVTableApplier] Virtual slot 007A1C18+0x0

   [STVTableApplier] Virtual slot 007A1CC8+0x0 */

void st::fn_00750565(void)

{
  st::fn_0074F026();
  return;
}

// 0075056F FUN_0075056f
#line 1 "decomp/ST.exe/functions/0075056F/decomp.c"

/* [STVTableApplier] Virtual slot 007A1C18+0x4

   [STVTableApplier] Virtual slot 007A1CC8+0x4 */

void st::fn_0075056F(void)

{
  st::fn_0074F03D();
  return;
}

// 00750579 FUN_00750579
#line 1 "decomp/ST.exe/functions/00750579/decomp.c"

/* [STVTableApplier] Virtual slot 007A1C18+0x8

   [STVTableApplier] Virtual slot 007A1CC8+0x8 */

void st::fn_00750579(void)

{
  st::fn_0074F0C0();
  return;
}

// 00750590 FUN_00750590
#line 4 "decomp/ST.exe/functions/00750590/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void st::fn_00750590(undefined1 *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *puVar7;

  if ((0 < param_5) && (0 < param_6)) {
    iVar4 = param_5;
    if (2 < param_5) {
      do {
        iVar4 = param_5;
        if (((uint)param_1 & 1) != 0) {
          bVar1 = *param_3;
          param_3 = param_3 + 1;
          *param_1 = *(undefined1 *)(param_7 + (uint)bVar1);
          param_1 = param_1 + 1;
          iVar4 = param_5 + -1;
        }
        iVar4 = iVar4 + -2;
        do {
          puVar7 = param_1;
          pbVar6 = param_3;
          param_3 = pbVar6 + 2;
          param_1 = puVar7 + 2;
          uVar2 = *(undefined1 *)(param_7 + (uint)pbVar6[1]);
          *puVar7 = *(undefined1 *)(param_7 + (uint)*pbVar6);
          puVar7[1] = uVar2;
          iVar5 = iVar4 + -2;
          bVar3 = 1 < iVar4;
          iVar4 = iVar5;
        } while (bVar3);
        if (iVar5 != -2) {
          bVar1 = *param_3;
          param_3 = pbVar6 + 3;
          *param_1 = *(undefined1 *)(param_7 + (uint)bVar1);
          param_1 = puVar7 + 3;
        }
        param_3 = param_3 + (param_4 - param_5);
        param_1 = param_1 + (param_2 - param_5);
        iVar4 = param_6 + -1;
        bVar3 = 0 < param_6;
        param_6 = iVar4;
      } while (iVar4 != 0 && bVar3);
      return;
    }
    do {
      do {
        bVar1 = *param_3;
        puVar7 = param_1 + 1;
        param_3 = param_3 + 1;
        iVar5 = iVar4 + -1;
        *param_1 = *(undefined1 *)(param_7 + (uint)bVar1);
        bVar3 = 0 < iVar4;
        iVar4 = iVar5;
        param_1 = puVar7;
      } while (iVar5 != 0 && bVar3);
      param_3 = param_3 + (param_4 - param_5);
      param_1 = puVar7 + (param_2 - param_5);
      iVar5 = param_6 + -1;
      bVar3 = 0 < param_6;
      iVar4 = param_5;
      param_6 = iVar5;
    } while (iVar5 != 0 && bVar3);
  }
  return;
}

// 00750660 FUN_00750660
#line 4 "decomp/ST.exe/functions/00750660/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_00750660(undefined1 *param_1,int param_2,undefined1 *param_3,int param_4,
                 undefined1 *param_5,int param_6,int param_7,int param_8,int param_9)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;

  if ((0 < param_7) && (0 < param_8)) {
    _DAT_00857514 = param_8;
    _DAT_00857510 = param_2 - param_7;
    _DAT_00857518 = param_4 - param_7;
    DAT_00857508 = param_7;
    _DAT_0085750c = param_6 - param_7;
    do {
      do {
        uVar1 = *param_3;
        param_3 = param_3 + 1;
        uVar2 = *param_5;
        param_5 = param_5 + 1;
        *param_1 = *(undefined1 *)(param_9 + (uint)CONCAT11(uVar2,uVar1));
        iVar4 = _DAT_00857514;
        param_1 = param_1 + 1;
        iVar5 = param_7 + -1;
        bVar3 = 0 < param_7;
        param_7 = iVar5;
      } while (iVar5 != 0 && bVar3);
      param_3 = param_3 + _DAT_00857518;
      param_1 = param_1 + _DAT_00857510;
      param_5 = param_5 + _DAT_0085750c;
      _DAT_00857514 = _DAT_00857514 + -1;
      param_7 = DAT_00857508;
    } while (_DAT_00857514 != 0 && 0 < iVar4);
  }
  return;
}

// 007508F0 FUN_007508f0
#line 4 "decomp/ST.exe/functions/007508F0/decomp.c"
undefined4 st::fn_007508F0(undefined4 *param_1)

{
  if (param_1 != nullptr) {
    st::fn_007532A0((undefined4 *)*param_1);
    st::fn_00753260((undefined4 *)param_1[1]);
    st::fn_006A5E90((short *)param_1);
  }
  return 0;
}

// 00750920 FUN_00750920
#line 4 "decomp/ST.exe/functions/00750920/decomp.c"
void st::fn_00750920(byte *param_1,undefined4 *param_2,undefined2 param_3,undefined4 param_4)

{
  st::fn_00753300(param_1,param_2,param_3,2,param_4,0);
  return;
}

// 00750940 FUN_00750940
#line 4 "decomp/ST.exe/functions/00750940/decomp.c"
void st::fn_00750940(byte *param_1,undefined4 *param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;

  uVar2 = 0;
  iVar1 = st::fn_007535F0((char *)param_1);
  st::fn_00753300(param_1,param_2,param_3,(iVar1 != 0) + 2,param_4,uVar2);
  return;
}

// 00750970 FUN_00750970
#line 4 "decomp/ST.exe/functions/00750970/decomp.c"
void st::fn_00750970(byte *param_1,undefined4 *param_2,uint param_3)

{
  st::fn_00753300(param_1,param_2,0,1,0,param_3);
  return;
}

// 00750F10 FUN_00750f10
#line 4 "decomp/ST.exe/functions/00750F10/decomp.c"
undefined4 st::fn_00750F10(void)

{
  return 0;
}

// 00750F20 FUN_00750f20
#line 4 "decomp/ST.exe/functions/00750F20/decomp.c"
void st::fn_00750F20(AnonShape_00750F20_F8C16F98 *param_1,undefined4 param_2,undefined4 param_3)

{
  AnonNested_AnonShape_00750F20_F8C16F98_000C_F63CABFC *pAVar1;
  int *piVar2;
  int iVar3;

  pAVar1 = (AnonNested_AnonShape_00750F20_F8C16F98_000C_F63CABFC *)param_1->field_0008->field_0050;
  param_1->field_000C = pAVar1;
  pAVar1->field_000C = param_2;
  param_1->field_000C->field_0010 = param_3;
  param_1->field_000C->field_0040 = 0;
  param_1->field_000C->field_0044 = 0xffffffff;
  param_1->field_000C->field_001C = nullptr;
  param_1->field_0010 = param_1->field_000C->field_0024;
  piVar2 = (int *)(param_1->field_0008->field_0034 + param_1->field_000C->field_0024 + 4);
  iVar3 = *piVar2;
  while (iVar3 != -1) {
    param_1->field_000C->field_001C = (uint *)((int)param_1->field_000C->field_001C + 1);
    iVar3 = st::machine_word_boundary_cast<int>(st::fn_00753B80(param_1,*piVar2,(int)param_1->field_000C->field_001C));
    piVar2 = (int *)(iVar3 + 4);
    (&param_1->field_000C->field_0044)[(int)param_1->field_000C->field_001C * 2] = 0xffffffff;
    iVar3 = *piVar2;
  }
  return;
}

// 00750FB0 FUN_00750fb0
#line 4 "decomp/ST.exe/functions/00750FB0/decomp.c"
void st::fn_00750FB0(AnonShape_00750FB0_15A3AC3E *param_1,undefined4 param_2,undefined4 param_3)

{
  AnonNested_AnonShape_00750FB0_15A3AC3E_000C_71DE54C3 *pAVar1;
  int iVar2;
  int local_EAX_64;
  int iVar1;
  int local_EAX_125;
  int iVar3;

  pAVar1 = (AnonNested_AnonShape_00750FB0_15A3AC3E_000C_71DE54C3 *)param_1->field_0008->field_0050;
  param_1->field_000C = pAVar1;
  pAVar1->field_000C = param_2;
  param_1->field_000C->field_0010 = param_3;
  param_1->field_000C->field_0040 = 0;
  param_1->field_000C->field_001C = nullptr;
  iVar3 = param_1->field_0008->field_0034 + param_1->field_000C->field_0024;
  local_EAX_64 = st::fn_00753C80((AnonShape_00753C80_4C8E695D *)param_1,(int)*(short *)(iVar3 + 8));
  if (-1 < local_EAX_64) {
    iVar1 = st::fn_00753C80((AnonShape_00753C80_4C8E695D *)param_1,(int)*(short *)(iVar3 + 8));
    iVar2 = *(int *)(iVar1 + 0x10 + iVar3);
    while (iVar2 != -1) {
      param_1->field_000C->field_001C = (uint *)((int)param_1->field_000C->field_001C + 1);
      iVar3 = st::machine_word_boundary_cast<int>(st::fn_00753B80((AnonShape_00750F20_F8C16F98 *)param_1,iVar2,
                           (int)param_1->field_000C->field_001C));
      local_EAX_125 =
           st::fn_00753C80((AnonShape_00753C80_4C8E695D *)param_1,(int)*(short *)(iVar3 + 8));
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = *(int *)(local_EAX_125 + 0x10 + iVar3);
    }
  }
  *(int *)(&param_1->field_000C[1].field_0x0 + (int)param_1->field_000C->field_001C * 8) =
       (int)*(short *)(iVar3 + 8);
  return;
}

// 00751100 FUN_00751100
#line 1 "decomp/ST.exe/functions/00751100/decomp.c"

int st::fn_00751100(uint *param_1,ushort *param_2)

{
  int iVar1;

  iVar1 = st::fn_00753EA0(*param_1,param_2,(undefined4 *)&param_2);
  if ((iVar1 == 0) && (param_2 != nullptr)) {
    st::fn_00753CE0((AnonShape_00753CE0_1943F9C2 *)param_1[1],(uint)param_2);
  }
  return iVar1;
}

// 00751140 FUN_00751140
#line 4 "decomp/ST.exe/functions/00751140/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00715360 -> 00751140 @ 007153F3

   [STPrototypeApplier] Propagated return.
   Evidence: 00751140 returns return of FUN_00753f10 @ 00751160 */

int st::fn_00751140(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;

  iVar1 = st::fn_00753F10(0,st::machine_word_boundary_cast<int>(param_1),param_2,0,param_3,param_4);
  return iVar1;
}

// 007516F0 FUN_007516f0
#line 4 "decomp/ST.exe/functions/007516F0/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00751954) */

int st::fn_007516F0(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte abStack_10060 [65544];
  uint local_4c;
  byte local_48;
  byte local_44;
  byte *local_3c;
  byte *local_24;

  pbVar7 = abStack_10060;
  for (iVar4 = 0x4000; iVar4 != 0; iVar4 = iVar4 + -1) {
    pbVar7[0] = 0;
    pbVar7[1] = 0;
    pbVar7[2] = 0;
    pbVar7[3] = 0;
    pbVar7 = pbVar7 + 4;
  }
  if (abStack_10060 == nullptr) {
    iVar4 = -2;
  }
  else {
    local_24 = param_2;
    local_44 = ((byte *)param_1)[1];
    local_48 = 0;
    uVar3 = 0;
    uVar6 = 0;
    pbVar7 = (byte *)(param_1 + 2);
    local_3c = (byte *)(param_1 + 2);
    while( true ) {
      if ((local_44 & (byte)(1 << (local_48 & 0x1f))) == 0) {
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        abStack_10060[uVar6 << 8 | uVar3] = bVar1;
        local_3c = pbVar7;
      }
      else {
        bVar1 = abStack_10060[uVar6 << 8 | uVar3];
      }
      uVar5 = (uint)bVar1;
      local_48 = local_48 + 1;
      if (7 < local_48) {
        local_44 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        local_48 = 0;
        local_3c = pbVar7;
      }
      if (uVar5 == 0) break;
      if ((bVar1 & 0x40) == 0) {
        local_4c = uVar5 & 0x3f;
        uVar6 = uVar5;
        uVar5 = uVar3;
      }
      else {
        if ((local_44 & (byte)(1 << (local_48 & 0x1f))) == 0) {
          bVar2 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          abStack_10060[uVar3 << 8 | uVar5] = bVar2;
          local_3c = pbVar7;
        }
        else {
          bVar2 = abStack_10060[uVar3 << 8 | uVar5];
        }
        local_48 = local_48 + 1;
        if (7 < local_48) {
          local_44 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          local_48 = 0;
          local_3c = pbVar7;
        }
        local_4c = (uint)bVar2 | (uVar5 & 0x3f) << 8;
        uVar6 = (uint)bVar2;
      }
      if ((bVar1 & 0x80) == 0) {
        if ((local_44 & (byte)(1 << (local_48 & 0x1f))) == 0) {
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          abStack_10060[uVar5 << 8 | uVar6] = bVar1;
          local_3c = pbVar7;
        }
        else {
          bVar1 = abStack_10060[uVar5 << 8 | uVar6];
        }
        uVar3 = (uint)bVar1;
        local_48 = local_48 + 1;
        if (7 < local_48) {
          local_44 = *pbVar7;
          local_3c = pbVar7 + 1;
          local_48 = 0;
        }
        pbVar7 = local_24;
        for (uVar5 = local_4c >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(uint *)pbVar7 = CONCAT22(CONCAT11(bVar1,bVar1),CONCAT11(bVar1,bVar1));
          pbVar7 = pbVar7 + 4;
        }
        for (uVar5 = local_4c & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar7 = bVar1;
          pbVar7 = pbVar7 + 1;
        }
        local_24 = local_24 + local_4c;
        pbVar7 = local_3c;
      }
      else {
        uVar3 = uVar6;
        uVar6 = uVar5;
        if (-1 < (int)(local_4c - 1)) {
          do {
            uVar6 = uVar3;
            if ((local_44 & (byte)(1 << (local_48 & 0x1f))) == 0) {
              bVar1 = *pbVar7;
              pbVar7 = pbVar7 + 1;
              abStack_10060[uVar5 << 8 | uVar6] = bVar1;
            }
            else {
              bVar1 = abStack_10060[uVar5 << 8 | uVar6];
            }
            uVar3 = (uint)bVar1;
            local_48 = local_48 + 1;
            if (7 < local_48) {
              local_44 = *pbVar7;
              pbVar7 = pbVar7 + 1;
              local_48 = 0;
            }
            *local_24 = bVar1;
            local_24 = local_24 + 1;
            local_4c = local_4c - 1;
            uVar5 = uVar6;
            local_3c = pbVar7;
          } while (local_4c != 0);
        }
      }
    }
    iVar4 = (int)local_24 - (int)param_2;
  }
  return iVar4;
}

// 00751980 FUN_00751980
#line 4 "decomp/ST.exe/functions/00751980/decomp.c"
DWORD st::fn_00751980(int *param_1,ushort *param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  DWORD DVar2;

  iVar1 = st::fn_00751B60(*param_1,param_2,(undefined4 *)&param_2);
  if (iVar1 == 0) {
    DVar2 = st::fn_00754360(param_1[1],(DWORD)param_2,param_3,param_4);
    return DVar2;
  }
  return (-(uint)(iVar1 != -4) & 3) - 4;
}

// 007519D0 FUN_007519d0
#line 4 "decomp/ST.exe/functions/007519D0/decomp.c"
int __cdecl st::fn_007519D0(ushort *param_1,byte *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  byte *local_8;

  local_8 = param_2;
  uVar4 = (uint)*param_1;
  puVar7 = (ushort *)0x10;
  puVar3 = param_1 + 1;
  while( true ) {
    while( true ) {
      uVar6 = uVar4 & 1;
      uVar4 = (int)uVar4 >> 1;
      puVar7 = (ushort *)((int)puVar7 + -1);
      if (puVar7 == nullptr) {
        puVar7 = (ushort *)0x10;
        uVar4 = (uint)*puVar3;
        puVar3 = puVar3 + 1;
      }
      if (uVar6 == 0) break;
      *local_8 = (byte)*puVar3;
      local_8 = local_8 + 1;
      puVar3 = (ushort *)((int)puVar3 + 1);
    }
    uVar6 = uVar4 & 1;
    uVar4 = (int)uVar4 >> 1;
    puVar7 = (ushort *)((int)puVar7 + -1);
    if (puVar7 == nullptr) {
      puVar7 = (ushort *)0x10;
      uVar4 = (uint)*puVar3;
      puVar3 = puVar3 + 1;
    }
    if (uVar6 == 0) break;
    uVar1 = *puVar3;
    bVar5 = ((byte)(uVar1 >> 8) & 7) + 2;
    uVar6 = (uint)bVar5;
    uVar9 = (int)(uVar1 & 0xfffff807 | 0xffff0007) >> 3 | uVar1 & 0xff;
    puVar2 = puVar3 + 1;
    if (bVar5 != 2) goto joined_r0x00751ad0;
    uVar6 = (uint)(byte)puVar3[1];
    puVar3 = (ushort *)((int)puVar3 + 3);
    if (uVar6 == 0) {
      return (int)local_8 - (int)param_2;
    }
    if (uVar6 != 1) {
      uVar6 = uVar6 + 1;
      puVar2 = puVar3;
joined_r0x00751ad0:
      for (; puVar3 = puVar2, uVar6 != 0; uVar6 = uVar6 - 1) {
        *local_8 = local_8[uVar9];
        local_8 = local_8 + 1;
        puVar2 = puVar3;
      }
    }
  }
  uVar9 = uVar4 & 1;
  uVar6 = (int)uVar4 >> 1;
  iVar8 = (int)puVar7 + -1;
  if (iVar8 == 0) {
    iVar8 = 0x10;
    uVar6 = (uint)*puVar3;
    puVar3 = puVar3 + 1;
  }
  uVar4 = (int)uVar6 >> 1;
  auto param_1_after_write = (ushort *)(iVar8 + -1); /* compiler stack-slot lifetime split */
  uVar6 = uVar9 * 2 + 2 + (uVar6 & 1);
  if (param_1_after_write == nullptr) {
    param_1_after_write = (ushort *)0x10;
    uVar4 = (uint)*puVar3;
    puVar3 = puVar3 + 1;
  }
  uVar9 = (byte)*puVar3 - 0x100;
  puVar7 = param_1_after_write;
  puVar2 = (ushort *)((int)puVar3 + 1);
  goto joined_r0x00751ad0;
}

// 00751B10 FUN_00751b10
#line 4 "decomp/ST.exe/functions/00751B10/decomp.c"
undefined4 st::fn_00751B10(int *param_1,uint param_2)

{
  uint uVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = *(uint *)(param_1[1] + 0x34);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((uVar1 == 0) || (param_2 < uVar1)) || (*(int *)(param_1[1] + 0x38) + uVar1 <= param_2)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar1 = *(uint *)(*(int *)(*param_1 + 8) + 0x34);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (((uVar1 == 0) || (param_2 < uVar1)) ||
       (*(int *)(*(int *)(*param_1 + 8) + 0x38) + uVar1 <= param_2)) {
      return 0;
    }
  }
  return 1;
}

// 00751BA0 FUN_00751ba0
#line 4 "decomp/ST.exe/functions/00751BA0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00751BA0 -> 00754360 @ 00751BCB */

DWORD st::fn_00751BA0(int *param_1,ushort *param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  DWORD DVar2;

  iVar1 = st::fn_00753BC0(*param_1,(undefined4 *)param_2,(undefined4 *)&param_2);
  if (iVar1 == 0) {
    DVar2 = st::fn_00754360(param_1[1],(DWORD)param_2,param_3,param_4);
    return DVar2;
  }
  return (-(uint)(iVar1 != -4) & 3) - 4;
}

// 00751BF0 FUN_00751bf0
#line 4 "decomp/ST.exe/functions/00751BF0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00751BF0 -> 00754360 @ 00751C1B */

DWORD st::fn_00751BF0(int *param_1,ushort *param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  DWORD DVar2;

  iVar1 = st::fn_007543F0((AnonShape_007543F0_E9DD5DAA *)*param_1,(undefined4 *)param_2,(undefined4 *)&param_2);
  if (iVar1 == 0) {
    DVar2 = st::fn_00754360(param_1[1],(DWORD)param_2,param_3,param_4);
    return DVar2;
  }
  return (-(uint)(iVar1 != -4) & 3) - 4;
}

// 00751C40 FUN_00751c40
#line 4 "decomp/ST.exe/functions/00751C40/decomp.c"
/* [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   /int; no intervening CALL or EAX/AX/AL/AH definition exists; machine CFG audit: used=2,
   ignored=0, unknown=0 */

int st::fn_00751C40(undefined4 param_1,uint param_2,int param_3,uint *param_4,int param_5)

{
  int iVar1;
  undefined1 local_38 [14];
  undefined2 local_2a;
  int local_28;
  int local_18;
  uint local_10 [3];

  local_2a = (undefined2)param_3;
  local_18 = param_5;
  local_28 = 0;
  if ((((0xf < param_3) && (param_5 == 3)) && (local_28 = param_5, param_4 == nullptr)) &&
     (param_3 == 0x10)) {
    local_10[0] = 0xf800;
    local_10[1] = 0x7e0;
    local_10[2] = 0x1f;
    param_4 = local_10;
  }
  iVar1 = st::fn_00754530((int)local_38,param_4,0,0,param_1,param_2);
  return iVar1;
}

// 00752030 FUN_00752030
#line 1 "decomp/ST.exe/functions/00752030/decomp.c"

/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00752030 -> EXTERNAL:00000075 @ 00752042

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00752030 -> EXTERNAL:00000075 @ 00752042 */

UINT st::fn_00752030(int param_1,LPVOID lpBuffer,UINT uBytes)

{
  UINT UVar1;

  /* ST_CALLSITE[00752042]: CALL dword ptr [0x0085bd00] */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  UVar1 = st::external_00000075(*(HFILE *)(param_1 + 0x32),lpBuffer,uBytes);
  if (UVar1 == 0xffffffff) {
    UVar1 = 0xfffffff4;
  }
  return UVar1;
}

// 00752060 FUN_00752060
#line 1 "decomp/ST.exe/functions/00752060/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 00752060 returns return of KERNEL32.DLL::_llseek @ 00752075 */

LONG st::fn_00752060(int param_1)

{
  LONG LVar1;

  /* ST_CALLSITE[0075206E]: CALL dword ptr [0x0085bb64] */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  LVar1 = st::external_0000000E(*(HFILE *)(param_1 + 0x32),0,1);
  return LVar1;
}

// 00752080 FUN_00752080
#line 1 "decomp/ST.exe/functions/00752080/decomp.c"

/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00752080 -> EXTERNAL:0000000E @ 00752090

   [STPrototypeApplier] Propagated return.
   Evidence: 00752080 returns return of KERNEL32.DLL::_llseek @ 00752097 */

LONG st::fn_00752080(int param_1,LONG lOffset)

{
  LONG LVar1;

  /* ST_CALLSITE[00752090]: CALL dword ptr [0x0085bb64] */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  LVar1 = st::external_0000000E(*(HFILE *)(param_1 + 0x32),lOffset,0);
  return LVar1;
}

// 007521B0 FUN_007521b0
#line 4 "decomp/ST.exe/functions/007521B0/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:5: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=00752418 MOV ECX,dword ptr [EBP + 0x1c];
   first-use mask */

undefined4
st::fn_007521B0(int *param_1,AnonShape_006B4B20_3D4F4412 *param_2,uint param_3,int param_4,int param_5,
            byte param_6)

{
  byte bVar1;
  AnonShape_006B4B20_3D4F4412 *pAVar2;
  uint uVar3;
  bool bVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  AnonShape_006B4B20_3D4F4412 *pAVar14;
  byte *pbVar15;
  int iVar16;
  byte *pbVar17;
  short *local_40;
  int local_34;
  int local_30;
  AnonShape_006B4B20_3D4F4412 *local_28;
  int local_24;
  int local_1c;
  byte *local_18;
  uint local_14;
  uint local_10;
  int local_c;
  AnonShape_006B4B20_3D4F4412 *pAVar14_mg0;

  *param_1 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_3 == 0) {
    param_3 = st::fn_006B4FA0((int *)param_2);
  }
  pAVar2 = (AnonShape_006B4B20_3D4F4412 *)param_2->field_0004;
  uVar3 = param_2->field_0008;
  uVar13 = (uint)param_2->field_000E * (int)pAVar2 + 0x1f >> 3 & 0x1ffffffc;
  puVar5 = st::pointer_boundary_cast<uint *>(st::fn_006AAC70((int)((int)&pAVar2->field_0x1 * uVar3 * 3) / 2 + 0x16));
  if (puVar5 == nullptr) {
    return 0xfffffffe;
  }
  pbVar12 = (byte *)((int)puVar5 + 0x16);
  local_1c = -1;
  pbVar6 = (byte *)((uVar3 - 1) * uVar13 + param_3);
  AnonShape_006B4B20_3D4F4412 * param_2_after_write = nullptr; /* compiler stack-slot lifetime split */
  local_30 = 0;
  local_14 = 0;
  pAVar14_mg0 = nullptr;
  local_28 = pAVar2;
  if (0 < (int)uVar3) {
    do {
      pAVar14 = nullptr;
      while( true ) {
        bVar1 = *pbVar6;
        while (bVar1 == param_6) {
          if ((int)pAVar2 <= (int)pAVar14) goto LAB_007522a2;
          pbVar6 = pbVar6 + 1;
          pAVar14 = (AnonShape_006B4B20_3D4F4412 *)&pAVar14->field_0x1;
          bVar1 = *pbVar6;
        }
        if ((int)pAVar2 <= (int)pAVar14) break;
        if (local_1c == -1) {
          local_1c = local_14;
        }
        local_30 = local_14;
        if ((int)pAVar14 < (int)local_28) {
          local_28 = pAVar14;
        }
        bVar1 = *pbVar6;
        for (; (bVar1 != param_6 && ((int)pAVar14 < (int)pAVar2));
            pAVar14 = (AnonShape_006B4B20_3D4F4412 *)&pAVar14->field_0x1) {
          pbVar6 = pbVar6 + 1;
          bVar1 = *pbVar6;
        }
        if ((int)param_2_after_write < (int)pAVar14) {
          param_2_after_write = pAVar14;
        }
      }
LAB_007522a2:
      pbVar6 = pbVar6 + -(int)(&pAVar2->field_0x0 + uVar13);
      local_14 = local_14 + 1;
      pAVar14_mg0 = param_2_after_write;
    } while ((int)local_14 < (int)uVar3);
  }
  local_c = (int)pAVar14_mg0 - (int)local_28;
  if (local_1c == -1) {
    local_1c = 0;
    local_c = 0;
    local_24 = 0;
  }
  else {
    local_30 = local_30 + 1;
    iVar10 = local_30 - local_1c;
    local_24 = (int)(iVar10 + (iVar10 >> 0x1f & 0xfU)) >> 4;
    if (7 < local_24) {
      local_24 = 7;
    }
    if (0xffff < (local_24 * local_c * 3) / 2) {
      local_24 = (int)(0x1fffe / (longlong)(local_c * 3));
    }
    local_40 = (short *)((int)puVar5 + 0x16);
    local_34 = 0;
    local_14 = 0;
    pbVar12 = (byte *)(local_40 + local_24);
    pbVar12[-0xffffffff00000002] = 0;
    pbVar12[-0xffffffff00000001] = 0;
    pbVar6 = &local_28->field_0x0 + param_3 + ((uVar3 - local_1c) + -1) * uVar13;
    if (0 < iVar10) {
      do {
        iVar16 = 0;
        if (local_14 != 0) {
          uVar7 = local_14 & 0x8000000f;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
          }
          if ((uVar7 == 0) && (local_34 < local_24)) {
            local_34 = local_34 + 1;
            *local_40 = (short)pbVar12 - ((short)puVar5 + 0x16);
            local_40 = local_40 + 1;
          }
        }
        do {
          iVar8 = 0;
          local_18 = pbVar6;
          if (*pbVar6 == param_6) {
            do {
              if (local_c <= iVar16) break;
              pbVar15 = pbVar6 + 1;
              iVar8 = iVar8 + 1;
              pbVar6 = pbVar6 + 1;
              iVar16 = iVar16 + 1;
            } while (*pbVar15 == param_6);
            if (0x7f < iVar8) {
              uVar7 = (iVar8 - 1U) / 0x7f;
              pbVar15 = pbVar12;
              for (uVar11 = (iVar8 - 1U) / 0x1fc; uVar11 != 0; uVar11 = uVar11 - 1) {
                pbVar15[0] = 0x7f;
                pbVar15[1] = 0x7f;
                pbVar15[2] = 0x7f;
                pbVar15[3] = 0x7f;
                pbVar15 = pbVar15 + 4;
              }
              for (uVar11 = uVar7 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                *pbVar15 = 0x7f;
                pbVar15 = pbVar15 + 1;
              }
              pbVar12 = pbVar12 + uVar7;
              iVar8 = iVar8 + uVar7 * -0x7f;
            }
            local_18 = pbVar6;
            if (0 < iVar8) {
              *pbVar12 = (byte)iVar8;
              pbVar12 = pbVar12 + 1;
            }
          }
          pbVar6 = local_18;
          if (local_c <= iVar16) break;
          bVar4 = false;
          param_3 = 0;
          local_10 = (uint)param_6;
          do {
            if ((*pbVar6 == param_6) ||
               ((uVar7 = (uint)*pbVar6, param_4 <= (int)uVar7 && ((int)uVar7 < param_4 + param_5))))
            break;
            if ((uVar7 == local_10) && ((iVar16 < local_c + -1 && (pbVar6[1] == local_10)))) {
              bVar4 = true;
              break;
            }
            param_3 = param_3 + 1;
            pbVar6 = pbVar6 + 1;
            iVar16 = iVar16 + 1;
            local_10 = uVar7;
          } while (iVar16 < local_c);
          if (param_3 == 0) {
            param_3 = 1;
            if (param_5 == 1) {
              bVar1 = *pbVar6;
              pbVar6 = pbVar6 + 1;
              iVar16 = iVar16 + 1;
              if (iVar16 < local_c) {
                do {
                  if (*pbVar6 != bVar1) break;
                  param_3 = param_3 + 1;
                  pbVar6 = pbVar6 + 1;
                  iVar16 = iVar16 + 1;
                } while (iVar16 < local_c);
                if (0x3f < (int)param_3) {
                  uVar7 = (param_3 - 1) / 0x3f;
                  param_3 = param_3 + uVar7 * -0x3f;
                  do {
                    *pbVar12 = 0xff;
                    pbVar12[1] = bVar1;
                    pbVar12 = pbVar12 + 2;
                    uVar7 = uVar7 - 1;
                  } while (uVar7 != 0);
                }
                if ((int)param_3 < 1) goto cf_continue_loop_007525E9;
              }
              *pbVar12 = (byte)param_3 | 0xc0;
              pbVar12[1] = bVar1;
              pbVar12 = pbVar12 + 2;
            }
            else {
              param_3 = 0;
              pbVar15 = pbVar6;
              if (local_c <= iVar16) break;
              do {
                if (((int)(uint)*pbVar15 < param_4) || (param_4 + param_5 <= (int)(uint)*pbVar15))
                break;
                param_3 = param_3 + 1;
                pbVar15 = pbVar15 + 1;
                iVar16 = iVar16 + 1;
              } while (iVar16 < local_c);
              local_18 = pbVar6;
              if (0x3f < (int)param_3) {
                uVar7 = (param_3 - 1) / 0x3f;
                param_3 = param_3 + uVar7 * -0x3f;
                do {
                  *pbVar12 = 0xbf;
                  pbVar6 = local_18;
                  pbVar17 = pbVar12 + 1;
                  memmove(pbVar17, pbVar6, 0x3e); /* compiler REP MOVS byte copy */
                  pbVar17 = pbVar17 + 0x3c;
                  pbVar6 = pbVar6 + 0x3c;
                  iVar8 = 0;
                  pbVar12 = pbVar12 + 0x40;
                  local_18 = local_18 + 0x3f;
                  uVar7 = uVar7 - 1;
                  pbVar17[2] = pbVar6[2];
                } while (uVar7 != 0);
              }
              pbVar6 = pbVar15;
              if (0 < (int)param_3) {
                *pbVar12 = (byte)param_3 | 0x80;
                pbVar15 = pbVar12 + 1;
                for (uVar7 = param_3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined4 *)pbVar15 = *(undefined4 *)local_18;
                  local_18 = local_18 + 4;
                  pbVar15 = pbVar15 + 4;
                }
                pbVar12 = pbVar12 + 1 + param_3;
                for (uVar7 = param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *pbVar15 = *local_18;
                  local_18 = local_18 + 1;
                  pbVar15 = pbVar15 + 1;
                }
              }
            }
          }
          else {
            if (bVar4) {
              param_3 = param_3 - 1;
            }
            if (0x3f < (int)param_3) {
              uVar7 = (param_3 - 1) / 0x3f;
              param_3 = param_3 + uVar7 * -0x3f;
              do {
                *pbVar12 = 0xbf;
                pbVar15 = local_18;
                pbVar17 = pbVar12 + 1;
                memmove(pbVar17, pbVar15, 0x3e); /* compiler REP MOVS byte copy */
                pbVar17 = pbVar17 + 0x3c;
                pbVar15 = pbVar15 + 0x3c;
                pbVar12 = pbVar12 + 0x40;
                local_18 = local_18 + 0x3f;
                uVar7 = uVar7 - 1;
                pbVar17[2] = pbVar15[2];
              } while (uVar7 != 0);
            }
            if (0 < (int)param_3) {
              *pbVar12 = (byte)param_3 | 0x80;
              pbVar15 = pbVar12 + 1;
              for (uVar7 = param_3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined4 *)pbVar15 = *(undefined4 *)local_18;
                local_18 = local_18 + 4;
                pbVar15 = pbVar15 + 4;
              }
              pbVar12 = pbVar12 + 1 + param_3;
              for (uVar7 = param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *pbVar15 = *local_18;
                local_18 = local_18 + 1;
                pbVar15 = pbVar15 + 1;
              }
            }
            if (bVar4) {
              iVar16 = iVar16 + 2;
              iVar8 = 3;
              pbVar6 = pbVar6 + 2;
              if (iVar16 < local_c) {
                do {
                  if (*pbVar6 != local_10) break;
                  iVar8 = iVar8 + 1;
                  pbVar6 = pbVar6 + 1;
                  iVar16 = iVar16 + 1;
                } while (iVar16 < local_c);
                if (0x3f < iVar8) {
                  uVar7 = (iVar8 - 1U) / 0x3f;
                  iVar8 = iVar8 + uVar7 * -0x3f;
                  do {
                    *pbVar12 = 0xff;
                    pbVar12[1] = (byte)local_10;
                    pbVar12 = pbVar12 + 2;
                    uVar7 = uVar7 - 1;
                  } while (uVar7 != 0);
                }
                if (iVar8 < 1) goto cf_continue_loop_007525E9;
              }
              *pbVar12 = (byte)iVar8 | 0xc0;
              pbVar12[1] = (byte)local_10;
              pbVar12 = pbVar12 + 2;
            }
          }
cf_continue_loop_007525E9:
        } while (iVar16 < local_c);
        pbVar6 = pbVar6 + -(local_c + uVar13);
        local_14 = local_14 + 1;
      } while ((int)local_14 < iVar10);
    }
  }
  puVar5[1] = (uint)pAVar2;
  puVar5[2] = uVar3;
  STField<byte>(puVar5,0xd) = (param_5 == 1) + 1U | (char)local_24 << 2;
  STField<undefined2>(puVar5,0x12) = (undefined2)local_c;
  *puVar5 = (int)pbVar12 - (int)puVar5;
  ((undefined1 *)puVar5)[3] = 0x80;
  STField<undefined2>(puVar5,0xe) = STPiece<0,2>(local_28);
  *(short *)(puVar5 + 4) = (short)local_1c;
  *(short *)(puVar5 + 5) = (short)local_30 - (short)local_1c;
  piVar9 = st::fn_006BFB50((int *)puVar5,(int)pbVar12 - (int)puVar5);
  *param_1 = (int)piVar9;
  if (piVar9 == nullptr) {
    *param_1 = (int)puVar5;
  }
  return 0;
}

// 007527A0 FUN_007527a0
#line 4 "decomp/ST.exe/functions/007527A0/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow */

undefined4 *
st::fn_007527A0(RecoveredSourceFamily_dibcopy *param_1,int param_2,int param_3,char param_4,
            uint *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  byte *local_1c;
  int local_c;

  if (param_2 == 0) {
    param_2 = st::fn_006B4FA0((int *)param_1);
  }
  iVar1 = param_1->field_0004;
  iVar2 = param_1->field_0008;
  iVar15 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  uVar13 = (uint)param_1->field_000E * iVar1 + 0x1f >> 3 & 0x1ffffffc;
  *param_5 = iVar15 * iVar2;
  puVar3 = st::pointer_boundary_cast<undefined4 *>(st::fn_006AAC10(iVar15 * iVar2));
  if (puVar3 == nullptr) {
    return nullptr;
  }
  iVar10 = param_2 + (iVar2 + -1) * uVar13;
  if (0 < iVar2) {
    local_c = 0;
    iVar11 = iVar10;
    local_1c = (byte *)iVar2;
    do {
      iVar8 = 0;
      if (0 < iVar1) {
        do {
          if (*(char *)(iVar8 + iVar11) != param_4) {
            if (iVar8 < iVar1) {
              uVar5 = iVar1 - 1;
              for (uVar4 = uVar5; (iVar8 < (int)uVar4 && (*(char *)(uVar4 + iVar11) == param_4));
                  uVar4 = uVar4 - 1) {
              }
              if (-1 < iVar8) {
                if (iVar8 < param_3) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = iVar8 - param_3;
                }
                if ((int)uVar4 < iVar1 - param_3) {
                  uVar5 = uVar4 + param_3;
                }
                pbVar7 = (byte *)(((int)uVar9 >> 3) + local_c + (int)puVar3);
                iVar14 = (uVar5 & 7) + 1;
                iVar8 = ((uVar5 - (-(uVar9 & 7) + 8)) - uVar9) + 1;
                bVar12 = ~(&DAT_007f2bb0)[-iVar14];
                if (iVar8 < 1) {
                  bVar12 = bVar12 & (&DAT_007f2bb0)[-(uVar9 & 7)];
                }
                else {
                  iVar8 = iVar8 - iVar14;
                  *pbVar7 = (&DAT_007f2bb0)[-(uVar9 & 7)];
                  pbVar7 = pbVar7 + 1;
                  if (0 < iVar8) {
                    uVar5 = iVar8 + 7;
                    uVar4 = uVar5 >> 3;
                    pbVar16 = pbVar7;
                    for (uVar5 = uVar5 >> 5; uVar5 != 0; uVar5 = uVar5 - 1) {
                      pbVar16[0] = 0xff;
                      pbVar16[1] = 0xff;
                      pbVar16[2] = 0xff;
                      pbVar16[3] = 0xff;
                      pbVar16 = pbVar16 + 4;
                    }
                    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                      *pbVar16 = 0xff;
                      pbVar16 = pbVar16 + 1;
                    }
                    pbVar7 = pbVar7 + uVar4;
                  }
                }
                *pbVar7 = bVar12;
              }
            }
            break;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar1);
      }
      iVar11 = iVar11 - uVar13;
      local_c = local_c + iVar15;
      local_1c = (byte *)((int)local_1c + -1);
    } while (local_1c != nullptr);
  }
  local_c = 0;
  if (0 < iVar1) {
    do {
      auto param_5_after_write = (uint *)(iVar10 + local_c); /* compiler stack-slot lifetime split */
      iVar8 = local_c >> 3;
      local_1c = (byte *)(iVar8 + (int)puVar3);
      iVar11 = 0;
      if (0 < iVar2) {
        do {
          STPiece<3,1>(param_1) = (byte)(0x80 >> ((byte)local_c & 7));
          if (((char)*param_5_after_write != param_4) || ((*local_1c & STPiece<3,1>(param_1)) != 0)) {
            if (iVar11 < iVar2) {
              pcVar6 = (char *)(param_2 + local_c);
              iVar14 = iVar2 + -1;
              for (pbVar7 = (byte *)(iVar14 * iVar15 + iVar8 + (int)puVar3);
                  ((iVar11 < iVar14 && (*pcVar6 == param_4)) && ((STPiece<3,1>(param_1) & *pbVar7) == 0));
                  pbVar7 = pbVar7 + -iVar15) {
                pcVar6 = pcVar6 + uVar13;
                iVar14 = iVar14 + -1;
              }
              if (-1 < iVar11) {
                if (iVar11 < param_3) {
                  iVar11 = 0;
                }
                else {
                  iVar11 = iVar11 - param_3;
                }
                if (iVar14 < iVar2 - param_3) {
                  iVar14 = iVar14 + param_3;
                }
                else {
                  iVar14 = iVar2 + -1;
                }
                pbVar7 = (byte *)(iVar11 * iVar15 + iVar8 + (int)puVar3);
                if (iVar11 <= iVar14) {
                  iVar11 = (iVar14 - iVar11) + 1;
                  do {
                    *pbVar7 = *pbVar7 | STPiece<3,1>(param_1);
                    pbVar7 = pbVar7 + iVar15;
                    iVar11 = iVar11 + -1;
                  } while (iVar11 != 0);
                }
              }
            }
            break;
          }
          param_5_after_write = (uint *)((int)param_5_after_write - uVar13);
          local_1c = local_1c + iVar15;
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar2);
      }
      local_c = local_c + 1;
    } while (local_c < iVar1);
  }
  return puVar3;
}

// 00752A60 FUN_00752a60
#line 1 "decomp/ST.exe/functions/00752A60/decomp.c"

byte * st::fn_00752A60(int param_1,int param_2,int param_3,int param_4,int param_5,char param_6,
                   uint *param_7)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;

  iVar10 = (int)(param_3 + 7 + (param_3 + 7 >> 0x1f & 7U)) >> 3;
  *param_7 = iVar10 * param_4;
  pbVar2 = st::pointer_boundary_cast<byte *>(st::fn_006AAC10(iVar10 * param_4));
  if (pbVar2 == nullptr) {
    return nullptr;
  }
  if (param_5 < 1) {
    if (0 < param_4) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = param_4;
      pbVar8 = pbVar2;
      do {
        iVar3 = 0;
        bVar6 = 0x80;
        pbVar4 = pbVar8;
        if (0 < param_3) {
          do {
            if (*(char *)(iVar3 + param_1) != param_6) {
              *pbVar4 = *pbVar4 | bVar6;
            }
            bVar6 = bVar6 >> 1;
            if (bVar6 == 0) {
              bVar6 = 0x80;
              pbVar4 = pbVar4 + 1;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < param_3);
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + param_2;
        pbVar8 = pbVar8 + iVar10;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      return pbVar2;
    }
  }
  else {
    local_1c = 0;
    if (0 < param_4) {
      do {
        local_10 = 0;
LAB_00752b1b:
        iVar3 = local_10;
        if (local_10 < param_3) {
          while (*(char *)(iVar3 + param_1) == param_6) {
            iVar3 = iVar3 + 1;
            if (param_3 <= iVar3) goto LAB_00752cba;
          }
          local_10 = iVar3;
          if (iVar3 < param_3) {
LAB_00752b4c:
            do {
              if (*(char *)(local_10 + param_1) != param_6) {
                local_10 = local_10 + 1;
                if (local_10 < param_3) goto LAB_00752b4c;
              }
              iVar5 = 0;
              if (param_3 <= local_10) goto LAB_00752b83;
              while ((iVar5 <= param_5 * 2 && (*(char *)(local_10 + param_1) == param_6))) {
                iVar5 = iVar5 + 1;
                local_10 = local_10 + 1;
                if (param_3 <= local_10) goto LAB_00752b83;
              }
              if ((param_3 <= local_10) || (param_5 * 2 < iVar5)) goto LAB_00752b83;
            } while( true );
          }
        }
LAB_00752cba:
        param_1 = param_1 + param_2;
        local_1c = local_1c + 1;
        if (param_4 <= local_1c) {
          return pbVar2;
        }
      } while( true );
    }
  }
  return pbVar2;
LAB_00752b83:
  if (param_5 < iVar5) {
    local_10 = local_10 + (param_5 - iVar5);
  }
  if (-1 < iVar3) {
    if (iVar3 < param_5) {
      uVar11 = 0;
    }
    else {
      uVar11 = iVar3 - param_5;
    }
    if (local_1c < param_5) {
      local_c = 0;
    }
    else {
      local_c = local_1c - param_5;
    }
    iVar3 = local_1c + param_5;
    if (param_4 <= iVar3) {
      iVar3 = param_4 + -1;
    }
    bVar6 = (&DAT_007f2bbc)[-(uVar11 & 7)];
    iVar9 = (local_10 - 1U & 7) + 1;
    bVar1 = (&DAT_007f2bbc)[-iVar9];
    iVar5 = (((local_10 - 1U) - (-(uVar11 & 7) + 8)) - uVar11) + 1;
    if (iVar5 < 1) {
      pbVar8 = pbVar2 + ((int)uVar11 >> 3) + local_c * iVar10;
      if (local_c <= iVar3) {
        iVar3 = (iVar3 - local_c) + 1;
        do {
          *pbVar8 = *pbVar8 | ~bVar1 & bVar6;
          pbVar8 = pbVar8 + iVar10;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    else if (local_c <= iVar3) {
      pbVar8 = pbVar2 + ((int)uVar11 >> 3) + 1 + local_c * iVar10;
      local_18 = (iVar3 - local_c) + 1;
      do {
        pbVar8[-1] = pbVar8[-1] | bVar6;
        iVar5 = iVar5 - iVar9;
        pbVar4 = pbVar8;
        if (0 < iVar5) {
          uVar7 = iVar5 + 7U >> 3;
          for (uVar11 = iVar5 + 7U >> 5; uVar11 != 0; uVar11 = uVar11 - 1) {
            pbVar4[0] = 0xff;
            pbVar4[1] = 0xff;
            pbVar4[2] = 0xff;
            pbVar4[3] = 0xff;
            pbVar4 = pbVar4 + 4;
          }
          for (uVar11 = uVar7 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pbVar4 = 0xff;
            pbVar4 = pbVar4 + 1;
          }
          pbVar4 = pbVar8 + uVar7;
          iVar5 = iVar5 + uVar7 * -8;
        }
        *pbVar4 = *pbVar4 | ~bVar1;
        pbVar8 = pbVar8 + iVar10;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
  }
  goto LAB_00752b1b;
}

// 00752CF0 FUN_00752cf0
#line 1 "decomp/ST.exe/functions/00752CF0/decomp.c"

/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow */

void st::fn_00752CF0(RecoveredSourceFamily_dibcopy *param_1,int param_2,int param_3,char param_4,
                 uint *param_5)

{
  uint uVar1;

  if (param_2 == 0) {
    param_2 = st::fn_006B4FA0((int *)param_1);
  }
  uVar1 = (uint)param_1->field_000E * param_1->field_0004 + 0x1f >> 3 & 0x1ffffffc;
  st::fn_00752A60((param_1->field_0008 + -1) * uVar1 + param_2,-uVar1,param_1->field_0004,
               param_1->field_0008,param_3,param_4,param_5);
  return;
}

// 00752E10 FUN_00752e10
#line 4 "decomp/ST.exe/functions/00752E10/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00752E10 returns return of Library::DKW::DDX::FUN_006c53b0 @ 00752E33 */

int st::fn_00752E10(int param_1)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 *in_stack_00000020;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar1 = st::fn_006C53B0
                    (param_1,in_stack_00000020[1],in_stack_00000020[2],in_stack_00000020[3],
                     in_stack_00000020[4],*in_stack_00000020);
  return iVar1;
}

// 00753020 FUN_00753020
#line 4 "decomp/ST.exe/functions/00753020/decomp.c"
void st::fn_00753020(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;

  pcVar3 = (char *)(param_1 + param_2);
  uVar2 = 0xffffffff;
  pcVar4 = pcVar3;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  st::fn_0072DA70
            ((undefined4 *)pcVar3,(AnonPointee_TLOBaseTy_0607 *)(pcVar3 + 1),~uVar2 - 1);
  return;
}

// 00753050 FUN_00753050
#line 4 "decomp/ST.exe/functions/00753050/decomp.c"
void st::fn_00753050(int param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  AnonPointee_TLOBaseTy_0607 *pAVar3;
  AnonPointee_TLOBaseTy_0607 *pAVar4;

  if (param_1 != 0) {
    pAVar3 = (AnonPointee_TLOBaseTy_0607 *)(param_1 + param_2);
    uVar2 = 0xffffffff;
    pAVar4 = pAVar3;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      puVar1 = &pAVar4->field_0000;
      pAVar4 = (AnonPointee_TLOBaseTy_0607 *)((int)&pAVar4->field_0000 + 1);
    } while (*(char *)puVar1 != '\0');
    st::fn_0072DA70((undefined4 *)((int)&pAVar3->field_0000 + 1),pAVar3,~uVar2);
    *(char *)&pAVar3->field_0000 = param_3;
  }
  return;
}

// 00753090 FUN_00753090
#line 1 "decomp/ST.exe/functions/00753090/decomp.c"

/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (6), none consume AL/AX, and every RET path defines full EAX; sites=00723420 @ 0072385E
   -> TEST TEST EAX,EAX | 00723420 @ 00723948 -> TEST TEST EAX,EAX | 0072B780 @ 0072B9FC -> TEST
   TEST EAX,EAX | 0072B780 @ 0072BAA6 -> TEST TEST EAX,EAX | 0072B780 @ 0072BBC2 -> TEST TEST
   EAX,EAX | 0072B780 @ 0072BC90 -> TEST TEST EAX,EAX */

int st::fn_00753090(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                ,int param_8)

{
  int iVar1;

  iVar1 = param_1 + param_3;
  if (param_1 < param_5) {
    param_1 = param_5;
  }
  if (param_7 + param_5 < iVar1) {
    iVar1 = param_7 + param_5;
  }
  if (iVar1 <= param_1) {
    return 0;
  }
  iVar1 = param_4 + param_2;
  if (param_2 < param_6) {
    param_2 = param_6;
  }
  if (param_8 + param_6 < iVar1) {
    iVar1 = param_8 + param_6;
  }
  return (uint)(param_2 < iVar1);
}

// 007530F0 FUN_007530f0
#line 4 "decomp/ST.exe/functions/007530F0/decomp.c"
undefined4 * st::fn_007530F0(undefined4 *param_1,LPCSTR param_2,DWORD param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  byte *puVar3;
  byte *puVar4;

  if (param_3 < 0x28) {
    param_3 = 0x28;
  }
  puVar1 = st::fn_006D4220(param_1,param_2,param_3,param_4);
  if (puVar1 == nullptr) {
    return nullptr;
  }
  puVar3 = (byte *)puVar1[0xd];
  memset(puVar3, 0, 0x28); /* compiler bulk-zero initialization */
  iVar2 = 0;
  *puVar3 = 0x4d464b44;
  *(undefined2 *)(puVar3 + 1) = 0x101;
  puVar3[3] = 0x20;
  puVar3[2] = 0x28;
  *(undefined4 *)(puVar1[0xd] + 0x20) = 0x3fffffe0;
  puVar4 = (byte *)(puVar1 + 4);
  memmove(puVar4, puVar3, 0x20); /* compiler REP MOVS byte copy */
  return puVar1;
}

// 00753260 FUN_00753260
#line 4 "decomp/ST.exe/functions/00753260/decomp.c"
void st::fn_00753260(undefined4 *param_1)

{
  byte *puVar2;
  byte *puVar3;

  if (param_1 != nullptr) {
    if ((param_1[2] & 0x800000) != 0) {
      param_1[7] = ((undefined4 *)param_1[0xd])[3];
      puVar2 = (byte *)(param_1 + 4);
      puVar3 = (byte *)param_1[0xd];
      memmove(puVar3, puVar2, 0x20); /* compiler REP MOVS byte copy */
    }
    st::fn_006D46A0(param_1,0);
  }
  return;
}

// 007532A0 FUN_007532a0
#line 4 "decomp/ST.exe/functions/007532A0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return */

void st::fn_007532A0(undefined4 *param_1)

{
  if (param_1 != nullptr) {
    st::fn_00754EC0((int)param_1);
    if (param_1[2] != 0) {
      st::fn_006B9890((int *)(param_1[2] + 0x4c));
    }
    st::fn_006D46A0((undefined4 *)param_1[2],0);
    st::fn_006A5E90((short *)param_1[2]);
    st::fn_006A5E90((short *)param_1[6]);
    st::fn_006A5E90((short *)param_1[7]);
    st::fn_006A5E90((short *)param_1);
  }
  return;
}

// 007535F0 FUN_007535f0
#line 4 "decomp/ST.exe/functions/007535F0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 007535F0 -> 0072F110 @ 007536C3 | 007535F0 -> 0072F110 @ 00753784
   [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00750940 @ 0075094E
   -> NEG NEG EAX */

int st::fn_007535F0(char *_Drive)

{
  char cVar1;
  int local_EAX_58;
  int iVar2;
  int local_EAX_251;
  int local_EAX_275;
  DWORD DVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  byte local_408 [256];
  byte local_308 [256];
  byte local_208 [256];
  char local_108 [260];
  char *pcVar7_mg0;

  pcVar7_mg0 = _Drive;
  st::fn_0072E730((byte *)_Drive,(byte *)&_Drive,local_408,local_308,local_208);
  local_EAX_58 = st::fn_0072E620((char *)local_208,&st_global_007C7078);
  if ((local_EAX_58 == 0) ||
     (iVar2 = st::fn_0072E620((char *)local_208,&st_global_007C7080), iVar2 == 0)) {
    st::fn_0072F110
              (local_108,(char *)&_Drive,(char *)local_408,(char *)local_308,&st_global_007C7078);
  }
  else {
    uVar3 = 0xffffffff;
    pcVar6 = pcVar7_mg0;
    do {
      pcVar8 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar8 + -uVar3;
    pcVar8 = local_108;
    memmove(pcVar8, pcVar6, uVar3); /* compiler REP MOVS byte copy */
    uVar4 = 0;
    uVar3 = 0xffffffff;
    pcVar6 = &st_global_007C7078;
    do {
      pcVar8 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar6 = local_108;
    do {
      pcVar7 = pcVar6;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar8 + -uVar3;
    pcVar8 = pcVar7 + -1;
    memmove(pcVar8, pcVar6, uVar3); /* compiler REP MOVS byte copy */
  }
  iVar5 = st::fn_00754F40(local_108);
  if (iVar5 == 0) {
    return 0;
  }
  local_EAX_251 = st::fn_0072E620((char *)local_208,&st_global_007C7078);
  if ((local_EAX_251 == 0) ||
     (local_EAX_275 = st::fn_0072E620((char *)local_208,&st_global_007C7080),
     local_EAX_275 == 0)) {
    st::fn_0072F110
              (local_108,(char *)&_Drive,(char *)local_408,(char *)local_308,&st_global_007C7080);
  }
  else {
    uVar3 = 0xffffffff;
    do {
      pcVar6 = pcVar7_mg0;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar7_mg0 + 1;
      cVar1 = *pcVar7_mg0;
      pcVar7_mg0 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar6 + -uVar3;
    pcVar8 = local_108;
    memmove(pcVar8, pcVar6, uVar3); /* compiler REP MOVS byte copy */
    uVar4 = 0;
    uVar3 = 0xffffffff;
    pcVar6 = &st_global_007C7080;
    do {
      pcVar8 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar6 = local_108;
    do {
      pcVar7 = pcVar6;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar8 + -uVar3;
    pcVar8 = pcVar7 + -1;
    memmove(pcVar8, pcVar6, uVar3); /* compiler REP MOVS byte copy */
  }
  /* ST_CALLSITE[00753793]: CALL dword ptr [0x0085bcd0] */
  DVar2 = st::external_00000069(local_108);
  return (uint)(DVar2 != 0xffffffff);
}

// 00753AE0 FUN_00753ae0
#line 4 "decomp/ST.exe/functions/00753AE0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00753AE0 returns return of Library::DKW::DB::FUN_00753920 @ 00753AF5 */

int * st::fn_00753AE0(LPCSTR param_1,undefined4 *param_2)

{
  int *piVar1;

  piVar1 = st::fn_00753920(param_1,param_2,1);
  return piVar1;
}

// 00753B00 FUN_00753b00
#line 4 "decomp/ST.exe/functions/00753B00/decomp.c"
void st::fn_00753B00(LPCSTR param_1,undefined4 *param_2,undefined2 param_3)

{
  int iVar1;

  iVar1 = st::fn_00754F40(param_1);
  if (iVar1 != 0) {
    st::fn_00753920(param_1,param_2,3);
    return;
  }
  st::fn_007537C0(param_1,param_2,param_3);
  return;
}

// 00753B40 FUN_00753b40
#line 1 "decomp/ST.exe/functions/00753B40/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00755830 -> 00753B40 @ 00755856 */

int st::fn_00753B40(AnonShape_00753C80_4C8E695D *param_1)

{
  AnonNested_AnonShape_00753C80_4C8E695D_0008_9237F694 *pAVar1;
  int iVar2;
  AnonShape_00753C80_4C8E695D *pAVar3;
  int iVar4;

  pAVar3 = param_1;
  pAVar1 = param_1->field_0008;
  iVar2 = pAVar1->field_001C;
  if (iVar2 == -1) {
    iVar4 = *(int *)&pAVar1->field_0x18;
  }
  else {
    iVar4 = st::fn_006D4A40((int)pAVar1,iVar2,(undefined4 *)&param_1);
    if (iVar4 == 0) {
      pAVar3->field_0008->field_001C = st::machine_word_boundary_cast<undefined4>(param_1);
      return iVar2;
    }
  }
  return iVar4;
}

// 00753B80 FUN_00753b80
#line 4 "decomp/ST.exe/functions/00753B80/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=20, ignored=1, unknown=0 */

undefined4 * st::fn_00753B80(AnonShape_00750F20_F8C16F98 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;

  if (param_3 == 0) {
    param_2 = param_1->field_000C->field_0024;
  }
  param_1->field_0010 = param_2;
  puVar1 = (undefined4 *)(param_1->field_0008->field_0034 + param_1->field_0010);
  (&param_1->field_000C->field_0040)[param_3 * 2] = *puVar1;
  return puVar1;
}

// 00753C80 FUN_00753c80
#line 4 "decomp/ST.exe/functions/00753C80/decomp.c"
int st::fn_00753C80(AnonShape_00753C80_4C8E695D *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar5 = -1;
  iVar2 = param_1->field_0010;
  iVar3 = param_1->field_0008->field_0034;
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar5 = iVar4;
      sVar1 = param_1->field_000C->field_0034;
      if (sVar1 == 0) {
        /* ST_CALLSITE[00753CBB]: CALL dword ptr [EAX + 0x8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar4 = (**(code **)&param_1->field_000C->field_0x8)(iVar5 + 0x18 + iVar3 + iVar2);
      }
      else {
        iVar4 = (int)sVar1;
      }
      iVar4 = iVar5 + 8 + iVar4;
    } while (iVar4 < param_2);
  }
  *(int *)(&param_1->field_000C[1].field_0xe + (int)param_1->field_000C->field_001C * 8) = iVar5;
  return iVar5;
}

// 00753CE0 FUN_00753ce0
#line 1 "decomp/ST.exe/functions/00753CE0/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void st::fn_00753CE0(AnonShape_00753CE0_1943F9C2 *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;

  if ((param_2 != 0) && (param_2 < (uint)param_1->field_0018)) {
    iVar2 = param_1->field_0034;
    puVar6 = (uint *)(iVar2 + -4 + param_2);
    uVar7 = *(uint *)(iVar2 + -4 + param_2) & 0xfffffffe;
    puVar1 = (uint *)(uVar7 + (int)puVar6);
    uVar3 = *(uint *)(iVar2 + 0xc);
    puVar4 = (uint *)(iVar2 + 8);
    while ((puVar5 = (uint *)(uVar3 + iVar2), puVar5 != nullptr && (puVar5 < puVar1))) {
      puVar4 = puVar5;
      uVar3 = puVar5[1];
    }
    if ((puVar4 == (uint *)(iVar2 + 8)) || ((uint *)(*puVar4 + (int)puVar4) != puVar6)) {
      puVar4[1] = (int)puVar6 - iVar2;
      puVar6[1] = (int)puVar5 - param_1->field_0034;
    }
    else {
      uVar7 = uVar7 + *puVar4;
      puVar6 = puVar4;
    }
    if ((puVar5 != nullptr) && (puVar5 == puVar1)) {
      uVar7 = uVar7 + *puVar5;
      puVar6[1] = puVar5[1];
      if ((int)puVar5 + (8 - param_1->field_0034) == param_1->field_0018) {
        param_1->field_0018 = (int)puVar6 + (8 - param_1->field_0034);
      }
    }
    *puVar6 = uVar7;
  }
  return;
}

// 00753F10 FUN_00753f10
#line 4 "decomp/ST.exe/functions/00753F10/decomp.c"
int __cdecl
st::fn_00753F10(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  alignas(4) byte st_stack_frame[40];

  AnonShape_00754185_34BF31BE *context;
  int _Value;
  undefined1 *puVar1;

  puVar1 = (st_stack_frame + 32);
  context = (AnonShape_00754185_34BF31BE *)st::fn_00402B21(0xc1d2);
  if (context == nullptr) {
    _Value = -2;
  }
  else {
    *(undefined4 *)context = param_1;
    *(undefined4 *)&context->field_0xc = param_4;
    *(int *)&context->field_0x4 = param_2;
    context->field_0018 = param_2;
    *(undefined4 *)&context->field_0x10 = param_5;
    *(undefined4 *)&context->field_0x1c = param_5;
    *(int *)&context->field_0x8 = param_3;
    *(int *)&context->field_0x20 = param_3 + 1;
    *(undefined4 *)&context->field_0x14 = param_6;
    *(undefined4 *)&context->field_0x24 = param_6;
    *(undefined4 *)&context->field_0x3c = 0;
    st::fn_00754185(context);
    _Value = *(int *)&context->field_0x3c;
    st::fn_00405D8A(*(int **)(puVar1 + -4));
  }
  if ((_Value < 0) && (g_currentExceptionFrame != nullptr)) {
                    /* WARNING: Subroutine does not return */
    st::fn_007338AC(g_currentExceptionFrame->jumpBuffer,_Value);
  }
  return _Value;
}

// 00753FA7 FUN_00753fa7
#line 4 "decomp/ST.exe/functions/00753FA7/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_00753FA7(void)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar1 = *(int *)(unaff_EBP + 0x14) - *(int *)(unaff_EBP + 0x24);
  *(int *)(unaff_EBP + 0x3c) = *(int *)(unaff_EBP + 0x3c) + iVar1;
  *(undefined4 *)(unaff_EBP + 0x1c) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + 0x14);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    /* ST_CALLSITE[00753FC5]: CALL dword ptr [EBP + 0xc] */
    /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(unaff_EBP + 0xc))(iVar1);
  }
  return;
}

// 00753FD0 FUN_00753fd0
#line 4 "decomp/ST.exe/functions/00753FD0/decomp.c"
/* WARNING: Unknown calling convention */
/* [STAbiConsistencyApplier] ebp_context_register target=function:-1: prototype=int
   FUN_00753fd0(void * context) previous_return_type=/undefined8 Evidence: incoming EBP is
   dereferenced before any EBP definition; all current explicit parameters are generic ECX/EDX
   words; ECX/EDX are overwritten or preserved without semantic incoming use; return=/int;
   caller_return_uses=2, ignored=0 */

int st::fn_00753FD0(AnonShape_00753FD0_4E1BB8DD *context)

{
  int iVar1;

  context->field_0018 = context->field_0004;
  iVar1 = 0;
  if (((context->field_003F & 0x80) == 0) && (*(int *)context != 0)) {
    /* ST_CALLSITE[00753FE9]: CALL dword ptr [EBP] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)context)();
  }
  context->field_0020 = iVar1 + 1;
  return iVar1;
}

// 00753FF7 FUN_00753ff7
#line 4 "decomp/ST.exe/functions/00753FF7/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_00753FF7(void)

{
  undefined1 *puVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;

  bVar6 = false;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if ((((byte *)unaff_EBP)[0x3f] & 0x80) == 0) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar2 = *(int *)(unaff_EBP + 0x24);
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    puVar3 = (undefined1 *)(unaff_EBP + 0x4e);
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    puVar4 = *(undefined1 **)(unaff_EBP + 0x1c);
    do {
      *(int *)(unaff_EBP + 0x40) = *(int *)(unaff_EBP + 0x40) + 1;
      puVar5 = puVar4 + 1;
      puVar1 = puVar3 + 1;
      *puVar4 = *puVar3;
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        *(undefined4 *)(unaff_EBP + 0x24) = 0;
        st::fn_00753FA7();
        if (bVar6) {
          *(undefined4 *)(unaff_EBP + 0x3c) = 0xffffffcd;
        }
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        puVar5 = *(undefined1 **)(unaff_EBP + 0x1c);
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        iVar2 = *(int *)(unaff_EBP + 0x24);
      }
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      bVar6 = puVar1 < *(undefined1 **)(unaff_EBP + 0x48);
      puVar3 = puVar1;
      puVar4 = puVar5;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    } while (puVar1 != *(undefined1 **)(unaff_EBP + 0x48));
    *(undefined1 **)(unaff_EBP + 0x1c) = puVar5;
    *(int *)(unaff_EBP + 0x24) = iVar2;
  }
  *(undefined2 *)(unaff_EBP + 0x4c) = 1;
  *(undefined2 *)(unaff_EBP + 0x4e) = 0;
  *(int *)(unaff_EBP + 0x48) = unaff_EBP + 0x50;
  return;
}

// 00754047 FUN_00754047
#line 1 "decomp/ST.exe/functions/00754047/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return */

void st::fn_00754047(void)

{
  short *psVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  char in_AL;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if (in_AL != '\0') {
    *(ushort *)(unaff_EBP + 0x4e) = *(ushort *)(unaff_EBP + 0x4e) | *(ushort *)(unaff_EBP + 0x4c);
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  psVar1 = (short *)(unaff_EBP + 0x4c);
  *psVar1 = *psVar1 << 1;
  if (*psVar1 == 0) {
    st::fn_00753FF7();
  }
  return;
}

// 0075405F FUN_0075405f
#line 4 "decomp/ST.exe/functions/0075405F/decomp.c"
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_0075405F(void)

{
  undefined1 *puVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined1 in_AL;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  puVar1 = *(undefined1 **)(unaff_EBP + 0x48);
  *(int *)(unaff_EBP + 0x48) = *(int *)(unaff_EBP + 0x48) + 1;
  *puVar1 = in_AL;
  return;
}

// 00754068 FUN_00754068
#line 1 "decomp/ST.exe/functions/00754068/decomp.c"

void st::fn_00754068(void)

{
  ushort uVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  int iVar3;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar2 = (*(uint *)(unaff_EBP + 0xd0 + unaff_EDI) & 0xfff) * 2 + 0x4002;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar3 = unaff_EDI * 2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uVar1 = *(ushort *)(unaff_EBP + 0x21ce + iVar2);
  *(ushort *)(unaff_EBP + 0x21ce + iVar3) = uVar1;
  *(short *)(unaff_EBP + 0x81d0 + (uint)uVar1) = (short)iVar3;
  *(short *)(unaff_EBP + 0x21ce + iVar2) = (short)iVar3;
  *(short *)(unaff_EBP + 0x81d0 + iVar3) = (short)iVar2;
  return;
}

// 007540AC FUN_007540ac
#line 1 "decomp/ST.exe/functions/007540AC/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_007540AC(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;
  char *pcVar6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  char *pcVar7;
  int iVar8;
  bool bVar9;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uVar4 = (*(ushort *)(unaff_EBP + unaff_EDI + 0xd0) & 0xfff) * 2 + 0x4002;
  uVar2 = 0xfc;
  uVar5 = uVar4;
  do {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    uVar1 = *(ushort *)(unaff_EBP + 0x21ce + uVar5);
    uVar5 = (uint)uVar1;
    if (uVar5 == 0x4000) {
/* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
LAB_0075410d:
      iVar8 = unaff_EDI * 2;
      *(uint *)(unaff_EBP + 0x2c) = 0xfc - uVar2;
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      uVar2 = (uint)(iVar8 - *(int *)(unaff_EBP + 0x44)) >> 1 & 0x1fff;
      *(uint *)(unaff_EBP + 0x34) = uVar2;
      *(uint *)(unaff_EBP + 0x38) = ~uVar2 + 1;
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      uVar1 = *(ushort *)(unaff_EBP + 0x21ce + uVar4);
      *(ushort *)(unaff_EBP + 0x21ce + iVar8) = uVar1;
      *(short *)(unaff_EBP + 0x81d0 + (uint)uVar1) = (short)iVar8;
      *(short *)(unaff_EBP + 0x21ce + uVar4) = (short)iVar8;
      *(short *)(unaff_EBP + 0x81d0 + iVar8) = (short)uVar4;
      return;
    }
    uVar3 = 0xfc;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    pcVar7 = (char *)(unaff_EDI + 0xd1 + unaff_EBP);
    bVar9 = pcVar7 == nullptr;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    pcVar6 = (char *)((uVar1 >> 1) + 0xd1 + unaff_EBP);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      bVar9 = *pcVar6 == *pcVar7;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar9);
    if (bVar9) {
      *(uint *)(unaff_EBP + 0x44) = uVar5;
      uVar2 = 0xffffffff;
      goto LAB_0075410d;
    }
    if (uVar3 < uVar2) {
      *(uint *)(unaff_EBP + 0x44) = uVar5;
      uVar2 = uVar3;
    }
  } while( true );
}

// 0075415C FUN_0075415c
#line 4 "decomp/ST.exe/functions/0075415C/decomp.c"
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_0075415C(void)

{
  uint uVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_ESI;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uVar1 = (uint)*(ushort *)(unaff_EBP + 0x81d0 + unaff_ESI * 2);
  if (uVar1 != 0x4000) {
    *(undefined2 *)(unaff_EBP + 0x21ce + uVar1) = 0x4000;
    *(undefined2 *)(unaff_EBP + 0x81d0 + unaff_ESI * 2) = 0x4000;
  }
  return;
}

// 00754185 FUN_00754185
#line 4 "decomp/ST.exe/functions/00754185/decomp.c"
/* WARNING: Unknown calling convention */
/* [STAbiConsistencyApplier] ebp_context_register target=function:-1: prototype=void
   FUN_00754185(void * context) previous_return_type=/undefined Evidence: incoming EBP is
   dereferenced before any EBP definition; all current explicit parameters are generic ECX/EDX
   words; ECX/EDX are overwritten or preserved without semantic incoming use; return=/void;
   caller_return_uses=0, ignored=1 */

void st::fn_00754185(AnonShape_00754185_34BF31BE *context)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int extraout_ECX;
  int iVar8;
  uint uVar9;
  undefined2 *puVar10;
  int *piVar11;
  undefined1 *puVar12;

  puVar10 = (undefined2 *)&context[0x19f].field_0x20;
  for (iVar7 = 0x2000; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = 0x4000;
    puVar10 = puVar10 + 1;
  }
  puVar10 = (undefined2 *)&context[0x6c].field_0xe;
  for (iVar7 = 0x3001; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = 0x4000;
    puVar10 = puVar10 + 1;
  }
  piVar11 = &context[2].field_0030;
  for (iVar7 = 0x20fc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)piVar11 = 0;
    piVar11 = (int *)((int)piVar11 + 1);
  }
  context->field_004C = 1;
  context->field_0048 = (int)(context + 1);
  context->field_004E = 0;
  context->field_0040 = 0;
  puVar12 = (undefined1 *)((int)&context[0x65].field_0040 + 3);
  iVar7 = 0xfd;
  do {
    while( true ) {
      puVar3 = &context->field_0x20;
      *(int *)puVar3 = *(int *)puVar3 + -1;
      if (*(int *)puVar3 != 0) break;
      iVar4 = st::fn_00753FD0((AnonShape_00753FD0_4E1BB8DD *)context);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      iVar7 = extraout_ECX;
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      iVar8 = extraout_ECX;
      if (iVar4 == 0) goto LAB_007541f2;
    }
    puVar3 = (undefined1 *)context->field_0018;
    context->field_0018 = st::machine_word_boundary_cast<int>(context->field_0018 + 1);
    *puVar12 = *puVar3;
    puVar12 = puVar12 + 1;
    iVar7 = iVar7 + -1;
    iVar8 = 0;
  } while (iVar7 != 0);
LAB_007541f2:
  context->field_0030 = 0xfd - iVar8;
  uVar9 = 0;
  st::fn_007540AC();
LAB_00754208:
  uVar5 = context->field_002C;
  if (context->field_0030 < (int)uVar5) {
    uVar5 = context->field_0030;
    context->field_002C = uVar5;
  }
  if ((uVar5 < 2) || ((uVar5 < 3 && (0xff < context->field_0034)))) {
    context->field_002C = 1;
    st::fn_00754047();
    st::fn_0075405F();
  }
  else {
    st::fn_00754047();
    if ((context->field_002C < 6) && (context->field_0034 < 0x100)) {
      st::fn_00754047();
      st::fn_00754047();
      st::fn_00754047();
      st::fn_0075405F();
    }
    else {
      st::fn_00754047();
      st::fn_0075405F();
      if (context->field_002C < 10) {
        st::fn_0075405F();
      }
      else {
        st::fn_0075405F();
        st::fn_0075405F();
      }
    }
  }
  piVar11 = &context->field_0040;
  iVar7 = *piVar11;
  *piVar11 = *piVar11 - context->field_002C;
  if (SBORROW4(iVar7,context->field_002C) != *piVar11 < 0) {
    do {
      context->field_0040 = st::machine_word_boundary_cast<int>(context->field_0040 + 0x10);
    } while (context->field_0040 < 0);
  }
  do {
    st::fn_0075415C();
    do {
      puVar12 = &context->field_0x20;
      *(int *)puVar12 = *(int *)puVar12 + -1;
      if (*(int *)puVar12 != 0) {
        puVar12 = (undefined1 *)context->field_0018;
        context->field_0018 = st::machine_word_boundary_cast<int>(context->field_0018 + 1);
        uVar2 = *puVar12;
        *(undefined1 *)((int)&context[2].field_0030 + uVar9) = uVar2;
        if (uVar9 < 0xfc) {
          (&context[0x69].field_0x0)[uVar9] = uVar2;
        }
        goto LAB_00754308;
      }
      iVar6 = st::fn_00753FD0((AnonShape_00753FD0_4E1BB8DD *)context);
    } while (iVar6 != 0);
    context->field_0030 = st::machine_word_boundary_cast<int>(context->field_0030 + -1);
LAB_00754308:
    uVar9 = uVar9 + 1 & 0x1fff;
    puVar1 = &context->field_002C;
    *puVar1 = *puVar1 - 1;
    if (*puVar1 == 0) break;
    st::fn_00754068();
  } while( true );
  st::fn_007540AC();
  if ((short)context->field_0030 < 1) {
    if ((context->field_003F & 0x80) == 0) {
      st::fn_00754047();
      st::fn_00754047();
      st::fn_0075405F();
      st::fn_0075405F();
      st::fn_0075405F();
      st::fn_00753FF7();
      st::fn_00753FA7();
    }
    return;
  }
  goto LAB_00754208;
}

// 00754360 FUN_00754360
#line 4 "decomp/ST.exe/functions/00754360/decomp.c"
DWORD st::fn_00754360(int param_1,DWORD param_2,undefined4 *param_3,uint param_4)

{
  DWORD DVar1;

  DVar1 = st::fn_006D49F0(param_1,param_2,param_3,param_4);
  if (DVar1 != 0) {
    return 0xffffffff;
  }
  return param_2;
}

// 00754390 FUN_00754390
#line 4 "decomp/ST.exe/functions/00754390/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

undefined4
st::fn_00754390(AnonShape_00753C80_4C8E695D *param_1,ushort *param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  int iVar2;
  int iVar1;
  int iVar3;

  iVar1 = st::fn_00755970((AnonShape_00755970_4FB144E0 *)param_1,param_2,1);
  if (0 < iVar1) {
    iVar3 = *(int *)(&param_1->field_000C[1].field_0xe + (int)param_1->field_000C->field_001C * 8) +
            param_1->field_0008->field_0034;
    iVar2 = param_1->field_0010;
    *param_4 = *(undefined4 *)(iVar3 + 0x10 + iVar2);
    *param_3 = *(undefined4 *)(iVar3 + iVar2 + 0x14);
    return 0;
  }
  return 0xfffffffc;
}

// 007543F0 FUN_007543f0
#line 4 "decomp/ST.exe/functions/007543F0/decomp.c"
undefined4
st::fn_007543F0(AnonShape_007543F0_E9DD5DAA *param_1,undefined4 *param_2,undefined4 *param_3)

{
  short sVar1;
  AnonNested_AnonShape_007543F0_E9DD5DAA_000C_D54F7079 *pAVar2;
  int iVar3;
  int iVar4;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  byte *puVar8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  param_1->field_000C =
       *(AnonNested_AnonShape_007543F0_E9DD5DAA_000C_D54F7079 **)(param_1->field_0008 + 0x50);
  do {
    puVar4 = param_1->field_000C->field_001C;
    iVar3 = st::machine_word_boundary_cast<int>(st::fn_00753B80((AnonShape_00750F20_F8C16F98 *)param_1,
                         *(undefined4 *)(&param_1->field_000C[2].field_0x0 + (int)puVar4 * 8),
                         (int)puVar4));
    st::fn_007561D0((AnonShape_00753C80_4C8E695D *)param_1,
                 *(int *)(&param_1->field_000C[2].field_0x4 +
                         (int)param_1->field_000C->field_001C * 8));
    iVar5 = *(int *)(&param_1->field_000C[2].field_0x4 + (int)param_1->field_000C->field_001C * 8);
    if (iVar5 == -1) {
      iVar5 = *(int *)(iVar3 + 4);
    }
    else {
      iVar5 = *(int *)(iVar5 + 0x10 + iVar3);
    }
    while (iVar5 != -1) {
      param_1->field_000C->field_001C = (uint *)((int)param_1->field_000C->field_001C + 1);
      iVar3 = st::machine_word_boundary_cast<int>(st::fn_00753B80((AnonShape_00750F20_F8C16F98 *)param_1,iVar5,
                           (int)param_1->field_000C->field_001C));
      iVar4 = st::fn_00753C80((AnonShape_00753C80_4C8E695D *)param_1,(int)*(short *)(iVar3 + 8));
      iVar5 = *(int *)(iVar4 + 0x10 + iVar3);
    }
    pAVar2 = param_1->field_000C;
    puVar4 = pAVar2->field_001C;
    if (*(int *)(&pAVar2[2].field_0x4 + (int)puVar4 * 8) == -1) {
      do {
        if (puVar4 == nullptr) {
          st::fn_00750F20((AnonShape_00750F20_F8C16F98 *)param_1,0,0);
          return 0xfffffffc;
        }
        pAVar2->field_001C = (uint *)((int)puVar4 + -1);
        pAVar2 = param_1->field_000C;
        puVar4 = pAVar2->field_001C;
      } while (*(int *)(&pAVar2[2].field_0x4 + (int)puVar4 * 8) == -1);
      iVar3 = st::machine_word_boundary_cast<int>(st::fn_00753B80((AnonShape_00750F20_F8C16F98 *)param_1,
                           *(undefined4 *)(&pAVar2[2].field_0x0 + (int)pAVar2->field_001C * 8),
                           (int)pAVar2->field_001C));
    }
    pAVar2 = param_1->field_000C;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar3 = *(int *)(&pAVar2[2].field_0x4 + (int)pAVar2->field_001C * 8) + 0x10 + iVar3;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  } while (((code *)pAVar2->field_000C != 0) &&
          /* ST_CALLSITE[007544C7]: CALL ECX */
          (iVar5 = (*(code *)pAVar2->field_000C)(iVar3 + 8,*(undefined4 *)&pAVar2->field_0x10),
          iVar5 != 0));
  *param_3 = *(undefined4 *)(iVar3 + 4);
  if (param_2 != nullptr) {
    sVar1 = *(short *)&param_1->field_000C[1].field_0x14;
    if (sVar1 == 0) {
      /* ST_CALLSITE[0075450F]: CALL dword ptr [ESI + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar6 = (**(code **)&param_1->field_000C->field_0x8)(iVar3 + 8);
    }
    else {
      uVar6 = (uint)sVar1;
    }
    puVar8 = (byte *)(iVar3 + 8);
    memmove(param_2, puVar8, uVar6); /* compiler REP MOVS byte copy */
  }
  return 0;
}

// 00754AF0 FUN_00754af0
#line 1 "decomp/ST.exe/functions/00754AF0/decomp.c"

void st::fn_00754AF0(AnonShape_00754AF0_86EFDBFA *param_1,int param_2,uint param_3)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(short *)(param_2 + 0xe) == 8) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(param_2 + 0x20) == 0) {
      param_1->field_0058 = 0x100;
    }
    else {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      param_1->field_0058 = *(int *)(param_2 + 0x20);
    }
    param_1->field_004C = 1;
  }
  if ((param_3 & 4) == 0) {
    if ((param_3 & 8) == 0) {
      if ((param_3 & 0x10) != 0) {
        param_1->field_0040 = 2;
      }
    }
    else {
      param_1->field_0040 = 1;
    }
  }
  else {
    param_1->field_0040 = 0;
  }
  if ((param_3 & 0x80) == 0) {
    if ((param_3 & 0x20) == 0) {
      if ((param_3 & 0x40) != 0) {
        param_1->field_0050 = 1;
      }
    }
    else {
      param_1->field_0050 = 0;
    }
  }
  else {
    param_1->field_0050 = 2;
  }
  if ((param_3 & 2) != 0) {
    param_1->field_0024 = 1;
    param_1->field_004C = 1;
  }
  if ((param_3 & 0x100) != 0) {
    param_1->field_0044 = 0;
  }
  return;
}

// 00754B80 FUN_00754b80
#line 4 "decomp/ST.exe/functions/00754B80/decomp.c"
void st::fn_00754B80(AnonShape_00754B80_75BFDB7A *param_1,ushort *param_2,int param_3,int *param_4,
                 undefined4 param_5,int param_6,uint *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  AnonNested_AnonShape_00754B80_75BFDB7A_0080_4681841F *pAVar4;
  int iVar5;
  AnonShape_00754B80_75BFDB7A *pAVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  ushort *puVar10_mg2;
  ushort *puVar10;
  int *piVar11;
  ushort *puVar12;
  int iVar13;
  ushort local_220 [256];
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  ushort *local_10;
  int local_c;
  ushort *local_8;

  pAVar6 = param_1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_7 == nullptr) {
    local_14 = 0x1f;
    local_20 = 0x7c00;
    local_1c = 0x3e0;
  }
  else {
    local_20 = *param_7;
    local_1c = param_7[1];
    local_14 = param_7[2];
  }
  local_c = -1;
  local_8 = (ushort *)0xffffffff;
  auto param_7_after_write = (uint *)0xffffffff; /* compiler stack-slot lifetime split */
  if (local_20 == 0xf800) {
    local_c = 0;
  }
  else if (local_20 == 0x7c00) {
    local_c = 1;
  }
  if (local_1c == 0x7e0) {
    local_8 = (ushort *)0x5;
  }
  else if (local_1c == 0x3e0) {
    local_8 = (ushort *)0x6;
  }
  if (local_14 == 0x1f) {
    param_7_after_write = (uint *)&DAT_0000000b;
  }
  if (local_c == -1) {
    local_c = 0;
    for (uVar7 = local_20; (uVar7 & 0x8000) == 0; uVar7 = uVar7 << 1) {
      local_c = local_c + 1;
    }
  }
  if (local_8 == (ushort *)0xffffffff) {
    local_8 = nullptr;
    for (uVar7 = local_1c; (uVar7 & 0x8000) == 0; uVar7 = uVar7 << 1) {
      local_8 = (ushort *)((int)local_8 + 1);
    }
  }
  puVar12 = local_8;
  if (param_7_after_write == (uint *)0xffffffff) {
    param_7_after_write = nullptr;
    for (uVar7 = local_14; (uVar7 & 0x8000) == 0; uVar7 = uVar7 << 1) {
      param_7_after_write = (uint *)((int)param_7_after_write + 1);
    }
  }
  bVar9 = (byte)param_7_after_write;
  if (param_1->field_0074 == 1) {
    if (param_1->field_0024 == 1) {
      iVar13 = 0;
      if (0 < param_1->field_007C) {
        local_10 = local_220;
        iVar5 = param_1->field_0080->field_0008;
        do {
          iVar8 = (uint)*(byte *)(iVar5 + iVar13) << 8;
          local_18 = iVar8 >> (bVar9 & 0x1f) & local_14;
          iVar13 = iVar13 + 1;
          *local_10 = (ushort)local_18 |
                      (ushort)(iVar8 >> ((byte)local_8 & 0x1f)) & (ushort)local_1c |
                      (ushort)(iVar8 >> ((byte)local_c & 0x1f)) & (ushort)local_20;
          local_10 = local_10 + 1;
        } while (iVar13 < param_1->field_007C);
      }
    }
    else {
      iVar13 = 0;
      if (0 < param_1->field_007C) {
        local_8 = local_220;
        pAVar4 = param_1->field_0080;
        local_18 = pAVar4->field_0000;
        local_10 = (ushort *)pAVar4->field_0004;
        iVar5 = pAVar4->field_0008;
        do {
          pbVar1 = (byte *)(iVar5 + iVar13);
          pbVar2 = (byte *)((int)local_10 + iVar13);
          pbVar3 = (byte *)(local_18 + iVar13);
          iVar13 = iVar13 + 1;
          *local_8 = (ushort)((int)((uint)*pbVar1 << 8) >> ((byte)local_c & 0x1f)) &
                     (ushort)local_20 |
                     (ushort)((int)((uint)*pbVar2 << 8) >> ((byte)puVar12 & 0x1f)) &
                     (ushort)local_1c |
                     (ushort)((int)((uint)*pbVar3 << 8) >> (bVar9 & 0x1f)) & (ushort)local_14;
          local_8 = local_8 + 1;
        } while (iVar13 < param_1->field_007C);
      }
    }
    if (param_1->field_0084 < param_1->field_006C) {
      while (param_6 != 0) {
        st::fn_007568D0((int)param_1,st::machine_word_boundary_cast<undefined4>(param_4),1);
        iVar13 = 0;
        puVar10_mg2 = param_2;
        if (0 < param_1->field_0068) {
          do {
            pbVar1 = (byte *)(*param_4 + iVar13);
            iVar13 = iVar13 + 1;
            *puVar10_mg2 = local_220[*pbVar1];
            puVar10_mg2 = puVar10_mg2 + 1;
          } while (iVar13 < param_1->field_0068);
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = (ushort *)((int)param_2 - param_3);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + -1;
        if (param_1->field_006C <= param_1->field_0084) {
          return;
        }
      }
    }
  }
  else {
    local_c = local_c + 0x10;
    puVar12 = local_8 + 4;
    local_8 = puVar12;
    if (param_1->field_0084 < param_1->field_006C) {
      do {
        if (param_6 == 0) {
          return;
        }
        st::fn_007568D0((int)pAVar6,st::machine_word_boundary_cast<undefined4>(param_4),1);
        piVar11 = (int *)*param_4;
        AnonShape_00754B80_75BFDB7A * param_1_after_write = nullptr; /* compiler stack-slot lifetime split */
        if (0 < pAVar6->field_0068) {
          local_10 = param_2;
          do {
            uVar7 = *piVar11 << 8;
            piVar11 = (int *)((int)piVar11 + 3);
            local_18 = uVar7 >> (bVar9 & 0x1f) & local_14;
            puVar10 = local_10 + 1;
            *local_10 = (ushort)local_18 |
                        (ushort)(uVar7 >> ((byte)puVar12 & 0x1f)) & (ushort)local_1c |
                        (ushort)(uVar7 >> ((byte)local_c & 0x1f)) & (ushort)local_20;
            param_1_after_write = (AnonShape_00754B80_75BFDB7A *)&param_1_after_write->field_0x1;
            puVar12 = local_8;
            local_10 = puVar10;
          } while ((int)param_1_after_write < pAVar6->field_0068);
        }
        param_2 = (ushort *)((int)param_2 - param_3);
        param_6 = param_6 + -1;
      } while (pAVar6->field_0084 < pAVar6->field_006C);
    }
  }
  return;
}

// 00754F40 FUN_00754f40
#line 4 "decomp/ST.exe/functions/00754F40/decomp.c"
undefined4 st::fn_00754F40(LPCSTR param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  undefined4 uVar2;
  int local_24;
  uint local_20;

  /* ST_CALLSITE[00754F5D]: CALL dword ptr [0x0085bc80] */
  hFile = st::external_00000055(param_1,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return 0;
  }
  uVar2 = 0;
  /* ST_CALLSITE[00754F82]: CALL dword ptr [0x0085bc68] */
  BVar1 = st::external_0000004F(hFile,(LPVOID)&local_24,0x20,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if ((((BVar1 != 0) && (param_1 == (LPCSTR)0x20)) && (local_24 == DAT_007f2c38)) &&
     ((local_20 & 0xff00) == 0x100)) {
    uVar2 = 1;
  }
  /* ST_CALLSITE[00754FB7]: CALL dword ptr [0x0085bbc8] */
  st::external_00000027(hFile);
  return uVar2;
}

// 00754FD0 FUN_00754fd0
#line 4 "decomp/ST.exe/functions/00754FD0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00754FF8 MOV DX,word ptr
   [EBP + 0x10] */

uint st::fn_00754FD0(AnonShape_00754FD0_6B521B56 *param_1,undefined4 param_2,ushort param_3)

{
  AnonNested_AnonShape_00754FD0_6B521B56_000C_1591C729 *pAVar1;
  AnonNested_AnonShape_00754FD0_6B521B56_0008_2A163446 *pAVar2;
  int iVar3;
  int iVar2;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  byte *puVar7;

  pAVar1 = (AnonNested_AnonShape_00754FD0_6B521B56_000C_1591C729 *)param_1->field_0008->field_0050;
  param_1->field_000C = pAVar1;
  pAVar1->field_0018 = param_2;
  param_1->field_000C->field_002A = 1;
  param_1->field_000C->field_002E = param_3;
  param_1->field_000C->field_0014 = 1;
  param_1->field_000C->field_001C = 0;
  param_1->field_000C->field_0040 = 0;
  param_1->field_000C->field_0044 = 0xffffffff;
  st::fn_00730C40(&param_1->field_000C->field_0x36,0x7f2ce8);
  iVar2 = st::fn_00753B40((AnonShape_00753C80_4C8E695D *)param_1);
  param_1->field_000C->field_0024 = iVar2;
  uVar4 = param_1->field_000C->field_0024;
  if (0 < (int)uVar4) {
    uVar4 = st::fn_006D4C50
                      ((int)param_1->field_0008,uVar4,(int)(short)param_1->field_0008->field_0016);
    if (uVar4 == 0) {
      pAVar2 = param_1->field_0008;
      iVar3 = param_1->field_000C->field_0024;
      *(uint *)&pAVar2->field_0x8 = *(uint *)&pAVar2->field_0x8 | 0x10;
      puVar6 = (undefined4 *)(*(int *)&pAVar2->field_0x34 + iVar3);
      uVar5 = (uint)(short)param_1->field_0008->field_0016;
      puVar7 = (byte *)(puVar6);
      memset(puVar7, 0, uVar5); /* compiler bulk-zero initialization */
      *puVar6 = 0xffffffff;
      puVar6[1] = 0xffffffff;
      *(undefined2 *)(puVar6 + 2) = 0;
      uVar4 = st::fn_00757360((AnonShape_00757360_9C23D284 *)param_1,
                           (AnonShape_00757360_9B4621C9 *)param_1->field_000C);
    }
    else if (0 < (int)uVar4) {
      return uVar4 | 0xffff0000;
    }
  }
  return uVar4;
}

// 007550C0 FUN_007550c0
#line 4 "decomp/ST.exe/functions/007550C0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void st::fn_007550C0(AnonShape_007550C0_25940DF4 *param_1,undefined4 *param_2)

{
  if ((int)param_2 < 9) {
    param_1->field_0030 = (uint)param_2 & 0xff;
    switch((uint)param_2 & 0xff) {
    case 1:
    case 2:
      param_1->field_0034 = 1;
      return;
    case 3:
    case 4:
      param_1->field_0034 = 2;
      return;
    case 5:
    case 6:
      param_1->field_0034 = 4;
      return;
    case 7:
      param_1->field_0004 = st::machine_word_boundary_cast<undefined4>(st::fn_00673110);
      param_1->field_0008 = st::machine_word_boundary_cast<undefined4>(st::fn_00757430);
      param_1->field_0034 = 0;
      return;
    case 8:
      param_1->field_0004 = st::machine_word_boundary_cast<undefined4>(st::fn_00673160);
      param_1->field_0008 = st::machine_word_boundary_cast<undefined4>(st::fn_00757430);
      param_1->field_0034 = 0;
    }
    return;
  }
  param_1->field_0030 = *param_2;
  param_1->field_0034 = *(undefined2 *)(param_2 + 3);
  param_1->field_0004 = param_2[1];
  param_1->field_0008 = param_2[2];
  return;
}

// 00755180 FUN_00755180
#line 4 "decomp/ST.exe/functions/00755180/decomp.c"
int st::fn_00755180(AnonShape_00755180_CB9F7747 *param_1,LPCSTR param_2,undefined4 *param_3,int param_4
                )

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 **slotStorage;
  InternalExceptionFrame local_4c;
  int local_8;

  local_8 = 0;
  puVar1 = st::fn_006B04D0(0x54);
  param_1->field_0008 = puVar1;
  if (puVar1 == nullptr) {
    return -2;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    if (param_4 == 1) {
      st::fn_006D4380(param_1->field_0008,param_2,0);
    }
    else if (param_4 == 2) {
      st::fn_006D4220(param_1->field_0008,param_2,0x100000,0x100000);
    }
    else {
      st::fn_006D4510(param_1->field_0008,param_2,0x100000);
    }
    slotStorage = &param_1->field_0008;
    g_currentExceptionFrame = local_4c.previous;
    if ((uint)(*slotStorage)[0xe] < 0x20) {
      st::fn_006D46A0(*slotStorage,0);
      st::fn_006AB060(slotStorage);
      return -5;
    }
    puVar1 = st::fn_006B04D0(0x80);
    (*slotStorage)[0x13] = st::machine_word_boundary_cast<undefined4>(puVar1);
    (*slotStorage)[0x14] = (*slotStorage)[0x13];
    puVar1 = *slotStorage;
    if (puVar1[0x14] == 0) {
      st::fn_006D46A0(puVar1,0);
      st::fn_006AB060(slotStorage);
      return -2;
    }
    st::fn_007550C0((AnonShape_007550C0_25940DF4 *)puVar1[0x13],param_3);
    param_1->field_0014 = 0x12;
    return local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  st::fn_006AB060(&param_1->field_0008);
  return iVar2;
}

// 007553F0 FUN_007553f0
#line 4 "decomp/ST.exe/functions/007553F0/decomp.c"
undefined4
st::fn_007553F0(AnonShape_007553F0_ACB112C2 *param_1,int *param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar7;
  byte *puVar8;
  byte *puVar9;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_1->field_0008 + 0x50);
  param_1->field_000C = iVar2;
  iVar4 = st::machine_word_boundary_cast<int>(st::fn_00753B80((AnonShape_00750F20_F8C16F98 *)param_1,
                       *(undefined4 *)(iVar2 + 0x40 + *(int *)(iVar2 + 0x1c) * 8),
                       *(int *)(iVar2 + 0x1c)));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8);
  if (iVar2 == -1) {
    iVar2 = *(int *)(iVar4 + 4);
  }
  else {
    if (iVar2 == *(short *)(iVar4 + 8)) goto LAB_00755464;
    iVar2 = *(int *)(iVar2 + 0x10 + iVar4);
  }
  while (iVar2 != -1) {
    *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + 1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar4 = st::machine_word_boundary_cast<int>(st::fn_00753B80((AnonShape_00750F20_F8C16F98 *)param_1,iVar2,
                         *(int *)(param_1->field_000C + 0x1c)));
    *(undefined4 *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) =
         0xffffffff;
    iVar2 = *(int *)(iVar4 + 4);
  }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_00755464:
  st::fn_00757450((AnonShape_00755E10_BD685653 *)param_1,
               *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8));
  iVar2 = param_1->field_000C;
  iVar3 = *(int *)(iVar2 + 0x1c);
  if (*(int *)(iVar2 + 0x44 + iVar3 * 8) == (int)*(short *)(iVar4 + 8)) {
    do {
      if (iVar3 == 0) {
        st::fn_00750FB0((AnonShape_00750FB0_15A3AC3E *)param_1,0,0);
        return 0xfffffffc;
      }
      *(int *)(iVar2 + 0x1c) = iVar3 + -1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = *(int *)(param_1->field_000C + 0x1c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar4 = st::machine_word_boundary_cast<int>(st::fn_00753B80((AnonShape_00750F20_F8C16F98 *)param_1,
                           *(undefined4 *)(param_1->field_000C + 0x40 + iVar2 * 8),iVar2));
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      st::fn_00757450((AnonShape_00755E10_BD685653 *)param_1,
                   *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8));
      iVar2 = param_1->field_000C;
      iVar3 = *(int *)(iVar2 + 0x1c);
    } while (*(int *)(iVar2 + 0x44 + iVar3 * 8) == (int)*(short *)(iVar4 + 8));
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8);
  puVar8 = (byte *)(iVar2 + 0x10 + iVar4);
  *param_3 = *(undefined4 *)(iVar2 + 0x14 + iVar4);
  *param_4 = *puVar8;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar1 = *(short *)(param_1->field_000C + 0x34);
  if (sVar1 == 0) {
    /* ST_CALLSITE[00755514]: CALL dword ptr [ESI + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar7 = (**(code **)(param_1->field_000C + 8))(puVar8 + 2);
  }
  else {
    uVar7 = (uint)sVar1;
  }
  if (*param_2 == 1) {
    piVar5 = st::fn_006BFB70(uVar7);
    *param_2 = (int)piVar5;
    if (piVar5 == nullptr) {
      return 0xfffffffe;
    }
  }
  if ((undefined4 *)*param_2 != nullptr) {
    puVar8 = (byte *)(puVar8 + 2);
    puVar9 = (byte *)*param_2;
    memmove(puVar9, puVar8, uVar7); /* compiler REP MOVS byte copy */
  }
  return 0;
}

// 00755560 FUN_00755560
#line 4 "decomp/ST.exe/functions/00755560/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0075575A CMP EAX,ESI classifies dword parameter loaded at 00755757 */

uint st::fn_00755560(AnonShape_00755560_6DE97093 *param_1,ushort *param_2,int param_3,
                 undefined4 param_4)

{
  AnonShape_00755560_6DE97093 *pAVar1;
  uint *puVar2;
  bool bVar3;
  AnonShape_00755560_6DE97093 *pAVar4;
  int *piVar5;
  int iVar5;
  int iVar6;
  int uVar11;
  DWORD DVar7;
  int *piVar8;
  uint uVar12;
  uint uVar9;
  ushort *puVar10;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;

  pAVar4 = param_1;
  bVar3 = false;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar5 = *(int *)(param_1->field_0008 + 0x50);
  param_1->field_000C = iVar5;
  if (*(short *)(iVar5 + 0x34) == 0) {
    /* ST_CALLSITE[0075558E]: CALL dword ptr [EAX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar13 = (**(code **)(iVar5 + 8))(param_2);
  }
  else {
    uVar13 = (uint)*(short *)(iVar5 + 0x34);
  }
  pAVar1 = (AnonShape_00755560_6DE97093 *)(uVar13 + 8);
  if ((int)param_1->field_0024 < (int)pAVar1) {
    piVar5 = st::fn_006BFB50((int *)param_1->field_001C,(uint)pAVar1);
    param_1->field_001C = st::machine_word_boundary_cast<undefined4>(piVar5);
    if (piVar5 == nullptr) {
      return 0xfffffffe;
    }
    param_1->field_0024 = st::machine_word_boundary_cast<undefined4>(pAVar1);
  }
  *(undefined4 *)param_1->field_001C = param_4;
  *(int *)(param_1->field_001C + 4) = param_3;
  puVar10 = param_2;
  puVar14 = (undefined4 *)(param_1->field_001C + 8);
  for (uVar9 = uVar13 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar14 = *(undefined4 *)puVar10;
    puVar10 = puVar10 + 2;
    puVar14 = puVar14 + 1;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(char *)puVar14 = (char)*puVar10;
    puVar10 = (ushort *)((int)puVar10 + 1);
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  puVar2 = (uint *)(param_1->field_0008 + 8);
  *puVar2 = *puVar2 | 0x10;
  param_1 = pAVar1;
  while( true ) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar15 = *(int *)(pAVar4->field_0008 + 0x34) + *(int *)&pAVar4->field_0x10;
    iVar5 = pAVar4->field_000C;
    iVar6 = *(int *)(iVar5 + 0x44 + *(int *)(iVar5 + 0x1c) * 8);
    if (iVar6 < 0) {
      *(undefined4 *)(iVar5 + 0x44 + *(int *)(iVar5 + 0x1c) * 8) = 0;
    }
    else {
      if (*(short *)(iVar5 + 0x34) == 0) {
        /* ST_CALLSITE[00755623]: CALL dword ptr [EAX + 0x8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar5 = (**(code **)(iVar5 + 8))(iVar6 + 0x18 + iVar15);
      }
      else {
        iVar5 = (int)*(short *)(iVar5 + 0x34);
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      piVar8 = (int *)(pAVar4->field_000C + 0x44 + *(int *)(pAVar4->field_000C + 0x1c) * 8);
      *piVar8 = *piVar8 + iVar5 + 8;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((int)(&param_1->field_0x0 + *(short *)(iVar15 + 8)) <=
        *(short *)(pAVar4->field_0008 + 0x16) + -0x10) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar12 = st::fn_00755830((AnonShape_00753C80_4C8E695D *)pAVar4,(uint *)pAVar4->field_001C,
                            *(int *)(pAVar4->field_000C + 0x1c));
      if (uVar12 != 0) {
        return uVar12;
      }
      if (bVar3) goto LAB_007557fa;
      goto LAB_0075580a;
    }
    bVar3 = true;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar5 = *(int *)(pAVar4->field_000C + 0x44 + *(int *)(pAVar4->field_000C + 0x1c) * 8);
    iVar6 = st::fn_00753C80((AnonShape_00753C80_4C8E695D *)pAVar4,(*(short *)(iVar15 + 8) >> 1) + 4);
    if (iVar5 == iVar6) {
      param_1 = (AnonShape_00755560_6DE97093 *)
                st::fn_00757530((AnonShape_00757530_EEED7D69 *)pAVar4,0,
                             (undefined4 *)pAVar4->field_001C);
      if (param_1 == nullptr) {
        return 0xfffffffe;
      }
    }
    else {
      param_1 = (AnonShape_00755560_6DE97093 *)
                st::fn_00757530((AnonShape_00757530_EEED7D69 *)pAVar4,0,
                             (undefined4 *)(iVar6 + 0x10 + iVar15));
      if (param_1 == nullptr) {
        return 0xfffffffe;
      }
      st::fn_0072DA70
                ((undefined4 *)(iVar6 + 0x10 + iVar15),
                 (AnonPointee_TLOBaseTy_0607 *)(&param_1->field_0x10 + iVar15 + iVar6),
                 ((int)*(short *)(iVar15 + 8) - (int)param_1) - iVar6);
      *(short *)(iVar15 + 8) = *(short *)(iVar15 + 8) - (short)param_1;
    }
    uVar11 = st::fn_00753B40((AnonShape_00753C80_4C8E695D *)pAVar4);
    if (uVar11 < 0) {
      return uVar11;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    DVar7 = st::fn_006D4C50
                      (pAVar4->field_0008,uVar11,(int)*(short *)(pAVar4->field_0008 + 0x16));
    if (DVar7 != 0) {
      return DVar7;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar15 = *(int *)(pAVar4->field_0008 + 0x34);
    iVar16 = *(int *)&pAVar4->field_0x10 + iVar15;
    piVar8 = (int *)(iVar15 + uVar11);
    st::fn_0072DA70
              (st::pointer_boundary_cast<undefined4 *>(piVar8 + 4),(AnonPointee_TLOBaseTy_0607 *)(iVar6 + 0x10 + iVar16),
               *(short *)(iVar16 + 8) - iVar6);
    *piVar8 = uVar11;
    *(short *)(piVar8 + 2) = *(short *)(iVar16 + 8) - (short)iVar6;
    piVar8[1] = **(int **)&pAVar4->field_0x18;
    *(short *)(iVar16 + 8) = (short)iVar6;
    **(int **)&pAVar4->field_0x18 = *piVar8;
    if (iVar5 < iVar6) {
      st::fn_007574C0((AnonShape_00753C80_4C8E695D *)pAVar4,iVar16,(uint *)pAVar4->field_001C,iVar5);
    }
    else if (iVar6 < iVar5) {
      st::fn_007574C0((AnonShape_00753C80_4C8E695D *)pAVar4,(int)piVar8,(uint *)pAVar4->field_001C,
                   (iVar5 - (int)param_1) - iVar6);
      *(undefined4 *)(pAVar4->field_000C + 0x40 + *(int *)(pAVar4->field_000C + 0x1c) * 8) =
           **(undefined4 **)&pAVar4->field_0x18;
      iVar5 = pAVar4->field_000C;
      *(int *)(iVar5 + 0x44 + *(int *)(iVar5 + 0x1c) * 8) =
           *(int *)(iVar5 + 0x44 + *(int *)(iVar5 + 0x1c) * 8) - iVar6;
    }
    param_1 = (AnonShape_00755560_6DE97093 *)
              st::fn_00757530((AnonShape_00757530_EEED7D69 *)pAVar4,1,
                           *(undefined4 **)&pAVar4->field_0x18);
    if (param_1 == nullptr) {
      return 0xfffffffe;
    }
    *(int *)(pAVar4->field_000C + 0x1c) = *(int *)(pAVar4->field_000C + 0x1c) + -1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar5 = *(int *)(pAVar4->field_000C + 0x1c);
    if (iVar5 < 0) break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_00753B80((AnonShape_00750F20_F8C16F98 *)pAVar4,
                 *(undefined4 *)(pAVar4->field_000C + 0x40 + iVar5 * 8),iVar5);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar13 = st::fn_00755830((AnonShape_00753C80_4C8E695D *)pAVar4,*(uint **)&pAVar4->field_0x18,
                        *(int *)(pAVar4->field_000C + 0x1c));
  if (uVar13 == 0) {
LAB_007557fa:
    uVar13 = st::fn_00755970((AnonShape_00755970_4FB144E0 *)pAVar4,param_2,0);
    if (-1 < (int)uVar13) {
LAB_0075580a:
      uVar13 = 0;
    }
  }
  return uVar13;
}

// 00755830 FUN_00755830
#line 4 "decomp/ST.exe/functions/00755830/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

uint st::fn_00755830(AnonShape_00753C80_4C8E695D *param_1,uint *param_2,int param_3)

{
  undefined1 *puVar1;
  short sVar2;
  uint uVar3;
  DWORD uVar4;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  byte *puVar8;
  uint *puVar9;
  byte *puVar10;
  uint *puVar11;
  uint *puVar12;

  if (param_3 < 0) {
    puVar8 = (byte *)&param_1->field_000C[1].field_0xa;
    puVar10 = (byte *)&param_1->field_000C[1].field_0x12;
    memmove(puVar10, puVar8, 0x38); /* compiler REP MOVS byte copy */
    uVar3 = st::fn_00753B40(param_1);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    uVar4 = st::fn_006D4C50
                      ((int)param_1->field_0008,uVar3,
                       (int)*(short *)&param_1->field_0008->field_0x16);
    if (uVar4 == 0) {
      *(uint *)&param_1->field_0008->field_0x8 = *(uint *)&param_1->field_0008->field_0x8 | 0x10;
      iVar4 = param_1->field_0008->field_0034;
      puVar12 = (uint *)(iVar4 + uVar3);
      puVar7 = (uint *)(*(int *)&param_1->field_000C->field_0x24 + iVar4);
      uVar5 = (uint)*(short *)&param_1->field_0008->field_0x16;
      puVar9 = puVar7;
      puVar11 = puVar12;
      memmove(puVar11, puVar9, uVar5); /* compiler REP MOVS byte copy */
      uVar5 = 0;
      *puVar12 = uVar3;
      sVar2 = param_1->field_000C->field_0034;
      if (sVar2 == 0) {
        /* ST_CALLSITE[007558EB]: CALL dword ptr [EAX + 0x8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar4 = (**(code **)&param_1->field_000C->field_0x8)(param_2 + 2);
      }
      else {
        iVar4 = (int)sVar2;
      }
      uVar6 = iVar4 + 8;
      puVar12 = puVar7 + 4;
      memmove(puVar12, param_2, uVar6); /* compiler REP MOVS byte copy */
      *(short *)(puVar7 + 2) = (short)uVar6;
      puVar7[1] = uVar3;
      param_1->field_000C->field_001C = nullptr;
      *(undefined4 *)&param_1->field_000C[1].field_0xe = 0;
      puVar1 = &param_1->field_000C->field_0x2a;
      *(short *)puVar1 = *(short *)puVar1 + 1;
      *(undefined4 *)&param_1->field_000C->field_0x14 = 1;
      return 0;
    }
    if (0 < (int)uVar4) {
      return uVar4 | 0xffff0000;
    }
  }
  else {
    st::fn_007574C0(param_1,param_1->field_0008->field_0034 + param_1->field_0010,param_2,
                 *(int *)(&param_1->field_000C[1].field_0xe + param_3 * 8));
    uVar4 = 0;
  }
  return uVar4;
}

// 00755970 FUN_00755970
#line 4 "decomp/ST.exe/functions/00755970/decomp.c"
int st::fn_00755970(AnonShape_00755970_4FB144E0 *param_1,ushort *param_2,int param_3)

{
  short sVar1;
  AnonShape_00755970_4FB144E0 *pAVar2;
  AnonShape_00755970_4FB144E0 *pAVar3;
  uint uVar4;
  int iVar5;
  AnonShape_00755970_4FB144E0 *pAVar6;
  int iVar7;
  AnonShape_00755970_4FB144E0 *pAVar8;
  int local_c;
  uint *local_8;

  pAVar2 = param_1;
  iVar7 = 0;
  local_8 = nullptr;
  local_c = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  param_1->field_000C =
       *(AnonNested_AnonShape_00755970_4FB144E0_000C_11C2AAE5 **)(param_1->field_0008 + 0x50);
  do {
    pAVar2->field_000C->field_001C = local_8;
    iVar7 = st::machine_word_boundary_cast<int>(st::fn_00753B80((AnonShape_00750F20_F8C16F98 *)pAVar2,iVar7,(int)local_8));
    auto param_1_after_write = (AnonShape_00755970_4FB144E0 *)0xffffffff; /* compiler stack-slot lifetime split */
    pAVar6 = (AnonShape_00755970_4FB144E0 *)0xffffffff;
    pAVar3 = nullptr;
    if (0 < *(short *)(iVar7 + 8)) {
      do {
        pAVar8 = pAVar3;
        if (pAVar2->field_000C->field_0030 == 0xff) {
          /* ST_CALLSITE[007559C7]: CALL dword ptr [EAX + 0x4] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          uVar4 = (**(code **)&pAVar2->field_000C->field_0x4)(param_2);
        }
        else {
          uVar4 = st::fn_007575B0((AnonShape_007575B0_A94973CA *)pAVar2,param_2,
                               (ushort *)((int)&pAVar8[1].field_0008 + iVar7));
        }
        pAVar6 = param_1_after_write;
        if ((int)uVar4 < 0) break;
        pAVar6 = pAVar8;
        if (uVar4 == 0) {
          local_c = 1;
          break;
        }
        sVar1 = pAVar2->field_000C->field_0034;
        if (sVar1 == 0) {
          /* ST_CALLSITE[007559F8]: CALL dword ptr [EAX + 0x8] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar5 = (**(code **)&pAVar2->field_000C->field_0x8)((int)&pAVar8[1].field_0008 + iVar7);
        }
        else {
          iVar5 = (int)sVar1;
        }
        pAVar3 = (AnonShape_00755970_4FB144E0 *)((int)&pAVar8->field_0008 + iVar5);
        *(AnonShape_00755970_4FB144E0 **)
         (&pAVar2->field_000C[1].field_0xe + (int)pAVar2->field_000C->field_001C * 8) = pAVar3;
        param_1_after_write = pAVar8;
      } while ((int)pAVar3 < (int)*(short *)(iVar7 + 8));
    }
    *(AnonShape_00755970_4FB144E0 **)
     (&pAVar2->field_000C[1].field_0xe + (int)pAVar2->field_000C->field_001C * 8) = pAVar6;
    if ((local_c != 0) && (param_3 != 0)) {
      return local_c;
    }
    if (pAVar6 == (AnonShape_00755970_4FB144E0 *)0xffffffff) {
      iVar7 = *(int *)(iVar7 + 4);
    }
    else {
      iVar7 = *(int *)(&pAVar6[1].field_0x0 + iVar7);
    }
    *(AnonShape_00755970_4FB144E0 **)(&pAVar2->field_000C[1].field_0xe + (int)local_8 * 8) = pAVar6;
    local_8 = (uint *)((int)local_8 + 1);
    if (iVar7 == -1) {
      return local_c;
    }
  } while( true );
}

// 00755BC0 FUN_00755bc0
#line 4 "decomp/ST.exe/functions/00755BC0/decomp.c"
int st::fn_00755BC0(AnonShape_00755BC0_D59C64DD *param_1,int param_2)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar4;
  byte *puVar8;
  DWORD DVar9;
  uint uVar10;
  byte *puVar11;

  *(uint *)(param_1->field_0008 + 8) = *(uint *)(param_1->field_0008 + 8) | 0x10;
  if (param_2 != -1) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar2 = *(undefined4 *)(param_1->field_000C + 0x1c);
    do {
      *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar5 = st::machine_word_boundary_cast<int>(st::fn_00753B80((AnonShape_00750F20_F8C16F98 *)param_1,param_2,
                           *(int *)(param_1->field_000C + 0x1c)));
      *(undefined4 *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) =
           0xffffffff;
      param_2 = *(int *)(iVar5 + 4);
    } while (param_2 != -1);
    *(undefined4 *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) = 0;
    uVar6 = st::fn_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,(undefined4 *)(iVar5 + 0x10));
    if (uVar6 == 0) {
      return -2;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar3 = *(undefined4 *)(param_1->field_000C + 0x1c);
    *(undefined4 *)(param_1->field_000C + 0x1c) = uVar2;
    uVar6 = st::fn_00755DA0((uint)param_1,param_1->field_001C);
    if (uVar6 != 0) {
      return uVar6;
    }
    *(undefined4 *)(param_1->field_000C + 0x1c) = uVar3;
  }
  while( true ) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar5 = *(int *)(param_1->field_000C + 0x1c);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar7 = st::machine_word_boundary_cast<int>(st::fn_00753B80((AnonShape_00750F20_F8C16F98 *)param_1,
                         *(undefined4 *)(param_1->field_000C + 0x40 + iVar5 * 8),iVar5));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_00755D40((AnonShape_00755D40_9BC6D2DA *)param_1,iVar7,
                 *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar5 = *(int *)(param_1->field_000C + 0x1c);
    if ((iVar5 == 0) && (*(short *)(iVar7 + 8) == 0)) {
      iVar5 = param_1->field_000C;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      puVar11 = (byte *)(*(int *)(iVar5 + 0x24) + *(int *)(param_1->field_0008 + 0x34));
      if (puVar11[1] != -1) {
        *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + 1;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        puVar8 = (byte *)
                 st::fn_00753B80((AnonShape_00750F20_F8C16F98 *)param_1,puVar11[1],
                              *(int *)(param_1->field_000C + 0x1c));
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        uVar10 = (uint)*(short *)(param_1->field_0008 + 0x16);
        memmove(puVar11, puVar8, uVar10); /* compiler REP MOVS byte copy */
        psVar1 = (short *)(param_1->field_000C + 0x2a);
        *psVar1 = *psVar1 + -1;
        DVar9 = st::fn_00757670((AnonShape_00757670_86D3B9A7 *)param_1,param_1->field_0010);
        if (DVar9 != 0) {
          return DVar9;
        }
        *(undefined4 *)(param_1->field_000C + 0x14) = 1;
      }
      return 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(short *)(param_1->field_0008 + 0x16) + -0x10 >> 1 <= (int)*(short *)(iVar7 + 8)) {
      return 0;
    }
    if (iVar5 < 1) break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar4 = st::fn_00755E10((AnonShape_00755E10_BD685653 *)param_1,(int)*(short *)(iVar7 + 8),
                         *(undefined4 *)(param_1->field_000C + 0x40 + iVar5 * 8));
    if (iVar4 < 0) {
      return iVar4;
    }
    if (iVar4 < 1) {
      return 0;
    }
  }
  return 0;
}

// 00755D40 FUN_00755d40
#line 4 "decomp/ST.exe/functions/00755D40/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void st::fn_00755D40(AnonShape_00755D40_9BC6D2DA *param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;

  sVar1 = param_1->field_000C->field_0034;
  if (sVar1 == 0) {
    /* ST_CALLSITE[00755D65]: CALL dword ptr [EAX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (*(code *)param_1->field_000C->field_0008)(param_2 + 0x18 + param_3);
  }
  else {
    iVar2 = (int)sVar1;
  }
  iVar2 = iVar2 + 8;
  st::fn_0072DA70
            ((undefined4 *)(param_2 + 0x10 + param_3),
             (AnonPointee_TLOBaseTy_0607 *)(iVar2 + param_2 + 0x10 + param_3),
             (*(short *)(param_2 + 8) - iVar2) - param_3);
  *(short *)(param_2 + 8) = *(short *)(param_2 + 8) - (short)iVar2;
  return;
}

// 00755DA0 FUN_00755da0
#line 4 "decomp/ST.exe/functions/00755DA0/decomp.c"
/* [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   /uint; no intervening CALL or EAX/AX/AL/AH definition exists; machine CFG audit: used=3,
   ignored=0, unknown=0 */

uint st::fn_00755DA0(uint param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x1c);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = st::machine_word_boundary_cast<int>(st::fn_00753B80((AnonShape_00750F20_F8C16F98 *)param_1,
                       *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x40 + iVar1 * 8),iVar1));
  *param_2 = *(undefined4 *)
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              (*(int *)(*(int *)(param_1 + 0xc) + 0x44 +
                       *(int *)(*(int *)(param_1 + 0xc) + 0x1c) * 8) + 0x10 + iVar1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_00755D40((AnonShape_00755D40_9BC6D2DA *)param_1,iVar1,
               *(int *)(*(int *)(param_1 + 0xc) + 0x44 +
                       *(int *)(*(int *)(param_1 + 0xc) + 0x1c) * 8));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_007561D0((AnonShape_00753C80_4C8E695D *)param_1,
               *(int *)(*(int *)(param_1 + 0xc) + 0x44 +
                       *(int *)(*(int *)(param_1 + 0xc) + 0x1c) * 8));
  uVar2 = st::fn_00755560((AnonShape_00755560_6DE97093 *)param_1,(ushort *)(param_2 + 2),param_2[1],
                       *param_2);
  return uVar2;
}

// 00755E10 FUN_00755e10
#line 4 "decomp/ST.exe/functions/00755E10/decomp.c"
int st::fn_00755E10(AnonShape_00755E10_BD685653 *param_1,int param_2,undefined4 param_3)

{
  int iVar3;
  int iVar4;
  int iVar2;
  int iVar5;
  uint uVar6;
  int iVar7;
  DWORD DVar8;
  int iVar1;
  int iVar9;
  undefined4 uVar10;
  undefined2 local_8;

  iVar9 = (short)param_1->field_0008->field_0016 + -0x10;
  *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + -1;
  iVar5 = param_1->field_000C;
  iVar4 = *(int *)(iVar5 + 0x1c);
  iVar7 = *(int *)(iVar5 + 0x44 + iVar4 * 8);
  iVar4 = st::machine_word_boundary_cast<int>(st::fn_00753B80((AnonShape_00750F20_F8C16F98 *)param_1,
                       *(undefined4 *)(iVar5 + 0x40 + iVar4 * 8),iVar4));
  param_1->field_0008->field_0008 = st::machine_word_boundary_cast<undefined4>(param_1->field_0008->field_0008 | 0x10);
  iVar2 = st::fn_00757450(param_1,iVar7);
  iVar5 = param_1->field_000C;
  if (iVar2 < *(short *)(iVar4 + 8)) {
    if (*(short *)(iVar5 + 0x34) == 0) {
      /* ST_CALLSITE[00755E92]: CALL dword ptr [EAX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar5 = (**(code **)(iVar5 + 8))(iVar2 + 0x18 + iVar4);
    }
    else {
      iVar5 = (int)*(short *)(iVar5 + 0x34);
    }
    if (iVar5 + 8 + param_2 < iVar9) {
      uVar6 = st::fn_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,
                           (undefined4 *)(iVar2 + 0x10 + iVar4));
      if (uVar6 == 0) {
        return -2;
      }
      iVar5 = param_1->field_000C;
      uVar10 = *(undefined4 *)(*(int *)(iVar5 + 0x44 + *(int *)(iVar5 + 0x1c) * 8) + 0x10 + iVar4);
      *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar4 = st::machine_word_boundary_cast<int>(st::fn_00753B80((AnonShape_00750F20_F8C16F98 *)param_1,uVar10,
                           *(int *)(param_1->field_000C + 0x1c)));
      iVar5 = param_1->field_0010;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar7 = st::machine_word_boundary_cast<int>(st::fn_00753B80((AnonShape_00750F20_F8C16F98 *)param_1,param_3,
                           *(int *)(param_1->field_000C + 0x1c)));
      if ((iVar9 <= (int)((int)*(short *)(iVar4 + 8) + (int)*(short *)(iVar7 + 8) + uVar6)) &&
         ((int)*(short *)(iVar4 + 8) <= (int)((int)*(short *)(iVar7 + 8) + uVar6))) {
        return 0;
      }
      *(undefined4 *)param_1->field_001C = *(undefined4 *)(iVar4 + 4);
      st::fn_007574C0((AnonShape_00753C80_4C8E695D *)param_1,iVar7,(uint *)param_1->field_001C,
                   (int)*(short *)(iVar7 + 8));
      if ((int)*(short *)(iVar4 + 8) + (int)*(short *)(iVar7 + 8) < iVar9) {
        st::fn_0072DA70
                  ((undefined4 *)(*(short *)(iVar7 + 8) + 0x10 + iVar7),
                   (AnonPointee_TLOBaseTy_0607 *)(iVar4 + 0x10),(int)*(short *)(iVar4 + 8));
        *(short *)(iVar7 + 8) = *(short *)(iVar7 + 8) + *(short *)(iVar4 + 8);
        DVar8 = st::fn_00757670((AnonShape_00757670_86D3B9A7 *)param_1,iVar5);
        if ((int)DVar8 < 0) {
          return DVar8;
        }
        *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + -1;
        return 1;
      }
      uVar6 = st::fn_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,(undefined4 *)(iVar4 + 0x10));
      if (uVar6 == 0) {
        return -2;
      }
      st::fn_0072DA70
                ((undefined4 *)(iVar4 + 0x10),(AnonPointee_TLOBaseTy_0607 *)(iVar4 + 0x10 + uVar6),
                 (int)*(short *)(iVar4 + 8) - uVar6);
      *(short *)(iVar4 + 8) = *(short *)(iVar4 + 8) - (short)uVar6;
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)param_1->field_001C;
      *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + -1;
      uVar6 = st::fn_00755DA0((uint)param_1,(undefined4 *)param_1->field_001C);
      if (uVar6 != 0) {
        return uVar6;
      }
      return 0;
    }
  }
  else {
    if (*(short *)(iVar5 + 0x34) == 0) {
      /* ST_CALLSITE[00756022]: CALL dword ptr [EAX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar5 = (**(code **)(iVar5 + 8))
                        (*(int *)(iVar5 + 0x44 + *(int *)(iVar5 + 0x1c) * 8) + 0x18 + iVar4);
    }
    else {
      iVar5 = (int)*(short *)(iVar5 + 0x34);
    }
    if ((iVar5 + 8 + param_2 < iVar9) || (param_2 == 0)) {
      uVar6 = st::fn_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,
                           (undefined4 *)(iVar4 + 0x10 + iVar7));
      if (uVar6 == 0) {
        return -2;
      }
      st::fn_007561D0((AnonShape_00753C80_4C8E695D *)param_1,iVar7);
      iVar5 = param_1->field_000C;
      iVar3 = *(int *)(iVar5 + 0x44 + *(int *)(iVar5 + 0x1c) * 8);
      if (iVar3 == -1) {
        uVar10 = *(undefined4 *)(iVar4 + 4);
      }
      else {
        uVar10 = *(undefined4 *)(iVar3 + 0x10 + iVar4);
      }
      *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar5 = st::machine_word_boundary_cast<int>(st::fn_00753B80((AnonShape_00750F20_F8C16F98 *)param_1,uVar10,
                           *(int *)(param_1->field_000C + 0x1c)));
      iVar1 = st::fn_00753C80((AnonShape_00753C80_4C8E695D *)param_1,(int)*(short *)(iVar5 + 8));
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar4 = st::machine_word_boundary_cast<int>(st::fn_00753B80((AnonShape_00750F20_F8C16F98 *)param_1,param_3,
                           *(int *)(param_1->field_000C + 0x1c)));
      if ((iVar9 <= (int)((int)*(short *)(iVar4 + 8) + (int)*(short *)(iVar5 + 8) + uVar6)) &&
         ((int)*(short *)(iVar5 + 8) <= (int)((int)*(short *)(iVar4 + 8) + uVar6))) {
        return 0;
      }
      *(undefined4 *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) = 0;
      *(undefined4 *)param_1->field_001C = *(undefined4 *)(iVar4 + 4);
      st::fn_007574C0((AnonShape_00753C80_4C8E695D *)param_1,iVar4,(uint *)param_1->field_001C,0);
      if ((int)*(short *)(iVar4 + 8) + (int)*(short *)(iVar5 + 8) < iVar9) {
        st::fn_0072DA70
                  ((undefined4 *)(*(short *)(iVar5 + 8) + 0x10 + iVar5),
                   (AnonPointee_TLOBaseTy_0607 *)(iVar4 + 0x10),(int)*(short *)(iVar4 + 8));
        *(short *)(iVar5 + 8) = *(short *)(iVar5 + 8) + *(short *)(iVar4 + 8);
        DVar8 = st::fn_00757670((AnonShape_00757670_86D3B9A7 *)param_1,param_1->field_0010);
        if ((int)DVar8 < 0) {
          return DVar8;
        }
        *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + -1;
        *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) = iVar7;
        return 1;
      }
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar5 + 0x10 + iVar1);
      uVar6 = st::fn_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,
                           (undefined4 *)(iVar5 + 0x10 + iVar1));
      if (uVar6 == 0) {
        return -2;
      }
      local_8 = (undefined2)iVar1;
      *(undefined2 *)(iVar5 + 8) = local_8;
      *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + -1;
      *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) = iVar7;
      uVar6 = st::fn_00755DA0((uint)param_1,(undefined4 *)param_1->field_001C);
      if (uVar6 != 0) {
        return uVar6;
      }
    }
  }
  return 0;
}

// 007561D0 FUN_007561d0
#line 4 "decomp/ST.exe/functions/007561D0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void st::fn_007561D0(AnonShape_00753C80_4C8E695D *param_1,int param_2)

{
  if (param_2 < 1) {
    *(undefined4 *)(&param_1->field_000C[1].field_0xe + (int)param_1->field_000C->field_001C * 8) =
         0xffffffff;
    return;
  }
  st::fn_00753C80(param_1,param_2);
  return;
}

// 007562D0 FUN_007562d0
#line 1 "decomp/ST.exe/functions/007562D0/decomp.c"

void st::fn_007562D0(int *param_1)

{
  st::fn_00759DD0(param_1);
  return;
}

// 00757280 FUN_00757280
#line 4 "decomp/ST.exe/functions/00757280/decomp.c"
void st::fn_00757280(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;

  if (param_1[4] == 0) {
    /* ST_CALLSITE[00757295]: CALL dword ptr [EAX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar1 = (**(code **)*param_1)(param_1,1,0x1c);
    param_1[4] = uVar1;
  }
  *(code **)(param_1[4] + 8) = (code *)st::fn_007572F0;
  *(code **)(param_1[4] + 0xc) = (code *)st::fn_00757300;
  *(code **)(param_1[4] + 0x10) = (code *)st::fn_00757330;
  *(code **)(param_1[4] + 0x14) = (code *)st::fn_00757CD0;
  *(code **)(param_1[4] + 0x18) = (code *)st::fn_00757350;
  *(undefined4 *)(param_1[4] + 4) = 0x7fffffff;
  *(undefined4 *)param_1[4] = param_2;
  return;
}

// 00757360 FUN_00757360
#line 4 "decomp/ST.exe/functions/00757360/decomp.c"
int st::fn_00757360(AnonShape_00757360_9C23D284 *param_1,AnonShape_00757360_9B4621C9 *param_2)

{
  int iVar1;
  InternalExceptionFrame local_4c;
  int local_8;

  local_8 = 0;
  if (param_2->field_0036 == '\0') {
    st::fn_00730C40((undefined1 *)&param_2->field_0036,0x7f2ce8);
    param_2->field_0014 = 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    if (param_2->field_0014 != 0) {
      param_1->field_0008->field_0008 = st::machine_word_boundary_cast<uint>(param_1->field_0008->field_0008 | 0x10);
      st::fn_006D4860
                ((int)param_1->field_0008,param_2->field_0018,(undefined4 *)&param_2->field_0x20,
                 0x20);
    }
    st::fn_006D4C50
              ((int)param_1->field_0008,param_2->field_0024,(int)param_1->field_0008->field_0016);
    param_2->field_0014 = 0;
    g_currentExceptionFrame = local_4c.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  return iVar1;
}

// 00757430 FUN_00757430
#line 1 "decomp/ST.exe/functions/00757430/decomp.c"

uint st::fn_00757430(char *param_1)

{
  char cVar1;
  uint uVar2;

  uVar2 = 0xffffffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return ~uVar2;
}

// 00757450 FUN_00757450
#line 4 "decomp/ST.exe/functions/00757450/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00755E10 -> 00757450 @ 00755E66 */

int st::fn_00757450(AnonShape_00755E10_BD685653 *param_1,int param_2)

{
  short sVar1;
  int iVar2;

  iVar2 = param_1->field_0008->field_0034 + param_1->field_0010;
  if (param_2 == -1) {
    *(undefined4 *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) = 0;
    return 0;
  }
  if (param_2 < *(short *)(iVar2 + 8)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    sVar1 = *(short *)(param_1->field_000C + 0x34);
    if (sVar1 == 0) {
      /* ST_CALLSITE[0075749D]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar2 = (**(code **)(param_1->field_000C + 8))(iVar2 + 0x18 + param_2);
    }
    else {
      iVar2 = (int)sVar1;
    }
    param_2 = param_2 + 8 + iVar2;
  }
  *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) = param_2;
  return param_2;
}

// 007574C0 FUN_007574c0
#line 4 "decomp/ST.exe/functions/007574C0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00755830 -> 007574C0 @ 00755958

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00755830 -> 007574C0 @ 00755958 */

void st::fn_007574C0(AnonShape_00753C80_4C8E695D *param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  AnonPointee_TLOBaseTy_0607 *pAVar5;

  sVar2 = param_1->field_000C->field_0034;
  if (sVar2 == 0) {
    /* ST_CALLSITE[007574DE]: CALL dword ptr [EAX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar3 = (**(code **)&param_1->field_000C->field_0x8)(param_3 + 2);
  }
  else {
    iVar3 = (int)sVar2;
  }
  uVar1 = iVar3 + 8;
  pAVar5 = (AnonPointee_TLOBaseTy_0607 *)(param_2 + 0x10 + param_4);
  st::fn_0072DA70
            ((undefined4 *)(uVar1 + param_2 + 0x10 + param_4),pAVar5,
             *(short *)(param_2 + 8) - param_4);
  for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pAVar5->field_0000 = *param_3;
    param_3 = param_3 + 1;
    pAVar5 = (AnonPointee_TLOBaseTy_0607 *)&pAVar5->field_0004;
  }
  for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)&pAVar5->field_0000 = (char)*param_3;
    param_3 = (uint *)((int)param_3 + 1);
    pAVar5 = (AnonPointee_TLOBaseTy_0607 *)((int)&pAVar5->field_0000 + 1);
  }
  *(short *)(param_2 + 8) = *(short *)(param_2 + 8) + (short)uVar1;
  return;
}

// 00757530 FUN_00757530
#line 4 "decomp/ST.exe/functions/00757530/decomp.c"
uint st::fn_00757530(AnonShape_00757530_EEED7D69 *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  AnonNested_00757530_000C_743CE253 *pAVar4;
  AnonShape_00757530_EEED7D69 *pAVar6;
  AnonNested_00757530_000C_743CE253 **ppAVar7;

  if (param_2 == 0) {
    ppAVar7 = (AnonNested_00757530_000C_743CE253 **)&param_1[1].field_0x8;
    pAVar6 = param_1 + 2;
  }
  else {
    ppAVar7 = &param_1[1].field_000C;
    pAVar6 = (AnonShape_00757530_EEED7D69 *)&param_1[2].field_0x4;
  }
  sVar2 = param_1->field_000C->field_0034;
  if (sVar2 == 0) {
    /* ST_CALLSITE[00757566]: CALL dword ptr [EAX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar3 = (*(code *)param_1->field_000C->field_0008)(param_3 + 2);
  }
  else {
    iVar3 = (int)sVar2;
  }
  uVar1 = iVar3 + 8;
  if ((int)*(uint *)pAVar6 < (int)uVar1) {
    pAVar4 = (AnonNested_00757530_000C_743CE253 *)st::fn_006BFB50((int *)*ppAVar7,uVar1);
    *ppAVar7 = pAVar4;
    if (pAVar4 == nullptr) {
      return 0;
    }
    *(uint *)pAVar6 = uVar1;
  }
  if (uVar1 != 0) {
    pAVar4 = *ppAVar7;
    memmove(pAVar4, param_3, uVar1); /* compiler REP MOVS byte copy */
  }
  return uVar1;
}

// 007575B0 FUN_007575b0
#line 4 "decomp/ST.exe/functions/007575B0/decomp.c"
uint st::fn_007575B0(AnonShape_007575B0_A94973CA *param_1,ushort *param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;

  switch(param_1->field_000C->field_0030) {
  case 1:
    return (int)(char)*param_2 - (int)(char)*param_3;
  case 2:
    return (uint)(byte)*param_2 - (uint)(byte)*param_3;
  case 3:
    return (int)(short)*param_2 - (int)(short)*param_3;
  case 4:
    return (uint)*param_2 - (uint)*param_3;
  case 5:
    iVar1 = *(int *)param_2;
    break;
  case 6:
    iVar1 = *(int *)param_2;
    break;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  default:
    /* ST_CALLSITE[00757646]: CALL dword ptr [ECX + 0x4] */
    uVar2 = (*(code *)param_1->field_000C->field_0004)(param_2,param_3);
    return uVar2;
  }
  if (-1 < iVar1 - *(int *)param_3) {
    return (uint)(iVar1 != *(int *)param_3);
  }
  return 0xffffffff;
}

// 00757670 FUN_00757670
#line 4 "decomp/ST.exe/functions/00757670/decomp.c"
/* [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   /WinDef.h/DWORD; no intervening CALL or EAX/AX/AL/AH definition exists; machine CFG audit:
   used=3, ignored=0, unknown=0 */

DWORD st::fn_00757670(AnonShape_00757670_86D3B9A7 *param_1,int param_2)

{
  undefined1 *puVar1;
  DWORD DVar2;
  int *piVar3;
  int iVar4;

  DVar2 = st::fn_006D4C50
                    ((int)param_1->field_0008,param_2,(int)param_1->field_0008->field_0016);
  if (DVar2 == 0) {
    piVar3 = (int *)(param_1->field_0008->field_0034 + param_2);
    iVar4 = *piVar3;
    if (iVar4 == 0) {
      iVar4 = -1;
    }
    *piVar3 = param_1->field_0008->field_001C;
    param_1->field_0008->field_001C = iVar4;
    piVar3[1] = -2;
    puVar1 = &param_1->field_0008->field_0x8;
    *(uint *)puVar1 = *(uint *)puVar1 | 0x10;
  }
  return DVar2;
}

// 007576C0 FUN_007576c0
#line 4 "decomp/ST.exe/functions/007576C0/decomp.c"
void st::fn_007576C0(undefined4 *param_1)

{
  undefined4 *puVar1;

  /* ST_CALLSITE[007576CE]: CALL dword ptr [EAX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  puVar1 = (undefined4 *)(**(code **)*param_1)(param_1,0,0x1c);
  STField<undefined4 *>(param_1,0x1a2) = puVar1;
  *puVar1 = st::machine_word_boundary_cast<undefined4>(st::fn_007579C0);
  puVar1[1] = st::machine_word_boundary_cast<undefined4>(st::fn_00757C90);
  puVar1[2] = st::machine_word_boundary_cast<undefined4>(st::fn_00757710);
  puVar1[3] = st::machine_word_boundary_cast<undefined4>(st::fn_007579A0);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 1;
  return;
}

// 00757D90 FUN_00757d90
#line 4 "decomp/ST.exe/functions/00757D90/decomp.c"
undefined4 st::fn_00757D90(AnonShape_00757D90_5427B306 *param_1)

{
  int *piVar1;
  byte bVar2;
  AnonNested_AnonShape_00757D90_5427B306_0010_D8C59A06 *pAVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;

  pAVar3 = param_1->field_0010;
  pbVar5 = (byte *)pAVar3->field_0000;
  iVar4 = pAVar3->field_0004;
  while( true ) {
    if (iVar4 == 0) {
      /* ST_CALLSITE[00757DAB]: CALL dword ptr [ESI + 0xc] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar4 = (*(code *)pAVar3[1].field_0004)(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      pbVar5 = (byte *)pAVar3->field_0000;
      iVar4 = pAVar3->field_0004;
    }
    bVar2 = *pbVar5;
    while( true ) {
      pbVar5 = pbVar5 + 1;
      iVar4 = iVar4 + -1;
      if (bVar2 == 0xff) break;
      piVar1 = (int *)(param_1->field_01A6 + 0x5c);
      *piVar1 = *piVar1 + 1;
      pAVar3->field_0000 = st::machine_word_boundary_cast<undefined4>(pbVar5);
      pAVar3->field_0004 = iVar4;
      if (iVar4 == 0) {
        /* ST_CALLSITE[00757DD8]: CALL dword ptr [ESI + 0xc] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar4 = (*(code *)pAVar3[1].field_0004)(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        pbVar5 = (byte *)pAVar3->field_0000;
        iVar4 = pAVar3->field_0004;
      }
      bVar2 = *pbVar5;
    }
    do {
      if (iVar4 == 0) {
        /* ST_CALLSITE[00757DF7]: CALL dword ptr [ESI + 0xc] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar4 = (*(code *)pAVar3[1].field_0004)(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        pbVar5 = (byte *)pAVar3->field_0000;
        iVar4 = pAVar3->field_0004;
      }
      iVar4 = iVar4 + -1;
      uVar6 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (uVar6 == 0xff);
    if (uVar6 != 0) break;
    piVar1 = (int *)(param_1->field_01A6 + 0x5c);
    *piVar1 = *piVar1 + 2;
    pAVar3->field_0000 = st::machine_word_boundary_cast<undefined4>(pbVar5);
    pAVar3->field_0004 = iVar4;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1->field_01A6 + 0x5c) != 0) {
    *(undefined4 *)(param_1->field_01A6 + 0x5c) = 0;
  }
  param_1->field_018E = uVar6;
  pAVar3->field_0000 = st::machine_word_boundary_cast<undefined4>(pbVar5);
  pAVar3->field_0004 = iVar4;
  return 1;
}

// 00757E60 FUN_00757e60
#line 4 "decomp/ST.exe/functions/00757E60/decomp.c"
void st::fn_00757E60(AnonShape_00759190_45B6ED67 *param_1)

{
  AnonNested_AnonShape_00759190_45B6ED67_01A6_2E084C16 *pAVar1;
  int iVar2;
  int iVar3;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  pAVar1 = (AnonNested_AnonShape_00759190_45B6ED67_01A6_2E084C16 *)
           /* ST_CALLSITE[00757E6E]: CALL dword ptr [EAX] */
           (**(code **)param_1->field_0000)(param_1,0,0x60);
  param_1->field_01A6 = pAVar1;
  pAVar1->field_0000 = st::machine_word_boundary_cast<undefined4>(st::fn_00759190);
  param_1->field_01A6->field_0004 = st::machine_word_boundary_cast<undefined4>(st::fn_00758170);
  param_1->field_01A6->field_0008 = st::machine_word_boundary_cast<undefined4>(st::fn_00759120);
  param_1->field_01A6->field_000C = st::machine_word_boundary_cast<undefined4>(st::fn_00758100);
  iVar2 = 0x10;
  do {
    iVar3 = iVar2 + 4;
    *(code **)((int)&param_1->field_01A6->field_0000 + iVar2) = (code *)st::fn_00758100;
    iVar2 = iVar3;
  } while (iVar3 < 0x50);
  param_1->field_01A6->field_0010 = st::machine_word_boundary_cast<undefined4>(st::fn_00757EF0);
  param_1->field_01A6->field_0048 = st::machine_word_boundary_cast<undefined4>(st::fn_00758010);
  st::fn_00759190(param_1);
  return;
}

// 00759DD0 FUN_00759dd0
#line 4 "decomp/ST.exe/functions/00759DD0/decomp.c"
void st::fn_00759DD0(int *param_1)

{
  /* ST_CALLSITE[00759DDC]: CALL dword ptr [EAX + 0x24] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*param_1 + 0x24))(param_1,1);
  param_1[3] = (-(uint)(param_1[2] != 0) & 100) + 100;
  return;
}

// 00759E00 FUN_00759e00
#line 4 "decomp/ST.exe/functions/00759E00/decomp.c"
void st::fn_00759E00(int *param_1)

{
  if (*param_1 != 0) {
    /* ST_CALLSITE[00759E0E]: CALL dword ptr [EAX + 0x28] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  *param_1 = 0;
  param_1[3] = 0;
  return;
}

// 00759E30 FUN_00759e30
#line 4 "decomp/ST.exe/functions/00759E30/decomp.c"
void st::fn_00759E30(undefined4 *param_1)

{
  int iVar1;

  /* ST_CALLSITE[00759E40]: CALL dword ptr [ECX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)*param_1)(param_1,0,0x84);
  *(undefined4 *)(iVar1 + 0x80) = 0;
  return;
}

// 00759E50 FUN_00759e50
#line 4 "decomp/ST.exe/functions/00759E50/decomp.c"
void st::fn_00759E50(undefined4 *param_1)

{
  int iVar1;

  /* ST_CALLSITE[00759E60]: CALL dword ptr [ECX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)*param_1)(param_1,0,0x115);
  *(undefined4 *)(iVar1 + 0x111) = 0;
  return;
}

// 00759E70 FUN_00759e70
#line 1 "decomp/ST.exe/functions/00759E70/decomp.c"

int st::fn_00759E70(int param_1,int param_2)

{
  return (param_1 + -1 + param_2) / param_2;
}

// 00759E90 FUN_00759e90
#line 1 "decomp/ST.exe/functions/00759E90/decomp.c"

int st::fn_00759E90(int param_1,int param_2)

{
  int iVar1;

  iVar1 = param_1 + -1 + param_2;
  return iVar1 - iVar1 % param_2;
}

// 00759EB0 FUN_00759eb0
#line 4 "decomp/ST.exe/functions/00759EB0/decomp.c"
void st::fn_00759EB0(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;

  puVar1 = (undefined4 *)(param_1 + param_2 * 4);
  puVar3 = (undefined4 *)(param_3 + param_4 * 4);
  if (0 < param_5) {
    auto param_2_after_write = param_5; /* compiler stack-slot lifetime split */
    do {
      puVar4 = (undefined4 *)*puVar1;
      puVar5 = (undefined4 *)*puVar3;
      for (uVar2 = param_6 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
      for (uVar2 = param_6 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      param_2_after_write = param_2_after_write + -1;
    } while (param_2_after_write != 0);
  }
  return;
}

// 00759F00 FUN_00759f00
#line 4 "decomp/ST.exe/functions/00759F00/decomp.c"
void st::fn_00759F00(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;

  for (iVar1 = (param_3 & 0xffffff) << 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)param_2 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return;
}

// 00759F30 FUN_00759f30
#line 4 "decomp/ST.exe/functions/00759F30/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0075FEE0 -> 00759F30 @ 0075FF24 */

void st::fn_00759F30(undefined4 *param_1,AnonShape_0075FEE0_E0ABA202 *param_2)

{
  uint uVar1;

  for (uVar1 = (uint)param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  for (uVar1 = (uint)param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)param_1 = 0;
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}

// 0075A180 FUN_0075a180
#line 4 "decomp/ST.exe/functions/0075A180/decomp.c"
void st::fn_0075A180(AnonShape_0075A180_7E367FD8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int local_18;
  int *local_10;
  int local_c;

  local_c = 0;
  iVar1 = param_1->field_012A;
  iVar2 = param_1->field_0196;
  if (0 < param_1->field_001C) {
    piVar9 = (int *)(param_1->field_00D0 + 0xc);
    local_10 = (int *)(iVar2 + 8);
    do {
      iVar6 = (piVar9[6] * *piVar9) / param_1->field_012A;
      iVar12 = *local_10;
      puVar3 = *(undefined4 **)(*(int *)(iVar2 + 0x38) + local_c * 4);
      puVar4 = *(undefined4 **)(*(int *)(iVar2 + 0x3c) + local_c * 4);
      local_18 = (iVar1 + 2) * iVar6;
      if (0 < local_18) {
        puVar10 = puVar4;
        do {
          puVar11 = puVar10 + 1;
          uVar5 = *(undefined4 *)((iVar12 - (int)puVar4) + -4 + (int)puVar11);
          *puVar10 = uVar5;
          *(undefined4 *)((int)puVar3 + (-4 - (int)puVar4) + (int)puVar11) = uVar5;
          local_18 = local_18 + -1;
          puVar10 = puVar11;
        } while (local_18 != 0);
      }
      if (0 < iVar6 * 2) {
        puVar10 = (undefined4 *)(iVar12 + (iVar1 + -2) * iVar6 * 4);
        local_18 = iVar6 * 2;
        puVar11 = puVar4 + iVar6 * iVar1;
        do {
          *(undefined4 *)(((int)puVar4 - iVar12) + (int)puVar10) =
               *(undefined4 *)((int)puVar11 + (iVar12 - (int)puVar4));
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          local_18 = local_18 + -1;
          puVar11 = puVar11 + 1;
        } while (local_18 != 0);
      }
      if (0 < iVar6) {
        iVar8 = 0;
        iVar12 = iVar6;
        do {
          iVar7 = iVar8 + iVar6 * -4;
          iVar8 = iVar8 + 4;
          iVar12 = iVar12 + -1;
          *(undefined4 *)(iVar7 + (int)puVar3) = *puVar3;
        } while (iVar12 != 0);
      }
      local_10 = local_10 + 1;
      local_c = local_c + 1;
      piVar9 = piVar9 + 0x15;
    } while (local_c < param_1->field_001C);
  }
  return;
}

// 0075A490 FUN_0075a490
#line 4 "decomp/ST.exe/functions/0075A490/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void st::fn_0075A490(AnonShape_0075A180_7E367FD8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int local_18;
  int local_14;
  undefined4 *local_10;

  iVar1 = param_1->field_012A;
  iVar2 = param_1->field_0196;
  local_18 = 0;
  if (0 < param_1->field_001C) {
    piVar9 = (int *)(param_1->field_00D0 + 0xc);
    do {
      iVar6 = (piVar9[6] * *piVar9) / param_1->field_012A;
      iVar3 = *(int *)(*(int *)(iVar2 + 0x38) + local_18 * 4);
      iVar4 = *(int *)(*(int *)(iVar2 + 0x3c) + local_18 * 4);
      if (0 < iVar6) {
        local_10 = (undefined4 *)(iVar4 + (iVar1 + 2) * iVar6 * 4);
        iVar8 = iVar3 - iVar4;
        puVar10 = (undefined4 *)(iVar4 + (iVar1 + 1) * iVar6 * 4);
        iVar7 = 0;
        local_14 = iVar6;
        do {
          *(undefined4 *)(iVar7 + iVar6 * -4 + iVar3) = *(undefined4 *)(iVar8 + (int)puVar10);
          uVar5 = *puVar10;
          puVar10 = puVar10 + 1;
          *(undefined4 *)(iVar7 + iVar6 * -4 + iVar4) = uVar5;
          *(undefined4 *)(iVar8 + (int)local_10) = *(undefined4 *)(iVar8 + iVar7 + iVar4);
          *local_10 = *(undefined4 *)(iVar7 + iVar4);
          local_10 = local_10 + 1;
          local_14 = local_14 + -1;
          iVar7 = iVar7 + 4;
        } while (local_14 != 0);
      }
      local_18 = local_18 + 1;
      piVar9 = piVar9 + 0x15;
    } while (local_18 < param_1->field_001C);
  }
  return;
}

// 0075A590 FUN_0075a590
#line 4 "decomp/ST.exe/functions/0075A590/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void st::fn_0075A590(AnonShape_0075A180_7E367FD8 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int local_8;

  local_8 = 0;
  iVar2 = param_1->field_0196;
  if (0 < param_1->field_001C) {
    piVar6 = (int *)(param_1->field_00D0 + 0xc);
    do {
      uVar5 = st::machine_word_boundary_cast<uint>(piVar6[6] * *piVar6);
      iVar3 = (int)uVar5 / param_1->field_012A;
      uVar7 = (uint)piVar6[8] % uVar5;
      if ((uint)piVar6[8] % uVar5 == 0) {
        uVar7 = uVar5;
      }
      if (local_8 == 0) {
        *(int *)(iVar2 + 0x48) = (int)(uVar7 - 1) / iVar3 + 1;
      }
      iVar3 = iVar3 * 2;
      if (0 < iVar3) {
        puVar1 = (undefined4 *)
                 (*(int *)(*(int *)(iVar2 + 0x38 + *(int *)(iVar2 + 0x40) * 4) + local_8 * 4) +
                 uVar7 * 4);
        puVar4 = puVar1;
        do {
          *puVar4 = puVar1[-1];
          puVar4 = puVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_8 = local_8 + 1;
      piVar6 = piVar6 + 0x15;
    } while (local_8 < param_1->field_001C);
  }
  return;
}

// 0075A670 FUN_0075a670
#line 4 "decomp/ST.exe/functions/0075A670/decomp.c"
void st::fn_0075A670(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar4;
  int iVar6;
  int *piVar8;
  int iVar9;
  int *piVar7;

  piVar7 = param_1;
  /* ST_CALLSITE[0075A681]: CALL dword ptr [EAX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  puVar3 = (undefined4 *)(**(code **)*param_1)(param_1,1,0x74);
  STField<undefined4 *>(param_1,0x19a) = puVar3;
  *puVar3 = st::machine_word_boundary_cast<undefined4>(st::fn_0075A780);
  puVar3[2] = st::machine_word_boundary_cast<undefined4>(st::fn_0075A800);
  puVar3[0x1c] = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_2 == nullptr) {
    /* ST_CALLSITE[0075A73F]: CALL dword ptr [EDX + 0x4] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar6 = (**(code **)(*param_1 + 4))(param_1,1,0xa00);
    piVar8 = st::pointer_boundary_cast<int *>(puVar3 + 8);
    iVar9 = 10;
    do {
      *piVar8 = iVar6;
      piVar8 = piVar8 + 1;
      iVar6 = iVar6 + 0x100;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    puVar3[4] = 0;
    puVar3[1] = st::machine_word_boundary_cast<undefined4>(st::fn_0075AAA0);
    puVar3[3] = st::machine_word_boundary_cast<undefined4>(st::fn_0075A860);
    return;
  }
  piVar8 = param_1 + 7;
  piVar1 = param_1 + 0x34;
  int * param_1_after_write = nullptr; /* compiler stack-slot lifetime split */
  if (0 < *piVar8) {
    auto param_2_after_write = puVar3 + 0x12; /* compiler stack-slot lifetime split */
    piVar8 = (int *)(*piVar1 + 0xc);
    do {
      iVar6 = *piVar8;
      iVar9 = iVar6;
      if (piVar7[0x35] != 0) {
        iVar9 = iVar6 * 3;
      }
      iVar2 = *piVar7;
      iVar4 = st::fn_00759E90(piVar8[5],iVar6);
      iVar5 = st::fn_00759E90(piVar8[4],piVar8[-1]);
      /* ST_CALLSITE[0075A6F6]: CALL dword ptr [EBX + 0x14] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar4 = (**(code **)(iVar2 + 0x14))(piVar7,1,1,iVar5,iVar4,iVar9);
      piVar8 = piVar8 + 0x15;
      *param_2_after_write = uVar4;
      param_2_after_write = param_2_after_write + 1;
      param_1_after_write = (int *)((int)param_1_after_write + 1);
    } while ((int)param_1_after_write < piVar7[7]);
  }
  puVar3[1] = st::machine_word_boundary_cast<undefined4>(st::fn_0075AAB0);
  puVar3[3] = st::machine_word_boundary_cast<undefined4>(st::fn_0075ACB0);
  puVar3[4] = st::machine_word_boundary_cast<undefined4>(puVar3 + 0x12);
  return;
}

// 0075A7A0 FUN_0075a7a0
#line 4 "decomp/ST.exe/functions/0075A7A0/decomp.c"
void st::fn_0075A7A0(AnonShape_0075A7A0_BCCC082B *param_1)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = 1;
  iVar1 = param_1->field_019A;
  if (param_1->field_0136 < 2) {
    if (param_1->field_008C < param_1->field_012E - 1U) {
      *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1->field_013A + 0xc);
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(iVar1 + 0x18) = 0;
      return;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar2 = *(undefined4 *)(param_1->field_013A + 0x48);
  }
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  return;
}

// 0075AE60 FUN_0075ae60
#line 4 "decomp/ST.exe/functions/0075AE60/decomp.c"
undefined4 st::fn_0075AE60(undefined4 *param_1)

{
  short *psVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_10;
  int local_c;
  undefined4 *local_8;

  puVar2 = param_1;
  iVar7 = STField<int>(param_1,0x19a);
  local_10 = 0;
  if ((param_1[0x35] == 0) || (param_1[0x26] == 0)) {
    return 0;
  }
  if (*(int *)(iVar7 + 0x70) == 0) {
    /* ST_CALLSITE[0075AEA5]: CALL dword ptr [ECX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar3 = (**(code **)*param_1)(param_1,1,param_1[7] * 0x18);
    *(undefined4 *)(iVar7 + 0x70) = uVar3;
  }
  iVar7 = *(int *)(iVar7 + 0x70);
  local_c = 0;
  if (0 < (int)param_1[7]) {
    local_8 = (undefined4 *)(param_1[0x34] + 0x4c);
    undefined4 * param_1_after_write = nullptr; /* compiler stack-slot lifetime split */
    do {
      psVar1 = (short *)*local_8;
      if (psVar1 == nullptr) {
        return 0;
      }
      if (*psVar1 == 0) {
        return 0;
      }
      if (psVar1[1] == 0) {
        return 0;
      }
      if (psVar1[8] == 0) {
        return 0;
      }
      if (psVar1[0x10] == 0) {
        return 0;
      }
      if (psVar1[9] == 0) {
        return 0;
      }
      if (psVar1[2] == 0) {
        return 0;
      }
      piVar4 = (int *)(puVar2[0x26] + (int)param_1_after_write);
      if (*piVar4 < 0) {
        return 0;
      }
      iVar6 = iVar7 - (int)piVar4;
      iVar5 = 5;
      do {
        piVar4 = piVar4 + 1;
        *(int *)(iVar6 + (int)piVar4) = *piVar4;
        if (*piVar4 != 0) {
          local_10 = 1;
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar7 = iVar7 + 0x18;
      local_c = local_c + 1;
      param_1_after_write = param_1_after_write + 0x40;
      local_8 = local_8 + 0x15;
    } while (local_c < (int)puVar2[7]);
  }
  return local_10;
}

// 0075B540 FUN_0075b540
#line 4 "decomp/ST.exe/functions/0075B540/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void st::fn_0075B540(undefined4 *param_1,int param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  char cVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  int local_51c [257];
  undefined4 local_118;
  int *local_10;
  int local_c;
  int local_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (*param_3 == 0) {
    /* ST_CALLSITE[0075B561]: CALL dword ptr [ECX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar4 = (**(code **)*param_1)(param_1,1,0x5d4);
    *param_3 = iVar4;
  }
  iVar4 = *param_3;
  piVar7 = nullptr;
  *(int *)(iVar4 + 0xd0) = param_2;
  int * param_3_after_write = nullptr; /* compiler stack-slot lifetime split */
  local_8 = 1;
  do {
    bVar1 = *(byte *)(local_8 + param_2);
    if (bVar1 != 0) {
      uVar3 = (undefined1)local_8;
      puVar12 = (undefined4 *)((int)&local_118 + (int)piVar7);
      for (uVar8 = (uint)(bVar1 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar12 = CONCAT22(CONCAT11(uVar3,uVar3),CONCAT11(uVar3,uVar3));
        puVar12 = puVar12 + 1;
      }
      for (uVar8 = bVar1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar12 = uVar3;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      piVar7 = (int *)((int)param_3_after_write + (uint)bVar1);
      param_3_after_write = piVar7;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 0x11);
  *(undefined1 *)((int)&local_118 + (int)piVar7) = 0;
  iVar9 = 0;
  uVar8 = local_118 & 0xff;
  iVar5 = 0;
  cVar11 = (char)local_118;
  while (cVar11 != '\0') {
    if (*(byte *)((int)&local_118 + iVar5) == uVar8) {
      piVar7 = local_51c + iVar5;
      iVar6 = iVar5;
      do {
        iVar5 = iVar6 + 1;
        *piVar7 = iVar9;
        piVar7 = piVar7 + 1;
        iVar2 = iVar6 + 1;
        iVar9 = iVar9 + 1;
        iVar6 = iVar5;
      } while (*(byte *)((int)&local_118 + iVar2) == uVar8);
    }
    iVar9 = iVar9 << 1;
    uVar8 = uVar8 + 1;
    cVar11 = *(char *)((int)&local_118 + iVar5);
  }
  iVar5 = 0;
  iVar9 = 1;
  piVar7 = (int *)(iVar4 + 0x48);
  do {
    if (*(char *)(iVar9 + param_2) == '\0') {
      *piVar7 = -1;
    }
    else {
      iVar6 = local_51c[iVar5];
      piVar7[0x12] = iVar5;
      piVar7[-0x11] = iVar6;
      iVar5 = iVar5 + (uint)*(byte *)(iVar9 + param_2);
      *piVar7 = local_51c[iVar5 + -1];
    }
    iVar9 = iVar9 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar9 < 0x11);
  piVar7 = nullptr;
  iVar5 = 1;
  *(undefined4 *)(iVar4 + 0x88) = 0xfffff;
  memset((void *)(iVar4 + 0xd4), 0, 0x400); /* compiler bulk-zero initialization */
  param_3_after_write = nullptr;
  local_8 = 7;
  do {
    local_c = 1;
    if (*(char *)(iVar5 + param_2) != '\0') {
      iVar9 = 1 << ((byte)local_8 & 0x1f);
      local_10 = local_51c + (int)piVar7;
      puVar13 = (undefined1 *)((int)piVar7 + param_2 + 0x11);
      do {
        iVar6 = *local_10 << ((byte)local_8 & 0x1f);
        if (0 < iVar9) {
          puVar10 = (undefined1 *)(iVar6 + 0x4d4 + iVar4);
          piVar7 = (int *)(iVar4 + 0xd4 + iVar6 * 4);
          iVar6 = iVar9;
          do {
            *piVar7 = iVar5;
            *puVar10 = *puVar13;
            piVar7 = piVar7 + 1;
            puVar10 = puVar10 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        local_c = local_c + 1;
        piVar7 = (int *)((int)param_3_after_write + 1);
        local_10 = local_10 + 1;
        puVar13 = puVar13 + 1;
        param_3_after_write = piVar7;
      } while (local_c <= (int)(uint)*(byte *)(iVar5 + param_2));
    }
    iVar5 = iVar5 + 1;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  return;
}

// 0075B720 FUN_0075b720
#line 4 "decomp/ST.exe/functions/0075B720/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0075C180 -> 0075B720 @ 0075C24F | 0075C180 -> 0075B720 @ 0075C2D3 */

undefined4
st::fn_0075B720(undefined4 *param_1,AnonShape_0075C180_8EED234B *param_2,int param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;

  pbVar2 = (byte *)*param_1;
  iVar1 = param_1[1];
  for (; param_3 < 0x19; param_3 = param_3 + 8) {
    if (param_1[2] == 0) {
      if (iVar1 == 0) {
        /* ST_CALLSITE[0075B74F]: CALL dword ptr [ECX + 0xc] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar1 = (**(code **)(*(int *)(param_1[5] + 0x10) + 0xc))(param_1[5]);
        if (iVar1 == 0) {
          return 0;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pbVar2 = (byte *)**(undefined4 **)(param_1[5] + 0x10);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar1 = (*(undefined4 **)(param_1[5] + 0x10))[1];
      }
      iVar1 = iVar1 + -1;
      uVar3 = (uint)*pbVar2;
      pbVar2 = pbVar2 + 1;
      if (uVar3 == 0xff) {
        do {
          if (iVar1 == 0) {
            /* ST_CALLSITE[0075B77E]: CALL dword ptr [ECX + 0xc] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            iVar1 = (**(code **)(*(int *)(param_1[5] + 0x10) + 0xc))(param_1[5]);
            if (iVar1 == 0) {
              return 0;
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            pbVar2 = (byte *)**(undefined4 **)(param_1[5] + 0x10);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar1 = (*(undefined4 **)(param_1[5] + 0x10))[1];
          }
          iVar1 = iVar1 + -1;
          uVar3 = (uint)*pbVar2;
          pbVar2 = pbVar2 + 1;
        } while (uVar3 == 0xff);
        if (uVar3 != 0) {
          param_1[2] = uVar3;
          goto LAB_0075b7ac;
        }
        uVar3 = 0xff;
      }
    }
    else {
LAB_0075b7ac:
      if (param_4 <= param_3) break;
      if (*(int *)param_1[6] == 0) {
        *(int *)param_1[6] = 1;
      }
      uVar3 = 0;
    }
    param_2 = (AnonShape_0075C180_8EED234B *)((int)param_2 << 8 | uVar3);
  }
  param_1[4] = param_3;
  *param_1 = st::machine_word_boundary_cast<undefined4>(pbVar2);
  param_1[1] = iVar1;
  param_1[3] = st::machine_word_boundary_cast<undefined4>(param_2);
  return 1;
}

// 0075B800 FUN_0075b800
#line 4 "decomp/ST.exe/functions/0075B800/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0075C180 -> 0075B800 @ 0075C2A9 */

uint st::fn_0075B800(undefined4 *param_1,AnonShape_0075C180_8EED234B *param_2,int param_3,int param_4,
                 int param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;

  if (param_3 < param_5) {
    iVar1 = st::fn_0075B720(param_1,param_2,param_3,param_5);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    param_2 = (AnonShape_0075C180_8EED234B *)param_1[3];
    param_3 = param_1[4];
  }
  iVar1 = param_3 - param_5;
  piVar3 = (int *)(param_4 + 0x44 + param_5 * 4);
  uVar2 = (int)param_2 >> ((byte)iVar1 & 0x1f) & (1 << ((byte)param_5 & 0x1f)) - 1U;
  if (*piVar3 < (int)uVar2) {
    do {
      if (iVar1 < 1) {
        iVar1 = st::fn_0075B720(param_1,param_2,iVar1,1);
        if (iVar1 == 0) {
          return 0xffffffff;
        }
        param_2 = (AnonShape_0075C180_8EED234B *)param_1[3];
        iVar1 = param_1[4];
      }
      iVar1 = iVar1 + -1;
      piVar3 = piVar3 + 1;
      uVar2 = uVar2 << 1 | (int)param_2 >> ((byte)iVar1 & 0x1f) & 1U;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = param_5 + 1;
    } while (*piVar3 < (int)uVar2);
  }
  param_1[4] = iVar1;
  param_1[3] = st::machine_word_boundary_cast<undefined4>(param_2);
  if (0x10 < param_5) {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)*(byte *)((*(int *)(param_4 + 0x8c + param_5 * 4) - *(int *)(param_4 + param_5 * 4))
                         + *(int *)(param_4 + 0xd0) + 0x11 + uVar2);
}

// 0075B8E0 FUN_0075b8e0
#line 4 "decomp/ST.exe/functions/0075B8E0/decomp.c"
void st::fn_0075B8E0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;

  /* ST_CALLSITE[0075B8EE]: CALL dword ptr [EAX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  puVar1 = (undefined4 *)(**(code **)*param_1)(param_1,1,0x48);
  STField<undefined4 *>(param_1,0x1aa) = puVar1;
  *puVar1 = st::machine_word_boundary_cast<undefined4>(st::fn_0075B920);
  puVar1[1] = st::machine_word_boundary_cast<undefined4>(st::fn_0075BA30);
  puVar1 = puVar1 + 10;
  iVar2 = 4;
  do {
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 0075BE40 FUN_0075be40
#line 4 "decomp/ST.exe/functions/0075BE40/decomp.c"
undefined4 st::fn_0075BE40(AnonShape_0075BE40_B9FD5FDF *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;

  iVar1 = param_1->field_01AA;
  param_1->field_01A6->field_005C =st::machine_word_boundary_cast<undefined4>(
       param_1->field_01A6->field_005C +
       ((int)(*(int *)(iVar1 + 0xc) + (*(int *)(iVar1 + 0xc) >> 0x1f & 7U)) >> 3));
  *(undefined4 *)(iVar1 + 0xc) = 0;
  /* ST_CALLSITE[0075BE76]: CALL dword ptr [EAX + 0x8] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar3 = (*(code *)param_1->field_01A6->field_0008)(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = 0;
  if (0 < param_1->field_0136) {
    puVar4 = (undefined4 *)(iVar1 + 0x14);
    do {
      *puVar4 = 0;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < param_1->field_0136);
  }
  uVar2 = param_1->field_010C;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  return 1;
}

// 0075BED0 FUN_0075bed0
#line 4 "decomp/ST.exe/functions/0075BED0/decomp.c"
void st::fn_0075BED0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;

  /* ST_CALLSITE[0075BEDF]: CALL dword ptr [EAX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  puVar1 = (undefined4 *)(**(code **)*param_1)(param_1,1,0x40);
  STField<undefined4 *>(param_1,0x1aa) = puVar1;
  *puVar1 = st::machine_word_boundary_cast<undefined4>(st::fn_0075BF40);
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  /* ST_CALLSITE[0075BF09]: CALL dword ptr [EDX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  puVar1 = (undefined4 *)(**(code **)*param_1)(param_1,1,param_1[7] << 8);
  param_1[0x26] = st::machine_word_boundary_cast<undefined4>(puVar1);
  iVar3 = 0;
  if (0 < (int)param_1[7]) {
    do {
      puVar4 = puVar1;
      for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0xffffffff;
        puVar4 = puVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 0x40;
    } while (iVar3 < (int)param_1[7]);
  }
  return;
}

// 0075C3B0 FUN_0075c3b0
#line 4 "decomp/ST.exe/functions/0075C3B0/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

undefined4 st::fn_0075C3B0(AnonShape_0075BE40_B9FD5FDF *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;

  iVar1 = param_1->field_01AA;
  param_1->field_01A6->field_005C =st::machine_word_boundary_cast<undefined4>(
       param_1->field_01A6->field_005C +
       ((int)(*(int *)(iVar1 + 0xc) + (*(int *)(iVar1 + 0xc) >> 0x1f & 7U)) >> 3));
  *(undefined4 *)(iVar1 + 0xc) = 0;
  /* ST_CALLSITE[0075C3E6]: CALL dword ptr [EAX + 0x8] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar2 = (*(code *)param_1->field_01A6->field_0008)(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = 0;
  if (0 < param_1->field_0136) {
    puVar3 = (undefined4 *)(iVar1 + 0x18);
    do {
      *puVar3 = 0;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < param_1->field_0136);
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x28) = param_1->field_010C;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  return 1;
}

// 0075CB40 FUN_0075cb40
#line 4 "decomp/ST.exe/functions/0075CB40/decomp.c"
void st::fn_0075CB40(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *local_8;

  puVar1 = param_1;
  /* ST_CALLSITE[0075CB50]: CALL dword ptr [EAX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  puVar2 = (undefined4 *)(**(code **)*param_1)(param_1,1,0x54);
  STField<undefined4 *>(param_1,0x1ae) = puVar2;
  *puVar2 = st::machine_word_boundary_cast<undefined4>(st::fn_0075CBC0);
  iVar4 = 0;
  if (0 < (int)param_1[7]) {
    local_8 = (undefined4 *)(param_1[0x34] + 0x50);
    auto param_1_after_write = puVar2 + 0xb; /* compiler stack-slot lifetime split */
    do {
      /* ST_CALLSITE[0075CB84]: CALL dword ptr [ECX] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1,1,0x100);
      *local_8 = st::machine_word_boundary_cast<undefined4>(puVar2);
      iVar4 = iVar4 + 1;
      for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      local_8 = local_8 + 0x15;
      *param_1_after_write = 0xffffffff;
      param_1_after_write = param_1_after_write + 1;
    } while (iVar4 < (int)puVar1[7]);
  }
  return;
}

// 0075CDF0 FUN_0075cdf0
#line 4 "decomp/ST.exe/functions/0075CDF0/decomp.c"
void st::fn_0075CDF0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;

  /* ST_CALLSITE[0075CDFF]: CALL dword ptr [EAX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  puVar2 = (undefined4 *)(**(code **)*param_1)(param_1,1,0x1c);
  STField<undefined4 *>(param_1,0x19e) = puVar2;
  *puVar2 = st::machine_word_boundary_cast<undefined4>(st::fn_0075CE80);
  puVar2[2] = 0;
  puVar2[3] = 0;
  if (param_1[0x13] != 0) {
    iVar5 = STField<int>(param_1,0x126);
    puVar2[4] = iVar5;
    if (param_2 != 0) {
      iVar1 = *param_1;
      iVar3 = st::fn_00759E90(param_1[0x1b],iVar5);
      /* ST_CALLSITE[0075CE4A]: CALL dword ptr [EBX + 0x10] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar4 = (**(code **)(iVar1 + 0x10))(param_1,1,0,param_1[0x1c] * param_1[0x1a],iVar3,iVar5);
      puVar2[2] = uVar4;
      return;
    }
    /* ST_CALLSITE[0075CE65]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar4 = (**(code **)(*param_1 + 8))(param_1,1,param_1[0x1c] * param_1[0x1a],iVar5);
    puVar2[3] = uVar4;
  }
  return;
}

// 0075DA80 FUN_0075da80
#line 4 "decomp/ST.exe/functions/0075DA80/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_0075DA80(AnonShape_0075DA80_57A0CDEF *param_1)

{
  AnonNested_0075DA80_01B6_323D7698 *pAVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;

  pAVar1 = param_1->field_01B6;
  /* ST_CALLSITE[0075DA9A]: CALL dword ptr [EAX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)param_1->field_0000)(param_1,1,0x400);
  pAVar1->field_0008 = uVar2;
  /* ST_CALLSITE[0075DAA9]: CALL dword ptr [ECX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)param_1->field_0000)(param_1,1,0x400);
  pAVar1->field_000C = uVar2;
  /* ST_CALLSITE[0075DAB8]: CALL dword ptr [EDX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)param_1->field_0000)(param_1,1,0x400);
  pAVar1->field_0010 = uVar2;
  /* ST_CALLSITE[0075DAC7]: CALL dword ptr [EAX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)param_1->field_0000)(param_1,1,0x400);
  pAVar1->field_0014 = uVar2;
  iVar3 = 0;
  local_8 = 0x5b6900;
  auto param_1_after_write = (AnonShape_0075DA80_57A0CDEF *)0xff1daf00; /* compiler stack-slot lifetime split */
  iVar5 = -0xb2f480;
  iVar4 = 0x2c8d00;
  do {
    *(int *)(pAVar1->field_0008 + iVar3) = iVar5 >> 0x10;
    iVar5 = iVar5 + 0x166e9;
    *(int *)(pAVar1->field_000C + iVar3) = (int)param_1_after_write >> 0x10;
    *(int *)(pAVar1->field_0010 + iVar3) = local_8;
    local_8 = local_8 + -0xb6d2;
    *(int *)(pAVar1->field_0014 + iVar3) = iVar4;
    iVar4 = iVar4 + -0x581a;
    param_1_after_write = (AnonShape_0075DA80_57A0CDEF *)&param_1_after_write[0x105].field_0xf6;
    iVar3 = iVar3 + 4;
  } while (-0x2b34e7 < iVar4);
  return;
}

// 0075DE90 FUN_0075de90
#line 4 "decomp/ST.exe/functions/0075DE90/decomp.c"
void st::fn_0075DE90(AnonShape_0075DF10_BA4C6604 *param_1)

{
  AnonNested_0075DF10_01B2_1F0F9C79 *pAVar1;
  undefined4 uVar2;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  pAVar1 = (AnonNested_0075DF10_01B2_1F0F9C79 *)
           /* ST_CALLSITE[0075DE9F]: CALL dword ptr [EAX] */
           (*(code *)param_1->field_0000->field_0000)(param_1,1,0x30);
  param_1->field_01B2 = pAVar1;
  *(code **)pAVar1 = (code *)st::fn_0075DFE0;
  *(undefined4 *)&pAVar1->field_0x8 = 0;
  *(int *)&pAVar1[1].field_0x8 = *(int *)&param_1->field_0x70 * *(int *)&param_1->field_0x68;
  if (*(int *)&param_1->field_0x126 == 2) {
    uVar2 = *(undefined4 *)&pAVar1[1].field_0x8;
    *(code **)&pAVar1->field_0x4 = (code *)st::fn_0075E000;
    *(code **)&pAVar1->field_0xc = (code *)st::fn_0075E260;
    /* ST_CALLSITE[0075DEE0]: CALL dword ptr [EDX + 0x4] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar2 = (*(code *)param_1->field_0000->field_0004)(param_1,1,uVar2);
    *(undefined4 *)(pAVar1 + 1) = uVar2;
    st::fn_0075DF10(param_1);
    return;
  }
  *(code **)&pAVar1->field_0x4 = (code *)st::fn_0075E0C0;
  *(code **)&pAVar1->field_0xc = (code *)st::fn_0075E100;
  *(undefined4 *)(pAVar1 + 1) = 0;
  st::fn_0075DF10(param_1);
  return;
}

// 0075DF10 FUN_0075df10
#line 4 "decomp/ST.exe/functions/0075DF10/decomp.c"
void st::fn_0075DF10(AnonShape_0075DF10_BA4C6604 *param_1)

{
  AnonNested_0075DF10_01B2_1F0F9C79 *pAVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;

  pAVar1 = param_1->field_01B2;
  /* ST_CALLSITE[0075DF2A]: CALL dword ptr [EAX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (*(code *)param_1->field_0000->field_0000)(param_1,1,0x400);
  pAVar1->field_0010 = uVar2;
  /* ST_CALLSITE[0075DF39]: CALL dword ptr [ECX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (*(code *)param_1->field_0000->field_0000)(param_1,1,0x400);
  pAVar1->field_0014 = uVar2;
  /* ST_CALLSITE[0075DF48]: CALL dword ptr [EDX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (*(code *)param_1->field_0000->field_0000)(param_1,1,0x400);
  pAVar1->field_0018 = uVar2;
  /* ST_CALLSITE[0075DF57]: CALL dword ptr [EAX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (*(code *)param_1->field_0000->field_0000)(param_1,1,0x400);
  pAVar1->field_001C = uVar2;
  iVar3 = 0;
  local_8 = 0x5b6900;
  auto param_1_after_write = (AnonShape_0075DF10_BA4C6604 *)0xff1daf00; /* compiler stack-slot lifetime split */
  iVar5 = -0xb2f480;
  iVar4 = 0x2c8d00;
  do {
    *(int *)(pAVar1->field_0010 + iVar3) = iVar5 >> 0x10;
    iVar5 = iVar5 + 0x166e9;
    *(int *)(pAVar1->field_0014 + iVar3) = (int)param_1_after_write >> 0x10;
    *(int *)(pAVar1->field_0018 + iVar3) = local_8;
    local_8 = local_8 + -0xb6d2;
    *(int *)(pAVar1->field_001C + iVar3) = iVar4;
    iVar4 = iVar4 + -0x581a;
    param_1_after_write = (AnonShape_0075DF10_BA4C6604 *)&param_1_after_write[0x107].field_0x19a;
    iVar3 = iVar3 + 4;
  } while (-0x2b34e7 < iVar4);
  return;
}

// 0075E890 FUN_0075e890
#line 4 "decomp/ST.exe/functions/0075E890/decomp.c"
void st::fn_0075E890(AnonShape_0075E890_C23EB446 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  short *psVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 local_188 [256];
  byte local_88 [128];
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8 = *(int *)(param_1->field_01BA + 0x18);
  iVar4 = (param_4 >> 2) * 0x20 + 4;
  piVar6 = (int *)((param_3 >> 3) * 0x20 + 2);
  iVar5 = (param_2 >> 2) * 0x20 + 4;
  iVar1 = st::fn_0075E980((int)param_1,iVar5,piVar6,iVar4,(int)local_188);
  st::fn_0075EB40((AnonShape_0075EB40_977462DD *)param_1,iVar5,(int)piVar6,iVar4,iVar1,(int)local_188,
               local_88);
  auto param_1_after_write = (AnonShape_0075E890_C23EB446 *)0x4; /* compiler stack-slot lifetime split */
  pbVar3 = local_88;
  piVar6 = (int *)(local_8 + (param_2 >> 2) * 0x10);
  do {
    auto param_2_after_write = 8; /* compiler stack-slot lifetime split */
    iVar1 = ((param_3 >> 3) * 0x100 + (param_4 >> 2) * 4) * 2;
    do {
      iVar4 = 4;
      psVar2 = (short *)(*piVar6 + iVar1);
      do {
        *psVar2 = *pbVar3 + 1;
        psVar2 = psVar2 + 1;
        pbVar3 = pbVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      iVar1 = iVar1 + 0x40;
      param_2_after_write = param_2_after_write + -1;
    } while (param_2_after_write != 0);
    piVar6 = piVar6 + 1;
    param_1_after_write = (AnonShape_0075E890_C23EB446 *)((int)&param_1_after_write[-1].field_01BA + 3);
  } while (param_1_after_write != nullptr);
  return;
}

// 0075E980 FUN_0075e980
#line 1 "decomp/ST.exe/functions/0075E980/decomp.c"

void st::fn_0075E980(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_428 [256];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int *piVar7;

  piVar7 = param_3;
  iVar2 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_c = *(int *)(param_1 + 0x7c);
  local_20 = (int)param_3 * 2 + 0x1c >> 1;
  local_8 = 0x7fffffff;
  auto param_1_after_write = 0; /* compiler stack-slot lifetime split */
  local_28 = param_2 * 2 + 0x18 >> 1;
  local_24 = param_4 * 2 + 0x18 >> 1;
  if (0 < local_c) {
    piVar6 = *(int **)(iVar2 + 0x80);
    auto param_3_after_write = local_428; /* compiler stack-slot lifetime split */
    local_18 = *piVar6;
    local_10 = piVar6[1];
    local_14 = piVar6[2];
    do {
      uVar1 = (uint)*(byte *)(local_18 + param_1_after_write);
      if ((int)uVar1 < param_2) {
        iVar5 = (uVar1 - param_2) * (uVar1 - param_2);
        iVar4 = param_2 + 0x18;
LAB_0075ea13:
        iVar2 = iVar4;
      }
      else {
        iVar2 = param_2 + 0x18;
        iVar4 = param_2;
        if (iVar2 < (int)uVar1) {
          iVar5 = (uVar1 - iVar2) * (uVar1 - iVar2);
          goto LAB_0075ea13;
        }
        iVar5 = 0;
        if (local_28 < (int)uVar1) goto LAB_0075ea13;
      }
      uVar3 = (uint)*(byte *)(local_10 + param_1_after_write);
      if ((int)uVar3 < (int)piVar7) {
        iVar4 = (uVar3 - (int)piVar7) * 3;
        iVar5 = iVar5 + iVar4 * iVar4;
        iVar4 = uVar3 - (int)(piVar7 + 7);
      }
      else {
        piVar6 = piVar7 + 7;
        if ((int)piVar6 < (int)uVar3) {
          iVar4 = (uVar3 - (int)piVar6) * 3;
          iVar5 = iVar5 + iVar4 * iVar4;
        }
        else if ((int)uVar3 <= local_20) {
          iVar4 = uVar3 - (int)piVar6;
          goto LAB_0075ea6d;
        }
        iVar4 = uVar3 - (int)piVar7;
      }
LAB_0075ea6d:
      uVar3 = (uint)*(byte *)(local_14 + param_1_after_write);
      if ((int)uVar3 < param_4) {
        iVar7 = (uVar3 - param_4) * 2;
        iVar5 = iVar5 + iVar7 * iVar7;
        local_1c = uVar3 - (param_4 + 0x18);
      }
      else {
        local_1c = param_4 + 0x18;
        if (local_1c < (int)uVar3) {
          iVar7 = (uVar3 - local_1c) * 2;
          iVar5 = iVar5 + iVar7 * iVar7;
        }
        else if ((int)uVar3 <= local_24) {
          local_1c = uVar3 - local_1c;
          goto LAB_0075eac8;
        }
        local_1c = uVar3 - param_4;
      }
LAB_0075eac8:
      iVar2 = (uVar1 - iVar2) * (uVar1 - iVar2) + iVar4 * 3 * iVar4 * 3 +
              local_1c * 2 * local_1c * 2;
      *param_3_after_write = iVar5;
      if (iVar2 < local_8) {
        local_8 = iVar2;
      }
      param_1_after_write = param_1_after_write + 1;
      param_3_after_write = param_3_after_write + 1;
    } while (param_1_after_write < local_c);
  }
  iVar2 = 0;
  iVar4 = 0;
  if (0 < local_c) {
    piVar6 = local_428;
    do {
      if (*piVar6 <= local_8) {
        *(char *)(iVar2 + param_5) = (char)iVar4;
        iVar2 = iVar2 + 1;
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar4 < local_c);
  }
  return;
}

// 0075EB40 FUN_0075eb40
#line 1 "decomp/ST.exe/functions/0075EB40/decomp.c"

void st::fn_0075EB40(AnonShape_0075EB40_977462DD *param_1,int param_2,int param_3,int param_4,
                 int param_5,int param_6,byte *param_7)

{
  byte bVar1;
  AnonNested_0075EB40_0080_454B432A *pAVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int local_22c [128];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  byte *local_8;

  piVar9 = local_22c;
  for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar9 = 0x7fffffff;
    piVar9 = piVar9 + 1;
  }
  local_18 = 0;
  if (0 < param_5) {
    do {
      local_10 = 4;
      bVar1 = *(byte *)(local_18 + param_6);
      uVar8 = (uint)bVar1;
      pAVar2 = param_1->field_0080;
      iVar7 = param_2 - (uint)*(byte *)(uVar8 + pAVar2->field_0000);
      iVar4 = param_3 - (uint)*(byte *)(pAVar2->field_0004 + uVar8);
      iVar6 = iVar4 * 3;
      iVar5 = (param_4 - (uint)*(byte *)(pAVar2->field_0008 + uVar8)) * 2;
      iVar6 = iVar5 * iVar5 + iVar6 * iVar6 + iVar7 * iVar7;
      local_2c = (iVar5 + 8) * 0x20;
      local_28 = (iVar4 * 9 + 0x12) * 8;
      piVar9 = local_22c;
      local_8 = param_7;
      local_c = (iVar7 + 4) * 0x10;
      do {
        local_20 = local_28;
        local_14 = iVar6;
        local_1c = 8;
        iVar4 = iVar6;
        do {
          local_24 = 4;
          iVar5 = local_2c;
          local_14 = iVar4;
          do {
            pbVar3 = local_8;
            if (iVar4 < *piVar9) {
              *piVar9 = iVar4;
              *pbVar3 = bVar1;
            }
            iVar4 = iVar4 + iVar5;
            iVar5 = iVar5 + 0x200;
            piVar9 = piVar9 + 1;
            local_8 = local_8 + 1;
            local_24 = local_24 + -1;
          } while (local_24 != 0);
          iVar4 = local_14 + local_20;
          local_20 = local_20 + 0x120;
          local_1c = local_1c + -1;
          local_14 = iVar4;
        } while (local_1c != 0);
        iVar6 = iVar6 + local_c;
        local_c = local_c + 0x80;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      local_18 = local_18 + 1;
    } while (local_18 < param_5);
  }
  return;
}

// 0075EF60 FUN_0075ef60
#line 4 "decomp/ST.exe/functions/0075EF60/decomp.c"
void st::fn_0075EF60(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  /* ST_CALLSITE[0075EF77]: CALL dword ptr [EAX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  piVar1 = (int *)(**(code **)*param_1)(param_1,1,param_2 << 5);
  *piVar1 = 0;
  piVar1[1] = 0x1f;
  piVar1[2] = 0;
  piVar1[3] = 0x3f;
  piVar1[4] = 0;
  piVar1[5] = 0x1f;
  st::fn_0075EFE0(param_1,piVar1);
  iVar2 = st::fn_0075F3F0(param_1,(int)piVar1,1,param_2);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      st::fn_0075F590((AnonShape_0075F590_570A7014 *)param_1,piVar1,iVar3);
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 8;
    } while (iVar3 < iVar2);
    param_1[0x1f] = iVar2;
    return;
  }
  param_1[0x1f] = iVar2;
  return;
}

// 0075EFE0 FUN_0075efe0
#line 4 "decomp/ST.exe/functions/0075EFE0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void st::fn_0075EFE0(int *param_1,int *param_2)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar5 = *(int *)(STField<int>(param_1,0x1ba) + 0x18);
  local_c = (int *)*param_2;
  local_8 = param_2[2];
  local_20 = param_2[3];
  local_14 = param_2[4];
  local_10 = (int *)param_2[1];
  local_18 = param_2[5];
  if ((int)local_c < (int)local_10) {
    if ((int)local_c <= (int)local_10) {
      local_28 = (int *)(iVar5 + (int)local_c * 4);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = local_c;
      do {
        if (local_8 <= local_20) {
          psVar2 = (short *)(*local_28 + (local_8 * 0x20 + local_14) * 2);
          iVar8 = local_14;
          local_1c = local_8;
          psVar3 = psVar2;
          do {
            for (; iVar8 <= local_18; iVar8 = iVar8 + 1) {
              sVar1 = *psVar2;
              psVar2 = psVar2 + 1;
              if (sVar1 != 0) {
                local_c = param_1;
                *param_2 = (int)param_1;
                goto LAB_0075f0a7;
              }
            }
            psVar2 = psVar3 + 0x20;
            local_1c = local_1c + 1;
            iVar8 = local_14;
            psVar3 = psVar2;
          } while (local_1c <= local_20);
        }
        param_1 = (int *)((int)param_1 + 1);
        local_28 = local_28 + 1;
      } while ((int)param_1 <= (int)local_10);
    }
LAB_0075f0a7:
    if ((int)local_c < (int)local_10) {
      local_28 = (int *)(iVar5 + (int)local_10 * 4);
      param_1 = local_10;
      do {
        if (local_8 <= local_20) {
          psVar2 = (short *)(*local_28 + (local_8 * 0x20 + local_14) * 2);
          iVar8 = local_14;
          iVar7 = local_8;
          psVar3 = psVar2;
          do {
            for (; iVar8 <= local_18; iVar8 = iVar8 + 1) {
              sVar1 = *psVar2;
              psVar2 = psVar2 + 1;
              if (sVar1 != 0) {
                param_2[1] = (int)param_1;
                local_10 = param_1;
                goto LAB_0075f125;
              }
            }
            iVar7 = iVar7 + 1;
            psVar2 = psVar3 + 0x20;
            iVar8 = local_14;
            psVar3 = psVar2;
          } while (iVar7 <= local_20);
        }
        param_1 = (int *)((int)param_1 + -1);
        local_28 = local_28 + -1;
      } while ((int)local_c <= (int)param_1);
    }
  }
LAB_0075f125:
  if (local_8 < local_20) {
    if (local_8 <= local_20) {
      iVar8 = (local_8 * 0x20 + local_14) * 2;
      local_1c = local_8;
      do {
        param_1 = local_c;
        if ((int)local_c <= (int)local_10) {
          piVar6 = (int *)(iVar5 + (int)local_c * 4);
          do {
            psVar2 = (short *)(*piVar6 + iVar8);
            for (iVar7 = local_14; iVar7 <= local_18; iVar7 = iVar7 + 1) {
              sVar1 = *psVar2;
              psVar2 = psVar2 + 1;
              if (sVar1 != 0) {
                param_2[2] = local_1c;
                local_8 = local_1c;
                goto LAB_0075f1aa;
              }
            }
            param_1 = (int *)((int)param_1 + 1);
            piVar6 = piVar6 + 1;
          } while ((int)param_1 <= (int)local_10);
        }
        iVar8 = iVar8 + 0x40;
        local_1c = local_1c + 1;
      } while (local_1c <= local_20);
    }
LAB_0075f1aa:
    if (local_8 < local_20) {
      iVar8 = (local_20 * 0x20 + local_14) * 2;
      local_1c = local_20;
      do {
        param_1 = local_c;
        if ((int)local_c <= (int)local_10) {
          piVar6 = (int *)(iVar5 + (int)local_c * 4);
          do {
            psVar2 = (short *)(iVar8 + *piVar6);
            for (iVar7 = local_14; iVar7 <= local_18; iVar7 = iVar7 + 1) {
              sVar1 = *psVar2;
              psVar2 = psVar2 + 1;
              if (sVar1 != 0) {
                local_20 = local_1c;
                param_2[3] = local_1c;
                goto LAB_0075f229;
              }
            }
            param_1 = (int *)((int)param_1 + 1);
            piVar6 = piVar6 + 1;
          } while ((int)param_1 <= (int)local_10);
        }
        iVar8 = iVar8 + -0x40;
        local_1c = local_1c + -1;
      } while (local_8 <= local_1c);
    }
  }
LAB_0075f229:
  iVar8 = local_14;
  if (local_14 < local_18) {
    for (; iVar8 <= local_18; iVar8 = iVar8 + 1) {
      param_1 = local_c;
      if ((int)local_c <= (int)local_10) {
        piVar6 = (int *)(iVar5 + (int)local_c * 4);
        do {
          psVar2 = (short *)(*piVar6 + (local_8 * 0x20 + iVar8) * 2);
          for (iVar7 = local_8; iVar7 <= local_20; iVar7 = iVar7 + 1) {
            if (*psVar2 != 0) {
              param_2[4] = iVar8;
              local_14 = iVar8;
              goto LAB_0075f2a7;
            }
            psVar2 = psVar2 + 0x20;
          }
          param_1 = (int *)((int)param_1 + 1);
          piVar6 = piVar6 + 1;
        } while ((int)param_1 <= (int)local_10);
      }
    }
LAB_0075f2a7:
    iVar8 = local_18;
    if (local_14 < local_18) {
      do {
        param_1 = local_c;
        if ((int)local_c <= (int)local_10) {
          piVar6 = (int *)(iVar5 + (int)local_c * 4);
          do {
            psVar2 = (short *)((local_8 * 0x20 + iVar8) * 2 + *piVar6);
            for (iVar7 = local_8; iVar7 <= local_20; iVar7 = iVar7 + 1) {
              if (*psVar2 != 0) {
                param_2[5] = iVar8;
                local_18 = iVar8;
                goto LAB_0075f317;
              }
              psVar2 = psVar2 + 0x20;
            }
            param_1 = (int *)((int)param_1 + 1);
            piVar6 = piVar6 + 1;
          } while ((int)param_1 <= (int)local_10);
        }
        iVar8 = iVar8 + -1;
      } while (local_14 <= iVar8);
    }
  }
LAB_0075f317:
  iVar4 = (local_18 - local_14) * 0x10;
  iVar8 = ((int)local_10 - (int)local_c) * 8;
  iVar7 = (local_20 - local_8) * 0xc;
  param_2[6] = iVar4 * iVar4 + iVar7 * iVar7 + iVar8 * iVar8;
  iVar8 = 0;
  if ((int)local_c <= (int)local_10) {
    local_24 = ((int)local_10 - (int)local_c) + 1;
    param_1 = (int *)(iVar5 + (int)local_c * 4);
    do {
      if (local_8 <= local_20) {
        psVar2 = (short *)(*param_1 + (local_8 * 0x20 + local_14) * 2);
        local_28 = (int *)((local_20 - local_8) + 1);
        do {
          if (local_14 <= local_18) {
            iVar5 = (local_18 - local_14) + 1;
            psVar3 = psVar2;
            do {
              if (*psVar3 != 0) {
                iVar8 = iVar8 + 1;
              }
              psVar3 = psVar3 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          psVar2 = psVar2 + 0x20;
          local_28 = (int *)((int)local_28 + -1);
        } while (local_28 != nullptr);
      }
      param_1 = param_1 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
    param_2[7] = iVar8;
    return;
  }
  param_2[7] = 0;
  return;
}

// 0075F3F0 FUN_0075f3f0
#line 1 "decomp/ST.exe/functions/0075F3F0/decomp.c"

int st::fn_0075F3F0(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_8;

  if (param_3 < param_4) {
    local_8 = param_3 * 2;
    piVar4 = (int *)(param_3 * 0x20 + 0xc + param_2);
    do {
      if (param_4 < local_8) {
        piVar1 = st::fn_0075F560(param_2,param_3);
      }
      else {
        piVar1 = st::fn_0075F520(param_2,param_3);
      }
      if (piVar1 == nullptr) {
        return param_3;
      }
      piVar4[-2] = piVar1[1];
      *piVar4 = piVar1[3];
      piVar4[2] = piVar1[5];
      piVar4[-3] = *piVar1;
      piVar4[-1] = piVar1[2];
      piVar4[1] = piVar1[4];
      iVar3 = 1;
      iVar2 = (piVar1[5] - piVar1[4]) * 0x10;
      iVar5 = (piVar1[3] - piVar1[2]) * 0xc;
      if (iVar5 < iVar2) {
        iVar3 = 2;
        iVar5 = iVar2;
      }
      if (iVar5 < (piVar1[1] - *piVar1) * 8) {
        iVar3 = 0;
      }
      if (iVar3 == 0) {
        iVar5 = (*piVar1 + piVar1[1]) / 2;
        piVar1[1] = iVar5;
        piVar4[-3] = iVar5 + 1;
      }
      else if (iVar3 == 1) {
        iVar5 = (piVar1[3] + piVar1[2]) / 2;
        piVar1[3] = iVar5;
        piVar4[-1] = iVar5 + 1;
      }
      else if (iVar3 == 2) {
        iVar5 = (piVar1[4] + piVar1[5]) / 2;
        piVar1[5] = iVar5;
        piVar4[1] = iVar5 + 1;
      }
      st::fn_0075EFE0(param_1,piVar1);
      st::fn_0075EFE0(param_1,piVar4 + -3);
      param_3 = param_3 + 1;
      local_8 = local_8 + 2;
      piVar4 = piVar4 + 8;
    } while (param_3 < param_4);
  }
  return param_3;
}

// 0075F520 FUN_0075f520
#line 1 "decomp/ST.exe/functions/0075F520/decomp.c"

int * st::fn_0075F520(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;

  iVar3 = 0;
  piVar1 = nullptr;
  if (0 < param_2) {
    piVar2 = (int *)(param_1 + 0x1c);
    do {
      if ((iVar3 < *piVar2) && (0 < piVar2[-1])) {
        piVar1 = piVar2 + -7;
        iVar3 = *piVar2;
      }
      piVar2 = piVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return piVar1;
}

// 0075F560 FUN_0075f560
#line 1 "decomp/ST.exe/functions/0075F560/decomp.c"

int * st::fn_0075F560(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;

  iVar3 = 0;
  piVar1 = nullptr;
  if (0 < param_2) {
    piVar2 = (int *)(param_1 + 0x18);
    do {
      if (iVar3 < *piVar2) {
        piVar1 = piVar2 + -6;
        iVar3 = *piVar2;
      }
      piVar2 = piVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return piVar1;
}

// 0075F590 FUN_0075f590
#line 1 "decomp/ST.exe/functions/0075F590/decomp.c"

void st::fn_0075F590(AnonShape_0075F590_570A7014 *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  int local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar9 = 0;
  iVar6 = param_2[2];
  iVar3 = param_2[4];
  piVar1 = param_2 + 3;
  piVar2 = param_2 + 5;
  iVar7 = *param_2;
  local_8 = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  if (iVar7 <= param_2[1]) {
    local_c = iVar7 * 8 + 4;
    local_28 = (param_2[1] - iVar7) + 1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    auto param_2_after_write = (int *)(*(int *)(param_1->field_01BA + 0x18) + iVar7 * 4); /* compiler stack-slot lifetime split */
    do {
      if (iVar6 <= *piVar1) {
        iVar7 = iVar6 * 4 + 2;
        puVar10 = (ushort *)(*param_2_after_write + (iVar6 * 0x20 + iVar3) * 2);
        iVar4 = (*piVar1 - iVar6) + 1;
        do {
          if (iVar3 <= *piVar2) {
            iVar9 = iVar3 * 8 + 4;
            iVar8 = (*piVar2 - iVar3) + 1;
            puVar11 = puVar10;
            do {
              uVar5 = (uint)*puVar11;
              puVar11 = puVar11 + 1;
              if (uVar5 != 0) {
                local_8 = local_8 + uVar5;
                local_10 = local_10 + local_c * uVar5;
                local_14 = local_14 + iVar7 * uVar5;
                local_18 = local_18 + iVar9 * uVar5;
              }
              iVar9 = iVar9 + 8;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          iVar7 = iVar7 + 4;
          puVar10 = puVar10 + 0x20;
          iVar4 = iVar4 + -1;
          iVar9 = local_8;
        } while (iVar4 != 0);
      }
      param_2_after_write = param_2_after_write + 1;
      local_c = local_c + 8;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  iVar6 = iVar9 >> 1;
  param_1->field_0080->field_0000[param_3] = (byte)((iVar6 + local_10) / iVar9);
  param_1->field_0080->field_0004[param_3] = (byte)((local_14 + iVar6) / iVar9);
  param_1->field_0080->field_0008[param_3] = (byte)((local_18 + iVar6) / iVar9);
  return;
}

