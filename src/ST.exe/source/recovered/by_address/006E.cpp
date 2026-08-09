#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/006E.cpp

// 006E1440 FUN_006e1440
#line 4 "decomp/ST.exe/functions/006E1440/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_006E1440(void *this)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *in_stack_00000014;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *in_stack_00000018;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *in_stack_0000001c;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  st::fn_006E1320
            (this,(double *)&stack0x00000004,(double *)&stack0x0000000c,in_stack_00000014,
             in_stack_00000018,in_stack_0000001c);
  return;
}

// 006E1DD0 FUN_006e1dd0
#line 4 "decomp/ST.exe/functions/006E1DD0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
st::fn_006E1DD0(void *this,int param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
  double dVar1;
  undefined2 uVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  undefined4 uVar3;
  float local_10;
  float local_c;
  float local_8;

  uVar2 = st::fn_006E2D00(this,param_1,param_2);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (30000 < CONCAT22(extraout_var,uVar2)) {
    return 0;
  }
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  st::fn_006E29D0(this,&local_10,param_1,param_2,CONCAT22(extraout_var,uVar2));
  dVar1 = STField<double>(this,200) * _DAT_0079b168;
  if ((((local_10 < _DAT_0079034c) ||
       ((double)(int)*STField<short *>(this,0x280) * STField<double>(this,200) - dVar1 <=
        (double)local_10)) || (local_c < _DAT_0079034c)) ||
     ((double)(int)(STField<short *>(this,0x280))[1] * STField<double>(this,200) - dVar1 <=
      (double)local_c)) {
    local_10 = -(float)STField<double>(this,200);
    local_8 = -(float)STField<double>(this,0xd0);
    uVar3 = 0;
    local_c = local_10;
  }
  else {
    uVar3 = 1;
  }
  if (param_3 != nullptr) {
    *param_3 = local_10;
  }
  if (param_4 != nullptr) {
    *param_4 = local_c;
  }
  if (param_5 == nullptr) {
    return uVar3;
  }
  *param_5 = local_8;
  return uVar3;
}

// 006E2B60 FUN_006e2b60
#line 4 "decomp/ST.exe/functions/006E2B60/decomp.c"
void __thiscall
st::fn_006E2B60(void *this,AnonShape_006E2B60_E36B924C *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  byte *pbVar2;
  int local_c;
  int local_8;

  pbVar2 = param_1->field_0028;
  iVar1 = 0;
  local_8 = 0;
  local_c = 0;
  if (0 < param_1->field_0024) {
    do {
      if ((STField<byte>(this,0xac) & *pbVar2) != 0) {
        st::fn_006E2C30(this,(int *)((uint)pbVar2[1] * 0x10 + param_2));
        st::fn_006E2C30(this,(int *)((uint)pbVar2[2] * 0x10 + param_2));
        st::fn_006E2C30(this,(int *)((uint)pbVar2[3] * 0x10 + param_2));
        *(undefined1 *)(local_8 + param_3) = (undefined1)local_c;
        iVar1 = local_8 + 1;
        local_8 = iVar1;
      }
      pbVar2 = pbVar2 + 0x1c;
      local_c = local_c + 1;
    } while (local_c < param_1->field_0024);
    *param_4 = iVar1;
    return;
  }
  *param_4 = 0;
  return;
}

// 006E2C30 FUN_006e2c30
#line 4 "decomp/ST.exe/functions/006E2C30/decomp.c"
void __thiscall st::fn_006E2C30(void *this,int *param_1)

{
  longlong lVar1;

  lVar1 = st::fn_0072E288();
  *param_1 = (int)lVar1 + STField<int>(this,0x30) * 0x10000;
  lVar1 = st::fn_0072E288();
  param_1[1] = STField<int>(this,0x3c) * 0x10000 - (int)lVar1;
  lVar1 = st::fn_0072E288();
  param_1[2] = (int)lVar1;
  return;
}

// 006E2D50 FUN_006e2d50
#line 4 "decomp/ST.exe/functions/006E2D50/decomp.c"
void st::fn_006E2D50(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar6;
  int *piVar7;
  int *piVar6_mg3;
  int *piVar4;
  int *piVar7_mg3;
  int *temp_103fa829f3ca;
  int *piVar5;
  int *temp_103f510114be;

  if (param_2 < param_1) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = (int *)((int)param_2 + param_4 * 2 + (param_5 + -1) * param_3 + -2);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (int *)((int)param_1 + param_4 * 2 + (param_5 + -1) * param_3 + -2);
    while (0 < param_5) {
      if (param_6 < 1) {
        iVar3 = param_4;
        piVar6 = param_2;
        piVar7 = param_1;
        if (((uint)param_1 & 2) != 0) {
          piVar6 = (int *)((int)param_2 + -2);
          *(short *)param_1 = (short)*param_2 + (short)param_6;
          piVar7 = (int *)((int)param_1 + -2);
          iVar3 = param_4 + -1;
          if (iVar3 == 0 || param_4 < 1) goto cf_continue_loop_006E2F66;
        }
        piVar6 = (int *)((int)piVar6 + -2);
        piVar7 = (int *)((int)piVar7 + -2);
        while (bVar2 = 1 < iVar3, iVar3 = iVar3 + -2, bVar2) {
          iVar1 = *piVar6;
          piVar6 = piVar6 + -1;
          *piVar7 = iVar1 - CONCAT22(-(short)param_6,-(short)param_6);
          piVar7 = piVar7 + -1;
        }
        if (iVar3 == -1) {
          STField<short>(piVar7,2) = STField<short>(piVar6,2) + (short)param_6;
        }
      }
      else {
        iVar3 = param_4;
        piVar4 = param_2;
        piVar5 = param_1;
        if (((uint)param_1 & 2) != 0) {
          piVar4 = (int *)((int)param_2 + -2);
          *(short *)param_1 = (short)*param_2 + (short)param_6;
          piVar5 = (int *)((int)param_1 + -2);
          iVar3 = param_4 + -1;
          if (iVar3 == 0 || param_4 < 1) goto cf_continue_loop_006E2F66;
        }
        piVar6 = (int *)((int)piVar4 + -2);
        piVar7 = (int *)((int)piVar5 + -2);
        while (bVar2 = 1 < iVar3, iVar3 = iVar3 + -2, bVar2) {
          iVar1 = *piVar6;
          piVar6 = piVar6 + -1;
          *piVar7 = iVar1 + CONCAT22((short)param_6,(short)param_6);
          piVar7 = piVar7 + -1;
        }
        if (iVar3 == -1) {
          STField<short>(piVar7,2) = STField<short>(piVar6,2) + (short)param_6;
        }
      }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
cf_continue_loop_006E2F66:
      param_2 = (int *)((int)param_2 - param_3);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (int *)((int)param_1 - param_3);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = param_5 + -1;
    }
  }
  else {
    while (0 < param_5) {
      if (param_6 < 1) {
        temp_103fa829f3ca = param_2;
        temp_103f510114be = param_1;
        iVar3 = param_4;
        if (((uint)param_1 & 2) != 0) {
          temp_103fa829f3ca = (int *)((int)param_2 + 2);
          *(short *)param_1 = (short)*param_2 + (short)param_6;
          temp_103f510114be = (int *)((int)param_1 + 2);
          iVar3 = param_4 + -1;
          if (iVar3 == 0 || param_4 < 1) goto cf_continue_loop_006E2E31;
        }
        while (1 < iVar3) {
          *temp_103f510114be = *temp_103fa829f3ca - CONCAT22(-(short)param_6,-(short)param_6);
          temp_103fa829f3ca = temp_103fa829f3ca + 1;
          temp_103f510114be = temp_103f510114be + 1;
          iVar3 = iVar3 + -2;
        }
        if (iVar3 + -2 == -1) {
          *(short *)temp_103f510114be = (short)*temp_103fa829f3ca + (short)param_6;
        }
      }
      else {
        piVar6_mg3 = param_2;
        piVar7_mg3 = param_1;
        iVar3 = param_4;
        if (((uint)param_1 & 2) != 0) {
          piVar6_mg3 = (int *)((int)param_2 + 2);
          *(short *)param_1 = (short)*param_2 + (short)param_6;
          piVar7_mg3 = (int *)((int)param_1 + 2);
          iVar3 = param_4 + -1;
          if (iVar3 == 0 || param_4 < 1) goto cf_continue_loop_006E2E31;
        }
        while (1 < iVar3) {
          *piVar7_mg3 = *piVar6_mg3 + CONCAT22((short)param_6,(short)param_6);
          piVar6_mg3 = piVar6_mg3 + 1;
          piVar7_mg3 = piVar7_mg3 + 1;
          iVar3 = iVar3 + -2;
        }
        if (iVar3 + -2 == -1) {
          *(short *)piVar7_mg3 = (short)*piVar6_mg3 + (short)param_6;
        }
      }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
cf_continue_loop_006E2E31:
      param_2 = (int *)((int)param_2 + param_3);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (int *)((int)param_1 + param_3);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = param_5 + -1;
    }
  }
  return;
}

// 006E3450 FUN_006e3450
#line 4 "decomp/ST.exe/functions/006E3450/decomp.c"
undefined4 __cdecl st::fn_006E3450(DArrayTy *param_1,int param_2,int *param_3,undefined4 *param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;

  iVar3 = 0;
  if (param_2 == 0) {
    return 0xfffffffc;
  }
  param_1->iteratorIndex = 0;
  while( true ) {
    uVar1 = param_1->iteratorIndex;
    if (param_1->count <= uVar1) {
      return 0xfffffffc;
    }
    pvVar2 = DArrayAt<void>(param_1, uVar1);
    param_1->iteratorIndex = uVar1 + 1;
    if (pvVar2 == nullptr) break;
    if (*(int *)(STField<int>(pvVar2,4) + 8) == param_2) {
      if (param_3 != nullptr) {
        *param_3 = iVar3;
      }
      if (param_4 != nullptr) {
        *param_4 = STField<undefined4>(pvVar2,4);
      }
      return 0;
    }
    iVar3 = iVar3 + 1;
  }
  return 0xfffffffc;
}

// 006E3680 FUN_006e3680
#line 4 "decomp/ST.exe/functions/006E3680/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void st::fn_006E3680(DArrayTy *param_1)

{
  uint uVar1;
  void *pvVar2;

  param_1->iteratorIndex = 0;
  while( true ) {
    uVar1 = param_1->iteratorIndex;
    if (param_1->count <= uVar1) {
      return;
    }
    pvVar2 = DArrayAt<void>(param_1, uVar1);
    param_1->iteratorIndex = uVar1 + 1;
    if (pvVar2 == nullptr) break;
    if (STField<DArrayTy *>(pvVar2,8) != nullptr) {
      st::fn_006E3680(STField<DArrayTy *>(pvVar2,8));
      st::fn_006AE110(STField<DArrayTy *>(pvVar2,8));
      STField<undefined4>(pvVar2,8) = 0;
    }
  }
  return;
}

// 006E3A70 FUN_006e3a70
#line 4 "decomp/ST.exe/functions/006E3A70/decomp.c"
void __thiscall st::fn_006E3A70(void *this,int param_1,int *param_2,undefined4 *param_3)

{
  st::fn_006E3450(STField<DArrayTy *>(this,0xc),param_1,param_2,param_3);
  return;
}

// 006E3A90 FUN_006e3a90
#line 4 "decomp/ST.exe/functions/006E3A90/decomp.c"
void __thiscall st::fn_006E3A90(void *this,int param_1,undefined4 *param_2)

{
  st::fn_006E3450(STField<DArrayTy *>(this,0xc),param_1,nullptr,param_2);
  return;
}

// 006E3DB0 FUN_006e3db0
#line 1 "decomp/ST.exe/functions/006E3DB0/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 006E3DB0 returns return of AppClassTy::SendMessage @ 006E3DC5 */

int st::fn_006E3DB0(int param_1)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  AppClassTy *in_ECX;

  /* ST_PSEUDO[unresolved_register_input,raw_pointer_offset]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = st::fn_006E3DD0(in_ECX,*(uint *)(param_1 + 0xc),*(int *)(param_1 + 8),param_1);
  return iVar1;
}

// 006E4290 FUN_006e4290
#line 4 "decomp/ST.exe/functions/006E4290/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006E4290 returns return of AppClassTy::AddDecodeMessage @ 006E42BA */

int st::fn_006E4290(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  AppClassTy *in_ECX;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = param_1;
  local_c = param_3;
  local_10 = param_2;
  local_8 = param_4;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar1 = st::fn_006E41D0(in_ECX,&local_14);
  return iVar1;
}

// 006E42C0 FUN_006e42c0
#line 4 "decomp/ST.exe/functions/006E42C0/decomp.c"
undefined4 __thiscall st::fn_006E42C0(void *this,int *param_1)

{
  uint index;
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  bool bVar4;
  byte local_14 [16];

  if (STField<int>(this,0x14) != 0) {
    *(undefined4 *)(STField<int>(this,0x14) + 4) = 0;
    index = st::fn_006B1190(STField<DArrayTy *>(this,0x14),local_14);
    while (-1 < (int)index) {
      iVar1 = 4;
      bVar4 = true;
      piVar2 = param_1;
      pbVar3 = local_14;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = *piVar2 == *(int *)pbVar3;
        piVar2 = piVar2 + 1;
        pbVar3 = pbVar3 + 4;
      } while (bVar4);
      if (bVar4) {
        st::fn_006B0C70(STField<DArrayTy *>(this,0x14),index);
      }
      index = st::fn_006B1190(STField<DArrayTy *>(this,0x14),local_14);
    }
    if ((STField<DArrayTy *>(this,0x14))->count == 0) {
      st::fn_006AE110(STField<DArrayTy *>(this,0x14));
      STField<undefined4>(this,0x14) = 0;
    }
  }
  return 0;
}

// 006E4340 FUN_006e4340
#line 4 "decomp/ST.exe/functions/006E4340/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006E4340 -> 006E42C0 @ 006E4362 */

void __thiscall
st::fn_006E4340(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = param_1;
  local_c = param_3;
  local_10 = param_2;
  local_8 = param_4;
  st::fn_006E42C0(this,(int *)&local_14);
  return;
}

// 006E4480 FUN_006e4480
#line 4 "decomp/ST.exe/functions/006E4480/decomp.c"
int st::fn_006E4480(AnonShape_006E4480_50BB219F *param_1,int param_2)

{
  DArrayTy *pDVar1;
  uint uVar2;
  int iVar3;
  AnonShape_006E4480_50BB219F *pAVar4;

  iVar3 = 0;
  if (param_1->field_0008 != nullptr) {
    param_1->field_0008->iteratorIndex = 0;
    do {
      pDVar1 = param_1->field_0008;
      uVar2 = pDVar1->iteratorIndex;
      if (pDVar1->count <= uVar2) {
        return 0;
      }
      pAVar4 = DArrayAt<AnonShape_006E4480_50BB219F>(pDVar1, uVar2);
      pDVar1->iteratorIndex = uVar2 + 1;
      if (pAVar4 == nullptr) {
        return 0;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(*(int *)&pAVar4->field_0x4 + 0x14) == param_2) {
        return *(int *)&pAVar4->field_0x4;
      }
      iVar3 = st::fn_006E4480(pAVar4,param_2);
    } while (iVar3 == 0);
  }
  return iVar3;
}

// 006E44E0 FUN_006e44e0
#line 4 "decomp/ST.exe/functions/006E44E0/decomp.c"
int __thiscall st::fn_006E44E0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  AnonShape_006E4480_50BB219F local_10;

  iVar2 = 0;
  *(undefined4 *)(STField<int>(this,0x10) + 4) = 0;
  iVar1 = st::fn_006B1190(STField<DArrayTy *>(this,0x10),(byte *)&local_10);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  while (((-1 < iVar1 && (iVar2 = STPiece<4,4>(local_10), *(int *)(STPiece<4,4>(local_10) + 0x14) != param_1)) &&
         (iVar2 = st::fn_006E4480(&local_10,param_1), iVar2 == 0))) {
    iVar1 = st::fn_006B1190(STField<DArrayTy *>(this,0x10),(byte *)&local_10);
  }
  return iVar2;
}

// 006E4540 FUN_006e4540
#line 4 "decomp/ST.exe/functions/006E4540/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

int st::fn_006E4540(DArrayTy *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;

  iVar2 = 0;
  param_1->iteratorIndex = 0;
  do {
    uVar1 = param_1->iteratorIndex;
    if (param_1->count <= uVar1) {
      return iVar2;
    }
    pvVar3 = DArrayAt<void>(param_1, uVar1);
    param_1->iteratorIndex = uVar1 + 1;
    if (pvVar3 == nullptr) {
      return iVar2;
    }
    if (*(int *)(STField<int>(pvVar3,4) + 0x14) == param_2) {
      return (int)pvVar3;
    }
  } while ((STField<DArrayTy *>(pvVar3,8) == nullptr) ||
          (iVar2 = st::fn_006E4540(STField<DArrayTy *>(pvVar3,8),param_2), iVar2 == 0));
  return iVar2;
}

// 006E45A0 FUN_006e45a0
#line 4 "decomp/ST.exe/functions/006E45A0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006E45A0 returns return of FUN_006e4540 @ 006E45B1 */

int __thiscall st::fn_006E45A0(void *this,int param_1)

{
  int iVar1;

  iVar1 = st::fn_006E4540(STField<DArrayTy *>(this,0x10),param_1);
  return iVar1;
}

// 006E45C0 FUN_006e45c0
#line 4 "decomp/ST.exe/functions/006E45C0/decomp.c"
undefined4 st::fn_006E45C0(AnonShape_006E45C0_FB272364 *param_1)

{
  DArrayTy *pDVar1;
  uint uVar2;
  AnonShape_006E45C0_FB272364 *pAVar3;

  param_1->field_0008->iteratorIndex = 0;
  while( true ) {
    pDVar1 = param_1->field_0008;
    uVar2 = pDVar1->iteratorIndex;
    if (pDVar1->count <= uVar2) {
      return 0;
    }
    pAVar3 = DArrayAt<AnonShape_006E45C0_FB272364>(pDVar1, uVar2);
    pDVar1->iteratorIndex = uVar2 + 1;
    if (pAVar3 == nullptr) break;
    if ((*(int *)pAVar3 != 1) && (*(undefined4 *)pAVar3 = 1, pAVar3->field_0008 != nullptr))
    {
      st::fn_006E45C0(pAVar3);
    }
  }
  return 0;
}

// 006E4620 FUN_006e4620
#line 4 "decomp/ST.exe/functions/006E4620/decomp.c"
undefined4 __thiscall st::fn_006E4620(void *this,int param_1)

{
  AnonShape_006E45C0_FB272364 *pAVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  pAVar1 = (AnonShape_006E45C0_FB272364 *)st::fn_006E45A0(this,*(int *)(param_1 + 0x14));
  st::fn_006E45C0(pAVar1);
  return 0;
}

// 006E4B80 FUN_006e4b80
#line 4 "decomp/ST.exe/functions/006E4B80/decomp.c"
void __thiscall st::fn_006E4B80(void *this,int param_1)

{
  int *piVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = (int *)st::fn_006E45A0(this,*(int *)(param_1 + 0x14));
  if (piVar1 != nullptr) {
    st::fn_006E4BB0(piVar1);
  }
  return;
}

// 006E4BB0 FUN_006e4bb0
#line 4 "decomp/ST.exe/functions/006E4BB0/decomp.c"
void st::fn_006E4BB0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_14;

  if (*param_1 == 1) {
    local_1c = 0xf;
    local_14 = 9;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)param_1[1] + 0x20))(local_24);
    st::fn_006E5C70((SystemClassTy *)param_1[1],local_24);
    *param_1 = 0;
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 4) = 0;
    while( true ) {
      iVar1 = param_1[2];
      uVar2 = *(uint *)(iVar1 + 4);
      if (*(uint *)(iVar1 + 0xc) <= uVar2) break;
      piVar3 = (int *)(*(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c));
      *(uint *)(iVar1 + 4) = uVar2 + 1;
      if (piVar3 == nullptr) {
        return;
      }
      st::fn_006E4BB0(piVar3);
    }
  }
  return;
}

// 006E4C30 FUN_006e4c30
#line 4 "decomp/ST.exe/functions/006E4C30/decomp.c"
void __thiscall st::fn_006E4C30(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar3 = st::fn_006E45A0(this,*(int *)(param_1 + 0x14));
  if ((iVar3 != 0) && (*(int *)(iVar3 + 8) != 0)) {
    *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0;
    while( true ) {
      iVar1 = *(int *)(iVar3 + 8);
      uVar2 = *(uint *)(iVar1 + 4);
      if (*(uint *)(iVar1 + 0xc) <= uVar2) break;
      piVar4 = (int *)(*(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c));
      *(uint *)(iVar1 + 4) = uVar2 + 1;
      if (piVar4 == nullptr) {
        return;
      }
      st::fn_006E4BB0(piVar4);
    }
  }
  return;
}

// 006E4C90 FUN_006e4c90
#line 1 "decomp/ST.exe/functions/006E4C90/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006E4D20 -> 006E4C90 @ 006E4D2B; FUN_006e4d20 parameter param_1 */

void st::fn_006E4C90(DebugSystemC *param_1,DArrayTy *param_2)

{
  uint index;
  byte local_10 [4];
  DebugSystemC *local_c;
  DArrayTy *local_8;

  param_2->iteratorIndex = 0;
  index = st::fn_006B1190(param_2,local_10);
  if (-1 < (int)index) {
    while( true ) {
      if (local_c == param_1) break;
      if (local_8 != nullptr) {
        st::fn_006E4C90(param_1,local_8);
      }
      index = st::fn_006B1190(param_2,local_10);
      if ((int)index < 0) {
        return;
      }
    }
    if (local_8 != nullptr) {
      st::fn_006E3680(local_8);
      st::fn_006AE110(local_8);
      local_8 = nullptr;
    }
    st::fn_006B0C70(param_2,index);
  }
  return;
}

// 006E4D20 FUN_006e4d20
#line 4 "decomp/ST.exe/functions/006E4D20/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00578370 -> 006E4D20 @ 00578398; data at 00811644 | 006E4D20 -> 006E4C90 @ 006E4D2B */

void __thiscall st::fn_006E4D20(void *this,DebugSystemC *param_1)

{
  st::fn_006E4C90(param_1,STField<DArrayTy *>(this,0x10));
  return;
}

// 006E4D40 FUN_006e4d40
#line 4 "decomp/ST.exe/functions/006E4D40/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006E4D40 returns literal 65535 at 006E4D59 @ 006E4D5F */

uint __thiscall st::fn_006E4D40(void *this,int param_1)

{
  uint *puVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  puVar1 = (uint *)st::fn_006E45A0(this,*(int *)(param_1 + 0x14));
  if (puVar1 != nullptr) {
    return *puVar1;
  }
  return 0xffff;
}

// 006E4EE0 FUN_006e4ee0
#line 4 "decomp/ST.exe/functions/006E4EE0/decomp.c"
/* WARNING: Removing unreachable block (ram,0x006e4efb) */

int __fastcall st::fn_006E4EE0(int *param_1)

{
  int iVar3;
  int local_EAX_32;
  int iVar1;
  int iVar2;
  int iVar4;
  bool bVar5;

  iVar4 = param_1[0xb];
  iVar3 = *(int *)(iVar4 + 0xc);
  do {
    if (iVar3 == 0) {
LAB_006e4f26:
      iVar1 = st::fn_006E4D70((AppClassTy *)param_1,param_1[4]);
      if (iVar1 != 0) {
        param_1[7] = 1;
        return iVar1;
      }
      iVar4 = param_1[10];
      bVar5 = *(int *)(iVar4 + 0xc) == 0;
      if (!bVar5) {
        do {
          if (bVar5) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(iVar4 + 0x1c);
          }
          iVar2 = st::fn_006E3DB0(iVar4);
          if (iVar2 == 0xffff) {
            param_1[7] = 1;
            return 0xffff;
          }
          st::fn_006B0C70((DArrayTy *)param_1[10],0);
          iVar4 = param_1[10];
          bVar5 = *(int *)(iVar4 + 0xc) == 0;
        } while (!bVar5);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar4 = (**(code **)(*param_1 + 0x14))();
      if (iVar4 != 0) {
        param_1[7] = 1;
        return iVar4;
      }
      return 0;
    }
    local_EAX_32 = st::fn_006E3DB0(*(int *)(iVar4 + 0x1c));
    if (local_EAX_32 == 0xffff) {
      param_1[7] = 1;
      goto LAB_006e4f26;
    }
    st::fn_006B0C70((DArrayTy *)param_1[0xb],0);
    iVar4 = param_1[0xb];
    iVar3 = *(int *)(iVar4 + 0xc);
  } while( true );
}

// 006E4FA0 FUN_006e4fa0
#line 1 "decomp/ST.exe/functions/006E4FA0/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006E4FA0 -> EXTERNAL:00000050 @ 006E4FA7 */

void st::fn_006E4FA0(DWORD dwMilliseconds)

{
  st::external_00000050(dwMilliseconds);
  return;
}

// 006E52D0 FUN_006e52d0
#line 4 "decomp/ST.exe/functions/006E52D0/decomp.c"
void __fastcall st::fn_006E52D0(AnonShape_006E52D0_AF06BCD2 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_24 [16];
  undefined4 local_14;

  iVar3 = param_1->field_0010;
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0xc);
    while (iVar1 != 0) {
      local_14 = 3;
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 0x1c);
      }
      puVar2 = *(undefined4 **)(iVar3 + 4);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)*puVar2)(local_24);
      st::fn_006B0C70((DArrayTy *)param_1->field_0010,0);
      st::fn_006E3970(param_1->field_0018,puVar2[2]);
      iVar3 = param_1->field_0010;
      iVar1 = *(int *)(iVar3 + 0xc);
    }
    param_1->field_000C = 0;
    st::fn_006AE110((DArrayTy *)param_1->field_0010);
    param_1->field_0010 = 0;
  }
  if ((DArrayTy *)param_1->field_0004 != nullptr) {
    st::fn_006AE110((DArrayTy *)param_1->field_0004);
    param_1->field_0004 = 0;
  }
  if ((DArrayTy *)param_1->field_0008 != nullptr) {
    st::fn_006AE110((DArrayTy *)param_1->field_0008);
    param_1->field_0008 = 0;
  }
  return;
}

// 006E5380 FUN_006e5380
#line 4 "decomp/ST.exe/functions/006E5380/decomp.c"
void __thiscall st::fn_006E5380(void *this,int param_1,undefined4 *param_2)

{
  st::fn_006E3450(STField<DArrayTy *>(this,0x10),param_1,nullptr,param_2);
  return;
}

// 006E5670 FUN_006e5670
#line 4 "decomp/ST.exe/functions/006E5670/decomp.c"
void __thiscall
st::fn_006E5670(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)this + 8))(param_1,param_2,param_3,0,param_4);
  return;
}

// 006E5690 FUN_006e5690
#line 4 "decomp/ST.exe/functions/006E5690/decomp.c"
void __thiscall st::fn_006E5690(void *this,undefined4 param_1,undefined4 param_2)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)this + 8))(param_1,0,0,0,param_2);
  return;
}

// 006E5740 FUN_006e5740
#line 4 "decomp/ST.exe/functions/006E5740/decomp.c"
void __fastcall st::fn_006E5740(AnonShape_006E5740_EEA77B11 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_24 [16];
  undefined4 local_14;

  iVar3 = param_1->field_0010;
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0xc);
    while (iVar1 != 0) {
      local_14 = 3;
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 0x1c);
      }
      puVar2 = *(undefined4 **)(iVar3 + 4);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)*puVar2)(local_24);
      st::fn_006E3970(param_1->field_0018,puVar2[2]);
      st::fn_006B0C70((DArrayTy *)param_1->field_0010,0);
      iVar3 = param_1->field_0010;
      iVar1 = *(int *)(iVar3 + 0xc);
    }
    param_1->field_000C = 0;
  }
  return;
}

// 006E5950 FUN_006e5950
#line 1 "decomp/ST.exe/functions/006E5950/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 006E5950 returns return of SystemClassTy::SendMessage @ 006E5965 */

int st::fn_006E5950(int param_1)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  SystemClassTy *in_ECX;

  /* ST_PSEUDO[unresolved_register_input,raw_pointer_offset]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = st::fn_006E5970(in_ECX,*(uint *)(param_1 + 0xc),*(int *)(param_1 + 8),param_1);
  return iVar1;
}

// 006E5FB0 sub_006E5FB0
#line 4 "decomp/ST.exe/functions/006E5FB0/decomp.c"
void __thiscall st::fn_006E5FB0(void *this)

{
  *(VTable_0079E1AC **)this = &st_global_0079E1AC;
  STField<undefined4>(this,4) = 0;
  STField<undefined4>(this,8) = 0;
  STField<undefined4>(this,0xc) = 0;
  STField<undefined4>(this,0x10) = 0;
  STField<undefined4>(this,0x14) = 1;
  return;
}

// 006E5FD0 FUN_006e5fd0
#line 4 "decomp/ST.exe/functions/006E5FD0/decomp.c"
/* [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=;
   family_names=AiBossClassTy::GetMessage|AiFltClassTy::GetMessage|AiPlrClassTy::GetMessage|AiTactClassTy::GetMessage|CPanelTy::GetMessage|ComboTy::GetMessage|ControlClassTy::GetMessage|CursorClassTy::GetMessage|DumpClassC::GetMessage|HelpStringTy::GetMessage|InputClassTy::GetMessage|MAdvTy::GetMessage|MMObjTy::GetMessage|MReportTy::GetMessage|MTaskTy::GetMessage|MTestTy::GetMessage|MoneyTy::GetMessage|OpticClassC::GetMessage|PanelTy::GetMessage|PopUpTy::GetMessage|RadioClassTy::GetMessage|STAlgaC::GetMessage|STAllPlayersC::GetMessage|STGameObjC::GetMessage|STGroupC::GetMessage|SliderClassTy::GetMessage|SoundManagerTy::GetMessage|TabClassTy::GetMessage|TraksClassTy::GetMessage|VisibleClassTy::GetMessage;
   ret4=1; direct_offsets={10:0,14:0,18:0,1c:0}; shared_zero_stub=true */

int __thiscall st::fn_006E5FD0(void *this,STMessage *message)

{
  return 0;
}

// 006E5FE0 FUN_006e5fe0
#line 4 "decomp/ST.exe/functions/006E5FE0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006E5FE0 returns return of FUN_006e3db0 @ 006E5FFC */

int __thiscall st::fn_006E5FE0(void *this,undefined4 *param_1)

{
  int iVar1;

  *param_1 = STField<undefined4>(this,8);
  param_1[1] = 2;
  iVar1 = st::fn_006E3DB0((int)param_1);
  return iVar1;
}

// 006E6000 FUN_006e6000
#line 4 "decomp/ST.exe/functions/006E6000/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006E6000 returns return of FUN_006e5fe0 @ 006E6019 */

int __thiscall st::fn_006E6000(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;

  param_3[2] = param_2;
  param_3[3] = param_1;
  iVar1 = st::fn_006E5FE0(this,param_3);
  return iVar1;
}

// 006E6020 FUN_006e6020
#line 4 "decomp/ST.exe/functions/006E6020/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006E6020 returns return of AppClassTy::PostMessage @ 006E603C */

int __thiscall st::fn_006E6020(void *this,undefined4 *param_1)

{
  int iVar1;

  *param_1 = STField<undefined4>(this,8);
  param_1[1] = 2;
  iVar1 = st::fn_006E3AB0(STField<AppClassTy *>(this,0x10),param_1);
  return iVar1;
}

// 006E6040 FUN_006e6040
#line 4 "decomp/ST.exe/functions/006E6040/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006E6040 returns return of AppClassTy::PostNextMessage @ 006E605C */

int __thiscall st::fn_006E6040(void *this,undefined4 *param_1)

{
  int iVar1;

  *param_1 = STField<undefined4>(this,8);
  param_1[1] = 2;
  iVar1 = st::fn_006E3B50(STField<AppClassTy *>(this,0x10),param_1);
  return iVar1;
}

// 006E6060 FUN_006e6060
#line 4 "decomp/ST.exe/functions/006E6060/decomp.c"
void __thiscall st::fn_006E6060(void *this,undefined4 *param_1)

{
  *param_1 = STField<undefined4>(this,8);
  param_1[1] = 2;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*STField<int *>(this,0xc) + 0x18))(param_1);
  return;
}

// 006E6080 FUN_006e6080
#line 4 "decomp/ST.exe/functions/006E6080/decomp.c"
void __thiscall st::fn_006E6080(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  param_3[2] = param_2;
  param_3[3] = param_1;
  st::fn_006E6060(this,param_3);
  return;
}

// 006E60A0 sub_006E60A0
#line 4 "decomp/ST.exe/functions/006E60A0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006E60A0 returns return of SystemClassTy::PostMessage @ 006E60BC */

int __thiscall st::fn_006E60A0(void *this,undefined4 *param_1)

{
  int iVar1;

  *param_1 = STField<undefined4>(this,8);
  param_1[1] = 2;
  iVar1 = st::fn_006E5810(STField<SystemClassTy *>(this,0xc),param_1);
  return iVar1;
}

// 006E60C0 FUN_006e60c0
#line 4 "decomp/ST.exe/functions/006E60C0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006E60C0 returns return of SystemClassTy::PostNextMessage @ 006E60DC */

int __thiscall st::fn_006E60C0(void *this,undefined4 *param_1)

{
  int iVar1;

  *param_1 = STField<undefined4>(this,8);
  param_1[1] = 2;
  iVar1 = st::fn_006E58B0(STField<SystemClassTy *>(this,0xc),param_1);
  return iVar1;
}

// 006E60E0 sub_006E60E0
#line 4 "decomp/ST.exe/functions/006E60E0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006E60E0 returns STGroupBoatC::sub_006E60E0 this @ 006E60F8 */

STGroupBoatC * __thiscall st::fn_006E60E0(void *this)

{
  st::fn_006E5FB0(this);
  *(VTable_0079E1B0 **)this = &st_global_0079E1B0;
  STField<undefined4>(this,0x18) = 0;
  return this;
}

// 006E6130 FUN_006e6130
#line 4 "decomp/ST.exe/functions/006E6130/decomp.c"
void __thiscall st::fn_006E6130(void *this,undefined4 param_1,undefined4 param_2)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)this + 0xc))(param_1,0,0,param_2);
  return;
}

// 006E6150 FUN_006e6150
#line 4 "decomp/ST.exe/functions/006E6150/decomp.c"
void __thiscall
st::fn_006E6150(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)this + 8))(param_1,param_2,param_3,0,param_4);
  return;
}

// 006E6460 FUN_006e6460
#line 4 "decomp/ST.exe/functions/006E6460/decomp.c"
/* [STPrototypeApplier] Propagated parameter 5.
   Evidence: 0052AFE0 -> 006E6460 @ 0052B134; literal 0 at 0052B10F | 00580B60 -> 006E6460 @
   00580C22; literal 1 at 00580C0D */

undefined4 * __thiscall
st::fn_006E6460(void *this,undefined4 param_1,int param_2,undefined2 param_3,undefined2 param_4,
            byte param_5,int param_6)

{
  undefined4 *puVar1;

  if (param_2 < 1) {
    return nullptr;
  }
  puVar1 = st::fn_006AAC10(0x1c);
  if (puVar1 == nullptr) {
    return nullptr;
  }
  puVar1[6] = param_1;
  *(byte *)(puVar1 + 3) = param_5;
  STField<undefined2>(puVar1,0xe) = param_3;
  STField<bool>(puVar1,0xd) = param_6 != 0;
  STField<char>(puVar1,0x17) = (char)param_2;
  *(undefined2 *)(puVar1 + 4) = param_4;
  STField<undefined2>(puVar1,0x12) = 0x7fff;
  *(undefined2 *)(puVar1 + 5) = 0x7fff;
  if (param_6 != 0) {
    st::fn_006B9910((undefined4 *)((int)this + 0x446),(int)puVar1);
    return puVar1;
  }
  st::fn_006B9910((undefined4 *)((int)this + 0x44a),(int)puVar1);
  return puVar1;
}

// 006E6540 FUN_006e6540
#line 4 "decomp/ST.exe/functions/006E6540/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void st::fn_006E6540(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 4) = param_2;
  if (param_4 != -2) {
    if (param_4 == -1) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      param_4 = *(byte *)(param_1 + 0x16) + 1;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((int)(uint)*(byte *)(param_1 + 0x17) <= param_4) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      param_4 = param_4 % (int)(uint)*(byte *)(param_1 + 0x17);
    }
    *(char *)(param_1 + 0x16) = (char)param_4;
  }
  return;
}

// 006E6580 FUN_006e6580
#line 4 "decomp/ST.exe/functions/006E6580/decomp.c"
void __thiscall st::fn_006E6580(void *this,int *param_1)

{
  if (STField<char>(param_1,0xd) != '\0') {
    st::fn_006B98C0((int *)((int)this + 0x446),param_1);
    st::fn_006A5E90((short *)param_1);
    return;
  }
  st::fn_006B98C0((int *)((int)this + 0x44a),param_1);
  st::fn_006A5E90((short *)param_1);
  return;
}

// 006E65C0 FUN_006e65c0
#line 4 "decomp/ST.exe/functions/006E65C0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0052AFE0 -> 006E65C0 @ 0052B250; MOVSX at 0052B244 establishes signed source width 2 |
   0052B330 -> 006E65C0 @ 0052B55C; MOVSX at 0052B549 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0052AFE0 -> 006E65C0 @ 0052B250; CPanelTy::sub_0052AFE0 parameter param_2 | 0052B330 ->
   006E65C0 @ 0052B55C; /CPanelTy+0xdd6

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0052AFE0 -> 006E65C0 @ 0052B250; CPanelTy::sub_0052AFE0 parameter param_3 | 0052B330 ->
   006E65C0 @ 0052B55C; /CPanelTy+0xdda

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 0052AFE0 -> 006E65C0 @ 0052B250; literal 5 at 0052B232 | 0052B330 -> 006E65C0 @
   0052B55C; literal 5 at 0052B52A

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0052AFE0 -> 006E65C0 @ 0052B250; literal 5 at 0052B230 | 0052B330 -> 006E65C0 @
   0052B55C; literal 5 at 0052B528

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 0052AFE0 -> 006E65C0 @ 0052B250; literal 1 at 0052B229 | 0052B330 -> 006E65C0 @
   0052B55C; literal 1 at 0052B520 */

undefined4 __thiscall
st::fn_006E65C0(void *this,undefined4 param_1,char param_2,float param_3,float param_4,ushort param_5,
            ushort param_6,ushort param_7)

{
  void *pvVar1;

  pvVar1 = st::fn_006AAC10(0x1c);
  if (pvVar1 == nullptr) {
    return 0xfffffffe;
  }
  STField<undefined4>(pvVar1,0x18) = param_1;
  STField<char>(pvVar1,0x17) = param_2;
  STField<float>(pvVar1,4) = param_3;
  STField<float>(pvVar1,8) = param_4;
  STField<ushort>(pvVar1,0xe) = param_5;
  STField<ushort>(pvVar1,0x10) = param_6;
  STField<ushort>(pvVar1,0x12) = param_7;
  st::fn_006B9910((undefined4 *)((int)this + 0x442),(int)pvVar1);
  return 0;
}

// 006E6620 FUN_006e6620
#line 4 "decomp/ST.exe/functions/006E6620/decomp.c"
void __fastcall st::fn_006E6620(int param_1)

{
  st::fn_006B9890((int *)(param_1 + 0x442));
  return;
}

// 006E66F0 FUN_006e66f0
#line 4 "decomp/ST.exe/functions/006E66F0/decomp.c"
void __thiscall st::fn_006E66F0(void *this,int param_1)

{
  if (param_1 < STField<int>(this,0x41c)) {
    *(undefined1 *)(STField<int>(this,0x420) + param_1 * 4) = 0;
  }
  return;
}

// 006E67C0 FUN_006e67c0
#line 4 "decomp/ST.exe/functions/006E67C0/decomp.c"
void __thiscall
st::fn_006E67C0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  undefined4 *puVar1;

  puVar1 = STField<undefined4 *>(this,0x452);
  do {
    if (puVar1 == nullptr) {
LAB_006e67ea:
      puVar1 = st::fn_006AAC10(0x1c);
      if (puVar1 != nullptr) {
        st::fn_006B9910((undefined4 *)((int)this + 0x452),(int)puVar1);
LAB_006e67fe:
        puVar1[2] = param_1;
        puVar1[3] = param_2;
        puVar1[1] = param_6;
        puVar1[4] = param_3;
        puVar1[5] = param_4;
        puVar1[6] = param_5;
      }
      return;
    }
    if (puVar1[1] == param_6) {
      if (puVar1 != nullptr) goto LAB_006e67fe;
      goto LAB_006e67ea;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

// 006E6830 FUN_006e6830
#line 4 "decomp/ST.exe/functions/006E6830/decomp.c"
void __thiscall st::fn_006E6830(void *this,int param_1)

{
  int *piVar1;

  piVar1 = STField<int *>(this,0x452);
  if (piVar1 != nullptr) {
    while (piVar1[1] != param_1) {
      piVar1 = (int *)*piVar1;
      if (piVar1 == nullptr) {
        return;
      }
    }
    if (piVar1 != nullptr) {
      st::fn_006B98C0((int *)((int)this + 0x452),piVar1);
      st::fn_006A5E90((short *)piVar1);
    }
  }
  return;
}

// 006E6870 FUN_006e6870
#line 4 "decomp/ST.exe/functions/006E6870/decomp.c"
byte __thiscall st::fn_006E6870(void *this,int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;

  bVar3 = 0;
  if (param_1 < STField<int>(this,0x41c)) {
    bVar2 = *(byte *)(STField<int>(this,0x420) + 3 + param_1 * 4);
    pbVar1 = (byte *)(STField<int>(this,0x420) + 3 + param_1 * 4);
    bVar3 = bVar2 & 1;
    if (param_2 != 0) {
      *pbVar1 = bVar2 | 1;
      return bVar3;
    }
    *pbVar1 = bVar2 & 0xfe;
  }
  return bVar3;
}

// 006E83F0 FUN_006e83f0
#line 4 "decomp/ST.exe/functions/006E83F0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow */

void __cdecl
st::fn_006E83F0(RecoveredSourceFamily_dibcopy *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;

  DAT_00856d8c = (uint)param_1->field_000E * param_1->field_0004 + 0x1f >> 3 & 0x1ffffffc;
  iVar1 = st::fn_006B4FA0((int *)param_1);
  DAT_00856da0 = param_4;
  _DAT_00856d80 = _DAT_0079dfd0 / (float)param_5;
  DAT_00856d88 = ((param_1->field_0008 - param_3) + -1) * DAT_00856d8c + param_2 + iVar1;
  DAT_00856d84 = param_4 / 2;
  return;
}

// 006E8460 FUN_006e8460
#line 4 "decomp/ST.exe/functions/006E8460/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: raw retained-width parameter lifetime: width=1, reads=1, sites=006E8541 MOV AL,byte ptr
   [EBP + 0x14] */

void __cdecl st::fn_006E8460(int param_1,int param_2,uint param_3,byte param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  longlong lVar6;

  iVar1 = DAT_00856d84;
  lVar6 = st::fn_0072E288();
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = (int)lVar6;
  lVar6 = st::fn_0072E288();
  iVar4 = (int)lVar6;
  if ((int)lVar6 < (int)(param_3 - 1)) {
    iVar4 = param_3 - 1;
  }
  if ((int)(DAT_00856da0 - param_3) <= iVar4) {
    iVar4 = (DAT_00856da0 - param_3) + -1;
  }
  if (iVar1 < iVar4) {
    iVar3 = (iVar1 - DAT_00856da0) + iVar4;
    if (param_1 <= iVar3 + 1) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = iVar3 + 2;
    }
    if ((DAT_00856da0 - iVar4) + iVar1 <= (int)(param_1 + param_3)) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = ((DAT_00856da0 - iVar4) - param_3) + -1 + iVar1;
    }
  }
  else {
    if (param_1 < iVar1 - iVar4) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = iVar1 - iVar4;
    }
    if (iVar1 + iVar4 <= (int)(param_1 + -1 + param_3)) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (iVar1 - param_3) + iVar4;
    }
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_2 = 0;
  if (0 < (int)param_3) {
    do {
      pbVar5 = (byte *)((DAT_00856d88 - (param_2 + iVar4) * DAT_00856d8c) + param_1);
      for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(uint *)pbVar5 = CONCAT22(CONCAT11(param_4,param_4),CONCAT11(param_4,param_4));
        pbVar5 = pbVar5 + 4;
      }
      for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pbVar5 = param_4;
        pbVar5 = pbVar5 + 1;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = param_2 + 1;
    } while (param_2 < (int)param_3);
  }
  return;
}

// 006E8840 FUN_006e8840
#line 1 "decomp/ST.exe/functions/006E8840/decomp.c"

void st::fn_006E8840(AnonShape_006E8840_CF3FA5BA *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_c;

  piVar2 = param_1->field_00A0;
  if (piVar2 != nullptr) {
    local_c = param_1->field_0094;
    iVar5 = 0;
    iVar6 = 0;
    if (0 < local_c) {
      do {
        piVar3 = (int *)piVar2[1];
        if ((piVar3 != nullptr) && (iVar4 = *piVar2, 0 < iVar4)) {
          do {
            iVar1 = *(int *)(*piVar3 + 4);
            if (iVar5 < iVar1) {
              iVar5 = iVar1;
            }
            iVar1 = *(int *)(*piVar3 + 8);
            if (iVar6 < iVar1) {
              iVar6 = iVar1;
            }
            piVar3 = piVar3 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        piVar2 = piVar2 + 2;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    param_1->field_0038 = iVar6;
    param_1->field_0034 = iVar5;
  }
  return;
}

// 006E89B0 FUN_006e89b0
#line 4 "decomp/ST.exe/functions/006E89B0/decomp.c"
int __thiscall
st::fn_006E89B0(void *this,int *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
            undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  undefined4 *puVar2;

  iVar1 = st::fn_006E8660(this,param_1,0,0,0,0,0,0,0);
  if (iVar1 == 0) {
    iVar1 = STField<int>(this,0x31c) + *param_1 * 0x114;
    puVar2 = st::fn_006AAC70(param_3 * 0x10 + 0x25);
    *(undefined4 **)(iVar1 + 0xa0) = puVar2;
    if (puVar2 == nullptr) {
      return -2;
    }
    *puVar2 = param_2;
    *(int *)(*(int *)(iVar1 + 0xa0) + 4) = param_3;
    *(undefined4 *)(*(int *)(iVar1 + 0xa0) + 8) = param_6;
    *(undefined4 *)(*(int *)(iVar1 + 0xa0) + 0xc) = param_7;
    *(undefined4 *)(*(int *)(iVar1 + 0xa0) + 0x10) = param_8;
    *(undefined4 *)(*(int *)(iVar1 + 0xa0) + 0x14) = param_4;
    *(undefined1 *)(*(int *)(iVar1 + 0xa0) + 0x18) = param_5;
    *(int *)(*(int *)(iVar1 + 0xa0) + 0x19) = 0x168 - param_9;
    *(undefined4 *)(*(int *)(iVar1 + 0xa0) + 0x1d) = param_10;
    *(undefined4 *)(*(int *)(iVar1 + 0xa0) + 0x21) = param_11;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x2005;
    iVar1 = 0;
  }
  return iVar1;
}

// 006E8AA0 FUN_006e8aa0
#line 4 "decomp/ST.exe/functions/006E8AA0/decomp.c"
int __thiscall st::fn_006E8AA0(void *this,uint *param_1,uint param_2)

{
  int iVar1;

  iVar1 = st::fn_006E8660(this,(int *)param_1,0,0,0,0,0,0,0);
  if (iVar1 == 0) {
    iVar1 = STField<int>(this,0x31c) + *param_1 * 0x114;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x1004;
    st::fn_006E8B00(this,*param_1,param_2);
    iVar1 = 0;
  }
  return iVar1;
}

// 006E8B00 FUN_006e8b00
#line 4 "decomp/ST.exe/functions/006E8B00/decomp.c"
void __thiscall st::fn_006E8B00(void *this,uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;

  if (param_1 < STField<uint>(this,0x310)) {
    puVar1 = (uint *)(STField<int>(this,0x31c) + param_1 * 0x114);
    uVar2 = *(uint *)(STField<int>(this,0x31c) + param_1 * 0x114);
    if (((uVar2 & 0x8000) != 0) && ((puVar1[1] & 0x1000) != 0)) {
      *puVar1 = uVar2 | 0xc;
      puVar1[0x26] = param_2;
      uVar2 = 1000000000;
      iVar3 = 10;
      do {
        if (param_2 / uVar2 != 0) break;
        uVar2 = uVar2 / 10;
        iVar3 = iVar3 + -1;
      } while (9 < uVar2);
      puVar1[0xd] = iVar3 * 6;
      puVar1[0xe] = 7;
      puVar1[0x22] = 3;
      puVar1[0x21] = (iVar3 * 6) / 2;
    }
  }
  return;
}

// 006E8C50 FUN_006e8c50
#line 4 "decomp/ST.exe/functions/006E8C50/decomp.c"
void st::fn_006E8C50(void)

{
  int iVar2;

  iVar2 = st::fn_00730FA0(0,0,0,0,(byte *)"%s: error parameter \"spr_num\"\n");
  if (iVar2 == 1) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return;
}

// 006E9080 FUN_006e9080
#line 4 "decomp/ST.exe/functions/006E9080/decomp.c"
undefined4 * __thiscall st::fn_006E9080(void *this,uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;

  if ((STField<uint>(this,0x310) <= param_1) ||
     (puVar1 = (uint *)(STField<int>(this,0x31c) + param_1 * 0x114), (*puVar1 & 0x8000) == 0)) {
    if (param_1 != 0xffffffff) {
      st::fn_006E8C50();
    }
    return nullptr;
  }
  uVar2 = puVar1[0x28];
  if ((((uVar2 != 0) && (param_2 < puVar1[0x25])) &&
      (iVar3 = **(int **)(uVar2 + 4 + param_2 * 8), iVar3 != 0)) &&
     (((int)param_3 < 0 || (param_3 < puVar1[0x25])))) {
    if ((int)param_3 < 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = **(undefined4 **)(uVar2 + 4 + param_3 * 8);
    }
    puVar4 = st::fn_006E9000
                       (this,iVar3,(ushort)puVar1[0x21],(ushort)puVar1[0x22],puVar1[0x1d],
                        puVar1[0x1e],puVar1[0x1f],uVar5);
    st::fn_006E8BA0(this,param_1);
    return (undefined4 *)puVar4;
  }
  st::fn_006E91A0();
  st::fn_006E8BA0(this,param_1);
  return nullptr;
}

// 006E91A0 FUN_006e91a0
#line 4 "decomp/ST.exe/functions/006E91A0/decomp.c"
void st::fn_006E91A0(void)

{
  int iVar2;

  iVar2 = st::fn_00730FA0(0,0,0,0,(byte *)"%s: error parameter \"plane_num\"\n");
  if (iVar2 == 1) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return;
}

// 006E93C0 FUN_006e93c0
#line 4 "decomp/ST.exe/functions/006E93C0/decomp.c"
void __thiscall st::fn_006E93C0(void *this,uint param_1,int param_2,uint param_3)

{
  uint *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;

  if ((STField<uint>(this,0x310) <= param_1) ||
     (puVar1 = (uint *)(STField<int>(this,0x31c) + param_1 * 0x114), (*puVar1 & 0x8000) == 0)) {
    if (param_1 != 0xffffffff) {
      st::fn_006E8C50();
    }
    return;
  }
  if (param_2 < (int)puVar1[0x25]) {
    if ((int)param_3 < 0) {
      puVar2 = (ushort *)(puVar1[0x29] + 2 + param_2 * 4);
      *puVar2 = *puVar2 & 0xdfff;
      uVar4 = puVar1[0x25];
      iVar5 = 0;
      if (0 < (int)uVar4) {
        iVar6 = puVar1[0x29] + 2;
        do {
          if ((*(byte *)(iVar6 + 1) & 0x20) != 0) break;
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar5 < (int)uVar4);
      }
      if (iVar5 < (int)uVar4) {
        return;
      }
      puVar1[0x23] = 0xffffffff;
      return;
    }
    if ((int)param_3 < (int)puVar1[0x25]) {
      pbVar3 = (byte *)(puVar1[0x29] + 3 + param_2 * 4);
      *pbVar3 = *pbVar3 | 0x20;
      puVar1[0x23] = param_3;
      return;
    }
  }
  st::fn_006E91A0();
  return;
}

// 006E9490 FUN_006e9490
#line 4 "decomp/ST.exe/functions/006E9490/decomp.c"
uint * __thiscall st::fn_006E9490(void *this,uint *param_1,int param_2,int param_3)

{
  ushort *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint *puVar4;

  puVar4 = STField<uint *>(this,0x310);
  if ((puVar4 <= param_1) ||
     (puVar4 = (uint *)(STField<int>(this,0x31c) + (int)param_1 * 0x114), (*puVar4 & 0x8000) == 0
     )) {
    if (param_1 != (uint *)0xffffffff) {
      puVar4 = (uint *)st::fn_006E8C50();
    }
    return puVar4;
  }
  if ((int)puVar4[0x25] <= param_2) {
    puVar4 = (uint *)st::fn_006E91A0();
    return puVar4;
  }
  if (param_3 != 0) {
    uVar3 = puVar4[0x29];
    puVar1 = (ushort *)(uVar3 + 2 + param_2 * 4);
    *puVar1 = *puVar1 & 0xfff7;
    return (uint *)(uVar3 + 2 + param_2 * 4);
  }
  uVar3 = puVar4[0x29];
  pbVar2 = (byte *)(uVar3 + 2 + param_2 * 4);
  *pbVar2 = *pbVar2 | 8;
  return (uint *)(uVar3 + 2 + param_2 * 4);
}

// 006E9A10 FUN_006e9a10
#line 1 "decomp/ST.exe/functions/006E9A10/decomp.c"

void st::fn_006E9A10(uint *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  uVar2 = param_1[0x28];
  if ((uVar2 != 0) && (*(int *)(uVar2 + 4 + param_2 * 8) != 0)) {
    if ((int)param_3 < 0) {
      uVar4 = (uint)*(short *)(param_1[0x29] + param_2 * 4);
      if (param_3 == 0xffffffff) {
        uVar4 = uVar4 + 1;
      }
      iVar3 = *(int *)(uVar2 + param_2 * 8);
      param_3 = uVar4 & 0xffff;
      if ((iVar3 != 0) && (iVar3 <= (int)param_3)) {
        param_3 = 0;
      }
    }
    else {
      iVar3 = *(int *)(uVar2 + param_2 * 8);
      if (0 < iVar3) {
        param_3 = (int)param_3 % iVar3;
      }
    }
    if ((((param_1[2] == 0) && ((*param_1 & 0x10000) != 0)) &&
        (iVar3 = param_1[0x29] + param_2 * 4,
        (int)*(short *)(param_1[0x29] + param_2 * 4) != param_3)) &&
       (uVar1 = *(ushort *)(iVar3 + 2), (uVar1 & 0xc000) == 0xc000)) {
      *(ushort *)(iVar3 + 2) = uVar1 | 0x80;
      if ((*(byte *)(param_1[0x29] + 2 + param_2 * 4) & 0x40) != 0) {
        *param_1 = *param_1 | 0x800;
        *(short *)(param_1[0x29] + param_2 * 4) = (short)param_3;
        return;
      }
      *param_1 = *param_1 & 0xff87ffff | 0x4c;
    }
    *(short *)(param_1[0x29] + param_2 * 4) = (short)param_3;
  }
  return;
}

// 006E9DD0 FUN_006e9dd0
#line 4 "decomp/ST.exe/functions/006E9DD0/decomp.c"
uint * __thiscall st::fn_006E9DD0(void *this,uint *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint *puVar3;

  puVar3 = STField<uint *>(this,0x310);
  if ((param_1 < puVar3) &&
     (puVar3 = (uint *)(STField<int>(this,0x31c) + (int)param_1 * 0x114), (*puVar3 & 0x8000) != 0
     )) {
    if (puVar3[0x28] != 0) {
      if (puVar3[0x25] <= param_2) {
        puVar3 = (uint *)st::fn_006E91A0();
        return puVar3;
      }
      if (*(int *)(puVar3[0x28] + 4 + param_2 * 8) != 0) {
        uVar2 = puVar3[0x29];
        pbVar1 = (byte *)(uVar2 + 3 + param_2 * 4);
        *pbVar1 = *pbVar1 | 0x80;
        return (uint *)(uVar2 + 2 + param_2 * 4);
      }
    }
  }
  else if (param_1 != (uint *)0xffffffff) {
    puVar3 = (uint *)st::fn_006E8C50();
  }
  return puVar3;
}

// 006E9E60 FUN_006e9e60
#line 4 "decomp/ST.exe/functions/006E9E60/decomp.c"
uint * __thiscall st::fn_006E9E60(void *this,uint *param_1,uint param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint *puVar3;

  puVar3 = STField<uint *>(this,0x310);
  if ((param_1 < puVar3) &&
     (puVar3 = (uint *)(STField<int>(this,0x31c) + (int)param_1 * 0x114), (*puVar3 & 0x8000) != 0
     )) {
    if (puVar3[0x28] != 0) {
      if (puVar3[0x25] <= param_2) {
        puVar3 = (uint *)st::fn_006E91A0();
        return puVar3;
      }
      if (*(int *)(puVar3[0x28] + 4 + param_2 * 8) != 0) {
        uVar2 = puVar3[0x29];
        puVar1 = (ushort *)(uVar2 + 2 + param_2 * 4);
        *puVar1 = *puVar1 & 0x7fff;
        return (uint *)(uVar2 + 2 + param_2 * 4);
      }
    }
  }
  else if (param_1 != (uint *)0xffffffff) {
    puVar3 = (uint *)st::fn_006E8C50();
  }
  return puVar3;
}

// 006EA190 FUN_006ea190
#line 4 "decomp/ST.exe/functions/006EA190/decomp.c"
uint __thiscall st::fn_006EA190(void *this,uint param_1,uint param_2,int param_3)

{
  uint *puVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;

  if ((param_1 < STField<uint>(this,0x310)) &&
     (puVar1 = (uint *)(STField<int>(this,0x31c) + param_1 * 0x114),
     (*(uint *)(STField<int>(this,0x31c) + param_1 * 0x114) & 0x8000) != 0)) {
    if (puVar1[0x25] <= param_2) {
      st::fn_006E91A0();
      return 0;
    }
    puVar2 = (ushort *)(puVar1[0x29] + 2 + param_2 * 4);
    uVar3 = *(ushort *)(puVar1[0x29] + 2 + param_2 * 4);
    uVar5 = (uVar3 & 0x40) >> 6;
    if (param_3 != 0) {
      *puVar2 = uVar3 | 0x40;
      *puVar1 = *puVar1 | 0x400;
      return uVar5;
    }
    *puVar2 = uVar3 & 0xffbf;
    uVar4 = puVar1[0x25];
    iVar6 = 0;
    if (0 < (int)uVar4) {
      pbVar7 = (byte *)(puVar1[0x29] + 2);
      do {
        if ((*pbVar7 & 0x40) != 0) break;
        iVar6 = iVar6 + 1;
        pbVar7 = pbVar7 + 4;
      } while (iVar6 < (int)uVar4);
    }
    if ((int)uVar4 <= iVar6) {
      *puVar1 = *puVar1 & 0xfffffbff;
      return uVar5;
    }
  }
  else {
    if (param_1 != 0xffffffff) {
      st::fn_006E8C50();
    }
    uVar5 = 0;
  }
  return uVar5;
}

// 006EA340 FUN_006ea340
#line 4 "decomp/ST.exe/functions/006EA340/decomp.c"
void __thiscall st::fn_006EA340(void *this,uint param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;

  if (param_1 < STField<uint>(this,0x310)) {
    iVar2 = STField<int>(this,0x31c);
    iVar1 = iVar2 + param_1 * 0x114;
    if ((*(uint *)(iVar2 + param_1 * 0x114) & 0x8000) != 0) {
      if (((-1 < param_2) && (param_2 < (int)STField<uint>(this,0x310))) &&
         ((*(uint *)(iVar2 + param_2 * 0x114) & 0x8000) != 0)) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(uint *)(iVar2 + param_2 * 0x114 + 0x94) <= param_3) {
          st::fn_006E91A0();
          return;
        }
        *(int *)(iVar1 + 0x1c) = param_2;
        *(uint *)(iVar1 + 0x20) = param_3;
        *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xffffffcf | 0x40;
        return;
      }
      goto LAB_006ea3ca;
    }
  }
  if (param_1 == 0xffffffff) {
    return;
  }
LAB_006ea3ca:
  st::fn_006E8C50();
  return;
}

// 006EAD40 FUN_006ead40
#line 4 "decomp/ST.exe/functions/006EAD40/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=1,
   ignored=4, unknown=0 */

void __thiscall
st::fn_006EAD40(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  STField<undefined4>(this,0x334) = param_1;
  STField<undefined4>(this,0x338) = param_2;
  STField<undefined4>(this,0x33c) = param_3;
  STField<undefined4>(this,0x340) = param_4;
  STField<undefined4>(this,0x344) = param_5;
  STField<undefined4>(this,0x348) = param_6;
  STField<undefined4>(this,0x34c) = param_7;
  return;
}

// 006EB4B0 FUN_006eb4b0
#line 1 "decomp/ST.exe/functions/006EB4B0/decomp.c"

int st::fn_006EB4B0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = param_1;
  iVar2 = st::fn_006BB8B0((AnonShape_006BB8B0_D6DE56CA *)param_1);
  if (iVar2 == 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = 0;
    while( true ) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar3 = st::fn_006BBE40(*(int **)(iVar1 + 0x44),(uint *)(param_2 + 0x4ea),
                           (int *)(param_2 + 0x4ee),0x20);
      if (iVar3 == 0) break;
      if (iVar3 != -0x7789fe3e) {
        if (iVar3 != 0) {
          st::fn_006BB980((AnonShape_006BB980_E41494A1 *)iVar1);
          return iVar3;
        }
        break;
      }
      st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)iVar1);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 + 1;
      if (1 < param_1) {
        st::fn_006BB980((AnonShape_006BB980_E41494A1 *)iVar1);
        return -0x7789fe3e;
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}

// 006EB540 FUN_006eb540
#line 4 "decomp/ST.exe/functions/006EB540/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006EB540 returns zeroed full register at 006EB561 @ 006EB565 */

uint st::fn_006EB540(int param_1)

{
  int *piVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x44);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*piVar1 + 0x80))(piVar1,0);
  st::fn_006BB980(*(AnonShape_006BB980_E41494A1 **)(param_1 + 4));
  return 0;
}

// 006EB570 FUN_006eb570
#line 4 "decomp/ST.exe/functions/006EB570/decomp.c"
undefined4 st::fn_006EB570(int *param_1,AnonShape_006EB570_80B255F3 *param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int rowCount;
  int local_9c;
  int local_94;
  int local_90;
  uint local_8c;
  int local_84;
  int local_80;
  int local_7c;
  int local_74;
  int local_70;
  int local_6c;
  uint local_68;
  int local_64;
  undefined1 *local_60;
  int local_5c;
  int local_58;
  byte *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  char *local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079e1d8;
  puStack_10 = &st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff44;
  iVar1 = *(int *)param_2;
  iVar8 = *(int *)&param_2->field_0x4;
  local_8 = 0;
  if ((*(int *)&param_2->field_0x18 == 0) || (param_2->field_0466 == 0)) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_1 == nullptr) {
      ExceptionList = &local_14;
      st::fn_006CEA60((byte *)param_2->field_04EA,param_2->field_04EE,*(byte **)(iVar8 + 0x474),
               *(int *)(iVar8 + 0x478),*(uint *)(iVar1 + 0xc),*(int *)(iVar1 + 0x10));
      ExceptionList = local_14;
      return 0;
    }
    iVar1 = *(int *)(iVar8 + 0x478);
    iVar7 = param_1[1];
    iVar6 = *param_1;
    rowCount = param_1[3];
    uVar2 = param_1[2];
    pbVar5 = (byte *)(iVar7 * iVar1 + *(int *)(iVar8 + 0x474) + iVar6);
    ExceptionList = &local_14;
    local_1c = &stack0xffffff44;
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_1 == nullptr) {
      local_34 = 0;
      local_30 = 0;
      local_2c = *(uint *)(iVar1 + 0xc);
      local_28 = *(int *)(iVar1 + 0x10);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = &local_34;
    }
    else {
      local_34 = *param_1;
      local_30 = param_1[1];
      local_2c = param_1[2];
      local_28 = param_1[3];
    }
    ExceptionList = &local_14;
    local_1c = &stack0xffffff44;
    iVar1 = st::fn_006B0460(&local_70,&local_34,&param_2->field_048E);
    if (iVar1 != 0) {
      iVar6 = (local_70 - param_2->field_0476) - param_2->field_048E;
      iVar1 = param_2->field_04E2;
      local_84 = iVar6 - iVar1 * (iVar6 / iVar1);
      iVar7 = (local_6c - param_2->field_0492) - param_2->field_047A;
      local_9c = param_2->field_04E6;
      local_5c = iVar7 - local_9c * (iVar7 / local_9c);
      local_4c = iVar6 / iVar1 + param_2->field_047E;
      local_58 = (int)((local_68 - 1) + iVar6) / iVar1 + param_2->field_047E;
      local_7c = iVar7 / local_9c + param_2->field_0482;
      local_90 = (local_64 + -1 + iVar7) / local_9c + param_2->field_0482;
      local_94 = param_2->field_04B2 * local_7c + *(int *)&param_2->field_0x18;
      if ((*(char *)(local_94 + local_4c) != -1) || (*(char *)(local_94 + local_58) != -1)) {
LAB_006eb7d3:
        pcVar3 = (char *)(param_2->field_04B2 * local_90 + *(int *)&param_2->field_0x18);
        if ((pcVar3[local_4c] == -1) && (pcVar3[local_58] == -1)) {
          local_3c = local_64 + local_6c;
          iVar1 = ((local_3c - (local_90 - param_2->field_0482) * param_2->field_04E6) -
                  param_2->field_0492) - param_2->field_047A;
          local_38 = pcVar3;
          for (local_48 = local_90; iVar6 = local_4c, local_7c < local_48; local_48 = local_48 + -1)
          {
            for (; local_44 = iVar6, iVar6 <= local_58; iVar6 = iVar6 + 1) {
              if (local_38[iVar6] != -1) {
                if (iVar6 <= local_58) goto LAB_006eb87f;
                break;
              }
            }
            local_3c = local_3c - iVar1;
            iVar1 = param_2->field_04E6;
            local_38 = local_38 + -param_2->field_04B2;
          }
LAB_006eb87f:
          if (local_3c < local_64 + local_6c) {
            local_64 = local_3c - local_6c;
            local_90 = local_48;
          }
        }
        if ((*(char *)(local_94 + local_4c) == -1) && (pcVar3[local_4c] == -1)) {
          local_8c = param_2->field_04E2 - local_84;
          local_24 = local_70;
          for (local_44 = local_4c; local_44 <= local_58; local_44 = local_44 + 1) {
            local_48 = local_7c;
            for (local_38 = (char *)(local_44 + local_94);
                (local_48 <= local_90 && (*local_38 == -1));
                local_38 = local_38 + param_2->field_04B2) {
              local_48 = local_48 + 1;
            }
            if (local_48 <= local_90) break;
            local_24 = local_24 + local_8c;
            local_8c = param_2->field_04E2;
          }
          if (local_70 < local_24) {
            local_68 = local_68 + (local_70 - local_24);
            local_84 = 0;
            local_70 = local_24;
            local_4c = local_44;
          }
        }
        if ((*(char *)(local_94 + local_58) == -1) && (pcVar3[local_58] == -1)) {
          local_24 = local_68 + local_70;
          iVar1 = ((local_24 - (local_58 - param_2->field_047E) * param_2->field_04E2) -
                  param_2->field_048E) - param_2->field_0476;
          for (local_44 = local_58; local_4c < local_44; local_44 = local_44 + -1) {
            local_48 = local_7c;
            for (local_38 = (char *)(local_44 + local_94);
                (local_48 <= local_90 && (*local_38 == -1));
                local_38 = local_38 + param_2->field_04B2) {
              local_48 = local_48 + 1;
            }
            if (local_48 <= local_90) break;
            local_24 = local_24 - iVar1;
            iVar1 = param_2->field_04E2;
          }
          if (local_24 < (int)(local_68 + local_70)) {
            local_68 = local_24 - local_70;
            local_58 = local_44;
          }
        }
        if (local_30 < local_6c) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          st::fn_006CEA60((byte *)(param_2->field_04EE * local_30 + param_2->field_04EA + local_34),
                   param_2->field_04EE,
                   (byte *)(*(int *)(iVar8 + 0x478) * local_30 + *(int *)(iVar8 + 0x474) + local_34)
                   ,*(int *)(iVar8 + 0x478),local_2c,local_6c - local_30);
        }
        iVar1 = ((local_28 - local_64) - local_6c) + local_30;
        if (0 < iVar1) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          st::fn_006CEA60((byte *)((local_64 + local_6c) * param_2->field_04EE + param_2->field_04EA +
                           local_34),param_2->field_04EE,
                   (byte *)((local_64 + local_6c) * *(int *)(iVar8 + 0x478) +
                            *(int *)(iVar8 + 0x474) + local_34),*(int *)(iVar8 + 0x478),local_2c,
                   iVar1);
        }
        if (local_34 < local_70) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          st::fn_006CEA60((byte *)(param_2->field_04EE * local_6c + param_2->field_04EA + local_34),
                   param_2->field_04EE,
                   (byte *)(*(int *)(iVar8 + 0x478) * local_6c + *(int *)(iVar8 + 0x474) + local_34)
                   ,*(int *)(iVar8 + 0x478),local_70 - local_34,local_64);
        }
        uVar2 = ((local_2c - local_68) - local_70) + local_34;
        if (0 < (int)uVar2) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          st::fn_006CEA60((byte *)(param_2->field_04EE * local_6c + param_2->field_04EA + local_68 +
                           local_70),param_2->field_04EE,
                   (byte *)(*(int *)(iVar8 + 0x478) * local_6c + *(int *)(iVar8 + 0x474) + local_68
                           + local_70),*(int *)(iVar8 + 0x478),uVar2,local_64);
        }
        local_9c = param_2->field_04E6 - local_5c;
        local_3c = local_6c;
        local_38 = (char *)local_94;
        for (local_80 = local_7c; local_80 <= local_90; local_80 = local_80 + 1) {
          if (local_64 < local_9c) {
            local_9c = local_64;
          }
          local_50 = local_84;
          local_40 = local_68;
          local_74 = local_4c;
          local_24 = local_70;
          while( true ) {
            pbVar5 = (byte *)(param_2->field_04EE * local_3c + param_2->field_04EA + local_24);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            local_54 = (byte *)(*(int *)(iVar8 + 0x478) * local_3c + *(int *)(iVar8 + 0x474) +
                               local_24);
            local_8c = param_2->field_04E2 - local_50;
            uVar2 = (uint)*(byte *)(local_74 + local_94);
            if (((uVar2 == 0xff) || (uVar2 == 0x20)) || (uVar2 == 0)) {
              while ((local_74 < local_58 && (*(byte *)(local_74 + 1 + local_94) == uVar2))) {
                local_8c = local_8c + param_2->field_04E2;
                local_74 = local_74 + 1;
              }
              if ((int)local_40 < (int)local_8c) {
                local_8c = local_40;
              }
              if (uVar2 == 0xff) {
                st::fn_006CEA60(pbVar5,param_2->field_04EE,local_54,*(int *)(iVar8 + 0x478),local_8c,
                         local_9c);
              }
              else {
                if (uVar2 == 0x20) {
                  iVar1 = *(int *)&param_2->field_0x154 + 0x1000;
                }
                else {
                  iVar1 = *(int *)&param_2->field_0x154 + 0x1800;
                }
                st::fn_00750590(pbVar5,param_2->field_04EE,local_54,*(int *)(iVar8 + 0x478),local_8c,
                             local_9c,iVar1);
              }
            }
            else {
              if ((int)local_40 < (int)local_8c) {
                local_8c = local_40;
              }
              local_60 = (undefined1 *)
                         (*(int *)(param_2->field_0472 + uVar2 * 4) + param_2->field_04E2 * local_5c
                         + local_50);
              st::fn_00750660(pbVar5,param_2->field_04EE,local_54,*(int *)(iVar8 + 0x478),local_60,
                           param_2->field_04E2,local_8c,local_9c,*(int *)&param_2->field_0x154);
            }
            local_74 = local_74 + 1;
            if (local_58 < local_74) break;
            local_50 = 0;
            local_24 = local_24 + local_8c;
            local_40 = local_40 - local_8c;
          }
          local_64 = local_64 - local_9c;
          local_3c = local_3c + local_9c;
          local_9c = param_2->field_04E6;
          local_94 = local_94 + param_2->field_04B2;
          local_5c = 0;
        }
        ExceptionList = local_14;
        return 0;
      }
      local_9c = local_9c - local_5c;
      local_3c = local_6c;
      for (local_48 = local_7c; iVar1 = local_4c, local_48 <= local_90; local_48 = local_48 + 1) {
        for (; local_44 = iVar1, iVar1 <= local_58; iVar1 = iVar1 + 1) {
          if (*(char *)(iVar1 + local_94) != -1) {
            if (iVar1 <= local_58) goto LAB_006eb763;
            break;
          }
        }
        local_3c = local_3c + local_9c;
        local_9c = param_2->field_04E6;
        local_94 = local_94 + param_2->field_04B2;
      }
LAB_006eb763:
      if (local_48 <= local_90) {
        if (local_6c < local_3c) {
          local_64 = local_64 + (local_6c - local_3c);
          local_7c = local_48;
          local_5c = 0;
          local_6c = local_3c;
        }
        goto LAB_006eb7d3;
      }
      iVar1 = *(int *)(iVar8 + 0x478);
      iVar4 = param_1[1];
      iVar6 = *param_1;
      iVar7 = param_2->field_04EE;
      rowCount = param_1[3];
      uVar2 = param_1[2];
      pbVar5 = (byte *)(iVar4 * iVar1 + *(int *)(iVar8 + 0x474) + iVar6);
      iVar8 = iVar7;
      goto LAB_006ebde1;
    }
    iVar1 = *(int *)(iVar8 + 0x478);
    iVar7 = param_1[1];
    iVar6 = *param_1;
    rowCount = param_1[3];
    uVar2 = param_1[2];
    pbVar5 = (byte *)(iVar7 * iVar1 + *(int *)(iVar8 + 0x474) + iVar6);
  }
  iVar4 = param_2->field_04EE;
  iVar8 = iVar4;
LAB_006ebde1:
  st::fn_006CEA60((byte *)(iVar7 * iVar4 + param_2->field_04EA + iVar6),iVar8,pbVar5,iVar1,uVar2,rowCount);
  ExceptionList = local_14;
  return 0;
}

// 006EBE40 FUN_006ebe40
#line 4 "decomp/ST.exe/functions/006EBE40/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall st::fn_006EBE40(AnonShape_006EBE40_77FE2AA7 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  bool bVar5;
  undefined1 *puVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;

  puVar11 = param_1->field_000C;
  puVar13 = param_1->field_001C;
  DAT_00856db0 = param_1->field_0028;
  puVar6 = (undefined1 *)(param_1->field_0014 + 1);
  _DAT_00856dbc = param_1->field_0028 << 1;
  _DAT_00856dac = 0;
  _DAT_00856db4 = param_1->field_0174;
  iVar4 = param_1->field_0158;
  DAT_00856da8 = iVar4;
  do {
    if ((_DAT_00856dac & 1) == 0) {
      iVar8 = DAT_00856db0 + -4;
      do {
        puVar14 = puVar13;
        puVar12 = puVar11;
        puVar10 = puVar6;
        puVar11 = puVar12 + 4;
        puVar6 = puVar10 + 8;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar1 = *(undefined1 *)(iVar4 + -0x100 + (uint)CONCAT11(puVar10[2],puVar12[1]));
        *puVar14 = *(undefined1 *)(iVar4 + (uint)CONCAT11(*puVar10,*puVar12));
        uVar2 = puVar10[4];
        puVar14[1] = uVar1;
        uVar1 = puVar10[6];
        puVar13 = puVar14 + 4;
        uVar3 = puVar12[3];
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        puVar14[2] = *(undefined1 *)(iVar4 + -0x200 + (uint)CONCAT11(uVar2,puVar12[2]));
        iVar9 = iVar8 + -4;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        puVar14[3] = *(undefined1 *)(iVar4 + -0x300 + (uint)CONCAT11(uVar1,uVar3));
        bVar5 = 3 < iVar8;
        iVar8 = iVar9;
      } while (bVar5);
      cVar7 = (char)iVar9;
      if (-4 < cVar7) {
        uVar1 = *puVar6;
        puVar6 = puVar10 + 10;
        uVar2 = *puVar11;
        puVar11 = puVar12 + 5;
        *puVar13 = *(undefined1 *)(iVar4 + (uint)CONCAT11(uVar1,uVar2));
        puVar13 = puVar14 + 5;
        if (cVar7 != -3 && '\0' < (char)(cVar7 + '\x04')) {
          uVar1 = *puVar6;
          puVar6 = puVar10 + 0xc;
          uVar2 = *puVar11;
          puVar11 = puVar12 + 6;
          *puVar13 = *(undefined1 *)(iVar4 + -0x100 + (uint)CONCAT11(uVar1,uVar2));
          puVar13 = puVar14 + 6;
          if ('\x01' < (char)(cVar7 + '\x03')) {
            uVar1 = *puVar6;
            puVar6 = puVar10 + 0xe;
            uVar2 = *puVar11;
            puVar11 = puVar12 + 7;
            *puVar13 = *(undefined1 *)(iVar4 + -0x200 + (uint)CONCAT11(uVar1,uVar2));
            puVar13 = puVar14 + 7;
          }
        }
      }
    }
    else {
      iVar8 = DAT_00856db0 + -4;
      do {
        puVar14 = puVar13;
        puVar12 = puVar11;
        puVar10 = puVar6;
        iVar9 = iVar8;
        puVar11 = puVar12 + 4;
        puVar6 = puVar10 + 8;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar1 = *(undefined1 *)(iVar4 + -0x200 + (uint)CONCAT11(puVar10[2],puVar12[1]));
        *puVar14 = *(undefined1 *)(iVar4 + -0x300 + (uint)CONCAT11(*puVar10,*puVar12));
        uVar2 = puVar10[4];
        puVar14[1] = uVar1;
        uVar1 = puVar10[6];
        puVar13 = puVar14 + 4;
        uVar3 = puVar12[3];
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        puVar14[2] = *(undefined1 *)(iVar4 + -0x100 + (uint)CONCAT11(uVar2,puVar12[2]));
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        puVar14[3] = *(undefined1 *)(iVar4 + (uint)CONCAT11(uVar1,uVar3));
        iVar8 = iVar9 + -4;
      } while (3 < iVar9);
      if (iVar9 != 0 && -5 < iVar9 + -4) {
        uVar1 = *puVar6;
        puVar6 = puVar10 + 10;
        uVar2 = *puVar11;
        puVar11 = puVar12 + 5;
        *puVar13 = *(undefined1 *)(iVar4 + -0x300 + (uint)CONCAT11(uVar1,uVar2));
        puVar13 = puVar14 + 5;
        if ('\x01' < (char)iVar9) {
          uVar1 = *puVar6;
          puVar6 = puVar10 + 0xc;
          uVar2 = *puVar11;
          puVar11 = puVar12 + 6;
          *puVar13 = *(undefined1 *)(iVar4 + -0x200 + (uint)CONCAT11(uVar1,uVar2));
          puVar13 = puVar14 + 6;
          if ('\x01' < (char)((char)iVar9 + -1)) {
            uVar1 = *puVar6;
            puVar6 = puVar10 + 0xe;
            uVar2 = *puVar11;
            puVar11 = puVar12 + 7;
            *puVar13 = *(undefined1 *)(iVar4 + -0x100 + (uint)CONCAT11(uVar1,uVar2));
            puVar13 = puVar14 + 7;
          }
        }
      }
    }
    iVar8 = _DAT_00856db4;
    _DAT_00856dac = _DAT_00856dac + 1;
    _DAT_00856db4 = _DAT_00856db4 + -1;
  } while (_DAT_00856db4 != 0 && 0 < iVar8);
  return;
}

// 006EC010 FUN_006ec010
#line 4 "decomp/ST.exe/functions/006EC010/decomp.c"
int __fastcall st::fn_006EC010(undefined4 *param_1)

{
  uint uVar1;
  bool bVar2;
  void **ppvVar3;
  undefined1 *puVar4;
  int iVar6;
  int iVar11;
  uint *puVar7;
  int *piVar8;
  int iVar5;
  int *piVar9;
  int local_EAX_1132;
  int local_EAX_1501;
  int local_EAX_1844;
  int iVar10;
  byte *pbVar11;
  int rowCount;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int local_cc;
  int local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_8c;
  int local_88;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_64;
  int local_60;
  int local_5c;
  uint *local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_38;
  int local_2c;
  int local_28;
  uint *local_24;
  AnonShape_006EC010_0B2ED2E5 *local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079e1e8;
  puStack_10 = &st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff20;
  iVar13 = 0;
  local_48 = 0;
  local_44 = 0;
  local_64 = 0;
  local_40 = 0;
  iVar10 = (param_1[0xca] - param_1[200]) - param_1[0xc9];
  local_2c = param_1[0xe] - param_1[0xc];
  local_28 = param_1[0xf] - param_1[0xd];
  ExceptionList = &local_14;
  if (param_1[0xb6] == 0) {
    local_60 = param_1[0xca] + -1;
    local_20 = (AnonShape_006EC010_0B2ED2E5 *)(param_1[0xcc] + local_60 * 0x68);
    ExceptionList = &local_14;
    ppvVar3 = &local_14;
    local_1c = &stack0xffffff20;
    puVar4 = &stack0xffffff20;
    if (param_1[0xc9] + iVar10 <= local_60) {
      do {
        local_1c = puVar4;
        ExceptionList = ppvVar3;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_54 = (uint *)(*(int *)&local_20->field_0x60 * 0x10 +
                           *(int *)(local_20->field_0064 + 0xec));
        if (((byte)*(undefined4 *)local_20 & 7) == 1) {
          iVar12 = 0;
          piVar8 = (int *)param_1[0xd4];
          if (0 < *piVar8) {
            local_a4 = 0;
            do {
              iVar6 = st::fn_006B0460(&local_78,(int *)local_54,(int *)(local_a4 + 8 + (int)piVar8));
              if (iVar6 != 0) {
                *(uint *)local_20 = *(uint *)local_20 | 2;
                break;
              }
              iVar12 = iVar12 + 1;
              local_a4 = local_a4 + 0x10;
              piVar8 = (int *)param_1[0xd4];
            } while (iVar12 < *piVar8);
          }
        }
        local_60 = local_60 + -1;
        local_20 = local_20 + -1;
        ppvVar3 = ExceptionList;
        puVar4 = local_1c;
      } while (param_1[0xc9] + iVar10 <= local_60);
    }
    iVar12 = param_1[0xc9] + -1 + iVar10;
    local_20 = (AnonShape_006EC010_0B2ED2E5 *)(param_1[0xcc] + iVar12 * 0x68);
    iVar6 = local_64;
    if (iVar10 <= iVar12) {
      piVar8 = &local_20->field_0018;
      local_a8 = (iVar12 - iVar10) + 1;
      do {
        local_24 = (uint *)piVar8[0x13];
        if ((((byte)*(uint *)local_20 & 5) == 1) &&
           (((*(uint *)local_20 & 0x80) == 0 || (*piVar8 < 5)))) {
          local_8c = 0;
          piVar9 = (int *)param_1[0xd4];
          if (0 < *piVar9) {
            local_ac = 0;
            do {
              iVar12 = st::fn_006B0460(&local_78,(int *)(local_24 + 0x19),
                                    (int *)(local_ac + 8 + (int)piVar9));
              if (((iVar12 != 0) && (*(uint *)local_20 = *(uint *)local_20 | 0x82, *piVar8 < 5)) &&
                 (iVar11 = st::fn_006D1AD0(piVar8,4,local_78,local_74,local_70,local_6c,local_24[0x1b],
                                        local_24[0x1c],0), iVar11 < 0)) {
                if ((*(byte *)(piVar8 + -5) & 0x40) != 0) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  iVar13 = *(int *)(param_1[199] + 0xc + *(int *)(piVar8[0x13] + 0x1c) * 0x114);
                  *(undefined4 *)(param_1[0xcc] + 0x18 + iVar13 * 0x68) = 5;
                  puVar7 = (uint *)(iVar13 * 0x68 + param_1[0xcc]);
                  *puVar7 = *puVar7 | 0x82;
                }
                break;
              }
              local_8c = local_8c + 1;
              local_ac = local_ac + 0x10;
              piVar9 = (int *)param_1[0xd4];
            } while (local_8c < *piVar9);
          }
        }
        local_20 = local_20 + -1;
        piVar8 = piVar8 + -0x1a;
        local_a8 = local_a8 + -1;
        iVar6 = iVar13;
      } while (local_a8 != 0);
    }
    local_64 = iVar6;
    *(undefined4 *)param_1[0xd5] = *(undefined4 *)param_1[0xd4];
    *(undefined4 *)(param_1[0xd5] + 4) = *(undefined4 *)(param_1[0xd4] + 4);
    uVar1 = *(uint *)param_1[0xd4];
    if (0 < (int)uVar1) {
      puVar7 = (uint *)param_1[0xd4] + 2;
      puVar14 = (uint *)(param_1[0xd5] + 8);
      for (iVar13 = (uVar1 & 0xfffffff) << 2; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar14 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar14 = puVar14 + 1;
      }
      for (iVar12 = 0; iVar13 = local_64, iVar12 != 0; iVar12 = iVar12 + -1) {
        *(char *)puVar14 = (char)*puVar7;
        puVar7 = (uint *)((int)puVar7 + 1);
        puVar14 = (uint *)((int)puVar14 + 1);
      }
    }
    iVar12 = param_1[0xca] + -1;
    local_20 = (AnonShape_006EC010_0B2ED2E5 *)(param_1[0xcc] + iVar12 * 0x68);
    if (param_1[0xc9] + iVar10 <= iVar12) {
      do {
        puVar7 = (uint *)local_20->field_0064;
        piVar8 = (int *)(*(int *)&local_20->field_0x60 * 0x10 + puVar7[0x3b]);
        if ((*(byte *)local_20 & 2) == 0) {
          if ((*puVar7 & 0x40) != 0) {
            *puVar7 = *puVar7 & 0xffffffef;
          }
        }
        else {
          iVar5 = st::fn_006D1AD0((int *)param_1[0xd5],100,*piVar8,piVar8[1],piVar8[2],piVar8[3],
                               local_2c,local_28,1);
          param_1[0xb6] = (uint)(iVar5 < 0);
          if (iVar5 < 0 != 0) break;
        }
        iVar12 = iVar12 + -1;
        local_20 = local_20 + -1;
      } while (param_1[0xc9] + iVar10 <= iVar12);
    }
  }
  if (param_1[0xb6] == 0) {
    local_c8 = iVar10 + -1;
    local_20 = (AnonShape_006EC010_0B2ED2E5 *)(param_1[0xcc] + local_c8 * 0x68);
    if (-1 < local_c8) {
      piVar8 = &local_20->field_0018;
      local_b4 = iVar10;
      do {
        local_24 = (uint *)piVar8[0x13];
        if ((((byte)*(uint *)local_20 & 5) == 1) &&
           (((*(uint *)local_20 & 2) == 0 || (*piVar8 < 5)))) {
          local_8c = 0;
          piVar9 = (int *)param_1[0xd5];
          if (0 < *piVar9) {
            local_b8 = 0;
            do {
              iVar12 = st::fn_006B0460(&local_78,(int *)(local_24 + 0x19),
                                    (int *)(local_b8 + 8 + (int)piVar9));
              if ((iVar12 != 0) && (*(uint *)local_20 = *(uint *)local_20 | 2, *piVar8 < 5)) {
                if ((*(byte *)(piVar8 + -5) & 0x40) != 0) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  iVar13 = *(int *)(param_1[199] + 0xc + *(int *)(piVar8[0x13] + 0x1c) * 0x114);
                  puVar7 = (uint *)(param_1[0xcc] + iVar13 * 0x68);
                  *puVar7 = *puVar7 | 2;
                }
                local_EAX_1132 =
                     st::fn_006D1AD0(piVar8,4,local_78,local_74,local_70,local_6c,local_24[0x1b],
                                  local_24[0x1c],0);
                if (local_EAX_1132 < 0) {
                  if ((*(byte *)(piVar8 + -5) & 0x40) != 0) {
                    *(undefined4 *)(param_1[0xcc] + 0x18 + iVar13 * 0x68) = 5;
                  }
                  break;
                }
              }
              local_8c = local_8c + 1;
              local_b8 = local_b8 + 0x10;
              piVar9 = (int *)param_1[0xd5];
            } while (local_8c < *piVar9);
          }
        }
        local_20 = local_20 + -1;
        piVar8 = piVar8 + -0x1a;
        local_b4 = local_b4 + -1;
      } while (local_b4 != 0);
    }
    iVar12 = param_1[0xc9] + -1 + iVar10;
    local_20 = (AnonShape_006EC010_0B2ED2E5 *)(param_1[0xcc] + iVar12 * 0x68);
    if (iVar10 <= iVar12) {
      local_bc = (iVar12 - iVar10) + 1;
      do {
        local_54 = (uint *)(local_20->field_0064 + 100);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((((*(int *)(local_20->field_0064 + 0x90) != 0) && ((*(byte *)local_20 & 0x80) != 0)) &&
            (4 < local_20->field_0018)) &&
           (puVar7 = (uint *)(param_1[0xcc] + local_c8 * 0x68), local_c0 = iVar10, -1 < local_c8)) {
          do {
            if (((((byte)*puVar7 & 7) == 1) || ((int)puVar7[6] < 5)) &&
               (iVar12 = st::fn_006B0460(&local_78,(int *)local_54,(int *)(puVar7[0x19] + 100)),
               iVar12 != 0)) {
              *puVar7 = *puVar7 | 2;
              if ((int)puVar7[6] < 5) {
                if ((puVar7[1] & 0x40) != 0) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  iVar13 = *(int *)(param_1[199] + 0xc + *(int *)(puVar7[0x19] + 0x1c) * 0x114);
                  puVar14 = (uint *)(param_1[0xcc] + iVar13 * 0x68);
                  *puVar14 = *puVar14 | 2;
                }
                local_EAX_1501 =
                     st::fn_006D1AD0((int *)(puVar7 + 6),4,local_78,local_74,local_70,local_6c,
                                  *(int *)(puVar7[0x19] + 0x6c),*(int *)(puVar7[0x19] + 0x70),0);
                if ((local_EAX_1501 < 0) && ((puVar7[1] & 0x40) != 0)) {
                  *(undefined4 *)(param_1[0xcc] + 0x18 + iVar13 * 0x68) = 5;
                }
              }
            }
            puVar7 = puVar7 + -0x1a;
            local_c0 = local_c0 + -1;
          } while (local_c0 != 0);
        }
        local_20 = local_20 + -1;
        local_bc = local_bc + -1;
      } while (local_bc != 0);
    }
    iVar10 = local_c8 * 0x68;
    local_20 = (AnonShape_006EC010_0B2ED2E5 *)(param_1[0xcc] + iVar10);
    while (local_60 = local_c8, -1 < local_c8) {
      local_24 = *(uint **)(param_1[0xcc] + 100 + iVar10);
      bVar2 = false;
      local_54 = local_24 + 0x19;
      if (((*(uint *)local_20 & 2) == 0) || (local_20->field_0018 < 5)) {
        if ((*(uint *)local_20 & 0x800) != 0) {
          local_54 = (uint *)&local_20->field_0x8;
          goto LAB_006ec68d;
        }
      }
      else {
LAB_006ec68d:
        bVar2 = true;
      }
      if (bVar2) {
        puVar7 = (uint *)(param_1[0xcc] + -0x68 + iVar10);
        if (0 < local_c8) {
          do {
            if (((((byte)*puVar7 & 7) == 1) || ((int)puVar7[6] < 5)) &&
               (iVar12 = st::fn_006B0460(&local_78,(int *)local_54,(int *)(puVar7[0x19] + 100)),
               iVar12 != 0)) {
              *puVar7 = *puVar7 | 2;
              if ((int)puVar7[6] < 5) {
                if ((puVar7[1] & 0x40) != 0) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  iVar13 = *(int *)(param_1[199] + 0xc + *(int *)(puVar7[0x19] + 0x1c) * 0x114);
                  puVar14 = (uint *)(param_1[0xcc] + iVar13 * 0x68);
                  *puVar14 = *puVar14 | 2;
                }
                local_EAX_1844 =
                     st::fn_006D1AD0((int *)(puVar7 + 6),4,local_78,local_74,local_70,local_6c,
                                  *(int *)(puVar7[0x19] + 0x6c),*(int *)(puVar7[0x19] + 0x70),0);
                if ((local_EAX_1844 < 0) && ((puVar7[1] & 0x40) != 0)) {
                  *(undefined4 *)(param_1[0xcc] + 0x18 + iVar13 * 0x68) = 5;
                }
              }
            }
            puVar7 = puVar7 + -0x1a;
            local_c8 = local_c8 + -1;
          } while (local_c8 != 0);
        }
      }
      else if ((*local_24 & 4) != 0) {
        *local_24 = *local_24 & 0xfffffffe;
      }
      *local_24 = *local_24 & 0xffffd7b3;
      iVar10 = iVar10 + -0x68;
      local_20 = local_20 + -1;
      local_c8 = local_60 + -1;
    }
    iVar13 = 0;
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar10 = st::fn_006BBE40(*(int **)(param_1[1] + 0x40),&local_48,&local_44,0);
      local_40 = iVar10;
      if ((iVar10 == 0) || (iVar10 != -0x7789fe3e)) break;
      st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)param_1[1]);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 2);
    if (iVar10 == 0) {
      local_8 = 0;
      iVar13 = 0;
      while (piVar8 = (int *)param_1[0xd4], iVar13 < *piVar8) {
        if ((param_1[0x51] == 0) || (param_1[7] == 0)) {
          local_4c = param_1[10] * piVar8[iVar13 * 4 + 3] + piVar8[iVar13 * 4 + 2];
          local_38 = (piVar8[iVar13 * 4 + 3] + param_1[9]) * local_44 + param_1[8] +
                     piVar8[iVar13 * 4 + 2];
          st::fn_006CEA60((byte *)(local_38 + local_48),local_44,(byte *)(param_1[3] + local_4c),
                   param_1[10],piVar8[(iVar13 + 1) * 4],piVar8[iVar13 * 4 + 5]);
        }
        else {
          local_50 = piVar8[iVar13 * 4 + 2];
          iVar10 = piVar8[iVar13 * 4 + 3];
          uVar1 = piVar8[(iVar13 + 1) * 4];
          local_88 = piVar8[iVar13 * 4 + 5];
          iVar12 = param_1[0x5d];
          local_5c = iVar10;
          if (iVar10 < iVar12) {
            if (iVar12 < local_88 + iVar10) {
              local_4c = param_1[10] * iVar12 + local_50;
              local_38 = (param_1[9] + iVar12) * local_44 + param_1[8] + local_50;
              st::fn_006CEA60((byte *)(local_38 + local_48),local_44,(byte *)(param_1[3] + local_4c),
                       param_1[10],uVar1,(local_88 - iVar12) + iVar10);
              local_88 = param_1[0x5d] - iVar10;
            }
            local_4c = param_1[10] * iVar10 + local_50;
            local_38 = (iVar10 + param_1[9]) * local_44 + param_1[8] + local_50;
            iVar10 = param_1[10];
            pbVar11 = (byte *)(local_4c + param_1[7]);
          }
          else {
            local_4c = param_1[10] * iVar10 + local_50;
            local_38 = (iVar10 + param_1[9]) * local_44 + param_1[8] + local_50;
            iVar10 = param_1[10];
            pbVar11 = (byte *)(param_1[3] + local_4c);
          }
          st::fn_006CEA60((byte *)(local_38 + local_48),local_44,pbVar11,iVar10,uVar1,local_88);
        }
        local_cc = iVar13 + 1;
        iVar10 = iVar13 * 0x10;
        iVar13 = local_cc;
        if ((int *)*param_1 != nullptr) {
          iVar12 = param_1[0xd4];
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          st::fn_006B5F80((int *)*param_1,*(int *)(iVar10 + 8 + iVar12) + param_1[8],
                       *(int *)(iVar10 + 0xc + iVar12) + param_1[9],
                       *(int *)(local_cc * 0x10 + iVar12),*(int *)(iVar10 + 0x14 + iVar12));
        }
      }
      local_8 = 0xffffffff;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(**(int **)(param_1[1] + 0x40) + 0x80))(*(int **)(param_1[1] + 0x40),0);
    }
    if (param_1[0xb6] == 0) goto LAB_006ecc3a;
  }
  if ((param_1[0x51] == 0) || (param_1[7] == 0)) {
    iVar13 = param_1[0xd];
    iVar10 = param_1[0xc];
    st::fn_007506F0
              (param_1[1],param_1[8] + iVar10,param_1[9] + iVar13,param_1[3],param_1[10],iVar10,
               iVar13,param_1[0xe] - iVar10,param_1[0xf] - iVar13);
  }
  else {
    iVar13 = 0;
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_40 = st::fn_006BBE40(*(int **)(param_1[1] + 0x40),&local_48,&local_44,0);
      if ((local_40 == 0) || (local_40 != -0x7789fe3e)) break;
      st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)param_1[1]);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 2);
    local_8 = 1;
    iVar13 = param_1[0xc];
    iVar10 = param_1[0xd];
    iVar12 = param_1[0xe];
    rowCount = param_1[0xf] - iVar10;
    iVar6 = param_1[0x5d];
    local_5c = iVar10;
    local_50 = iVar13;
    if (iVar10 < iVar6) {
      if (iVar6 < rowCount + iVar10) {
        local_4c = param_1[10] * iVar6 + iVar13;
        local_38 = (param_1[9] + iVar6) * local_44 + param_1[8] + iVar13;
        st::fn_006CEA60((byte *)(local_38 + local_48),local_44,(byte *)(param_1[3] + local_4c),param_1[10],
                 iVar12 - iVar13,(rowCount - param_1[0x5d]) + iVar10);
        rowCount = param_1[0x5d] - iVar10;
      }
      local_4c = param_1[10] * iVar10 + iVar13;
      local_38 = (param_1[9] + iVar10) * local_44 + param_1[8];
      iVar10 = param_1[10];
      pbVar11 = (byte *)(local_4c + param_1[7]);
    }
    else {
      local_4c = param_1[10] * iVar10 + iVar13;
      local_38 = (param_1[9] + iVar10) * local_44 + param_1[8];
      iVar10 = param_1[10];
      pbVar11 = (byte *)(param_1[3] + local_4c);
    }
    local_38 = local_38 + iVar13;
    st::fn_006CEA60((byte *)(local_38 + local_48),local_44,pbVar11,iVar10,iVar12 - iVar13,rowCount);
    local_8 = 0xffffffff;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(**(int **)(param_1[1] + 0x40) + 0x80))(*(int **)(param_1[1] + 0x40),0);
  }
  if ((int *)*param_1 != nullptr) {
    st::fn_006B5F80((int *)*param_1,param_1[8] + param_1[0xc],param_1[9] + param_1[0xd],
                 param_1[0xe] - param_1[0xc],param_1[0xf] - param_1[0xd]);
  }
  iVar13 = param_1[0xca];
  if (-1 < iVar13 + -1) {
    iVar10 = (iVar13 + -1) * 0x68;
    do {
      uVar1 = *(uint *)(param_1[0xcc] + iVar10);
      if (((byte)uVar1 & 5) == 1) {
        *(uint *)(param_1[0xcc] + iVar10) = uVar1 | 0x82;
        *(undefined4 *)(param_1[0xcc] + 0x18 + iVar10) = 5;
      }
      puVar7 = *(uint **)(param_1[0xcc] + 100 + iVar10);
      *puVar7 = *puVar7 & 0xffffd7a2;
      iVar10 = iVar10 + -0x68;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
LAB_006ecc3a:
  *(undefined4 *)param_1[0xd4] = 0;
  *(undefined4 *)(param_1[0xd4] + 4) = 0;
  ExceptionList = local_14;
  return local_40;
}

// 006ECC70 FUN_006ecc70
#line 4 "decomp/ST.exe/functions/006ECC70/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall st::fn_006ECC70(void *this,int *param_1,uint *param_2)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  int local_60;
  int local_5c;
  int local_58;
  float local_50;
  float local_4c;
  float local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint *local_18;
  short *local_14;
  uint *local_10;
  int *local_c;
  int *local_8;

  local_8 = st::fn_006BFB70(param_2[0x38] << 4);
  if (local_8 != nullptr) {
    local_10 = (uint *)param_2[0x39];
    local_18 = (uint *)param_2[0x3c];
    param_2[0x3b] = (uint)local_8;
    param_2[0x3a] = param_2[0x38];
    local_38 = 0;
    if (0 < (int)param_2[0x38]) {
      local_c = local_8 + 1;
      do {
        psVar4 = (short *)local_18[3];
        local_18[2] = local_10[1];
        psVar1 = (short *)local_10[2];
        local_24 = (int)*psVar1;
        local_50 = (float)local_24 * (float)STField<double>(this,0x368) + (float)param_2[0x35];
        local_20 = (int)psVar1[1];
        local_4c = (float)local_20 * (float)STField<double>(this,0x368) + (float)param_2[0x36];
        local_1c = (int)psVar1[2];
        local_48 = (float)local_1c * (float)STField<double>(this,0x3a4) * (float)_DAT_0079dfa8 +
                   (float)STField<double>(this,0x394);
        st::fn_006E25D0(this,&local_60,&local_50,0.0,0.0,0.0,0);
        iVar3 = STField<int>(this,0x2e4);
        local_3c = local_60;
        local_40 = local_5c;
        *psVar4 = (short)((uint)local_60 >> 0x10);
        local_44 = local_58 - (iVar3 >> 0x10);
        psVar4[1] = (short)((uint)local_5c >> 0x10);
        psVar4[2] = (short)local_44;
        local_14 = psVar4 + 4;
        *local_8 = (int)*psVar4;
        *local_c = (int)psVar4[1];
        local_2c = (int)*psVar4;
        local_28 = (int)psVar4[1];
        local_34 = 1;
        local_30 = local_44;
        if (1 < (int)local_10[1]) {
          do {
            psVar4 = psVar1 + 4;
            sVar2 = (short)((uint)((*psVar4 - local_24) * STField<int>(this,0x3ac) +
                                  (psVar1[5] - local_20) * STField<int>(this,0x3b0) + local_60 +
                                  (psVar1[6] - local_1c) * STField<int>(this,0x3b4)) >> 0x10);
            *local_14 = sVar2;
            if ((int)sVar2 < *local_8) {
              *local_8 = (int)sVar2;
            }
            if (local_2c < *local_14) {
              local_2c = (int)*local_14;
            }
            sVar2 = (short)((uint)((psVar1[5] - local_20) * STField<int>(this,0x3bc) +
                                  (psVar1[6] - local_1c) * STField<int>(this,0x3c0) + local_5c +
                                  (*psVar4 - local_24) * STField<int>(this,0x3b8)) >> 0x10);
            local_14[1] = sVar2;
            if ((int)sVar2 < *local_c) {
              *local_c = (int)sVar2;
            }
            if (local_28 < local_14[1]) {
              local_28 = (int)local_14[1];
            }
            sVar2 = (psVar1[5] - (short)local_20) * STField<short>(this,0x3c8) + (short)local_44
                    + (*psVar4 - (short)local_24) * STField<short>(this,0x3c4) +
                    (psVar1[6] - (short)local_1c) * STField<short>(this,0x3cc);
            local_14[2] = sVar2;
            if ((int)local_30 < (int)sVar2) {
              local_30 = (int)sVar2;
            }
            local_14 = local_14 + 4;
            local_34 = local_34 + 1;
            psVar1 = psVar4;
          } while (local_34 < (int)local_10[1]);
        }
        local_c[1] = (local_2c - *local_8) + 1;
        local_c[2] = (local_28 - *local_c) + 1;
        iVar3 = st::fn_006B0460(local_8,local_8,param_1);
        if (iVar3 == 0) {
          *local_18 = 2;
          *local_8 = -1;
        }
        else {
          *local_18 = *local_10 & 1;
          *param_2 = *param_2 | 0x20;
          local_18[1] = local_30;
          if (*(int **)this != nullptr) {
            st::fn_006B5F80(*(int **)this,STField<int>(this,0x20) + *local_8,
                         STField<int>(this,0x24) + *local_c,local_c[1],local_c[2]);
          }
        }
        local_8 = local_8 + 4;
        local_c = local_c + 4;
        local_10 = local_10 + 3;
        local_18 = local_18 + 4;
        local_38 = local_38 + 1;
      } while (local_38 < (int)param_2[0x38]);
    }
    return 0;
  }
  return 0xfffffffe;
}

// 006ECFC0 FUN_006ecfc0
#line 4 "decomp/ST.exe/functions/006ECFC0/decomp.c"
int __cdecl st::fn_006ECFC0(AnonShape_006ECFC0_6CF214D7 *param_1,AnonShape_006ECFC0_1618ABFE *param_2)

{
  AnonNested_006ECFC0_0064_4836A151 *pAVar1;
  AnonNested_006ECFC0_0064_60428B19 *pAVar2;
  int iVar3;
  int iVar4;

  pAVar1 = param_1->field_0064;
  pAVar2 = param_2->field_0064;
  if (((byte)pAVar1->field_0004 & 0x72) == 2) {
    if (((byte)pAVar2->field_0004 & 0x72) == 2) {
      return ((pAVar1->field_002C - pAVar2->field_002C) - pAVar2->field_0014) + pAVar1->field_0014;
    }
    iVar3 = pAVar2->field_0014;
    iVar4 = pAVar1->field_002C + pAVar1->field_0014;
    if (iVar4 < iVar3) {
      return -1;
    }
    if ((iVar4 == iVar3) && (pAVar1->field_000C < pAVar2->field_000C)) {
      return -1;
    }
    iVar4 = pAVar1->field_0030 / 2 + pAVar1->field_0014;
    if ((iVar4 <= iVar3) && ((iVar4 != iVar3 || (pAVar1->field_000C <= pAVar2->field_000C)))) {
      return (((pAVar1->field_0050 - (pAVar1->field_0038 >> 2)) - pAVar2->field_0088) -
             pAVar2->field_0050) + pAVar1->field_0038;
    }
  }
  else if (((byte)pAVar2->field_0004 & 0x72) == 2) {
    iVar3 = pAVar1->field_0014;
    iVar4 = pAVar2->field_0030 / 2 + pAVar2->field_0014;
    if ((iVar3 < iVar4) || ((iVar3 == iVar4 && (pAVar1->field_000C < pAVar2->field_000C)))) {
      return -1;
    }
    iVar4 = pAVar2->field_002C + pAVar2->field_0014;
    if ((iVar3 <= iVar4) && ((iVar3 != iVar4 || (pAVar1->field_000C <= pAVar2->field_000C)))) {
      return (((pAVar2->field_0038 >> 2) - pAVar2->field_0050) + pAVar1->field_0088 +
             pAVar1->field_0050) - pAVar2->field_0038;
    }
  }
  else {
    if (pAVar1->field_0014 < pAVar2->field_0014) {
      return -1;
    }
    if (pAVar1->field_0014 == pAVar2->field_0014) {
      return pAVar1->field_000C - pAVar2->field_000C;
    }
  }
  return 1;
}

// 006EF3E0 FUN_006ef3e0
#line 4 "decomp/ST.exe/functions/006EF3E0/decomp.c"
undefined1 * __cdecl st::fn_006EF3E0(LPCSTR param_1,undefined4 param_2)

{
  DAT_00856dc0 = 0;
  st::external_00000080(&DAT_00856dc0,param_1,param_2);
  return &DAT_00856dc0;
}

// 006EF410 FUN_006ef410
#line 4 "decomp/ST.exe/functions/006EF410/decomp.c"
int __cdecl st::fn_006EF410(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;

  iVar1 = 0;
  if (param_1 == 0) {
    return iVar1;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar3 = *(int *)(param_1 + 0x455);
  if (0 < iVar3) {
    piVar2 = (int *)(param_1 + 0x459);
    do {
      if (*piVar2 != 0) {
        iVar1 = iVar1 + 1;
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}

