#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/006A.cpp

// 006A0070 FUN_006a0070
#line 4 "decomp/ST.exe/functions/006A0070/decomp.c"
void __fastcall st::fn_006A0070(int param_1)

{
  st::fn_0040113B((AnonShape_006A00B0_8C09D559 *)param_1);
  st::fn_0040173F((int *)(param_1 + 0x1c03));
  /* ST_CALLSITE[006A0089]: CALL 0x00403ca1; direct=00403CA1 thunk_FUN_00694890 */
  st::fn_00403CA1(param_1 + 0x1bef);
  st::fn_00403783();
  return;
}

// 006A00B0 FUN_006a00b0
#line 4 "decomp/ST.exe/functions/006A00B0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_006A00B0(AnonShape_006A00B0_8C09D559 *param_1)

{
  undefined4 *slotStorage;

  if (param_1->field_0008 != 0) {
    st::fn_006F07E0(&param_1->field_0008);
  }
  if (param_1->field_000C != 0) {
    st::fn_006EFB70(&param_1->field_000C);
  }
  slotStorage = (undefined4 *)((int)&param_1[0x31b].field_0008 + 3);
  if (*(int *)((int)&param_1[0x31b].field_0008 + 3) != 0) {
    st::fn_006AB060(slotStorage);
  }
  if ((cMf32 *)param_1->field_0018 != 0) {
    st::fn_006F1170((cMf32 *)param_1->field_0018);
  }
  *slotStorage = 0;
  param_1->field_0018 = 0;
  param_1->field_000C = 0;
  param_1->field_0008 = 0;
  return;
}

// 006A06D0 FUN_006a06d0
#line 4 "decomp/ST.exe/functions/006A06D0/decomp.c"
uint __thiscall st::fn_006A06D0(void *this,int param_1,int param_2)

{
  return ((uint)*(byte *)(STField<int>(this,0x5703) * param_2 + STField<int>(this,0x56ff) +
                         param_1) * 500) / 0xff;
}

// 006A0A70 FUN_006a0a70
#line 4 "decomp/ST.exe/functions/006A0A70/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_006A0A70(int *param_1)

{
  uint *puVar1;
  int iVar2;

  puVar1 = static_cast<uint *>(st::fn_006AAC70(0xaa));
  *param_1 = (int)puVar1;
  for (iVar2 = 0x2a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined2 *)puVar1 = 0;
  *(undefined4 *)*param_1 = 10;
  *(undefined4 *)(*param_1 + 4) = 0xff;
  *(undefined4 *)(*param_1 + 8) = 2;
  *(undefined4 *)(*param_1 + 0xc) = 0;
  *(undefined4 *)(*param_1 + 0x10) = 0;
  param_1[1] = 0;
  return;
}

// 006A0AE0 FUN_006a0ae0
#line 4 "decomp/ST.exe/functions/006A0AE0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=11, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_006A0AE0(void *this,int param_1,int param_2,undefined4 param_3,int param_4,uint param_5)

{
  uint *puVar1_mg1;
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint *puVar4;
  byte *puVar5;
  uint *puVar6;
  byte *puVar7;
  undefined4 local_9c;
  undefined2 local_98;
  undefined4 local_8;

  local_8 = 0;
  puVar1_mg1 = st::fn_00405A56(CASE_A,param_4,&local_8,0,param_5);
  puVar4 = puVar1_mg1 + 5;
  puVar6 = &local_9c;
  memmove(puVar6, puVar4, 0x92); /* compiler REP MOVS byte copy */
  STPiece<2,2>(local_9c) = (undefined2)param_2;
  STPiece<0,2>(local_9c) = (undefined2)param_1;
  uVar1 = st::fn_004051B9(this,(param_1 * 0x14) / 100,(param_2 * 0x14) / 100);
  local_98 = (undefined2)uVar1;
  iVar3 = STField<int>(this,4) + 1;
  STField<int>(this,4) = iVar3;
  pvVar2 = st::fn_006ACF50(*(void **)this,iVar3 * 0x92 + 0xaa);
  *(void **)this = pvVar2;
  puVar5 = (byte *)(&local_9c);
  puVar7 = (byte *)((int)pvVar2 + STField<int>(this,4) * 0x92 + -0x7a);
  memmove(puVar7, puVar5, 0x92); /* compiler REP MOVS byte copy */
  return;
}

// 006A0C00 FUN_006a0c00
#line 4 "decomp/ST.exe/functions/006A0C00/decomp.c"
void __fastcall st::fn_006A0C00(int *param_1)

{
  CHAR local_108 [260];

  *(int *)(*param_1 + 0x14) = param_1[1];
  /* ST_CALLSITE[006A0C2B]: CALL dword ptr [0x0085bde8] */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::external_00000080(local_108,st::mutable_c_string("%s%08u"),&DAT_007c8400,*(undefined4 *)(*param_1 + 0x14));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_006F13F0((cMf32 *)param_1[6],0xc,local_108,(byte *)*param_1,
                *(int *)((byte *)*param_1 + 0x14) * 0x92 + 0xaa,nullptr,'\x01',nullptr
               );
  st::fn_006AB060(param_1);
  return;
}

// 006A0C90 FUN_006a0c90
#line 1 "decomp/ST.exe/functions/006A0C90/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return */

void st::fn_006A0C90(uint param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
                 uint param_7)

{
  uint uVar2;
  uint uVar1;
  uint local_EAX_138;
  uint uVar3;
  ushort local_10 [4];
  int local_8;

  if ((((-1 < param_3) && (param_3 < 6)) && (-1 < (int)param_4)) && ((int)param_4 < 5)) {
    local_10[0] = 0;
    local_10[1] = 0;
    local_10[2] = 0;
    uVar2 = param_7;
    uVar3 = 0;
    if (param_6 == 1) {
      uVar2 = 0;
      uVar3 = param_7;
    }
    uVar1 = st::fn_004040AC(param_6,param_3,param_4,uVar3,uVar2);
    local_10[2] = (ushort)uVar1;
    if ((param_5 == 1) || ((param_5 == 0xff && (param_3 == 0)))) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    local_EAX_138 = st::fn_00403F3F(param_3,param_4,param_7,param_6,uVar2);
    if (param_5 == 1) {
      local_10[1] = (short)local_EAX_138;
    }
    else {
      local_10[0] = (short)local_EAX_138;
    }
    st::fn_0040349A(*(int **)(local_8 + 8),param_1,param_2,param_3 + -1 + param_4,param_1,param_2
                       ,local_10,nullptr,0);
  }
  return;
}

// 006A0DA0 FUN_006a0da0
#line 4 "decomp/ST.exe/functions/006A0DA0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_006A0DA0(void *this,uint param_1,int param_2,uint param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  ushort local_c [4];

  if (param_5 == 0) {
    local_c[0] = 0;
    local_c[1] = 0;
    local_c[2] = 0;
    uVar1 = st::fn_00403F3F(0,1,param_6,2,0);
    local_c[0] = (short)uVar1;
    uVar1 = st::fn_004040AC(2,0,1,param_6,param_6);
    local_c[2] = (ushort)uVar1;
    st::fn_0040349A(STField<int *>(this,8),param_1,param_2,0,param_3,param_4,local_c,
                       nullptr,0);
  }
  return;
}

// 006A0EF0 FUN_006a0ef0
#line 4 "decomp/ST.exe/functions/006A0EF0/decomp.c"
/* WARNING: Removing unreachable block (ram,0x006a1015) */
/* [STAbiConsistencyApplier] narrow_accumulator_return target=return:-1: return=/ushort Evidence:
   all resolved direct callers consume only AX or kill the result; narrow_uses=2, ignored=0, full=0,
   unknown=0; reverse CFG traversal from every RET finds the same exact low-accumulator definition
   width on every path; sites=006A1100 @ 006A11B0 -> read as AX on every CFG path | 006A19D0 @
   006A1A07 -> read as AX on every CFG path */

ushort __cdecl
st::fn_006A0EF0(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint local_2c [4];
  ushort local_1c;
  undefined2 uStack_1a;
  ushort uStack_18;
  uint *local_14;
  uint local_10;
  int *local_c;
  uint local_8;

  local_14 = local_2c;
  local_10 = 0;
  local_8 = 0;
  local_c = reinterpret_cast<int *>(&DAT_007df82c);
  do {
    iVar3 = st::machine_word_boundary_cast<int>(local_c[-1] + param_2);
    iVar4 = *local_c + param_3;
    if ((((iVar3 < 0) || (*param_1 <= iVar3)) || (iVar4 < 0)) ||
       (((param_1[1] <= iVar4 || (param_4 < 0)) || (5 < param_4)))) {
      uVar2 = local_8 & 0x80000001;
      bVar5 = uVar2 == 0;
      if ((int)uVar2 < 0) {
        bVar5 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (!bVar5) {
        *local_14 = local_8;
        local_14 = local_14 + 1;
      }
    }
    else {
      iVar1 = st::fn_004019B0(param_1,iVar3,iVar4,param_4,param_5);
      if (iVar1 != 0) {
        iVar3 = st::fn_0040414C(param_1,iVar3,iVar4,param_4,(int)&local_1c);
        iVar3 = st::fn_00404D5E(param_6,param_4,&local_1c,(int)(short)iVar3,param_5);
        if (iVar3 != 0) {
          if (param_5 == 0xff) {
            uVar2 = (uint)uStack_18;
          }
          else {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            uVar2 = CONCAT22(uStack_18,uStack_1a);
            if (param_5 != 1) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              uVar2 = CONCAT22(uStack_1a,local_1c);
            }
          }
          local_10 = local_10 | *(ushort *)(&DAT_007df898 + (local_8 + (uVar2 & 0xf) * 8) * 2);
        }
      }
    }
    local_c = local_c + 2;
    local_8 = local_8 + 1;
  } while ((int)local_c < 0x7df86c);
  return (ushort)local_10;
}

// 006A1070 FUN_006a1070
#line 4 "decomp/ST.exe/functions/006A1070/decomp.c"
int __cdecl st::fn_006A1070(ushort param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if (param_1 == (&DAT_007df808)[(short)iVar1]) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while ((short)iVar1 < 0xf);
  iVar1 = 0;
  do {
    if ((((&DAT_007df808)[(short)iVar1] ^ param_1) & 0xf00) == 0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while ((short)iVar1 < 0xf);
  return STReplaceLowWord((uint32_t)(iVar1), (uint16_t)(0xffff));
}

// 006A10C0 FUN_006a10c0
#line 4 "decomp/ST.exe/functions/006A10C0/decomp.c"
int __cdecl st::fn_006A10C0(short param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if (param_1 == (&DAT_007df808)[(short)iVar1]) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while ((short)iVar1 < 0xf);
  return STReplaceLowWord((uint32_t)(iVar1), (uint16_t)(0xffff));
}

// 006A1100 FUN_006a1100
#line 4 "decomp/ST.exe/functions/006A1100/decomp.c"
bool __cdecl
st::fn_006A1100(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6)

{
  uint3 uVar1;
  int iVar2;
  ushort uVar2;
  ushort uVar3;
  int iVar5;
  int iVar3;
  int iVar4;
  byte local_c [2];
  byte bStack_a;
  byte bStack_8;

  iVar2 = param_3;
  if ((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
     (((param_3 < param_1[1] && (-1 < param_4)) && (param_4 < 6)))) {
    iVar5 = st::fn_004019B0(param_1,param_2,param_3,param_4,param_5);
    if (iVar5 == 0) {
      return false;
    }
    iVar3 = st::fn_0040414C(param_1,param_2,param_3,param_4,(int)local_c);
    if (param_5 == 0xff) {
      STPiece<3,1>(param_3) = bStack_8;
    }
    else if (param_5 == 1) {
      STPiece<3,1>(param_3) = bStack_a;
    }
    else {
      STPiece<3,1>(param_3) = local_c[0];
    }
    uVar2 = st::fn_00404354(param_1,param_2,iVar2,param_4,param_5,param_6);
    if (uVar2 == 0xffff) {
      return false;
    }
    if (STPiece<3,1>(param_3) == 0) {
      return uVar2 == 0;
    }
    if ((short)iVar3 != param_4) {
      return false;
    }
    iVar4 = st::fn_00401CCB(uVar2);
    uVar3 = (ushort)iVar4;
    if (uVar3 == 0xffff) {
      return false;
    }
    if (param_5 == 0xff) {
      if (uVar3 != (bStack_8 & 0xf)) {
        return false;
      }
    }
    else {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar1 = CONCAT12(bStack_8,(ushort)bStack_a);
      if (param_5 != 1) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar1 = CONCAT12(bStack_a,(ushort)local_c[0]);
      }
      if ((int)(short)uVar3 != (uVar1 & 0xf)) {
        return false;
      }
    }
  }
  return true;
}

// 006A12B0 FUN_006a12b0
#line 4 "decomp/ST.exe/functions/006A12B0/decomp.c"
undefined4 __cdecl
st::fn_006A12B0(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6)

{
  bool bVar1;
  int iVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar3;
  int *piVar4;

  if (((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
      ((param_3 < param_1[1] && (-1 < param_4)))) && (param_4 < 6)) {
    piVar4 = reinterpret_cast<int *>(&DAT_007df82c);
    do {
      iVar2 = st::machine_word_boundary_cast<int>(piVar4[-1] + param_2);
      iVar3 = *piVar4 + param_3;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (((-1 < iVar2) && (iVar2 < *param_1)) &&
         ((-1 < iVar3 &&
          ((iVar3 < param_1[1] &&
           (bVar1 = st::fn_00403030(param_1,iVar2,iVar3,param_4,param_5,param_6),
           CONCAT31(extraout_var,bVar1) == 0)))))) {
        return 0;
      }
      piVar4 = piVar4 + 2;
    } while ((int)piVar4 < 0x7df86c);
  }
  return 1;
}

// 006A1370 FUN_006a1370
#line 4 "decomp/ST.exe/functions/006A1370/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_scalar_role target=parameter:4: parameter=/int
   Evidence: generic pointer has a scalar-only incoming lifetime before its first slot overwrite:
   frame_offset=0x14, direct_reads=2, scalar_operations=2, signed_comparisons=2, unsigned_bounds=0,
   pointer_dereferences=0, slot_reused=false; sites=006A1383 incoming load: MOV EAX,dword ptr [EBP +
   0x14] | 006A139C scalar operation: IMUL ECX,EAX | 006A13C8 scalar operation: INC EAX | 006A13D0
   incoming load: MOV EAX,dword ptr [EBP + 0x14] */

int __cdecl st::fn_006A1370(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  *(undefined4 *)param_5 = 0;
  *(undefined2 *)(param_5 + 4) = 0;
  iVar2 = param_4;
  if (param_4 < 6) {
    puVar3 = (undefined4 *)
             ((int)param_1 + ((param_1[1] * param_4 + param_3) * *param_1 + param_2) * 6 + 8);
    while( true ) {
      uVar1 = *(ushort *)(puVar3 + 1);
      if ((uVar1 & 0xf00) != 0) break;
      iVar2 = iVar2 + 1;
      puVar3 = (undefined4 *)((int)puVar3 + *param_1 * param_1[1] * 6);
      if (5 < iVar2) {
        return param_4;
      }
    }
    if (param_5 != 0) {
      *(undefined4 *)param_5 = *puVar3;
      *(ushort *)(param_5 + 4) = uVar1;
    }
  }
  return iVar2;
}

// 006A1410 FUN_006a1410
#line 4 "decomp/ST.exe/functions/006A1410/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __cdecl
st::fn_006A1410(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined *param_6,
            undefined4 param_7)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  uint local_10;
  uint local_c;
  undefined2 local_8;

  local_c = 0;
  local_8 = 0;
  if (param_6 != nullptr) {
    /* ST_CALLSITE[006A1439]: CALL EAX */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (*(code *)param_6)(param_2,param_3,param_4,param_7);
  }
  iVar3 = st::fn_0040414C(param_1,param_2,param_3,param_4,(int)&local_14);
  if (param_5 == 0xff) {
    iVar4 = (int)(short)iVar3;
    iVar3 = iVar4;
    if ((int)(iVar4 - (local_10 >> 8 & 0xf)) < iVar4) {
      do {
        if (param_6 != nullptr) {
          /* ST_CALLSITE[006A1490]: CALL EAX */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (*(code *)param_6)(param_2,param_3,iVar3,param_7);
        }
        if (-1 < param_2) {
          if ((((param_2 < *param_1) && (-1 < param_3)) && (param_3 < param_1[1])) &&
             ((-1 < iVar3 && (iVar3 < 6)))) {
            *(undefined2 *)
             ((int)param_1 + ((param_1[1] * iVar3 + param_3) * *param_1 + 2 + param_2) * 6) = 0;
          }
          if (((param_2 < *param_1) && (-1 < param_3)) &&
             ((param_3 < param_1[1] && ((-1 < iVar3 && (iVar3 < 6)))))) {
            *(undefined2 *)
             ((int)param_1 + ((param_1[1] * iVar3 + param_3) * *param_1 + param_2) * 6 + 10) = 0;
          }
          if ((((param_2 < *param_1) && (-1 < param_3)) && (param_3 < param_1[1])) &&
             ((-1 < iVar3 && (iVar3 < 6)))) {
            *(undefined2 *)
             ((int)param_1 + ((param_1[1] * iVar3 + param_3) * *param_1 + param_2) * 6 + 8) = 0;
          }
        }
        iVar3 = iVar3 + -1;
      } while ((int)(iVar4 - (local_10 >> 8 & 0xf)) < iVar3);
    }
    if ((local_10 & 0x1000) != 0) {
      local_c = STReplaceLowWord((uint32_t)(local_c), (uint16_t)(1));
      puVar1 = (undefined4 *)((int)param_1 + (*param_1 * param_3 + param_2) * 6 + 8);
      *puVar1 = local_c;
      *(undefined2 *)(puVar1 + 1) = 0x1100;
      return;
    }
  }
  else {
    local_c = local_14;
    if (param_5 == 0) {
      STPiece<2,2>(local_c) = (undefined2)(local_14 >> 0x10);
      local_c = STReplaceLowWord((uint32_t)(local_c), (uint16_t)(1));
    }
    else if (param_5 == 1) {
      local_c = local_14 & 0xffff;
    }
    puVar2 = (uint *)((int)param_1 + (*param_1 * param_3 + param_2) * 6 + 8);
    *puVar2 = local_c;
    *(undefined2 *)(puVar2 + 1) = (undefined2)local_10;
  }
  return;
}

// 006A1620 FUN_006a1620
#line 4 "decomp/ST.exe/functions/006A1620/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl
st::fn_006A1620(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6,
            undefined *param_7,undefined4 param_8)

{
  ushort *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;

  if (param_7 != nullptr) {
    /* ST_CALLSITE[006A163A]: CALL EAX */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (*(code *)param_7)(param_2,param_3,param_4,param_8);
  }
  uVar3 = param_6[2];
  puVar1 = (ushort *)
           ((int)param_1 + ((param_1[1] * param_4 + param_3) * *param_1 + param_2) * 6 + 8);
  puVar1[2] = uVar3;
  if (param_5 == 0xff) {
    *puVar1 = *param_6;
  }
  else if (param_5 == 0) {
    *puVar1 = *param_6;
  }
  else {
    puVar1[1] = param_6[1];
  }
  uVar4 = *puVar1;
  if (((uVar4 & 0x2000) != 0) && ((uVar4 & 0x1000) == 0)) {
    uVar4 = (byte)((byte)uVar4 ^ (byte)puVar1[2] & 0xf) & 0xf ^ uVar4;
    *puVar1 = uVar4;
    if ((puVar1[2] & 0xf) == 0) {
      uVar5 = st::fn_0072E6C0();
      bVar7 = ((char)((int)uVar5 % (int)DAT_007df9e8) + '\x01') * '\x10';
    }
    else {
      bVar7 = (byte)puVar1[2];
    }
    *puVar1 = (byte)(bVar7 ^ (byte)uVar4) & 0xf0 ^ uVar4;
  }
  iVar6 = param_4 - ((uVar3 & 0xf00) >> 8);
  while (param_4 = param_4 + -1, iVar6 < param_4) {
    if (param_7 != nullptr) {
      /* ST_CALLSITE[006A1713]: CALL EAX */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (*(code *)param_7)(param_2,param_3,param_4,param_8);
    }
    puVar2 = (undefined4 *)
             ((int)param_1 + ((param_1[1] * param_4 + param_3) * *param_1 + param_2) * 6 + 8);
    *puVar2 = *(undefined4 *)param_6;
    *(ushort *)(puVar2 + 1) = param_6[2];
    *(ushort *)(puVar2 + 1) = *(ushort *)(puVar2 + 1) & 0xf0ff;
  }
  return;
}

// 006A17B0 FUN_006a17b0
#line 4 "decomp/ST.exe/functions/006A17B0/decomp.c"
/* WARNING: Removing unreachable block (ram,0x006a1957) */

undefined4 __cdecl
st::fn_006A17B0(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6,
            undefined *param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar4;
  int iVar3;
  int local_EAX_219;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort local_14;
  undefined2 uStack_12;
  ushort uStack_10;
  int local_c;
  int *local_8;

  iVar1 = param_4;
  iVar2 = st::fn_004019B0(param_1,param_2,param_3,param_4,param_5);
  if (iVar2 != 0) {
    st::fn_00403729(param_1,param_2,param_3,param_4,param_5,param_7,param_8);
    local_c = 0;
    do {
      auto param_4_after_write = 0; /* compiler stack-slot lifetime split */
      local_8 = reinterpret_cast<int *>(&DAT_007df82c);
      do {
        iVar2 = st::machine_word_boundary_cast<int>(local_8[-1] + param_2);
        iVar7 = *local_8 + param_3;
        if ((((-1 < iVar2) && (iVar2 < *param_1)) && (-1 < iVar7)) &&
           (((iVar7 < param_1[1] && (-1 < iVar1)) &&
            ((iVar1 < 6 &&
             (iVar4 = st::fn_004019B0(param_1,iVar2,iVar7,iVar1,param_5), iVar4 != 0)))))) {
          iVar3 = st::fn_0040414C(param_1,iVar2,iVar7,iVar1,(int)&local_14);
          local_EAX_219 = st::fn_00404D5E(&local_14,iVar1,param_6,(int)(short)iVar3,param_5);
          if (local_EAX_219 != 0) {
            if (param_5 == 0xff) {
              uVar6 = (uint)(byte)param_6[2];
            }
            else if (param_5 == 1) {
              uVar6 = (uint)(byte)param_6[1];
            }
            else {
              uVar6 = (uint)(byte)*param_6;
            }
            if (param_5 == 0xff) {
              uVar5 = (uint)uStack_10;
            }
            else if (param_5 == 1) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              uVar5 = CONCAT22(uStack_10,uStack_12);
            }
            else {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              uVar5 = CONCAT22(uStack_12,local_14);
            }
            if ((*(ushort *)(&DAT_007df898 + (param_4_after_write + (uVar5 & 0xf) * 8) * 2) &
                 (&DAT_007df808)[uVar6 & 0xf] & 0xf00) != 0) {
              st::fn_00403729(param_1,iVar2,iVar7,iVar1,param_5,param_7,param_8);
            }
          }
        }
        local_8 = local_8 + 2;
        param_4_after_write = param_4_after_write + 1;
      } while ((int)local_8 < 0x7df86c);
      local_c = local_c + 1;
    } while (local_c < 1);
  }
  return 1;
}

// 006A19D0 FUN_006a19d0
#line 4 "decomp/ST.exe/functions/006A19D0/decomp.c"
undefined4 __cdecl
st::fn_006A19D0(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6,
            undefined *param_7,undefined4 param_8)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  ushort uVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar6;
  uint uVar7;
  byte bVar8;
  undefined1 local_14 [8];
  uint local_c;
  ushort local_8;

  st::fn_0040414C(param_1,param_2,param_3,param_4,(int)local_14);
  uVar5 = st::fn_00404354(param_1,param_2,param_3,param_4,param_5,param_6);
  if (uVar5 == 0xffff) {
    return 0;
  }
  if (uVar5 != 0) {
    bVar4 = st::fn_00403030(param_1,param_2,param_3,param_4,param_5,param_6);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (CONCAT31(extraout_var,bVar4) == 0) {
      iVar6 = st::fn_0040316B(uVar5);
      uVar5 = (ushort)iVar6;
      if (0x7fff < uVar5) {
        return 0;
      }
      uVar1 = *(undefined4 *)param_6;
      local_8 = param_6[2];
      bVar8 = (byte)iVar6;
      if (param_5 == 0xff) {
        local_8 = local_8 ^ ((byte)local_8 ^ bVar8) & 0xf;
        local_c = uVar1;
        uVar7 = st::fn_0072E6C0();
        local_8 = local_8 ^ (byte)(((char)((int)uVar7 %
                                          (int)*(short *)(&DAT_007df9a8 + (short)uVar5 * 2)) +
                                   '\x01') * '\x10' ^ (byte)local_8) & 0xf0;
      }
      else {
        STPiece<0,2>(local_c) = (ushort)uVar1;
        uVar2 = (ushort)local_c;
        STPiece<2,2>(local_c) = (ushort)((uint)uVar1 >> 0x10);
        uVar3 = STPiece<2,2>(local_c);
        if (param_5 == 1) {
          STPiece<2,1>(local_c) = (byte)((uint)uVar1 >> 0x10);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = CONCAT22(uVar3 ^ (STPiece<2,1>(local_c) ^ bVar8) & 0xf,(ushort)local_c);
          uVar7 = st::fn_0072E6C0();
          bVar8 = ((char)((int)uVar7 % (int)*(short *)(&DAT_007df9c8 + (short)uVar5 * 2)) + '\x01')
                  * '\x10' ^ STPiece<2,1>(local_c);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = CONCAT22(STPiece<2,2>(local_c) ^ bVar8 & 0xf0,(ushort)local_c);
        }
        else {
          STPiece<0,1>(local_c) = (byte)uVar1;
          local_c = STReplaceLowWord((uint32_t)(local_c), (uint16_t)(uVar2 ^ ((byte)local_c ^ bVar8) & 0xf));
          uVar7 = st::fn_0072E6C0();
          bVar8 = ((char)((int)uVar7 % (int)*(short *)(&DAT_007df9c8 + (short)uVar5 * 2)) + '\x01')
                  * '\x10' ^ (byte)local_c;
          local_c = STReplaceLowWord((uint32_t)(local_c), (uint16_t)((ushort)local_c ^ bVar8 & 0xf0));
        }
      }
      st::fn_00404CF5(param_1,param_2,param_3,param_4,param_5,(ushort *)&local_c,param_7,param_8);
    }
  }
  return 1;
}

// 006A1BB0 FUN_006a1bb0
#line 4 "decomp/ST.exe/functions/006A1BB0/decomp.c"
undefined4 __cdecl
st::fn_006A1BB0(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6,
            undefined *param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int *piVar3;

  if (((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
      ((param_3 < param_1[1] && (-1 < param_4)))) && (param_4 < 6)) {
    piVar3 = reinterpret_cast<int *>(&DAT_007df82c);
    do {
      iVar1 = st::machine_word_boundary_cast<int>(piVar3[-1] + param_2);
      iVar2 = *piVar3 + param_3;
      if (((-1 < iVar1) && (iVar1 < *param_1)) &&
         ((-1 < iVar2 &&
          ((iVar2 < param_1[1] &&
           (iVar1 = st::fn_00403E72(param_1,iVar1,iVar2,param_4,param_5,param_6,param_7,param_8),
           iVar1 == 0)))))) {
        return 0;
      }
      piVar3 = piVar3 + 2;
    } while ((int)piVar3 < 0x7df86c);
  }
  return 1;
}

// 006A1C80 FUN_006a1c80
#line 4 "decomp/ST.exe/functions/006A1C80/decomp.c"
undefined4 __cdecl
st::fn_006A1C80(int *param_1,uint param_2,int param_3,int param_4,int param_5,undefined *param_6,
            undefined4 param_7)

{
  bool bVar1;
  uint uVar2;
  int iVar4;
  int iVar3;
  int iVar5;
  ushort local_c;
  ushort uStack_a;
  ushort local_8;

  uVar2 = param_2;
  if (((((-1 < (int)param_2) && ((int)param_2 < *param_1)) && (-1 < param_3)) &&
      ((param_3 < param_1[1] && (-1 < param_4)))) &&
     ((param_4 < 6 &&
      (iVar4 = st::fn_004019B0(param_1,param_2,param_3,param_4,param_5), iVar4 != 0)))) {
    iVar3 = st::fn_0040414C(param_1,param_2,param_3,param_4,(int)&local_c);
    iVar4 = (int)(short)iVar3;
    if ((((local_8 & 0x2000) != 0) || ((uStack_a & 0x1000) != 0)) ||
       (bVar1 = true, (local_c & 0x1000) != 0)) {
      bVar1 = false;
    }
    if (param_5 == 1) {
      /* ST_PSEUDO[stack_slot_reuse,packed_or_unaligned_piece]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable; expected named packed member, bit extract/compose, or unaligned load */
      param_2 = ~CONCAT22(local_8,uStack_a) >> 0xd & 1;
    }
    else {
      param_2 = 0;
    }
    if ((bVar1) || (param_2 != 0)) {
      st::fn_00403729(param_1,uVar2,param_3,iVar4,param_5,param_6,param_7);
      return 1;
    }
    if ((param_5 == 0xff) && (iVar4 == 0)) {
      iVar4 = st::fn_00404F93(param_1,uVar2,param_3,0,0,&local_c,param_6,param_7);
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = st::fn_0040125D(param_1,uVar2,param_3,0,0,&local_c,param_6,param_7);
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = st::fn_00404F93(param_1,uVar2,param_3,0,1,&local_c,param_6,param_7);
      if (iVar4 == 0) {
        return 0;
      }
      param_5 = 1;
      iVar4 = 0;
    }
    else {
      iVar5 = st::fn_00404F93(param_1,uVar2,param_3,iVar4,param_5,&local_c,param_6,param_7);
      if (iVar5 == 0) {
        return 0;
      }
    }
    iVar4 = st::fn_0040125D(param_1,uVar2,param_3,iVar4,param_5,&local_c,param_6,param_7);
    if (iVar4 == 0) {
      return 0;
    }
  }
  return 1;
}

// 006A1EB0 FUN_006a1eb0
#line 4 "decomp/ST.exe/functions/006A1EB0/decomp.c"
undefined4 __cdecl
st::fn_006A1EB0(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6,
            undefined *param_7,undefined4 param_8)

{
  int iVar1;
  int local_EAX_102;
  int iVar2;
  int iVar4;
  int iVar3;
  int iVar5;
  uint uVar6;
  ushort local_18 [4];
  int *local_10;
  int local_c;
  int local_8;

  if ((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
     (((param_3 < param_1[1] && (-1 < param_4)) && (param_4 < 6)))) {
    iVar1 = st::fn_004019B0(param_1,param_2,param_3,param_4,param_5);
    if (iVar1 != 0) {
      local_EAX_102 = st::fn_0040414C(param_1,param_2,param_3,param_4,(int)local_18);
      iVar1 = param_5;
      if ((short)local_EAX_102 != 0) {
        iVar1 = 0xff;
      }
      st::fn_00403729(param_1,param_2,param_3,(int)(short)local_EAX_102,iVar1,param_7,param_8);
    }
    local_10 = reinterpret_cast<int *>(&DAT_007df82c);
    do {
      uVar6 = st::machine_word_boundary_cast<uint>(local_10[-1] + param_2);
      iVar1 = *local_10 + param_3;
      local_8 = param_4;
      if ((int)(param_4 - ((param_6[2] & 0xf00) >> 8)) < param_4) {
        do {
          if (((-1 < (int)uVar6) && ((int)uVar6 < *param_1)) &&
             ((-1 < iVar1 && (((iVar1 < param_1[1] && (-1 < local_8)) && (local_8 < 6)))))) {
            iVar2 = st::fn_0040414C(param_1,uVar6,iVar1,local_8,(int)local_18);
            local_c = (int)(short)iVar2;
            iVar5 = param_5;
            if (local_c != 0) {
              iVar5 = 0xff;
            }
            iVar4 = st::fn_004019B0(param_1,uVar6,iVar1,local_8,iVar5);
            if (((iVar4 != 0) &&
                (iVar3 = st::fn_00404D5E(param_6,param_4,local_18,local_c,iVar5), iVar3 == 0)) &&
               (iVar5 = st::fn_0040420A(param_1,uVar6,iVar1,local_c,iVar5,param_7,param_8),
               iVar5 == 0)) {
              return 0;
            }
          }
          local_8 = local_8 + -1;
        } while ((int)(param_4 - ((param_6[2] & 0xf00) >> 8)) < local_8);
      }
      local_10 = local_10 + 2;
    } while ((int)local_10 < 0x7df86c);
  }
  return 1;
}

// 006A20E0 FUN_006a20e0
#line 4 "decomp/ST.exe/functions/006A20E0/decomp.c"
undefined4 __cdecl st::fn_006A20E0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  bool bVar6;
  short sStack_a;

  if (((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
      ((param_3 < param_1[1] && (-1 < param_4)))) &&
     ((param_4 < 6 &&
      (iVar4 = (param_1[1] * param_4 + param_3) * *param_1 + param_2,
      *(short *)((int)param_1 + (iVar4 * 3 + 6) * 2) != 0)))) {
    puVar1 = (undefined4 *)((int)param_1 + iVar4 * 6 + 8);
    uVar3 = *puVar1;
    uVar2 = *(ushort *)(puVar1 + 1);
    sStack_a = (short)((uint)uVar3 >> 0x10);
    sVar5 = (short)uVar3;
    if (param_5 == 0xff) {
      if ((sVar5 != 0) && (sVar5 != 1)) {
        return 1;
      }
      if ((uVar2 != 0) && (uVar2 != 0x1100)) {
        return 1;
      }
      if (sStack_a != 0) {
        return 1;
      }
    }
    else {
      if (param_5 == 0) {
        if (sVar5 == 0) {
          return 0;
        }
        bVar6 = sVar5 == 1;
      }
      else {
        if (param_5 != 1) {
          return 1;
        }
        if (sStack_a != 0) {
          return 1;
        }
        bVar6 = (uVar2 & 0x4000) == 0;
      }
      if (!bVar6) {
        return 1;
      }
    }
  }
  return 0;
}

// 006A21F0 FUN_006a21f0
#line 4 "decomp/ST.exe/functions/006A21F0/decomp.c"
undefined4 __cdecl
st::fn_006A21F0(int *param_1,uint param_2,int param_3,int param_4,ushort *param_5,undefined *param_6,
            undefined4 param_7)

{
  int iVar1;
  int local_8;

  local_8 = 0xff;
  if (((((-1 < (int)param_2) && ((int)param_2 < *param_1)) && (-1 < param_3)) &&
      ((param_3 < param_1[1] && (-1 < param_4)))) && (param_4 < 6)) {
    if (param_4 == 0) {
      if (*param_5 != 0) {
        local_8 = 0;
      }
      if (param_5[1] != 0) {
        local_8 = 1;
      }
    }
    if ((((STField<byte>(param_5,5) & 0x20) == 0) &&
        (((param_5[1] & 0x1000) == 0 || ((param_5[1] & 0x2000) == 0)))) &&
       (((*param_5 & 0x1000) == 0 || ((*param_5 & 0x2000) == 0)))) {
      iVar1 = st::fn_00402AB3(param_1,param_2,param_3,param_4,(short *)param_5,param_6,param_7);
      if (iVar1 == 0) {
        return 0;
      }
      st::fn_00404CF5(param_1,param_2,param_3,param_4,local_8,param_5,param_6,param_7);
    }
    else {
      iVar1 = st::fn_00404C14(param_1,param_2,param_3,param_4,local_8,param_5,param_6,param_7);
      if (iVar1 == 0) {
        return 0;
      }
      st::fn_00404CF5(param_1,param_2,param_3,param_4,local_8,param_5,param_6,param_7);
      iVar1 = st::fn_0040125D(param_1,param_2,param_3,param_4,local_8,param_5,param_6,param_7);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}

// 006A23A0 FUN_006a23a0
#line 4 "decomp/ST.exe/functions/006A23A0/decomp.c"
undefined4 __cdecl
st::fn_006A23A0(int *param_1,uint param_2,int param_3,int param_4,short *param_5,undefined *param_6,
            undefined4 param_7)

{
  int iVar2;
  int iVar1;
  int iVar3;
  undefined1 local_10 [8];
  int local_8;

  local_8 = 0xff;
  if (param_4 == 0) {
    if (param_5[1] == 0) {
      local_8 = 0xff;
      if ((*param_5 != 0) && (*param_5 != 1)) {
        local_8 = 0;
      }
    }
    else {
      local_8 = 1;
    }
  }
  iVar3 = param_4;
  if ((int)(param_4 - (((ushort)param_5[2] & 0xf00) >> 8)) < param_4) {
    do {
      iVar2 = st::fn_004019B0(param_1,param_2,param_3,iVar3,0xff);
      if ((((iVar2 != 0) && (-1 < (int)param_2)) && ((int)param_2 < *param_1)) &&
         (((-1 < param_3 && (param_3 < param_1[1])) && ((-1 < iVar3 && (iVar3 < 6)))))) {
        iVar1 = st::fn_0040414C(param_1,param_2,param_3,iVar3,(int)local_10);
        if ((short)iVar1 != 0) {
          local_8 = 0xff;
        }
        iVar2 = st::fn_0040420A(param_1,param_2,param_3,iVar3,local_8,param_6,param_7);
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar3 = iVar3 + -1;
    } while ((int)(param_4 - (((ushort)param_5[2] & 0xf00) >> 8)) < iVar3);
  }
  return 1;
}

// 006A24E0 FUN_006a24e0
#line 4 "decomp/ST.exe/functions/006A24E0/decomp.c"
/* [STReturnSemanticsApplier] boolean_return_domain.
   Evidence: all explicit return values are constants in {0,1}: [0, 1, 1, 0, 0]
   [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (8), none consume AL/AX, and every RET path defines full EAX; sites=006A0EF0 @ 006A0F8B
   -> TEST TEST EAX,EAX | 006A17B0 @ 006A188B -> TEST TEST EAX,EAX | 006A1EB0 @ 006A1FF7 -> TEST
   TEST EAX,EAX | 006A34E0 @ 006A3587 -> TEST TEST EAX,EAX | 006A34E0 @ 006A35F1 -> TEST TEST
   EAX,EAX | 006A3840 @ 006A38B7 -> TEST TEST EAX,EAX | 006A3930 @ 006A397D -> TEST TEST EAX,EAX |
   006A3A00 @ 006A3A63 -> TEST TEST EAX,EAX */

int __cdecl st::fn_006A24E0(ushort *param_1,int param_2,ushort *param_3,int param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;

  if (param_2 == param_4) {
    uVar1 = param_1[2];
    if ((uVar1 & 0x2000) == 0) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = uVar1 & 0xff00;
    }
    uVar2 = param_3[2];
    if ((uVar2 & 0x2000) == 0) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = uVar2 & 0xff00;
    }
    if ((uVar1 & uVar3) == (uVar2 & uVar4)) {
      if (param_5 == 1) {
        bVar5 = ((-(ushort)((param_1[1] & 0x2000) != 0) & 0xff01) - 1 & param_1[1]) ==
                ((-(ushort)((param_3[1] & 0x2000) != 0) & 0xff01) - 1 & param_3[1]);
      }
      else {
        bVar5 = ((-(ushort)((*param_1 & 0x2000) != 0) & 0xff01) - 1 & *param_1) ==
                ((-(ushort)((*param_3 & 0x2000) != 0) & 0xff01) - 1 & *param_3);
      }
      if (bVar5) {
        if (param_5 == 1) {
          uVar1 = param_1[1];
          if ((uVar1 == param_3[1]) && (uVar1 == 0)) {
            return 0;
          }
          if ((uVar1 & 0x2000) != 0) {
            return 1;
          }
        }
        else {
          uVar1 = *param_1;
          if ((uVar1 != *param_3) || (uVar1 != 1)) {
            if ((uVar1 & 0x2000) != 0) {
              return 1;
            }
            return 0;
          }
        }
      }
    }
  }
  return 0;
}

// 006A2690 FUN_006a2690
#line 4 "decomp/ST.exe/functions/006A2690/decomp.c"
void __cdecl
st::fn_006A2690(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 *param_6
            ,undefined *param_7,undefined4 param_8)

{
  uint *puVar1;
  if (param_7 != nullptr) {
    /* ST_CALLSITE[006A26AD]: CALL EAX */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (*(code *)param_7)(param_2,param_3,param_4,param_8);
  }
  puVar1 = (undefined4 *)
           ((int)param_1 + ((param_1[1] * param_4 + param_3) * *param_1 + param_2) * 6 + 8);
  *puVar1 = *param_6;
  *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_6 + 1);
  return;
}

// 006A2700 FUN_006a2700
#line 4 "decomp/ST.exe/functions/006A2700/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl
st::fn_006A2700(int *param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6,
            ushort *param_7,undefined *param_8,undefined4 param_9)

{
  if ((STField<byte>(param_7,5) & 0x40) == 0) {
    st::fn_00404282(param_1,param_5,param_6,param_4,param_7,param_8,param_9);
    return;
  }
  st::fn_00403067(param_1,param_2,param_3,param_5,param_6,param_4,param_7,param_8,param_9);
  return;
}

// 006A2920 FUN_006a2920
#line 4 "decomp/ST.exe/functions/006A2920/decomp.c"
void __cdecl
st::fn_006A2920(int *param_1,uint param_2,int param_3,int param_4,int param_5,undefined *param_6,
            undefined4 param_7)

{
  undefined1 local_c [4];
  uint local_8;

  st::fn_0040414C(param_1,param_2,param_3,param_4,(int)local_c);
  if ((local_8 & 0x4000) == 0) {
    st::fn_00405254(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  st::fn_00403940(param_1,param_2,param_3,param_4,param_6,param_7);
  return;
}

// 006A29B0 FUN_006a29b0
#line 4 "decomp/ST.exe/functions/006A29B0/decomp.c"
uint __cdecl st::fn_006A29B0(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  byte bVar1;
  byte bVar3;
  uint uVar2;

  uVar2 = 0;
  bVar1 = (byte)param_3;
  if (param_4 != 1) {
    if (param_4 == 3) {
      uVar2 = 0x64a0;
      if ((param_3 < 2) && (0 < param_3)) {
        uVar2 = (param_2 + -1 + param_3 & 0xfU) << 8 | 0x60a0;
      }
      return (param_3 - 7U & 0xf) << 4 | uVar2 & 0xff0f;
    }
    if (param_4 == 0) {
      if (param_1 == 0) {
        bVar3 = (byte)param_2 - 1 & 0xf | 0x40;
        if (param_2 == 1) {
          return (uint)(ushort)(bVar1 | 0x5000);
        }
      }
      else {
        bVar3 = (byte)param_2 & 0xf;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      return (uint)CONCAT11(bVar3,bVar1);
    }
    if (param_4 == 2) {
      uVar2 = (param_3 - 7U & 0xf) << 8 | 0x3010;
    }
    return uVar2;
  }
  if (param_1 != 0) {
    if ((param_3 < 2) && (0 < param_3)) {
      uVar2 = (param_2 + -1 + param_3 & 0xfU) << 8;
    }
    return uVar2 | 0x2010;
  }
  if (param_2 == 1) {
    return (uint)(bVar1 & 0xf | 0x10) << 8 | (param_5 & 3) << 0xe | 0x2010;
  }
  if ((param_3 < 2) && (0 < param_3)) {
    uVar2 = (param_2 + -2 + param_3 & 0xfU) << 8;
  }
  return uVar2 | (param_5 & 3) << 0xe | 0x2010;
}

// 006A2B40 FUN_006a2b40
#line 4 "decomp/ST.exe/functions/006A2B40/decomp.c"
undefined * __cdecl st::fn_006A2B40(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;

  uVar1 = st::fn_00403F3F(param_1,param_2,param_3,param_4,param_5);
  /* ST_CALLSITE[006A2B71]: CALL dword ptr [0x0085bde8] */
  st::external_00000080(st::pointer_boundary_cast<LPSTR>(&DAT_00854188),st::mutable_c_string("%s%03u"),"MAPTXTR",uVar1 & 0x7fff);
  return (undefined *)&DAT_00854188;
}

// 006A2BB0 FUN_006a2bb0
#line 4 "decomp/ST.exe/functions/006A2BB0/decomp.c"
undefined * __cdecl st::fn_006A2BB0(uint param_1)

{
  /* ST_CALLSITE[006A2BCB]: CALL dword ptr [0x0085bde8] */
  st::external_00000080(st::pointer_boundary_cast<LPSTR>(&DAT_00854084),st::mutable_c_string("%s%03u"),"MAPTXTR",param_1 & 0x7fff);
  return (undefined *)&DAT_00854084;
}

// 006A2BF0 FUN_006a2bf0
#line 4 "decomp/ST.exe/functions/006A2BF0/decomp.c"
uint __cdecl st::fn_006A2BF0(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;

  uVar2 = param_3 & 0xf;
  uVar1 = uVar2 << 8;
  if (param_1 == 1) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar2 = (uint)CONCAT11(2,(byte)param_4 & 0xf) << 4 | uVar1;
    uVar1 = uVar2 | param_5 & 0xf;
    if ((param_2 == 0) && (uVar1 = uVar2 | param_5 & 0xf | 0x1000, param_3 == 1)) {
      return 0x1100;
    }
  }
  else {
    if (param_1 == 3) {
      return (param_4 - 7U & 0xf) << 4 | (uVar2 | 0x30) << 8 | param_5 & 0xf;
    }
    if (param_1 == 0) {
      if (param_2 == 0) {
        if (param_3 == 1) {
          return 0x1100;
        }
        uVar1 = (uint)(byte)((byte)uVar2 | 0x10) << 8;
      }
      return (uint)STReplaceLowByte16((uint32_t)(uVar1), (uint8_t)((undefined1)param_5));
    }
    if (param_1 == 2) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      return (uint)CONCAT11(0x71,(char)(param_5 << 5) + -0x10);
    }
  }
  return uVar1;
}

// 006A2D00 FUN_006a2d00
#line 4 "decomp/ST.exe/functions/006A2D00/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006A2D00 returns used as parameter 1 of Library::Ourlib::MFSTMAP::FUN_006f0cd0 @
   00691934 | 006A2D00 returns used as parameter 1 of Library::Ourlib::MFSTMAP::FUN_006f0cd0 @
   006919FF | 006A2D00 returns used as parameter 1 of Library::Ourlib::MFSTMAP::FUN_006f0cd0 @
   00691BFB | 006A2D00 returns used as parameter 1 of Library::Ourlib::MFSTMAP::FUN_006f0cd0 @
   00691CC0 | 006A2D00 returns used as parameter 1 of Library::Ourlib::MFSTMAP::FUN_006f0cd0 @
   00691E3E | 006A2D00 returns used as parameter 1 of Library::Ourlib::MFSTMAP::FUN_006f0cd0 @
   00691EED */

char * __cdecl st::fn_006A2D00(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;

  memset(&DAT_0085428c, 0, 0x104); /* compiler bulk-zero initialization */
  uVar1 = st::fn_004040AC(param_1,param_2,param_3,param_4,param_5);
  /* ST_CALLSITE[006A2D40]: CALL dword ptr [0x0085bde8] */
  st::external_00000080((LPSTR)&DAT_0085428c,st::mutable_c_string("%s%03u"),"MAPMESH",uVar1 & 0x7fff);
  return (char *)&DAT_0085428c;
}

// 006A2D80 FUN_006a2d80
#line 4 "decomp/ST.exe/functions/006A2D80/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __cdecl st::fn_006A2D80(ushort param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort local_c [4];

  iVar2 = 0;
  if (0 < *param_2) {
    do {
      iVar3 = 0;
      if (0 < param_2[1]) {
        do {
          local_c[0] = 0;
          local_c[1] = 0;
          local_c[2] = 0;
          iVar1 = st::fn_0040414C(param_2,iVar2,iVar3,0,(int)local_c);
          if (local_c[2] == 0) {
            local_c[2] = 0x1100;
          }
          if ((param_1 & 0x4000) == 0) {
            local_c[0] = param_1;
          }
          else {
            local_c[1] = param_1;
          }
          st::fn_00404CF5(param_2,iVar2,iVar3,(int)(short)iVar1,0xff,local_c,nullptr,0);
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_2[1]);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *param_2);
  }
  return;
}

// 006A2E50 FUN_006a2e50
#line 4 "decomp/ST.exe/functions/006A2E50/decomp.c"
void __cdecl
st::fn_006A2E50(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,char *param_6,
            int param_7,int param_8)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;

  pcVar3 = param_6;
  if (0 < param_8) {
    auto param_6_after_write = (char *)param_8; /* compiler stack-slot lifetime split */
    iVar2 = param_3 * param_4 + param_1 + param_2;
    do {
      if (0 < param_7) {
        auto param_8_after_write = param_7; /* compiler stack-slot lifetime split */
        pcVar1 = pcVar3;
        do {
          if (*pcVar1 != '\0') {
            pcVar1[iVar2 - (int)pcVar3] = *pcVar1;
          }
          pcVar1 = pcVar1 + 1;
          param_8_after_write = param_8_after_write + -1;
        } while (param_8_after_write != 0);
      }
      iVar2 = iVar2 + param_4;
      pcVar3 = pcVar3 + param_7;
      param_6_after_write = param_6_after_write + -1;
    } while (param_6_after_write != nullptr);
  }
  return;
}

// 006A3310 FUN_006a3310
#line 4 "decomp/ST.exe/functions/006A3310/decomp.c"
int __cdecl st::fn_006A3310(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_8;

  local_8 = -1;
  iVar2 = 1;
  do {
    if ((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
       (((param_3 < param_1[1] && (-1 < iVar2)) && (iVar2 < 6)))) {
      iVar1 = st::fn_004019B0(param_1,param_2,param_3,iVar2,0xff);
      if (iVar1 == 0) {
        local_8 = iVar2;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return local_8;
}

// 006A3390 FUN_006a3390
#line 4 "decomp/ST.exe/functions/006A3390/decomp.c"
undefined1 __cdecl st::fn_006A3390(int param_1,int param_2,int param_3,int param_4)

{
  bool uVar1;

  uVar1 = 0 < param_1 - param_3 && param_2 == param_4;
  if ((param_1 - param_3 < 0) && (param_2 == param_4)) {
    uVar1 = true;
  }
  if ((0 < param_2 - param_4) && (param_1 == param_3)) {
    uVar1 = true;
  }
  if ((param_2 - param_4 < 0) && (param_1 == param_3)) {
    uVar1 = true;
  }
  return uVar1;
}

// 006A3420 FUN_006a3420
#line 4 "decomp/ST.exe/functions/006A3420/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006A3930 -> 006A3420 @ 006A399B

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __cdecl st::fn_006A3420(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  ushort uVar2;

  uVar2 = param_1[2];
  uVar1 = st::fn_0072E6C0();
  param_1[2] = uVar2 & 0xff00 ^ (ushort)param_2 & 0xf |
               (ushort)(((uVar1 % *(uint *)(&DAT_007dfb30 + (int)param_2 * 4) - 1) +
                         ((((uVar2 & 0xf0) >> 4) + 1) / 2) * 2 & 0xf) << 4);
  uVar2 = (byte)((byte)*param_1 ^ (byte)param_2) & 0xf ^ *param_1;
  *param_1 = uVar2;
  uVar1 = st::fn_0072E6C0();
  *param_1 = (byte)(((char)(uVar1 % *(uint *)(&DAT_007dfb30 + (int)param_2 * 4)) + '\x01') * '\x10'
                   ^ (byte)uVar2) & 0xf0 ^ uVar2;
  return;
}

// 006A34E0 FUN_006a34e0
#line 4 "decomp/ST.exe/functions/006A34E0/decomp.c"
undefined4 __cdecl
st::fn_006A34E0(int *param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6,
            ushort *param_7,undefined *param_8,undefined4 param_9)

{
  byte uVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar2;
  ushort local_c [4];

  if ((((((-1 < (int)param_2) && ((int)param_2 < *param_1)) && (-1 < param_3)) &&
       ((param_3 < param_1[1] && (-1 < param_6)))) &&
      ((param_6 < 6 && ((-1 < (int)param_4 && ((int)param_4 < *param_1)))))) &&
     ((-1 < param_5 && (param_5 < param_1[1])))) {
    uVar1 = st::fn_00405506(param_2,param_3,param_4,param_5);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    st::fn_00404480(param_7,(ushort *)CONCAT31(extraout_var,uVar1));
    iVar2 = st::fn_0040414C(param_1,param_4,param_5,param_6,(int)local_c);
    iVar2 = st::fn_00404D5E(local_c,(int)(short)iVar2,param_7,param_6,0xff);
    if (iVar2 == 0) {
      st::fn_0040420A(param_1,param_4,param_5,param_6,0xff,param_8,param_9);
    }
    st::fn_00404CF5(param_1,param_4,param_5,param_6,0xff,param_7,param_8,param_9);
    iVar2 = st::fn_0040414C(param_1,param_2,param_3,param_6,(int)local_c);
    iVar2 = st::fn_00404D5E(local_c,(int)(short)iVar2,param_7,param_6,0xff);
    if (iVar2 == 0) {
      st::fn_0040420A(param_1,param_2,param_3,param_6,0xff,param_8,param_9);
    }
    st::fn_00405308(param_1,param_2,param_3,param_6,param_7,param_8,param_9);
    st::fn_00405308(param_1,param_4,param_5,param_6,param_7,param_8,param_9);
    return 1;
  }
  return 0;
}

// 006A36E0 FUN_006a36e0
#line 4 "decomp/ST.exe/functions/006A36E0/decomp.c"
undefined4 __cdecl
st::fn_006A36E0(int *param_1,int param_2,int param_3,int param_4,undefined *param_5,undefined4 param_6)

{
  int iVar1;
  ushort local_c [4];

  if ((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
     (((param_3 < param_1[1] && (-1 < param_4)) && (param_4 < 6)))) {
    iVar1 = st::fn_004019B0(param_1,param_2,param_3,param_4,0xff);
    if (iVar1 != 0) {
      st::fn_0040414C(param_1,param_2,param_3,param_4,(int)local_c);
      st::fn_00403729(param_1,param_2,param_3,param_4,0xff,param_5,param_6);
      st::fn_00404066(param_1,param_2,param_3,param_4,local_c,param_5,param_6);
    }
  }
  return 1;
}

// 006A37B0 FUN_006a37b0
#line 4 "decomp/ST.exe/functions/006A37B0/decomp.c"
undefined4 __cdecl
st::fn_006A37B0(int *param_1,int param_2,int param_3,int param_4,ushort *param_5,undefined *param_6,
            undefined4 param_7)

{
  if ((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
     (((param_3 < param_1[1] && (-1 < param_4)) && (param_4 < 6)))) {
    st::fn_00405308(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    st::fn_00404066(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return 1;
}

// 006A3840 FUN_006a3840
#line 4 "decomp/ST.exe/functions/006A3840/decomp.c"
undefined4 __cdecl
st::fn_006A3840(int *param_1,int param_2,int param_3,int param_4,ushort *param_5,undefined *param_6,
            undefined4 param_7)

{
  int iVar2;
  int iVar1;
  int local_EAX_119;
  int iVar3;
  int iVar4;
  ushort local_10 [4];
  int *local_8;

  local_8 = reinterpret_cast<int *>(&DAT_007dfb74);
  do {
    iVar3 = st::machine_word_boundary_cast<int>(local_8[-1] + param_2);
    iVar4 = *local_8 + param_3;
    if ((((-1 < iVar3) && (iVar3 < *param_1)) && (-1 < iVar4)) &&
       (((iVar4 < param_1[1] && (-1 < param_4)) &&
        ((param_4 < 6 && (iVar2 = st::fn_004019B0(param_1,iVar3,iVar4,param_4,0xff), iVar2 != 0))
        )))) {
      iVar1 = st::fn_0040414C(param_1,iVar3,iVar4,param_4,(int)local_10);
      local_EAX_119 = st::fn_00404D5E(local_10,(int)(short)iVar1,param_5,param_4,0xff);
      if (local_EAX_119 != 0) {
        st::fn_00405308(param_1,iVar3,iVar4,param_4,param_5,param_6,param_7);
      }
    }
    local_8 = local_8 + 2;
  } while ((int)local_8 < 0x7dfb94);
  return 1;
}

// 006A3930 FUN_006a3930
#line 4 "decomp/ST.exe/functions/006A3930/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __cdecl
st::fn_006A3930(int *param_1,int param_2,int param_3,int param_4,ushort *param_5,undefined *param_6,
            undefined4 param_7)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  ushort local_c [2];
  uint local_8;

  uVar1 = st::fn_00405E70(param_1,param_2,param_3,param_4,param_5);
  puVar2 = (ushort *)st::fn_00401B54(uVar1);
  iVar3 = st::fn_0040414C(param_1,param_2,param_3,param_4,(int)local_c);
  iVar3 = st::fn_00404D5E(local_c,(int)(short)iVar3,param_5,param_4,0xff);
  if ((iVar3 == 0) || (puVar2 != (ushort *)(local_8 & 0xf))) {
    st::fn_00404480(param_5,puVar2);
    st::fn_00404CF5(param_1,param_2,param_3,param_4,0xff,param_5,param_6,param_7);
  }
  return;
}

// 006A3A00 FUN_006a3a00
#line 4 "decomp/ST.exe/functions/006A3A00/decomp.c"
uint __cdecl st::fn_006A3A00(int *param_1,int param_2,int param_3,int param_4,ushort *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort local_10 [2];
  uint local_c;
  uint local_8;

  iVar4 = 0;
  local_8 = 0;
  do {
    iVar2 = *(int *)((int)&DAT_007dfb70 + iVar4) + param_2;
    iVar3 = *(int *)((int)&DAT_007dfb74 + iVar4) + param_3;
    if ((((-1 < iVar2) && (iVar2 < *param_1)) && (-1 < iVar3)) &&
       (((iVar3 < param_1[1] && (-1 < param_4)) && (param_4 < 6)))) {
      iVar2 = st::fn_0040414C(param_1,iVar2,iVar3,param_4,(int)local_10);
      iVar2 = st::fn_00404D5E(local_10,(int)(short)iVar2,param_5,param_4,0xff);
      if (iVar2 != 0) {
        bVar1 = (byte)iVar4 & 0x1f;
        local_8 = local_8 | ((&DAT_007dfaf0)[local_c & 0xf] << 0x10 |
                            (uint)(&DAT_007dfaf0)[local_c & 0xf] >> 0x10) &
                            (0x10000 << bVar1 | 0x10000U >> 0x20 - bVar1);
      }
    }
    iVar4 = iVar4 + 8;
  } while (iVar4 < 0x20);
  return local_8;
}

// 006A3AE0 FUN_006a3ae0
#line 4 "decomp/ST.exe/functions/006A3AE0/decomp.c"
int __cdecl st::fn_006A3AE0(int param_1)

{
  int iVar1;
  int *piVar2;

  iVar1 = 0;
  piVar2 = reinterpret_cast<int *>(&DAT_007dfaf0);
  do {
    if (*piVar2 == param_1) {
      return iVar1;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < 0x7dfb30);
  return -1;
}

// 006A3B20 FUN_006a3b20
#line 4 "decomp/ST.exe/functions/006A3B20/decomp.c"
undefined * st::fn_006A3B20(int param_1)

{
  alignas(4) byte st_stack_frame[20];

  BOOL BVar1;
  int iVar2;
  undefined4 *lp;
  undefined4 *lp_00;
  int iVar3;

  lp = (undefined4 *)(st_stack_frame + 12);
  iVar3 = 0;
  DAT_00854970 = 0;
  lp_00 = (undefined4 *)(st_stack_frame + 12);
  if (0 < param_1) {
    do {
      /* ST_CALLSITE[006A3B40]: CALL dword ptr [0x0085bbb8] */
      BVar1 = st::external_00000023(lp,4);
      if (BVar1 != 0) {
        return (undefined *)&DAT_00854970;
      }
      lp = (undefined4 *)*lp;
      iVar3 = iVar3 + 1;
      lp_00 = lp;
    } while (iVar3 < param_1);
  }
  DAT_008549f0 = st::machine_word_boundary_cast<undefined4>(&DAT_00854970);
  iVar3 = 0;
  do {
    /* ST_CALLSITE[006A3B60]: CALL dword ptr [0x0085bbb8] */
    BVar1 = st::external_00000023(lp_00,8);
    if (BVar1 != 0) {
      return (undefined *)&DAT_00854970;
    }
    iVar2 = st::fn_00730C40(st::pointer_boundary_cast<undefined1 *>(DAT_008549f0),0x7ec1c8);
    DAT_008549f0 = DAT_008549f0 + iVar2;
    iVar3 = iVar3 + 1;
    lp_00 = (undefined4 *)*lp_00;
  } while (iVar3 < 4);
  return (undefined *)&DAT_00854970;
}

// 006A3BE0 FUN_006a3be0
#line 4 "decomp/ST.exe/functions/006A3BE0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006A3BE0 -> 006A3C80 @ 006A3BF3 | 007602E0 -> 006A3BE0 @ 007602E7; FUN_007602e0
   parameter param_2 | 00760320 -> 006A3BE0 @ 00760327; FUN_00760320 parameter param_2

   [STPrototypeApplier] Propagated return.
   Evidence: 006A3BE0 returns return of Library::MSVCRT::FUN_006a3c80 @ 006A3BFC */

int * __cdecl st::fn_006A3BE0(uint param_1)

{
  int *piVar1;

  piVar1 = st::fn_00405998(param_1,DAT_008571cc,1,nullptr,0);
  return piVar1;
}

// 006A3C10 FUN_006a3c10
#line 4 "decomp/ST.exe/functions/006A3C10/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00414980 -> 006A3C10 @ 004149A9 | 00414980 -> 006A3C10 @ 004149FB

   [STPrototypeApplier] Propagated return.
   Evidence: 006A3C10 returns return of Library::MSVCRT::FUN_006a3c80 @ 006A3C32 */

int * __cdecl st::fn_006A3C10(uint param_1,uint param_2,char *text,int param_4)

{
  int *piVar1;

  piVar1 = st::fn_00405998(param_1,DAT_008571cc,param_2,text,param_4);
  return piVar1;
}

// 006A3C50 FUN_006a3c50
#line 4 "decomp/ST.exe/functions/006A3C50/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006A3C50 returns return of Library::MSVCRT::FUN_006a3c80 @ 006A3C6A */

int * __cdecl st::fn_006A3C50(uint param_1,int param_2)

{
  int *piVar1;

  piVar1 = st::fn_00405998(param_1,param_2,1,nullptr,0);
  return piVar1;
}

// 006A3D10 FUN_006a3d10
#line 4 "decomp/ST.exe/functions/006A3D10/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006A3D10 returns return of Library::MSVCRT::FUN_006a3d40 @ 006A3D26 */

int * __cdecl st::fn_006A3D10(uint param_1)

{
  int *piVar1;

  piVar1 = st::fn_00405777(param_1,1,nullptr,0);
  return piVar1;
}

// 006A4090 FUN_006a4090
#line 4 "decomp/ST.exe/functions/006A4090/decomp.c"
void __cdecl st::fn_006A4090(int param_1,int param_2)

{
  st::fn_00402248(param_1,param_2,1,nullptr,0);
  return;
}

// 006A40C0 FUN_006a40c0
#line 4 "decomp/ST.exe/functions/006A40C0/decomp.c"
undefined4 * __cdecl st::fn_006A40C0(int param_1,int param_2,uint param_3,char *param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  int *piVar4;

  piVar1 = st::fn_00401104(param_1 * param_2,param_3,param_4,param_5);
  if ((piVar1 != nullptr) && (piVar4 = (int *)((int)piVar1 + param_1 * param_2), piVar1 < piVar4)
     ) {
    uVar2 = (int)piVar4 - (int)piVar1;
    piVar4 = piVar1;
    memset(piVar4, 0, uVar2); /* compiler bulk-zero initialization */
    return reinterpret_cast<undefined4 *>(piVar1);
  }
  return reinterpret_cast<undefined4 *>(piVar1);
}

// 006A4130 FUN_006a4130
#line 4 "decomp/ST.exe/functions/006A4130/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006A4130 returns return of Library::MSVCRT::FUN_006a4160 @ 006A414A

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006A4130 -> 006A4160 @ 006A4141 | 006BFB50 -> 006A4130 @ 006BFB64; FUN_006bfb50
   parameter param_1 */

int * __cdecl st::fn_006A4130(int *param_1,uint param_2)

{
  int *piVar1;

  piVar1 = st::fn_004047B4(reinterpret_cast<undefined4 *>(param_1),param_2,1,nullptr,0);
  return piVar1;
}

// 006A48E0 FUN_006a48e0
#line 4 "decomp/ST.exe/functions/006A48E0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006A48E0 returns return of FUN_006a4910 @ 006A48FA */

int * __cdecl st::fn_006A48E0(undefined4 *param_1,uint param_2)

{
  int *piVar1;

  piVar1 = st::fn_004047F0(param_1,param_2,1,nullptr,0);
  return piVar1;
}

// 006A4910 FUN_006a4910
#line 4 "decomp/ST.exe/functions/006A4910/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006A4910 returns return of Library::MSVCRT::FUN_006a41e0 @ 006A4932 */

int * __cdecl st::fn_006A4910(undefined4 *param_1,uint param_2,uint param_3,char *param_4,int param_5)

{
  int *piVar1;

  piVar1 = st::fn_006A41E0(param_1,param_2,param_3,param_4,param_5,0);
  return piVar1;
}

// 006A4EF0 FUN_006a4ef0
#line 4 "decomp/ST.exe/functions/006A4EF0/decomp.c"
void __cdecl st::fn_006A4EF0(int param_1)

{
  st::fn_00402C52(param_1,1);
  return;
}

// 006A5050 FUN_006a5050
#line 4 "decomp/ST.exe/functions/006A5050/decomp.c"
undefined4 __cdecl st::fn_006A5050(undefined4 param_1)

{
  uint uVar1;
  uVar1 = DAT_007ec180;
  DAT_007ec180 = param_1;
  return uVar1;
}

// 006A5100 FUN_006a5100
#line 4 "decomp/ST.exe/functions/006A5100/decomp.c"
undefined * __cdecl st::fn_006A5100(undefined *param_1)

{
  undefined *puVar1;

  puVar1 = reinterpret_cast<undefined *>(PTR_FUN_007f1498);
  PTR_FUN_007f1498 = reinterpret_cast<undefined *>(param_1);
  return puVar1;
}

// 006A5130 FUN_006a5130
#line 4 "decomp/ST.exe/functions/006A5130/decomp.c"
undefined4 __cdecl st::fn_006A5130(char *param_1,char param_2,int param_3)

{
  char cVar1;
  uint uVar3;
  int iVar4;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = (undefined *)&DAT_0079d850;
  puStack_10 = (byte *)&st_image_0072D964;
  local_14 = ExceptionList;
  uVar3 = 1;
  local_8 = 0;
  ExceptionList = &local_14;
  while( true ) {
    do {
      iVar4 = param_3 + -1;
      if (param_3 == 0) {
        ExceptionList = local_14;
        return uVar3;
      }
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      param_3 = iVar4;
    } while (cVar1 == param_2);
    iVar4 = st::fn_00730FA0
                      (0,0,0,0,(byte *)"memory check error at 0x%08X = 0x%02X, should be 0x%02X.\n");
    if (iVar4 == 1) break;
    uVar3 = 0;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 006A5210 FUN_006a5210
#line 4 "decomp/ST.exe/functions/006A5210/decomp.c"
undefined4 st::fn_006A5210(void)

{
  bool bVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_c;

  local_c = 1;
  if ((DAT_007ec178 & 1) == 0) {
    return 1;
  }
  iVar4 = st::fn_007318F0();
  puVar3 = PTR_0085496c;
  if ((iVar4 != -1) && (iVar4 != -2)) {
    switch(iVar4) {
    case -6:
      iVar4 = st::fn_00730FA0(0,0,0,0,(byte *)"%s");
      if (iVar4 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      break;
    case -5:
      iVar4 = st::fn_00730FA0(0,0,0,0,(byte *)"%s");
      if (iVar4 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      break;
    case -4:
      iVar4 = st::fn_00730FA0(0,0,0,0,(byte *)"%s");
      if (iVar4 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      break;
    case -3:
      iVar4 = st::fn_00730FA0(0,0,0,0,(byte *)"%s");
      if (iVar4 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      break;
    default:
      iVar4 = st::fn_00730FA0(0,0,0,0,(byte *)"%s");
      if (iVar4 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    return 0;
  }
  do {
    if (puVar3 == nullptr) {
      return local_c;
    }
    bVar2 = true;
    iVar4 = st::fn_006A5130((char *)(puVar3 + 7),(char)DAT_007ec184,4);
    if (iVar4 == 0) {
      iVar4 = st::fn_00730FA0
                        (0,0,0,0,(byte *)"DAMAGE: before %hs block (#%d) at 0x%08X.\n");
      if (iVar4 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      bVar2 = false;
    }
    iVar4 = st::fn_006A5130((char *)(puVar3[4] + 0x20 + (int)puVar3),(char)DAT_007ec184,4);
    if (iVar4 == 0) {
      iVar4 = st::fn_00730FA0
                        (0,0,0,0,(byte *)"DAMAGE: after %hs block (#%d) at 0x%08X.\n");
      if (iVar4 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      bVar2 = false;
    }
    if ((puVar3[5] == 0) &&
       (iVar4 = st::fn_006A5130((char *)(puVar3 + 8),STPiece<1,1>(DAT_007ec184),puVar3[4]), iVar4 == 0)) {
      iVar4 = st::fn_00730FA0
                        (0,0,0,0,(byte *)"DAMAGE: on top of Free block at 0x%08X.\n");
      if (iVar4 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
LAB_006a541d:
      if ((puVar3[2] != 0) &&
         (iVar4 = st::fn_00730FA0
                            (0,0,0,0,(byte *)"%hs allocated at file %hs(%d).\n"), iVar4 == 1)
         ) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = st::fn_00730FA0
                        (0,0,0,0,(byte *)"%hs located at 0x%08X is %u bytes long.\n");
      if (iVar4 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      local_c = 0;
    }
    else if (!bVar2) goto LAB_006a541d;
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}

// 006A5530 FUN_006a5530
#line 4 "decomp/ST.exe/functions/006A5530/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl st::fn_006A5530(int param_1)

{
  int iVar1;

  iVar1 = _DAT_007ec178;
  if (param_1 != -1) {
    _DAT_007ec178 = param_1;
  }
  return iVar1;
}

// 006A5560 FUN_006a5560
#line 4 "decomp/ST.exe/functions/006A5560/decomp.c"
void __cdecl st::fn_006A5560(undefined *param_1,undefined4 param_2)

{
  uint *puVar1;
  puVar1 = PTR_0085496c;
  if ((DAT_007ec178 & 1) != 0) {
    for (; puVar1 != nullptr; puVar1 = (undefined4 *)*puVar1) {
      if ((puVar1[5] & 0xffff) == 4) {
        /* ST_CALLSITE[006A5591]: CALL EBX */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (*(code *)param_1)(puVar1 + 8,param_2);
      }
    }
  }
  return;
}

// 006A55D0 FUN_006a55d0
#line 4 "decomp/ST.exe/functions/006A55D0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006A55D0 -> EXTERNAL:00000023 @ 006A55E1 | 006A56B0 -> 006A55D0 @ 006A56EA */

undefined4 __cdecl st::fn_006A55D0(void *param_1,UINT_PTR ucb,int param_3)

{
  BOOL BVar1;

  /* ST_CALLSITE[006A55E1]: CALL dword ptr [0x0085bbb8] */
  if ((param_1 == nullptr) || (BVar1 = st::external_00000023(param_1,ucb), BVar1 != 0)) {
    return 0;
  }
  /* ST_CALLSITE[006A55F4]: CALL dword ptr [0x0085bba0] */
  if ((param_3 != 0) && (BVar1 = st::external_0000001D(param_1,ucb), BVar1 != 0)) {
    return 0;
  }
  return 1;
}

// 006A5620 FUN_006a5620
#line 4 "decomp/ST.exe/functions/006A5620/decomp.c"
BOOL __cdecl st::fn_006A5620(int param_1)

{
  void *lpMem;
  int iVar1;
  uint uVar2;
  BOOL BVar3;

  if (param_1 == 0) {
    return 0;
  }
  lpMem = (void *)(param_1 + -0x20);
  iVar1 = st::fn_00402DE2(lpMem,0x20,1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = st::fn_00731AE0((int)lpMem);
  if (uVar2 != 0) {
    BVar3 = st::fn_00731B40(uVar2,(int)lpMem);
    return BVar3;
  }
  if ((DAT_00857154 & 0x8000) != 0) {
    return 1;
  }
  /* ST_CALLSITE[006A567A]: CALL dword ptr [0x0085bb9c] */
  BVar3 = st::external_0000001C(st::pointer_boundary_cast<HANDLE>(DAT_0085a5c4),0,lpMem);
  return BVar3;
}

// 006A56B0 FUN_006a56b0
#line 4 "decomp/ST.exe/functions/006A56B0/decomp.c"
undefined4 __cdecl
st::fn_006A56B0(void *param_1,UINT_PTR param_2,int *param_3,undefined4 *param_4,undefined4 *param_5)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;

  BVar2 = st::fn_0040516E((int)param_1);
  if (BVar2 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar1 = *(uint *)((int)param_1 + -0xc);
    if (((((uVar1 & 0xffff) == 4) || (uVar1 == 1)) || ((uVar1 & 0xffff) == 2)) || (uVar1 == 3)) {
      iVar3 = st::fn_00402DE2(param_1,param_2,1);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (((iVar3 != 0) && (*(UINT_PTR *)((int)param_1 + -0x10) == param_2)) &&
         (*(int *)((int)param_1 + -8) <= DAT_007ec17c)) {
        if (param_3 != nullptr) {
          *param_3 = *(int *)((int)param_1 + -8);
        }
        if (param_4 != nullptr) {
          *param_4 = *(undefined4 *)((int)param_1 + -0x18);
        }
        if (param_5 != nullptr) {
          *param_5 = *(undefined4 *)((int)param_1 + -0x14);
        }
        return 1;
      }
    }
  }
  return 0;
}

// 006A5770 FUN_006a5770
#line 4 "decomp/ST.exe/functions/006A5770/decomp.c"
undefined4 __cdecl st::fn_006A5770(undefined4 param_1)

{
  uint uVar1;
  uVar1 = DAT_0085751c;
  DAT_0085751c = param_1;
  return uVar1;
}

// 006A57A0 FUN_006a57a0
#line 4 "decomp/ST.exe/functions/006A57A0/decomp.c"
void __cdecl st::fn_006A57A0(undefined4 *param_1)

{
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;

  if (param_1 == nullptr) {
    iVar4 = st::fn_00730FA0(0,0,0,0,(byte *)"%s");
    if (iVar4 == 1) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else {
    iVar4 = 5;
    *param_1 = st::machine_word_boundary_cast<undefined4>(PTR_0085496c);
    puVar2 = param_1;
    do {
      puVar2[6] = 0;
      puVar2[1] = 0;
      iVar4 = iVar4 + -1;
      puVar2 = puVar2 + 1;
      puVar3 = PTR_0085496c;
    } while (iVar4 != 0);
    for (; puVar3 != nullptr; puVar3 = (undefined4 *)*puVar3) {
      uVar5 = st::machine_word_boundary_cast<uint>(puVar3[5] & 0xffff);
      if (uVar5 < 5) {
        param_1[uVar5 + 1] = st::machine_word_boundary_cast<undefined4>(param_1[uVar5 + 1] + 1);
        param_1[(puVar3[5] & 0xffff) + 6] = st::machine_word_boundary_cast<undefined4>(param_1[(puVar3[5] & 0xffff) + 6] + puVar3[4]);
      }
      else {
        iVar4 = st::fn_00730FA0
                          (0,0,0,0,(byte *)"Bad memory block found at 0x%08X.\n");
        if (iVar4 == 1) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    param_1[0xb] = DAT_00854a48;
    param_1[0xc] = DAT_00854968;
  }
  return;
}

// 006A58B0 FUN_006a58b0
#line 4 "decomp/ST.exe/functions/006A58B0/decomp.c"
undefined4 __cdecl
st::fn_006A58B0(undefined4 *param_1,AnonShape_006A58B0_8049417A *param_2,
            AnonShape_006A58B0_CDE73679 *param_3)

{
  uint uVar2;
  int iVar3;
  int iVar4;

  uVar2 = 0;
  if (((param_1 != nullptr) && (param_2 != nullptr)) &&
     (param_3 != nullptr)) {
    iVar3 = 0;
    do {
      param_1[iVar3 + 6] = st::machine_word_boundary_cast<undefined4>(param_3->entries[iVar3] - param_2->entries[iVar3]);
      iVar4 = st::machine_word_boundary_cast<int>(param_3->entries[iVar3] - param_2->entries[iVar3]);
      param_1[iVar3 + 1] = iVar4;
      if (((param_1[iVar3 + 6] != 0) || (iVar4 != 0)) &&
         ((iVar3 != 0 && ((iVar3 != 2 || ((DAT_007ec178 & 0x10) != 0)))))) {
        uVar2 = 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
    param_1[0xb] = param_3->field_002C - param_2->field_002C;
    iVar3 = param_3->field_0030;
    iVar4 = param_2->field_0030;
    *param_1 = 0;
    param_1[0xc] = iVar3 - iVar4;
    return uVar2;
  }
  iVar3 = st::fn_00730FA0(0,0,0,0,(byte *)"%s");
  if (iVar3 == 1) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return 0;
}

// 006A5990 FUN_006a5990
#line 4 "decomp/ST.exe/functions/006A5990/decomp.c"
void __cdecl st::fn_006A5990(undefined4 *param_1)

{
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  puVar5 = nullptr;
  iVar3 = st::fn_00730FA0(0,0,0,0,(byte *)"%s");
  if (iVar3 == 1) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  puVar2 = PTR_0085496c;
  if (param_1 != nullptr) {
    puVar5 = (undefined4 *)*param_1;
  }
  do {
    if ((puVar2 == nullptr) || (puVar2 == puVar5)) {
      iVar3 = st::fn_00730FA0(0,0,0,0,(byte *)"%s");
      if (iVar3 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      return;
    }
    uVar4 = st::machine_word_boundary_cast<uint>(puVar2[5] & 0xffff);
    if (((uVar4 != 3) && (uVar4 != 0)) && ((uVar4 != 2 || ((DAT_007ec178 & 0x10) != 0)))) {
      if ((void *)puVar2[2] != 0) {
        iVar3 = st::fn_00402DE2((void *)puVar2[2],1,0);
        if (iVar3 == 0) {
          iVar3 = st::fn_00730FA0(0,0,0,0,(byte *)"#File Error#(%d) : ");
          if (iVar3 == 1) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
        }
        else {
          iVar3 = st::fn_00730FA0(0,0,0,0,(byte *)"%hs(%d) : ");
          if (iVar3 == 1) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
        }
      }
      iVar3 = st::fn_00730FA0(0,0,0,0,(byte *)"{%ld} ");
      if (iVar3 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      uVar4 = st::machine_word_boundary_cast<uint>(puVar2[5] & 0xffff);
      if (uVar4 == 4) {
        iVar3 = st::fn_00730FA0
                          (0,0,0,0,(byte *)"client block at 0x%08X, subtype %x, %u bytes long.\n");
        if (iVar3 == 1) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (DAT_0085751c != 0) {
          /* ST_CALLSITE[006A5AC3]: CALL EAX */
          (*DAT_0085751c)(puVar2 + 8,puVar2[4]);
          goto cf_continue_loop_006A5B2E;
        }
      }
      else if (puVar2[5] == 1) {
        iVar3 = st::fn_00730FA0
                          (0,0,0,0,(byte *)"normal block at 0x%08X, %u bytes long.\n");
        if (iVar3 == 1) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
      else {
        if (uVar4 != 2) goto cf_continue_loop_006A5B2E;
        iVar3 = st::fn_00730FA0
                          (0,0,0,0,(byte *)"crt block at 0x%08X, subtype %x, %u bytes long.\n");
        if (iVar3 == 1) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
      st::fn_006A5BE0((int)puVar2);
    }
cf_continue_loop_006A5B2E:
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}

// 006A5BE0 FUN_006a5be0
#line 4 "decomp/ST.exe/functions/006A5BE0/decomp.c"
void __cdecl st::fn_006A5BE0(int param_1)

{
  uint32_t _local_8;

  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *puVar5;
  int iVar6;
  undefined1 local_50 [52];
  byte local_1c [20];
  byte local_8;
  undefined3 uStack_7;

  iVar6 = 0;
  puVar5 = local_50;
  while( true ) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar3 = *(int *)(param_1 + 0x10);
    if (0xf < iVar3) {
      iVar3 = 0x10;
    }
    if (iVar3 <= iVar6) break;
    bVar2 = *(byte *)(iVar6 + 0x20 + param_1);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_8 = CONCAT31(uStack_7,bVar2);
    if (DAT_007f148c < 2) {
      uVar4 = *(ushort *)(PTR_DAT_007f1280 + (uint)bVar2 * 2) & 0x157;
    }
    else {
      uVar4 = st::fn_00730610((uint)bVar2,0x157);
    }
    if (uVar4 == 0) {
      bVar2 = 0x20;
    }
    local_1c[iVar6] = bVar2;
    st::fn_00730C40(puVar5,0x7eca88);
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 3;
  }
  local_1c[iVar6] = 0;
  iVar6 = st::fn_00730FA0(0,0,0,0,(byte *)" Data: <%s> %s\n");
  if (iVar6 == 1) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return;
}

// 006A5CD0 FUN_006a5cd0
#line 4 "decomp/ST.exe/functions/006A5CD0/decomp.c"
undefined4 st::fn_006A5CD0(void)

{
  int iVar2;
  uint uVar3;
  undefined4 local_38 [2];
  int local_30;
  int local_2c;
  int local_24;

  st::fn_004053D0(local_38);
  if (((local_24 == 0) && (local_30 == 0)) && (((DAT_007ec178 & 0x10) == 0 || (local_2c == 0)))) {
    return 0;
  }
  iVar2 = st::fn_00730FA0(0,0,0,0,(byte *)"%s");
  if (iVar2 == 1) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00403454(nullptr);
  return 1;
}

// 006A5D60 FUN_006a5d60
#line 4 "decomp/ST.exe/functions/006A5D60/decomp.c"
void __cdecl st::fn_006A5D60(int param_1)

{
  int iVar2;
  undefined **ppuVar3;

  if (param_1 != 0) {
    ppuVar3 = (undefined **)&PTR_DAT_007ec188;
    do {
      iVar2 = st::fn_00730FA0(0,0,0,0,(byte *)"%ld bytes in %ld %hs Blocks.\n");
      if (iVar2 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      ppuVar3 = ppuVar3 + 1;
    } while ((int)ppuVar3 < 0x7ec19c);
    iVar2 = st::fn_00730FA0
                      (0,0,0,0,(byte *)"Largest number used: %ld bytes.\n");
    if (iVar2 == 1) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar2 = st::fn_00730FA0(0,0,0,0,(byte *)"Total allocations: %ld bytes.\n");
    if (iVar2 == 1) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return;
}

// 006A5E20 FUN_006a5e20
#line 1 "decomp/ST.exe/functions/006A5E20/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006A5E20 -> 007338AC @ 006A5E34 */

int st::fn_006A5E20(int value)

{
  if (g_currentExceptionFrame != nullptr) {
                    /* WARNING: Subroutine does not return */
    st::fn_007338AC(g_currentExceptionFrame->jumpBuffer,value);
  }
  return value;
}

// 006A5E40 RaiseInternalException
#line 1 "decomp/ST.exe/functions/006A5E40/decomp.c"

void st::fn_006A5E40(int exceptionCode,int overwriteContext,char *sourceFile,int sourceLine)

{
  if ((overwriteContext != 0) || (g_exceptionSourceFile == 0)) {
    g_exceptionSourceFile = st::machine_word_boundary_cast<undefined4>(sourceFile);
    g_exceptionSourceLine = sourceLine;
    g_exceptionCode = exceptionCode;
  }
  if (g_currentExceptionFrame != nullptr) {
                    /* WARNING: Subroutine does not return */
    st::fn_007338AC(g_currentExceptionFrame->jumpBuffer,exceptionCode);
  }
  return;
}

// 006A5E90 FUN_006a5e90
#line 1 "decomp/ST.exe/functions/006A5E90/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0040BC90 -> 006A5E90 @ 0040BED9 | 004A7490 -> 006A5E90 @ 004A7604 */

void st::fn_006A5E90(short *param_1)

{
  if (param_1 != nullptr) {
    st::fn_00405D8A((int *)param_1);
  }
  return;
}

// 006A5EB0 FUN_006a5eb0
#line 4 "decomp/ST.exe/functions/006A5EB0/decomp.c"
undefined4 st::fn_006A5EB0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;

  uVar3 = param_4 - param_1;
  if ((((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 2) &&
      (uVar2 = param_5 - param_2, (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) < 2))
     && (uVar1 = param_6 - param_3, (int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) < 2))
  {
    return *(undefined4 *)(PTR_DAT_007ed714 + ((uVar2 + uVar1 * 3) * 3 + uVar3) * 4);
  }
  return 0xffe;
}

// 006A5F20 FUN_006a5f20
#line 4 "decomp/ST.exe/functions/006A5F20/decomp.c"
undefined4
st::fn_006A5F20(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  uint local_2c;
  int local_18;
  uint local_14;

  uVar6 = param_4 - param_1 >> 0x1f;
  iVar8 = (param_4 - param_1 ^ uVar6) - uVar6;
  if (param_1 < param_4) {
    local_2c = 2;
  }
  else {
    local_2c = (uint)(param_4 == param_1);
  }
  uVar6 = param_5 - param_2 >> 0x1f;
  iVar4 = (param_5 - param_2 ^ uVar6) - uVar6;
  if (param_2 < param_5) {
    uVar6 = 2;
  }
  else {
    uVar6 = (uint)(param_5 == param_2);
  }
  uVar7 = param_6 - param_3 >> 0x1f;
  local_18 = (param_6 - param_3 ^ uVar7) - uVar7;
  if (param_3 < param_6) {
    local_14 = 2;
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    local_14 = (uint)(param_6 == param_3);
  }
  bVar1 = iVar4 <= iVar8;
  iVar5 = iVar4;
  uVar7 = uVar6;
  if (!bVar1) {
    iVar5 = iVar8;
    iVar8 = iVar4;
    uVar7 = local_2c;
    local_2c = uVar6;
  }
  iVar4 = iVar5;
  uVar6 = uVar7;
  bVar10 = bVar1;
  bVar2 = 2;
  if (iVar5 < local_18) {
    bVar10 = 2;
    iVar4 = local_18;
    uVar6 = local_14;
    local_18 = iVar5;
    local_14 = uVar7;
    bVar2 = bVar1;
  }
  auto param_6_after_write = iVar4; /* compiler stack-slot lifetime split */
  uVar7 = uVar6;
  bVar11 = bVar10;
  bVar3 = !bVar1;
  if (iVar8 < iVar4) {
    param_6_after_write = iVar8;
    iVar8 = iVar4;
    uVar7 = local_2c;
    local_2c = uVar6;
    bVar11 = !bVar1;
    bVar3 = bVar10;
  }
  if (param_6_after_write * 2 < iVar8) {
    uVar7 = 1;
    local_14 = 1;
    param_6_after_write = iVar8 - param_6_after_write;
  }
  else if (local_18 * 2 < param_6_after_write) {
    local_14 = 1;
    param_6_after_write = param_6_after_write - local_18;
  }
  else if (local_18 == 0) {
    if (param_6_after_write == 0) {
      param_6_after_write = iVar8;
    }
  }
  else {
    param_6_after_write = local_18;
  }
  uVar6 = local_2c;
  bVar10 = bVar3;
  if (bVar3 < bVar11) {
    uVar6 = uVar7;
    uVar7 = local_2c;
    bVar10 = bVar11;
    bVar11 = bVar3;
  }
  uVar9 = uVar7;
  if (bVar11 < bVar2) {
    uVar9 = local_14;
    local_14 = uVar7;
    bVar11 = bVar2;
  }
  uVar7 = uVar6;
  if (bVar10 < bVar11) {
    uVar7 = uVar9;
    uVar9 = uVar6;
  }
  if (param_7 != nullptr) {
    *param_7 = param_6_after_write;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(((uVar9 + uVar7 * 3) * 3 + local_14) * 4 + 0x7ed500);
}

// 006A6100 FUN_006a6100
#line 4 "decomp/ST.exe/functions/006A6100/decomp.c"
undefined4
st::fn_006A6100(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  undefined4 local_2c;
  undefined4 local_18;
  undefined4 local_14;

  uVar5 = param_4 - param_1 >> 0x1f;
  iVar7 = (param_4 - param_1 ^ uVar5) - uVar5;
  if (param_1 < param_4) {
    local_2c = 2;
  }
  else {
    local_2c = (uint)(param_4 == param_1);
  }
  uVar5 = param_5 - param_2 >> 0x1f;
  iVar3 = (param_5 - param_2 ^ uVar5) - uVar5;
  if (param_2 < param_5) {
    uVar5 = 2;
  }
  else {
    uVar5 = (uint)(param_5 == param_2);
  }
  uVar6 = param_6 - param_3 >> 0x1f;
  local_18 = (param_6 - param_3 ^ uVar6) - uVar6;
  if (param_3 < param_6) {
    local_14 = 2;
  }
  else {
    local_14 = (uint)(param_6 == param_3);
  }
  bVar1 = iVar7 < iVar3;
  iVar4 = iVar3;
  uVar6 = uVar5;
  if ((bool)bVar1) {
    iVar4 = iVar7;
    iVar7 = iVar3;
    uVar6 = local_2c;
    local_2c = uVar5;
  }
  iVar3 = iVar4;
  uVar5 = uVar6;
  bVar8 = !(bool)bVar1;
  bVar2 = 2;
  if (iVar4 < local_18) {
    bVar8 = 2;
    iVar3 = local_18;
    uVar5 = local_14;
    local_18 = iVar4;
    local_14 = uVar6;
    bVar2 = !(bool)bVar1;
  }
  iVar4 = iVar3;
  uVar6 = uVar5;
  bVar9 = bVar8;
  if (iVar7 < iVar3) {
    iVar4 = iVar7;
    iVar7 = iVar3;
    uVar6 = local_2c;
    local_2c = uVar5;
    bVar9 = bVar1;
    bVar1 = bVar8;
  }
  if (iVar7 == 0) {
    return DAT_007ed534;
  }
  if (iVar4 * 2 < iVar7) {
    uVar6 = 1;
    local_14 = 1;
    iVar3 = iVar7 + iVar4 * -2;
  }
  else if (local_18 * 2 < iVar4) {
    local_14 = 1;
    iVar3 = iVar4 + local_18 * -2;
    iVar7 = iVar4 * 2 - iVar7;
    if (iVar7 < iVar3) {
      iVar3 = iVar7 + 1;
    }
  }
  else {
    iVar3 = local_18 * 2 - iVar4;
    iVar7 = iVar4 * 2 - iVar7;
    if (iVar7 < iVar3) {
      iVar3 = iVar7;
    }
    iVar3 = iVar3 + 1;
  }
  uVar5 = uVar6;
  bVar8 = bVar1;
  if (bVar1 < bVar9) {
    uVar5 = local_2c;
    local_2c = uVar6;
    bVar8 = bVar9;
    bVar9 = bVar1;
  }
  uVar6 = uVar5;
  if (bVar9 < bVar2) {
    uVar6 = local_14;
    local_14 = uVar5;
    bVar9 = bVar2;
  }
  uVar5 = uVar6;
  if (bVar8 < bVar9) {
    uVar5 = local_2c;
    local_2c = uVar6;
  }
  if (param_7 != nullptr) {
    *param_7 = iVar3;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(((uVar5 + local_2c * 3) * 3 + local_14) * 4 + 0x7ed500);
}

// 006A62E0 FUN_006a62e0
#line 1 "decomp/ST.exe/functions/006A62E0/decomp.c"

int st::fn_006A62E0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;

  iVar1 = st::fn_006A5F20(param_1,param_2,param_3,param_4,param_5,param_6,nullptr);
  if (0x19 < iVar1) {
    return 0xffe;
  }
  return (int)(&SHORT_007ed576)[iVar1 * 4];
}

// 006A6320 FUN_006a6320
#line 1 "decomp/ST.exe/functions/006A6320/decomp.c"

uint st::fn_006A6320(uint param_1)

{
  uint uVar1;

  uVar1 = param_1 & 0xffff9fff;
  if (uVar1 != 0xffe) {
    uVar1 = (int)(uVar1 + 0xb4) % 0x168;
  }
  if ((param_1 & 0x4000) != 0) {
    return uVar1 | 0x2000;
  }
  if ((param_1 & 0x2000) != 0) {
    uVar1 = uVar1 | 0x4000;
  }
  return uVar1;
}

// 006A6360 FUN_006a6360
#line 1 "decomp/ST.exe/functions/006A6360/decomp.c"

uint st::fn_006A6360(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint local_8;

  local_8 = 0xffe;
  iVar3 = param_3;
switchD_006a63e5_caseD_1:
  do {
    while( true ) {
      if ((((param_1 == param_4) && (param_2 == param_5)) && (iVar3 == param_6)) ||
         (local_8 = st::fn_006A5F20(param_1,param_2,iVar3,param_4,param_5,param_6,&param_3),
         0x19 < (int)local_8)) {
        return local_8;
      }
      uVar1 = (&SHORT_007ed576)[local_8 * 4];
      local_8 = (uint)(short)uVar1;
      if ((local_8 & 0x4000) == 0) {
        if ((uVar1 & 0x2000) != 0) {
          iVar3 = iVar3 + param_3;
        }
      }
      else {
        iVar3 = iVar3 - param_3;
      }
      uVar2 = (int)(short)uVar1 & 0xffff9fff;
      if (0xb4 < (int)uVar2) break;
      if (uVar2 == 0xb4) {
        param_1 = param_1 - param_3;
      }
      else {
        switch(uVar2) {
        case 0:
          param_1 = param_1 + param_3;
          break;
        case 0x2d:
          param_1 = param_1 + param_3;
        case 0x5a:
          param_2 = param_2 - param_3;
          break;
        case 0x87:
          param_1 = param_1 - param_3;
          param_2 = param_2 - param_3;
        }
      }
    }
    if (uVar2 != 0xe1) {
      if (uVar2 != 0x10e) break;
      goto LAB_006a641e;
    }
    param_1 = param_1 - param_3;
    param_2 = param_2 + param_3;
  } while( true );
  if (uVar2 == 0x13b) {
    param_1 = param_1 + param_3;
LAB_006a641e:
    param_2 = param_2 + param_3;
  }
  goto switchD_006a63e5_caseD_1;
}

// 006A64E0 FUN_006a64e0
#line 4 "decomp/ST.exe/functions/006A64E0/decomp.c"
undefined4
st::fn_006A64E0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  bool bVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  short *psVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  short sVar21;
  int iVar22;
  undefined4 local_34;
  int local_30;
  int local_2c;
  byte *local_24;
  int local_20;
  byte *local_1c;
  byte *local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;

  local_14 = param_2 * param_3;
  local_34 = 0;
  *(undefined2 *)(param_1 + (param_2 * param_6 + param_5 + local_14 * param_7) * 2) = 1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (((param_5 == param_8) && (param_6 == param_9)) && (param_7 == param_10)) {
    return 0;
  }
  iVar17 = (param_2 + param_3) * param_4;
  local_20 = iVar17 * 2;
  local_24 = (byte *)st::fn_006BFB70(iVar17 * 0x10);
  if (local_24 == nullptr) {
LAB_006a6ed7:
    local_34 = 0xfffffffe;
  }
  else {
    local_1c = local_24 + iVar17 * 8;
    local_30 = 1;
    *local_1c = (byte)param_5;
    local_1c[1] = (byte)param_6;
    local_1c[2] = (byte)param_7;
    bVar5 = false;
    local_18 = local_24;
    while( true ) {
      auto param_6_after_write = 0; /* compiler stack-slot lifetime split */
      local_2c = 0;
      pbVar19 = local_18;
      if (local_30 < 1) break;
      do {
        bVar1 = local_1c[local_2c * 4 + 1];
        uVar7 = (uint)bVar1;
        bVar2 = local_1c[local_2c * 4];
        uVar16 = (uint)bVar2;
        bVar3 = local_1c[local_2c * 4 + 2];
        uVar8 = (uint)bVar3;
        iVar17 = uVar7 * param_2 + uVar16 + local_14 * uVar8;
        sVar21 = *(short *)(param_1 + iVar17 * 2);
        iVar22 = (int)sVar21;
        local_10 = param_1 + iVar17 * 2;
        if (local_20 < param_6_after_write + 0x1a) {
          local_20 = local_20 + 0x80;
          pbVar6 = (byte *)st::fn_006BFB50((int *)local_24,local_20 * 8);
          if (pbVar6 == nullptr) goto LAB_006a6ed7;
          local_18 = pbVar6 + ((int)local_18 - (int)local_24 >> 2) * 4;
          local_1c = pbVar6 + ((int)local_1c - (int)local_24 >> 2) * 4;
          if (local_18 == pbVar6) {
            local_1c = local_1c + 0x200;
          }
          else {
            local_18 = local_18 + 0x200;
          }
          pbVar19 = local_18 + param_6_after_write * 4;
          local_24 = pbVar6;
          st::fn_0072DA70
                    ((undefined4 *)(pbVar6 + local_20 * 4),
                     (AnonPointee_TLOBaseTy_0607 *)(pbVar6 + local_20 * 4 + -0x200),
                     local_20 * 4 - 0x200);
        }
        pbVar6 = local_1c;
        local_c = 0xff;
        if ((int)uVar16 < param_2 + -1) {
          local_c = 0xfe;
        }
        if (uVar16 != 0) {
          local_c = local_c & 0xffffffef;
        }
        if ((int)uVar7 < param_3 + -1) {
          local_c = local_c & 0xfffffffd;
        }
        if (uVar7 != 0) {
          local_c = local_c & 0xffffffdf;
        }
        if ((int)uVar8 < param_4 + -1) {
          local_c = local_c & 0xfffffffb;
        }
        if (uVar8 != 0) {
          local_c = local_c & 0xffffffbf;
        }
        uVar9 = local_c & 0x10;
        pbVar18 = pbVar19;
        if ((uVar9 == 0) &&
           ((*(short *)(local_10 + -2) == 0 || (iVar22 + 3 < (int)*(short *)(local_10 + -2))))) {
          pbVar18 = pbVar19 + 4;
          *(short *)(local_10 + -2) = sVar21 + 3;
          pbVar19[1] = bVar1;
          *pbVar19 = bVar2 - 1;
          pbVar19[2] = bVar3;
          param_6_after_write = param_6_after_write + 1;
        }
        uVar10 = local_c & 1;
        pbVar19 = pbVar18;
        if ((uVar10 == 0) &&
           ((*(short *)(local_10 + 2) == 0 || (iVar22 + 3 < (int)*(short *)(local_10 + 2))))) {
          pbVar19 = pbVar18 + 4;
          *(short *)(local_10 + 2) = sVar21 + 3;
          pbVar18[1] = bVar1;
          *pbVar18 = bVar2 + 1;
          pbVar18[2] = bVar3;
          param_6_after_write = param_6_after_write + 1;
        }
        uVar11 = local_c & 0x20;
        pbVar18 = pbVar19;
        if (uVar11 == 0) {
          psVar12 = (short *)(local_10 + param_2 * -2);
          sVar4 = *psVar12;
          if ((sVar4 == 0) || (iVar22 + 3 < (int)sVar4)) {
            pbVar18 = pbVar19 + 4;
            *psVar12 = sVar21 + 3;
            pbVar19[1] = bVar1 - 1;
            *pbVar19 = bVar2;
            pbVar19[2] = bVar3;
            param_6_after_write = param_6_after_write + 1;
          }
        }
        uVar13 = local_c & 2;
        pbVar19 = pbVar18;
        if ((uVar13 == 0) &&
           ((sVar4 = *(short *)(local_10 + param_2 * 2), sVar4 == 0 || (iVar22 + 3 < (int)sVar4))))
        {
          pbVar19 = pbVar18 + 4;
          *(short *)(local_10 + param_2 * 2) = sVar21 + 3;
          pbVar18[2] = bVar3;
          *pbVar18 = bVar2;
          pbVar18[1] = bVar1 + 1;
          param_6_after_write = param_6_after_write + 1;
        }
        uVar14 = local_c & 0x40;
        pbVar18 = pbVar19;
        if (uVar14 == 0) {
          psVar12 = (short *)(local_10 + local_14 * -2);
          sVar4 = *psVar12;
          if ((sVar4 == 0) || (iVar22 + 3 < (int)sVar4)) {
            pbVar18 = pbVar19 + 4;
            *psVar12 = sVar21 + 3;
            pbVar19[1] = bVar1;
            *pbVar19 = bVar2;
            pbVar19[2] = bVar3 - 1;
            param_6_after_write = param_6_after_write + 1;
          }
        }
        uVar15 = local_c & 4;
        pbVar19 = pbVar18;
        if ((uVar15 == 0) &&
           ((sVar4 = *(short *)(local_10 + local_14 * 2), sVar4 == 0 || (iVar22 + 3 < (int)sVar4))))
        {
          pbVar19 = pbVar18 + 4;
          *(short *)(local_10 + local_14 * 2) = sVar21 + 3;
          pbVar18[2] = bVar3 + 1;
          *pbVar18 = bVar2;
          pbVar18[1] = bVar1;
          param_6_after_write = param_6_after_write + 1;
        }
        if (uVar15 == 0) {
          local_8 = local_10 + local_14 * 2;
          pbVar18 = pbVar19;
          if ((uVar9 == 0) &&
             ((*(short *)(local_8 + -2) == 0 || (iVar22 + 4 < (int)*(short *)(local_8 + -2))))) {
            pbVar18 = pbVar19 + 4;
            *(short *)(local_8 + -2) = sVar21 + 4;
            *pbVar19 = bVar2 - 1;
            pbVar19[1] = bVar1;
            pbVar19[2] = bVar3 + 1;
            param_6_after_write = param_6_after_write + 1;
          }
          pbVar19 = pbVar18;
          if ((uVar10 == 0) &&
             ((*(short *)(local_8 + 2) == 0 || (iVar22 + 4 < (int)*(short *)(local_8 + 2))))) {
            pbVar19 = pbVar18 + 4;
            *(short *)(local_8 + 2) = sVar21 + 4;
            *pbVar18 = bVar2 + 1;
            pbVar18[1] = bVar1;
            pbVar18[2] = bVar3 + 1;
            param_6_after_write = param_6_after_write + 1;
          }
          pbVar18 = pbVar19;
          if ((uVar13 == 0) &&
             ((sVar4 = *(short *)(local_8 + param_2 * 2), sVar4 == 0 || (iVar22 + 4 < (int)sVar4))))
          {
            pbVar18 = pbVar19 + 4;
            *(short *)(local_8 + param_2 * 2) = sVar21 + 4;
            *pbVar19 = bVar2;
            pbVar19[1] = bVar1 + 1;
            pbVar19[2] = bVar3 + 1;
            param_6_after_write = param_6_after_write + 1;
          }
          pbVar19 = pbVar18;
          if (uVar11 == 0) {
            psVar12 = (short *)(local_8 + param_2 * -2);
            sVar4 = *psVar12;
            if ((sVar4 == 0) || (iVar22 + 4 < (int)sVar4)) {
              pbVar19 = pbVar18 + 4;
              *psVar12 = sVar21 + 4;
              pbVar18[1] = bVar1 - 1;
              *pbVar18 = bVar2;
              pbVar18[2] = bVar3 + 1;
              param_6_after_write = param_6_after_write + 1;
            }
          }
        }
        if (uVar14 == 0) {
          local_8 = local_10 + local_14 * -2;
          pbVar18 = pbVar19;
          if ((uVar9 == 0) &&
             ((*(short *)(local_8 + -2) == 0 || (iVar22 + 4 < (int)*(short *)(local_8 + -2))))) {
            pbVar18 = pbVar19 + 4;
            *(short *)(local_8 + -2) = sVar21 + 4;
            *pbVar19 = bVar2 - 1;
            pbVar19[1] = bVar1;
            pbVar19[2] = bVar3 - 1;
            param_6_after_write = param_6_after_write + 1;
          }
          pbVar19 = pbVar18;
          if ((uVar10 == 0) &&
             ((*(short *)(local_8 + 2) == 0 || (iVar22 + 4 < (int)*(short *)(local_8 + 2))))) {
            pbVar19 = pbVar18 + 4;
            *(short *)(local_8 + 2) = sVar21 + 4;
            *pbVar18 = bVar2 + 1;
            pbVar18[1] = bVar1;
            pbVar18[2] = bVar3 - 1;
            param_6_after_write = param_6_after_write + 1;
          }
          pbVar18 = pbVar19;
          if (uVar11 == 0) {
            psVar12 = (short *)(local_8 + param_2 * -2);
            sVar4 = *psVar12;
            if ((sVar4 == 0) || (iVar22 + 4 < (int)sVar4)) {
              pbVar18 = pbVar19 + 4;
              *psVar12 = sVar21 + 4;
              pbVar19[1] = bVar1 - 1;
              *pbVar19 = bVar2;
              pbVar19[2] = bVar3 - 1;
              param_6_after_write = param_6_after_write + 1;
            }
          }
          pbVar19 = pbVar18;
          if ((uVar13 == 0) &&
             ((sVar4 = *(short *)(local_8 + param_2 * 2), sVar4 == 0 || (iVar22 + 4 < (int)sVar4))))
          {
            pbVar19 = pbVar18 + 4;
            *(short *)(local_8 + param_2 * 2) = sVar21 + 4;
            pbVar18[1] = bVar1 + 1;
            *pbVar18 = bVar2;
            pbVar18[2] = bVar3 - 1;
            param_6_after_write = param_6_after_write + 1;
          }
        }
        uVar9 = local_c & 0x30;
        pbVar18 = pbVar19;
        if (uVar9 == 0) {
          psVar12 = (short *)(local_10 - (param_2 * 2 + 2));
          sVar4 = *psVar12;
          if ((sVar4 == 0) || (iVar22 + 4 < (int)sVar4)) {
            pbVar18 = pbVar19 + 4;
            *psVar12 = sVar21 + 4;
            *pbVar19 = bVar2 - 1;
            pbVar19[2] = bVar3;
            pbVar19[1] = bVar1 - 1;
            param_6_after_write = param_6_after_write + 1;
          }
        }
        uVar10 = local_c & 0x21;
        pbVar19 = pbVar18;
        if (uVar10 == 0) {
          iVar17 = local_10 + param_2 * -2;
          sVar4 = *(short *)(iVar17 + 2);
          if ((sVar4 == 0) || (iVar22 + 4 < (int)sVar4)) {
            pbVar19 = pbVar18 + 4;
            *(short *)(iVar17 + 2) = sVar21 + 4;
            *pbVar18 = bVar2 + 1;
            pbVar18[2] = bVar3;
            pbVar18[1] = bVar1 - 1;
            param_6_after_write = param_6_after_write + 1;
          }
        }
        uVar11 = local_c & 0x12;
        pbVar18 = pbVar19;
        if ((uVar11 == 0) &&
           ((sVar4 = *(short *)(local_10 + -2 + param_2 * 2), sVar4 == 0 ||
            (iVar22 + 4 < (int)sVar4)))) {
          pbVar18 = pbVar19 + 4;
          *(short *)(local_10 + -2 + param_2 * 2) = sVar21 + 4;
          *pbVar19 = bVar2 - 1;
          pbVar19[1] = bVar1 + 1;
          pbVar19[2] = bVar3;
          param_6_after_write = param_6_after_write + 1;
        }
        uVar13 = local_c & 3;
        pbVar19 = pbVar18;
        if ((uVar13 == 0) &&
           ((sVar4 = *(short *)(local_10 + 2 + param_2 * 2), sVar4 == 0 || (iVar22 + 4 < (int)sVar4)
            ))) {
          pbVar19 = pbVar18 + 4;
          *(short *)(local_10 + 2 + param_2 * 2) = sVar21 + 4;
          *pbVar18 = bVar2 + 1;
          pbVar18[1] = bVar1 + 1;
          pbVar18[2] = bVar3;
          param_6_after_write = param_6_after_write + 1;
        }
        iVar22 = iVar22 + 5;
        sVar21 = (short)iVar22;
        if (uVar15 == 0) {
          local_8 = local_10 + local_14 * 2;
          pbVar18 = pbVar19;
          if (uVar9 == 0) {
            psVar12 = (short *)(local_8 - (param_2 * 2 + 2));
            sVar4 = *psVar12;
            if ((sVar4 == 0) || (iVar22 < sVar4)) {
              *psVar12 = sVar21;
              pbVar18 = pbVar19 + 4;
              *pbVar19 = bVar2 - 1;
              pbVar19[1] = bVar1 - 1;
              pbVar19[2] = bVar3 + 1;
              param_6_after_write = param_6_after_write + 1;
            }
          }
          pbVar20 = pbVar18;
          if (uVar10 == 0) {
            iVar17 = local_8 + param_2 * -2;
            sVar4 = *(short *)(iVar17 + 2);
            if ((sVar4 == 0) || (iVar22 < sVar4)) {
              *(short *)(iVar17 + 2) = sVar21;
              pbVar20 = pbVar18 + 4;
              *pbVar18 = bVar2 + 1;
              pbVar18[1] = bVar1 - 1;
              pbVar18[2] = bVar3 + 1;
              param_6_after_write = param_6_after_write + 1;
            }
          }
          if ((uVar11 == 0) &&
             ((sVar4 = *(short *)(local_8 + -2 + param_2 * 2), sVar4 == 0 || (iVar22 < sVar4)))) {
            *(short *)(local_8 + -2 + param_2 * 2) = sVar21;
            *pbVar20 = bVar2 - 1;
            pbVar20[1] = bVar1 + 1;
            pbVar20[2] = bVar3 + 1;
            pbVar20 = pbVar20 + 4;
            param_6_after_write = param_6_after_write + 1;
          }
          pbVar19 = pbVar20;
          if ((uVar13 == 0) &&
             ((sVar4 = *(short *)(local_8 + 2 + param_2 * 2), sVar4 == 0 || (iVar22 < sVar4)))) {
            *(short *)(local_8 + 2 + param_2 * 2) = sVar21;
            pbVar19 = pbVar20 + 4;
            *pbVar20 = bVar2 + 1;
            pbVar20[1] = bVar1 + 1;
            pbVar20[2] = bVar3 + 1;
            param_6_after_write = param_6_after_write + 1;
          }
        }
        if (uVar14 == 0) {
          local_8 = local_10 + local_14 * -2;
          pbVar18 = pbVar19;
          if (uVar9 == 0) {
            psVar12 = (short *)(local_8 - (param_2 * 2 + 2));
            sVar4 = *psVar12;
            if ((sVar4 == 0) || (iVar22 < sVar4)) {
              *psVar12 = sVar21;
              pbVar18 = pbVar19 + 4;
              *pbVar19 = bVar2 - 1;
              pbVar19[1] = bVar1 - 1;
              pbVar19[2] = bVar3 - 1;
              param_6_after_write = param_6_after_write + 1;
            }
          }
          pbVar20 = pbVar18;
          if (uVar10 == 0) {
            iVar17 = local_8 + param_2 * -2;
            sVar4 = *(short *)(iVar17 + 2);
            if ((sVar4 == 0) || (iVar22 < sVar4)) {
              *(short *)(iVar17 + 2) = sVar21;
              pbVar20 = pbVar18 + 4;
              *pbVar18 = bVar2 + 1;
              pbVar18[1] = bVar1 - 1;
              pbVar18[2] = bVar3 - 1;
              param_6_after_write = param_6_after_write + 1;
            }
          }
          if ((uVar11 == 0) &&
             ((sVar4 = *(short *)(local_8 + -2 + param_2 * 2), sVar4 == 0 || (iVar22 < sVar4)))) {
            *(short *)(local_8 + -2 + param_2 * 2) = sVar21;
            *pbVar20 = bVar2 - 1;
            pbVar20[1] = bVar1 + 1;
            pbVar20[2] = bVar3 - 1;
            pbVar20 = pbVar20 + 4;
            param_6_after_write = param_6_after_write + 1;
          }
          pbVar19 = pbVar20;
          if ((uVar13 == 0) &&
             ((sVar4 = *(short *)(local_8 + 2 + param_2 * 2), sVar4 == 0 || (iVar22 < sVar4)))) {
            *(short *)(local_8 + 2 + param_2 * 2) = sVar21;
            pbVar19 = pbVar20 + 4;
            *pbVar20 = bVar2 + 1;
            pbVar20[1] = bVar1 + 1;
            pbVar20[2] = bVar3 - 1;
            param_6_after_write = param_6_after_write + 1;
          }
        }
        if ((((((-1 < param_8) && (-1 < param_9)) && (-1 < param_10)) &&
             (((int)(uVar16 - 1) <= param_8 && (param_8 <= (int)(uVar16 + 1))))) &&
            (((int)(uVar7 - 1) <= param_9 &&
             ((param_9 < (int)(uVar7 + 1) && ((int)(uVar8 - 1) <= param_10)))))) &&
           (param_10 < (int)(uVar8 + 1))) {
          bVar5 = true;
        }
        local_2c = local_2c + 1;
      } while (local_2c < local_30);
      if ((bVar5) || (param_6_after_write == 0)) break;
      local_1c = local_18;
      local_30 = param_6_after_write;
      local_18 = pbVar6;
    }
  }
  st::fn_006AB060(&local_24);
  return local_34;
}

// 006A6F00 FUN_006a6f00
#line 4 "decomp/ST.exe/functions/006A6F00/decomp.c"
undefined4
st::fn_006A6F00(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  int iVar17;
  short *psVar18;
  int iVar19;
  int local_4c;
  int local_48;
  undefined4 local_1c;
  byte *local_18;
  int local_14;
  byte *local_10;
  byte *local_c;
  int local_8;

  local_8 = param_2 * param_3;
  iVar7 = param_2 * param_6 + param_5 + local_8 * param_7;
  local_1c = 0;
  if (*(short *)(param_1 + iVar7 * 2) < 0) {
    return 0;
  }
  iVar17 = (param_2 + param_3) * param_4;
  local_14 = iVar17 * 2;
  local_18 = (byte *)st::fn_006BFB70(iVar17 * 0x10);
  if (local_18 == nullptr) {
LAB_006a76ae:
    local_1c = 0xfffffffe;
  }
  else {
    local_c = local_18 + iVar17 * 8;
    *(undefined2 *)(param_1 + iVar7 * 2) = 0;
    *local_c = (byte)param_5;
    local_c[1] = (byte)param_6;
    local_4c = 1;
    local_c[2] = (byte)param_7;
    local_10 = local_18;
    while( true ) {
      auto param_5_after_write = 0; /* compiler stack-slot lifetime split */
      local_48 = 0;
      pbVar16 = local_10;
      if (local_4c < 1) break;
      do {
        bVar1 = local_c[local_48 * 4 + 2];
        uVar9 = (uint)bVar1;
        bVar2 = local_c[local_48 * 4 + 1];
        uVar8 = (uint)bVar2;
        bVar3 = local_c[local_48 * 4];
        uVar10 = (uint)bVar3;
        iVar7 = param_1 + (uVar8 * param_2 + uVar10 + uVar9 * local_8) * 2;
        if (local_14 < param_5_after_write + 0x1a) {
          local_14 = local_14 + 0x80;
          pbVar6 = (byte *)st::fn_006BFB50((int *)local_18,local_14 * 8);
          if (pbVar6 == nullptr) goto LAB_006a76ae;
          local_10 = pbVar6 + ((int)local_10 - (int)local_18 >> 2) * 4;
          local_c = pbVar6 + ((int)local_c - (int)local_18 >> 2) * 4;
          if (local_10 == pbVar6) {
            local_c = local_c + 0x200;
          }
          else {
            local_10 = local_10 + 0x200;
          }
          pbVar16 = local_10 + param_5_after_write * 4;
          local_18 = pbVar6;
          st::fn_0072DA70
                    ((undefined4 *)(pbVar6 + local_14 * 4),
                     (AnonPointee_TLOBaseTy_0607 *)(pbVar6 + local_14 * 4 + -0x200),
                     local_14 * 4 - 0x200);
        }
        pbVar6 = local_c;
        auto param_6_after_write = 0xff; /* compiler stack-slot lifetime split */
        if ((int)uVar10 < param_2 + -1) {
          param_6_after_write = 0xfe;
        }
        if (uVar10 != 0) {
          param_6_after_write = param_6_after_write & 0xffffffef;
        }
        if ((int)uVar8 < param_3 + -1) {
          param_6_after_write = param_6_after_write & 0xfffffffd;
        }
        if (uVar8 != 0) {
          param_6_after_write = param_6_after_write & 0xffffffdf;
        }
        bVar4 = (int)uVar9 < param_4 + -1;
        if (bVar4) {
          param_6_after_write = param_6_after_write & 0xfffffffb;
        }
        bVar5 = uVar9 != 0;
        if (bVar5) {
          param_6_after_write = param_6_after_write & 0xffffffbf;
        }
        uVar8 = param_6_after_write & 0x10;
        if ((uVar8 == 0) && (*(short *)(iVar7 + -2) < 0)) {
          *(undefined2 *)(iVar7 + -2) = 0;
          pbVar16[1] = bVar2;
          *pbVar16 = bVar3 - 1;
          pbVar16[2] = bVar1;
          pbVar16 = pbVar16 + 4;
          param_5_after_write = param_5_after_write + 1;
        }
        uVar9 = param_6_after_write & 1;
        if ((uVar9 == 0) && (*(short *)(iVar7 + 2) < 0)) {
          *(undefined2 *)(iVar7 + 2) = 0;
          pbVar16[1] = bVar2;
          *pbVar16 = bVar3 + 1;
          pbVar16[2] = bVar1;
          pbVar16 = pbVar16 + 4;
          param_5_after_write = param_5_after_write + 1;
        }
        uVar10 = param_6_after_write & 0x20;
        if ((uVar10 == 0) && (psVar18 = (short *)(iVar7 + param_2 * -2), *psVar18 < 0)) {
          *psVar18 = 0;
          *pbVar16 = bVar3;
          pbVar16[1] = bVar2 - 1;
          pbVar16[2] = bVar1;
          pbVar16 = pbVar16 + 4;
          param_5_after_write = param_5_after_write + 1;
        }
        uVar11 = param_6_after_write & 2;
        if ((uVar11 == 0) && (*(short *)(iVar7 + param_2 * 2) < 0)) {
          *(undefined2 *)(iVar7 + param_2 * 2) = 0;
          *pbVar16 = bVar3;
          pbVar16[1] = bVar2 + 1;
          pbVar16[2] = bVar1;
          pbVar16 = pbVar16 + 4;
          param_5_after_write = param_5_after_write + 1;
        }
        if ((bVar5) && (psVar18 = (short *)(iVar7 + local_8 * -2), *psVar18 < 0)) {
          *psVar18 = 0;
          *pbVar16 = bVar3;
          pbVar16[2] = bVar1 - 1;
          pbVar16[1] = bVar2;
          pbVar16 = pbVar16 + 4;
          param_5_after_write = param_5_after_write + 1;
        }
        if ((bVar4) && (*(short *)(iVar7 + local_8 * 2) < 0)) {
          *(undefined2 *)(iVar7 + local_8 * 2) = 0;
          *pbVar16 = bVar3;
          pbVar16[2] = bVar1 + 1;
          pbVar16[1] = bVar2;
          pbVar16 = pbVar16 + 4;
          param_5_after_write = param_5_after_write + 1;
        }
        uVar12 = param_6_after_write & 0x30;
        if ((uVar12 == 0) && (psVar18 = (short *)(iVar7 - (param_2 * 2 + 2)), *psVar18 < 0)) {
          *psVar18 = 0;
          pbVar16[2] = bVar1;
          *pbVar16 = bVar3 - 1;
          pbVar16[1] = bVar2 - 1;
          pbVar16 = pbVar16 + 4;
          param_5_after_write = param_5_after_write + 1;
        }
        uVar13 = param_6_after_write & 0x21;
        if ((uVar13 == 0) && (iVar17 = iVar7 + param_2 * -2, *(short *)(iVar17 + 2) < 0)) {
          *(undefined2 *)(iVar17 + 2) = 0;
          pbVar16[2] = bVar1;
          *pbVar16 = bVar3 + 1;
          pbVar16[1] = bVar2 - 1;
          pbVar16 = pbVar16 + 4;
          param_5_after_write = param_5_after_write + 1;
        }
        uVar14 = param_6_after_write & 0x12;
        if ((uVar14 == 0) && (*(short *)(iVar7 + -2 + param_2 * 2) < 0)) {
          *(undefined2 *)(iVar7 + -2 + param_2 * 2) = 0;
          pbVar16[2] = bVar1;
          *pbVar16 = bVar3 - 1;
          pbVar16[1] = bVar2 + 1;
          pbVar16 = pbVar16 + 4;
          param_5_after_write = param_5_after_write + 1;
        }
        uVar15 = param_6_after_write & 3;
        if ((uVar15 == 0) && (*(short *)(iVar7 + 2 + param_2 * 2) < 0)) {
          *(undefined2 *)(iVar7 + 2 + param_2 * 2) = 0;
          pbVar16[2] = bVar1;
          *pbVar16 = bVar3 + 1;
          pbVar16[1] = bVar2 + 1;
          pbVar16 = pbVar16 + 4;
          param_5_after_write = param_5_after_write + 1;
        }
        if (bVar4) {
          iVar17 = iVar7 + local_8 * 2;
          if ((uVar8 == 0) && (*(short *)(iVar17 + -2) < 0)) {
            *(undefined2 *)(iVar17 + -2) = 0;
            pbVar16[1] = bVar2;
            *pbVar16 = bVar3 - 1;
            pbVar16[2] = bVar1 + 1;
            pbVar16 = pbVar16 + 4;
            param_5_after_write = param_5_after_write + 1;
          }
          if ((uVar9 == 0) && (*(short *)(iVar17 + 2) < 0)) {
            *(undefined2 *)(iVar17 + 2) = 0;
            pbVar16[1] = bVar2;
            *pbVar16 = bVar3 + 1;
            pbVar16[2] = bVar1 + 1;
            pbVar16 = pbVar16 + 4;
            param_5_after_write = param_5_after_write + 1;
          }
          if ((uVar11 == 0) && (*(short *)(iVar17 + param_2 * 2) < 0)) {
            *(undefined2 *)(iVar17 + param_2 * 2) = 0;
            *pbVar16 = bVar3;
            pbVar16[1] = bVar2 + 1;
            pbVar16[2] = bVar1 + 1;
            pbVar16 = pbVar16 + 4;
            param_5_after_write = param_5_after_write + 1;
          }
          if ((uVar10 == 0) && (psVar18 = (short *)(iVar17 + param_2 * -2), *psVar18 < 0)) {
            *psVar18 = 0;
            *pbVar16 = bVar3;
            pbVar16[1] = bVar2 - 1;
            pbVar16[2] = bVar1 + 1;
            pbVar16 = pbVar16 + 4;
            param_5_after_write = param_5_after_write + 1;
          }
        }
        if (bVar5) {
          iVar17 = iVar7 + local_8 * -2;
          if ((uVar8 == 0) && (*(short *)(iVar17 + -2) < 0)) {
            *(undefined2 *)(iVar17 + -2) = 0;
            pbVar16[1] = bVar2;
            *pbVar16 = bVar3 - 1;
            pbVar16[2] = bVar1 - 1;
            pbVar16 = pbVar16 + 4;
            param_5_after_write = param_5_after_write + 1;
          }
          if ((uVar9 == 0) && (*(short *)(iVar17 + 2) < 0)) {
            *(undefined2 *)(iVar17 + 2) = 0;
            pbVar16[1] = bVar2;
            *pbVar16 = bVar3 + 1;
            pbVar16[2] = bVar1 - 1;
            pbVar16 = pbVar16 + 4;
            param_5_after_write = param_5_after_write + 1;
          }
          if ((uVar10 == 0) && (psVar18 = (short *)(iVar17 + param_2 * -2), *psVar18 < 0)) {
            *psVar18 = 0;
            *pbVar16 = bVar3;
            pbVar16[1] = bVar2 - 1;
            pbVar16[2] = bVar1 - 1;
            pbVar16 = pbVar16 + 4;
            param_5_after_write = param_5_after_write + 1;
          }
          if ((uVar11 == 0) && (*(short *)(iVar17 + param_2 * 2) < 0)) {
            *(undefined2 *)(iVar17 + param_2 * 2) = 0;
            *pbVar16 = bVar3;
            pbVar16[1] = bVar2 + 1;
            pbVar16[2] = bVar1 - 1;
            pbVar16 = pbVar16 + 4;
            param_5_after_write = param_5_after_write + 1;
          }
        }
        if (bVar4) {
          iVar17 = iVar7 + local_8 * 2;
          if ((uVar12 == 0) && (psVar18 = (short *)(iVar17 - (param_2 * 2 + 2)), *psVar18 < 0)) {
            *psVar18 = 0;
            *pbVar16 = bVar3 - 1;
            pbVar16[1] = bVar2 - 1;
            pbVar16[2] = bVar1 + 1;
            pbVar16 = pbVar16 + 4;
            param_5_after_write = param_5_after_write + 1;
          }
          if ((uVar13 == 0) && (iVar19 = iVar17 + param_2 * -2, *(short *)(iVar19 + 2) < 0)) {
            *(undefined2 *)(iVar19 + 2) = 0;
            *pbVar16 = bVar3 + 1;
            pbVar16[1] = bVar2 - 1;
            pbVar16[2] = bVar1 + 1;
            pbVar16 = pbVar16 + 4;
            param_5_after_write = param_5_after_write + 1;
          }
          if ((uVar14 == 0) && (*(short *)(iVar17 + -2 + param_2 * 2) < 0)) {
            *(undefined2 *)(iVar17 + -2 + param_2 * 2) = 0;
            *pbVar16 = bVar3 - 1;
            pbVar16[1] = bVar2 + 1;
            pbVar16[2] = bVar1 + 1;
            pbVar16 = pbVar16 + 4;
            param_5_after_write = param_5_after_write + 1;
          }
          if ((uVar15 == 0) && (*(short *)(iVar17 + 2 + param_2 * 2) < 0)) {
            *(undefined2 *)(iVar17 + 2 + param_2 * 2) = 0;
            *pbVar16 = bVar3 + 1;
            pbVar16[1] = bVar2 + 1;
            pbVar16[2] = bVar1 + 1;
            pbVar16 = pbVar16 + 4;
            param_5_after_write = param_5_after_write + 1;
          }
        }
        if (bVar5) {
          iVar7 = iVar7 + local_8 * -2;
          if ((uVar12 == 0) && (psVar18 = (short *)(iVar7 - (param_2 * 2 + 2)), *psVar18 < 0)) {
            *psVar18 = 0;
            *pbVar16 = bVar3 - 1;
            pbVar16[1] = bVar2 - 1;
            pbVar16[2] = bVar1 - 1;
            pbVar16 = pbVar16 + 4;
            param_5_after_write = param_5_after_write + 1;
          }
          if ((uVar13 == 0) && (iVar17 = iVar7 + param_2 * -2, *(short *)(iVar17 + 2) < 0)) {
            *(undefined2 *)(iVar17 + 2) = 0;
            *pbVar16 = bVar3 + 1;
            pbVar16[1] = bVar2 - 1;
            pbVar16[2] = bVar1 - 1;
            pbVar16 = pbVar16 + 4;
            param_5_after_write = param_5_after_write + 1;
          }
          if ((uVar14 == 0) && (*(short *)(iVar7 + -2 + param_2 * 2) < 0)) {
            *(undefined2 *)(iVar7 + -2 + param_2 * 2) = 0;
            *pbVar16 = bVar3 - 1;
            pbVar16[1] = bVar2 + 1;
            pbVar16[2] = bVar1 - 1;
            pbVar16 = pbVar16 + 4;
            param_5_after_write = param_5_after_write + 1;
          }
          if ((uVar15 == 0) && (*(short *)(iVar7 + 2 + param_2 * 2) < 0)) {
            *(undefined2 *)(iVar7 + 2 + param_2 * 2) = 0;
            pbVar16[1] = bVar2 + 1;
            *pbVar16 = bVar3 + 1;
            pbVar16[2] = bVar1 - 1;
            pbVar16 = pbVar16 + 4;
            param_5_after_write = param_5_after_write + 1;
          }
        }
        local_48 = local_48 + 1;
      } while (local_48 < local_4c);
      local_4c = param_5_after_write;
      if (param_5_after_write == 0) break;
      local_c = local_10;
      local_10 = pbVar6;
    }
  }
  st::fn_006AB060(&local_18);
  return local_1c;
}

// 006A76D0 FUN_006a76d0
#line 4 "decomp/ST.exe/functions/006A76D0/decomp.c"
undefined4
st::fn_006A76D0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int *param_10,int *param_11,int *param_12)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar6;
  int iVar7;
  int iVar5;
  short *psVar8;
  int iVar9;
  short *psVar10;
  short *local_30;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;

  iVar2 = param_2 * param_3;
  local_10 = 0x7fffffff;
  local_c = 0x7fffffff;
  local_1c = (param_8 * 3) / 5;
  local_28 = 0;
  if (param_9 < local_1c) {
    return 0;
  }
  do {
    local_20 = param_5 - local_1c;
    if (local_20 < 0) {
      local_20 = 0;
    }
    local_24 = param_6 - local_1c;
    if (local_24 < 0) {
      local_24 = 0;
    }
    local_30 = (short *)(param_7 - local_1c);
    if ((int)local_30 < 0) {
      local_30 = nullptr;
    }
    local_14 = local_1c + param_5;
    if (param_2 <= local_14) {
      local_14 = param_2 + -1;
    }
    local_18 = local_1c + param_6;
    if (param_3 <= local_18) {
      local_18 = param_3 + -1;
    }
    iVar3 = local_1c + param_7;
    if (param_4 <= iVar3) {
      iVar3 = param_4 + -1;
    }
    psVar10 = local_30;
    if (local_1c <= param_7 - (int)local_30) {
      psVar10 = (short *)((int)local_30 + 1);
    }
    iVar4 = iVar3;
    if (local_1c <= iVar3 - param_7) {
      iVar4 = iVar3 + -1;
    }
    if ((int)psVar10 <= iVar4) {
      iVar6 = (int)psVar10 * iVar2;
      do {
        iVar9 = local_18;
        if ((local_1c <= local_18 - param_6) && (local_1c != 0)) {
          iVar9 = local_18 + -1;
        }
        iVar7 = local_14;
        if (local_1c <= local_14 - param_5) {
          psVar8 = (short *)(param_1 + (iVar9 * param_2 + iVar6 + local_14) * 2);
          iVar7 = st::fn_006AAE60(local_14,iVar9,(int)psVar10,param_5,param_6,param_7);
          for (; local_24 <= iVar9; iVar9 = iVar9 + -1) {
            sVar1 = *psVar8;
            if ((((0 < sVar1) && (iVar7 <= local_c)) && (param_8 <= iVar7 / 3)) &&
               ((iVar7 / 3 <= param_9 && ((iVar7 < local_c || (sVar1 < local_10)))))) {
              local_10 = (int)sVar1;
              local_28 = 1;
              *param_10 = local_14;
              *param_11 = iVar9;
              *param_12 = (int)psVar10;
              local_c = iVar7;
            }
            psVar8 = psVar8 + -param_2;
            if (param_6 < iVar9) {
              iVar7 = iVar7 + -1;
            }
            else {
              iVar7 = iVar7 + 1;
            }
          }
          iVar7 = local_14 + -1;
        }
        if (local_1c != 0) {
          iVar9 = local_24;
          if (local_1c <= param_6 - local_24) {
            psVar8 = (short *)(param_1 + (local_24 * param_2 + iVar6 + iVar7) * 2);
            iVar9 = st::fn_006AAE60(iVar7,local_24,(int)psVar10,param_5,param_6,param_7);
            for (; local_20 <= iVar7; iVar7 = iVar7 + -1) {
              if ((((0 < *psVar8) && (iVar9 <= local_c)) &&
                  ((param_8 <= iVar9 / 3 && (iVar9 / 3 <= param_9)))) &&
                 ((iVar9 < local_c || (*psVar8 < local_10)))) {
                local_28 = 1;
                local_10 = (int)*psVar8;
                *param_10 = iVar7;
                *param_11 = local_24;
                *param_12 = (int)psVar10;
                local_c = iVar9;
              }
              psVar8 = psVar8 + -1;
              if (param_5 < iVar7) {
                iVar9 = iVar9 + -1;
              }
              else {
                iVar9 = iVar9 + 1;
              }
            }
            iVar9 = local_24 + 1;
          }
          iVar7 = local_20;
          if (local_1c <= param_5 - local_20) {
            psVar8 = (short *)(param_1 + (iVar9 * param_2 + iVar6 + local_20) * 2);
            iVar7 = st::fn_006AAE60(local_20,iVar9,(int)psVar10,param_5,param_6,param_7);
            for (; iVar9 <= local_18; iVar9 = iVar9 + 1) {
              sVar1 = *psVar8;
              if (((((0 < sVar1) && (iVar7 <= local_c)) && (param_8 <= iVar7 / 3)) &&
                  (iVar7 / 3 <= param_9)) && ((iVar7 < local_c || (sVar1 < local_10)))) {
                local_10 = (int)sVar1;
                local_28 = 1;
                *param_10 = local_20;
                *param_11 = iVar9;
                *param_12 = (int)psVar10;
                local_c = iVar7;
              }
              psVar8 = psVar8 + param_2;
              if (iVar9 < param_6) {
                iVar7 = iVar7 + -1;
              }
              else {
                iVar7 = iVar7 + 1;
              }
            }
            iVar7 = local_20 + 1;
          }
          if (local_1c <= local_18 - param_6) {
            psVar8 = (short *)(param_1 + (local_18 * param_2 + iVar6 + iVar7) * 2);
            iVar9 = st::fn_006AAE60(iVar7,local_18,(int)psVar10,param_5,param_6,param_7);
            for (; iVar7 <= local_14; iVar7 = iVar7 + 1) {
              sVar1 = *psVar8;
              if ((((0 < sVar1) && (iVar9 <= local_c)) &&
                  ((param_8 <= iVar9 / 3 && (iVar9 / 3 <= param_9)))) &&
                 ((iVar9 < local_c || (sVar1 < local_10)))) {
                local_10 = (int)sVar1;
                *param_10 = iVar7;
                *param_11 = local_18;
                local_28 = 1;
                *param_12 = (int)psVar10;
                local_c = iVar9;
              }
              psVar8 = psVar8 + 1;
              if (iVar7 < param_5) {
                iVar9 = iVar9 + -1;
              }
              else {
                iVar9 = iVar9 + 1;
              }
            }
          }
        }
        psVar10 = (short *)((int)psVar10 + 1);
        iVar6 = iVar6 + iVar2;
      } while ((int)psVar10 <= iVar4);
    }
    if (local_1c != 0) {
      if ((local_1c <= param_7 - (int)local_30) && (local_24 <= local_18)) {
        psVar10 = (short *)(param_1 + (local_24 * param_2 + (int)local_30 * iVar2 + local_20) * 2);
        iVar4 = local_24;
        do {
          iVar5 = st::fn_006AAE60(local_20,iVar4,(int)local_30,param_5,param_6,param_7);
          psVar8 = psVar10;
          for (iVar6 = local_20; iVar6 <= local_14; iVar6 = iVar6 + 1) {
            sVar1 = *psVar8;
            if ((((0 < sVar1) && (iVar5 <= local_c)) && (param_8 <= iVar5 / 3)) &&
               ((iVar5 / 3 <= param_9 && ((iVar5 < local_c || (sVar1 < local_10)))))) {
              local_10 = (int)sVar1;
              *param_10 = iVar6;
              *param_11 = iVar4;
              local_28 = 1;
              *param_12 = (int)local_30;
              local_c = iVar5;
            }
            psVar8 = psVar8 + 1;
            if (iVar6 < param_5) {
              iVar5 = iVar5 + -1;
            }
            else {
              iVar5 = iVar5 + 1;
            }
          }
          iVar4 = iVar4 + 1;
          psVar10 = psVar10 + param_2;
        } while (iVar4 <= local_18);
      }
      if ((local_1c <= iVar3 - param_7) && (local_24 <= local_18)) {
        local_30 = (short *)(param_1 + (local_24 * param_2 + iVar3 * iVar2 + local_20) * 2);
        do {
          iVar4 = st::fn_006AAE60(local_20,local_24,iVar3,param_5,param_6,param_7);
          psVar10 = local_30;
          for (iVar6 = local_20; iVar6 <= local_14; iVar6 = iVar6 + 1) {
            sVar1 = *psVar10;
            if ((((0 < sVar1) && (iVar4 <= local_c)) && (param_8 <= iVar4 / 3)) &&
               ((iVar4 / 3 <= param_9 && ((iVar4 < local_c || (sVar1 < local_10)))))) {
              local_10 = (int)sVar1;
              *param_10 = iVar6;
              *param_11 = local_24;
              local_28 = 1;
              *param_12 = iVar3;
              local_c = iVar4;
            }
            psVar10 = psVar10 + 1;
            if (iVar6 < param_5) {
              iVar4 = iVar4 + -1;
            }
            else {
              iVar4 = iVar4 + 1;
            }
          }
          local_24 = local_24 + 1;
          local_30 = local_30 + param_2;
        } while (local_24 <= local_18);
      }
    }
    local_1c = local_1c + 1;
  } while (local_1c <= param_9);
  return local_28;
}

// 006A7D50 FUN_006a7d50
#line 4 "decomp/ST.exe/functions/006A7D50/decomp.c"
int st::fn_006A7D50(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                ,int param_8,int param_9,int param_10,undefined4 *param_11,int param_12,
                uint param_13)

{
  int iVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  undefined4 *local_28;
  uint local_24;
  int local_20;
  ushort *local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar11 = param_2 * param_3;
  local_10 = param_10;
  local_30 = param_8;
  sVar2 = *(short *)(param_1 + (param_2 * param_9 + param_8 + iVar11 * param_10) * 2);
  local_8 = param_12 + -1;
  puVar12 = param_11 + local_8 * 0x12;
  local_c = param_9;
  *(short *)puVar12 = (short)param_8;
  STField<short>(puVar12,2) = (short)param_9;
  *(short *)(puVar12 + 1) = (short)param_10;
  STField<undefined2>(puVar12,6) = 0;
  local_40 = 0;
  local_44 = 0;
  local_18 = 0;
  STField<undefined2>(puVar12,0xe) = 0x7fff;
  uVar6 = st::fn_006A6360(param_5,param_6,param_7,param_8,param_9,param_10);
  local_2c = st::fn_006A6320(uVar6);
  if (((param_8 == param_5) && (param_9 == param_6)) && (param_10 == param_7)) {
    local_8 = local_8 + -1;
    puVar12 = param_11 + local_8 * 0x12;
    *(short *)puVar12 = (short)param_5;
    STField<undefined2>(puVar12,2) = (undefined2)param_6;
    *(undefined2 *)(puVar12 + 1) = (undefined2)param_7;
    STField<short>(puVar12,6) = sVar2;
    STField<undefined2>(puVar12,0xe) = 0x7fff;
LAB_006a8234:
    if (0 < local_8) {
      puVar12 = param_11 + local_8 * 0x12;
      for (iVar11 = ((param_12 - local_8) * 9 & 0x1fffffffU) << 1; iVar11 != 0; iVar11 = iVar11 + -1
          ) {
        *param_11 = *puVar12;
        puVar12 = puVar12 + 1;
        param_11 = param_11 + 1;
      }
      for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
        *(undefined1 *)param_11 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        param_11 = (undefined4 *)((int)param_11 + 1);
      }
    }
    return (param_12 - local_8) + -1;
  }
  uVar7 = param_13 & 4;
  local_28 = puVar12;
  local_14 = local_2c;
  do {
    auto param_13_after_write = 30000; /* compiler stack-slot lifetime split */
    iVar1 = param_1 + (local_c * param_2 + local_30 + local_10 * iVar11) * 2;
    if (uVar7 == 0) {
      uVar9 = st::fn_006A6360(param_5,param_6,param_7,local_30,local_c,local_10);
      local_34 = st::fn_006A6320(uVar9);
    }
    else {
      iVar8 = st::fn_006A6100(local_30,local_c,local_10,param_8,param_9,param_10,(int *)&local_4c);
      if (iVar8 < 0x1a) {
        local_34 = (uint)(&SHORT_007ed576)[iVar8 * 4];
        local_14 = local_34;
      }
      else {
        local_34 = local_14;
      }
    }
    local_24 = 0;
    local_1c = (ushort *)&SHORT_007ed576;
    local_3c = reinterpret_cast<int *>(&DAT_007ed640);
    do {
      iVar8 = (int)(short)local_1c[-3];
      local_20 = local_30 + iVar8;
      if ((-1 < local_20) && (local_20 < param_2)) {
        iVar10 = (int)(short)local_1c[-2];
        local_38 = iVar10 + local_c;
        if ((-1 < local_38) && (local_38 < param_3)) {
          local_48 = local_10 + (short)local_1c[-1];
          if ((-1 < local_48) && (local_48 < param_4)) {
            uVar3 = *local_1c;
            if ((uVar3 & 1) == 0) {
              if (((uVar3 & 0x6000) == 0) || ((uVar3 & 0x9fff) == 0xffe)) {
LAB_006a80b6:
                local_4c = (uint)*(short *)(param_1 +
                                           (local_38 * param_2 + local_20 + local_48 * iVar11) * 2);
                if (((local_20 == param_5) && (local_38 == param_6)) && (local_48 == param_7)) {
                  local_2c = local_24;
                  param_13_after_write = (&DAT_007ed640)[local_24] + local_4c;
                  local_44 = local_38;
                  local_40 = local_20;
                  local_18 = local_48;
                  break;
                }
                if (0 < (int)local_4c) {
                  local_4c = local_4c + *local_3c;
                  if (((int)local_4c < (int)param_13_after_write) ||
                     ((local_4c == param_13_after_write &&
                      (((int)(short)uVar3 == local_14 || ((int)(short)uVar3 == local_34)))))) {
                    local_2c = local_24;
                    param_13_after_write = local_4c;
                    local_44 = local_38;
                    local_40 = local_20;
                    local_18 = local_48;
                  }
                }
              }
              else if ((*(ushort *)(iVar1 + (short)local_1c[-1] * iVar11 * 2) & 0xc000) != 0xc000) {
                if (iVar10 == 0) {
                  uVar4 = *(ushort *)(iVar1 + iVar8 * 2);
                }
                else {
                  uVar4 = *(ushort *)(iVar1 + iVar10 * param_2 * 2);
                }
                goto joined_r0x006a8098;
              }
            }
            else if (((*(ushort *)(iVar1 + iVar8 * 2) & 0xc000) != 0xc000) &&
                    (iVar10 = iVar10 * param_2, (*(ushort *)(iVar1 + iVar10 * 2) & 0xc000) != 0xc000
                    )) {
              if ((uVar3 & 0x4000) == 0) {
                if ((uVar3 & 0x2000) == 0) goto LAB_006a80b6;
                if ((((*(ushort *)(iVar1 + iVar11 * 2) & 0xc000) != 0xc000) &&
                    ((*(ushort *)(iVar1 + (iVar8 + iVar11) * 2) & 0xc000) != 0xc000)) &&
                   ((*(ushort *)(iVar1 + (iVar10 + iVar11) * 2) & 0xc000) != 0xc000)) {
                  uVar4 = *(ushort *)(iVar1 + (iVar10 + iVar8) * 2);
                  goto joined_r0x006a8098;
                }
              }
              else if ((((*(ushort *)(iVar1 + iVar11 * -2) & 0xc000) != 0xc000) &&
                       ((*(ushort *)(iVar1 + (iVar8 - iVar11) * 2) & 0xc000) != 0xc000)) &&
                      ((*(ushort *)(iVar1 + (iVar10 - iVar11) * 2) & 0xc000) != 0xc000)) {
                uVar4 = *(ushort *)(iVar1 + (iVar10 + iVar8) * 2);
joined_r0x006a8098:
                if ((uVar4 & 0xc000) != 0xc000) goto LAB_006a80b6;
              }
            }
          }
        }
      }
      local_3c = local_3c + 1;
      local_24 = local_24 + 1;
      local_1c = local_1c + 4;
    } while ((int)local_3c < 0x7ed6a8);
    sVar5 = (&SHORT_007ed576)[local_2c * 4];
    if (((int)sVar5 != local_14) && (local_8 != param_12 + -1)) {
      local_8 = local_8 + -1;
      *(undefined2 *)(local_28 + -0x12) = (undefined2)local_30;
      *(undefined2 *)((int)local_28 + -0x46) = (undefined2)local_c;
      *(undefined2 *)(local_28 + -0x11) = (undefined2)local_10;
      *(undefined2 *)((int)local_28 + -0x42) = STField<undefined2>(local_28,6);
      local_28 = local_28 + -0x12;
    }
    local_8 = local_8 + -1;
    *(short *)(local_28 + -0x12) = (short)local_40;
    *(short *)((int)local_28 + -0x46) = (short)local_44;
    *(undefined2 *)(local_28 + -0x11) = (undefined2)local_18;
    *(short *)((int)local_28 + -0x42) =
         (*(short *)(&DAT_007ed640 + local_2c) - (short)param_13_after_write) + sVar2;
    *(undefined2 *)((int)local_28 + -0x3a) = 0x7fff;
    if (((local_40 == param_5) && (local_44 == param_6)) && (local_18 == param_7))
    goto LAB_006a8234;
    local_10 = local_18;
    local_30 = local_40;
    local_28 = local_28 + -0x12;
    local_14 = (int)sVar5;
    local_c = local_44;
  } while( true );
}

// 006AACB0 FUN_006aacb0
#line 4 "decomp/ST.exe/functions/006AACB0/decomp.c"
void st::fn_006AACB0(void)

{
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = (undefined *)&DAT_0079d860;
  puStack_10 = (byte *)&st_image_0072D964;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  /* ST_CALLSITE[006AACDB]: CALL dword ptr [0x0085bb98] */
  st::external_0000001B((LPSYSTEM_INFO)&DAT_00858e00);
  local_8 = 0;
  st::fn_006AAD10();
  ExceptionList = local_14;
  return;
}

// 006AAD10 FUN_006aad10
#line 1 "decomp/ST.exe/functions/006AAD10/decomp.c"

/* WARNING: Removing unreachable block (ram,0x006aad6b) */
/* WARNING: Removing unreachable block (ram,0x006aad47) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_006AAD10(void)

{
  int *piVar1;
  uint uVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  byte in_ID;
  uint local_c;
  int local_8;

  local_8 = 0;
  local_c = 0;
  DAT_00858de0 = 0;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uVar2 = (uint)(in_ID & 1) * 0x200000 ^ 0x200000;
  if (uVar2 == (uint)(uVar2 != 0) * 0x200000) {
    piVar1 = (int *)st::pcode_cpuid_info(0);
    if ((((*piVar1 != 0) && (piVar1[1] == 0x756e6547)) && (piVar1[2] == 0x49656e69)) &&
       (piVar1[3] == 0x6c65746e)) {
      piVar1 = (int *)st::pcode_cpuid_info(1);
      local_8 = *piVar1;
      local_c = piVar1[2];
    }
  }
  DAT_00858e24 = local_8 >> 8 & 0xf;
  _DAT_00858e28 = local_8 >> 4 & 0xf;
  if (DAT_00858e24 == 6) {
    if (2 < _DAT_00858e28) {
      DAT_00858de0 = 2;
    }
    if (_DAT_00858e28 == 7) {
      DAT_00858de0 = DAT_00858de0 | 4;
    }
  }
  if ((local_c & 0x800000) != 0) {
    DAT_00858de0 = DAT_00858de0 | 1;
  }
  return;
}

// 006AADD0 FUN_006aadd0
#line 1 "decomp/ST.exe/functions/006AADD0/decomp.c"

int st::fn_006AADD0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  uVar3 = param_4 - param_1 >> 0x1f;
  iVar2 = (param_4 - param_1 ^ uVar3) - uVar3;
  uVar3 = param_5 - param_2 >> 0x1f;
  iVar4 = (param_5 - param_2 ^ uVar3) - uVar3;
  uVar3 = param_6 - param_3 >> 0x1f;
  iVar1 = (param_6 - param_3 ^ uVar3) - uVar3;
  if (iVar4 < iVar1) {
    if (iVar2 < iVar1) {
      iVar4 = iVar4 + iVar1 * 3 + iVar2;
    }
    else {
      iVar4 = iVar1 + iVar2 * 3 + iVar4;
    }
  }
  else if (iVar2 < iVar4) {
    if (iVar2 < iVar1) {
      iVar4 = iVar1 + iVar4 * 3 + iVar2;
    }
    else {
      iVar4 = iVar1 + iVar4 * 3 + iVar2;
    }
  }
  else {
    iVar4 = iVar1 + iVar2 * 3 + iVar4;
  }
  return iVar4 / 3;
}

// 006AAE60 FUN_006aae60
#line 1 "decomp/ST.exe/functions/006AAE60/decomp.c"

int st::fn_006AAE60(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  uVar3 = param_4 - param_1 >> 0x1f;
  iVar2 = (param_4 - param_1 ^ uVar3) - uVar3;
  uVar3 = param_5 - param_2 >> 0x1f;
  iVar4 = (param_5 - param_2 ^ uVar3) - uVar3;
  uVar3 = param_6 - param_3 >> 0x1f;
  iVar1 = (param_6 - param_3 ^ uVar3) - uVar3;
  if (iVar4 < iVar1) {
    if (iVar1 <= iVar2) {
      return iVar1 + iVar2 * 3 + iVar4;
    }
    return iVar4 + iVar1 * 3 + iVar2;
  }
  if (iVar4 <= iVar2) {
    return iVar1 + iVar2 * 3 + iVar4;
  }
  if (iVar1 <= iVar2) {
    return iVar1 + iVar4 * 3 + iVar2;
  }
  return iVar1 + iVar4 * 3 + iVar2;
}

// 006AAEF0 FUN_006aaef0
#line 4 "decomp/ST.exe/functions/006AAEF0/decomp.c"
int st::fn_006AAEF0(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = param_4 - param_1;
  iVar2 = param_5 - param_2;
  iVar3 = iVar1;
  switch(param_3 & 0xffff9fff) {
  case 0x2d:
  case 0x5a:
    iVar3 = -iVar2;
    iVar2 = iVar1;
    break;
  case 0x87:
  case 0xb4:
    iVar3 = -iVar1;
    iVar2 = -iVar2;
    break;
  case 0xe1:
  case 0x10e:
    iVar3 = iVar2;
    iVar2 = -iVar1;
  }
  if ((param_3 & 1) != 0) {
    iVar3 = (iVar3 - iVar2) * 6 + 1;
    iVar3 = (int)((ulonglong)((longlong)iVar3 * 0x55555555) >> 0x20) - iVar3;
    return (iVar3 >> 1) - (iVar3 >> 0x1f);
  }
  return iVar2 * 3;
}

// 006AB060 FreeAndNull
#line 4 "decomp/ST.exe/functions/006AB060/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006C2050 -> 006AB060 @ 006C212A

   [STUtilityFunctionApplier] free_and_null: treats its argument as the untyped address of a
   caller-owned pointer slot, frees the non-null allocation, and clears that slot; void * is
   intentional because unrelated C++ T ** values do not implicitly convert to void **
   Evidence: body pattern verified */

void st::fn_006AB060(void *slotStorage)

{
  if (*(int **)slotStorage != nullptr) {
    st::fn_00405D8A(*(int **)slotStorage);
    *(undefined4 *)slotStorage = 0;
  }
  return;
}

// 006AB090 FUN_006ab090
#line 4 "decomp/ST.exe/functions/006AB090/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006C8EC0 -> 006AB090 @ 006C8F84 | 006C8EC0 -> 006AB090 @ 006CE697 */

undefined4
st::fn_006AB090(int param_1,int param_2,Global_sub_006C8EC0_param_3Enum param_3,int param_4,int param_5
            ,int param_6,int param_7,int param_8,int param_9,int param_10)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  short sVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  ushort *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  short *psVar20;
  uint uVar21;
  int iVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  ushort uVar26;
  int iVar27;
  undefined4 local_4c;
  short *local_48;
  int local_44;
  int local_40;
  byte *local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  ushort *local_28;
  byte *local_24;
  byte *local_20;
  ushort *local_1c;
  ushort *local_18;
  uint local_14;
  uint local_10;
  int local_c;
  ushort *local_8;

  local_c = param_2 * param_3;
  local_4c = 0;
  *(undefined2 *)(param_1 + (param_2 * param_6 + param_5 + local_c * param_7) * 2) = 1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (((param_5 == param_8) && (param_6 == param_9)) && (param_7 == param_10)) {
    return 0;
  }
  sVar4 = 0;
  bVar8 = false;
  if (((param_8 < 0) || (param_9 < 0)) || (param_10 < 0)) {
    local_48 = nullptr;
  }
  else {
    local_48 = (short *)(param_1 + (param_2 * param_9 + param_8 + local_c * param_10) * 2);
    sVar4 = *local_48;
    if (sVar4 != 0) {
      *local_48 = 0;
      if (((((param_8 < 1) || (local_48[-1] != 0)) &&
           ((param_2 + -1 <= param_8 || (local_48[1] != 0)))) &&
          ((param_9 < 1 || (local_48[-param_2] != 0)))) &&
         ((((int)(param_3 - CASE_1) <= param_9 || (local_48[param_2] != 0)) &&
          (((param_10 < 1 || (local_48[-local_c] != 0)) &&
           ((param_4 + -1 <= param_10 || (local_48[local_c] != 0)))))))) {
        bVar8 = true;
      }
      else {
        bVar8 = false;
      }
    }
  }
  iVar22 = (param_2 + param_3) * param_4;
  local_34 = iVar22 * 2;
  local_38 = (byte *)st::fn_006BFB70(iVar22 * 0x10);
  if (local_38 == nullptr) {
LAB_006acc40:
    local_4c = 0xfffffffe;
  }
  else {
    local_24 = local_38 + iVar22 * 8;
    local_44 = 1;
    *local_24 = (byte)param_5;
    local_24[1] = (byte)param_6;
    local_24[2] = (byte)param_7;
    bVar9 = false;
    local_20 = local_38;
    while( true ) {
      auto param_5_after_write = 0; /* compiler stack-slot lifetime split */
      local_40 = 0;
      pbVar23 = local_20;
      if (local_44 < 1) break;
      do {
        bVar1 = local_24[local_40 * 4];
        uVar21 = (uint)bVar1;
        bVar2 = local_24[local_40 * 4 + 1];
        uVar12 = (uint)bVar2;
        bVar3 = local_24[local_40 * 4 + 2];
        uVar10 = (uint)bVar3;
        iVar22 = uVar12 * param_2 + uVar21 + local_c * uVar10;
        sVar5 = *(short *)(param_1 + iVar22 * 2);
        iVar27 = (int)sVar5;
        local_28 = (ushort *)(param_1 + iVar22 * 2);
        if (local_34 < param_5_after_write + 0x1a) {
          local_34 = local_34 + 0x80;
          pbVar11 = (byte *)st::fn_006BFB50((int *)local_38,local_34 * 8);
          if (pbVar11 == nullptr) goto LAB_006acc40;
          local_20 = pbVar11 + ((int)local_20 - (int)local_38 >> 2) * 4;
          local_24 = pbVar11 + ((int)local_24 - (int)local_38 >> 2) * 4;
          if (local_20 == pbVar11) {
            local_24 = local_24 + 0x200;
          }
          else {
            local_20 = local_20 + 0x200;
          }
          pbVar23 = local_20 + param_5_after_write * 4;
          local_38 = pbVar11;
          st::fn_0072DA70
                    ((undefined4 *)(pbVar11 + local_34 * 4),
                     (AnonPointee_TLOBaseTy_0607 *)(pbVar11 + local_34 * 4 + -0x200),
                     local_34 * 4 - 0x200);
        }
        pbVar11 = local_24;
        local_14 = 0xff;
        if ((int)uVar21 < param_2 + -1) {
          local_14 = 0xfe;
        }
        if (uVar21 != 0) {
          local_14 = local_14 & 0xffffffef;
        }
        if ((int)uVar12 < (int)(param_3 - CASE_1)) {
          local_14 = local_14 & 0xfffffffd;
        }
        if (uVar12 != 0) {
          local_14 = local_14 & 0xffffffdf;
        }
        if ((int)uVar10 < param_4 + -1) {
          local_14 = local_14 & 0xfffffffb;
        }
        if (uVar10 != 0) {
          local_14 = local_14 & 0xffffffbf;
        }
        local_30 = local_14;
        if ((local_14 & 0x33) == 0) {
          if ((local_28[-1] == 0) || (iVar27 + 3 < (int)(short)local_28[-1])) {
            local_28[-1] = sVar5 + 3;
            *pbVar23 = bVar1 - 1;
            pbVar23[1] = bVar2;
            pbVar23[2] = bVar3;
            pbVar23 = pbVar23 + 4;
            param_5_after_write = param_5_after_write + 1;
          }
          if ((local_28[1] == 0) || (iVar27 + 3 < (int)(short)local_28[1])) {
            local_28[1] = (ushort)(iVar27 + 3);
            pbVar23[1] = bVar2;
            *pbVar23 = bVar1 + 1;
            pbVar23[2] = bVar3;
            pbVar23 = pbVar23 + 4;
            param_5_after_write = param_5_after_write + 1;
          }
          local_18 = local_28 + -param_2;
          if ((*local_18 == 0) || (pbVar24 = pbVar23, iVar27 + 3 < (int)(short)*local_18)) {
            pbVar24 = pbVar23 + 4;
            *local_18 = sVar5 + 3;
            pbVar23[1] = bVar2 - 1;
            *pbVar23 = bVar1;
            pbVar23[2] = bVar3;
            param_5_after_write = param_5_after_write + 1;
          }
          if ((local_28[param_2] == 0) ||
             (pbVar23 = pbVar24, iVar27 + 3 < (int)(short)local_28[param_2])) {
            pbVar23 = pbVar24 + 4;
            local_28[param_2] = sVar5 + 3;
            pbVar24[1] = bVar2 + 1;
            *pbVar24 = bVar1;
            pbVar24[2] = bVar3;
            param_5_after_write = param_5_after_write + 1;
          }
          uVar13 = local_14 & 0x40;
          pbVar24 = pbVar23;
          if (uVar13 == 0) {
            local_8 = local_28 + -local_c;
            if ((*local_8 == 0) || (iVar27 + 3 < (int)(short)*local_8)) {
              pbVar24 = pbVar23 + 4;
              *local_8 = sVar5 + 3;
              pbVar23[1] = bVar2;
              *pbVar23 = bVar1;
              pbVar23[2] = bVar3 - 1;
              param_5_after_write = param_5_after_write + 1;
            }
          }
          uVar14 = local_14 & 4;
          pbVar23 = pbVar24;
          if ((uVar14 == 0) &&
             ((local_28[local_c] == 0 || (iVar27 + 3 < (int)(short)local_28[local_c])))) {
            pbVar23 = pbVar24 + 4;
            local_28[local_c] = sVar5 + 3;
            pbVar24[1] = bVar2;
            *pbVar24 = bVar1;
            pbVar24[2] = bVar3 + 1;
            param_5_after_write = param_5_after_write + 1;
          }
          if ((uVar14 == 0) && (local_8 = local_28 + local_c, -1 < (short)local_28[local_c])) {
            pbVar24 = pbVar23;
            if (((local_8[-1] == 0) || (iVar27 + 4 < (int)(short)local_8[-1])) &&
               ((local_28[-1] & 0xc000) != 0xc000)) {
              pbVar24 = pbVar23 + 4;
              local_8[-1] = sVar5 + 4;
              *pbVar23 = bVar1 - 1;
              pbVar23[1] = bVar2;
              pbVar23[2] = bVar3 + 1;
              param_5_after_write = param_5_after_write + 1;
            }
            pbVar23 = pbVar24;
            if (((local_8[1] == 0) || (iVar27 + 4 < (int)(short)local_8[1])) &&
               ((local_28[1] & 0xc000) != 0xc000)) {
              pbVar23 = pbVar24 + 4;
              local_8[1] = sVar5 + 4;
              *pbVar24 = bVar1 + 1;
              pbVar24[1] = bVar2;
              pbVar24[2] = bVar3 + 1;
              param_5_after_write = param_5_after_write + 1;
            }
            pbVar24 = pbVar23;
            if (((local_8[param_2] == 0) || (iVar27 + 4 < (int)(short)local_8[param_2])) &&
               ((local_28[param_2] & 0xc000) != 0xc000)) {
              pbVar24 = pbVar23 + 4;
              local_8[param_2] = sVar5 + 4;
              pbVar23[1] = bVar2 + 1;
              *pbVar23 = bVar1;
              pbVar23[2] = bVar3 + 1;
              param_5_after_write = param_5_after_write + 1;
            }
            local_1c = local_8 + -param_2;
            pbVar23 = pbVar24;
            if (((*local_1c == 0) || (iVar27 + 4 < (int)(short)*local_1c)) &&
               ((*local_18 & 0xc000) != 0xc000)) {
              pbVar23 = pbVar24 + 4;
              *local_1c = sVar5 + 4;
              pbVar24[1] = bVar2 - 1;
              *pbVar24 = bVar1;
              pbVar24[2] = bVar3 + 1;
              param_5_after_write = param_5_after_write + 1;
            }
          }
          if ((uVar13 == 0) && (local_8 = local_28 + -local_c, -1 < (short)*local_8)) {
            pbVar24 = pbVar23;
            if (((local_8[-1] == 0) || (iVar27 + 4 < (int)(short)local_8[-1])) &&
               ((local_28[-1] & 0xc000) != 0xc000)) {
              pbVar24 = pbVar23 + 4;
              local_8[-1] = sVar5 + 4;
              *pbVar23 = bVar1 - 1;
              pbVar23[1] = bVar2;
              pbVar23[2] = bVar3 - 1;
              param_5_after_write = param_5_after_write + 1;
            }
            pbVar23 = pbVar24;
            if (((local_8[1] == 0) || (iVar27 + 4 < (int)(short)local_8[1])) &&
               ((local_28[1] & 0xc000) != 0xc000)) {
              pbVar23 = pbVar24 + 4;
              local_8[1] = sVar5 + 4;
              *pbVar24 = bVar1 + 1;
              pbVar24[1] = bVar2;
              pbVar24[2] = bVar3 - 1;
              param_5_after_write = param_5_after_write + 1;
            }
            local_1c = local_8 + -param_2;
            pbVar24 = pbVar23;
            if (((*local_1c == 0) || (iVar27 + 4 < (int)(short)*local_1c)) &&
               ((*local_18 & 0xc000) != 0xc000)) {
              pbVar24 = pbVar23 + 4;
              *local_1c = sVar5 + 4;
              pbVar23[1] = bVar2 - 1;
              *pbVar23 = bVar1;
              pbVar23[2] = bVar3 - 1;
              param_5_after_write = param_5_after_write + 1;
            }
            pbVar23 = pbVar24;
            if (((local_8[param_2] == 0) || (iVar27 + 4 < (int)(short)local_8[param_2])) &&
               ((local_28[param_2] & 0xc000) != 0xc000)) {
              pbVar23 = pbVar24 + 4;
              local_8[param_2] = sVar5 + 4;
              pbVar24[1] = bVar2 + 1;
              *pbVar24 = bVar1;
              pbVar24[2] = bVar3 - 1;
              param_5_after_write = param_5_after_write + 1;
            }
          }
          puVar15 = (ushort *)((int)local_28 - (param_2 * 2 + 2));
          pbVar24 = pbVar23;
          if ((((*puVar15 == 0) || (iVar27 + 4 < (int)(short)*puVar15)) &&
              ((*local_18 & 0xc000) != 0xc000)) && ((local_28[-1] & 0xc000) != 0xc000)) {
            pbVar24 = pbVar23 + 4;
            *puVar15 = sVar5 + 4;
            *pbVar23 = bVar1 - 1;
            pbVar23[2] = bVar3;
            pbVar23[1] = bVar2 - 1;
            param_5_after_write = param_5_after_write + 1;
          }
          pbVar23 = pbVar24;
          if (((local_18[1] == 0) || (iVar27 + 4 < (int)(short)local_18[1])) &&
             (((*local_18 & 0xc000) != 0xc000 && ((local_28[1] & 0xc000) != 0xc000)))) {
            pbVar23 = pbVar24 + 4;
            local_18[1] = sVar5 + 4;
            *pbVar24 = bVar1 + 1;
            pbVar24[2] = bVar3;
            pbVar24[1] = bVar2 - 1;
            param_5_after_write = param_5_after_write + 1;
          }
          pbVar24 = pbVar23;
          if (((local_28[param_2 + -1] == 0) || (iVar27 + 4 < (int)(short)local_28[param_2 + -1]))
             && (((local_28[param_2] & 0xc000) != 0xc000 && ((local_28[-1] & 0xc000) != 0xc000)))) {
            pbVar24 = pbVar23 + 4;
            local_28[param_2 + -1] = sVar5 + 4;
            *pbVar23 = bVar1 - 1;
            pbVar23[1] = bVar2 + 1;
            pbVar23[2] = bVar3;
            param_5_after_write = param_5_after_write + 1;
          }
          local_14 = param_2 * 2 + 2;
          pbVar23 = pbVar24;
          if ((((local_28[param_2 + 1] == 0) || (iVar27 + 4 < (int)(short)local_28[param_2 + 1])) &&
              ((local_28[param_2] & 0xc000) != 0xc000)) && ((local_28[1] & 0xc000) != 0xc000)) {
            pbVar23 = pbVar24 + 4;
            local_28[param_2 + 1] = sVar5 + 4;
            *pbVar24 = bVar1 + 1;
            pbVar24[2] = bVar3;
            pbVar24[1] = bVar2 + 1;
            param_5_after_write = param_5_after_write + 1;
          }
          iVar27 = iVar27 + 5;
          uVar26 = (ushort)iVar27;
          if ((uVar14 == 0) && ((local_28[local_c] & 0xc000) != 0xc000)) {
            local_1c = (ushort *)((int)local_28 + (local_c * 2 - local_14));
            pbVar24 = pbVar23;
            if ((((*local_1c == 0) || (iVar27 < (short)*local_1c)) &&
                ((((local_28[local_c - param_2] & 0xc000) != 0xc000 &&
                  ((local_28[local_c + -1] & 0xc000) != 0xc000)) && ((*local_18 & 0xc000) != 0xc000)
                 ))) && (((local_28[-1] & 0xc000) != 0xc000 && ((*puVar15 & 0xc000) != 0xc000)))) {
              pbVar24 = pbVar23 + 4;
              *local_1c = uVar26;
              *pbVar23 = bVar1 - 1;
              pbVar23[2] = bVar3 + 1;
              pbVar23[1] = bVar2 - 1;
              param_5_after_write = param_5_after_write + 1;
            }
            puVar16 = local_28 + (local_c - param_2);
            pbVar23 = pbVar24;
            if ((((puVar16[1] == 0) || (iVar27 < (short)puVar16[1])) &&
                ((*puVar16 & 0xc000) != 0xc000)) &&
               ((((local_28[local_c + 1] & 0xc000) != 0xc000 && ((*local_18 & 0xc000) != 0xc000)) &&
                (((local_28[1] & 0xc000) != 0xc000 && ((local_18[1] & 0xc000) != 0xc000)))))) {
              puVar16[1] = uVar26;
              pbVar23 = pbVar24 + 4;
              *pbVar24 = bVar1 + 1;
              pbVar24[1] = bVar2 - 1;
              pbVar24[2] = bVar3 + 1;
              param_5_after_write = param_5_after_write + 1;
            }
            pbVar24 = pbVar23;
            if (((local_28[local_c + param_2 + -1] == 0) ||
                (iVar27 < (short)local_28[local_c + param_2 + -1])) &&
               (((local_28[local_c + param_2] & 0xc000) != 0xc000 &&
                (((((local_28[local_c + -1] & 0xc000) != 0xc000 &&
                   ((local_28[param_2] & 0xc000) != 0xc000)) && ((local_28[-1] & 0xc000) != 0xc000))
                 && ((local_28[param_2 + -1] & 0xc000) != 0xc000)))))) {
              pbVar24 = pbVar23 + 4;
              local_28[local_c + param_2 + -1] = uVar26;
              *pbVar23 = bVar1 - 1;
              pbVar23[1] = bVar2 + 1;
              pbVar23[2] = bVar3 + 1;
              param_5_after_write = param_5_after_write + 1;
            }
            pbVar23 = pbVar24;
            if (((local_28[local_c + param_2 + 1] == 0) ||
                (iVar27 < (short)local_28[local_c + param_2 + 1])) &&
               (((((local_28[local_c + param_2] & 0xc000) != 0xc000 &&
                  (((local_28[local_c + 1] & 0xc000) != 0xc000 &&
                   ((local_28[param_2] & 0xc000) != 0xc000)))) && ((local_28[1] & 0xc000) != 0xc000)
                 ) && ((local_28[param_2 + 1] & 0xc000) != 0xc000)))) {
              pbVar23 = pbVar24 + 4;
              local_28[local_c + param_2 + 1] = uVar26;
              *pbVar24 = bVar1 + 1;
              pbVar24[1] = bVar2 + 1;
              pbVar24[2] = bVar3 + 1;
              param_5_after_write = param_5_after_write + 1;
            }
          }
          local_10 = param_2 * 2;
          if ((uVar13 == 0) && (local_8 = local_28 + -local_c, (*local_8 & 0xc000) != 0xc000)) {
            uVar6 = *(ushort *)((int)local_8 - local_14);
            pbVar24 = pbVar23;
            if (((uVar6 == 0) || (iVar27 < (short)uVar6)) &&
               (((((local_8[-param_2] & 0xc000) != 0xc000 && ((local_8[-1] & 0xc000) != 0xc000)) &&
                 ((*local_18 & 0xc000) != 0xc000)) &&
                (((local_28[-1] & 0xc000) != 0xc000 && ((*puVar15 & 0xc000) != 0xc000)))))) {
              pbVar24 = pbVar23 + 4;
              *(ushort *)((int)local_8 - local_14) = uVar26;
              *pbVar23 = bVar1 - 1;
              pbVar23[2] = bVar3 - 1;
              pbVar23[1] = bVar2 - 1;
              param_5_after_write = param_5_after_write + 1;
            }
            local_1c = local_8 + -param_2;
            if ((((local_1c[1] == 0) || (iVar27 < (short)local_1c[1])) &&
                (((*local_1c & 0xc000) != 0xc000 &&
                 ((((local_8[1] & 0xc000) != 0xc000 && ((*local_18 & 0xc000) != 0xc000)) &&
                  ((local_28[1] & 0xc000) != 0xc000)))))) && ((local_18[1] & 0xc000) != 0xc000)) {
              local_1c[1] = uVar26;
              *pbVar24 = bVar1 + 1;
              pbVar24[1] = bVar2 - 1;
              pbVar24[2] = bVar3 - 1;
              param_5_after_write = param_5_after_write + 1;
              pbVar24 = pbVar24 + 4;
            }
            pbVar23 = pbVar24;
            if ((((local_8[param_2 + -1] == 0) || (iVar27 < (short)local_8[param_2 + -1])) &&
                (((local_8[param_2] & 0xc000) != 0xc000 &&
                 (((local_8[-1] & 0xc000) != 0xc000 && ((local_28[param_2] & 0xc000) != 0xc000))))))
               && (((local_28[-1] & 0xc000) != 0xc000 &&
                   ((local_28[param_2 + -1] & 0xc000) != 0xc000)))) {
              pbVar23 = pbVar24 + 4;
              local_8[param_2 + -1] = uVar26;
              *pbVar24 = bVar1 - 1;
              pbVar24[1] = bVar2 + 1;
              pbVar24[2] = bVar3 - 1;
              param_5_after_write = param_5_after_write + 1;
            }
            local_10 = param_2 * 2;
            if ((((((local_8[param_2 + 1] == 0) || (iVar27 < (short)local_8[param_2 + 1])) &&
                  ((local_8[param_2] & 0xc000) != 0xc000)) &&
                 (((local_8[1] & 0xc000) != 0xc000 && ((local_28[param_2] & 0xc000) != 0xc000)))) &&
                ((local_28[1] & 0xc000) != 0xc000)) && ((local_28[param_2 + 1] & 0xc000) != 0xc000))
            {
              local_8[param_2 + 1] = uVar26;
              pbVar24 = pbVar23;
              local_28 = puVar15;
LAB_006acb91:
              pbVar23 = pbVar24 + 4;
              *pbVar24 = bVar1 + 1;
              pbVar24[1] = bVar2 + 1;
              pbVar24[2] = bVar3 - 1;
              param_5_after_write = param_5_after_write + 1;
              puVar15 = local_28;
            }
          }
        }
        else {
          local_10 = local_14 & 0x10;
          if ((local_10 == 0) && ((local_28[-1] == 0 || (iVar27 + 3 < (int)(short)local_28[-1])))) {
            local_28[-1] = sVar5 + 3;
            pbVar23[1] = bVar2;
            *pbVar23 = bVar1 - 1;
            pbVar23[2] = bVar3;
            pbVar23 = pbVar23 + 4;
            param_5_after_write = param_5_after_write + 1;
          }
          uVar13 = local_14 & 1;
          if ((uVar13 == 0) && ((local_28[1] == 0 || (iVar27 + 3 < (int)(short)local_28[1])))) {
            local_28[1] = sVar5 + 3;
            pbVar23[1] = bVar2;
            *pbVar23 = bVar1 + 1;
            pbVar23[2] = bVar3;
            pbVar23 = pbVar23 + 4;
            param_5_after_write = param_5_after_write + 1;
          }
          uVar14 = local_14 & 0x20;
          pbVar24 = pbVar23;
          if (uVar14 == 0) {
            uVar26 = local_28[-param_2];
            if ((uVar26 == 0) || (iVar27 + 3 < (int)(short)uVar26)) {
              pbVar24 = pbVar23 + 4;
              local_28[-param_2] = sVar5 + 3;
              pbVar23[1] = bVar2 - 1;
              *pbVar23 = bVar1;
              pbVar23[2] = bVar3;
              param_5_after_write = param_5_after_write + 1;
            }
          }
          uVar17 = local_14 & 2;
          pbVar23 = pbVar24;
          if ((uVar17 == 0) &&
             ((local_28[param_2] == 0 || (iVar27 + 3 < (int)(short)local_28[param_2])))) {
            pbVar23 = pbVar24 + 4;
            local_28[param_2] = sVar5 + 3;
            pbVar24[1] = bVar2 + 1;
            *pbVar24 = bVar1;
            pbVar24[2] = bVar3;
            param_5_after_write = param_5_after_write + 1;
          }
          uVar18 = local_14 & 0x40;
          pbVar24 = pbVar23;
          if (uVar18 == 0) {
            local_8 = local_28 + -local_c;
            if ((*local_8 == 0) || (iVar27 + 3 < (int)(short)*local_8)) {
              pbVar24 = pbVar23 + 4;
              *local_8 = sVar5 + 3;
              pbVar23[1] = bVar2;
              *pbVar23 = bVar1;
              pbVar23[2] = bVar3 - 1;
              param_5_after_write = param_5_after_write + 1;
            }
          }
          uVar19 = local_14 & 4;
          pbVar23 = pbVar24;
          if ((uVar19 == 0) &&
             ((local_28[local_c] == 0 || (iVar27 + 3 < (int)(short)local_28[local_c])))) {
            pbVar23 = pbVar24 + 4;
            local_28[local_c] = sVar5 + 3;
            pbVar24[1] = bVar2;
            *pbVar24 = bVar1;
            pbVar24[2] = bVar3 + 1;
            param_5_after_write = param_5_after_write + 1;
          }
          if ((uVar19 == 0) && (local_8 = local_28 + local_c, -1 < (short)local_28[local_c])) {
            pbVar24 = pbVar23;
            if ((local_10 == 0) &&
               (((local_8[-1] == 0 || (iVar27 + 4 < (int)(short)local_8[-1])) &&
                ((local_28[-1] & 0xc000) != 0xc000)))) {
              pbVar24 = pbVar23 + 4;
              local_8[-1] = sVar5 + 4;
              *pbVar23 = bVar1 - 1;
              pbVar23[1] = bVar2;
              pbVar23[2] = bVar3 + 1;
              param_5_after_write = param_5_after_write + 1;
            }
            pbVar23 = pbVar24;
            if (((uVar13 == 0) && ((local_8[1] == 0 || (iVar27 + 4 < (int)(short)local_8[1])))) &&
               ((local_28[1] & 0xc000) != 0xc000)) {
              pbVar23 = pbVar24 + 4;
              local_8[1] = sVar5 + 4;
              *pbVar24 = bVar1 + 1;
              pbVar24[1] = bVar2;
              pbVar24[2] = bVar3 + 1;
              param_5_after_write = param_5_after_write + 1;
            }
            pbVar24 = pbVar23;
            if (((uVar17 == 0) &&
                ((local_8[param_2] == 0 || (iVar27 + 4 < (int)(short)local_8[param_2])))) &&
               ((local_28[param_2] & 0xc000) != 0xc000)) {
              pbVar24 = pbVar23 + 4;
              local_8[param_2] = sVar5 + 4;
              pbVar23[1] = bVar2 + 1;
              *pbVar23 = bVar1;
              pbVar23[2] = bVar3 + 1;
              param_5_after_write = param_5_after_write + 1;
            }
            pbVar23 = pbVar24;
            if (uVar14 == 0) {
              local_1c = local_8 + -param_2;
              if (((*local_1c == 0) || (iVar27 + 4 < (int)(short)*local_1c)) &&
                 ((local_28[-param_2] & 0xc000) != 0xc000)) {
                pbVar23 = pbVar24 + 4;
                *local_1c = sVar5 + 4;
                pbVar24[1] = bVar2 - 1;
                *pbVar24 = bVar1;
                pbVar24[2] = bVar3 + 1;
                param_5_after_write = param_5_after_write + 1;
              }
            }
          }
          if ((uVar18 == 0) && (local_8 = local_28 + -local_c, -1 < (short)*local_8)) {
            pbVar24 = pbVar23;
            if (((local_10 == 0) && ((local_8[-1] == 0 || (iVar27 + 4 < (int)(short)local_8[-1]))))
               && ((local_28[-1] & 0xc000) != 0xc000)) {
              pbVar24 = pbVar23 + 4;
              local_8[-1] = sVar5 + 4;
              *pbVar23 = bVar1 - 1;
              pbVar23[1] = bVar2;
              pbVar23[2] = bVar3 - 1;
              param_5_after_write = param_5_after_write + 1;
            }
            pbVar23 = pbVar24;
            if ((uVar13 == 0) &&
               (((local_8[1] == 0 || (iVar27 + 4 < (int)(short)local_8[1])) &&
                ((local_28[1] & 0xc000) != 0xc000)))) {
              pbVar23 = pbVar24 + 4;
              local_8[1] = sVar5 + 4;
              *pbVar24 = bVar1 + 1;
              pbVar24[1] = bVar2;
              pbVar24[2] = bVar3 - 1;
              param_5_after_write = param_5_after_write + 1;
            }
            pbVar24 = pbVar23;
            if (uVar14 == 0) {
              local_1c = local_8 + -param_2;
              if (((*local_1c == 0) || (iVar27 + 4 < (int)(short)*local_1c)) &&
                 ((local_28[-param_2] & 0xc000) != 0xc000)) {
                pbVar24 = pbVar23 + 4;
                *local_1c = sVar5 + 4;
                pbVar23[1] = bVar2 - 1;
                *pbVar23 = bVar1;
                pbVar23[2] = bVar3 - 1;
                param_5_after_write = param_5_after_write + 1;
              }
            }
            pbVar23 = pbVar24;
            if (((uVar17 == 0) &&
                ((local_8[param_2] == 0 || (iVar27 + 4 < (int)(short)local_8[param_2])))) &&
               ((local_28[param_2] & 0xc000) != 0xc000)) {
              pbVar23 = pbVar24 + 4;
              local_8[param_2] = sVar5 + 4;
              pbVar24[1] = bVar2 + 1;
              *pbVar24 = bVar1;
              pbVar24[2] = bVar3 - 1;
              param_5_after_write = param_5_after_write + 1;
            }
          }
          uVar13 = local_14 & 0x30;
          pbVar24 = pbVar23;
          if (uVar13 == 0) {
            psVar20 = (short *)((int)local_28 - (param_2 * 2 + 2));
            sVar7 = *psVar20;
            if ((((sVar7 == 0) || (iVar27 + 4 < (int)sVar7)) &&
                ((local_28[-param_2] & 0xc000) != 0xc000)) && ((local_28[-1] & 0xc000) != 0xc000)) {
              pbVar24 = pbVar23 + 4;
              *psVar20 = sVar5 + 4;
              *pbVar23 = bVar1 - 1;
              pbVar23[2] = bVar3;
              pbVar23[1] = bVar2 - 1;
              param_5_after_write = param_5_after_write + 1;
            }
          }
          uVar14 = local_14 & 0x21;
          pbVar23 = pbVar24;
          if (uVar14 == 0) {
            puVar15 = local_28 + -param_2;
            if (((puVar15[1] == 0) || (iVar27 + 4 < (int)(short)puVar15[1])) &&
               (((*puVar15 & 0xc000) != 0xc000 && ((local_28[1] & 0xc000) != 0xc000)))) {
              pbVar23 = pbVar24 + 4;
              puVar15[1] = sVar5 + 4;
              *pbVar24 = bVar1 + 1;
              pbVar24[2] = bVar3;
              pbVar24[1] = bVar2 - 1;
              param_5_after_write = param_5_after_write + 1;
            }
          }
          puVar15 = (ushort *)(local_14 & 0x12);
          pbVar24 = pbVar23;
          if (((puVar15 == nullptr) &&
              ((local_28[param_2 + -1] == 0 || (iVar27 + 4 < (int)(short)local_28[param_2 + -1]))))
             && (((local_28[param_2] & 0xc000) != 0xc000 && ((local_28[-1] & 0xc000) != 0xc000)))) {
            pbVar24 = pbVar23 + 4;
            local_28[param_2 + -1] = sVar5 + 4;
            *pbVar23 = bVar1 - 1;
            pbVar23[2] = bVar3;
            pbVar23[1] = bVar2 + 1;
            param_5_after_write = param_5_after_write + 1;
          }
          local_18 = (ushort *)(local_14 & 3);
          pbVar23 = pbVar24;
          if (((local_18 == nullptr) &&
              (((local_28[param_2 + 1] == 0 || (iVar27 + 4 < (int)(short)local_28[param_2 + 1])) &&
               ((local_28[param_2] & 0xc000) != 0xc000)))) && ((local_28[1] & 0xc000) != 0xc000)) {
            pbVar23 = pbVar24 + 4;
            local_28[param_2 + 1] = sVar5 + 4;
            *pbVar24 = bVar1 + 1;
            pbVar24[2] = bVar3;
            pbVar24[1] = bVar2 + 1;
            param_5_after_write = param_5_after_write + 1;
          }
          iVar27 = iVar27 + 5;
          uVar26 = (ushort)iVar27;
          if ((uVar19 == 0) && ((local_28[local_c] & 0xc000) != 0xc000)) {
            pbVar24 = pbVar23;
            if (uVar13 == 0) {
              local_1c = (ushort *)((int)local_28 + (local_c * 2 - (param_2 * 2 + 2)));
              if ((((*local_1c == 0) || (iVar27 < (short)*local_1c)) &&
                  (((local_28[local_c - param_2] & 0xc000) != 0xc000 &&
                   ((((local_28[local_c + -1] & 0xc000) != 0xc000 &&
                     ((local_28[-param_2] & 0xc000) != 0xc000)) &&
                    ((local_28[-1] & 0xc000) != 0xc000)))))) &&
                 ((*(ushort *)((int)local_28 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
                pbVar24 = pbVar23 + 4;
                *local_1c = uVar26;
                *pbVar23 = bVar1 - 1;
                pbVar23[1] = bVar2 - 1;
                pbVar23[2] = bVar3 + 1;
                param_5_after_write = param_5_after_write + 1;
              }
            }
            pbVar23 = pbVar24;
            if (uVar14 == 0) {
              local_10 = param_2 * 2;
              local_1c = local_28 + (local_c - param_2);
              if ((((local_1c[1] == 0) || (iVar27 < (short)local_1c[1])) &&
                  (((*local_1c & 0xc000) != 0xc000 &&
                   (((local_28[local_c + 1] & 0xc000) != 0xc000 &&
                    ((local_28[-param_2] & 0xc000) != 0xc000)))))) &&
                 (((local_28[1] & 0xc000) != 0xc000 &&
                  (((local_28 + -param_2)[1] & 0xc000) != 0xc000)))) {
                pbVar23 = pbVar24 + 4;
                local_1c[1] = uVar26;
                *pbVar24 = bVar1 + 1;
                pbVar24[2] = bVar3 + 1;
                pbVar24[1] = bVar2 - 1;
                param_5_after_write = param_5_after_write + 1;
              }
            }
            pbVar24 = pbVar23;
            if (puVar15 == nullptr) {
              if ((((((local_28[local_c + param_2 + -1] == 0) ||
                     (iVar27 < (short)local_28[local_c + param_2 + -1])) &&
                    ((local_28[local_c + param_2] & 0xc000) != 0xc000)) &&
                   (((local_28[local_c + -1] & 0xc000) != 0xc000 &&
                    ((local_28[param_2] & 0xc000) != 0xc000)))) &&
                  ((local_28[-1] & 0xc000) != 0xc000)) &&
                 ((local_28[param_2 + -1] & 0xc000) != 0xc000)) {
                pbVar24 = pbVar23 + 4;
                local_28[local_c + param_2 + -1] = uVar26;
                *pbVar23 = bVar1 - 1;
                pbVar23[1] = bVar2 + 1;
                pbVar23[2] = bVar3 + 1;
                param_5_after_write = param_5_after_write + 1;
              }
            }
            pbVar23 = pbVar24;
            if (local_18 == nullptr) {
              if ((((local_28[local_c + param_2 + 1] == 0) ||
                   (iVar27 < (short)local_28[local_c + param_2 + 1])) &&
                  (((local_28[local_c + param_2] & 0xc000) != 0xc000 &&
                   ((((local_28[local_c + 1] & 0xc000) != 0xc000 &&
                     ((local_28[param_2] & 0xc000) != 0xc000)) && ((local_28[1] & 0xc000) != 0xc000)
                    ))))) && ((local_28[param_2 + 1] & 0xc000) != 0xc000)) {
                pbVar23 = pbVar24 + 4;
                local_28[local_c + param_2 + 1] = uVar26;
                *pbVar24 = bVar1 + 1;
                pbVar24[1] = bVar2 + 1;
                pbVar24[2] = bVar3 + 1;
                param_5_after_write = param_5_after_write + 1;
              }
            }
          }
          if ((uVar18 == 0) && (local_8 = local_28 + -local_c, (*local_8 & 0xc000) != 0xc000)) {
            pbVar24 = pbVar23;
            if (uVar13 == 0) {
              local_1c = (ushort *)((int)local_8 - (param_2 * 2 + 2));
              if ((((*local_1c == 0) || (iVar27 < (short)*local_1c)) &&
                  ((local_10 = param_2 * 2, (local_8[-param_2] & 0xc000) != 0xc000 &&
                   ((((local_8[-1] & 0xc000) != 0xc000 && ((local_28[-param_2] & 0xc000) != 0xc000))
                    && ((local_28[-1] & 0xc000) != 0xc000)))))) &&
                 ((*(ushort *)((int)local_28 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
                pbVar24 = pbVar23 + 4;
                *local_1c = uVar26;
                *pbVar23 = bVar1 - 1;
                pbVar23[1] = bVar2 - 1;
                pbVar23[2] = bVar3 - 1;
                param_5_after_write = param_5_after_write + 1;
              }
            }
            pbVar25 = pbVar24;
            if (uVar14 == 0) {
              local_10 = param_2 * 2;
              local_1c = local_8 + -param_2;
              if ((((local_1c[1] == 0) || (iVar27 < (short)local_1c[1])) &&
                  (((*local_1c & 0xc000) != 0xc000 &&
                   (((local_8[1] & 0xc000) != 0xc000 && ((local_28[-param_2] & 0xc000) != 0xc000))))
                  )) && (((local_28[1] & 0xc000) != 0xc000 &&
                         (((local_28 + -param_2)[1] & 0xc000) != 0xc000)))) {
                pbVar25 = pbVar24 + 4;
                local_1c[1] = uVar26;
                *pbVar24 = bVar1 + 1;
                pbVar24[2] = bVar3 - 1;
                pbVar24[1] = bVar2 - 1;
                param_5_after_write = param_5_after_write + 1;
              }
            }
            pbVar23 = pbVar25;
            if ((((puVar15 == nullptr) &&
                 ((((local_8[param_2 + -1] == 0 || (iVar27 < (short)local_8[param_2 + -1])) &&
                   ((local_8[param_2] & 0xc000) != 0xc000)) &&
                  (((local_8[-1] & 0xc000) != 0xc000 && ((local_28[param_2] & 0xc000) != 0xc000)))))
                 ) && ((local_28[-1] & 0xc000) != 0xc000)) &&
               ((local_28[param_2 + -1] & 0xc000) != 0xc000)) {
              pbVar23 = pbVar25 + 4;
              local_8[param_2 + -1] = uVar26;
              *pbVar25 = bVar1 - 1;
              pbVar25[1] = bVar2 + 1;
              pbVar25[2] = bVar3 - 1;
              param_5_after_write = param_5_after_write + 1;
            }
            if (((local_18 == nullptr) &&
                ((local_8[param_2 + 1] == 0 || (iVar27 < (short)local_8[param_2 + 1])))) &&
               (((local_8[param_2] & 0xc000) != 0xc000 &&
                (((((local_8[1] & 0xc000) != 0xc000 && ((local_28[param_2] & 0xc000) != 0xc000)) &&
                  ((local_28[1] & 0xc000) != 0xc000)) &&
                 ((local_28[param_2 + 1] & 0xc000) != 0xc000)))))) {
              local_8[param_2 + 1] = uVar26;
              pbVar24 = pbVar23;
              local_28 = puVar15;
              goto LAB_006acb91;
            }
          }
        }
        local_28 = puVar15;
        local_2c = local_30 & 4;
        local_30 = local_30 & 0x40;
        if (local_48 != nullptr) {
          if (0 < *local_48) goto LAB_006acc47;
          if ((((bVar8) && ((int)(uVar21 - 1) <= param_8)) &&
              ((param_8 <= (int)(uVar21 + 1) &&
               ((((int)(uVar12 - 1) <= param_9 && (param_9 <= (int)(uVar12 + 1))) &&
                ((int)(uVar10 - 1) <= param_10)))))) && (param_10 <= (int)(uVar10 + 1))) {
            bVar9 = true;
          }
        }
        local_40 = local_40 + 1;
      } while (local_40 < local_44);
      if ((bVar9) || (param_5_after_write == 0)) break;
      local_44 = param_5_after_write;
      local_24 = local_20;
      local_20 = pbVar11;
    }
  }
LAB_006acc47:
  if (sVar4 < 0) {
    *local_48 = sVar4;
  }
  st::fn_006AB060(&local_38);
  return local_4c;
}

// 006ACC70 DArrayGetElement
#line 4 "decomp/ST.exe/functions/006ACC70/decomp.c"
/* [STUtilityFunctionApplier] darray_get_element: copies the indexed dynamic-array element and
   returns index or -4
   Evidence: body pattern verified */

int __fastcall st::fn_006ACC70(DArrayTy *array,uint index,void *outElement)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  if (array->count <= index) {
    return -4;
  }
  uVar2 = array->elementSize;
  if (uVar2 == 4) {
    *(undefined4 *)outElement = *(undefined4 *)((int)array->data + index * 4);
    return index;
  }
  puVar3 = (undefined4 *)(uVar2 * index + (int)array->data);
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)outElement = *puVar3;
    puVar3 = puVar3 + 1;
    outElement = (undefined4 *)((int)outElement + 4);
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)outElement = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    outElement = (undefined4 *)((int)outElement + 1);
  }
  return index;
}

// 006ACC95 FUN_006acc95
#line 4 "decomp/ST.exe/functions/006ACC95/decomp.c"
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __fastcall st::fn_006ACC95(uint param_1)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_EAX;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;
  byte *puVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  byte *puVar3;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  puVar2 = (byte *)(param_1 * in_EAX + *(int *)(unaff_EDI + 0x1c));
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  puVar3 = (byte *)(*(undefined4 **)(unaff_EBP + 8));
  memmove(puVar3, puVar2, param_1); /* compiler REP MOVS byte copy */
  return;
}

// 006ACCD0 FUN_006accd0
#line 4 "decomp/ST.exe/functions/006ACCD0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0040EB90 -> 006ACCD0 @ 0040EF61; data at 007F4D3C */

void st::fn_006ACCD0(RuntimeRecord_007F4D3C_0014 *param_1,undefined4 *param_2,int param_3,
                 callback_006ACCD0_p3 *param_4)

{
  uint *puVar1;
  int *piVar2;
  RuntimeRecord_007F4D3C_0014 *pRVar3;
  int iVar4;
  RuntimeRecord_007F4D3C_0014 *arg_1;
  RuntimeRecord_007F4D3C_0014 *arg_2;
  RuntimeRecord_007F4D3C_0014 *pRVar4_mg0;
  RuntimeRecord_007F4D3C_0014 *pRVar5_mg1;
  undefined4 local_fc;
  uint local_f8 [59];
  uint *local_c;
  RuntimeRecord_007F4D3C_0014 *local_8;
  RuntimeRecord_007F4D3C_0014 *pRVar5_mg0;

  pRVar5_mg0 = param_1;
  if (1 < (int)param_2) {
    iVar4 = (int)param_2 * param_3;
    piVar2 = &param_1->field_0000;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = &local_fc;
    local_c = local_f8;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = nullptr;
    pRVar3 = (RuntimeRecord_007F4D3C_0014 *)((int)piVar2 + iVar4);
cf_continue_loop_006ACD0D:
    local_8 = pRVar3;
    arg_2 = pRVar5_mg0;
    pRVar4_mg0 = local_8;
    iVar4 = ((int)local_8 - (int)arg_2) / param_3;
    if (7 < iVar4) {
      st::fn_006CE700((byte *)arg_2,(byte *)((int)&arg_2->field_0000 + (iVar4 / 2) * param_3),param_3);
      arg_1 = arg_2;
cf_continue_loop_006ACD37:
      arg_1 = (RuntimeRecord_007F4D3C_0014 *)((int)&arg_1->field_0000 + param_3);
      if (arg_1 < local_8) goto code_r0x006acd43;
      goto LAB_006acd4f;
    }
    for (pRVar5_mg1 = (RuntimeRecord_007F4D3C_0014 *)((int)local_8 - param_3); local_8 = arg_2,
        pRVar3 = arg_2, arg_2 < pRVar5_mg1;
        pRVar5_mg1 = (RuntimeRecord_007F4D3C_0014 *)((int)pRVar5_mg1 - param_3)) {
      while (pRVar3 = (RuntimeRecord_007F4D3C_0014 *)((int)&pRVar3->field_0000 + param_3),
            pRVar3 <= pRVar5_mg1) {
        /* ST_CALLSITE[006ACE0C]: CALL dword ptr [EBP + 0x14] */
        iVar4 = (*param_4)(st::machine_word_boundary_cast<undefined4>(pRVar3),st::machine_word_boundary_cast<undefined4>(local_8));
        if (0 < iVar4) {
          local_8 = pRVar3;
        }
      }
      st::fn_006CE700((byte *)local_8,(byte *)pRVar5_mg1,param_3);
    }
    if (0 < (int)param_1) {
      param_1 = (RuntimeRecord_007F4D3C_0014 *)((int)&param_1[-1].field_0010 + 3);
      puVar1 = local_c + -2;
      param_2 = param_2 + -2;
      local_c = local_c + -2;
      pRVar5_mg0 = (RuntimeRecord_007F4D3C_0014 *)*param_2;
      pRVar3 = (RuntimeRecord_007F4D3C_0014 *)*puVar1;
      goto cf_continue_loop_006ACD0D;
    }
  }
  return;
code_r0x006acd43:
  /* ST_CALLSITE[006ACD45]: CALL dword ptr [EBP + 0x14] */
  iVar4 = (*param_4)(st::machine_word_boundary_cast<undefined4>(arg_1),st::machine_word_boundary_cast<undefined4>(arg_2));
  if (iVar4 < 1) goto cf_continue_loop_006ACD37;
LAB_006acd4f:
  do {
    pRVar4_mg0 = (RuntimeRecord_007F4D3C_0014 *)((int)pRVar4_mg0 - param_3);
    if (pRVar4_mg0 <= arg_2) break;
    /* ST_CALLSITE[006ACD58]: CALL dword ptr [EBP + 0x14] */
    iVar4 = (*param_4)(st::machine_word_boundary_cast<undefined4>(pRVar4_mg0),st::machine_word_boundary_cast<undefined4>(arg_2));
  } while (-1 < iVar4);
  if (arg_1 <= pRVar4_mg0) {
    st::fn_006CE700((byte *)arg_1,(byte *)pRVar4_mg0,param_3);
    goto cf_continue_loop_006ACD37;
  }
  st::fn_006CE700((byte *)arg_2,(byte *)pRVar4_mg0,param_3);
  pRVar5_mg0 = arg_2;
  pRVar3 = pRVar4_mg0;
  if (((RuntimeRecord_007F4D3C_0014 *)((int)&arg_1->field_0000 + param_3) < local_8) &&
     (pRVar5_mg0 = arg_1, pRVar3 = local_8,
     (RuntimeRecord_007F4D3C_0014 *)((int)&arg_2->field_0000 + param_3) < pRVar4_mg0)) {
    if ((int)pRVar4_mg0 - (int)arg_2 < (int)local_8 - (int)arg_1) {
      *param_2 = st::machine_word_boundary_cast<undefined4>(arg_1);
      param_2 = param_2 + 2;
      *local_c = st::machine_word_boundary_cast<uint>(local_8);
      param_1 = (RuntimeRecord_007F4D3C_0014 *)((int)&param_1->field_0000 + 1);
      local_c = local_c + 2;
      pRVar5_mg0 = arg_2;
      pRVar3 = pRVar4_mg0;
    }
    else {
      *param_2 = st::machine_word_boundary_cast<undefined4>(arg_2);
      param_2 = param_2 + 2;
      *local_c = st::machine_word_boundary_cast<uint>(pRVar4_mg0);
      param_1 = (RuntimeRecord_007F4D3C_0014 *)((int)&param_1->field_0000 + 1);
      local_c = local_c + 2;
      pRVar3 = local_8;
    }
  }
  goto cf_continue_loop_006ACD0D;
}

// 006ACE70 FUN_006ace70
#line 4 "decomp/ST.exe/functions/006ACE70/decomp.c"
void __fastcall st::fn_006ACE70(undefined4 param_1,uint param_2)

{
  ushort uVar1;
  byte bVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uint in_EAX;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;

  iVar3 = 0x20;
  uVar4 = param_2;
  if (param_2 == 0) {
    iVar3 = 0;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    uVar4 = in_EAX;
  }
  if ((uVar4 & 0xffff0000) == 0) {
    uVar1 = 0xf;
    uVar5 = (ushort)uVar4;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar1 == 0; uVar1 = uVar1 - 1) {
      }
    }
    uVar6 = (uint)uVar1;
    if (uVar5 == 0) {
      return;
    }
  }
  else {
    uVar6 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
  }
  uVar4 = iVar3 + uVar6 + 1;
  if ((byte)uVar4 < 0x3f) {
    bVar2 = (byte)(uVar4 >> 1) & 0x1f;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    uVar4 = in_EAX >> bVar2 | param_2 << 0x20 - bVar2;
    do {
      uVar6 = uVar4;
      if (uVar4 < param_2) {
        uVar6 = (param_2 >> 1) + param_2;
      }
      /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
      uVar4 = (uint)(CONCAT44(param_2,in_EAX) / (ulonglong)uVar6);
      uVar7 = uVar6 + uVar4;
      uVar4 = uVar7 >> 1 | (uint)CARRY4(uVar6,uVar4) << 0x1f;
      /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
      if ((int)(CONCAT44(param_2,in_EAX) % (ulonglong)uVar6) != 0) {
        uVar4 = uVar4 + ((uVar7 & 1) != 0);
      }
    } while (uVar4 != uVar6);
  }
  return;
}

// 006ACED8 FUN_006aced8
#line 4 "decomp/ST.exe/functions/006ACED8/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006ACED8 returns stored into /STBHEShellC+0xef @ 005F3D78 */

int __cdecl st::fn_006ACED8(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;

  lVar3 = (longlong)(param_1 - param_3) * (longlong)(param_1 - param_3);
  iVar5 = (int)((ulonglong)lVar3 >> 0x20);
  if ((lVar3 < 0) ||
     (lVar4 = (longlong)(param_2 - param_4) * (longlong)(param_2 - param_4),
     iVar6 = (int)((ulonglong)lVar4 >> 0x20), uVar1 = (uint)CARRY4((uint)lVar4,(uint)lVar3),
     iVar2 = iVar6 + iVar5, uVar7 = iVar2 + uVar1,
     (SCARRY4(iVar6,iVar5) != SCARRY4(iVar2,uVar1)) != (int)uVar7 < 0)) {
    iVar5 = 0x7fffffff;
  }
  else {
    iVar5 = st::fn_006ACE70((uint)lVar3,uVar7);
  }
  return iVar5;
}

// 006ACF0D FUN_006acf0d
#line 4 "decomp/ST.exe/functions/006ACF0D/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006ACF0D returns stored into /STOctopusC+0x239 @ 0058AFD0 */

int __cdecl st::fn_006ACF0D(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;

  lVar1 = (longlong)(param_1 - param_4) * (longlong)(param_1 - param_4);
  iVar5 = (int)((ulonglong)lVar1 >> 0x20);
  if (-1 < lVar1) {
    lVar2 = (longlong)(param_2 - param_5) * (longlong)(param_2 - param_5);
    iVar6 = (int)((ulonglong)lVar2 >> 0x20);
    uVar3 = (uint)lVar2;
    uVar4 = (uint)lVar1 + uVar3;
    uVar3 = (uint)CARRY4((uint)lVar1,uVar3);
    iVar7 = iVar5 + iVar6;
    iVar9 = iVar7 + uVar3;
    if (((SCARRY4(iVar5,iVar6) != SCARRY4(iVar7,uVar3)) == iVar9 < 0) &&
       (lVar1 = (longlong)(param_3 - param_6) * (longlong)(param_3 - param_6),
       iVar7 = (int)((ulonglong)lVar1 >> 0x20), uVar3 = (uint)CARRY4((uint)lVar1,uVar4),
       iVar5 = iVar7 + iVar9, uVar8 = iVar5 + uVar3,
       (SCARRY4(iVar7,iVar9) != SCARRY4(iVar5,uVar3)) == (int)uVar8 < 0)) {
      iVar5 = st::fn_006ACE70(uVar4,uVar8);
      return iVar5;
    }
  }
  return 0x7fffffff;
}

// 006ACF90 FUN_006acf90
#line 1 "decomp/ST.exe/functions/006ACF90/decomp.c"

int st::fn_006ACF90(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  uVar3 = param_3 - param_1 >> 0x1f;
  iVar2 = (param_3 - param_1 ^ uVar3) - uVar3;
  uVar3 = param_4 - param_2 >> 0x1f;
  iVar1 = (param_4 - param_2 ^ uVar3) - uVar3;
  if (iVar1 <= iVar2) {
    return (iVar1 + iVar2 * 2) / 2;
  }
  return (iVar2 + iVar1 * 2) / 2;
}

// 006ACFD0 FUN_006acfd0
#line 1 "decomp/ST.exe/functions/006ACFD0/decomp.c"

int st::fn_006ACFD0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  uVar3 = param_3 - param_1 >> 0x1f;
  iVar2 = (param_3 - param_1 ^ uVar3) - uVar3;
  uVar3 = param_4 - param_2 >> 0x1f;
  iVar1 = (param_4 - param_2 ^ uVar3) - uVar3;
  if ((iVar2 == 2) && (iVar1 == 2)) {
    return 2;
  }
  if (iVar1 <= iVar2) {
    return (iVar1 + iVar2 * 2) / 2;
  }
  return (iVar2 + iVar1 * 2) / 2;
}

// 006AD020 FUN_006ad020
#line 4 "decomp/ST.exe/functions/006AD020/decomp.c"
/* [STSwitchEnumApplier] Switch target param_3 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_006AD020_param_3Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

int st::fn_006AD020(int param_1,int param_2,Global_sub_006AD020_param_3Enum param_3,int param_4,
                int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = param_4 - param_1;
  iVar2 = param_5 - param_2;
  iVar3 = iVar1;
  switch(param_3) {
  case CASE_1:
  case CASE_2:
    iVar3 = -iVar2;
    iVar2 = iVar1;
    break;
  case CASE_3:
  case CASE_4:
    iVar3 = -iVar1;
    iVar2 = -iVar2;
    break;
  case CASE_5:
  case CASE_6:
    iVar3 = iVar2;
    iVar2 = -iVar1;
  }
  if ((param_3 & CASE_1) == 0) {
    return iVar2 * 2;
  }
  iVar3 = (iVar3 - iVar2) * 4 + 1;
  iVar3 = (int)((ulonglong)((longlong)iVar3 * 0x55555555) >> 0x20) - iVar3;
  return (iVar3 >> 1) - (iVar3 >> 0x1f);
}

// 006AD0B0 FUN_006ad0b0
#line 1 "decomp/ST.exe/functions/006AD0B0/decomp.c"

/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=00413AF0 @ 004143AC
   -> MOV MOV [0x007f4d08],EAX | 0055DEE0 @ 0055E040 -> MOV MOV dword ptr [EBP + -0x38],EAX */

int st::fn_006AD0B0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  uVar3 = param_3 - param_1 >> 0x1f;
  iVar2 = (param_3 - param_1 ^ uVar3) - uVar3;
  uVar3 = param_4 - param_2 >> 0x1f;
  iVar1 = (param_4 - param_2 ^ uVar3) - uVar3;
  if ((iVar2 == 0) && (iVar1 == 0)) {
    return 0x7f;
  }
  if (param_2 <= param_4) {
    if (param_3 < param_1) {
      if (iVar1 * 2 <= iVar2) {
        return 4;
      }
      return (iVar2 * 2 <= iVar1) + 5;
    }
    if (iVar1 * 2 <= iVar2) {
      return 0;
    }
    return (iVar1 < iVar2 * 2) + 6;
  }
  if (param_3 < param_1) {
    if (iVar1 * 2 <= iVar2) {
      return 4;
    }
    return (iVar1 < iVar2 * 2) + 2;
  }
  if (iVar1 * 2 <= iVar2) {
    return 0;
  }
  return (iVar2 * 2 <= iVar1) + 1;
}

// 006AD190 FUN_006ad190
#line 4 "decomp/ST.exe/functions/006AD190/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00575A10 -> 006AD190 @ 00575A7C */

undefined4 st::fn_006AD190(undefined4 param_1,char *text,int param_3)

{
  int *piVar1;
  char *pcVar2;

  if (DAT_00854a98 == 0) {
    st::fn_0072ECE0(0x6ad250);
    DAT_00854a98 = 1;
  }
  DAT_00854eac = param_1;
  if (g_int_00854EB4 != nullptr) {
    st::fn_0072EA90(g_int_00854EB4);
    g_int_00854EB4 = nullptr;
  }
  if ((text != nullptr) && (*text != '\0')) {
    pcVar2 = (char *)&DAT_007ed7b0;
    if (param_3 == 0) {
      pcVar2 = (char *)&DAT_007ed7ac;
    }
    piVar1 = (int *)st::fn_0072EA70(text,pcVar2);
    if (piVar1 == nullptr) {
      return DAT_00857148;
    }
    /* ST_CALLSITE[006AD214]: CALL dword ptr [0x0085bbac] */
    st::external_00000020((LPSYSTEMTIME)&DAT_00854a88);
    g_int_00854EB4 = piVar1;
    DAT_007ed79c = 1;
    DAT_00854ebc = 0;
    return 0;
  }
  DAT_00854ebc = 1;
  return 0;
}

// 006AD250 FUN_006ad250
#line 1 "decomp/ST.exe/functions/006AD250/decomp.c"

void st::fn_006AD250(void)

{
  if (g_int_00854EB4 != nullptr) {
    st::fn_0072EA90(g_int_00854EB4);
    g_int_00854EB4 = nullptr;
  }
  return;
}

// 006AD270 FUN_006ad270
#line 1 "decomp/ST.exe/functions/006AD270/decomp.c"

/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0056ADC0 -> 006AD270 @ 0056B339; data at 0080759C */

void st::fn_006AD270(DDXContext *param_1)

{
  g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8 = (AnonShape_GLOBAL_0080759C_9638EF10 *)param_1;
  return;
}

// 006AD280 FUN_006ad280
#line 4 "decomp/ST.exe/functions/006AD280/decomp.c"
undefined4 st::fn_006AD280(undefined4 param_1)

{
  uint uVar1;
  uVar1 = DAT_007ed798;
  DAT_007ed798 = param_1;
  return uVar1;
}

// 006AD2A0 FUN_006ad2a0
#line 4 "decomp/ST.exe/functions/006AD2A0/decomp.c"
void __cdecl st::fn_006AD2A0(byte *param_1)

{
  alignas(4) byte st_stack_frame[800];

  char cVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar3;
  int iVar4;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char local_30c [447];
  char acStack_14d [65];
  char local_10c [4];
  char local_108 [4];
  char local_104 [4];
  char local_100 [252];

  /* ST_CALLSITE[006AD2B8]: CALL dword ptr [0x0085bb94] */
  DVar2 = st::external_0000001A((HMODULE)0x0,local_10c,0x104);
  if (DVar2 == 0) {
    local_10c[0] = "Debug Message"[0];
    local_10c[1] = "Debug Message"[1];
    local_10c[2] = "Debug Message"[2];
    local_10c[3] = "Debug Message"[3];
    local_108[0] = "Debug Message"[4];
    local_108[1] = "Debug Message"[5];
    local_108[2] = "Debug Message"[6];
    local_108[3] = "Debug Message"[7];
    local_104[0] = "Debug Message"[8];
    local_104[1] = "Debug Message"[9];
    local_104[2] = "Debug Message"[10];
    local_104[3] = "Debug Message"[0xb];
    local_100[0] = "Debug Message"[0xc];
    local_100[1] = "Debug Message"[0xd];
  }
  else {
    uVar3 = 0xffffffff;
    pcVar6 = local_10c;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (0x40 < (int)(~uVar3 - 1)) {
      st::fn_0072E340(acStack_14d + ~uVar3,&st_global_007C7274,3);
    }
  }
  local_30c[0] = '\0';
  if ((param_1 != nullptr) &&
     (iVar3 = st::fn_007300E0(st::pointer_boundary_cast<undefined1 *>(local_30c),0x200,param_1,(undefined4 *)(st_stack_frame + 796)),
     iVar3 < 0)) {
    uVar3 = 0xffffffff;
    pcVar6 = "User message too long";
    do {
      pcVar8 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar6 = local_30c;
    do {
      pcVar7 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar8 + -uVar3;
    pcVar8 = pcVar7 + -1;
    memmove(pcVar8, pcVar6, uVar3); /* compiler REP MOVS byte copy */
  }
  st::fn_006AD3A0(local_30c,local_10c,0x40);
  return;
}

// 006AD3A0 FUN_006ad3a0
#line 1 "decomp/ST.exe/functions/006AD3A0/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006AD3A0 -> EXTERNAL:00000081 @ 006AD3ED | 006AD3A0 -> EXTERNAL:00000081 @ 006AD487

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006AD3A0 -> EXTERNAL:00000081 @ 006AD487 */

int st::fn_006AD3A0(LPCSTR lpText,LPCSTR lpCaption,uint param_3)

{
  int iVar1;
  HWND hWnd;

  hWnd = (HWND)0x0;
  if (g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8 != nullptr) {
    hWnd = *(HWND *)&g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0x4;
  }
  if ((param_3 & 0x3000) == 0) {
    param_3 = param_3 | 0x1000;
  }
  if ((param_3 & 0xf0) == 0) {
    param_3 = param_3 | 0x10;
  }
  if (DAT_00854a84 != 0) {
    /* ST_CALLSITE[006AD3ED]: CALL dword ptr [0x0085bdec] */
    iVar1 = st::external_00000081(hWnd,lpText,st::pointer_boundary_cast<LPCSTR>("Debug Message - SECOND CALL"),
                        param_3 & 0xffffdf1f | 0x11010);
    return iVar1;
  }
  DAT_00854a84 = 1;
  if ((g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8 != nullptr)
     && ((g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0x8 & 1) != 0)) {
    st::fn_006B0BA0((DDXContext *)g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8,st::machine_word_boundary_cast<undefined4>(&DAT_00854aa4),0,0x100);
    st::fn_006B0A20(g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8,0x854ec0,0,1,0);
    st::fn_006B0A20(g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8,0x7ed7a0,4,1,0);
    st::fn_006B0A20(g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8,0x7ed7a4,7,1,0);
    st::fn_006B0A20(g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8,0x7ed7a8,0xff,1,0);
  }
  /* ST_CALLSITE[006AD487]: CALL dword ptr [0x0085bdec] */
  iVar1 = st::external_00000081(hWnd,lpText,lpCaption,param_3 | 0x10000);
  if ((g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8 != nullptr)
     && ((g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0x8 & 1) != 0)) {
    st::fn_006B0A20(g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8,0x854aa4,0,0x100,0);
  }
  DAT_00854a84 = 0;
  return iVar1;
}

// 006AD4D0 ReportDebugMessage
#line 4 "decomp/ST.exe/functions/006AD4D0/decomp.c"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl
st::fn_006AD4D0(char *sourceFile,int sourceLine,int isFatal,int errorCode,char *format,...)

{
  alignas(4) byte st_stack_frame[1920];

  char cVar1;
  int local_EAX_79;
  DWORD DVar2;
  BOOL BVar3;
  int iVar2;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  char *pcVar9;
  char *pcVar10;
  uint *puVar11;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 *unaff_EBP;
  uint *puVar12;
  uint *puVar13;
  char *pcVar14;
  bool bVar15;
  uint local_74c;
  char local_748 [4];
  char local_744;
  uint uStack_743;
  char local_73f [3];
  uint auStack_73c [252];
  char local_34c [447];
  char acStack_18d [65];
  CHAR local_14c [260];
  char debugMessage [64];
  char *pcVar8;
  char *temp_3f2b8032ed;
  char *temp_3f958b413f;
  char *temp_3f3edb9017;
  char *temp_3fea71fc55;

  if (DAT_007ed798 == 0) {
    g_exceptionSourceFile = 0;
    return 0;
  }
  local_34c[0] = '\0';
  local_74c = local_74c & 0xffffff00;
  if ((format != nullptr) &&
     (local_EAX_79 = st::fn_007300E0
                               (st::pointer_boundary_cast<undefined1 *>(local_34c),0x200,(byte *)format,(undefined4 *)(st_stack_frame + 1916)),
     local_EAX_79 < 0)) {
    uVar4 = 0xffffffff;
    pcVar9 = "User message too long";
    do {
      pcVar10 = pcVar9;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar9 = local_34c;
    do {
      pcVar14 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar14 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar14;
    } while (cVar1 != '\0');
    pcVar9 = pcVar10 + -uVar4;
    pcVar10 = pcVar14 + -1;
    memmove(pcVar10, pcVar9, uVar4); /* compiler REP MOVS byte copy */
    uVar6 = 0;
  }
  if ((DAT_007ed79c != 0) && (g_int_00854EB4 != nullptr)) {
    st::fn_00733F70(g_int_00854EB4,st::mutable_c_string("\n%d ========================================  %02d.%02d.%d  %d:%02d:%02d.%03d\n"));
    DAT_007ed79c = 0;
  }
  puVar7 = &local_74c;
  if (DAT_00854ebc != 0) {
    STPiece<0,1>(local_74c) = "Program: "[0];
    STPiece<1,1>(local_74c) = "Program: "[1];
    STPiece<2,1>(local_74c) = "Program: "[2];
    STPiece<3,1>(local_74c) = "Program: "[3];
    local_748[0] = "Program: "[4];
    local_748[1] = "Program: "[5];
    local_748[2] = "Program: "[6];
    local_748[3] = "Program: "[7];
    local_744 = (char)STLiteralPiece<8,2>("Program: ");
    STPiece<0,1>(uStack_743) = SUB21(STLiteralPiece<8,2>("Program: "),1);
    pcVar8 = local_14c;
    DVar2 = st::external_0000001A((HMODULE)0x0,local_14c,0x104);
    if (DVar2 == 0) {
      STPiece<0,1>(uStack_743) = "unknown"[0];
      STPiece<1,1>(uStack_743) = "unknown"[1];
      STPiece<2,1>(uStack_743) = "unknown"[2];
      STPiece<3,1>(uStack_743) = "unknown"[3];
      local_73f[0] = "unknown"[4];
      local_73f[1] = "unknown"[5];
      local_73f[2] = "unknown"[6];
      STPiece<0,1>(auStack_73c[0]) = "unknown"[7];
      puVar7 = auStack_73c;
    }
    else {
      uVar4 = 0xffffffff;
      pcVar9 = local_14c;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      iVar5 = ~uVar4 - 1;
      if (0x40 < iVar5) {
        pcVar8 = acStack_18d + ~uVar4;
        st::fn_0072E340(pcVar8,&st_global_007C7274,3);
        iVar5 = 0x40;
      }
      uVar4 = 0xffffffff;
      do {
        pcVar9 = pcVar8;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      puVar7 = (uint *)((int)&uStack_743 + iVar5);
      puVar12 = (uint *)(pcVar9 + -uVar4);
      puVar13 = &uStack_743;
      memmove(puVar13, puVar12, uVar4); /* compiler REP MOVS byte copy */
      uVar6 = 0;
    }
  }
  *(undefined1 *)puVar7 = 10;
  pcVar9 = (char *)((int)puVar7 + 1);
  if (sourceFile != nullptr) {
    pcVar10 = (char *)((int)puVar7 + 7);
    *(undefined4 *)pcVar9 = STLiteralPiece<0,4>("File: ");
    STField<undefined2>(puVar7,5) = STLiteralPiece<4,2>("File: ");
    STField<char>(puVar7,7) = "File: "[6];
    uVar4 = 0xffffffff;
    temp_3f958b413f = sourceFile;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *temp_3f958b413f;
      temp_3f958b413f = temp_3f958b413f + 1;
    } while (cVar1 != '\0');
    iVar5 = ~uVar4 - 1;
    if (iVar5 < 0x41) {
      uVar4 = 0xffffffff;
      do {
        temp_3f2b8032ed = sourceFile;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        temp_3f2b8032ed = sourceFile + 1;
        cVar1 = *sourceFile;
        sourceFile = temp_3f2b8032ed;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar9 = temp_3f2b8032ed + -uVar4;
      pcVar14 = pcVar10;
      memmove(pcVar14, pcVar9, uVar4); /* compiler REP MOVS byte copy */
      uVar4 = 0;
    }
    else {
      uVar6 = 0xffffffff;
      pcVar9 = sourceFile + (~uVar4 - 0x41);
      do {
        pcVar14 = pcVar9;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar14 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar14;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar9 = pcVar14 + -uVar6;
      pcVar14 = pcVar10;
      memmove(pcVar14, pcVar9, uVar6); /* compiler REP MOVS byte copy */
      uVar6 = 0;
      st::fn_0072E340(pcVar10,&st_global_007C7274,3);
      iVar5 = 0x40;
    }
    pcVar10 = pcVar10 + iVar5;
    if (g_int_00854EB4 == nullptr) {
      *pcVar10 = '\n';
    }
    else {
      *pcVar10 = ' ';
      pcVar10 = pcVar10 + 1;
      *pcVar10 = ' ';
    }
    pcVar10 = pcVar10 + 1;
    if (0 < sourceLine) {
      iVar5 = st::fn_00730C40(st::pointer_boundary_cast<undefined1 *>(pcVar10),0x7ed884);
      pcVar10 = pcVar10 + iVar5;
    }
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    if (((g_int_00854EB4 != nullptr) && (BVar3 = st::external_00000023((st_stack_frame + 1888),4), BVar3 == 0))
       && (BVar3 = st::external_00000023(unaff_EBP,8), BVar3 == 0)) {
      iVar5 = st::fn_00730C40(st::pointer_boundary_cast<undefined1 *>(pcVar10),0x7ed87c);
      pcVar10 = pcVar10 + iVar5;
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      BVar3 = st::external_00000023((void *)*unaff_EBP,8);
      if (BVar3 == 0) {
        iVar5 = st::fn_00730C40(st::pointer_boundary_cast<undefined1 *>(pcVar10),0x7ed874);
        pcVar10 = pcVar10 + iVar5;
      }
    }
    *pcVar10 = '\n';
    pcVar9 = pcVar10 + 1;
  }
  if ((g_exceptionSourceFile != 0) && (g_exceptionCode == errorCode)) {
    pcVar10 = pcVar9 + 10;
    *(undefined4 *)pcVar9 = STLiteralPiece<0,4>("ExcRaise: ");
    *(undefined4 *)(pcVar9 + 4) = STLiteralPiece<4,4>("ExcRaise: ");
    *(undefined2 *)(pcVar9 + 8) = STLiteralPiece<8,2>("ExcRaise: ");
    uVar4 = 0xffffffff;
    pcVar9[10] = "ExcRaise: "[10];
    temp_3fea71fc55 = st::pointer_boundary_cast<char *>(g_exceptionSourceFile);
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *temp_3fea71fc55;
      temp_3fea71fc55 = temp_3fea71fc55 + 1;
    } while (cVar1 != '\0');
    iVar5 = ~uVar4 - 1;
    if (iVar5 < 0x37) {
      uVar4 = 0xffffffff;
      temp_3f3edb9017 = st::pointer_boundary_cast<char *>(g_exceptionSourceFile);
      do {
        pcVar9 = temp_3f3edb9017;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar9 = temp_3f3edb9017 + 1;
        cVar1 = *temp_3f3edb9017;
        temp_3f3edb9017 = pcVar9;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar9 = pcVar9 + -uVar4;
      pcVar14 = pcVar10;
      memmove(pcVar14, pcVar9, uVar4); /* compiler REP MOVS byte copy */
      uVar4 = 0;
    }
    else {
      uVar6 = 0xffffffff;
      pcVar9 = g_exceptionSourceFile + (~uVar4 - 0x37);
      do {
        pcVar14 = pcVar9;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar14 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar14;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar9 = pcVar14 + -uVar6;
      pcVar14 = pcVar10;
      memmove(pcVar14, pcVar9, uVar6); /* compiler REP MOVS byte copy */
      uVar6 = 0;
      st::fn_0072E340(pcVar10,&st_global_007C7274,3);
      iVar5 = 0x36;
    }
    pcVar10 = pcVar10 + iVar5;
    iVar5 = st::fn_00730C40(st::pointer_boundary_cast<undefined1 *>(pcVar10),0x7ed864);
    pcVar10[iVar5] = '\n';
    pcVar9 = pcVar10 + iVar5 + 1;
  }
  g_exceptionSourceFile = 0;
  if (errorCode != 0) {
    iVar5 = st::fn_00730C40(st::pointer_boundary_cast<undefined1 *>(pcVar9),0x7ed848);
    pcVar9 = pcVar9 + iVar5;
  }
  *pcVar9 = '\n';
  pcVar10 = pcVar9 + 1;
  if (local_34c[0] != '\0') {
    if (g_int_00854EB4 == nullptr) {
      *pcVar10 = '\n';
      pcVar10 = pcVar9 + 2;
    }
    uVar4 = 0xffffffff;
    pcVar9 = local_34c;
    do {
      pcVar14 = pcVar9;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar14 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar14;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar9 = pcVar14 + -uVar4;
    pcVar14 = pcVar10;
    memmove(pcVar14, pcVar9, uVar4); /* compiler REP MOVS byte copy */
    uVar6 = 0;
    uVar4 = 0xffffffff;
    pcVar9 = local_34c;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    pcVar10[~uVar4 - 1] = '\n';
    pcVar10 = pcVar10 + (~uVar4 - 1) + 1;
  }
  if (g_int_00854EB4 == nullptr) {
    if (DAT_00854ebc != 0) {
      *pcVar10 = '\n';
      pcVar9 = "(Press Retry to debug the application)";
      pcVar10 = pcVar10 + 1;
      memmove(pcVar10, pcVar9, 0x27); /* compiler REP MOVS byte copy */
      iVar5 = 0;
      if (isFatal == 0) {
        debugMessage[0] = "Debug Message"[0];
        debugMessage[1] = "Debug Message"[1];
        debugMessage[2] = "Debug Message"[2];
        debugMessage[3] = "Debug Message"[3];
        debugMessage[4] = "Debug Message"[4];
        debugMessage[5] = "Debug Message"[5];
        debugMessage[6] = "Debug Message"[6];
        debugMessage[7] = "Debug Message"[7];
        debugMessage[8] = "Debug Message"[8];
        debugMessage[9] = "Debug Message"[9];
        debugMessage[10] = "Debug Message"[10];
        debugMessage[0xb] = "Debug Message"[0xb];
        debugMessage[0xc] = "Debug Message"[0xc];
        debugMessage[0xd] = "Debug Message"[0xd];
      }
      else {
        pcVar9 = "Debug Error Message";
        pcVar10 = debugMessage;
        memmove(pcVar10, pcVar9, 0x14); /* compiler REP MOVS byte copy */
      }
      if ((g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8 ==
           nullptr) ||
         (puVar11 = *(undefined4 **)&g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0x47c,
         puVar11 == nullptr)) {
        puVar11 = nullptr;
      }
      else {
        st::fn_006CE8C0
                  ((int)g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8,(HDC)*puVar11);
        uVar4 = 0xffffffff;
        pcVar9 = " (UNSAFE)";
        do {
          pcVar10 = pcVar9;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar10 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        iVar5 = -1;
        pcVar9 = debugMessage;
        do {
          pcVar14 = pcVar9;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar14 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar14;
        } while (cVar1 != '\0');
        pcVar9 = pcVar10 + -uVar4;
        pcVar10 = pcVar14 + -1;
        memmove(pcVar10, pcVar9, uVar4); /* compiler REP MOVS byte copy */
        pcVar10 = (char *)((byte *)pcVar10 + uVar4);
      }
      if ((g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8 !=
           nullptr) &&
         ((*(uint *)&g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0x8 & 0x2000000) != 0)) {
        *(uint *)&g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0x8 =
             *(uint *)&g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0x8 & 0xfdfffffe;
        /* ST_CALLSITE[006ADAD6]: CALL dword ptr [EDX + 0x50] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0030 + 0x50))
                  /* ST_CALLSITE[006ADAD6]: CALL dword ptr [EDX + 0x50] */
                  (g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0030,
                   /* ST_CALLSITE[006ADAD6]: CALL dword ptr [EDX + 0x50] */
                   *(undefined4 *)&g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0x4,8);
        /* ST_CALLSITE[006ADAE5]: CALL dword ptr [ECX + 0x4c] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0030 + 0x4c))
                  (g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0030);
      }
      iVar2 = st::fn_006AD3A0((LPCSTR)&local_74c,debugMessage,2);
      if (iVar2 == 4) {
        iVar5 = 1;
        if ((g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8 !=
             nullptr) &&
           ((*(uint *)&g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0x8 & 1) != 0)) {
          *(uint *)&g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0x8 =
               *(uint *)&g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0x8 & 0xfdfffffe;
          /* ST_CALLSITE[006ADB37]: CALL dword ptr [EDX + 0x50] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0030 + 0x50))
                    /* ST_CALLSITE[006ADB37]: CALL dword ptr [EDX + 0x50] */
                    (g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0030,
                     /* ST_CALLSITE[006ADB37]: CALL dword ptr [EDX + 0x50] */
                     *(undefined4 *)&g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0x4,8);
          st::fn_006B08F0(g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8,0x854aa4,0,0x100);
        }
      }
      else if (iVar2 == 3) {
        iVar5 = -1;
      }
      else {
        iVar5 = 0;
        if ((g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8 !=
             nullptr) && (puVar11 != nullptr)) {
          st::fn_006CE770
                    ((uint)g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8,puVar11);
        }
      }
      goto LAB_006ad9d3;
    }
  }
  else {
    *pcVar10 = '\0';
    st::fn_0072EB70((char *)&local_74c,g_int_00854EB4);
    uVar4 = 0;
    if (0 < DAT_00858ddc) {
      do {
        st::fn_00733F70(g_int_00854EB4,st::mutable_c_string("%08X  "));
        uVar4 = uVar4 + 1;
        uVar6 = uVar4 & 0x80000007;
        bVar15 = uVar6 == 0;
        if ((int)uVar6 < 0) {
          bVar15 = (uVar6 - 1 | 0xfffffff8) == 0xffffffff;
        }
        if (bVar15) {
          st::fn_00733F70(g_int_00854EB4,&CHAR_0Ah_007c8ff4);
        }
      } while ((int)uVar4 < DAT_00858ddc);
    }
    uVar4 = uVar4 & 0x80000007;
    bVar15 = uVar4 == 0;
    if ((int)uVar4 < 0) {
      bVar15 = (uVar4 - 1 | 0xfffffff8) == 0xffffffff;
    }
    if (!bVar15) {
      st::fn_00733F70(g_int_00854EB4,&CHAR_0Ah_007c8ff4);
    }
    st::fn_00733D60(g_int_00854EB4);
  }
  iVar5 = -(uint)(isFatal != 0);
LAB_006ad9d3:
  DAT_00858ddc = 0;
  if (-1 < iVar5) {
    return iVar5;
  }
  st::fn_006AD250();
  st::fn_00733B40(0x16);
                    /* WARNING: Subroutine does not return */
  st::fn_0072EFA0(-1);
}

// 006ADB90 FUN_006adb90
#line 4 "decomp/ST.exe/functions/006ADB90/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006ADB90 -> 006AD4D0 @ 006ADC13

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006ADB90 -> 006AD4D0 @ 006ADC13

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006ADB90 -> 006AD4D0 @ 006ADC13 */

int __cdecl st::fn_006ADB90(char *sourceFile,int sourceLine,int errorCode,byte *param_4)

{
  alignas(4) byte st_stack_frame[560];

  char cVar1;
  int local_EAX_41;
  int iVar3;
  uint uVar3;
  int iVar4;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char local_204 [512];

  local_204[0] = '\0';
  if ((param_4 != nullptr) &&
     (local_EAX_41 = st::fn_007300E0
                               (st::pointer_boundary_cast<undefined1 *>(local_204),0x200,param_4,(undefined4 *)(st_stack_frame + 556)),
     local_EAX_41 < 0)) {
    uVar3 = 0xffffffff;
    pcVar6 = "User message too long";
    do {
      pcVar8 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar6 = local_204;
    do {
      pcVar7 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar8 + -uVar3;
    pcVar8 = pcVar7 + -1;
    memmove(pcVar8, pcVar6, uVar3); /* compiler REP MOVS byte copy */
  }
  iVar3 = st::fn_006AD4D0(sourceFile,sourceLine,0,errorCode,st::mutable_c_string("%s"),local_204);
  if (iVar3 == 0) {
    return errorCode;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 006ADC30 FUN_006adc30
#line 4 "decomp/ST.exe/functions/006ADC30/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl st::fn_006ADC30(int *param_1)

{
  uint *puVar2;
  uint puVar1;
  uint uVar3;
  bool bVar4;

  DAT_00854eb0 = st::machine_word_boundary_cast<undefined4>(ExceptionList);
  if (*(int *)*param_1 == -0x7ffffffd) {
    return 0;
  }
  g_int_00854A9C = g_int_00854EB4;
  if (g_int_00854EB4 != nullptr) {
    puVar2 = static_cast<uint *>(ExceptionList);
    if (DAT_007ed79c != 0) {
      st::fn_00733F70(g_int_00854EB4,st::mutable_c_string("\n%d ===========================================  %02d.%02d.%d  %d:%02d:%02d.%03d\n"));
      DAT_007ed79c = 0;
      puVar2 = st::pointer_boundary_cast<uint *>(DAT_00854eb0);
    }
    do {
      DAT_00854eb0 = st::machine_word_boundary_cast<undefined4>(puVar2);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((DAT_00854eb0 == 0) || (*(uint **)(param_1[1] + 0xc4) <= DAT_00854eb0)) break;
      puVar2 = (uint *)*DAT_00854eb0;
    } while (DAT_00854eb0 < (uint *)*DAT_00854eb0);
    st::fn_00733F70(g_int_00854A9C,st::mutable_c_string("\n=============================== Exception %X\n"));
    st::fn_00733F70(g_int_00854A9C,st::mutable_c_string("%08X "));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(*param_1 + 0x10) != 0) {
      st::fn_00733F70(g_int_00854A9C,(char *)&DAT_007ed984);
      DAT_00854aa0 = 0;
      st::fn_00733F70(g_int_00854A9C,st::mutable_c_string("%08X"));
      DAT_00854aa0 = DAT_00854aa0 + 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((int)DAT_00854aa0 < *(int *)(*param_1 + 0x10)) {
        do {
          st::fn_00733F70(g_int_00854A9C,(char *)&DAT_007ed978);
          st::fn_00733F70(g_int_00854A9C,st::mutable_c_string("%08X"));
          DAT_00854aa0 = DAT_00854aa0 + 1;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        } while ((int)DAT_00854aa0 < *(int *)(*param_1 + 0x10));
      }
      st::fn_00733F70(g_int_00854A9C,(char *)&DAT_007ed974);
    }
    st::fn_00733F70(g_int_00854A9C,st::mutable_c_string("----------------\n"));
    st::fn_00733F70(g_int_00854A9C,st::mutable_c_string("%08X  %08X  %08X  %08X  %08X  %08X  %08X  %08X\n"));
    st::fn_00733F70(g_int_00854A9C,st::mutable_c_string("%08X  %08X  %08X  %08X  %08X  %08X            %08X\n"));
    st::fn_00733F70(g_int_00854A9C,st::mutable_c_string("----------------\n"));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    DAT_00854ea4 = st::machine_word_boundary_cast<undefined4>(*(uint **)(param_1[1] + 0xb4));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((*(uint **)(param_1[1] + 0xc4) <= DAT_00854ea4) && (DAT_00854ea4 < DAT_00854eb0)) {
      DAT_00854aa0 = 0;
      st::fn_00733F70(g_int_00854A9C,st::mutable_c_string("%08X  "));
      _DAT_00854ea8 = DAT_00854ea4;
      puVar1 = *DAT_00854ea4;
      bVar4 = DAT_00854ea4 < puVar1;
      DAT_00854ea4 = st::machine_word_boundary_cast<undefined4>((uint *)puVar1);
      if (bVar4) {
        do {
          DAT_00854ea4 = st::machine_word_boundary_cast<undefined4>((uint *)puVar1);
          if (DAT_00854eb0 <= puVar1) break;
          DAT_00854aa0 = DAT_00854aa0 + 1;
          uVar3 = DAT_00854aa0 & 0x80000007;
          bVar4 = uVar3 == 0;
          if ((int)uVar3 < 0) {
            bVar4 = (uVar3 - 1 | 0xfffffff8) == 0xffffffff;
          }
          if (bVar4) {
            st::fn_00733F70(g_int_00854A9C,&CHAR_0Ah_007c8ff4);
          }
          st::fn_00733F70(g_int_00854A9C,st::mutable_c_string("%08X  "));
          _DAT_00854ea8 = DAT_00854ea4;
          puVar1 = *DAT_00854ea4;
          bVar4 = DAT_00854ea4 < puVar1;
          DAT_00854ea4 = st::machine_word_boundary_cast<undefined4>((uint *)puVar1);
        } while (bVar4);
      }
      uVar3 = DAT_00854aa0 & 0x80000007;
      bVar4 = uVar3 == 0;
      if ((int)uVar3 < 0) {
        bVar4 = (uVar3 - 1 | 0xfffffff8) == 0xffffffff;
      }
      if (!bVar4) {
        st::fn_00733F70(g_int_00854A9C,&CHAR_0Ah_007c8ff4);
      }
    }
    st::fn_00733F70(g_int_00854A9C,st::mutable_c_string("----------------\n"));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    DAT_00854a80 = st::machine_word_boundary_cast<undefined4>(*(uint **)(param_1[1] + 0xc4));
    DAT_00854aa0 = 0;
    do {
      if (DAT_00854eb0 <= DAT_00854a80) break;
      st::fn_00733F70(g_int_00854A9C,st::mutable_c_string("%08X  "));
      DAT_00854a80 = DAT_00854a80 + 1;
      DAT_00854aa0 = DAT_00854aa0 + 1;
      uVar3 = DAT_00854aa0 & 0x80000007;
      bVar4 = uVar3 == 0;
      if ((int)uVar3 < 0) {
        bVar4 = (uVar3 - 1 | 0xfffffff8) == 0xffffffff;
      }
      if (bVar4) {
        st::fn_00733F70(g_int_00854A9C,&CHAR_0Ah_007c8ff4);
      }
    } while ((int)DAT_00854aa0 < 400);
    uVar3 = DAT_00854aa0 & 0x80000007;
    bVar4 = uVar3 == 0;
    if ((int)uVar3 < 0) {
      bVar4 = (uVar3 - 1 | 0xfffffff8) == 0xffffffff;
    }
    if (!bVar4) {
      st::fn_00733F70(g_int_00854A9C,&CHAR_0Ah_007c8ff4);
    }
    st::fn_00733F70(g_int_00854A9C,st::mutable_c_string("----------------\n"));
    DAT_00854aa0 = 0;
    if (0 < DAT_00858ddc) {
      do {
        st::fn_00733F70(g_int_00854A9C,st::mutable_c_string("%08X  "));
        DAT_00854aa0 = DAT_00854aa0 + 1;
        uVar3 = DAT_00854aa0 & 0x80000007;
        bVar4 = uVar3 == 0;
        if ((int)uVar3 < 0) {
          bVar4 = (uVar3 - 1 | 0xfffffff8) == 0xffffffff;
        }
        if (bVar4) {
          st::fn_00733F70(g_int_00854A9C,&CHAR_0Ah_007c8ff4);
        }
      } while ((int)DAT_00854aa0 < DAT_00858ddc);
    }
    uVar3 = DAT_00854aa0 & 0x80000007;
    bVar4 = uVar3 == 0;
    if ((int)uVar3 < 0) {
      bVar4 = (uVar3 - 1 | 0xfffffff8) == 0xffffffff;
    }
    if (!bVar4) {
      st::fn_00733F70(g_int_00854A9C,&CHAR_0Ah_007c8ff4);
    }
    DAT_00858ddc = 0;
    st::fn_00733D60(g_int_00854A9C);
    if (g_int_00854EB4 == nullptr) {
      st::fn_0072EA90(g_int_00854A9C);
    }
  }
  return 1;
}

// 006AE110 DArrayDestroy
#line 1 "decomp/ST.exe/functions/006AE110/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00423E00 -> 006AE110 @ 00423E14 | 00436F20 -> 006AE110 @ 00437574 | 00436F20 ->
   006AE110 @ 0043777E | 00436F20 -> 006AE110 @ 00437F09 | 00436F20 -> 006AE110 @ 00437FFD |
   00436F20 -> 006AE110 @ 00438163 | 0044EE30 -> 006AE110 @ 004505D5 | 0044EE30 -> 006AE110 @
   00450668 | 004899A0 -> 006AE110 @ 0048A2F6 | 00490F60 -> 006AE110 @ 00491007 | 004999C0 ->
   006AE110 @ 00499AAE | 0049A620 -> 006AE110 @ 0049A6D3 | 00675EA0 -> 006AE110 @ 00675F3D

   [STUtilityFunctionApplier] darray_destroy: releases dynamic-array storage and the descriptor when
   the ownership flag is set
   Evidence: body pattern verified */

void st::fn_006AE110(DArrayTy *array)

{
  if (array != nullptr) {
    st::fn_006A5E90(static_cast<short *>(array->data));
    if ((array->flags & 8) != 0) {
      st::fn_006A5E90((short *)array);
    }
  }
  return;
}

// 006AE230 FUN_006ae230
#line 4 "decomp/ST.exe/functions/006AE230/decomp.c"
/* [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=6, ignored=0, unknown=0 */

int st::fn_006AE230(uint *param_1)

{
  void *pvVar1;

  pvVar1 = st::fn_006ACF50((void *)param_1[7],(param_1[4] + param_1[5]) * param_1[2]);
  if (pvVar1 == nullptr) {
    return -2;
  }
  if ((*param_1 & 0x100) != 0) {
    /* ST_CALLSITE[006AE26F]: CALL dword ptr [ESI + 0x18] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (*(code *)param_1[6])(pvVar1,param_1[4],param_1[5]);
  }
  param_1[7] = (uint)pvVar1;
  param_1[4] = st::machine_word_boundary_cast<uint>(param_1[4] + param_1[5]);
  return 0;
}

// 006AE3B0 FUN_006ae3b0
#line 4 "decomp/ST.exe/functions/006AE3B0/decomp.c"
int st::fn_006AE3B0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                ,uint param_8,int param_9,int param_10,undefined4 *param_11,int param_12)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint local_3c;
  int local_38;
  uint local_30;
  undefined4 *local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  ushort *local_18;
  int *local_14;
  int local_8;

  iVar4 = param_2 * param_3;
  local_8 = param_12 + -1;
  local_2c = param_11 + local_8 * 2 + 1;
  *(short *)(param_11 + local_8 * 2) = (short)param_8;
  *(short *)((int)param_11 + local_8 * 8 + 2) = (short)param_9;
  *(short *)local_2c = (short)param_10;
  *(undefined2 *)((int)param_11 + local_8 * 8 + 6) = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_30 = param_8;
  uVar5 = st::fn_006A6360(param_5,param_6,param_7,param_8,param_9,param_10);
  local_3c = st::fn_006A6320(uVar5);
  local_28 = local_3c;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (((param_8 == param_5) && (param_9 == param_6)) && (param_10 == param_7)) {
    local_8 = param_12 + -2;
    *(short *)(param_11 + local_8 * 2) = (short)param_5;
    *(short *)((int)param_11 + local_8 * 8 + 2) = (short)param_6;
    *(short *)(param_11 + local_8 * 2 + 1) = (short)param_7;
  }
  else {
    do {
      local_38 = 30000;
      iVar1 = param_1 + (param_9 * param_2 + local_30 + param_10 * iVar4) * 2;
      uVar5 = st::fn_006A6360(param_5,param_6,param_7,local_30,param_9,param_10);
      uVar5 = st::fn_006A6320(uVar5);
      auto param_8_after_write = 0; /* compiler stack-slot lifetime split */
      local_18 = (ushort *)&SHORT_007ed576;
      local_14 = reinterpret_cast<int *>(&DAT_007ed640);
      do {
        iVar11 = (int)(short)local_18[-3];
        uVar6 = local_30 + iVar11;
        if ((-1 < (int)uVar6) && ((int)uVar6 < param_2)) {
          iVar9 = (int)(short)local_18[-2];
          iVar7 = param_9 + iVar9;
          if ((-1 < iVar7) && (iVar7 < param_3)) {
            iVar8 = param_10 + (short)local_18[-1];
            if ((-1 < iVar8) && (iVar8 < param_4)) {
              uVar2 = *local_18;
              if ((uVar2 & 1) == 0) {
                if (((uVar2 & 0x6000) == 0) || ((uVar2 & 0x9fff) == 0xffe)) {
LAB_006ae68b:
                  iVar11 = (int)*(short *)(param_1 + (iVar7 * param_2 + uVar6 + iVar8 * iVar4) * 2);
                  if (((uVar6 == param_5) && (iVar7 == param_6)) && (iVar8 == param_7)) {
                    local_28 = param_8_after_write;
                    local_24 = iVar8;
                    local_20 = iVar7;
                    local_1c = uVar6;
                    break;
                  }
                  if (0 < iVar11) {
                    iVar11 = iVar11 + *local_14;
                    if ((iVar11 < local_38) ||
                       ((iVar11 == local_38 &&
                        (((int)(short)uVar2 == local_3c || ((int)(short)uVar2 == uVar5)))))) {
                      local_28 = param_8_after_write;
                      local_38 = iVar11;
                      local_24 = iVar8;
                      local_20 = iVar7;
                      local_1c = uVar6;
                    }
                  }
                }
                else if ((*(ushort *)(iVar1 + (short)local_18[-1] * iVar4 * 2) & 0xc000) != 0xc000)
                {
                  if (iVar9 == 0) {
                    uVar3 = *(ushort *)(iVar1 + iVar11 * 2);
                  }
                  else {
                    uVar3 = *(ushort *)(iVar1 + iVar9 * param_2 * 2);
                  }
                  goto joined_r0x006ae66d;
                }
              }
              else if (((*(ushort *)(iVar1 + iVar11 * 2) & 0xc000) != 0xc000) &&
                      (iVar9 = iVar9 * param_2, (*(ushort *)(iVar1 + iVar9 * 2) & 0xc000) != 0xc000)
                      ) {
                if ((uVar2 & 0x4000) == 0) {
                  if ((uVar2 & 0x2000) == 0) goto LAB_006ae68b;
                  if ((((*(ushort *)(iVar1 + iVar4 * 2) & 0xc000) != 0xc000) &&
                      ((*(ushort *)(iVar1 + (iVar11 + iVar4) * 2) & 0xc000) != 0xc000)) &&
                     ((*(ushort *)(iVar1 + (iVar9 + iVar4) * 2) & 0xc000) != 0xc000)) {
                    uVar3 = *(ushort *)(iVar1 + (iVar9 + iVar11) * 2);
                    goto joined_r0x006ae66d;
                  }
                }
                else if ((((*(ushort *)(iVar1 + iVar4 * -2) & 0xc000) != 0xc000) &&
                         ((*(ushort *)(iVar1 + (iVar11 - iVar4) * 2) & 0xc000) != 0xc000)) &&
                        ((*(ushort *)(iVar1 + (iVar9 - iVar4) * 2) & 0xc000) != 0xc000)) {
                  uVar3 = *(ushort *)(iVar1 + (iVar9 + iVar11) * 2);
joined_r0x006ae66d:
                  if ((uVar3 & 0xc000) != 0xc000) goto LAB_006ae68b;
                }
              }
            }
          }
        }
        param_8_after_write = param_8_after_write + 1;
        local_14 = local_14 + 1;
        local_18 = local_18 + 4;
      } while ((int)local_14 < 0x7ed6a8);
      local_8 = local_8 + -1;
      local_3c = (uint)(&SHORT_007ed576)[local_28 * 4];
      puVar10 = local_2c + -2;
      *(short *)(local_2c + -3) = (short)local_1c;
      *(short *)((int)local_2c + -10) = (short)local_20;
      *(short *)puVar10 = (short)local_24;
      uVar5 = st::fn_006A6320(local_3c);
      STField<short>(local_2c,2) = (short)uVar5;
      param_9 = local_20;
      param_10 = local_24;
      local_30 = local_1c;
      local_2c = puVar10;
    } while (((local_1c != param_5) || (local_20 != param_6)) || (local_24 != param_7));
  }
  *(undefined2 *)((int)(param_11 + local_8 * 2) + 6) = 0;
  if (0 < local_8) {
    puVar10 = param_11 + local_8 * 2;
    for (iVar4 = (param_12 - local_8 & 0x1fffffffU) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_11 = *puVar10;
      puVar10 = puVar10 + 1;
      param_11 = param_11 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)param_11 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      param_11 = (undefined4 *)((int)param_11 + 1);
    }
  }
  return (param_12 - local_8) + -1;
}

// 006AFF50 FUN_006aff50
#line 4 "decomp/ST.exe/functions/006AFF50/decomp.c"
/* [STReturnSemanticsApplier] shared_tail_return.
   Evidence: every reachable exit is the same unconditional jump into a trusted function body with
   concrete return type /uint; machine CFG audit: used=12, ignored=1, unknown=0 */

uint __cdecl st::fn_006AFF50(int param_1)

{
  uint uVar1_mg2;
  uint uVar1_mg1;
  uint uVar1;

  uVar1 = (param_1 + 0x5a) % 0x168;
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + 0x168;
  }
  if (uVar1 < 0xb5) {
    uVar1_mg1 = st::fn_006AFF93();
  }
  else {
    uVar1_mg2 = st::fn_006AFF93();
    uVar1_mg1 = -uVar1_mg2;
  }
  return uVar1_mg1;
}

// 006AFF5B FUN_006aff5b
#line 4 "decomp/ST.exe/functions/006AFF5B/decomp.c"
/* [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   /uint; every later accumulator definition is an exact full-width integer transform of that value;
   machine CFG audit: used=13, ignored=1, unknown=0 */

uint __cdecl st::fn_006AFF5B(int param_1)

{
  uint local_EAX_38;
  uint uVar1;
  uint uVar2;

  uVar2 = param_1 % 0x168;
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + 0x168;
  }
  if (uVar2 < 0xb5) {
    uVar1 = st::fn_006AFF93();
  }
  else {
    local_EAX_38 = st::fn_006AFF93();
    uVar1 = -local_EAX_38;
  }
  return uVar1;
}

// 006AFF93 FUN_006aff93
#line 1 "decomp/ST.exe/functions/006AFF93/decomp.c"

uint st::fn_006AFF93(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uint in_EAX;
  uint uVar1;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if (0x5a < in_EAX) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    in_EAX = -(in_EAX - 0xb4);
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uVar1 = (uint)*(ushort *)(&DAT_006ce9a0 + in_EAX * 2);
  if (DAT_007eda8c == 100) {
    uVar1 = uVar1 / 100;
  }
  return uVar1;
}

// 006AFFC0 FUN_006affc0
#line 4 "decomp/ST.exe/functions/006AFFC0/decomp.c"
void st::fn_006AFFC0(uint *param_1,uint *param_2,int *param_3)

{
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar5_mg0;
  uint *puVar4_mg0;

  uVar3 = st::machine_word_boundary_cast<uint>(param_1[3] * param_1[2]);
  if (param_3 != nullptr) {
    *param_3 = uVar3 + 0x1c;
  }
  puVar4_mg0 = param_1;
  puVar5_mg0 = param_2;
  memmove(puVar5_mg0, puVar4_mg0, 0x1c); /* compiler REP MOVS byte copy */
  param_2[6] = 0;
  *param_2 = *param_2 & 0xfffffef7;
  puVar4 = (uint *)param_1[7];
  puVar5 = param_2 + 7;
  memmove(puVar5, puVar4, uVar3); /* compiler REP MOVS byte copy */
  return;
}

