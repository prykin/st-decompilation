#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0042.cpp

// 004210A0 FUN_004210a0
#line 1 "decomp/ST.exe/functions/004210A0/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_004210A0(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uint in_ECX;

  if (DAT_00807326 == '\x01') {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_00405218(in_ECX);
    return;
  }
  return;
}

// 004210C0 FUN_004210c0
#line 4 "decomp/ST.exe/functions/004210C0/decomp.c"
undefined4 st::fn_004210C0(void)

{
  return 1;
}

// 00422E20 FUN_00422e20
#line 4 "decomp/ST.exe/functions/00422E20/decomp.c"
void __thiscall st::fn_00422E20(void *this,byte param_1)

{
  STGameObjC *objPtr;
  int iVar1;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_01;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_02;
  undefined4 uVar2;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_03;
  Global_sub_0043FC50_param_1Enum GVar3;

  /* ST_CALLSITE[00422E29]: CALL dword ptr [EAX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  objPtr = (STGameObjC *)(**(code **)(*(int *)this + 4))();
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uVar2 = extraout_ECX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  if (((STField<int>(this,0x20) != 0x14) ||
      (iVar1 = st::fn_00402EDC(objPtr), uVar2 = extraout_ECX_00, iVar1 != 0x14)) ||
     (objPtr->field_05C0 != 3)) {
    if (((param_1 & 1) != 0) && ((STField<byte>(this,0x1d1) & 1) == 0)) {
      /* ST_CALLSITE[00422E66]: CALL 0x0040464c; direct=0040464C sub_0041C5A0 */
      st::fn_0040464C(this);
      STField<uint>(this,0x1d1) = STField<uint>(this,0x1d1) | 1;
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      uVar2 = extraout_ECX_01;
    }
    if (((param_1 & 2) != 0) && ((STField<uint>(this,0x1d1) & 2) == 0)) {
      STField<uint>(this,0x1d1) = STField<uint>(this,0x1d1) | 2;
      if (STField<int>(this,0x20) == 0x14) {
        iVar1 = 0;
        do {
          st::fn_004024E1(DAT_0080874d,0,iVar1,STField<char>(this,0x24),
                             STReplaceLowWord((uint32_t)(uVar2), (uint16_t)(STField<undefined2>(this,0x32))));
          iVar1 = iVar1 + 1;
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          uVar2 = extraout_ECX_02;
        } while (iVar1 < 5);
      }
      else {
        iVar1 = 0;
        do {
          st::fn_004024E1(DAT_0080874d,1,iVar1,STField<char>(this,0x24),
                             STReplaceLowWord((uint32_t)(uVar2), (uint16_t)(STField<undefined2>(this,0x32))));
          iVar1 = iVar1 + 1;
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          uVar2 = extraout_ECX_03;
        } while (iVar1 < 5);
      }
      /* ST_CALLSITE[00422EEF]: CALL 0x00403643; direct=00403643 STAllPlayersC::DelObjFromSaveTmps */
      st::fn_00403643
                (g_allPlayers_007FA174,STField<int>(this,0x20),STField<char>(this,0x24),
                 STField<short>(this,0x32));
    }
    if ((((param_1 & 4) != 0) && ((STField<uint>(this,0x1d1) & 4) == 0)) &&
       (STField<uint>(this,0x1d1) = STField<uint>(this,0x1d1) | 4,
       STField<int>(this,0x21d) == 1)) {
      if (STField<int>(this,0x20) == 0x14) {
        st::fn_00404C55(CASE_1,0);
        GVar3 = CASE_2;
      }
      else {
        st::fn_00404C55(CASE_4,0);
        GVar3 = CASE_5;
      }
      st::fn_00404C55(GVar3,0);
    }
    if (((param_1 & 8) != 0) && ((STField<uint>(this,0x1d1) & 8) == 0)) {
      STField<uint>(this,0x1d1) = STField<uint>(this,0x1d1) | 8;
    }
    if (((param_1 & 0x10) != 0) && ((STField<uint>(this,0x1d1) & 0x10) == 0)) {
      STField<uint>(this,0x1d1) = STField<uint>(this,0x1d1) | 0x10;
    }
  }
  return;
}

// 00422FF0 FUN_00422ff0
#line 4 "decomp/ST.exe/functions/00422FF0/decomp.c"
void __thiscall st::fn_00422FF0(void *this,byte param_1)

{
  STGameObjC *objPtr;
  int iVar1;

  /* ST_CALLSITE[00422FF9]: CALL dword ptr [EAX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  objPtr = (STGameObjC *)(**(code **)(*(int *)this + 4))();
  if (((STField<int>(this,0x20) == 0x14) && (iVar1 = st::fn_00402EDC(objPtr), iVar1 == 0x14))
     && (objPtr->field_05C0 == 3)) {
    return;
  }
  if (((param_1 & 1) != 0) && ((STField<uint>(this,0x1d1) & 1) != 0)) {
    STField<uint>(this,0x1d1) = STField<uint>(this,0x1d1) & 0xfffffffe;
    /* ST_CALLSITE[00423043]: CALL 0x004023a1; direct=004023A1 TLOEmbryoTy::sub_0041C3F0 */
    st::fn_004023A1(st::pointer_boundary_cast<TLOEmbryoTy *>(this),STField<undefined *>(this,0x101));
  }
  if (((param_1 & 2) != 0) && ((STField<uint>(this,0x1d1) & 2) != 0)) {
    STField<uint>(this,0x1d1) = STField<uint>(this,0x1d1) & 0xfffffffd;
  }
  if ((param_1 & 4) != 0) {
    if ((STField<uint>(this,0x1d1) & 4) != 0) {
      STField<uint>(this,0x1d1) = STField<uint>(this,0x1d1) & 0xfffffffb;
    }
    if (STField<int>(this,0x21d) == 1) {
      if (STField<int>(this,0x20) == 0x14) {
        st::fn_00404EEE();
      }
      if ((STField<int>(this,0x20) == 1000) || (STField<int>(this,0x20) == 0x3e9)) {
        st::fn_0040443F();
      }
    }
  }
  if (((param_1 & 8) != 0) && ((STField<uint>(this,0x1d1) & 8) != 0)) {
    STField<uint>(this,0x1d1) = STField<uint>(this,0x1d1) & 0xfffffff7;
  }
  if (((param_1 & 0x10) != 0) && ((STField<uint>(this,0x1d1) & 0x10) != 0)) {
    STField<uint>(this,0x1d1) = STField<uint>(this,0x1d1) & 0xffffffef;
  }
  return;
}

// 00423120 FUN_00423120
#line 4 "decomp/ST.exe/functions/00423120/decomp.c"
undefined4 __fastcall st::fn_00423120(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(param_1 + 0x1d1);
}

// 00423140 FUN_00423140
#line 4 "decomp/ST.exe/functions/00423140/decomp.c"
undefined4 st::fn_00423140(void)

{
  return 0;
}

// 00423160 FUN_00423160
#line 1 "decomp/ST.exe/functions/00423160/decomp.c"

/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_00423160(void)

{
  return;
}

// 00423180 FUN_00423180
#line 1 "decomp/ST.exe/functions/00423180/decomp.c"

/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_00423180(void)

{
  return;
}

// 004231A0 FUN_004231a0
#line 4 "decomp/ST.exe/functions/004231A0/decomp.c"
undefined4 st::fn_004231A0(void)

{
  return 0;
}

// 004231C0 FUN_004231c0
#line 1 "decomp/ST.exe/functions/004231C0/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_004231C0(void)

{
  return;
}

// 004231E0 FUN_004231e0
#line 4 "decomp/ST.exe/functions/004231E0/decomp.c"
undefined4 st::fn_004231E0(void)

{
  return 0;
}

// 00423200 FUN_00423200
#line 4 "decomp/ST.exe/functions/00423200/decomp.c"
undefined4 st::fn_00423200(void)

{
  return 0;
}

// 00423220 FUN_00423220
#line 4 "decomp/ST.exe/functions/00423220/decomp.c"
int __thiscall st::fn_00423220(void *this,int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar4 = 0;
  if (param_2 != 1) {
    piVar1 = param_1;
    iVar5 = param_2;
    if (0 < param_2) {
      do {
        iVar4 = iVar4 + *piVar1;
        iVar5 = iVar5 + -1;
        piVar1 = piVar1 + 0xb;
      } while (iVar5 != 0);
    }
    uVar2 = *(int *)this * 0x41c64e6d + 0x3039;
    *(uint *)this = uVar2;
    iVar3 = 0;
    iVar5 = 0;
    if (0 < param_2) {
      do {
        iVar3 = iVar3 + *param_1;
        if ((int)((uVar2 >> 0x10) % (iVar4 + 1U)) <= iVar3) {
          return iVar5;
        }
        iVar5 = iVar5 + 1;
        param_1 = param_1 + 0xb;
      } while (iVar5 < param_2);
    }
  }
  return 0;
}

// 004232E0 FUN_004232e0
#line 4 "decomp/ST.exe/functions/004232E0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0065D6A0 -> 004232E0 @ 0065D6C8; AiFltClassTy::sub_0065D6A0 this; stable alias ESI */

void __thiscall st::fn_004232E0(void *this,AiFltClassTy *param_1)

{
  STField<AiFltClassTy *>(this,0x1c) = param_1;
  return;
}

// 00423300 FUN_00423300
#line 4 "decomp/ST.exe/functions/00423300/decomp.c"
undefined4 __fastcall st::fn_00423300(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(param_1 + 0x1c);
}

// 00423320 FUN_00423320
#line 4 "decomp/ST.exe/functions/00423320/decomp.c"
void __thiscall st::fn_00423320(void *this,undefined4 param_1)

{
  undefined1 local_24 [16];
  undefined4 local_14;

  if (STField<undefined4 *>(this,0x1c) != nullptr) {
    local_14 = param_1;
    /* ST_CALLSITE[00423339]: CALL dword ptr [EDX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)*STField<undefined4 *>(this,0x1c))(local_24);
  }
  return;
}

// 00423360 FUN_00423360
#line 4 "decomp/ST.exe/functions/00423360/decomp.c"
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __fastcall st::fn_00423360(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 1;
  return;
}

// 00423380 FUN_00423380
#line 4 "decomp/ST.exe/functions/00423380/decomp.c"
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __fastcall st::fn_00423380(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

// 004233A0 FUN_004233a0
#line 4 "decomp/ST.exe/functions/004233A0/decomp.c"
undefined4 __fastcall st::fn_004233A0(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(param_1 + 0x20);
}

// 004233C0 FUN_004233c0
#line 4 "decomp/ST.exe/functions/004233C0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0042D770 -> 004233C0 @ 0042D8CF; return of FUN_0042b760 | 0042F2B0 -> 004233C0 @
   0042FFCC; return of FUN_0042b760 */

undefined2 __fastcall st::fn_004233C0(STGroupBoatC *param_1)

{
  return param_1->field_0027;
}

// 004237D0 FUN_004237d0
#line 4 "decomp/ST.exe/functions/004237D0/decomp.c"
undefined4 __thiscall st::fn_004237D0(void *this,short param_1)

{
  uint uVar1;
  uint index;
  uint uVar2;
  undefined4 uStack_8;

  uVar2 = 0;
  uVar1 = *(uint *)(STField<int>(this,0x29) + 0xc);
  if (uVar1 != 0) {
    index = 0;
    uStack_8 = st::machine_word_boundary_cast<undefined4>(this);
    do {
      st::fn_006ACC70(STField<DArrayTy *>(this,0x29),index,(void *)((int)&uStack_8 + 2));
      if (STPiece<2,2>(uStack_8) == param_1) {
        return 1;
      }
      uVar2 = uVar2 + 1;
      index = uVar2 & 0xffff;
    } while (index < uVar1);
  }
  return 0;
}

// 00423C70 FUN_00423c70
#line 4 "decomp/ST.exe/functions/00423C70/decomp.c"
undefined4 __thiscall st::fn_00423C70(void *this,short param_1)

{
  uint uVar1;
  undefined4 uVar2;
  STGameObjC *this_00;
  uint index;
  uint uVar3;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined2 local_14;
  short local_12;
  undefined4 local_10;
  undefined4 local_8;

  uVar1 = *(uint *)(STField<int>(this,0x29) + 0xc);
  uVar2 = 0xffffffff;
  if ((uVar1 != 0) && (uVar3 = 0, uVar1 != 0)) {
    index = 0;
    while( true ) {
      st::fn_006ACC70(STField<DArrayTy *>(this,0x29),index,&local_8);
      if ((ushort)local_8 == param_1) break;
      uVar3 = uVar3 + 1;
      index = uVar3 & 0xffff;
      if (uVar1 <= index) {
        return 0xffffffff;
      }
    }
    /* ST_CALLSITE[00423CD3]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    this_00 = st::fn_004028BA
                        (g_allPlayers_007FA174,STField<char>(this,0x24),(ushort)local_8,CASE_1);
    st::fn_004033BE(this_00,0xffff);
    local_8 = 0xffff;
    st::fn_006AE140(STField<DArrayTy *>(this,0x29),uVar3 & 0xffff,&local_8);
    STField<short>(this,0x27) = STField<short>(this,0x27) + -1;
    if (STField<undefined4 *>(this,0x1c) != nullptr) {
      local_18 = 0x5d96;
      local_14 = 1;
      local_12 = param_1;
      local_10 = this_00->field_0018;
      /* ST_CALLSITE[00423D2F]: CALL dword ptr [EDX] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)*STField<undefined4 *>(this,0x1c))(local_28);
    }
    uVar2 = 0;
  }
  return uVar2;
}

// 00423D80 FUN_00423d80
#line 4 "decomp/ST.exe/functions/00423D80/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00423D80 -> 006ACC70 @ 00423DA9 | 0042B7D0 -> 00423D80 @ 0042B85E;
   STAllPlayersC::AddObjsToGroup parameter groupContent */

undefined4 __thiscall st::fn_00423D80(void *this,DArrayTy *groupContent)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint index;
  uint uVar4;
  undefined4 local_c;
  undefined4 local_8;

  uVar1 = groupContent->count;
  local_8 = 0;
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar4 = 0, uVar1 != 0)) {
    index = 0;
    do {
      st::fn_006ACC70(groupContent,index,&local_c);
      /* ST_CALLSITE[00423DB6]: CALL dword ptr [EDX + 0x4] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar2 = (**(code **)(*(int *)this + 4))(local_c);
      if (iVar2 == 0) {
        local_8 = 1;
      }
      uVar4 = uVar4 + 1;
      index = uVar4 & 0xffff;
      uVar3 = local_8;
    } while (index < uVar1);
  }
  return uVar3;
}

// 00423E00 FUN_00423e00
#line 4 "decomp/ST.exe/functions/00423E00/decomp.c"
void __fastcall st::fn_00423E00(void *param_1)

{
  DArrayTy *groupContent;

  /* ST_CALLSITE[00423E04]: CALL 0x00402db5; direct=00402DB5 STGroupC::GetGroupContent */
  groupContent = (DArrayTy *)st::fn_00402DB5(st::pointer_boundary_cast<STGroupC *>(param_1));
  st::fn_004031E8(param_1,groupContent);
  st::fn_006AE110(groupContent);
  return;
}

// 00423E30 FUN_00423e30
#line 4 "decomp/ST.exe/functions/00423E30/decomp.c"
void st::fn_00423E30(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;

  if (param_2 < param_3 + param_2) {
    uVar1 = (param_3 + param_2) - param_2;
    puVar3 = (undefined4 *)(param_1 + param_2 * 2);
    for (uVar2 = uVar1 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    for (uVar1 = (uint)((uVar1 & 1) != 0); uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined2 *)puVar3 = 0xffff;
      puVar3 = (undefined4 *)((int)puVar3 + 2);
    }
  }
  return;
}

// 00423E70 FUN_00423e70
#line 4 "decomp/ST.exe/functions/00423E70/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00423E70 returns return of STAllPlayersC::GetObjPtr @ 00423E89
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: previous_type=/uint
   parameter=/ushort Evidence: entry-use width=/ushort; unmasked_dword_reads=0; evidence=00423E73
   MOV EAX,dword ptr [EBP + 0x8]; first-use mask or exact narrow callee formal */

STGameObjC * __thiscall st::fn_00423E70(void *this,ushort param_1)

{
  STGameObjC *pSVar1;

  /* ST_CALLSITE[00423E83]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
  pSVar1 = st::fn_004028BA
                     (g_allPlayers_007FA174,STField<char>(this,0x24),param_1,CASE_1);
  return pSVar1;
}

// 004244D0 FUN_004244d0
#line 4 "decomp/ST.exe/functions/004244D0/decomp.c"
undefined4 st::fn_004244D0(void)

{
  return 0xffffffff;
}

// 00424530 FUN_00424530
#line 4 "decomp/ST.exe/functions/00424530/decomp.c"
void __thiscall st::fn_00424530(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  STGameObjC *this_00;
  uint index;
  uint uVar3;

  uVar2 = param_1;
  uVar1 = *(uint *)(STField<int>(this,0x29) + 0xc);
  if (((param_1 & 1) != 0) && ((STField<uint>(this,0x35) & 1) == 0)) {
    STField<uint>(this,0x35) = STField<uint>(this,0x35) | 1;
  }
  if (((param_1 & 2) != 0) && ((STField<uint>(this,0x35) & 2) == 0)) {
    STField<uint>(this,0x35) = STField<uint>(this,0x35) | 2;
  }
  if (((param_1 & 4) != 0) && ((STField<uint>(this,0x35) & 4) == 0)) {
    STField<uint>(this,0x35) = STField<uint>(this,0x35) | 4;
  }
  if (((param_1 & 8) != 0) && ((STField<uint>(this,0x35) & 8) == 0)) {
    STField<uint>(this,0x35) = STField<uint>(this,0x35) | 8;
  }
  if (((param_1 & 0x10) != 0) && ((STField<uint>(this,0x35) & 0x10) == 0)) {
    STField<uint>(this,0x35) = STField<uint>(this,0x35) | 0x10;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    index = 0;
    do {
      st::fn_006ACC70(STField<DArrayTy *>(this,0x29),index,&param_1);
      if ((ushort)param_1 != 0xffff) {
        /* ST_CALLSITE[004245C4]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        this_00 = st::fn_004028BA
                            (g_allPlayers_007FA174,STField<char>(this,0x24),(ushort)param_1,
                             CASE_1);
        /* ST_CALLSITE[004245CE]: CALL dword ptr [EDX + 0x100]; [STIndirectCallsiteApplier] exact slot 0x100; signature=__thiscall;/undefined1;pointer:/STGameObjC;/undefined1 */
        this_00->vfunc_100((char)uVar2);
      }
      uVar3 = uVar3 + 1;
      index = uVar3 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

// 00424620 FUN_00424620
#line 4 "decomp/ST.exe/functions/00424620/decomp.c"
void __thiscall st::fn_00424620(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  STGameObjC *this_00;
  uint index;
  uint uVar3;

  uVar2 = param_1;
  uVar1 = *(uint *)(STField<int>(this,0x29) + 0xc);
  if (((param_1 & 1) != 0) && ((STField<uint>(this,0x35) & 1) != 0)) {
    STField<uint>(this,0x35) = STField<uint>(this,0x35) & 0xfffffffe;
  }
  if (((param_1 & 2) != 0) && ((STField<uint>(this,0x35) & 2) != 0)) {
    STField<uint>(this,0x35) = STField<uint>(this,0x35) & 0xfffffffd;
  }
  if (((param_1 & 4) != 0) && ((STField<uint>(this,0x35) & 4) != 0)) {
    STField<uint>(this,0x35) = STField<uint>(this,0x35) & 0xfffffffb;
  }
  if (((param_1 & 8) != 0) && ((STField<uint>(this,0x35) & 8) != 0)) {
    STField<uint>(this,0x35) = STField<uint>(this,0x35) & 0xfffffff7;
  }
  if (((param_1 & 0x10) != 0) && ((STField<uint>(this,0x35) & 0x10) != 0)) {
    STField<uint>(this,0x35) = STField<uint>(this,0x35) & 0xffffffef;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    index = 0;
    do {
      st::fn_006ACC70(STField<DArrayTy *>(this,0x29),index,&param_1);
      if ((ushort)param_1 != 0xffff) {
        /* ST_CALLSITE[004246B4]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        this_00 = st::fn_004028BA
                            (g_allPlayers_007FA174,STField<char>(this,0x24),(ushort)param_1,
                             CASE_1);
        /* ST_CALLSITE[004246BE]: CALL dword ptr [EDX + 0x104]; [STIndirectCallsiteApplier] exact slot 0x104; signature=__thiscall;/undefined1;pointer:/STGameObjC;/undefined1 */
        this_00->vfunc_104((char)uVar2);
      }
      uVar3 = uVar3 + 1;
      index = uVar3 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

// 00424710 FUN_00424710
#line 4 "decomp/ST.exe/functions/00424710/decomp.c"
undefined4 st::fn_00424710(void)

{
  return 0;
}

// 00424730 FUN_00424730
#line 4 "decomp/ST.exe/functions/00424730/decomp.c"
undefined4 st::fn_00424730(void)

{
  return 0;
}

// 00424750 FUN_00424750
#line 4 "decomp/ST.exe/functions/00424750/decomp.c"
undefined4 st::fn_00424750(void)

{
  return 0;
}

// 00424770 FUN_00424770
#line 4 "decomp/ST.exe/functions/00424770/decomp.c"
undefined4 st::fn_00424770(void)

{
  return 0;
}

// 00424790 FUN_00424790
#line 4 "decomp/ST.exe/functions/00424790/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00491720 -> 00424790 @ 004917FC; return of FUN_0042b760 */

undefined4 __fastcall st::fn_00424790(STGroupBoatC *param_1)

{
  return param_1->field_0035;
}

// 004248A0 FUN_004248a0
#line 4 "decomp/ST.exe/functions/004248A0/decomp.c"
void __thiscall st::fn_004248A0(void *this,undefined4 param_1)

{
  st::fn_00403CFB(STReplaceLowByte((uint32_t)(param_1), (uint8_t)(STField<undefined1>(this,0x24))),
                     STField<DArrayTy *>(this,0x29),param_1);
  return;
}

// 004248D0 sub_004248D0
#line 4 "decomp/ST.exe/functions/004248D0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_5 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004248D0_param_5Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3

   [STSwitchEnumApplier] Switch target param_6 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004248D0_param_6Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3

   [STSwitchEnumApplier] Switch target param_5 uses
   /SubmarineTitans/Recovered/Enums/SubmarineTitans_Recovered_HiddenThis_AnonReceiver_004248D0_sub_004248D0_param_5Enum.
   Cases: CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3

   [STSwitchEnumApplier] Switch target param_6 uses
   /SubmarineTitans/Recovered/Enums/SubmarineTitans_Recovered_HiddenThis_AnonReceiver_004248D0_sub_004248D0_param_6Enum.
   Cases: CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

int __thiscall
st::fn_004248D0(void *this,int param_1,int param_2,int param_3,int param_4,
            Global_sub_004248D0_param_5Enum param_5,Global_sub_004248D0_param_6Enum param_6)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  uint uVar9;
  int iVar10;

  sVar8 = (short)param_3;
  sVar4 = sVar8;
  if ((param_5 & CASE_2) != CASE_0) {
    sVar4 = sVar8 + 1;
  }
  *(short *)(param_1 + param_2 * 8) = STField<short>(this,0x374) + sVar4;
  iVar6 = param_4 + 1;
  if ((param_5 & CASE_1) == CASE_0) {
    iVar6 = param_4;
  }
  *(short *)(param_1 + 2 + param_2 * 8) = (short)iVar6 + STField<short>(this,0x378);
  *(short *)(param_1 + 6 + param_2 * 8) = (short)param_5;
  iVar6 = STField<int>(this,0x37c);
  iVar10 = iVar6 * param_4 + param_3;
  iVar3 = STField<int>(this,0x390);
  uVar9 = (uint)*(byte *)(iVar3 + iVar10);
  switch(param_5) {
  case CASE_0:
    if (0 < param_4) {
      pbVar1 = (byte *)((iVar3 - iVar6) + iVar10);
      uVar5 = (uint)*pbVar1;
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
      if (param_3 < 1) break;
      uVar5 = (uint)pbVar1[-1];
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
    }
    if (0 < param_3) {
      bVar2 = *(byte *)(iVar3 + -1 + iVar10);
LAB_00424a62:
      uVar5 = (uint)bVar2;
      if (uVar9 < uVar5) {
        iVar6 = uVar5 - uVar9;
        goto joined_r0x00424ada;
      }
    }
    break;
  case CASE_1:
    if (param_4 < STField<int>(this,0x370) + -1) {
      pbVar1 = (byte *)(STField<int>(this,0x390) + iVar6 + iVar10);
      uVar5 = (uint)*pbVar1;
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
      if (param_3 < 1) break;
      uVar5 = (uint)pbVar1[-1];
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
    }
    if (0 < param_3) {
      bVar2 = *(byte *)(STField<int>(this,0x390) + -1 + iVar10);
      goto LAB_00424a62;
    }
    break;
  case CASE_2:
    if (0 < param_4) {
      pbVar1 = (byte *)((iVar3 - iVar6) + iVar10);
      uVar5 = (uint)*pbVar1;
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
      if (((param_3 < STField<int>(this,0x370) + -1) && (uVar5 = (uint)pbVar1[1], uVar9 < uVar5))
         && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
    }
    if (param_3 < STField<int>(this,0x370) + -1) {
      bVar2 = *(byte *)(iVar3 + 1 + iVar10);
      goto LAB_00424a62;
    }
    break;
  case CASE_3:
    iVar3 = STField<int>(this,0x370) + -1;
    if (param_4 < iVar3) {
      pbVar1 = (byte *)(STField<int>(this,0x390) + iVar6 + iVar10);
      uVar5 = (uint)*pbVar1;
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
      if (iVar3 <= param_3) break;
      uVar5 = (uint)pbVar1[1];
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
    }
    if ((param_3 < iVar3) &&
       (uVar5 = (uint)*(byte *)(STField<int>(this,0x390) + 1 + iVar10), uVar9 < uVar5)) {
      iVar6 = uVar5 - uVar9;
joined_r0x00424ada:
      if (iVar6 < 0xb) {
        uVar9 = uVar5;
      }
    }
  }
  *(short *)(param_1 + 4 + param_2 * 8) = (short)uVar9;
  iVar6 = param_2 + 1;
  if ((int)param_6 < 0) {
    return iVar6;
  }
  if ((param_6 & CASE_2) != CASE_0) {
    sVar8 = sVar8 + 1;
  }
  *(short *)(param_1 + iVar6 * 8) = STField<short>(this,0x374) + sVar8;
  sVar8 = (short)param_4;
  if ((param_6 & CASE_1) != CASE_0) {
    sVar8 = sVar8 + 1;
  }
  *(short *)(param_1 + 2 + iVar6 * 8) = sVar8 + STField<short>(this,0x378);
  *(short *)(param_1 + 6 + iVar6 * 8) = (short)param_6;
  iVar3 = STField<int>(this,0x390);
  uVar9 = (uint)*(byte *)(iVar3 + iVar10);
  switch(param_6) {
  case CASE_0:
    if (0 < param_4) {
      pbVar1 = (byte *)((iVar3 - STField<int>(this,0x37c)) + iVar10);
      uVar5 = (uint)*pbVar1;
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
      if (param_3 < 1) goto switchD_00424b43_default;
      uVar5 = (uint)pbVar1[-1];
      if (uVar9 < uVar5) {
        iVar7 = uVar5 - uVar9;
joined_r0x00424bef:
        if (iVar7 < 0xb) {
          uVar9 = uVar5;
        }
      }
    }
    break;
  case CASE_1:
    if (param_4 < STField<int>(this,0x370) + -1) {
      pbVar1 = (byte *)(iVar3 + STField<int>(this,0x37c) + iVar10);
      uVar5 = (uint)*pbVar1;
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
      if (param_3 < 1) goto switchD_00424b43_default;
      uVar5 = (uint)pbVar1[-1];
      if (uVar9 < uVar5) {
        iVar7 = uVar5 - uVar9;
        goto joined_r0x00424bef;
      }
    }
    break;
  case CASE_2:
    if (0 < param_4) {
      iVar7 = iVar3 - STField<int>(this,0x37c);
      uVar5 = (uint)*(byte *)(iVar7 + iVar10);
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
      if (((param_3 < STField<int>(this,0x370) + -1) &&
          (uVar5 = (uint)*(byte *)(iVar7 + iVar10 + 1), uVar9 < uVar5)) &&
         ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
    }
    if (STField<int>(this,0x370) + -1 <= param_3) goto switchD_00424b43_default;
    bVar2 = *(byte *)(iVar3 + 1 + iVar10);
    goto LAB_00424c56;
  case CASE_3:
    iVar7 = STField<int>(this,0x370) + -1;
    if (param_4 < iVar7) {
      pbVar1 = (byte *)(iVar3 + STField<int>(this,0x37c) + iVar10);
      uVar5 = (uint)*pbVar1;
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
      if (iVar7 <= param_3) goto switchD_00424b43_default;
      uVar5 = (uint)pbVar1[1];
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
    }
    if (((iVar7 <= param_3) || (uVar5 = (uint)*(byte *)(iVar3 + 1 + iVar10), uVar5 <= uVar9)) ||
       (10 < (int)(uVar5 - uVar9))) goto switchD_00424b43_default;
    goto LAB_00424cca;
  default:
    goto switchD_00424b43_default;
  }
  if (0 < param_3) {
    bVar2 = *(byte *)(iVar3 + -1 + iVar10);
LAB_00424c56:
    uVar5 = (uint)bVar2;
    if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
LAB_00424cca:
      uVar9 = uVar5;
    }
  }
switchD_00424b43_default:
  *(short *)(param_1 + 4 + iVar6 * 8) = (short)uVar9;
  return param_2 + 2;
}

// 00428A10 FUN_00428a10
#line 4 "decomp/ST.exe/functions/00428A10/decomp.c"
undefined4 __cdecl st::fn_00428A10(uint param_1)

{
  char *text;
  int iVar1;

  if (g_cLoading_00802A58 == nullptr) {
    return 0xffffffff;
  }
  if ((int)param_1 < 0) {
    DAT_007f4e00 = -param_1;
    iVar1 = DAT_007f4e00;
    text = st::fn_006B0140(0x2684,g_hINSTANCE_00807618);
    /* ST_CALLSITE[00428A4A]: CALL 0x00404d8b; direct=00404D8B cLoadingTy::SetProcess */
    st::fn_00404D8B(g_cLoading_00802A58,0,text,iVar1);
    /* ST_CALLSITE[00428A5B]: CALL 0x00403472; direct=00403472 cLoadingTy::SetState */
    st::fn_00403472(g_cLoading_00802A58,CASE_0,0,nullptr);
    return 0;
  }
  /* ST_CALLSITE[00428A69]: CALL 0x00403472; direct=00403472 cLoadingTy::SetState */
  st::fn_00403472(g_cLoading_00802A58,CASE_1,param_1,nullptr);
  return 0;
}

// 00428AA0 FUN_00428aa0
#line 4 "decomp/ST.exe/functions/00428AA0/decomp.c"
undefined4 __cdecl st::fn_00428AA0(uint param_1)

{
  int iVar1;
  char *text;

  if (g_cLoading_00802A58 == nullptr) {
    return 0xffffffff;
  }
  if ((int)param_1 < 0) {
    iVar1 = -param_1;
    text = st::fn_006B0140(0x2681,g_hINSTANCE_00807618);
    /* ST_CALLSITE[00428AD5]: CALL 0x00404d8b; direct=00404D8B cLoadingTy::SetProcess */
    st::fn_00404D8B(g_cLoading_00802A58,0,text,iVar1);
    /* ST_CALLSITE[00428AE6]: CALL 0x00403472; direct=00403472 cLoadingTy::SetState */
    st::fn_00403472(g_cLoading_00802A58,CASE_0,0,nullptr);
    return 0;
  }
  /* ST_CALLSITE[00428AF4]: CALL 0x00403472; direct=00403472 cLoadingTy::SetState */
  st::fn_00403472(g_cLoading_00802A58,CASE_1,param_1,nullptr);
  return 0;
}

// 00428B20 FUN_00428b20
#line 4 "decomp/ST.exe/functions/00428B20/decomp.c"
int __cdecl st::fn_00428B20(int *param_1,uint param_2,uint param_3,uint *param_4)

{
  bool bVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  int *piVar7;

  local_8 = param_3;
  piVar7 = param_1;
  do {
    uVar3 = param_2 >> 2;
    bVar10 = uVar3 == 0;
    piVar8 = piVar7;
    do {
      piVar7 = piVar8;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      piVar7 = piVar8 + 1;
      bVar10 = *piVar8 == -1;
      piVar8 = piVar7;
    } while (bVar10);
    if (!bVar10) {
      local_8 = param_3 - local_8;
      piVar8 = (int *)((int)param_1 + (param_3 - 1) * param_2);
      goto LAB_00428b85;
    }
    uVar3 = local_8 - 1;
    bVar10 = 0 < (int)local_8;
    local_8 = uVar3;
  } while (uVar3 != 0 && bVar10);
  local_8 = param_3;
  local_c = -1;
  local_10 = param_2;
  local_14 = -1;
  goto LAB_00428c07;
  while( true ) {
    piVar8 = (int *)((int)piVar9 + param_2 * -2 + uVar3);
    uVar4 = param_3 - 1;
    bVar10 = (int)param_3 < 1;
    param_3 = uVar4;
    if (uVar4 == 0 || bVar10) break;
LAB_00428b85:
    uVar3 = param_2 >> 2;
    bVar10 = uVar3 == 0;
    do {
      piVar9 = piVar8;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      piVar9 = piVar8 + 1;
      bVar10 = *piVar8 == -1;
      piVar8 = piVar9;
    } while (bVar10);
    uVar4 = param_3;
    if (!bVar10) break;
  }
  local_c = uVar4 - 1;
  local_10 = param_2;
  local_14 = 0;
  piVar8 = (int *)((int)param_1 + local_8 * param_2);
  bVar10 = SCARRY4(local_c - local_8,1);
  iVar5 = (local_c - local_8) + 1;
  do {
    uVar3 = local_10 >> 2;
    piVar9 = piVar8;
    if (local_10 >> 2 != 0 && !bVar10) {
      do {
        if (*piVar9 != -1) {
          local_10 = (int)piVar9 - (int)piVar8;
          break;
        }
        uVar4 = uVar3 - 1;
        bVar10 = 0 < (int)uVar3;
        uVar3 = uVar4;
        piVar9 = piVar9 + 1;
      } while (uVar4 != 0 && bVar10);
    }
    uVar3 = param_2 - local_14 >> 2;
    piVar9 = (int *)((int)piVar8 + param_2);
    if (uVar3 != 0 && !SBORROW4((int)((int)piVar8 + param_2),4)) {
      do {
        if (piVar9[-1] != -1) {
          local_14 = (int)piVar9 - (int)piVar8;
          break;
        }
        uVar4 = uVar3 - 1;
        bVar10 = 0 < (int)uVar3;
        uVar3 = uVar4;
        piVar9 = piVar9 + -1;
      } while (uVar4 != 0 && bVar10);
    }
    piVar8 = (int *)((int)piVar8 + param_2);
    bVar10 = SBORROW4(iVar5,1);
    iVar6 = iVar5 + -1;
    bVar1 = 0 < iVar5;
    iVar5 = iVar6;
  } while (iVar6 != 0 && bVar1);
LAB_00428c07:
  param_4[1] = local_8;
  *param_4 = local_10;
  uVar3 = (local_c - local_8) + 1;
  param_4[3] = uVar3;
  param_4[2] = local_14 - local_10;
  if (local_c < (int)local_8) {
    return 0;
  }
  uVar3 = (local_14 - local_10) * uVar3;
  pvVar2 = st::fn_006AAC70(uVar3);
  st::fn_006B0290((int)pvVar2,param_4[2],0,0,param_1,param_2,*param_4,param_4[1],param_4[2],param_4[3]);
  DAT_007f4dd0 = DAT_007f4dd0 + uVar3;
  return (int)pvVar2;
}

// 00428CE0 FUN_00428ce0
#line 4 "decomp/ST.exe/functions/00428CE0/decomp.c"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __cdecl
st::fn_00428CE0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            byte param_8)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  if ((param_5 < 1) || (param_6 < 1)) {
    return 0;
  }
  do {
    iVar6 = param_5 + -1;
    iVar7 = 0;
    do {
      cVar2 = *(char *)(param_3 + iVar7);
      iVar5 = iVar6;
      iVar8 = iVar7;
      while (cVar2 != -1) {
        bVar3 = *(byte *)(param_1 + iVar8);
        if (bVar3 != 0xff) {
          DAT_007f4e04 = 1;
          *(undefined1 *)(param_1 + iVar8) = 0xff;
          if ((*(char *)(param_3 + 1 + iVar8) != -1) && (*(char *)(param_1 + 1 + iVar8) != -1)) {
            pbVar1 = (byte *)(param_7 + (uint)bVar3);
            *pbVar1 = *pbVar1 | param_8;
          }
        }
        if (iVar5 + -1 == 0 || iVar5 < 1) goto LAB_00428d4e;
        cVar2 = *(char *)(param_3 + iVar8 + 1);
        iVar5 = iVar5 + -1;
        iVar8 = iVar8 + 1;
      }
      iVar7 = iVar8 + 1;
      iVar6 = iVar5 + -1;
    } while (iVar6 != 0 && 0 < iVar5);
LAB_00428d4e:
    iVar8 = iVar8 + 1;
    bVar3 = *(byte *)(param_1 + iVar8);
    if ((*(char *)(param_3 + iVar8) != -1) && (bVar3 != 0xff)) {
      DAT_007f4e04 = 1;
      *(undefined1 *)(param_1 + iVar8) = 0xff;
      pbVar1 = (byte *)(param_7 + (uint)bVar3);
      *pbVar1 = *pbVar1 | param_8;
    }
    param_3 = param_3 + param_4;
    param_1 = param_1 + param_2;
    iVar6 = param_6 + -1;
    bVar4 = param_6 < 1;
    param_6 = iVar6;
    if (iVar6 == 0 || bVar4) {
      return DAT_007f4e04;
    }
  } while( true );
}

// 00428DC0 FUN_00428dc0
#line 4 "decomp/ST.exe/functions/00428DC0/decomp.c"
void __cdecl
st::fn_00428DC0(uint *param_1,int param_2,int param_3,int param_4,undefined4 param_5,byte param_6)

{
  byte *pbVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;

  uVar5 = (uint)(param_2 * param_3) >> 2;
  do {
    while( true ) {
      uVar6 = *param_1;
      param_1 = param_1 + 1;
      if (uVar6 != 0xffffffff) break;
      uVar6 = uVar5 - 1;
      bVar2 = (int)uVar5 < 1;
      uVar5 = uVar6;
      if (uVar6 == 0 || bVar2) {
        return;
      }
    }
    bVar4 = (byte)(uVar6 >> 8);
    if ((char)uVar6 != -1) {
      pbVar1 = (byte *)(param_4 + (uVar6 & 0xff));
      *pbVar1 = *pbVar1 | param_6;
    }
    bVar3 = (byte)(uVar6 >> 0x10);
    if (bVar4 != 0xff) {
      pbVar1 = (byte *)(param_4 + (uint)bVar4);
      *pbVar1 = *pbVar1 | param_6;
    }
    if (bVar3 != 0xff) {
      pbVar1 = (byte *)(param_4 + (uint)bVar3);
      *pbVar1 = *pbVar1 | param_6;
    }
    bVar4 = (byte)(uVar6 >> 0x18);
    if (bVar4 != 0xff) {
      pbVar1 = (byte *)(param_4 + (uint)bVar4);
      *pbVar1 = *pbVar1 | param_6;
    }
    uVar6 = uVar5 - 1;
    bVar2 = 0 < (int)uVar5;
    uVar5 = uVar6;
  } while (uVar6 != 0 && bVar2);
  return;
}

// 0042A780 FUN_0042a780
#line 4 "decomp/ST.exe/functions/0042A780/decomp.c"
void __cdecl st::fn_0042A780(int *param_1)

{
  uint uVar1;
  DArrayTy *array;
  int iVar2;
  int *piVar3;
  int iVar4;

  array = st::fn_006AE290(nullptr,100,4,100);
  iVar4 = 0;
  iVar2 = *param_1;
  if (0 < *(int *)(iVar2 + 0x455)) {
    do {
      iVar2 = *(int *)(iVar2 + 0x459 + iVar4 * 4);
      if (iVar2 != 0) {
        st::fn_006A5E90(*(short **)(iVar2 + 0x3c));
        array->iteratorIndex = 0;
        do {
          uVar1 = array->iteratorIndex;
          if (array->count <= uVar1) goto LAB_0042a7e7;
          piVar3 = DArrayAt<int>(array, uVar1);
          array->iteratorIndex = uVar1 + 1;
          if (piVar3 == nullptr) goto LAB_0042a7e7;
        } while (*(int *)(iVar2 + 0x40) != *piVar3);
        if (piVar3 == nullptr) {
LAB_0042a7e7:
          st::fn_006AE1C0(array,(void *)(iVar2 + 0x40));
          st::fn_006AB060((void *)(iVar2 + 0x40));
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = *param_1;
    } while (iVar4 < *(int *)(iVar2 + 0x455));
  }
  st::fn_006AE110(array);
  st::fn_0040402F((AnonShape_00575460_06C413C6 *)*param_1);
  st::fn_006EFB70(param_1);
  return;
}

// 0042A990 FUN_0042a990
#line 4 "decomp/ST.exe/functions/0042A990/decomp.c"
undefined4 st::fn_0042A990(char param_1)

{
  return g_packedRecords_A62x8[param_1].field3_0x9;
}

// 0042A9C0 FUN_0042a9c0
#line 4 "decomp/ST.exe/functions/0042A9C0/decomp.c"
undefined4 st::fn_0042A9C0(char param_1)

{
  return g_packedRecords_A62x8[param_1].field2_0x5;
}

// 0042A9F0 FUN_0042a9f0
#line 4 "decomp/ST.exe/functions/0042A9F0/decomp.c"
void st::fn_0042A9F0(char param_1)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC *in_ECX;
  undefined4 *puVar2;

  /* ST_CALLSITE[0042AA02]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  st::fn_004032E7(in_ECX,param_1,0,0,0);
  /* ST_CALLSITE[0042AA10]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  st::fn_004032E7(in_ECX,param_1,1,0,0);
  iVar1 = (int)param_1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  auto _param_1 = 5;
  puVar2 = &g_packedRecords_A62x8[iVar1].field102_0x16d;
  do {
    if ((DArrayTy *)*puVar2 != nullptr) {
      st::fn_006AE110((DArrayTy *)*puVar2);
      *puVar2 = 0;
    }
    *(undefined4 *)((int)puVar2 + -10) = 0;
    if ((DArrayTy *)puVar2[0x14] != 0) {
      st::fn_006AE110((DArrayTy *)puVar2[0x14]);
      puVar2[0x14] = 0;
    }
    STField<undefined4>(puVar2,0x46) = 0;
    puVar2 = puVar2 + 4;
    _param_1 = _param_1 + -1;
  } while (_param_1 != 0);
  puVar2 = &g_packedRecords_A62x8[iVar1].field204_0x211;
  iVar1 = 10;
  do {
    if ((DArrayTy *)*puVar2 != nullptr) {
      st::fn_006AE110((DArrayTy *)*puVar2);
      *puVar2 = 0;
    }
    *(undefined4 *)((int)puVar2 + -10) = 0;
    puVar2 = puVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 0042AAC0 FUN_0042aac0
#line 4 "decomp/ST.exe/functions/0042AAC0/decomp.c"
void st::fn_0042AAC0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;

  if (param_2 < param_3 + param_2) {
    puVar2 = (undefined4 *)(param_1 + param_2 * 4);
    for (iVar1 = (param_3 + param_2) - param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}

// 0042B5B0 FUN_0042b5b0
#line 4 "decomp/ST.exe/functions/0042B5B0/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042B5B3 MOVSX EAX,byte ptr [EBP + 0x8]
   [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=0042B7D0 @ 0042B821
   -> TEST TEST EAX,EAX | 0042E210 @ 0042E2B8 -> CMP CMP EAX,0x1
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0042B5D3 MOV EDX,dword ptr [EBP + 0xc];
   first-use mask */

int st::fn_0042B5B0(char param_1,ushort param_2)

{
  int _param_1 = static_cast<int>(param_1);

  uint uVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_0000000a;

  uVar1 = ((DArrayTy *)g_packedRecords_A62x8[param_1].field3_0x9)->count;
  if ((uVar1 != 0) && (param_2 < uVar1)) {
    st::fn_006ACC70((DArrayTy *)g_packedRecords_A62x8[param_1].field3_0x9,(uint)param_2,&param_1);
    return (uint)(_param_1 != 0);
  }
  return 0;
}

// 0042B760 FUN_0042b760
#line 4 "decomp/ST.exe/functions/0042B760/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00436F20 -> 0042B760 @ 00437532 | 00436F20 -> 0042B760 @ 00437587 | 0043BEB0 ->
   0042B760 @ 0043C261 | 0043BEB0 -> 0042B760 @ 0043C4E3 | 0043BEB0 -> 0042B760 @ 0043C51F |
   0043BEB0 -> 0042B760 @ 0043C54E | 0043BEB0 -> 0042B760 @ 0043C576 | 0043BEB0 -> 0042B760 @
   0043C5C3 | 0043BEB0 -> 0042B760 @ 0043C5EB | 0043BEB0 -> 0042B760 @ 0043C627 | 0043BEB0 ->
   0042B760 @ 0043C656 | 0043BEB0 -> 0042B760 @ 0043C685 | 0043BEB0 -> 0042B760 @ 0043C6E1 |
   0043BEB0 -> 0042B760 @ 0043C710 | 0043BEB0 -> 0042B760 @ 0043C747 | 0043BEB0 -> 0042B760 @
   0043C78A | 0043BEB0 -> 0042B760 @ 0043C7B9 | 0043BEB0 -> 0042B760 @ 0043C7E8 | 0043BEB0 ->
   0042B760 @ 0043C83D | 0043BEB0 -> 0042B760 @ 0043C886 | 0043BEB0 -> 0042B760 @ 0043C8B5 |
   0043BEB0 -> 0042B760 @ 0043C8F8 | 0043BEB0 -> 0042B760 @ 0043C927 | 0043BEB0 -> 0042B760 @
   0043D274 | 0043BEB0 -> 0042B760 @ 0043D7C8 | 004455C0 -> 0042B760 @ 0044573A | 0044B5F0 ->
   0042B760 @ 0044BB7E | 0044EE30 -> 0042B760 @ 004503C6 | 0044EE30 -> 0042B760 @ 004505E8 |
   0044EE30 -> 0042B760 @ 0045067B | 0044EE30 -> 0042B760 @ 004506A9 | 0044EE30 -> 0042B760 @
   0045ACC9 | 0045F980 -> 0042B760 @ 0045FB61 | 0045FF50 -> 0042B760 @ 0045FF71 | 00462180 ->
   0042B760 @ 00462A7B | 00462180 -> 0042B760 @ 00462DE1 | 00462180 -> 0042B760 @ 0046324C |
   00462180 -> 0042B760 @ 00463487 | 004658D0 -> 0042B760 @ 0046592F | 004658D0 -> 0042B760 @
   004659AF | 0046CF20 -> 0042B760 @ 0046D2B0 | 004749C0 -> 0042B760 @ 00474B1F | 0047FE10 ->
   0042B760 @ 0047FE6C | 0047FE10 -> 0042B760 @ 00480069 | 00486E20 -> 0042B760 @ 004881E0 |
   004899A0 -> 0042B760 @ 00489B10 | 00491720 -> 0042B760 @ 004917F5 | 004BEA70 -> 0042B760 @
   004BEC19 | 004DE820 -> 0042B760 @ 004DE86E | 004E1930 -> 0042B760 @ 004E19CE | 004E46F0 ->
   0042B760 @ 004E4825 | 00652810 -> 0042B760 @ 00655911 | 00652810 -> 0042B760 @ 006570E4 |
   00652810 -> 0042B760 @ 006571B5 | 00652810 -> 0042B760 @ 00657286 | 00652810 -> 0042B760 @
   00657382 | 00652810 -> 0042B760 @ 00657424 | 00652810 -> 0042B760 @ 006574CC | 00652810 ->
   0042B760 @ 00657601 | 00652810 -> 0042B760 @ 006576D2 | 00652810 -> 0042B760 @ 00657839 |
   00652810 -> 0042B760 @ 00657989 | 00652810 -> 0042B760 @ 00657ACC | 00652810 -> 0042B760 @
   00657C59 | 00652810 -> 0042B760 @ 00657D5A | 00652810 -> 0042B760 @ 00657E64 | 00652810 ->
   0042B760 @ 00657FA7 | 00652810 -> 0042B760 @ 006580F9 | 00652810 -> 0042B760 @ 00658202 |
   00652810 -> 0042B760 @ 0065833E | 00652810 -> 0042B760 @ 006584A1 | 00652810 -> 0042B760 @
   006585CE | 00652810 -> 0042B760 @ 006586FB | 00652810 -> 0042B760 @ 0065886D | 00652810 ->
   0042B760 @ 00658976 | 00652810 -> 0042B760 @ 00658A89 | 00652810 -> 0042B760 @ 00658BFB |
   00652810 -> 0042B760 @ 00658D8C | 00652810 -> 0042B760 @ 00658F19 | 00652810 -> 0042B760 @
   00659053 | 00652810 -> 0042B760 @ 006591CE | 00652810 -> 0042B760 @ 00659405 | 00652810 ->
   0042B760 @ 00659577 | 00652810 -> 0042B760 @ 006596CB | 00652810 -> 0042B760 @ 00659810 |
   00652810 -> 0042B760 @ 00659955 | 0065D6A0 -> 0042B760 @ 0065D6BC | 0065D6E0 -> 0042B760 @
   0065D6FC | 0065D720 -> 0042B760 @ 0065D73C | 0065D9C0 -> 0042B760 @ 0065D9DC | 0065DA10 ->
   0042B760 @ 0065DA2C | 0065DA50 -> 0042B760 @ 0065DA86 | 0065E360 -> 0042B760 @ 0065E37F |
   0065FA10 -> 0042B760 @ 0065FA2F | 0065FD00 -> 0042B760 @ 0065FD1C | 0065FD50 -> 0042B760 @
   0065FDAF | 0065FE10 -> 0042B760 @ 0065FF53 | 00660010 -> 0042B760 @ 006600AE | 00660180 ->
   0042B760 @ 00660291 | 00660180 -> 0042B760 @ 00660360 | 00660420 -> 0042B760 @ 0066045E |
   006604B0 -> 0042B760 @ 006604F2 | 00660540 -> 0042B760 @ 006605BF | 00660620 -> 0042B760 @
   00660691 | 00660700 -> 0042B760 @ 00660874 | 00660910 -> 0042B760 @ 006609CF | 00660A40 ->
   0042B760 @ 00660ADF | 00660B50 -> 0042B760 @ 00660BB0 | 00660B50 -> 0042B760 @ 00660C78 |
   00667D90 -> 0042B760 @ 00667F33

   [STPrototypeApplier] Propagated return.
   Evidence: 0042B760 returns used as this of STGroupBoatC::GetDepotForAttack @ 00462A9B | 0042B760
   returns used as this of STGroupBoatC::GetDepotForAttack @ 00462E01 | 0042B760 returns used as
   this of STGroupBoatC::GetDepotForAttack @ 0046326C | 0042B760 returns used as this of
   STGroupBoatC::GetDepotForAttack @ 004634A7 | 0042B760 returns used as this of
   STGroupBoatC::GetPatrolTask @ 00465943 | 0042B760 returns used as this of
   STGroupBoatC::GetPatrolTask @ 004659C3
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042B763 MOVSX EAX,byte ptr [EBP + 0x8]
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0042B783 MOV EDX,dword ptr [EBP + 0xc];
   first-use mask */

STGroupBoatC * st::fn_0042B760(char param_1,ushort param_2)

{
  int _param_1 = static_cast<int>(param_1);

  uint uVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_0000000a;

  uVar1 = ((DArrayTy *)g_packedRecords_A62x8[param_1].field2_0x5)->count;
  if ((uVar1 != 0) && (param_2 < uVar1)) {
    STGroupBoatC * _param_1 = nullptr;
    st::fn_006ACC70((DArrayTy *)g_packedRecords_A62x8[param_1].field2_0x5,(uint)param_2,&_param_1);
    return _param_1;
  }
  return nullptr;
}

// 0042D770 FUN_0042d770
#line 4 "decomp/ST.exe/functions/0042D770/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042D776 MOVSX EAX,byte ptr [EBP + 0x8] */

uint st::fn_0042D770(char param_1,int *param_2)

{
  DArrayTy *array;
  dword dVar1;
  uint uVar2;
  ushort uVar3;
  DArrayTy *pDVar4;
  STGameObjC *objPtr;
  int iVar5;
  STGroupBoatC *pSVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint index;
  undefined4 local_28;
  STAllPlayersC *local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  DArrayTy *local_10;
  undefined4 local_c;
  short local_8;
  short local_6;

  local_18 = 0xffff;
  array = (DArrayTy *)g_packedRecords_A62x8[param_1].field102_0x16d;
  local_1c = 1;
  local_20 = 1;
  pDVar4 = st::fn_006AE290(nullptr,0,2,1);
  *param_2 = (int)pDVar4;
  dVar1 = array->count;
  if (dVar1 == 0) {
    return STReplaceLowWord((uint32_t)(pDVar4), (uint16_t)(0xffff));
  }
  pDVar4 = st::fn_006AE290(nullptr,0,2,1);
  local_14 = 0;
  local_10 = pDVar4;
  if (0 < (int)dVar1) {
    do {
      st::fn_006ACC70(array,local_14,&local_c);
      if ((ushort)local_c != 0xffff) {
        /* ST_CALLSITE[0042D806]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        objPtr = st::fn_004028BA(local_24,param_1,(ushort)local_c,CASE_1);
        iVar5 = st::fn_0040226B(objPtr);
        pDVar4 = local_10;
        if ((iVar5 == 0) &&
           (local_28 = STReplaceLowWord((uint32_t)(objPtr), (uint16_t)(objPtr->field_0030)),
           objPtr->field_0030 != -1)) {
          local_1c = iVar5;
          st::fn_006AE1C0(local_10,&local_28);
          st::fn_006AE1C0((DArrayTy *)*param_2,&local_c);
          pDVar4 = local_10;
        }
      }
      local_14 = local_14 + 1;
    } while ((int)local_14 < (int)dVar1);
    if (local_1c == 0) {
      uVar2 = pDVar4->count;
      if (1 < uVar2) {
        st::fn_006ACC70(pDVar4,0,&local_8);
        index = 1;
        if (1 < (int)uVar2) {
          do {
            st::fn_006ACC70(pDVar4,index,&local_6);
            if (local_6 != local_8) {
              local_20 = 0;
              break;
            }
            index = index + 1;
          } while ((int)index < (int)uVar2);
        }
      }
      local_18 = 0x7fff;
      if (local_20 == 1) {
        st::fn_006ACC70(pDVar4,0,&local_c);
        pSVar6 = st::fn_00405CF9(param_1,(ushort)local_c);
        uVar3 = st::fn_00401735(pSVar6);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((uint)uVar3 == *(uint *)(*param_2 + 0xc)) {
          local_18 = local_c;
        }
      }
    }
  }
  st::fn_006AE110(pDVar4);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  return CONCAT22(extraout_var,(undefined2)local_18);
}

