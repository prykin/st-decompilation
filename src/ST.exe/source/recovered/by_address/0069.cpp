#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0069.cpp

// 00690180 FUN_00690180
#line 4 "decomp/ST.exe/functions/00690180/decomp.c"
int __thiscall st::fn_00690180(void *this,uint param_1,uint *param_2)

{
  int iVar2;
  int iVar1;

  iVar2 = STField<int>(this,0xa5);
  if (((iVar2 != 0) && (-1 < (int)param_1)) && ((int)param_1 < (int)STField<uint>(iVar2,0xC))) {
    if (param_1 < STField<uint>(iVar2,0xC)) {
      iVar2 = STField<int>(iVar2,0x8) * param_1 + STField<int>(iVar2,0x1C);
    }
    else {
      iVar2 = 0;
    }
    if (*(AiFltClassTy **)(iVar2 + 4) != nullptr) {
      /* ST_CALLSITE[006901B7]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
      iVar1 = st::fn_00401555(*(AiFltClassTy **)(iVar2 + 4),param_2);
      return iVar1;
    }
  }
  return -4;
}

// 006901F0 FUN_006901f0
#line 4 "decomp/ST.exe/functions/006901F0/decomp.c"
int __thiscall st::fn_006901F0(void *this,int param_1,uint *param_2)

{
  AiFltClassTy *this_00;
  int iVar1;

  /* ST_CALLSITE[006901F7]: CALL 0x00402fdb; direct=00402FDB thunk_FUN_0068e190; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiFltClassTy; signature=__thiscall;pointer:/AiFltClassTy;pointer:/void;/int */
  this_00 = st::pointer_boundary_cast<AiFltClassTy *>(st::fn_00402FDB(this,param_1));
  if (this_00 != nullptr) {
    /* ST_CALLSITE[00690206]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
    iVar1 = st::fn_00401555(this_00,param_2);
    return iVar1;
  }
  return -4;
}

// 00690330 FUN_00690330
#line 4 "decomp/ST.exe/functions/00690330/decomp.c"
undefined4 __thiscall st::fn_00690330(void *this,uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  iVar1 = STField<int>(this,0xa5);
  if (((iVar1 != 0) && (-1 < (int)param_1)) && ((int)param_1 < (int)STField<uint>(iVar1,0xC))) {
    if (param_1 < STField<uint>(iVar1,0xC)) {
      iVar1 = STField<int>(iVar1,0x8) * param_1 + STField<int>(iVar1,0x1C);
    }
    else {
      iVar1 = 0;
    }
    if (*(undefined4 **)(iVar1 + 4) != nullptr) {
      /* ST_CALLSITE[00690369]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar2 = (**(code **)**(undefined4 **)(iVar1 + 4))(param_2);
      return uVar2;
    }
  }
  return 0xffff;
}

// 006903A0 FUN_006903a0
#line 4 "decomp/ST.exe/functions/006903A0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006903A0 returns literal 65535 at 006903BE @ 006903C4 */

uint __thiscall st::fn_006903A0(void *this,int param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;


  puVar1 = STPointerBoundaryCast<undefined4 *>(st::fn_00402FDB(this,param_1));
  if (puVar1 != nullptr) {
    /* ST_CALLSITE[006903B8]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
    uVar2 = STStructuralVirtualCall<undefined4>(puVar1, 0x0, param_2);
    return uVar2;
  }
  return 0xffff;
}

// 006903E0 FUN_006903e0
#line 4 "decomp/ST.exe/functions/006903E0/decomp.c"
void __thiscall st::fn_006903E0(void *this,undefined4 param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  uVar3 = 0;
  iVar2 = STField<int>(this,0xa5);
  if (0 < STField<int>(iVar2,0xC)) {
    bVar4 = STField<int>(iVar2,0xC) != 0;
    do {
      if (((bVar4) && (iVar2 = STField<int>(iVar2,0x8) * uVar3 + STField<int>(iVar2,0x1C), iVar2 != 0)) &&
         (puVar1 = *(undefined4 **)(iVar2 + 4), puVar1 != nullptr)) {
        /* ST_CALLSITE[00690419]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
        STStructuralVirtualCall<void>(puVar1, 0x0, param_1);
      }
      iVar2 = STField<int>(this,0xa5);
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < STField<uint>(iVar2,0xC);
    } while ((int)uVar3 < (int)STField<uint>(iVar2,0xC));
  }
  return;
}

// 00690450 FUN_00690450
#line 4 "decomp/ST.exe/functions/00690450/decomp.c"
void __thiscall st::fn_00690450(void *this,short param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  uVar3 = 0;
  iVar2 = STField<int>(this,0xa5);
  if (0 < STField<int>(iVar2,0xC)) {
    bVar4 = STField<int>(iVar2,0xC) != 0;
    do {
      if ((((bVar4) && (iVar2 = STField<int>(iVar2,0x8) * uVar3 + STField<int>(iVar2,0x1C), iVar2 != 0))
          && (puVar1 = *(undefined4 **)(iVar2 + 4), puVar1 != nullptr)) &&
         ((STField<short>(puVar1,0x7b) == param_1 && (puVar1 != nullptr)))) {
        /* ST_CALLSITE[00690497]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
        STStructuralVirtualCall<void>(puVar1, 0x0, param_2);
      }
      iVar2 = STField<int>(this,0xa5);
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < STField<uint>(iVar2,0xC);
    } while ((int)uVar3 < (int)STField<uint>(iVar2,0xC));
  }
  return;
}

// 006904D0 FUN_006904d0
#line 4 "decomp/ST.exe/functions/006904D0/decomp.c"
int __thiscall st::fn_006904D0(void *this,undefined *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;

  uVar2 = 0;
  iVar1 = STField<int>(this,0xa5);
  if (0 < STField<int>(iVar1,0xC)) {
    bVar3 = STField<int>(iVar1,0xC) != 0;
    do {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      if ((((bVar3) && (iVar1 = STField<int>(iVar1,0x8) * uVar2 + STField<int>(iVar1,0x1C), iVar1 != 0))
          && (iVar1 = STField<int>(iVar1,0x4), iVar1 != 0)) &&
         /* ST_CALLSITE[00690506]: CALL dword ptr [EBP + 0x8] */
         (iVar1 = (*(code *)param_1)(iVar1,param_2), iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = STField<int>(this,0xa5);
      uVar2 = uVar2 + 1;
      bVar3 = uVar2 < STField<uint>(iVar1,0xC);
    } while ((int)uVar2 < (int)STField<uint>(iVar1,0xC));
  }
  return 0;
}

// 00690550 FUN_00690550
#line 4 "decomp/ST.exe/functions/00690550/decomp.c"
uint __thiscall st::fn_00690550(void *this,short param_1,short param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0xc9);
  uVar3 = 0;
  uVar2 = STField<uint>(iVar1,0xC);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (((bVar5) && (iVar4 = STField<int>(iVar1,0x8) * uVar3 + STField<int>(iVar1,0x1C), iVar4 != 0)) &&
         (param_1 == STField<short>(iVar4,0x2))) {
        if (param_2 == -1) {
          return uVar3;
        }
        if (param_2 == STField<short>(iVar4,0x4)) {
          return uVar3;
        }
      }
      uVar3 = uVar3 + 1;
      bVar5 = uVar3 < uVar2;
    } while ((int)uVar3 < (int)uVar2);
  }
  return 0xffffffff;
}

// 006905C0 FUN_006905c0
#line 4 "decomp/ST.exe/functions/006905C0/decomp.c"
uint __thiscall st::fn_006905C0(void *this,short param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0xc9);
  uVar3 = 0;
  uVar2 = STField<uint>(iVar1,0xC);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (((bVar5) &&
          (psVar4 = (short *)(STField<int>(iVar1,0x8) * uVar3 + STField<int>(iVar1,0x1C)),
          psVar4 != nullptr)) && (param_1 == *psVar4)) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      bVar5 = uVar3 < uVar2;
    } while ((int)uVar3 < (int)uVar2);
  }
  return 0xffffffff;
}

// 00690610 FUN_00690610
#line 4 "decomp/ST.exe/functions/00690610/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00690610(void *this,short param_1)

{
  uint index;

  index = st::fn_00404EE4(this,param_1);
  if (-1 < (int)index) {
    st::fn_006B0C70(STField<DArrayTy *>(this,0xc9),index);
  }
  return;
}

// 00690E60 CreateAiTact
#line 4 "decomp/ST.exe/functions/00690E60/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9BC>00402671

   [STObjectFactoryApplier] Central object factory for 0x0401 (ST_OBJECT_AI_TACT).
   Evidence: registry[83] at 007CA9B8 stores type 0x0401 and executable pointer 00402671; allocation
   size 324 uniquely matches /AiTactClassTy */

AiTactClassTy * __cdecl st::fn_00690E60(void)

{
  AiTactClassTy *pAVar1;

  /* ST_CALLSITE[00690E65]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/AiTactClassTy; signature=__stdcall;pointer:/AiTactClassTy;/uint */
  pAVar1 = st::pointer_boundary_cast<AiTactClassTy *>(st::fn_006B04D0(0x144));
  if (pAVar1 != nullptr) {
    pAVar1 = st::fn_004024AA(pAVar1);
    return pAVar1;
  }
  return nullptr;
}

// 00691480 FUN_00691480
#line 4 "decomp/ST.exe/functions/00691480/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __cdecl st::fn_00691480(RecoveredRecordView_00691480_8BF19534 *param_1)

{
  RecoveredRecordView_00691480_8BF19534 *pRVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;

  pRVar1 = param_1;
  if (param_1->field_0018 != '\0') {
    if (param_1->field_0018 == '\x02') {
      iVar2 = param_1->field_0085;
      uVar3 = 0;
      if (0 < STField<int>(iVar2,0xC)) {
        bVar5 = STField<int>(iVar2,0xC) != 0;
        do {
          if (bVar5) {
            iVar2 = STField<int>(iVar2,0x8) * uVar3 + STField<int>(iVar2,0x1C);
          }
          else {
            iVar2 = 0;
          }
          if (STField<int>(iVar2,0x4) == 0) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = nullptr;
          }
          else {
            param_1 = (RecoveredRecordView_00691480_8BF19534 *)(STField<int>(iVar2,0x4) + 0x20);
          }
          st::fn_00405BCD(reinterpret_cast<int *>(&param_1));
          iVar2 = pRVar1->field_0085;
          uVar3 = uVar3 + 1;
          bVar5 = uVar3 < STField<uint>(iVar2,0xC);
        } while ((int)uVar3 < (int)STField<uint>(iVar2,0xC));
      }
    }
    piVar4 = &pRVar1->field_0085;
    iVar2 = 8;
    do {
      if ((DArrayTy *)*piVar4 != nullptr) {
        st::fn_006AE110((DArrayTy *)*piVar4);
        *piVar4 = 0;
      }
      piVar4 = piVar4 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 00691540 FUN_00691540
#line 4 "decomp/ST.exe/functions/00691540/decomp.c"
void __cdecl st::fn_00691540(int *param_1)

{
  if ((RecoveredRecordView_00691480_8BF19534 *)*param_1 !=
      nullptr) {
    st::fn_00402202((RecoveredRecordView_00691480_8BF19534 *)*param_1);
    st::fn_006AB060(param_1);
  }
  return;
}

// 00691570 FUN_00691570
#line 4 "decomp/ST.exe/functions/00691570/decomp.c"
undefined4 * __fastcall st::fn_00691570(undefined4 *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int local_8;

  puVar3 = param_1 + 0x654;
  memset(param_1, 0, 0x10e0); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(param_1 + 0x438, 0, 0x5a0); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(param_1 + 0x5a0, 0, 0x2d0); /* compiler bulk-zero initialization */
  iVar1 = 0;
  puVar2 = param_1 + 0x6c2;
  local_8 = 3;
  do {
    *puVar3 = 0;
    puVar2[-1] = 0;
    puVar3 = puVar3 + 0x92;
    memset(puVar2, 0, 0x90); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(puVar2 + -0x6d, 0, 0x120); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(puVar2 + -0x25, 0, 0x90); /* compiler bulk-zero initialization */
    iVar1 = 0;
    puVar2 = puVar2 + 0x92;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  memset(param_1 + 0x80a, 0, 0xb40); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(param_1 + 0xada, 0, 0xb40); /* compiler bulk-zero initialization */
  return param_1;
}

// 00691650 FUN_00691650
#line 4 "decomp/ST.exe/functions/00691650/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00691650 returns used as parameter 1 of Library::Ourlib::MFSPR::mfSSprLoad @ 00691741 |
   00691650 returns used as parameter 1 of Library::Ourlib::MFSPR::mfSSprLoad @ 006920A0

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00691690 -> 00691650 @ 006918A2; string at 007D5978 | 00691690 -> 00691650 @ 00692096;
   string at 007D5968 | 00692390 -> 00691650 @ 006923A8; string at 007D59CC */

char * st::fn_00691650(char *text,undefined4 param_2)

{
  /* ST_CALLSITE[00691665]: CALL dword ptr [0x0085bde8] */
  st::external_00000080(reinterpret_cast<LPSTR>(&DAT_00853a68),st::mutable_c_string("%s%u"),text,param_2);
  return (char *)&DAT_00853a68;
}

// 00692390 FUN_00692390
#line 4 "decomp/ST.exe/functions/00692390/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00692390 returns used as parameter 2 of cMf32::RecChk @ 00691857 */

char * st::fn_00692390(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;

  pcVar1 = st::fn_0040456B(st::mutable_c_string("CONTUR"),param_4);
  /* ST_CALLSITE[006923B8]: CALL dword ptr [0x0085bde8] */
  st::external_00000080(reinterpret_cast<LPSTR>(&DAT_00853b6c),st::mutable_c_string("%s%u%u%u"),pcVar1,param_1,param_2,param_3);
  return (char *)&DAT_00853b6c;
}

// 006923E0 FUN_006923e0
#line 4 "decomp/ST.exe/functions/006923E0/decomp.c"
undefined4 __thiscall
st::fn_006923E0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (param_3 != -1) {
    if (param_3 == 0) {
      param_4 = param_4 + -1;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    return *(undefined4 *)
            (*(int *)((int)this +
                     (param_5 + (param_4 + param_2 * 0x49 + param_3 * 6) * 2) * 4 + 0x1954) + 0x2d +
            (param_1 - 1U & 0xffff) * 4);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(*(int *)((int)this + param_2 * 0x248 + 0x1950) + 0x2d);
}

// 00692470 FUN_00692470
#line 4 "decomp/ST.exe/functions/00692470/decomp.c"
undefined4 __thiscall st::fn_00692470(void *this,int param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == 0) {
    param_3 = param_3 + -1;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)
          (*(int *)((int)this + (param_3 + param_2 * 6 + param_4 * 0x92) * 4 + 0x1a74) + 0x2d +
          param_1 * 4);
}

// 006924C0 FUN_006924c0
#line 4 "decomp/ST.exe/functions/006924C0/decomp.c"
undefined4 __thiscall
st::fn_006924C0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (param_3 == 0) {
    param_4 = param_4 + -1;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)
          (*(int *)((int)this + (param_4 + param_3 * 6 + param_5 * 0x92 + param_1) * 4 + 0x1b08) +
           0x2d + param_2 * 4);
}

// 00692530 FUN_00692530
#line 4 "decomp/ST.exe/functions/00692530/decomp.c"
undefined4 __thiscall st::fn_00692530(void *this,int param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    param_3 = param_3 + -1;
  }
  return *(undefined4 *)((int)this + ((param_1 - 1U & 0xffff) + (param_3 + param_2 * 6) * 0x1e) * 4);
}

// 00692570 FUN_00692570
#line 4 "decomp/ST.exe/functions/00692570/decomp.c"
undefined4 __thiscall st::fn_00692570(void *this,int param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    param_3 = param_3 + -1;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)((int)this + (param_1 + (param_3 + (param_2 * 3 + 0x36) * 2) * 10) * 4);
}

// 006925B0 FUN_006925b0
#line 4 "decomp/ST.exe/functions/006925B0/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=006925C6 MOV EDI,dword ptr [EBP + 0x8];
   first-use mask */

undefined4 __thiscall st::fn_006925B0(void *this,ushort param_1,int param_2,int param_3,int param_4)

{
  if (param_3 == 0) {
    param_4 = param_4 + -1;
  }
  return *(undefined4 *)
          ((int)this +
          ((param_4 + (uint)param_1 + (param_3 * 3 + 0x90) * 2) * 5 + (param_2 - 1U & 0xffff)) * 4);
}

// 00692600 FUN_00692600
#line 4 "decomp/ST.exe/functions/00692600/decomp.c"
void __fastcall st::fn_00692600(int *param_1)

{
  int *piVar1;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;

  local_c = param_1 + 0x655;
  local_14 = 0;
  do {
    st::fn_00725E30(local_c + -1);
    local_18 = 6;
    piVar2 = local_c;
    do {
      local_10 = 6;
      do {
        iVar1 = 2;
        do {
          iVar4 = *piVar2;
          if (iVar4 != 0) {
            if (STField<int>(iVar4,0x25) == 0) {
              iVar3 = 0;
              if (0 < STField<short>(iVar4,0x23)) {
                do {
                  if (*(int *)(*piVar2 + 0x2d + iVar3 * 4) != 0) {
                    st::fn_006AB060((void *)(*piVar2 + iVar3 * 4 + 0x2d));
                  }
                  iVar3 = iVar3 + 1;
                } while (iVar3 < *(short *)(*piVar2 + 0x23));
              }
              st::fn_006AB060(piVar2);
            }
            else {
              st::fn_00725E30(piVar2);
            }
          }
          piVar2 = piVar2 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    local_18 = 6;
    piVar2 = local_c + 0x48;
    do {
      iVar1 = 6;
      do {
        iVar4 = *piVar2;
        if (iVar4 != 0) {
          if (STField<int>(iVar4,0x25) == 0) {
            iVar3 = 0;
            if (0 < STField<short>(iVar4,0x23)) {
              do {
                if (*(int *)(*piVar2 + 0x2d + iVar3 * 4) != 0) {
                  st::fn_006AB060((void *)(*piVar2 + iVar3 * 4 + 0x2d));
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < *(short *)(*piVar2 + 0x23));
            }
            st::fn_006AB060(piVar2);
          }
          else {
            st::fn_00725E30(piVar2);
          }
        }
        piVar2 = piVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    local_1c = 6;
    local_10 = local_14;
    do {
      local_18 = 0;
      do {
        iVar1 = local_10 + local_18;
        if (param_1[iVar1 + 0x6c2] != 0) {
          piVar2 = param_1 + iVar1 + 0x6c2;
          iVar4 = 0;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (0 < *(short *)(param_1[iVar1 + 0x6c2] + 0x23)) {
            do {
              if (*(int *)(*piVar2 + 0x2d + iVar4 * 4) != 0) {
                piVar2 = param_1 + iVar1 + 0x6c2;
                st::fn_006AB060((void *)(param_1[iVar1 + 0x6c2] + 0x2d + iVar4 * 4));
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < *(short *)(*piVar2 + 0x23));
          }
          st::fn_006AB060(param_1 + iVar1 + 0x6c2);
        }
        local_18 = local_18 + 1;
      } while (local_18 < 6);
      local_10 = local_10 + 6;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
    st::fn_00725E30(local_c + 0x6c);
    local_14 = local_14 + 0x92;
    local_c = local_c + 0x92;
  } while (local_14 < 0x1b6);
  local_c = (int *)0x120;
  piVar1 = param_1;
  do {
    iVar1 = 0;
    do {
      iVar4 = 0x1e;
      do {
        if (*piVar1 != 0) {
          st::fn_006AB060(piVar1);
        }
        piVar1 = piVar1 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      iVar4 = 10;
      piVar2 = param_1 + ((int)local_c + -0xb4 + iVar1) * 10;
      do {
        if (*piVar2 != 0) {
          st::fn_006AB060(piVar2);
        }
        piVar2 = piVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      piVar2 = param_1 + ((int)local_c + iVar1) * 5;
      if (piVar2 != nullptr) {
        iVar4 = 5;
        do {
          if (*piVar2 != 0) {
            st::fn_006AB060(piVar2);
          }
          piVar2 = piVar2 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 6);
    local_c = (int *)((int)local_c + 6);
  } while ((int)local_c < 0x144);
  return;
}

// 00692920 FUN_00692920
#line 4 "decomp/ST.exe/functions/00692920/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00692920 parameter used as this of cMf32::RecGet @ 00692946 | 00692920 parameter used
   as this of cMf32::RecMemFree @ 00692A69

   [STPrototypeApplier] Propagated return.
   Evidence: 00692920 returns used as parameter 1 of FUN_006b4b20 @ 00691B46 | 00692920 returns used
   as parameter 1 of FUN_006b4b20 @ 00691DAB | 00692920 returns used as parameter 1 of FUN_006b4b20
   @ 00691FE9
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:3: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=4,
   pointer_dereferences=3, scalar_uses=0; sites=006929A2 dereference: IMUL EDI,dword ptr [EDX + 0x4]
   | 006929F9 dereference: MOV AX,word ptr [EDI + 0xe] | 006929FD dereference: IMUL EAX,dword ptr
   [EDI + 0x4] */

RecoveredRecordView_006B4B20_F20E56A6 *
st::fn_00692920(cMf32 *param_1,undefined4 *param_2,undefined4 *param_3,void *param_4,int param_5)

{
  uint *puVar1;
  RecoveredRecordView_006B4B20_F20E56A6 *pRVar2;
  byte *puVar3;
  uint uVar4;
  byte *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  ushort *local_10;
  int local_c;
  int local_8;

  puVar1 = param_3;
  pRVar2 = nullptr;
  if (param_2 != nullptr) {
    local_10 = st::fn_006F1CE0(param_1,1,st::mutable_c_string("PAL_APP"),nullptr,1);
    pRVar2 = /* ST_CALLSITE[00692963]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_006B4FA0_DAC3A217; source view only; no Ghidra override */
    STPointerBoundaryCast<RecoveredRecordView_006B4B20_F20E56A6 *>(st::fn_006B50C0((int)param_3,(int)param_4,8,0x100,reinterpret_cast<undefined4 *>((local_10 + 0x14)),1));

    local_8 = st::fn_006B4FA0(reinterpret_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(pRVar2));
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_5 == 0) {
      if (0 < (int)param_4) {
        auto param_3_after_write = param_4; /* compiler stack-slot lifetime split */
        puVar8 = param_2;
        do {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = (undefined4 *)((int)param_4 + -1);
          puVar6 = puVar8;
          puVar7 = (undefined4 *)
                   (((uint)pRVar2->field_000E * pRVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                    (int)param_2 + local_8);
          for (uVar4 = (uint)puVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          for (uVar4 = (uint)puVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          param_3_after_write = (undefined4 *)((int)param_3_after_write + -1);
          puVar8 = (undefined4 *)((int)puVar8 + (int)puVar1);
          param_4 = param_2;
        } while (param_3_after_write != nullptr);
      }
    }
    else if (0 < (int)param_4) {
      auto param_3_after_write_2 = param_2; /* compiler stack-slot lifetime split */
      auto param_5_after_write = (int)param_4; /* compiler stack-slot lifetime split */
      do {
        param_2 = (undefined4 *)((int)param_4 + -1);
        puVar3 = (undefined1 *)
                 (((uint)pRVar2->field_000E * pRVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                  (int)param_2 + local_8);
        if (0 < (int)puVar1) {
          puVar5 = puVar3;
          puVar8 = puVar1;
          do {
            puVar8 = (undefined4 *)((int)puVar8 + -1);
            *puVar5 = *(undefined1 *)
                       (local_c + 0x37ac +
                       (st::storage_bit_cast<int>(static_cast<uint32_t>((uint)(byte)puVar5[(int)param_3_after_write_2 - (int)puVar3] * 0xf)) >> 8) * 4);
            puVar5 = puVar5 + 1;
          } while (puVar8 != nullptr);
        }
        param_3_after_write_2 = (undefined4 *)((int)param_3_after_write_2 + (int)puVar1);
        param_5_after_write = param_5_after_write + -1;
        param_4 = param_2;
      } while (param_5_after_write != 0);
    }
    st::fn_006F20E0(param_1,reinterpret_cast<uint *>(&local_10));
  }
  return pRVar2;
}

// 00692AE0 FUN_00692ae0
#line 4 "decomp/ST.exe/functions/00692AE0/decomp.c"
undefined4 __thiscall st::fn_00692AE0(void *this,uint param_1,int param_2)

{
  uint uVar1;
  uVar1 = 0;
  if ((-1 < param_2) && (param_2 < 5)) {
    if ((param_1 & 0x1000) == 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((*(byte *)((int)this +
                    (param_2 +
                    (((param_1 >> 4 & 0xf) + (param_1 >> 8 & 0xf) * 2) * 0xf + (param_1 & 0xf)) * 4)
                    * 4 + 0x2a78) & 0x80) != 0) {
        uVar1 = 1;
      }
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    else if ((*(byte *)((int)this +
                       (param_2 +
                       (((param_1 >> 4 & 0xf) + (param_1 >> 8 & 0xf) * 2) * 0xf + (param_1 & 0xf)) *
                       4) * 4 + 0x1d58) & 0x80) != 0) {
      return 1;
    }
    return uVar1;
  }
  return 0;
}

// 00692BA0 FUN_00692ba0
#line 4 "decomp/ST.exe/functions/00692BA0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00691690 -> 00692BA0 @ 00691759 | 00691690 -> 00692BA0 @ 00691888 | 00691690 ->
   00692BA0 @ 006918FD | 00691690 -> 00692BA0 @ 006920B8 */

void st::fn_00692BA0(RecoveredRecord_00692BA0_C4D2C982 *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint *puVar3;
  iVar1 = 0;
  if (0 < param_1->field_0023) {
    puVar3 = reinterpret_cast<uint *>(&param_1[1].field_0x8);
    do {
      pbVar2 = &DAT_007d5930;
      do {
        st::fn_006C8E60((RecoveredRecord_006C8E60_3F75B164 *)*puVar3,*pbVar2,pbVar2[4]);
        pbVar2 = pbVar2 + 8;
      } while ((int)pbVar2 < 0x7d5958);
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar1 < param_1->field_0023);
  }
  return;
}

// 00693560 FUN_00693560
#line 4 "decomp/ST.exe/functions/00693560/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00693560_param_1Enum. Cases:
   CASE_BB9=3001;CASE_BBC=3004;CASE_BBE=3006;CASE_BBF=3007;CASE_BC0=3008;CASE_BC2=3010 */

undefined4 __cdecl st::fn_00693560(Global_sub_00693560_param_1Enum param_1,int param_2)

{
  uint uVar1;
  uVar1 = 0xffffffff;
  if ((int)param_1 < 0x446) {
    if (param_1 == 0x445) {
      return 0x12;
    }
    if ((int)param_1 < 0x12d) {
      if (param_1 == 300) {
        if (param_2 == 0x41b) {
          return 0xe;
        }
      }
      else if (param_1 == 0x10e) {
        if (param_2 == 0x41a) {
          return 0xd;
        }
      }
      else if (param_1 == 0x118) {
        if (param_2 == 0x41c) {
          return 0xf;
        }
      }
      else if ((param_1 == 0x122) && (param_2 == 0x41d)) {
        return 0x10;
      }
    }
    else {
      if (param_1 == 0x442) {
        return 0;
      }
      if (param_1 == 0x443) {
        return 0xb;
      }
      if (param_1 == 0x444) {
        return 0x11;
      }
    }
  }
  else {
    switch(param_1) {
    case CASE_BB9:
      if (param_2 == 0x414) {
        return 1;
      }
      if (param_2 == 0x417) {
        return 2;
      }
      if (param_2 == 0x418) {
        return 3;
      }
      break;
    case CASE_BBC:
      if (param_2 == 0x410) {
        return 4;
      }
      if (param_2 == 0x411) {
        return 5;
      }
      break;
    case CASE_BBE:
      return 6;
    case CASE_BBF:
      return 7;
    case CASE_BC0:
      return 8;
    case CASE_BC2:
      uVar1 = 0xc;
    }
  }
  return uVar1;
}

// 00693710 FUN_00693710
#line 4 "decomp/ST.exe/functions/00693710/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00693710_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

void __cdecl st::fn_00693710(Global_sub_00693710_param_1Enum param_1)

{
  switch(param_1) {
  case CASE_0:
    st::fn_0040394A(st::machine_word_boundary_cast<undefined4>("stone_c"),DAT_007d99a0);
    return;
  case CASE_1:
    st::fn_0040394A(st::machine_word_boundary_cast<undefined4>("stone_c"),DAT_007dac80);
    return;
  case CASE_2:
    st::fn_0040394A(st::machine_word_boundary_cast<undefined4>("stone_c"),DAT_007dbf60);
    return;
  case CASE_3:
    st::fn_0040394A(st::machine_word_boundary_cast<undefined4>("stone_c"),DAT_007dd240);
  }
  return;
}

// 006937B0 FUN_006937b0
#line 4 "decomp/ST.exe/functions/006937B0/decomp.c"
void __cdecl st::fn_006937B0(undefined4 param_1,undefined4 param_2)

{
  DAT_00853d80 = param_1;
  DAT_00853d84 = param_2;
  return;
}

// 006937E0 FUN_006937e0
#line 4 "decomp/ST.exe/functions/006937E0/decomp.c"
uint __cdecl st::fn_006937E0(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  byte local_108 [260];


  iVar2 = st::fn_00401131(param_2);
  uVar5 = 0;
  iVar2 = iVar2 * 0x218;
  if (*(int *)(iVar2 + 0x20c + DAT_00853d80) != 0) {
    do {
      /* ST_CALLSITE[00693828]: CALL dword ptr [0x0085bde8] */
      st::external_00000080((LPSTR)local_108,st::mutable_c_string("%s%u"),iVar2 + DAT_00853d80,uVar5);
      pbVar6 = local_108;
      pbVar3 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_0069385e:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00693863;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_0069385e;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00693863:
      if (iVar4 == 0) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(iVar2 + 0x20c + DAT_00853d80));
  }
  return 0xffffffff;
}

// 006938C0 FUN_006938c0
#line 4 "decomp/ST.exe/functions/006938C0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00692C10 @ 00692CD0 -> read as EAX on
   every CFG path | 006937E0 @ 006937F0 -> read as EAX on every CFG path | 006950F0 @ 006950F8 ->
   read as EAX on every CFG path */

int __cdecl st::fn_006938C0(int param_1)

{
  uint uVar1;
  int *piVar2;

  uVar1 = 0;
  if (DAT_00853d84 != 0) {
    piVar2 = (int *)(DAT_00853d80 + 0x208);
    do {
      if (*piVar2 == param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x86;
    } while (uVar1 < DAT_00853d84);
  }
  return -1;
}

// 00693910 FUN_00693910
#line 4 "decomp/ST.exe/functions/00693910/decomp.c"
/* [STReturnSemanticsApplier] typed_pointer_return.
   Evidence: all 1 value-return path(s) forward Listing variable param_1 with evidence-backed
   structure /SubmarineTitans/Recovered/PointerShapes/AnonShape_00693910_1CC6632C (current recovered
   extent=6560) */

RecoveredRecordView_00693910_0CDC4AE1 * __fastcall
st::fn_00693910(RecoveredRecordView_00693910_0CDC4AE1 *param_1)

{
  int iVar1;
  uint *puVar2;
  byte *puVar3;
  RecoveredRecordView_00693910_0CDC4AE1 *pRVar4;
  byte *puVar5;
  int local_8;

  puVar2 = reinterpret_cast<uint *>(&param_1->field_0x4a);
  pRVar4 = param_1;
  for (iVar1 = 0x666; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pRVar4 = 0;
    pRVar4 = reinterpret_cast<RecoveredRecordView_00693910_0CDC4AE1 *>(reinterpret_cast<byte *>(pRVar4) + 0x4);
  }
  *(undefined1 *)pRVar4 = 0;
  *(undefined4 *)&param_1->field_0x4 = 0x8f000205;
  param_1->field_02DA = 1;
  param_1->field_02DB = 1;
  param_1->field_0x2dc = 0;
  param_1->field_02DD = 2;
  param_1->field_02E1 = 0xffffffff;
  local_8 = 8;
  do {
    puVar3 = reinterpret_cast<byte *>((&DAT_007d6268));
    puVar5 = (byte *)((int)puVar2 + -0x39);
    memmove(puVar5, puVar3, 0x51); /* compiler REP MOVS byte copy */
    iVar1 = 0;
    puVar3 = reinterpret_cast<byte *>((puVar2));
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0xffffffff;
      puVar3 = reinterpret_cast<byte *>((puVar3 + 1));
    }
    puVar2 = (undefined4 *)((int)puVar2 + 0x51);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  param_1->field_1999 = 0;
  return param_1;
}

// 006939D0 FUN_006939d0
#line 1 "decomp/ST.exe/functions/006939D0/decomp.c"

/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_006939D0(void)

{
  return;
}

// 006939F0 FUN_006939f0
#line 4 "decomp/ST.exe/functions/006939F0/decomp.c"
undefined4 st::fn_006939F0(void)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  cMf32 *in_stack_00000004;
  InternalExceptionFrame local_54;
  byte *local_10;
  uint local_c;
  undefined4 *local_8;

  local_8 = nullptr;
  local_c = 1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar1 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  if (iVar1 == 0) {
    memset(local_10, 0, 0x1999); /* compiler bulk-zero initialization */
    iVar2 = 0;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_006F1CE0(in_stack_00000004,0,PTR_s_DESCRIPTOR_0079d770,reinterpret_cast<int *>(&local_8),1);
    g_currentExceptionFrame = local_54.previous;
  }
  else {
    g_currentExceptionFrame = local_54.previous;
    local_c = 0;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_006F20E0(in_stack_00000004,reinterpret_cast<uint *>(&local_8));
  }
  if (local_8 != nullptr) {
    puVar3 = reinterpret_cast<byte *>((local_8));
    memmove(local_10, puVar3, 0x1999); /* compiler REP MOVS byte copy */
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_006F20E0(in_stack_00000004,reinterpret_cast<uint *>(&local_8));
  }
  return local_c;
}

// 00693AD0 FUN_00693ad0
#line 4 "decomp/ST.exe/functions/00693AD0/decomp.c"
void __thiscall st::fn_00693AD0(void *this,undefined2 *param_1)

{
  STField<undefined2>(this,0xc) = *param_1;
  STField<undefined2>(this,0xe) = param_1[2];
  STField<undefined4>(this,4) = 0x8f000205;
  STField<undefined1>(this,0x2df) = 1;
  STField<undefined1>(this,0x2de) = 1;
  return;
}

// 00693B20 FUN_00693b20
#line 4 "decomp/ST.exe/functions/00693B20/decomp.c"
undefined4 * __thiscall
st::fn_00693B20(void *param_1,int param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined1 param_7,char *param_8)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int uVar4;
  uint uVar5;
  byte *puVar7;
  char *pcVar8;
  byte *puVar9;
  char *pcVar10;
  char *pcVar8_mg0;


  iVar3 = st::fn_00403913(param_1,param_2);
  if (iVar3 != 0) {
    return nullptr;
  }

  uVar4 = st::fn_004029FF(param_1);
  puVar1 = (undefined4 *)((int)param_1 + param_2 * 0x51 + 0x11);
  puVar7 = reinterpret_cast<byte *>((&DAT_007d6268));
  puVar9 = reinterpret_cast<byte *>((puVar1));
  memmove(puVar9, puVar7, 0x51); /* compiler REP MOVS byte copy */
  *(char *)((int)param_1 + param_2 * 0x51 + 0x33) = (char)param_2;
  *(undefined1 *)((int)param_1 + param_2 * 0x51 + 0x32) = param_3;
  *(undefined4 *)((int)param_1 + param_2 * 0x51 + 0x35) = param_4;
  *(undefined4 *)((int)param_1 + param_2 * 0x51 + 0x39) = param_5;
  *(undefined4 *)((int)param_1 + param_2 * 0x51 + 0x3d) = param_6;
  *(undefined1 *)puVar1 = param_7;
  if (-1 < uVar4) {
    *(char *)((int)param_1 + param_2 * 0x51 + 0x34) = (char)uVar4;
  }
  if (param_8 != nullptr) {
    uVar5 = 0xffffffff;
    do {
      pcVar8_mg0 = param_8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8_mg0 = param_8 + 1;
      cVar2 = *param_8;
      param_8 = pcVar8_mg0;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar8_mg0 + -uVar5;
    pcVar10 = (char *)((int)param_1 + param_2 * 0x51 + 0x12);
    memmove(pcVar10, pcVar8, uVar5); /* compiler REP MOVS byte copy */
  }
  STField<char>(param_1,0x10) = STField<char>(param_1,0x10) + '\x01';
  return puVar1;
}

// 00693C10 FUN_00693c10
#line 4 "decomp/ST.exe/functions/00693C10/decomp.c"
int __thiscall st::fn_00693C10(void *this,RecoveredRecord_00693C10_160B536B *param_1)

{
  int iVar1;
  int iVar2;
  RecoveredRecord_00693C10_160B536B *pRVar4;
  byte *puVar5;


  iVar1 = st::fn_00403913(this,(uint)param_1->field_0022);
  if (iVar1 == 0) {

    iVar2 = st::fn_004029FF(this);
    pRVar4 = param_1;
    puVar5 = (byte *)((uint)param_1->field_0022 * 0x51 + 0x11 + (int)this);
    memmove(puVar5, pRVar4, 0x51); /* compiler REP MOVS byte copy */
    STField<char>(this,0x10) = STField<char>(this,0x10) + '\x01';
    if (-1 < iVar2) {
      *(char *)((uint)param_1->field_0022 * 0x51 + 0x34 + (int)this) = (char)iVar2;
    }
    return (uint)param_1->field_0022 * 0x51 + 0x11 + (int)this;
  }
  return 0;
}

// 00693CB0 FUN_00693cb0
#line 4 "decomp/ST.exe/functions/00693CB0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00693CB0(void *this,int param_1)

{
  int iVar1;
  byte *puVar2;
  byte *puVar3;

  puVar2 = reinterpret_cast<byte *>((&DAT_007d6268));
  puVar3 = (byte *)((int)this + param_1 * 0x51 + 0x11);
  memmove(puVar3, puVar2, 0x51); /* compiler REP MOVS byte copy */
  iVar1 = 0;
  puVar2 = (byte *)((int)this + param_1 * 0x51 + 0x4a);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = reinterpret_cast<byte *>((puVar2 + 1));
  }
  return;
}

// 00693E60 FUN_00693e60
#line 4 "decomp/ST.exe/functions/00693E60/decomp.c"
int __thiscall st::fn_00693E60(void *this,int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((STField<int>(this,0x1999) == 0) && (-1 < param_1)) && (param_1 < 8)) &&
     (*(char *)((int)this + param_1 * 0x51 + 0x33) != -1)) {
    return (int)this + param_1 * 0x51 + 0x11;
  }
  return 0;
}

// 00694070 FUN_00694070
#line 4 "decomp/ST.exe/functions/00694070/decomp.c"
void __thiscall st::fn_00694070(void *this,int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;

  iVar1 = st::fn_00403913(this,param_1);
  if (iVar1 != 0) {
    STField<undefined4>(iVar1,0x24) = *param_2;
    STField<undefined4>(iVar1,0x28) = param_2[1];
    STField<undefined4>(iVar1,0x2C) = param_3;
  }
  return;
}

// 006940B0 FUN_006940b0
#line 4 "decomp/ST.exe/functions/006940B0/decomp.c"
void __thiscall st::fn_006940B0(void *this,int param_1)

{
  int iVar1;


  iVar1 = st::fn_00403913(this,param_1);
  if (iVar1 != 0) {
    st::fn_004026D5(this,param_1);
    STField<char>(this,0x10) = STField<char>(this,0x10) + -1;
    st::fn_00402F72(static_cast<RecoveredRecord_00694100_0F40F2B2 *>(this));
  }
  return;
}

// 00694100 FUN_00694100
#line 4 "decomp/ST.exe/functions/00694100/decomp.c"
void __fastcall st::fn_00694100(RecoveredRecord_00694100_0F40F2B2 *param_1)

{
  int iVar1;
  uint uVar2;

  uVar2 = 0;
  do {

    iVar1 = st::fn_00404AED(param_1,uVar2);
    if (iVar1 == 0) {
      param_1->field_199D = -1;
      while( true ) {
        iVar1 = param_1->field_199D + 1;
        param_1->field_199D = iVar1;
        while( true ) {
          if (7 < iVar1) goto LAB_0069417a;

          iVar1 = st::fn_00403913(param_1,iVar1);
          if (iVar1 != 0) break;
          iVar1 = param_1->field_199D + 1;
          param_1->field_199D = iVar1;
        }

        iVar1 = st::fn_00403913(param_1,param_1->field_199D);
        if (iVar1 == 0) break;
        if ((int)uVar2 < (int)(uint)STField<byte>(iVar1,0x23)) {
          ((byte *)iVar1)[0x23] = STField<byte>(iVar1,0x23) - 1;
        }
      }
    }
LAB_0069417a:
    uVar2 = uVar2 + 1;
    if (7 < (int)uVar2) {
      return;
    }
  } while( true );
}

// 006941C0 FUN_006941c0
#line 4 "decomp/ST.exe/functions/006941C0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00693B20 @ 00693B41 -> read as EAX on
   every CFG path | 00693C10 @ 00693C2C -> read as EAX on every CFG path */

int __fastcall st::fn_006941C0(void *param_1)

{
  int iVar1;
  uint uVar2;

  uVar2 = 0;
  do {

    iVar1 = st::fn_00404AED(param_1,uVar2);
    if (iVar1 == 0) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 8);
  return -1;
}

// 00694200 FUN_00694200
#line 4 "decomp/ST.exe/functions/00694200/decomp.c"
int __thiscall st::fn_00694200(void *this,uint param_1)

{
  int iVar1;

  STField<undefined4>(this,0x199d) = 0xffffffff;
  while( true ) {
    iVar1 = STField<int>(this,0x199d) + 1;
    STField<int>(this,0x199d) = iVar1;
    while( true ) {
      if (7 < iVar1) {
        return 0;
      }
      iVar1 = st::fn_00403913(this,iVar1);
      if (iVar1 != 0) break;
      iVar1 = STField<int>(this,0x199d) + 1;
      STField<int>(this,0x199d) = iVar1;
    }
    iVar1 = st::fn_00403913(this,STField<int>(this,0x199d));
    if (iVar1 == 0) break;
    if (STField<byte>(iVar1,0x23) == param_1) {
      return iVar1;
    }
  }
  return 0;
}

// 006942A0 FUN_006942a0
#line 4 "decomp/ST.exe/functions/006942A0/decomp.c"
int st::fn_006942A0(void)

{
  int iVar2;
  int iVar1;
  int iVar3;
  byte *puVar4;
  byte *puVar5;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  cMf32 *in_stack_00000004;
  InternalExceptionFrame local_54;
  int local_10;
  uint local_c;
  int local_8;

  local_c = 0;
  local_8 = 1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar1 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  if (iVar1 == 0) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_006F1CE0(in_stack_00000004,0,PTR_s_DESCRIPTOR_0079d770,reinterpret_cast<int *>(&local_c),0x1999);
  }
  else {
    local_8 = 0;
  }
  iVar2 = local_8;
  g_currentExceptionFrame = local_54.previous;
  if (local_8 != 0) {
    memset((void *)(local_10 + 0x11), 0, 0x288); /* compiler bulk-zero initialization */
    iVar3 = 0;
    puVar4 = (byte *)(local_c + 0x11);
    puVar5 = (byte *)(local_10 + 0x11);
    memmove(puVar5, puVar4, 0x288); /* compiler REP MOVS byte copy */
    ((undefined1 *)local_10)[0x10] = ((undefined1 *)local_c)[0x10];
  }
  if (local_c != 0) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_006F20E0(in_stack_00000004,&local_c);
  }
  return iVar2;
}

// 00694390 FUN_00694390
#line 4 "decomp/ST.exe/functions/00694390/decomp.c"
void __thiscall st::fn_00694390(void *this,int param_1,int param_2,int param_3)

{
  byte *puVar1;
  puVar1 = STPointerBoundaryCast<undefined1 *>(st::fn_00403913(this,param_1));
  if (puVar1 != nullptr) {
    if (param_2 != -1) {
      puVar1[0x21] = (char)param_2;
    }
    if (param_3 != -1) {
      *puVar1 = (char)param_3;
    }
  }
  return;
}

// 006943D0 FUN_006943d0
#line 4 "decomp/ST.exe/functions/006943D0/decomp.c"
undefined4 __thiscall st::fn_006943D0(void *this,int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar2;
  int iVar3;
  bool bVar4;

  iVar2 = st::fn_00403913(this,param_1);
  if (iVar2 != 0) {
    pbVar2 = (byte *)(iVar2 + 1);
    do {
      bVar1 = *pbVar2;
      bVar4 = bVar1 < *param_2;
      if (bVar1 != *param_2) {
LAB_0069440e:
        iVar3 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
        goto LAB_00694413;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar4 = bVar1 < param_2[1];
      if (bVar1 != param_2[1]) goto LAB_0069440e;
      pbVar2 = pbVar2 + 2;
      param_2 = param_2 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00694413:
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}

// 00694450 FUN_00694450
#line 4 "decomp/ST.exe/functions/00694450/decomp.c"
void __thiscall st::fn_00694450(void *this,int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  bool bVar6;

  iVar2 = st::fn_00403913(this,param_1);
  if (iVar2 != 0) {
    pbVar3 = (byte *)(iVar2 + 1);
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *param_2;
      if (bVar1 != *param_2) {
LAB_00694491:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00694496;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < param_2[1];
      if (bVar1 != param_2[1]) goto LAB_00694491;
      pbVar3 = pbVar3 + 2;
      param_2 = param_2 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00694496:
    if (iVar4 == 0) {
      STField<char>(this,0x2f9) = STField<char>(this,0x2f9) + -1;
      memset((void *)((int)this + (uint)STField<byte>(iVar2,0x39) * 0x9c + 0x2fa), 0, 0x9c); /* compiler bulk-zero initialization */
      iVar4 = 0;
      memset((void *)(iVar2 + 1), 0, 0x20); /* compiler bulk-zero initialization */
      STField<undefined1>(iVar2,0x39) = 0xff;
    }
  }
  return;
}

// 00694510 FUN_00694510
#line 4 "decomp/ST.exe/functions/00694510/decomp.c"
char * __fastcall st::fn_00694510(RecoveredRecord_00694510_C4C313B6 *param_1)

{
  char *pcVar1;
  int iVar2;

  param_1->field_199D = -1;
  while( true ) {
    iVar2 = param_1->field_199D + 1;
    param_1->field_199D = iVar2;
    while( true ) {
      if (7 < iVar2) {
        return nullptr;
      }

      iVar2 = st::fn_00403913(param_1,iVar2);
      if (iVar2 != 0) break;
      iVar2 = param_1->field_199D + 1;
      param_1->field_199D = iVar2;
    }

    pcVar1 = STPointerBoundaryCast<char *>(st::fn_00403913(param_1,param_1->field_199D));
    if (pcVar1 == nullptr) break;
    if (*pcVar1 == '\0') {
      return pcVar1;
    }
  }
  return nullptr;
}

// 00694590 FUN_00694590
#line 4 "decomp/ST.exe/functions/00694590/decomp.c"
void __fastcall st::fn_00694590(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 006945C0 FUN_006945c0
#line 4 "decomp/ST.exe/functions/006945C0/decomp.c"
void __thiscall st::fn_006945C0(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;

  *(int *)this = *param_1;
  STField<int>(this,4) = param_1[1];
  STField<int>(this,8) = param_1[2];
  STField<int>(this,0xc) = param_1[3];
  uVar3 = STField<int>(this,8) * STField<int>(this,4) * *(int *)this;
  piVar1 = st::fn_00402B21(uVar3 * 8);
  STField<int *>(this,0x10) = piVar1;
  for (iVar2 = (uVar3 & 0x1fffffff) << 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)piVar1 = 0;
    piVar1 = (int *)((int)piVar1 + 1);
  }
  return;
}

// 00694640 FUN_00694640
#line 4 "decomp/ST.exe/functions/00694640/decomp.c"
undefined4 __thiscall st::fn_00694640(void *this,uint param_1,uint param_2,uint param_3,int param_4)

{
  if ((param_1 < *(uint *)this) && (param_2 < STField<uint>(this,4))) {
    if ((param_3 < STField<uint>(this,8)) && ((-1 < param_4 && (param_4 < 2)))) {
      return *(undefined4 *)
              (STField<int>(this,0x10) +
              (((STField<uint>(this,8) * param_4 + param_3) * STField<uint>(this,4) + param_2)
               * *(uint *)this + param_1) * 4);
    }
  }
  return 0;
}

// 006946C0 FUN_006946c0
#line 4 "decomp/ST.exe/functions/006946C0/decomp.c"
undefined4 __thiscall st::fn_006946C0(void *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;

  uVar1 = *(uint *)this;
  if (((param_1 < uVar1) && (uVar2 = STField<uint>(this,4), param_2 < uVar2)) &&
     (uVar3 = STField<uint>(this,8), param_3 < uVar3)) {
    iVar7 = 1;
    iVar4 = uVar3 * uVar2 * uVar1;
    iVar6 = ((uVar3 + param_3) * uVar2 + param_2) * uVar1 + param_1;
    piVar5 = (int *)(STField<int>(this,0x10) + iVar6 * 4);
    do {
      if (*piVar5 != 0) {
        return *(undefined4 *)(STField<int>(this,0x10) + iVar6 * 4);
      }
      iVar7 = iVar7 + -1;
      piVar5 = piVar5 + -iVar4;
      iVar6 = iVar6 - iVar4;
    } while (-1 < iVar7);
  }
  return 0;
}

// 00694780 FUN_00694780
#line 4 "decomp/ST.exe/functions/00694780/decomp.c"
undefined4 __thiscall
st::fn_00694780(void *this,int param_1,uint param_2,uint param_3,int param_4,undefined4 param_5,
            uint param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_c;
  local_c = 0;
  if (param_6 != 0) {
    do {
      uVar3 = 0;
      uVar2 = param_2;
      do {
        if ((((*(uint *)this <= local_c + param_1) || (STField<uint>(this,4) <= uVar2)) ||
            (STField<uint>(this,8) <= param_3)) || ((param_4 < 0 || (1 < param_4)))) {
          return 0;
        }
        iVar1 = (STField<uint>(this,8) * param_4 + param_3) * STField<uint>(this,4) + uVar2;
        uVar3 = uVar3 + 1;
        uVar2 = uVar2 + 1;
        *(undefined4 *)(STField<int>(this,0x10) + (iVar1 * *(int *)this + local_c + param_1) * 4)
             = param_5;
      } while (uVar3 < param_6);
      local_c = local_c + 1;
    } while (local_c < param_6);
  }
  return 1;
}

// 00694890 FUN_00694890
#line 4 "decomp/ST.exe/functions/00694890/decomp.c"
void __fastcall st::fn_00694890(RecoveredRecord_00694890_E22E6A2C *param_1)

{
  if (param_1->field_0010 != nullptr) {
    st::fn_00405D8A(param_1->field_0010);
  }
  param_1->field_0010 = nullptr;
  return;
}

// 00695010 FUN_00695010
#line 4 "decomp/ST.exe/functions/00695010/decomp.c"
undefined4 __thiscall
st::fn_00695010(void *this,int param_1,int param_2,RecoveredRecord_00695010_96BA53C4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong local_14;
  int local_c;
  uint local_8;
  iVar1 = param_3->field_0004;
  local_8 = 0xffffffff;
  local_c = 0;
  do {
    iVar1 = iVar1 + -1;
    iVar2 = local_c;
    if (iVar1 < 0) break;

    iVar3 = st::fn_004019B0(STField<int *>(this,8),param_1,param_2,iVar1,0xff);
    iVar2 = iVar1;
  } while (iVar3 == 0);
  local_c = iVar2;

  st::fn_0040414C(STField<int *>(this,8),param_1,param_2,local_c,
                     reinterpret_cast<RecoveredRecord_006A1370_30F34641 *>(&local_14));
  if (((STPiece<4,4>(local_14) & 0x2000) != 0) || (uVar4 = 6, (short)STPiece<4,4>(local_14) == 0x1100)) {
    uVar4 = local_8;
  }
  if ((STPiece<4,4>(local_14) & 0x4000) != 0) {
    uVar4 = 0x7110;
  }
  if (local_c == 0) {
    uVar4 = 1;
  }
  else if ((0 < local_c) && (local_c < 5)) {
    return 9;
  }
  return uVar4;
}

// 006950F0 FUN_006950f0
#line 1 "decomp/ST.exe/functions/006950F0/decomp.c"

uint st::fn_006950F0(int param_1)

{
  int iVar1;
  uint uVar2;


  iVar1 = st::fn_00401131(param_1);

  uVar2 = st::fn_0072E6C0();
  return uVar2 % *(uint *)(DAT_00853d80 + 0x20c + iVar1 * 0x218);
}

// 00695140 FUN_00695140
#line 4 "decomp/ST.exe/functions/00695140/decomp.c"
void st::fn_00695140(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  byte *puVar4;

  uVar1 = param_2[6];
  uVar2 = param_2[7];
  puVar4 = reinterpret_cast<byte *>((param_1));
  memmove(param_2, puVar4, 0x20); /* compiler REP MOVS byte copy */
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}

// 00695180 FUN_00695180
#line 4 "decomp/ST.exe/functions/00695180/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=006952B0 @ 006956B8
   -> TEST TEST EAX,EAX
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:2: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=2,
   pointer_dereferences=3, scalar_uses=0; sites=0069518E dereference: MOV EAX,dword ptr [EAX + 0x10]
   | 006951F6 dereference: MOV ESI,dword ptr [ECX + 0x8] | 006951FC dereference: ADD ESI,dword ptr
   [ECX + 0x1c] */

int st::fn_00695180(RecoveredRecordView_0052EFB0_569FB924 *param_1,
                RecoveredRecord_CGenerate_00695180 *param_2,
                RecoveredRecord_00695180_6DC76A4C *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_8;

  uVar1 = param_3->field_0010;
  uVar5 = 0;
  iVar6 = 0;
  iVar8 = 0;
  if (param_1->field_000C != uVar1) {
    return 0;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_4 == 0) {
    return 1;
  }
  if ((param_1->field_0014 == 0) && (0 < (int)uVar1)) {
    iVar2 = param_1->field_0018;
    iVar3 = param_2->field_0018;
    do {
      if (uVar5 < STField<uint>(iVar2,0xC)) {
        iVar7 = STField<int>(iVar2,0x8) * uVar5 + STField<int>(iVar2,0x1C);
      }
      else {
        iVar7 = 0;
      }
      if (uVar5 < STField<uint>(iVar3,0xC)) {
        iVar4 = STField<int>(iVar3,0x8) * uVar5 + STField<int>(iVar3,0x1C);
      }
      else {
        iVar4 = 0;
      }
      iVar8 = iVar8 + STField<int>(iVar7,0x2C);
      iVar6 = iVar6 + STField<int>(iVar4,0x2C);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar1);
  }
  local_8 = st::storage_bit_cast<uint>(static_cast<uint32_t>(param_2->field_0014 + param_2->field_0010 * 0x122 + iVar6 <
                  param_1->field_0014 + param_1->field_0010 * 0x122 + iVar8));
  return local_8;
}

// 00695CD0 FUN_00695cd0
#line 4 "decomp/ST.exe/functions/00695CD0/decomp.c"
void __thiscall st::fn_00695CD0(void *this,uint param_1,int param_2,int param_3)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  DArrayTy *array;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;

  iVar8 = STField<int>(this,0x5853);
  if (((iVar8 != 0) && (param_1 < STField<uint>(iVar8,0xC))) &&
     (piVar7 = (int *)(STField<int>(iVar8,0x8) * param_1 + STField<int>(iVar8,0x1C)), piVar7 != nullptr
     )) {
    if (STField<DArrayTy *>(piVar7,0x15) != nullptr) {
      st::fn_006AE110(STField<DArrayTy *>(piVar7,0x15));
      STField<undefined4>(piVar7,0x15) = 0;
    }
    if (STField<DArrayTy *>(piVar7,0x19) != nullptr) {
      st::fn_006AE110(STField<DArrayTy *>(piVar7,0x19));
      STField<undefined4>(piVar7,0x19) = 0;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = *piVar7;
    }
    st::fn_006B0C70(STField<DArrayTy *>(this,0x5853),param_1);
    iVar8 = STField<int>(this,0x5853);
    uVar6 = 0;
    if (0 < STField<int>(iVar8,0xC)) {
      bVar9 = STField<int>(iVar8,0xC) != 0;
      do {
        if (bVar9) {
          iVar8 = STField<int>(iVar8,0x8) * uVar6 + STField<int>(iVar8,0x1C);
        }
        else {
          iVar8 = 0;
        }
        if (((int)param_1 <= (int)uVar6) && (iVar3 = STField<int>(iVar8,0x15), iVar3 != 0)) {
          uVar5 = 0;
          if (0 < STField<int>(iVar3,0xC)) {
            bVar9 = STField<int>(iVar3,0xC) != 0;
            do {
              if (bVar9) {
                iVar3 = STField<int>(iVar3,0x8) * uVar5 + STField<int>(iVar3,0x1C);
              }
              else {
                iVar3 = 0;
              }
              psVar1 = (short *)(STField<int>(this,0x584f) +
                                (STField<int>(this,0x582f) * param_2 + STField<int>(iVar3,0x2)) * 2);
              if ((int)*psVar1 != uVar6) {
                *psVar1 = (short)uVar6;
              }
              iVar3 = STField<int>(iVar8,0x15);
              uVar5 = uVar5 + 1;
              bVar9 = uVar5 < STField<uint>(iVar3,0xC);
            } while ((int)uVar5 < (int)STField<uint>(iVar3,0xC));
          }
        }
        array = *(DArrayTy **)(iVar8 + 0x19);
        if (array != nullptr) {
          uVar5 = 0;
          if (0 < (int)array->count) {
            bVar9 = array->count != 0;
            do {
              if (bVar9) {
                puVar4 = DArrayAt<uint>(array, uVar5);
              }
              else {
                puVar4 = nullptr;
              }
              uVar2 = *puVar4;
              if ((int)param_1 < (int)uVar2) {
                *puVar4 = uVar2 - 1;
              }
              else if (uVar2 == param_1) {
                if (param_3 < 0) {
                  st::fn_006B0C70(array,uVar5);
                }
                else {
                  st::fn_0040138E(this,uVar6,param_3);
                }
              }
              array = *(DArrayTy **)(iVar8 + 0x19);
              uVar5 = uVar5 + 1;
              bVar9 = uVar5 < array->count;
            } while ((int)uVar5 < (int)array->count);
          }
        }
        uVar6 = uVar6 + 1;
        iVar8 = STField<int>(this,0x5853);
        bVar9 = uVar6 < STField<uint>(iVar8,0xC);
      } while ((int)uVar6 < (int)STField<uint>(iVar8,0xC));
    }
  }
  return;
}

// 00696050 FUN_00696050
#line 4 "decomp/ST.exe/functions/00696050/decomp.c"
void __thiscall st::fn_00696050(void *this,uint param_1)

{
  int iVar1;

  iVar1 = STField<int>(this,0x5853);
  if (((iVar1 != 0) && (param_1 < STField<uint>(iVar1,0xC))) &&
     (iVar1 = STField<int>(iVar1,0x8) * param_1 + STField<int>(iVar1,0x1C), iVar1 != 0)) {
    if (*(DArrayTy **)(iVar1 + 0x15) != nullptr) {
      st::fn_006AE110(*(DArrayTy **)(iVar1 + 0x15));
      STField<undefined4>(iVar1,0x15) = 0;
    }
    if (*(DArrayTy **)(iVar1 + 0x19) != nullptr) {
      st::fn_006AE110(*(DArrayTy **)(iVar1 + 0x19));
      STField<undefined4>(iVar1,0x19) = 0;
    }
  }
  return;
}

// 006960D0 FUN_006960d0
#line 4 "decomp/ST.exe/functions/006960D0/decomp.c"
uint __thiscall st::fn_006960D0(void *this,uint param_1,int param_2)

{
  uint uVar1;
  DArrayTy *pDVar2;
  uint uVar4;
  int local_EAX_121;
  int uVar3;
  int *piVar5;
  int iVar6;
  bool bVar7;

  iVar6 = STField<int>(this,0x5853);
  if (iVar6 != 0) {
    if (param_1 < STField<uint>(iVar6,0xC)) {
      iVar6 = STField<int>(iVar6,0x8) * param_1 + STField<int>(iVar6,0x1C);
    }
    else {
      iVar6 = 0;
    }
    if (STField<int>(iVar6,0x19) == 0) {
      pDVar2 = st::fn_006AE290(nullptr,10,4,10);
      *(DArrayTy **)(iVar6 + 0x19) = pDVar2;
    }
    pDVar2 = *(DArrayTy **)(iVar6 + 0x19);
    if (pDVar2 != nullptr) {
      uVar1 = pDVar2->count;
      uVar4 = 0;
      if (0 < (int)uVar1) {
        bVar7 = uVar1 != 0;
        while (((!bVar7 ||
                (piVar5 = DArrayAt<int>(pDVar2, uVar4),
                piVar5 == nullptr)) || (*piVar5 != param_2))) {
          uVar4 = uVar4 + 1;
          bVar7 = uVar4 < uVar1;
          if ((int)uVar1 <= (int)uVar4) {
            local_EAX_121 = st::fn_006AE1C0(pDVar2,&param_2);
            return local_EAX_121;
          }
        }
        if (-1 < (int)uVar4) {
          return uVar4;
        }
      }
      uVar3 = st::fn_006AE1C0(pDVar2,&param_2);
      return uVar3;
    }
  }
  return 0xffffffff;
}

// 006961B0 FUN_006961b0
#line 4 "decomp/ST.exe/functions/006961B0/decomp.c"
int __thiscall st::fn_006961B0(void *this,uint param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  uint local_8;
  iVar5 = STField<int>(this,0x5853);
  local_8 = 0;
  if (iVar5 != 0) {
    if (param_1 < STField<uint>(iVar5,0xC)) {
      iVar2 = STField<int>(iVar5,0x8) * param_1 + STField<int>(iVar5,0x1C);
    }
    else {
      iVar2 = 0;
    }
    if (param_2 < STField<uint>(iVar5,0xC)) {
      iVar5 = STField<int>(iVar5,0x8) * param_2 + STField<int>(iVar5,0x1C);
    }
    else {
      iVar5 = 0;
    }
    if (((iVar2 != 0) && (iVar5 != 0)) && (STField<int>(iVar2,0x15) != 0)) {
      iVar2 = STField<int>(iVar5,0x15);
      uVar4 = 0;
      if (0 < STField<int>(iVar2,0xC)) {
        bVar6 = STField<int>(iVar2,0xC) != 0;
        do {
          if ((bVar6) && (iVar2 = STField<int>(iVar2,0x8) * uVar4 + STField<int>(iVar2,0x1C), iVar2 != 0))
          {
            /* ST_CALLSITE[00696244]: CALL 0x00404156; direct=00404156 CGenerate::sub_00695F70 */
            uVar1 = st::fn_00404156(static_cast<CGenerate *>(this),param_1,STField<int>(iVar2,0x2),param_3);
            if (-1 < (int)uVar1) {
              local_8 = local_8 + 1;
            }
          }
          iVar2 = STField<int>(iVar5,0x15);
          uVar4 = uVar4 + 1;
          bVar6 = uVar4 < STField<uint>(iVar2,0xC);
        } while ((int)uVar4 < (int)STField<uint>(iVar2,0xC));
      }
      iVar2 = STField<int>(iVar5,0x19);
      if (iVar2 != 0) {
        uVar4 = 0;
        if (0 < STField<int>(iVar2,0xC)) {
          bVar6 = STField<int>(iVar2,0xC) != 0;
          do {
            if (bVar6) {
              piVar3 = (int *)(STField<int>(iVar2,0x8) * uVar4 + STField<int>(iVar2,0x1C));
            }
            else {
              piVar3 = nullptr;
            }
            st::fn_0040138E(this,param_1,*piVar3);
            iVar2 = STField<int>(iVar5,0x19);
            uVar4 = uVar4 + 1;
            bVar6 = uVar4 < STField<uint>(iVar2,0xC);
          } while ((int)uVar4 < (int)STField<uint>(iVar2,0xC));
        }
      }
      st::fn_004023D3(this,param_2,param_4,param_1);
    }
    return local_8;
  }
  return 0;
}

// 00696310 FUN_00696310
#line 4 "decomp/ST.exe/functions/00696310/decomp.c"
/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=8, ignored=0, unknown=0 */

uint __thiscall st::fn_00696310(void *this,int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;

  iVar1 = param_1 / param_2;
  if (param_1 % param_2 == 0) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (-(uint)(iVar1 != STField<int>(this,0x5833) + -1) & 4) + 3;
    }
  }
  else if (param_1 % param_2 == STField<int>(this,0x5833) + -1) {
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = (-(uint)(iVar1 != STField<int>(this,0x5837) + -1) & 3) + 2;
    }
  }
  else if (iVar1 == STField<int>(this,0x5837) + -1) {
    iVar1 = 6;
  }
  else {
    iVar1 = (-(uint)(iVar1 != 0) & 4) + 4;
  }
  uVar2 = (uint)(byte)(&DAT_0079d77c)[iVar1];
  if (param_4 != nullptr) {
    *param_4 = iVar1;
  }
  if (uVar2 != 0) {
    piVar3 = (int *)(iVar1 * 0x20 + 0x570f + (int)this);
    uVar4 = uVar2;
    do {
      iVar1 = *piVar3;
      piVar3 = piVar3 + 1;
      *param_3 = iVar1 + param_1;
      param_3 = param_3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return uVar2;
}

// 00696C40 FUN_00696c40
#line 4 "decomp/ST.exe/functions/00696C40/decomp.c"
int __thiscall st::fn_00696C40(void *this,uint param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  int local_8;

  iVar1 = STField<int>(this,0x5853);
  iVar2 = 0;
  local_8 = 0;
  if (param_1 < STField<uint>(iVar1,0xC)) {
    iVar3 = STField<int>(iVar1,0x8) * param_1 + STField<int>(iVar1,0x1C);
    if ((iVar3 != 0) && (iVar3 = STField<int>(iVar3,0x19), iVar3 != 0)) {
      uVar6 = 0;
      if (0 < STField<int>(iVar3,0xC)) {
        bVar7 = STField<int>(iVar3,0xC) != 0;
        do {
          if (bVar7) {
            puVar4 = (uint *)(STField<int>(iVar3,0x8) * uVar6 + STField<int>(iVar3,0x1C));
          }
          else {
            puVar4 = nullptr;
          }
          if ((((*puVar4 < STField<uint>(iVar1,0xC)) &&
               (piVar5 = (int *)(*puVar4 * STField<int>(iVar1,0x8) + STField<int>(iVar1,0x1C)),
               piVar5 != nullptr)) && (*piVar5 == param_2)) && (uVar6 != param_3)) {
            local_8 = local_8 + 1;
          }
          uVar6 = uVar6 + 1;
          bVar7 = uVar6 < STField<uint>(iVar3,0xC);
          iVar2 = local_8;
        } while ((int)uVar6 < (int)STField<uint>(iVar3,0xC));
      }
    }
  }
  return iVar2;
}

// 00696D00 FUN_00696d00
#line 4 "decomp/ST.exe/functions/00696D00/decomp.c"
int __thiscall st::fn_00696D00(void *this,AnonShape_00696D00_CB3CB395 *param_1,uint param_2)

{
  DArrayTy *pDVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;

  if ((param_1 != nullptr) &&
     (pDVar1 = param_1->field_0019, pDVar1 != nullptr)) {
    uVar4 = 0;
    if (0 < (int)pDVar1->count) {
      bVar5 = pDVar1->count != 0;
      while( true ) {
        if (bVar5) {
          puVar3 = DArrayAt<uint>(pDVar1, uVar4);
        }
        else {
          puVar3 = nullptr;
        }
        iVar2 = st::fn_004043B3(this,*puVar3,*(int *)param_1,param_2);
        if (iVar2 == 0) break;
        pDVar1 = param_1->field_0019;
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < pDVar1->count;
        if ((int)pDVar1->count <= (int)uVar4) {
          return 0;
        }
      }
      if ((int)*puVar3 < 0) {
        return 0;
      }
      iVar2 = st::fn_004026A3(this,param_2,*puVar3,0,0);
      return iVar2;
    }
  }
  return 0;
}

// 00696EB0 FUN_00696eb0
#line 4 "decomp/ST.exe/functions/00696EB0/decomp.c"
undefined4
st::fn_00696EB0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  RecoveredRecord_006A1370_30F34641 local_1c;
  RecoveredRecord_006A1370_30F34641 local_14;
  uint local_c;
  int local_8;

  local_c = 0;
  if (((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
      ((param_3 < param_1[1] && (-1 < param_4)))) &&
     ((param_4 < *param_1 && ((-1 < param_5 && (param_5 < param_1[1])))))) {

    iVar2 = st::fn_0040414C(param_1,param_2,param_3,param_6,&local_14);

    iVar3 = st::fn_0040414C(param_1,param_4,param_5,param_6,&local_1c);
    if (STPiece<2,2>(local_14) != 0) {
      pbVar3 = (byte *)(STField<int>(local_8,0x5833) * param_3 + STField<int>(local_8,0x584B) + param_2);
      *pbVar3 = *pbVar3 | '\x01' << ((byte)param_6 & 0x1f);
    }
    if (STPiece<2,2>(local_1c) != 0) {
      pbVar3 = (byte *)(STField<int>(local_8,0x5833) * param_5 + STField<int>(local_8,0x584B) + param_4);
      *pbVar3 = *pbVar3 | '\x01' << ((byte)param_6 & 0x1f);
    }
    if ((((STPiece<1,1>(local_1c.field_0004) == STPiece<1,1>(local_14.field_0004)) && ((short)iVar2 == (short)iVar3)
         ) && (((-(uint)((STPiece<2,2>(local_14) & 0x2000) != 0) & 0xffffff01) + 0xffff &
               (uint)(ushort)STPiece<2,2>(local_14)) ==
               ((-(uint)((STPiece<2,2>(local_1c) & 0x2000) != 0) & 0xffffff01) + 0xffff &
               (uint)(ushort)STPiece<2,2>(local_1c)))) &&
       (uVar1 = STReplaceLowWord(static_cast<uint32_t>(STPiece<0,4>(local_1c)), (uint16_t)(STPiece<0,2>(local_1c))),
       ((-(ushort)((STPiece<0,2>(local_14) & 0x2000) != 0) & 0xff01) - 1 & STPiece<0,2>(local_14)) ==
       ((-(ushort)((STPiece<0,2>(local_1c) & 0x2000) != 0) & 0xff01) - 1 & STPiece<0,2>(local_1c)))) {
      if (param_7 == 1) {
        uVar1 = (uint)(ushort)STPiece<2,2>(local_1c);
      }
      iVar4 = 0;
      piVar2 = reinterpret_cast<int *>(&DAT_007df82c);
      while ((piVar2[-1] != param_4 - param_2 || (*piVar2 != param_5 - param_3))) {
        piVar2 = piVar2 + 2;
        iVar4 = iVar4 + 1;
        if (0x7df86b < (int)piVar2) {
          return local_c;
        }
      }
      if ((iVar4 != -1) && (*(short *)(&DAT_007df898 + (iVar4 + (uVar1 & 0xf) * 8) * 2) != 0)) {
        local_c = 1;
      }
    }
    return local_c;
  }
  return 0;
}

// 00697160 FUN_00697160
#line 4 "decomp/ST.exe/functions/00697160/decomp.c"
undefined4 __thiscall st::fn_00697160(void *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  ulonglong local_c;
  st::fn_0040414C(STField<int *>(this,8),param_1,param_2,param_3,
                     reinterpret_cast<RecoveredRecord_006A1370_30F34641 *>(&local_c));
  if (((STPiece<4,4>(local_c) & 0x2000) == 0) || (uVar1 = 1, (STPiece<4,4>(local_c) & 0xf) != 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

// 00697AF0 FUN_00697af0
#line 4 "decomp/ST.exe/functions/00697AF0/decomp.c"
undefined4 __thiscall
st::fn_00697AF0(void *this,AnonShape_00697AF0_A94F4D28 *param_1,int *param_2,int *param_3,int *param_4,
            int *param_5)

{
  DArrayTy *pDVar1;
  uint uVar2;
  AnonShape_00697AF0_A94F4D28 *pAVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  AnonShape_00697AF0_A94F4D28 *pAVar8;
  int local_14;
  AnonShape_00697AF0_A94F4D28 *local_10;
  int local_c;
  int local_8;

  pDVar1 = param_1->field_0015;
  local_14 = 0;
  if (pDVar1 != nullptr) {
    uVar2 = pDVar1->count;
    uVar7 = 0;
    AnonShape_00697AF0_A94F4D28 * param_1_after_write = nullptr; /* compiler stack-slot lifetime split */
    local_c = 0;
    local_10 = nullptr;
    local_8 = 0;
    if (0 < (int)uVar2) {
      do {
        pvVar5 = nullptr;
        if (uVar7 < uVar2) {
          pvVar5 = DArrayAt<void>(pDVar1, uVar7);
        }
        if (STField<char>(pvVar5,1) == '\0') {
          iVar6 = STField<int>(pvVar5,2) / STField<int>(this,0x5833);
          pAVar8 = (AnonShape_00697AF0_A94F4D28 *)
                   (STField<int>(pvVar5,2) % STField<int>(this,0x5833));
          local_14 = local_14 + 1;
          pAVar3 = pAVar8;
          iVar4 = iVar6;
          if (uVar7 != 0) {
            if ((int)pAVar8 < (int)param_1_after_write) {
              param_1_after_write = pAVar8;
            }
            if (iVar6 < local_c) {
              local_c = iVar6;
            }
            if ((int)local_10 < (int)pAVar8) {
              local_10 = pAVar8;
            }
            pAVar8 = param_1_after_write;
            pAVar3 = local_10;
            iVar4 = local_c;
            if (iVar6 <= local_8) goto LAB_00697b99;
          }
          local_c = iVar4;
          local_10 = pAVar3;
          param_1_after_write = pAVar8;
          local_8 = iVar6;
        }
LAB_00697b99:
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar2);
      if ((local_14 != 0) &&
         (local_14 == ((local_8 - local_c) + 1) * ((int)local_10 + (1 - (int)param_1_after_write)))) {
        *param_2 = (int)param_1_after_write;
        *param_3 = local_c;
        *param_4 = (int)local_10;
        *param_5 = local_8;
        return 1;
      }
    }
  }
  return 0;
}

// 00697CF0 FUN_00697cf0
#line 4 "decomp/ST.exe/functions/00697CF0/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void __thiscall st::fn_00697CF0(void *this,int param_1,int param_2)

{
  alignas(4) byte st_stack_frame[252];

  undefined *puVar1;
  int iVar2;
  void **ppvVar3;
  uint local_EAX_231;
  AnonShape_00697CF0_0C230C1C *pAVar4;
  uint local_EAX_1023;
  uint local_EAX_1070;
  uint local_EAX_1102;
  int iVar5;
  uint uVar4;
  uint uVar8;
  int iVar6;
  uint local_EAX_1988;
  int iVar7;
  uint local_EAX_2126;
  uint local_EAX_2144;
  uint local_EAX_2175;
  uint local_EAX_2197;
  uint local_EAX_2223;
  uint local_EAX_2245;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  byte *puVar16;
  byte *puVar17;
  AnonShape_00697CF0_36737CA3 *pAVar18;
  uint *puVar19;
  int iVar20;
  bool bVar21;
  uint auStack_10c [8];
  int local_c4;
  byte local_c0 [4];
  uint local_bc;
  int local_b8;
  byte *local_b4;
  int local_ac;
  int local_a8;
  AnonShape_00697CF0_36737CA3 *local_a4;
  int local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  int local_90;
  uint local_88;
  int local_84;
  int local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 *local_64;
  int local_5c;
  uint local_58;
  int local_50;
  int local_48;
  int local_44;
  int local_3c;
  int local_38;
  int local_2c;
  AnonShape_00697CF0_0C230C1C *local_28;
  byte *local_1c;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  puStack_c = (undefined *)&DAT_0079d798;
  puStack_10 = (byte *)&st_image_0072D964;
  local_14 = ExceptionList;
  iVar13 = 0;
  local_6c = 0;
  local_48 = 0;
  local_5c = 0;
  local_ac = 0;
  local_b8 = 0;
  local_68 = 0;
  if (STField<int>(this,0x5853) != 0) {
    iVar6 = *(int *)(STField<int>(this,0x5853) + 0xc);
    local_70 = iVar6;
    auStack_10c[7] = 0x697d61;
    iVar7 = iVar6 * -0x10;
    local_1c = (st_stack_frame + 12) + iVar7;
    local_28 = reinterpret_cast<AnonShape_00697CF0_0C230C1C *>(((st_stack_frame + 12) + iVar7));
    local_8 = 0xffffffff;
    local_88 = 0;
    ExceptionList = &local_14;
    ppvVar3 = &local_14;
    puVar17 = (st_stack_frame + 12) + iVar7;
    if (0 < iVar6) {
      do {
        ppvVar3 = (void **)ExceptionList;
        puVar17 = local_1c;
        if (param_1 < 1) break;
        iVar11 = STField<int>(this,0x5853);
        if (local_88 < STField<uint>(iVar11,0xC)) {
          pAVar18 = (AnonShape_00697CF0_36737CA3 *)
                    (STField<int>(iVar11,0x8) * local_88 + STField<int>(iVar11,0x1C));
        }
        else {
          pAVar18 = nullptr;
        }
        local_a4 = pAVar18;
        if ((*(int *)pAVar18 == 0) && (pAVar18->field_0005 < 1)) {
          if (pAVar18->field_0015 != 0) {
            auStack_10c[iVar6 * -4 + 7] = 0x697ddc;

            local_EAX_231 = st::fn_0072E6C0();
            local_a0 = (int)local_EAX_231 % 6 + 1;
            local_74 = 0;
            local_90 = 0;
            local_94 = 0;
            iVar11 = pAVar18->field_0015;
            uVar9 = STField<uint>(iVar11,0xC);
            if (0 < (int)uVar9) {
              do {
                if (local_94 < uVar9) {
                  pbVar14 = (byte *)(STField<int>(iVar11,0x8) * local_94 + STField<int>(iVar11,0x1C));
                }
                else {
                  pbVar14 = nullptr;
                }
                if (pbVar14 != nullptr) {
                  local_90 = local_90 + 1;
                  iVar13 = *(int *)(pbVar14 + 2) / STField<int>(this,0x5833);
                  iVar11 = *(int *)(pbVar14 + 2) % STField<int>(this,0x5833);
                  if (local_94 == 0) {
                    local_48 = iVar11;
                    local_5c = iVar13;
                    local_ac = iVar11;
LAB_00697e8c:
                    local_b8 = iVar13;
                  }
                  else {
                    if (iVar11 < local_48) {
                      local_48 = iVar11;
                    }
                    if (iVar13 < local_5c) {
                      local_5c = iVar13;
                    }
                    if (local_ac < iVar11) {
                      local_ac = iVar11;
                    }
                    if (local_b8 < iVar13) goto LAB_00697e8c;
                  }
                  if ((*pbVar14 & 1) != 0) {
                    local_74 = local_74 + 1;
                    auStack_10c[iVar6 * -4 + 7] = local_a0;
                    auStack_10c[iVar6 * -4 + 6] = 1;
                    auStack_10c[iVar6 * -4 + 5] = 0;
                    auStack_10c[iVar6 * -4 + 4] = 1;
                    auStack_10c[iVar6 * -4 + 3] = 0;
                    auStack_10c[iVar6 * -4 + 2] = iVar13;
                    auStack_10c[iVar6 * -4 + 1] = iVar11;
                    auStack_10c[iVar6 * -4] = 0x697eb6;
                    st::fn_0040204F(auStack_10c[iVar6 * -4 + 1],auStack_10c[iVar6 * -4 + 2],
                                       auStack_10c[iVar6 * -4 + 3],auStack_10c[iVar6 * -4 + 4],
                                       auStack_10c[iVar6 * -4 + 5],auStack_10c[iVar6 * -4 + 6],
                                       auStack_10c[iVar6 * -4 + 7]);
                  }
                }
                local_94 = local_94 + 1;
                iVar11 = local_a4->field_0015;
                uVar9 = STField<uint>(iVar11,0xC);
                iVar13 = local_6c;
              } while ((int)local_94 < (int)uVar9);
            }
            if (local_90 != 0) {
              pAVar4 = local_28 + iVar13;
              *(undefined2 *)pAVar4 = (undefined2)local_88;
              *(short *)&pAVar4->field_0x2 = (short)local_90;
              pAVar4->field_0004 = local_74;
              pAVar4->field_0008 = (short)local_48;
              pAVar4->field_000A = (short)local_ac;
              pAVar4->field_000C = (short)local_5c;
              pAVar4->field_000E = (short)local_b8;
              iVar13 = iVar13 + 1;
              local_6c = iVar13;
            }
          }
        }
        else if (0 < *(int *)pAVar18) break;
        local_88 = local_88 + 1;
        ppvVar3 = (void **)ExceptionList;
        puVar17 = local_1c;
      } while ((int)local_88 < local_70);
    }
    local_1c = puVar17;
    ExceptionList = ppvVar3;
    puVar17 = (st_stack_frame + 12) + iVar7;
    if (iVar13 != 0) {
      iVar11 = STField<int>(this,0x5837) * STField<int>(this,0x5833) * 2;
      auStack_10c[iVar6 * -4 + 7] = 0x697f78;
      iVar6 = -(iVar11 + 3U & 0xfffffffc);
      iVar2 = iVar6 + iVar7 + -0xec;
      local_b4 = (st_stack_frame + 12) + iVar6 + iVar7;
      *(undefined4 *)((int)auStack_10c + iVar6 + iVar7 + 0x1c) = 0x697f8f;
      iVar11 = -(iVar11 + 3U & 0xfffffffc);
      puVar16 = (st_stack_frame + 12) + iVar11 + iVar2 + 0xec;
      local_1c = (st_stack_frame + 12) + iVar11 + iVar6 + iVar7;
      local_64 = reinterpret_cast<undefined4 *>(((st_stack_frame + 12) + iVar11 + iVar6 + iVar7));
      local_8 = 0xffffffff;
      local_a8 = iVar13 * 2;
      puVar17 = (st_stack_frame + 12) + iVar11 + iVar6 + iVar7;
      while ((0 < param_2 &&
             (iVar13 = local_6c, puVar17 = (st_stack_frame + 12) + iVar11 + iVar2 + 0xec, 0 < local_a8)))
      {
        local_a8 = local_a8 + -1;
        *(undefined4 *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x1c) = 3;
        *(undefined4 *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x18) = 4;
        *(undefined4 *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x14) = 0x10;
        *(int *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x10) = local_6c;
        *(AnonShape_00697CF0_0C230C1C **)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0xc) =
             local_28;
        *(undefined4 *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 8) = 0x697fd6;

        local_80 = st::fn_004012D5(*(int *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0xc),
                                      *(int *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x10),
                                      *(int *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x14),
                                      *(int *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x18),
                                      *(int *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x1c));
        iVar13 = local_6c;
        puVar17 = puVar16;
        if (-1 < local_80) {
          pAVar4 = local_28 + local_80;
          iVar13 = STField<int>(this,0x5853);
          if ((uint)(int)*(short *)pAVar4 < STField<uint>(iVar13,0xC)) {
            local_a4 = (AnonShape_00697CF0_36737CA3 *)
                       (STField<int>(iVar13,0x8) * (int)*(short *)pAVar4 + STField<int>(iVar13,0x1C));
          }
          else {
            local_a4 = nullptr;
          }
          local_38 = ((int)pAVar4->field_000A - (int)pAVar4->field_0008) + 1;
          local_44 = ((int)pAVar4->field_000E - (int)pAVar4->field_000C) + 1;
          puVar19 = local_64;
          for (uVar9 = (local_44 * local_38 & 0x7fffffffU) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar19 = 0xffffffff;
            puVar19 = puVar19 + 1;
          }
          for (uVar9 = local_44 * local_38 * 2 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar19 = 0xff;
            puVar19 = (undefined4 *)((int)puVar19 + 1);
          }
          local_94 = 0;
          iVar13 = local_a4->field_0015;
          if (0 < STField<int>(iVar13,0xC)) {
            bVar21 = STField<int>(iVar13,0xC) != 0;
            do {
              if (bVar21) {
                pbVar14 = (byte *)(STField<int>(iVar13,0x8) * local_94 + STField<int>(iVar13,0x1C));
              }
              else {
                pbVar14 = nullptr;
              }
              if ((*pbVar14 & 1) != 0) {
                *(undefined2 *)
                 ((int)local_64 +
                 (((*(int *)(pbVar14 + 2) / STField<int>(this,0x5833) -
                   (int)local_28[local_80].field_000C) * local_38 -
                  (int)local_28[local_80].field_0008) +
                 *(int *)(pbVar14 + 2) % STField<int>(this,0x5833)) * 2) = 0;
              }
              local_94 = local_94 + 1;
              iVar13 = local_a4->field_0015;
              bVar21 = local_94 < STField<uint>(iVar13,0xC);
            } while ((int)local_94 < (int)STField<uint>(iVar13,0xC));
          }
          *(undefined4 *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x1c) = 0x6980f4;

          local_EAX_1023 = st::fn_0072E6C0();
          local_9c = local_EAX_1023 & 0x80000007;
          if ((int)local_9c < 0) {
            local_9c = (local_9c - 1 | 0xfffffff8) + 1;
          }
          local_c4 = 10;
          local_3c = -100;
          local_98 = -100;
          *(undefined4 *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x1c) = 0x698123;

          local_EAX_1070 = st::fn_0072E6C0();
          local_58 = local_EAX_1070 & 0x80000003;
          if ((int)local_58 < 0) {
            local_58 = (local_58 - 1 | 0xfffffffc) + 1;
          }
          do {
            iVar13 = local_a4->field_0015;
            uVar9 = STField<uint>(iVar13,0xC);
            *(undefined4 *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x1c) = 0x698143;

            local_EAX_1102 = st::fn_0072E6C0();
            uVar12 = (int)local_EAX_1102 % (int)uVar9;
            puVar1 = (&PTR_DAT_007d7f70)[local_9c];
            if (uVar12 < uVar9) {
              iVar13 = STField<int>(iVar13,0x8) * uVar12 + STField<int>(iVar13,0x1C);
            }
            else {
              iVar13 = 0;
            }
            local_84 = STField<int>(iVar13,0x2) / STField<int>(this,0x5833);
            local_78 = STField<int>(iVar13,0x2) % STField<int>(this,0x5833);
            iVar13 = (int)local_28[local_80].field_000C;
            if ((((iVar13 <= local_84) && (local_84 < local_28[local_80].field_000E)) &&
                (iVar15 = (int)local_28[local_80].field_0008, iVar15 <= local_78)) &&
               (local_78 < local_28[local_80].field_000A)) {
              local_68 = 1;
              iVar20 = local_58 * 0xe4;
              if (*(int *)(puVar1 + iVar20) < 1) {
                local_68 = 0;
              }
              else {
                local_94 = 0;
                do {
                  iVar5 = local_94 * 0x1c + iVar20;
                  iVar10 = (*(int *)(puVar1 + iVar5 + 4) - iVar15) + local_78;
                  iVar5 = (*(int *)(puVar1 + iVar5 + 8) - iVar13) + local_84;
                  if ((((-1 < iVar10) && (iVar10 < local_38)) &&
                      ((-1 < iVar5 && (iVar5 < local_44)))) &&
                     (((local_78 < iVar15 || (local_28[local_80].field_000A < local_78)) ||
                      ((local_84 < iVar13 ||
                       ((local_28[local_80].field_000E < local_84 ||
                        (*(short *)((int)local_64 + (iVar5 * local_38 + iVar10) * 2) != 0)))))))) {
                    local_68 = 0;
                    break;
                  }
                  local_94 = local_94 + 1;
                } while ((int)local_94 < *(int *)(puVar1 + iVar20));
              }
              if (local_68 == 1) {
                local_3c = local_78;
                local_98 = local_84;
                break;
              }
            }
            local_c4 = local_c4 + -1;
          } while (0 < local_c4);
          iVar13 = local_6c;
          if (local_68 != 0) {
            iVar20 = local_58 * 0xe4;
            *(undefined4 *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x1c) = 1;
            *(undefined4 *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x18) = 0;
            iVar13 = local_98;
            *(int *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x14) =
                 *(int *)(puVar1 + iVar20 + 8) + local_98;
            iVar15 = local_3c;
            *(int *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x10) =
                 *(int *)(puVar1 + iVar20 + 4) + local_3c;
            *(int *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0xc) = iVar13;
            *(int *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 8) = iVar15;
            *(undefined4 *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 4) = 0x698306;
            st::fn_00404EF8(this,*(uint *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 8),
                               *(int *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0xc),
                               *(uint *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x10),
                               *(int *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x14),
                               *(int *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x18),
                               *(int *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x1c));
            iVar13 = 0;
            if (*(int *)(puVar1 + iVar20) != 1 && -1 < *(int *)(puVar1 + iVar20) + -1) {
              do {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar10 = *(int *)(puVar1 + (local_58 * 0x39 + iVar13) * 4 + 0xcc) * 0x1c + iVar20;
                iVar5 = *(int *)(puVar1 + (local_58 * 0x39 + iVar13) * 4 + 200) * 0x1c + iVar20;
                *(undefined4 *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x1c) = 1;
                *(undefined4 *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x18) = 0;
                *(int *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x14) =
                     *(int *)(puVar1 + iVar10 + 8) + local_98;
                iVar15 = local_3c;
                *(int *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x10) =
                     *(int *)(puVar1 + iVar10 + 4) + local_3c;
                *(int *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0xc) =
                     *(int *)(puVar1 + iVar5 + 8) + local_98;
                *(int *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 8) =
                     *(int *)(puVar1 + iVar5 + 4) + iVar15;
                *(undefined4 *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 4) = 0x69836f;
                st::fn_00404EF8(this,*(uint *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 8),
                                   *(int *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0xc),
                                   *(uint *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x10),
                                   *(int *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x14),
                                   *(int *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x18),
                                   *(int *)((int)auStack_10c + iVar11 + iVar6 + iVar7 + 0x1c));
                iVar13 = iVar13 + 1;
              } while (iVar13 < *(int *)(puVar1 + iVar20) + -1);
            }
            param_2 = param_2 + -1;
            local_28[local_80].field_0004 = 0;
            iVar13 = local_6c;
          }
        }
      }
    }
    local_a8 = iVar13 * 3;
    for (; (-1 < param_1 && (0 < local_a8)); local_a8 = local_a8 + -1) {
      *(undefined4 *)(puVar17 + -4) = 0x6983d9;

      uVar4 = st::fn_0072E6C0();
      iVar6 = STField<int>(this,0x5853);
      if ((uint)(int)*(short *)(local_28 + (int)uVar4 % iVar13) < STField<uint>(iVar6,0xC)) {
        local_a4 = (AnonShape_00697CF0_36737CA3 *)
                   (STField<int>(iVar6,0x8) * (int)*(short *)(local_28 + (int)uVar4 % iVar13) +
                   STField<int>(iVar6,0x1C));
      }
      else {
        local_a4 = nullptr;
      }
      if ((((*(int *)local_a4 == 0) && (local_a4->field_0005 < 2)) && (3 < local_a4->field_0011)) &&
         (local_a4->field_0015 != 0)) {
        local_50 = local_a4->field_0011 / 10 + 1;
        iVar13 = local_a4->field_0015;
        uVar9 = STField<uint>(iVar13,0xC);
        *(undefined4 *)(puVar17 + -4) = 0x698455;

        uVar8 = st::fn_0072E6C0();
        local_2c = (int)uVar8 % (int)uVar9;
        local_94 = 0;
        if (0 < (int)uVar9) {
          do {
            uVar12 = local_94 + local_2c;
            if ((int)uVar9 < (int)uVar12) {
              uVar12 = uVar12 - uVar9;
            }
            if (uVar12 < uVar9) {
              iVar13 = STField<int>(iVar13,0x8) * uVar12 + STField<int>(iVar13,0x1C);
            }
            else {
              iVar13 = 0;
            }
            if (iVar13 != 0) {
              iVar6 = STField<int>(iVar13,0x2) / STField<int>(this,0x5833);
              iVar13 = STField<int>(iVar13,0x2) % STField<int>(this,0x5833);
              *(undefined4 *)(puVar17 + -4) = 0x6984b9;

              local_EAX_1988 = st::fn_0072E6C0();
              uVar9 = local_EAX_1988 & 0x80000003;
              if ((int)uVar9 < 0) {
                uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
              }
              if (uVar9 == 1) {
                *(undefined1 **)(puVar17 + -4) = local_c0;
                *(undefined4 *)(puVar17 + -8) = 0;
                *(int *)(puVar17 + -0xc) = iVar6;
                *(int *)(puVar17 + -0x10) = iVar13;
                *(undefined4 *)(puVar17 + -0x14) = STField<undefined4>(this,8);
                *(undefined4 *)(puVar17 + -0x18) = 0x6984e3;

                st::fn_0040414C(*(int **)(puVar17 + -0x14),*(int *)(puVar17 + -0x10),
                                   *(int *)(puVar17 + -0xc),*(int *)(puVar17 + -8),
                                   *(RecoveredRecord_006A1370_30F34641 **)(puVar17 + -4));
                bVar21 = false;
                *(undefined4 *)(puVar17 + -0x18) = 0xff;
                *(undefined4 *)(puVar17 + -0x1c) = 0;
                *(int *)(puVar17 + -0x20) = iVar6;
                *(int *)(puVar17 + -0x24) = iVar13;
                *(undefined4 *)(puVar17 + -0x28) = STField<undefined4>(this,8);
                *(undefined4 *)(puVar17 + -0x2c) = 0x698500;

                iVar7 = st::fn_004019B0(*(int **)(puVar17 + -0x28),*(int *)(puVar17 + -0x24),
                                           *(int *)(puVar17 + -0x20),*(int *)(puVar17 + -0x1c),
                                           *(int *)(puVar17 + -0x18));
                if ((iVar7 == 0) ||
                   ((((local_bc & 0x2000) == 0x2000 && ((local_bc & 0xf) == 0)) &&
                    ((local_bc & 0x4000) == 0)))) {
                  bVar21 = true;
                }
                if (bVar21) {
                  *(undefined4 *)(puVar17 + -4) = 0x698543;

                  local_EAX_2126 = st::fn_0072E6C0();
                  if ((int)local_EAX_2126 % 6 == 1) {
                    *(undefined4 *)(puVar17 + -4) = 0x698555;

                    local_EAX_2144 = st::fn_0072E6C0();
                    *(int *)(puVar17 + -4) = (int)local_EAX_2144 % 3 + 1;
                    *(undefined4 *)(puVar17 + -8) = 0;
                    *(undefined4 *)(puVar17 + -0xc) = 1;
                    *(undefined4 *)(puVar17 + -0x10) = 1;
                    *(undefined4 *)(puVar17 + -0x14) = 0;
                  }
                  else if ((int)local_EAX_2126 % 6 == 2) {
                    *(undefined4 *)(puVar17 + -4) = 0x6985a4;

                    local_EAX_2223 = st::fn_0072E6C0();
                    *(int *)(puVar17 + -4) = (int)local_EAX_2223 % 6 + 1;
                    *(undefined4 *)(puVar17 + -8) = 0;
                    *(undefined4 *)(puVar17 + -0xc) = 0xff;
                    *(undefined4 *)(puVar17 + -0x10) = 0x6985ba;

                    local_EAX_2245 = st::fn_0072E6C0();
                    uVar9 = local_EAX_2245 & 0x80000001;
                    if ((int)uVar9 < 0) {
                      uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
                    }
                    *(uint *)(puVar17 + -0x10) = uVar9 + 1;
                    *(undefined4 *)(puVar17 + -0x14) = 1;
                  }
                  else {
                    *(undefined4 *)(puVar17 + -4) = 0x698574;

                    local_EAX_2175 = st::fn_0072E6C0();
                    *(int *)(puVar17 + -4) = (int)local_EAX_2175 % 6 + 1;
                    *(undefined4 *)(puVar17 + -8) = 0;
                    *(undefined4 *)(puVar17 + -0xc) = 0xff;
                    *(undefined4 *)(puVar17 + -0x10) = 0x69858a;

                    local_EAX_2197 = st::fn_0072E6C0();
                    uVar9 = local_EAX_2197 & 0x80000001;
                    if ((int)uVar9 < 0) {
                      uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
                    }
                    *(uint *)(puVar17 + -0x10) = uVar9 + 2;
                    *(undefined4 *)(puVar17 + -0x14) = 0;
                  }
                  *(int *)(puVar17 + -0x18) = iVar6;
                  *(int *)(puVar17 + -0x1c) = iVar13;
                  *(undefined4 *)(puVar17 + -0x20) = 0x6985d3;
                  st::fn_0040204F(*(uint *)(puVar17 + -0x1c),*(int *)(puVar17 + -0x18),
                                     *(int *)(puVar17 + -0x14),*(uint *)(puVar17 + -0x10),
                                     *(int *)(puVar17 + -0xc),*(int *)(puVar17 + -8),
                                     *(uint *)(puVar17 + -4));
                  auto param_1_after_write = param_1 + -1; /* compiler stack-slot lifetime split */
                  local_50 = local_50 + -1;
                  if ((local_50 < 1) || (param_1_after_write < 1)) break;
                }
              }
            }
            local_94 = local_94 + 1;
            iVar13 = local_a4->field_0015;
            uVar9 = STField<uint>(iVar13,0xC);
          } while ((int)local_94 < (int)uVar9);
        }
      }
      iVar13 = local_6c;
    }
  }
  ExceptionList = local_14;
  return;
}

// 00698DB0 FUN_00698db0
#line 4 "decomp/ST.exe/functions/00698DB0/decomp.c"
uint __cdecl
st::fn_00698DB0(RecoveredRecord_00698DB0_1CB5EC78 *param_1,RecoveredRecord_00698DB0_DA155C11 *param_2)

{
  if (param_1->field_0006 < param_2->field_0006) {
    return 0xffffffff;
  }
  return (uint)(param_2->field_0006 < param_1->field_0006);
}

// 00698DE0 FUN_00698de0
#line 4 "decomp/ST.exe/functions/00698DE0/decomp.c"
/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:5: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=3, scalar_uses=0; sites=00698E98 dereference: MOV word ptr [ESI + -0xe],DX |
   00698EA0 dereference: MOV word ptr [ESI + -0xc],AX | 00698EB2 dereference: MOV word ptr [ESI +
   -0xa],CX */

int st::fn_00698DE0(undefined1 *param_1,uint param_2,int param_3,undefined4 param_4,int param_5,
                void *param_6,int param_7)

{
  short *psVar1;
  int iVar2;
  byte *puVar3;
  uint uVar4;
  uint uVar5;
  int local_EAX_152;
  int iVar5;
  short *psVar6;
  uint *puVar7;
  short *psVar8;
  int local_8;

  puVar3 = param_1;
  local_8 = 0;
  st::fn_00730810(param_1,param_2,10,st::function_address_boundary_cast<undefined *>(st::fn_00698DB0));
  iVar2 = *(int *)(param_1 + param_2 * 10 + -4);
  uVar5 = 0;
  uVar4 = param_2;
  if (0 < (int)param_2) {
    puVar7 = reinterpret_cast<uint *>((param_1 + 6));
    do {
      uVar4 = uVar5;
      if ((uint)(((100 - param_7) * iVar2) / 100) < *puVar7) break;
      uVar5 = uVar5 + 1;
      *puVar7 = iVar2 - *puVar7;
      puVar7 = (uint *)((int)puVar7 + 10);
      uVar4 = param_2;
    } while ((int)uVar5 < (int)param_2);
  }
  uint param_2_after_write = uVar4; /* compiler stack-slot lifetime split */
  if (0 < param_3) {
    auto param_7_after_write = param_3; /* compiler stack-slot lifetime split */
    psVar6 = (short *)((int)param_6 + 4);
    do {

      local_EAX_152 = st::fn_004012D5((int)puVar3,param_2_after_write,10,6,10);
      psVar8 = psVar6;
      if (-1 < local_EAX_152) {
        psVar8 = psVar6 + 5;
        psVar1 = reinterpret_cast<short *>((puVar3 + local_EAX_152 * 10));
        psVar6[-2] = *(short *)(puVar3 + local_EAX_152 * 10);
        psVar6[-1] = psVar1[1];
        local_8 = local_8 + 1;
        *psVar6 = psVar1[2];
        if (-1 < (int)param_2_after_write) {
          auto param_1_after_write = (undefined1 *)(param_2_after_write + 1); /* compiler stack-slot lifetime split */
          puVar7 = reinterpret_cast<uint *>((puVar3 + 6));
          do {

            iVar5 = st::fn_006ACF90((int)*psVar1,(int)psVar1[1],(int)*(short *)((int)puVar7 + -6),
                                 (short)puVar7[-1]);
            if (iVar5 < 7) {
              if (iVar5 < 3) {
                *puVar7 = 0;
              }
              else {
                *puVar7 = *puVar7 / st::storage_bit_cast<uint>(static_cast<uint32_t>(iVar5 * param_5));
              }
            }
            puVar7 = (uint *)((int)puVar7 + 10);
            param_1_after_write = param_1_after_write + -1;
          } while (param_1_after_write != nullptr);
        }
      }
      param_7_after_write = param_7_after_write + -1;
      psVar6 = psVar8;
    } while (param_7_after_write != 0);
  }
  return local_8;
}

// 00698F90 FUN_00698f90
#line 4 "decomp/ST.exe/functions/00698F90/decomp.c"
undefined4 st::fn_00698F90(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = param_1 * param_2;
  if (param_4 == 0) {
    if (iVar1 < 0x9c4) {
      iVar3 = 0xb4;
    }
    else if (iVar1 < 0x1621) {
      iVar3 = 0xd2;
    }
    else if (iVar1 < 0x1fa4) {
      iVar3 = 0x118;
    }
    else {
      iVar3 = ((0x2f43 < iVar1) - 1 & 0xffffffec) + 0x15e;
    }
    *param_6 = 1;
  }
  else if (param_4 == 1) {
    if (iVar1 < 0x9c4) {
      iVar3 = 0xaa;
      *param_6 = 2;
    }
    else if (iVar1 < 0x1621) {
      iVar3 = 200;
      *param_6 = 2;
    }
    else if (iVar1 < 0x1fa4) {
      iVar3 = 0x10e;
      *param_6 = 2;
    }
    else {
      iVar3 = ((0x2f43 < iVar1) - 1 & 0xffffffec) + 0x140;
      *param_6 = 2;
    }
  }
  else {
    if (param_4 != 2) {
      iVar3 = 0x122;
      *param_6 = 2;
      goto LAB_006990f1;
    }
    if (iVar1 < 0x9c4) {
      iVar3 = 0x82;
      *param_6 = 2;
    }
    else if (iVar1 < 0x1621) {
      iVar3 = 0x96;
      *param_6 = 2;
    }
    else if (iVar1 < 0x1fa4) {
      iVar3 = 200;
      *param_6 = 2;
    }
    else {
      *param_6 = 2;
      iVar3 = ((0x2f43 < iVar1) - 1 & 0xffffffd8) + 0x122;
    }
  }
  if (iVar3 < 1) {
    return 0;
  }
LAB_006990f1:
  iVar2 = (*param_6 + 2) * param_3;
  *param_5 = iVar2;
  iVar1 = (iVar1 / iVar3 - (*param_6 + 1) * param_3) - iVar2;
  if (3 < iVar1) {
    *param_5 = iVar2 + iVar1;
    return 1;
  }
  *param_5 = iVar2 + 3;
  return 1;
}

// 0069AC20 FUN_0069ac20
#line 4 "decomp/ST.exe/functions/0069AC20/decomp.c"
int st::fn_0069AC20(int param_1,int param_2,int param_3,DArrayTy *param_4)

{
  dword dVar1;
  int iVar3;
  short *psVar4;
  int iVar2;
  uint uVar5;
  int local_8;

  iVar3 = 0xff;
  local_8 = 0xff;
  if (param_4 != nullptr) {
    dVar1 = param_4->count;
    uVar5 = 0;
    if (0 < (int)dVar1) {
      while( true ) {
        if (uVar5 < param_4->count) {
          psVar4 = DArrayAt<short>(param_4, uVar5);
        }
        else {
          psVar4 = nullptr;
        }
        iVar2 = st::fn_006ACF90((int)*psVar4,(int)psVar4[1],param_1,param_2);
        if (iVar2 < param_3) break;
        if (iVar2 < local_8) {
          local_8 = iVar2;
        }
        uVar5 = uVar5 + 1;
        if ((int)dVar1 <= (int)uVar5) {
          return local_8;
        }
      }
      iVar3 = 0;
    }
  }
  return iVar3;
}

// 0069ACC0 FUN_0069acc0
#line 4 "decomp/ST.exe/functions/0069ACC0/decomp.c"
undefined4 __thiscall st::fn_0069ACC0(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong local_c;
  iVar4 = param_2 / 2;
  iVar3 = param_1 / 2;

  iVar1 = st::fn_0040414C(STField<int *>(this,8),iVar3,iVar4,param_3,
                             reinterpret_cast<RecoveredRecord_006A1370_30F34641 *>(&local_c));
  if ((((STPiece<4,4>(local_c) & 0x2000) != 0) || ((short)STPiece<4,4>(local_c) == 0x1100)) &&
     ((STPiece<4,4>(local_c) & 0x4000) == 0)) {

    iVar2 = st::fn_004019B0(STField<int *>(this,8),iVar3,iVar4,param_3,0xff);
    if (iVar2 == 0) {
      return 1;
    }
    if (((short)iVar1 == param_3) &&

       (iVar3 = st::fn_004019B0(STField<int *>(this,8),iVar3,iVar4,param_3 + 1,0xff),
       iVar3 == 0)) {
      return 1;
    }
  }
  return 0xffffffff;
}

// 0069B530 FUN_0069b530
#line 4 "decomp/ST.exe/functions/0069B530/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int __thiscall
st::fn_0069B530(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
            int *param_6,int *param_7)

{
  alignas(4) byte st_stack_frame[200];

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *local_98;
  int *local_94;
  int local_90;
  int local_80;
  int local_34;
  int local_2c;
  int local_24;

  local_2c = 0;
  local_80 = 0;
  iVar3 = (param_4 - param_2) + 1;
  iVar9 = (param_5 - param_3) + 1;
  iVar6 = iVar9 * iVar3;
  iVar2 = STField<int>(this,0x5847) * iVar6 * -4;
  local_34 = 0;
  if (0 < STField<int>(this,0x5847)) {
    local_90 = 0;
    do {
      iVar10 = STField<int>(this,0x582f);
      if (param_5 < iVar9) {
        local_94 = reinterpret_cast<int *>(((st_stack_frame + 32) + (iVar6 * param_5 + local_90) * 4 + iVar2));
        iVar8 = param_5;
        do {
          if (0 < iVar3) {
            iVar4 = ((iVar8 + param_3) * STField<int>(this,0x5833) + local_34 * iVar10 + param_2)
                    * 2;
            piVar5 = local_94;
            iVar7 = iVar3;
            do {
              *piVar5 = (int)*(short *)(iVar4 + STField<int>(this,0x584f));
              iVar4 = iVar4 + 2;
              piVar5 = piVar5 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          iVar8 = iVar8 + 1;
          local_94 = local_94 + iVar6;
        } while (iVar8 < iVar9);
      }
      local_34 = local_34 + 1;
      local_90 = local_90 + iVar6;
    } while (local_34 < STField<int>(this,0x5847));
  }
  if (local_34 < STField<int>(this,0x5847)) {
    do {
      iVar9 = local_34 * iVar6;
      local_24 = iVar9;
      for (iVar10 = param_3; iVar10 <= param_5; iVar10 = iVar10 + 1) {
        if (param_3 != iVar10) {
          iVar9 = iVar9 + iVar3;
          local_24 = iVar9;
        }
        if (param_2 <= param_4) {
          iVar7 = 0;
          local_98 = reinterpret_cast<int *>(((st_stack_frame + 32) + iVar9 * 4 + iVar2));
          iVar8 = param_2;
          do {
            iVar4 = STField<int>(this,0x5833);
            if ((((iVar8 < iVar4) && (iVar8 + 1 < iVar4)) && (iVar10 < iVar4)) &&
               (iVar10 + 1 < iVar4)) {
              iVar1 = iVar7 + 1 + iVar9;
              iVar4 = iVar7 + iVar3 + iVar9;
              iVar9 = iVar7 + 1 + iVar3 + iVar9;
              if (*local_98 == 1) {
                if (((*(int *)((st_stack_frame + 32) + iVar1 * 4 + iVar2) == 1) &&
                    (*(int *)((st_stack_frame + 32) + iVar4 * 4 + iVar2) == 1)) &&
                   (*(int *)((st_stack_frame + 32) + iVar9 * 4 + iVar2) == 1)) {
                  *local_98 = 4;
                  *(undefined4 *)((st_stack_frame + 32) + iVar1 * 4 + iVar2) = 4;
                  *(undefined4 *)((st_stack_frame + 32) + iVar4 * 4 + iVar2) = 4;
                  *(undefined4 *)((st_stack_frame + 32) + iVar9 * 4 + iVar2) = 4;
                  local_80 = local_80 + 1;
                }
                else {
                  local_2c = local_2c + 1;
                }
              }
            }
            iVar8 = iVar8 + 1;
            local_98 = local_98 + -1;
            iVar7 = iVar7 + -1;
            iVar9 = local_24;
          } while (iVar8 <= param_4);
        }
      }
      if (local_34 == 0) {
        *param_6 = local_2c;
        *param_7 = local_80;
      }
      else {
        param_6[local_34] = local_2c - param_6[local_34 + -1];
        param_7[local_34] = local_80 - param_7[local_34 + -1];
      }
      local_34 = local_34 + 1;
    } while (local_34 < STField<int>(this,0x5847));
  }
  return local_80 + local_2c;
}

// 0069B8D0 FUN_0069b8d0
#line 4 "decomp/ST.exe/functions/0069B8D0/decomp.c"
uint __cdecl
st::fn_0069B8D0(RecoveredRecord_0069B8D0_BA32C79B *param_1,RecoveredRecord_0069B8D0_D2DE3938 *param_2)

{
  if (param_2->field_002C < param_1->field_002C) {
    return 0xffffffff;
  }
  return (uint)(param_1->field_002C < param_2->field_002C);
}

// 0069B910 FUN_0069b910
#line 4 "decomp/ST.exe/functions/0069B910/decomp.c"
int st::fn_0069B910(int param_1,int param_2,int *param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_8;

  local_8 = 0;
  local_28 = 0;
  iVar10 = 0;
  if (0 < param_4) {
    iVar11 = param_2 * 3;
    while (iVar10 = local_8, 0 < iVar11) {
      uVar5 = st::fn_0072E6C0();
      local_18 = (int)uVar5 % param_2;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (param_6 < *(int *)(local_18 * 0x40 + 0x2c + param_1)) {
        iVar10 = local_18 * 0x40;
        bVar4 = true;
        iVar1 = *(int *)(iVar10 + 0x30 + param_1);
        iVar2 = *(int *)(iVar10 + 0x38 + param_1);
        iVar10 = iVar10 + param_1;
        iVar3 = STField<int>(iVar10,0x3C);
        iVar9 = STField<int>(iVar10,0x34);
        if ((local_8 != 0) && (local_14 = 0, 0 < local_8)) {
          local_1c = param_3;
          do {
            if (*local_1c == local_18) {
              bVar4 = false;
              break;
            }
            iVar8 = *local_1c * 0x40 + param_1;
            iVar6 = st::fn_006ACF90((iVar2 - iVar1) / 2 + iVar1,(iVar3 - iVar9) / 2 + iVar9,
                                 (STField<int>(iVar8,0x38) - STField<int>(iVar8,0x30)) / 2 +
                                 STField<int>(iVar8,0x30),
                                 (STField<int>(iVar8,0x3C) - STField<int>(iVar8,0x34)) / 2 +
                                 STField<int>(iVar8,0x34));
            if (iVar6 < param_5) {
              bVar4 = false;
              break;
            }
            local_14 = local_14 + 1;
            local_1c = local_1c + 1;
          } while (local_14 < local_8);
        }
        if (!bVar4) {
          if (iVar11 != 1 && -1 < iVar11 + -1) {
            return local_8;
          }
          local_24 = 0;
          local_20 = local_18;
          if (param_2 < 1) {
            return local_8;
          }
          do {
            local_20 = local_20 + 1;
            if (param_6 <= STField<int>(iVar10,0x2C)) {
              iVar11 = STField<int>(iVar10,0x38);
              iVar1 = STField<int>(iVar10,0x30);
              bVar4 = true;
              iVar2 = STField<int>(iVar10,0x3C);
              iVar3 = STField<int>(iVar10,0x34);
              local_14 = 0;
              if (local_8 < 1) {
LAB_0069bb27:
                local_18 = local_20;
                break;
              }
              local_1c = param_3;
              while (*local_1c != local_18) {
                iVar9 = param_1 + *local_1c * 0x40;
                iVar7 = st::fn_006ACF90(iVar11 / 2 + iVar1,iVar2 / 2 + iVar3,
                                     STField<int>(iVar9,0x38) / 2 + STField<int>(iVar9,0x30),
                                     STField<int>(iVar9,0x3C) / 2 + STField<int>(iVar9,0x34));
                if (iVar7 < param_5) break;
                local_14 = local_14 + 1;
                local_1c = local_1c + 1;
                if (local_8 <= local_14) goto LAB_0069bb27;
              }
              bVar4 = false;
            }
            local_24 = local_24 + 1;
          } while (local_24 < param_2);
          if (!bVar4) {
            return local_8;
          }
        }
        param_3[local_8] = local_18;
        local_8 = local_8 + 1;
        local_28 = local_28 + 1;
        iVar11 = param_2 * 3;
        if (param_4 <= local_28) {
          return local_8;
        }
      }
      else {
        iVar11 = iVar11 + -1;
      }
    }
  }
  return iVar10;
}

// 0069BC10 FUN_0069bc10
#line 4 "decomp/ST.exe/functions/0069BC10/decomp.c"
int __thiscall
st::fn_0069BC10(void *this,int param_1,int *param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  bool bVar1;
  int iVar2;
  int iVar4;
  int iVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;

  local_10 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_3 * 0x40 + -0x14 + param_1);
  local_c = 0xffff;
  iVar5 = 0xffff;
  if (0 < param_3) {
    local_1c = 1;
    do {
      iVar5 = param_1 + *param_2 * 0x40;
      iVar2 = iVar2 + STField<int>(iVar5,0x2C);
      iVar7 = (STField<int>(iVar5,0x38) - STField<int>(iVar5,0x30)) / 2 + STField<int>(iVar5,0x30);
      iVar5 = (STField<int>(iVar5,0x3C) - STField<int>(iVar5,0x34)) / 2 + STField<int>(iVar5,0x34);
      if (local_1c < param_3) {
        local_14 = param_3 - local_1c;
        local_8 = param_2;
        do {
          local_8 = local_8 + 1;
          iVar6 = *local_8 * 0x40 + param_1;
          iVar4 = st::fn_006ACF90(iVar7,iVar5,
                               (STField<int>(iVar6,0x38) - STField<int>(iVar6,0x30)) / 2 +
                               STField<int>(iVar6,0x30),
                               (STField<int>(iVar6,0x3C) - STField<int>(iVar6,0x34)) / 2 +
                               STField<int>(iVar6,0x34));
          if (iVar4 < local_c) {
            local_c = iVar4;
          }
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      iVar3 = st::fn_006ACF90(iVar7,iVar5,*STField<int *>(this,8),(STField<int *>(this,8))[1]);
      local_10 = local_10 + iVar3;
      param_2 = param_2 + 1;
      bVar1 = local_1c < param_3;
      iVar5 = local_c;
      local_1c = local_1c + 1;
    } while (bVar1);
  }
  iVar5 = (iVar5 * param_3 + local_10) * param_4;
  *param_5 = iVar5;
  *param_6 = iVar2;
  return iVar2 + iVar5;
}

// 0069C360 FUN_0069c360
#line 4 "decomp/ST.exe/functions/0069C360/decomp.c"
undefined4 __thiscall st::fn_0069C360(void *this,int param_1,int *param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int local_58 [9];
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  void *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int *local_8;

  piVar2 = param_2;
  uVar3 = 0;
  if ((param_1 != 0) && (STField<int>(this,0x56ff) != 0)) {
    if (0 < param_3) {
      local_8 = nullptr;
      local_1c = param_3;
      iVar5 = (int)param_2 * 0xe;
      local_24 = (int)param_2 * 400;
      local_c = (int *)(param_1 + 6);
      do {
        if (0 < (int)piVar2) {
          local_14 = 0;
          auto param_2_after_write = local_c; /* compiler stack-slot lifetime split */
          local_10 = piVar2;
          do {
            local_18 = nullptr;
            bVar1 = *(byte *)((int)local_8 + local_14 + STField<int>(this,0x56ff));
            local_2c = (uint)bVar1;
            pbVar4 = (byte *)((int)local_8 + local_14 + STField<int>(this,0x56ff));
            do {
              iVar6 = 0;
              pbVar8 = pbVar4;
              do {
                if (bVar1 != *pbVar8) {
                  param_2_after_write[-1] = 0xff;
                  *(undefined1 *)((int)param_2_after_write + -6) = 1;
                  goto LAB_0069c428;
                }
                iVar6 = iVar6 + 1;
                pbVar8 = pbVar8 + 1;
              } while (iVar6 < 0x14);
              pbVar4 = pbVar4 + (int)piVar2 * 0x14;
              local_18 = (int *)((int)local_18 + 1);
            } while ((int)local_18 < 0x14);
            param_2_after_write[-1] = local_2c;
            *(undefined1 *)((int)param_2_after_write + -6) = 0;
LAB_0069c428:
            *param_2_after_write = -1;
            param_2_after_write[1] = -1;
            param_2_after_write = (int *)((int)param_2_after_write + 0xe);
            local_14 = local_14 + 0x14;
            local_10 = (int *)((int)local_10 + -1);
          } while (local_10 != nullptr);
        }
        local_8 = (int *)((int)local_8 + local_24);
        local_c = (int *)((int)local_c + iVar5);
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      local_1c = 0;
    }
    local_10 = nullptr;
    if (0 < param_3) {
      local_14 = 0;
      iVar5 = (int)piVar2 * 0xe;
      local_18 = (int *)(param_1 + 2);
      local_2c = 0;
      local_34 = iVar5;
      local_20 = this;
      do {
        int * param_2_after_write_2 = nullptr; /* compiler stack-slot lifetime split */
        if (0 < (int)piVar2) {
          local_8 = local_18;
          uVar7 = local_2c;
          do {
            local_30 = *local_8;
            local_28 = uVar7;
            iVar5 = st::fn_00405C81(local_20,local_14 + (int)param_2_after_write_2,(int)piVar2,local_58,
                                       nullptr);
            iVar6 = 0;
            local_24 = 0;
            if (0 < iVar5) {
              local_c = local_58;
              local_1c = iVar5;
              do {
                iVar5 = *local_c;
                if (((*(int *)(param_1 + 2 + iVar5 * 0xe) == local_30) &&
                    (iVar6 = iVar6 + 1, -1 < iVar5 % (int)piVar2 - (int)param_2_after_write_2)) &&
                   (-1 < iVar5 / (int)piVar2 - (int)local_10)) {
                  local_24 = 1;
                }
                local_c = local_c + 1;
                local_1c = local_1c + -1;
              } while (local_1c != 0);
              local_1c = 0;
              uVar7 = local_28;
            }
            *(undefined1 *)(uVar7 + 1 + param_1) = 0;
            if (iVar6 == 8) {
              *(undefined1 *)(uVar7 + 1 + param_1) = 4;
            }
            else if (local_24 != 0) {
              *(undefined1 *)(uVar7 + 1 + param_1) = 8;
            }
            param_2_after_write_2 = (int *)((int)param_2_after_write_2 + 1);
            uVar7 = uVar7 + 0xe;
            local_8 = (int *)((int)local_8 + 0xe);
            iVar5 = local_34;
          } while ((int)param_2_after_write_2 < (int)piVar2);
        }
        local_14 = local_14 + (int)piVar2;
        local_10 = (int *)((int)local_10 + 1);
        local_2c = local_2c + iVar5;
        local_18 = (int *)((int)local_18 + iVar5);
      } while ((int)local_10 < param_3);
    }
    uVar3 = 1;
  }
  return uVar3;
}

// 0069C670 FUN_0069c670
#line 4 "decomp/ST.exe/functions/0069C670/decomp.c"
void st::fn_0069C670(DArrayTy *param_1,int param_2,uint param_3)

{
  dword dVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  void *pvVar6;

  st::fn_006B0C70(param_1,param_3);
  dVar1 = param_1->count;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  for (; (int)param_3 < (int)dVar1; param_3 = param_3 + 1) {
    if ((param_3 < param_1->count) &&
       (pvVar6 = DArrayAt<void>(param_1, param_3),
       pvVar6 != nullptr)) {
      iVar2 = *(int *)(STField<int>(pvVar6,0xc) + 0xc);
      uVar5 = 0;
      if (0 < iVar2) {
        do {
          iVar3 = STField<int>(pvVar6,0xc);
          if (uVar5 < STField<uint>(iVar3,0xC)) {
            piVar4 = (int *)(STField<int>(iVar3,0x8) * uVar5 + STField<int>(iVar3,0x1C));
          }
          else {
            piVar4 = nullptr;
          }
          uVar5 = uVar5 + 1;
          *(uint *)(param_2 + 10 + *piVar4 * 0xe) = param_3;
        } while ((int)uVar5 < iVar2);
      }
    }
  }
  return;
}

// 0069C710 FUN_0069c710
#line 1 "decomp/ST.exe/functions/0069C710/decomp.c"

/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:2: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=5, scalar_uses=0; sites=0069C71E dereference: MOV ECX,dword ptr [ESI + 0xc]
   | 0069C749 dereference: MOV EDX,dword ptr [ESI + 0x4] | 0069C74D dereference: MOV dword ptr [ESI
   + 0x4],EDX | 0069C757 dereference: MOV ECX,dword ptr [ESI + 0x8] | 0069C75B dereference: MOV
   dword ptr [ESI + 0x8],ECX */

uint st::fn_0069C710(int param_1,int param_2,RecoveredRecord_0069C710_92A26D6D *param_3)

{
  byte *pbVar1;
  byte bVar2;
  RecoveredRecord_0069C710_92A26D6D *pRVar3;
  uint uVar4;

  pRVar3 = param_3;
  uVar4 = 0xffffffff;
  if (param_3 != nullptr) {

    uVar4 = st::fn_006AE1C0(param_3->field_000C,&param_2);
    if (-1 < (int)uVar4) {
      pbVar1 = (byte *)(param_1 + 1 + param_2 * 0xe);
      bVar2 = *pbVar1;
      if ((bVar2 & 4) == 0) {
        if ((bVar2 & 8) != 0) {
          *(int *)&pRVar3->field_0x8 = *(int *)&pRVar3->field_0x8 + 1;
        }
      }
      else {
        *(int *)&pRVar3->field_0x4 = *(int *)&pRVar3->field_0x4 + 1;
        if ((*pbVar1 & 8) != 0) {
          *(int *)&pRVar3->field_0x8 = *(int *)&pRVar3->field_0x8 + 1;
          return uVar4;
        }
      }
    }
  }
  return uVar4;
}

// 0069C790 FUN_0069c790
#line 4 "decomp/ST.exe/functions/0069C790/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0069C8B0 -> 0069C790 @ 0069C9FA */

int st::fn_0069C790(DArrayTy *param_1,int param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int local_c;
  RecoveredRecord_0069C710_92A26D6D *local_8;

  local_c = 0;
  if (param_3 < param_1->count) {
    local_8 = DArrayAt<RecoveredRecord_0069C710_92A26D6D>(param_1, param_3);
  }
  else {
    local_8 = nullptr;
  }
  if (param_4 < param_1->count) {
    pvVar5 = DArrayAt<void>(param_1, param_4);
  }
  else {
    pvVar5 = nullptr;
  }
  iVar3 = 0;
  if ((local_8 != nullptr) && (pvVar5 != nullptr)) {
    iVar3 = STField<int>(pvVar5,0xc);
    uVar4 = 0;
    uVar2 = STField<uint>(iVar3,0xC);
    if (0 < (int)uVar2) {
      do {
        if (uVar4 < uVar2) {
          piVar1 = (int *)(STField<int>(iVar3,0x8) * uVar4 + STField<int>(iVar3,0x1C));
        }
        else {
          piVar1 = nullptr;
        }
        iVar3 = *piVar1;

        uVar2 = st::fn_00402AE0(param_2,iVar3,local_8);
        if (-1 < (int)uVar2) {
          *(uint *)(param_2 + 10 + iVar3 * 0xe) = param_3;
          local_c = local_c + 1;
        }
        iVar3 = STField<int>(pvVar5,0xc);
        uVar4 = uVar4 + 1;
        uVar2 = STField<uint>(iVar3,0xC);
      } while ((int)uVar4 < (int)uVar2);
    }
    st::fn_006AE110(STField<DArrayTy *>(pvVar5,0xc));
    st::fn_00403337(param_1,param_2,param_4);
    iVar3 = local_c;
  }
  return iVar3;
}

// 0069C8B0 FUN_0069c8b0
#line 4 "decomp/ST.exe/functions/0069C8B0/decomp.c"
uint * st::fn_0069C8B0(int param_1,int param_2,int param_3)

{
  int iVar1;
  DArrayTy *array;
  RecoveredRecord_0069C710_92A26D6D *pRVar2;
  uint uVar3;
  int uVar6;
  uint uVar5;
  int iVar3;
  uint uVar4;
  uint uVar7;
  uint uVar8;
  int local_68 [9];
  int local_44 [3];
  DArrayTy *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int *local_c;
  void *local_8;

  iVar1 = param_1;
  array = st::fn_006AE290(nullptr,10,0x10,10);
  if (((array != nullptr) && (param_1 != 0)) && (0 < param_3)) {
    local_18 = 0;
    local_1c = 0;
    local_20 = (int *)(param_1 + 2);
    local_2c = param_3;
    iVar3 = param_2 * 0xe;
    local_34 = iVar3;
    do {
      if (0 < param_2) {
        int param_1_after_write = local_18; /* compiler stack-slot lifetime split */
        int param_3_after_write = local_1c; /* compiler stack-slot lifetime split */
        local_14 = local_20;
        local_28 = param_2;
        do {
          uVar4 = 0xffffffff;
          local_24 = *local_14;

          local_30 = st::fn_00405C81(local_8,param_1_after_write,param_2,local_68,nullptr);
          local_10 = 0;
          if (local_30 < 1) {
LAB_0069ca03:
            local_44[0] = 0;
            local_44[1] = 0;
            local_44[2] = 0;
            local_38 = nullptr;
            local_38 = st::fn_006AE290(nullptr,10,4,10);
            local_44[0] = local_24;

            uVar6 = st::fn_006AE1C0(array,local_44);
            if ((uint)uVar6 < array->count) {
              pRVar2 = DArrayAt<RecoveredRecord_0069C710_92A26D6D>(array, uVar6);
            }
            else {
              pRVar2 = nullptr;
            }

            uVar5 = st::fn_00402AE0(iVar1,param_1_after_write,pRVar2);
            if (-1 < (int)uVar5) {
              *(int *)(param_3_after_write + 10 + iVar1) = uVar6;
            }
          }
          else {
            local_c = local_68;
            do {
              uVar8 = *(uint *)(iVar1 + 10 + *local_c * 0xe);
              if ((int)uVar8 < 0) break;
              if (*(int *)(iVar1 + *local_c * 0xe + 2) == local_24) {
                if (uVar4 == 0xffffffff) {
                  uVar4 = uVar8;
                  if (((uVar8 < array->count) &&
                      (pRVar2 = DArrayAt<RecoveredRecord_0069C710_92A26D6D>(array, uVar8),
                      pRVar2 != nullptr)) &&

                     (uVar3 = st::fn_00402AE0(iVar1,param_1_after_write,pRVar2), -1 < (int)uVar3)) {
                    *(uint *)(param_3_after_write + 10 + iVar1) = uVar8;
                  }
                }
                else if (uVar4 != uVar8) {
                  uVar8 = *(uint *)(iVar1 + 10 + local_68[local_10] * 0xe);
                  uVar7 = uVar4;
                  if ((int)uVar8 < (int)uVar4) {
                    uVar7 = uVar8;
                    uVar8 = uVar4;
                  }

                  st::fn_00405BEB(array,iVar1,uVar7,uVar8);
                  break;
                }
              }
              local_10 = local_10 + 1;
              local_c = local_c + 1;
            } while (local_10 < local_30);
            if ((int)uVar4 < 0) goto LAB_0069ca03;
          }
          param_3_after_write = param_3_after_write + 0xe;
          local_14 = (int *)((int)local_14 + 0xe);
          param_1_after_write = param_1_after_write + 1;
          local_28 = local_28 + -1;
          iVar3 = local_34;
        } while (local_28 != 0);
      }
      local_18 = local_18 + param_2;
      local_1c = local_1c + iVar3;
      local_20 = (int *)((int)local_20 + iVar3);
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  return &array->flags;
}

// 0069E4D0 FUN_0069e4d0
#line 4 "decomp/ST.exe/functions/0069E4D0/decomp.c"
/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:1: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=8,
   pointer_dereferences=12, scalar_uses=0; sites=0069E5DA dereference: CMP dword ptr [EAX],0x0 |
   0069E61C dereference: CMP dword ptr [ECX + EAX*0x2 + 0x2],0x0 | 0069E815 dereference: MOV
   ESI,dword ptr [EAX + 0x6] | 0069E81C dereference: MOV ESI,dword ptr [EAX + 0x2] | 0069E858
   dereference: MOV ESI,dword ptr [ECX + 0x2] | 0069E85F dereference: MOV ESI,dword ptr [ECX + 0x6]
   | 0069E8A1 dereference: MOV dword ptr [EAX + EDX*0x2 + 0x6],0x3ef | 0069EA4A dereference: MOV
   ECX,dword ptr [EAX + 0x6] | 0069EA51 dereference: MOV ECX,dword ptr [EAX + 0x2] | 0069EA8D
   dereference: MOV EDI,dword ptr [ECX + 0x2] | 0069EA94 dereference: MOV EDI,dword ptr [ECX + 0x6]
   | 0069EAD6 dereference: MOV dword ptr [EAX + EDX*0x2 + 0x6],0x3ef */

void __thiscall
st::fn_0069E4D0(void *this,RecoveredRecordView_0069E4D0_513816DF *param_1,int param_2,int param_3,
            int param_4,int param_5)

{
  int scalar_local_24;

  int iVar1;
  uint local_EAX_45;
  uint uVar5_mg0;
  uint local_EAX_74;
  uint uVar2;
  uint local_EAX_356;
  uint uVar5;
  uint local_EAX_397;
  uint local_EAX_509;
  int iVar6;
  uint local_EAX_611;
  uint local_EAX_628;
  uint uVar5_mg2;
  uint uVar4;
  uint local_EAX_985;
  uint local_EAX_1105;
  uint local_EAX_1189;
  uint uVar3;
  uint uVar5_mg4;
  uint local_EAX_1261;
  uint local_EAX_1550;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined4 auStack_d0 [3];
  short asStack_c4 [18];
  int local_a0 [9];
  undefined2 auStack_7c [6];
  int local_70 [9];
  short asStack_4c [8];
  int local_3c [5];
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  void *local_18;
  int *local_14;
  int local_10;
  int local_c;
  int *local_8;

  piVar11 = local_70;
  local_18 = this;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_3c[2] = 0;
  local_3c[3] = 0;
  local_c = 0;
  local_10 = 0;
  do {

    local_EAX_45 = st::fn_0072E6C0();
    iVar7 = (int)local_EAX_45 % 9 + -8 + local_c;

    uVar5_mg0 = st::fn_006AFF50(iVar7);

    local_EAX_74 = st::fn_006AFF5B(iVar7);

    uVar2 = st::fn_0072E6C0();
    iVar7 = (int)uVar2 % 0x33 + 0xb4;
    iVar6 = st::storage_bit_cast<int>(static_cast<uint32_t>(iVar7 * uVar5_mg0)) / 10000;
    iVar10 = st::storage_bit_cast<int>(static_cast<uint32_t>(iVar7 * local_EAX_74)) / 10000;
    iVar7 = iVar6 + param_2;
    iVar8 = iVar7 / 100;
    local_28 = param_3 + iVar10;
    iVar1 = local_28 / 100;
    if ((((0 < iVar8) && (iVar8 < param_4 + -1)) && (0 < iVar1)) && (iVar1 < param_5 + -1)) {
      iVar8 = iVar1 * param_4 + iVar8;
      local_14 = &param_1[iVar8].field_0006;
      if (*local_14 < 0) {

        local_1c = st::fn_00405C81(local_18,iVar8,param_4,local_a0,nullptr);
        iVar8 = 0;
        if (0 < local_1c) {
          local_8 = local_a0;
          do {
            if (param_1[*local_8].field_0002 != 0) goto LAB_0069e69c;
            iVar8 = iVar8 + 1;
            local_8 = local_8 + 1;
          } while (iVar8 < local_1c);
        }

        local_EAX_356 = st::fn_0072E6C0();
        piVar11 = local_14;
        uVar5 = local_EAX_356 & 0x80000003;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
        }
        if (0 < (int)uVar5) {
          *(undefined4 *)((int)local_70 + local_10) = 1;
          *piVar11 = 0x3ef;

          local_EAX_397 = st::fn_0072E6C0();
          st::fn_00402856(local_18,iVar7,local_28,0,0x3ef,local_EAX_397 % (DAT_007d934c - 2U));
          *(short *)((int)asStack_c4 + local_10) = (short)iVar6;
          *(short *)((int)asStack_c4 + local_10 + 2) = (short)iVar10;
        }
      }
    }
LAB_0069e69c:
    local_10 = local_10 + 4;
    local_c = local_c + 0x28;
  } while (local_10 < 0x24);
  local_8 = (int *)0xa;
  local_c = 0;
  do {
    if ((int)local_8 < 1) break;

    local_EAX_509 = st::fn_0072E6C0();
    iVar7 = (int)local_EAX_509 % 9;
    if (local_70[iVar7] == 0) {
      iVar6 = 0;
      do {
        iVar7 = iVar7 + 1;
        if (8 < iVar7) {
          iVar7 = 0;
        }
      } while ((local_70[iVar7] < 1) && (iVar6 = iVar6 + 1, iVar6 < 9));
    }
    local_24 = local_70 + iVar7;
    if (0 < local_70[iVar7]) {
      local_28 = (int)asStack_c4[iVar7 * 2];
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_3c[4] = (int)*(short *)((int)local_a0 + iVar7 * 4 + -0x22);
      local_10 = 0;
      local_20 = iVar7 * 0x28;
      do {
        iVar7 = local_20;

        local_EAX_611 = st::fn_0072E6C0();
        iVar7 = (int)local_EAX_611 % 0x79 + -0x3c + iVar7;

        local_EAX_628 = st::fn_0072E6C0();
        iVar10 = (int)local_EAX_628 % 0x29 + 0xaa;

        uVar5_mg2 = st::fn_006AFF50(iVar7);
        iVar6 = st::storage_bit_cast<int>(static_cast<uint32_t>(iVar10 * uVar5_mg2)) / 10000 + local_28;

        uVar4 = st::fn_006AFF5B(iVar7);
        iVar10 = st::storage_bit_cast<int>(static_cast<uint32_t>(uVar4 * iVar10)) / 10000 + local_3c[4];
        local_14 = (int *)((iVar6 + param_2) / 100);
        iVar7 = (iVar10 + param_3) / 100;
        if ((((0 < iVar6 + param_2) && (0 < iVar10 + param_3)) &&
            ((-1 < (int)local_14 &&
             ((((int)local_14 < param_4 && (-1 < iVar7)) && (iVar7 < param_5)))))) &&
           ((local_14 = (int *)(iVar7 * param_4 + (int)local_14),
            param_1[(int)local_14].field_0006 < 0 && (param_1[(int)local_14].field_0002 == 0)))) {

          local_1c = st::fn_00405C81(local_18,(int)local_14,param_4,local_a0,nullptr);
          iVar7 = local_c;
          piVar11 = local_14;
          iVar8 = 0;
          if (local_1c < 1) {
LAB_0069e887:
            *(undefined4 *)((int)local_3c + local_c) = 1;
            param_1[(int)piVar11].field_0006 = 0x3ef;

            local_EAX_985 = st::fn_0072E6C0();
            st::fn_00402856(local_18,iVar6 + param_2,iVar10 + param_3,0,0x3ef,
                               local_EAX_985 % (DAT_007d934c - 4U) + 4);
            piVar11 = local_24;
            *(short *)((int)asStack_4c + iVar7) = (short)iVar6;
            *(short *)((int)asStack_4c + iVar7 + 2) = (short)iVar10;
            local_c = iVar7 + 4;
            *piVar11 = 0;
            break;
          }
          piVar9 = local_a0;
          while ((param_1[*piVar9].field_0002 == 0 || (param_1[*piVar9].field_0006 < 1))) {
            iVar8 = iVar8 + 1;
            piVar9 = piVar9 + 1;
            if (local_1c <= iVar8) goto LAB_0069e887;
          }
        }
        local_10 = local_10 + 1;
      } while (local_10 < 5);
    }
    local_8 = (int *)((int)local_8 + -1);
  } while (local_c < 0x10);
  local_8 = (int *)0xa;
  local_c = 0;
  do {
    if ((int)local_8 < 1) {
      return;
    }

    local_EAX_1105 = st::fn_0072E6C0();
    uVar5 = local_EAX_1105 & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    if (local_70[uVar5] == 0) {
      iVar7 = 0;
      do {
        uVar5 = uVar5 + 1;
        if (3 < (int)uVar5) {
          uVar5 = 0;
        }
      } while ((local_70[uVar5] < 1) && (iVar7 = iVar7 + 1, iVar7 < 4));
    }
    if (0 < local_3c[uVar5]) {
      scalar_local_24 = (int)asStack_4c[uVar5 * 2]; /* split integer lifetime from pointer-typed SSA storage */
      local_20 = (int)asStack_4c[uVar5 * 2 + 1];
      local_10 = 0;
      do {

        local_EAX_1189 = st::fn_0072E6C0();

        uVar3 = st::fn_0072E6C0();
        iVar7 = (int)uVar3 % 0x1f + 0x8c;

        uVar5_mg4 = st::fn_006AFF50((int)local_EAX_1189 % 0x169);
        iVar10 = st::storage_bit_cast<int>(static_cast<uint32_t>(iVar7 * uVar5_mg4)) / 10000 + scalar_local_24;

        local_EAX_1261 = st::fn_006AFF5B((int)local_EAX_1189 % 0x169);
        iVar8 = st::storage_bit_cast<int>(static_cast<uint32_t>(local_EAX_1261 * iVar7)) / 10000 + local_20;
        iVar7 = (iVar10 + param_2) / 100;
        iVar6 = (param_3 + iVar8) / 100;
        if ((((0 < iVar7) && (iVar7 < param_4 + -1)) && (0 < iVar6)) &&
           (((iVar6 < param_5 + -1 &&
             (local_14 = (int *)(iVar6 * param_4 + iVar7), param_1[(int)local_14].field_0006 < 0))
            && (param_1[(int)local_14].field_0002 == 0)))) {

          local_1c = st::fn_00405C81(local_18,(int)local_14,param_4,local_a0,nullptr);
          iVar7 = local_c;
          piVar11 = local_14;
          iVar6 = 0;
          if (local_1c < 1) {
LAB_0069eab9:
            *(undefined4 *)((int)auStack_d0 + local_c) = 1;
            param_1[(int)piVar11].field_0006 = 0x3ef;

            local_EAX_1550 = st::fn_0072E6C0();
            st::fn_00402856(local_18,iVar10 + param_2,iVar8 + param_3,0,0x3ef,
                               local_EAX_1550 % (DAT_007d934c - 5U) + 5);
            *(short *)((int)auStack_7c + iVar7) = (short)iVar10;
            *(short *)((int)auStack_7c + iVar7 + 2) = (short)iVar8;
            local_c = iVar7 + 4;
            break;
          }
          piVar9 = local_a0;
          while ((param_1[*piVar9].field_0002 == 0 || (param_1[*piVar9].field_0006 < 1))) {
            iVar6 = iVar6 + 1;
            piVar9 = piVar9 + 1;
            if (local_1c <= iVar6) goto LAB_0069eab9;
          }
        }
        local_10 = local_10 + 1;
      } while (local_10 < 5);
    }
    local_8 = (int *)((int)local_8 + -1);
    if (0xb < local_c) {
      return;
    }
  } while( true );
}

// 0069ECE0 FUN_0069ece0
#line 4 "decomp/ST.exe/functions/0069ECE0/decomp.c"
void __thiscall st::fn_0069ECE0(void *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_19c [100];
  int local_c;
  int local_8;

  local_8 = 0;
  local_19c[0] = 0x3f2;
  local_19c[1] = 0x3ed;
  local_19c[2] = 0x3ec;
  local_19c[3] = 0x3f1;
  local_19c[4] = 0x3f2;
  local_19c[5] = 0x3ed;
  local_19c[6] = 0x3eb;
  local_19c[7] = 0x3f2;
  local_19c[8] = 0x3e9;
  local_19c[9] = 0x3ed;
  local_19c[10] = 0x3ef;
  local_19c[0xb] = 0x3ed;
  local_19c[0xc] = 0x3ee;
  local_19c[0xd] = 0x3f1;
  local_19c[0xe] = 0x3f2;
  local_19c[0xf] = 0x3ed;
  local_19c[0x10] = 0x3eb;
  local_19c[0x11] = 0x3f2;
  local_19c[0x12] = 0x3ee;
  local_19c[0x13] = 0x3ed;
  local_19c[0x14] = 0x3ed;
  local_19c[0x15] = 0x3ed;
  local_19c[0x16] = 0x3ed;
  local_19c[0x17] = 0x3f1;
  local_19c[0x18] = 0x3ed;
  local_19c[0x19] = 0x3ed;
  local_19c[0x1a] = 0x3ed;
  local_19c[0x1b] = 0x3ed;
  local_19c[0x1c] = 0x3ed;
  local_19c[0x1d] = 0x3ed;
  local_19c[0x1e] = 0x3ed;
  local_19c[0x1f] = 0x3ed;
  local_19c[0x20] = 0x3ed;
  local_19c[0x21] = 0x3f1;
  local_19c[0x22] = 0x3ed;
  local_19c[0x23] = 0x3ed;
  local_19c[0x24] = 0x3ed;
  local_19c[0x25] = 0x3ed;
  local_19c[0x26] = 0x3ed;
  local_19c[0x27] = 0x3ed;
  local_19c[0x28] = 0x3ed;
  local_19c[0x29] = 0x3ed;
  local_19c[0x2a] = 0x3ed;
  local_19c[0x2b] = 0x3f1;
  local_19c[0x2c] = 0x3ed;
  local_19c[0x2d] = 0x3ed;
  local_19c[0x2e] = 0x3ed;
  local_19c[0x2f] = 0x3ed;
  local_19c[0x30] = 0x3ed;
  local_19c[0x31] = 0x3ed;
  local_19c[0x32] = 0x3ee;
  local_19c[0x33] = 0x3ed;
  local_19c[0x34] = 0x3ee;
  local_19c[0x35] = 0x3f1;
  local_19c[0x36] = 0x3ee;
  local_19c[0x37] = 0x3ed;
  local_19c[0x38] = 0x3ee;
  local_19c[0x39] = 0x3ee;
  local_19c[0x3a] = 0x3ee;
  local_19c[0x3b] = 0x3ed;
  local_19c[0x3c] = 0x3f2;
  local_19c[0x3d] = 0x3ed;
  local_19c[0x3e] = 0x3ec;
  local_19c[0x3f] = 0x3f1;
  local_19c[0x40] = 0x3f2;
  local_19c[0x41] = 0x3ed;
  local_19c[0x42] = 0x3eb;
  local_19c[0x43] = 0x3f2;
  local_19c[0x44] = 0x3ee;
  local_19c[0x45] = 0x3ed;
  local_19c[0x46] = 0x3f2;
  local_19c[0x47] = 0x3ed;
  local_19c[0x49] = 0x3f1;
  local_19c[0x4a] = 0x3f2;
  local_19c[0x4b] = 0x3ed;
  local_19c[0x4d] = 0x3f2;
  local_19c[0x4f] = 0x3ed;
  local_19c[0x50] = 0x3f2;
  local_19c[0x51] = 0x3ed;
  local_19c[0x53] = 0x3f1;
  local_19c[0x54] = 0x3f2;
  local_19c[0x55] = 0x3ed;
  local_19c[0x57] = 0x3f2;
  local_19c[0x59] = 0x3ed;
  local_19c[0x48] = 0x3ec;
  local_19c[0x4c] = 0x3eb;
  local_19c[0x4e] = 0x3e9;
  local_19c[0x52] = 0x3ec;
  local_19c[0x56] = 0x3eb;
  local_19c[0x58] = 0x3e9;
  memset(local_19c + 0x5a, 0, 0x28); /* compiler bulk-zero initialization */
  st::fn_004026E4(static_cast<int *>(this));
  if (0 < param_1) {
    do {

      uVar1 = st::fn_0072E6C0();
      iVar3 = (int)uVar1 % (STField<int>(this,0x5833) * 100 + -99);

      uVar1 = st::fn_0072E6C0();
      local_c = (int)uVar1 % (STField<int>(this,0x5837) * 100 + -99);

      uVar2 = st::fn_004036ED(this,iVar3 / 200,local_c / 200,
                                 (RecoveredRecord_00695010_96BA53C4 *)param_2);

      uVar1 = st::fn_0072E6C0();
      iVar4 = (int)uVar1 % 10;
      switch(uVar2) {
      case 1:
        local_8 = local_19c[iVar4];
        break;
      case 2:
        local_8 = local_19c[iVar4 + 10];
        break;
      case 3:
        local_8 = local_19c[iVar4 + 0x14];
        break;
      case 4:
        local_8 = local_19c[iVar4 + 0x1e];
        break;
      case 5:
        local_8 = local_19c[iVar4 + 0x28];
        break;
      case 6:
        local_8 = local_19c[iVar4 + 0x32];
        break;
      case 7:
        local_8 = local_19c[iVar4 + 0x3c];
        break;
      case 8:
        local_8 = local_19c[iVar4 + 0x46];
        break;
      case 9:
        local_8 = local_19c[iVar4 + 0x50];
      }
      iVar4 = local_8;

      uVar1 = st::fn_00404D18(local_8);
      st::fn_00402856(this,iVar3,local_c,0,iVar4,uVar1);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  st::fn_00403805(static_cast<int *>(this));
  return;
}

// 0069F160 FUN_0069f160
#line 4 "decomp/ST.exe/functions/0069F160/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall st::fn_0069F160(void *this,int param_1,int param_2,int param_3,int param_4)

{
  alignas(4) byte st_stack_frame[216];

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5_mg0;
  uint uVar6;
  uint uVar4;
  uint local_EAX_583;
  uint uVar10_mg2;
  uint uVar5;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint auStack_d0 [2];
  uint auStack_c8 [2];
  int local_a8;
  int local_a4;
  int local_98;
  int local_78;
  int local_74;
  int local_68;
  int local_58;
  int local_54 [10];
  int local_2c;
  byte *local_1c;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  local_8 = 0xffffffff;
  puStack_c = (undefined *)&DAT_0079d828;
  puStack_10 = (byte *)&st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 20);
  local_58 = 0;
  uVar9 = (param_3 + 1) * param_1 * param_2;
  iVar4 = param_1 * param_2;
  if (100 < param_4) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = 100;
  }
  auStack_c8[1] = 0x69f1c0;
  ExceptionList = &local_14;
  _DAT_00853dd0 = st::fn_0072E6C0();
  uVar7 = uVar9 * 2;
  auStack_c8[1] = 0x69f1d6;
  iVar1 = -(uVar7 + 3 & 0xfffffffc);
  iVar3 = iVar1 + -0xc0;
  *(undefined4 *)((int)auStack_c8 + iVar1 + 4) = 0x69f1ec;
  iVar2 = -(uVar7 + 3 & 0xfffffffc);
  local_1c = (st_stack_frame + 20) + iVar2 + iVar1;
  local_8 = 0xffffffff;
  puVar14 = reinterpret_cast<uint *>(((st_stack_frame + 20) + iVar1));
  for (uVar5 = (uVar9 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar14 = 0;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  *(int *)((int)auStack_c8 + iVar2 + iVar1 + 4) = param_3 + 1;
  *(undefined1 **)((int)auStack_c8 + iVar2 + iVar1 + -0xc0 + 0xc0) = (st_stack_frame + 20) + iVar1;
  *(undefined4 *)((int)auStack_d0 + iVar2 + iVar1 + 4) = 0x69f21d;
  /* ST_CALLSITE[0069F218]: CALL 0x00405d0d; direct=00405D0D CGenerate::sub_0069ADA0 */
  st::fn_00405D0D
            (static_cast<CGenerate *>(this),*(int *)((int)auStack_c8 + iVar2 + iVar1 + -0xc0 + 0xc0),
             *(int *)((int)auStack_c8 + iVar2 + iVar1 + 4));
  puVar14 = reinterpret_cast<uint *>(((st_stack_frame + 20) + iVar2 + iVar3 + 0xc0));
  for (uVar9 = (uVar9 & 0x7fffffff) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar14 = 0;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  *(int *)((int)auStack_c8 + iVar2 + iVar1 + -0xc0 + 0xc4) = param_1;
  *(undefined4 *)((int)auStack_c8 + iVar2 + iVar1) = 0x69f241;
  /* ST_CALLSITE[0069F23C]: CALL 0x0040564b; direct=0040564B CGenerate::sub_006948E0 */
  st::fn_0040564B(static_cast<CGenerate *>(this),*(int *)((int)auStack_c8 + iVar2 + iVar1 + -0xc0 + 0xc4));
  *(undefined4 *)((int)auStack_c8 + iVar2 + iVar1 + 4) = 0x69f246;
  _DAT_00853dd0 = st::fn_0072E6C0();
  if (1 < param_3) {
    iVar12 = iVar4 * 2;
    local_98 = param_3 + -1;
    iVar17 = iVar4;
    do {
      if (-1 < param_2) {
        local_a4 = param_2 + 1;
        iVar11 = iVar12;
        iVar16 = iVar17;
        do {
          if (-1 < param_1) {
            local_a8 = param_1 + 1;
            iVar10 = iVar11;
            iVar15 = iVar16;
            do {
              if (*(short *)((st_stack_frame + 20) + iVar10 + iVar1) == 0) {
                *(int **)((int)auStack_c8 + iVar2 + iVar1 + 4) = local_54;
                *(int *)((int)auStack_c8 + iVar2 + iVar1 + -0xc0 + 0xc0) = iVar15;
                *(undefined4 *)((int)auStack_d0 + iVar2 + iVar1 + 4) = 0x69f2b9;
                /* ST_CALLSITE[0069F2B4]: CALL 0x0040208b; direct=0040208B CGenerate::sub_00696400 */
                iVar5_mg0 = st::fn_0040208B
                                      (static_cast<CGenerate *>(this),*(int *)((int)auStack_c8 + iVar2 + iVar1 + -0xc0 + 0xc0)
                                       ,*(int *)((int)auStack_c8 + iVar2 + iVar1 + 4));
                if (0 < iVar5_mg0) {
                  piVar8 = local_54;
                  do {
                    if (*(short *)((st_stack_frame + 20) + *piVar8 * 2 + iVar1) != 0) {
                      *(short *)((st_stack_frame + 20) + iVar10 + iVar2 + iVar3 + 0xc0) =
                           *(short *)((st_stack_frame + 20) + iVar10 + iVar2 + iVar3 + 0xc0) + 1;
                    }
                    piVar8 = piVar8 + 1;
                    iVar5_mg0 = iVar5_mg0 + -1;
                  } while (iVar5_mg0 != 0);
                }
              }
              iVar10 = iVar10 + 2;
              iVar15 = iVar15 + 1;
              local_a8 = local_a8 + -1;
            } while (local_a8 != 0);
          }
          iVar11 = iVar11 + param_1 * 2;
          iVar16 = iVar16 + param_1;
          local_a4 = local_a4 + -1;
        } while (local_a4 != 0);
      }
      iVar17 = iVar17 + iVar4;
      iVar12 = iVar12 + iVar4 * 2;
      local_98 = local_98 + -1;
    } while (local_98 != 0);
  }
  *(undefined4 *)((int)auStack_c8 + iVar2 + iVar1 + 4) = 0x69f342;
  _DAT_00853dd0 = st::fn_0072E6C0();
  local_74 = 0;
  local_78 = 0;
  iVar12 = (STField<int *>(this,8))[1];
  iVar17 = *STField<int *>(this,8);
  if (0 < param_4) {
    do {
      if (param_4 * 100 <= local_74) break;
      *(undefined4 *)((int)auStack_c8 + iVar2 + iVar1 + 4) = 0x69f397;
      uVar6 = st::fn_0072E6C0();
      *(undefined4 *)((int)auStack_c8 + iVar2 + iVar1 + 4) = 0x69f3a2;
      uVar4 = st::fn_0072E6C0();
      iVar11 = (int)uVar4 % param_1;
      *(undefined4 *)((int)auStack_c8 + iVar2 + iVar1 + 4) = 0x69f3ac;
      local_EAX_583 = st::fn_0072E6C0();
      local_2c = (int)local_EAX_583 % param_2;
      local_68 = 0;
      if (0 < param_3) {
        iVar10 = local_2c * param_1;
        iVar16 = (int)uVar6 % param_3;
        do {
          iVar15 = iVar16 + 1;
          iVar13 = iVar15 * iVar4 + iVar10 + iVar11;
          if ((*(short *)((st_stack_frame + 20) + iVar13 * 2 + iVar1) == 0) &&
             (PTR_00853dd4
              [iVar11 + iVar16 * iVar12 * iVar17 * 4 + *STField<int *>(this,8) * local_2c * 2] ==
              0)) {
            *(undefined4 *)((int)auStack_c8 + iVar2 + iVar1 + 4) = 0x69f424;
            uVar10_mg2 = st::fn_0072E6C0();
            if (1 < (int)uVar10_mg2 %
                    (*(short *)((st_stack_frame + 20) + iVar13 * 2 + iVar2 + iVar3 + 0xc0) + 3)) {
              *(int *)((int)auStack_c8 + iVar2 + iVar1 + 4) = iVar16;
              *(int *)((int)auStack_c8 + iVar2 + iVar1) = local_2c;
              *(int *)((int)auStack_d0 + iVar2 + iVar1 + -0xc0 + 0xc4) = iVar11;
              *(undefined4 *)((int)auStack_d0 + iVar2 + iVar1) = 0x69f463;
              st::fn_004047E6(this,*(uint *)((int)auStack_d0 + iVar2 + iVar1 + -0xc0 + 0xc4),
                                 *(uint *)((int)auStack_c8 + iVar2 + iVar1),
                                 *(uint *)((int)auStack_c8 + iVar2 + iVar1 + 4));
              *(undefined2 *)((st_stack_frame + 20) + iVar13 * 2 + iVar1) = 0xffff;
              local_58 = local_58 + 1;
              local_78 = local_78 + 1;
              break;
            }
          }
          if (param_3 <= iVar15) {
            iVar15 = 0;
          }
          local_68 = local_68 + 1;
          iVar16 = iVar15;
        } while (local_68 < param_3);
      }
      local_74 = local_74 + 1;
    } while (local_78 < param_4);
  }
  *(undefined4 *)((int)auStack_c8 + iVar2 + iVar1 + 4) = 0x69f486;
  _DAT_00853dd0 = st::fn_0072E6C0();
  ExceptionList = local_14;
  return local_58;
}

// 0069F5C0 FUN_0069f5c0
#line 4 "decomp/ST.exe/functions/0069F5C0/decomp.c"
void __thiscall st::fn_0069F5C0(void *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint local_EAX_14;
  uint uVar3;
  uint uVar2;
  uint *puVar4;

  uVar1 = param_3;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_3 == 0) {

    local_EAX_14 = st::fn_0072E6C0();
    uVar3 = local_EAX_14 & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
  }
  else {

    uVar2 = st::fn_0072E6C0();
    uVar3 = (int)uVar2 % 0xb;
  }
  uint32_t param_3_after_write = 0; /* compiler stack-slot lifetime split */
  /* ST_CALLSITE[0069F60E]: CALL 0x00405a56; direct=00405A56 thunk_FUN_00692c10; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/CGenerate; source view only; no Ghidra override */
  puVar4 = st::fn_00405A56(*(Global_sub_00692C10_param_1Enum *)(&DAT_007d7f90 + uVar3 * 8),
                              *(int *)(&DAT_007d7f94 + uVar3 * 8),&param_3_after_write,uVar1,0);
  puVar4[5] = param_1;
  puVar4[6] = param_2;
  /* ST_CALLSITE[0069F629]: CALL 0x00404822; direct=00404822 CGenerate::sub_006A09F0 */
  st::fn_00404822(static_cast<CGenerate *>(this),reinterpret_cast<byte *>(puVar4),param_3_after_write);
  return;
}

// 0069F660 FUN_0069f660
#line 4 "decomp/ST.exe/functions/0069F660/decomp.c"
void st::fn_0069F660(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,uint *param_6)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;

  uVar7 = param_4 - param_2 >> 0x1f;
  iVar11 = (param_4 - param_2 ^ uVar7) - uVar7;
  uVar7 = param_5 - param_3 >> 0x1f;
  iVar1 = (param_5 - param_3 ^ uVar7) - uVar7;
  iVar8 = ((param_4 <= param_2) - 1 & 2) - 1;
  iVar4 = ((param_5 <= param_3) - 1 & 2) - 1;
  puVar2 = static_cast<ushort *>(st::fn_006AAC70((iVar1 + iVar11) * 4 + 8));
  if (puVar2 == nullptr) {
    return;
  }
  iVar10 = 0;
  if (iVar11 < iVar1) {
    iVar3 = -iVar1;
    puVar5 = puVar2;
    for (; (iVar3 = iVar11 * 2 + iVar3, param_2 != param_4 || (param_3 != param_5));
        param_3 = param_3 + iVar4) {
      *puVar5 = (short)param_2;
      puVar5[1] = (short)param_3;
      iVar9 = iVar10 + 1;
      puVar6 = puVar5 + 2;
      if (-1 < iVar3) {
        param_2 = param_2 + iVar8;
        iVar3 = iVar3 + iVar1 * -2;
        iVar9 = iVar10 + 2;
        *puVar6 = (short)param_2;
        puVar5[3] = (short)param_3;
        puVar6 = puVar5 + 4;
      }
      puVar5 = puVar6;
      iVar10 = iVar9;
    }
  }
  else {
    iVar3 = -iVar11;
    puVar5 = puVar2;
    while ((iVar3 = iVar1 * 2 + iVar3, param_2 != param_4 || (param_3 != param_5))) {
      *puVar5 = (short)param_2;
      puVar5[1] = (short)param_3;
      iVar9 = iVar10 + 1;
      puVar6 = puVar5 + 2;
      if (-1 < iVar3) {
        *puVar6 = (short)param_2;
        iVar3 = iVar3 + iVar11 * -2;
        param_3 = param_3 + iVar4;
        iVar9 = iVar10 + 2;
        puVar5[3] = (short)param_3;
        puVar6 = puVar5 + 4;
      }
      param_2 = param_2 + iVar8;
      puVar5 = puVar6;
      iVar10 = iVar9;
    }
  }
  puVar2[iVar10 * 2] = (short)param_2;
  puVar2[iVar10 * 2 + 1] = (short)param_3;
  uVar7 = iVar10 + 1;
  *param_6 = uVar7;
  if (uVar7 != 0) {
    uVar12 = uVar7 & 0x80000001;
    bVar13 = uVar12 == 0;
    if ((int)uVar12 < 0) {
      bVar13 = (uVar12 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar13) {
      puVar2[uVar7 * 2] = (short)param_2;
      puVar2[*param_6 * 2 + 1] = (short)param_3;
      *param_6 = *param_6 + 1;
    }
  }
  return;
}

// 0069F7F0 FUN_0069f7f0
#line 4 "decomp/ST.exe/functions/0069F7F0/decomp.c"
int __cdecl st::fn_0069F7F0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_8;
  iVar6 = 0;
  iVar2 = -1;
  if (0 < param_2) {
    piVar1 = (int *)(param_1 + param_4);
    piVar4 = piVar1;
    iVar5 = param_2;
    do {
      iVar6 = iVar6 + *piVar4;
      piVar4 = (int *)((int)piVar4 + param_3);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (0 < iVar6) {
      auto param_1_after_write = *piVar1; /* compiler stack-slot lifetime split */
      iVar2 = 0;
      local_8 = 0;
      auto param_4_after_write = param_1_after_write; /* compiler stack-slot lifetime split */
      if (0 < param_5) {
        do {
          uVar3 = st::fn_0072E6C0();
          iVar7 = iVar6 + 1;
          iVar6 = 0;
          iVar5 = 0;
          piVar4 = piVar1;
          do {
            iVar6 = iVar6 + *piVar4;
            if ((int)uVar3 % iVar7 <= iVar6) {
              iVar2 = *piVar4;
              param_4_after_write = iVar5;
              break;
            }
            iVar5 = iVar5 + 1;
            piVar4 = (int *)((int)piVar4 + param_3);
          } while (iVar5 < param_2);
          if (param_1_after_write < iVar2) {
            local_8 = param_4_after_write;
            param_1_after_write = iVar2;
          }
          param_5 = param_5 + -1;
          if (param_5 == 0) {
            return local_8;
          }
        } while( true );
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}

// 0069F8D0 FUN_0069f8d0
#line 4 "decomp/ST.exe/functions/0069F8D0/decomp.c"
undefined2 *
st::fn_0069F8D0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int *param_8)

{
  short sVar1;
  ushort *puVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  short *psVar10;
  short sVar11;
  int iVar12;
  bool bVar13;
  int local_40;
  int local_3c;
  undefined2 *local_38;
  int local_34;
  int local_30;
  uint local_2c;
  undefined2 *local_28;
  int local_24;
  int local_20;
  short *local_1c;
  short *local_18;
  int local_14;
  short *local_10;
  int local_c;
  int local_8;

  iVar7 = param_5;
  local_3c = 0;
  local_40 = 0;
  local_28 = nullptr;
  local_18 = nullptr;
  local_20 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_4 == param_6) && (iVar3 = 1, param_5 == param_7)) {
LAB_0069fb6f:
    st::fn_006AB060(&local_18);

    local_28 = (undefined2 *)st::fn_006AAC70(iVar3 * 4);
    if (local_28 != nullptr) {
      local_20 = 1;
      bVar13 = param_4 != param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = param_4;
      *local_28 = (short)param_4;
      param_4 = iVar7;
      local_28[1] = (short)iVar7;
      puVar2 = local_28;
      if ((bVar13) || (iVar7 != param_7)) {
        do {
          local_38 = puVar2 + 2;
          sVar11 = 30000;
          psVar6 = reinterpret_cast<short *>(&DAT_007d8012);
          do {
            iVar7 = psVar6[-1] + param_5;
            if ((((-1 < iVar7) && (iVar7 < param_2)) && (iVar3 = *psVar6 + param_4, -1 < iVar3)) &&
               (iVar3 < param_3)) {
              if ((iVar7 == param_6) && (iVar3 == param_7)) goto LAB_0069fc43;
              sVar1 = *(short *)(param_1 + (iVar3 * param_2 + iVar7) * 2);
              if ((0 < sVar1) && (sVar1 < sVar11)) {
                sVar11 = sVar1;
                local_40 = iVar3;
                local_3c = iVar7;
              }
            }
            psVar6 = psVar6 + 2;
          } while ((int)psVar6 < 0x7d8022);
          param_5 = local_3c;
          param_4 = local_40;
          *local_38 = (short)local_3c;
          puVar2[3] = (short)local_40;
          local_20 = local_20 + 1;
          puVar2 = local_38;
        } while( true );
      }
LAB_0069fc43:
      local_28[local_20 * 2] = (short)param_6;
      local_28[local_20 * 2 + 1] = (short)param_7;
      local_20 = local_20 + 1;
    }
  }
  else {
    local_24 = 0x80;

    local_1c = static_cast<short *>(st::fn_006AAC70(0x400));
    local_18 = local_1c;
    if (local_1c != nullptr) {
      local_10 = local_1c + 0x100;
      iVar3 = param_2 * param_7 + param_6;
      if (*(short *)(param_1 + iVar3 * 2) == 0) {
        *(undefined2 *)(param_1 + iVar3 * 2) = 1;
      }
      local_1c[0x101] = (short)param_7;
      local_34 = 1;
      *local_10 = (short)param_6;
      local_14 = 2;
      while( true ) {
        local_8 = 0;
        local_30 = 0;
        if (local_34 < 1) break;
        local_38 = (undefined2 *)(local_24 * 8);
        local_2c = local_24 * 4 - 0x200;
        local_c = 4;
        psVar6 = local_1c;
        do {
          sVar11 = local_10[local_30 * 2 + 1];
          iVar12 = (int)sVar11;
          sVar1 = local_10[local_30 * 2];
          iVar8 = (int)sVar1;
          if ((iVar12 == param_5) && (iVar3 = local_14, iVar8 == param_4)) goto LAB_0069fb6f;
          iVar3 = param_1 + (iVar12 * param_2 + iVar8) * 2;
          if (local_24 < local_c) {
            local_38 = (undefined2 *)((int)local_38 + 0x400);
            local_24 = local_24 + 0x80;
            uVar5 = local_2c + 0x200;

            psVar4 = static_cast<short *>(st::fn_006ACF50(local_18,st::machine_word_boundary_cast<uint>(local_38)));
            if (psVar4 == nullptr) goto LAB_0069fc5a;
            local_1c = psVar4 + ((int)local_1c - (int)local_18 >> 2) * 2;
            local_10 = psVar4 + ((int)local_10 - (int)local_18 >> 2) * 2;
            if (local_1c == psVar4) {
              local_10 = local_10 + 0x100;
            }
            else {
              local_1c = local_1c + 0x100;
            }
            psVar6 = local_1c + local_8 * 2;
            local_18 = psVar4;

            st::fn_0072DA70
                      ((RecoveredRecord_006BFE70_3123BCE8 *)(local_2c + 0x400 + (int)psVar4),
                       (AnonPointee_TLOBaseTy_0607 *)(uVar5 + (int)psVar4),uVar5);
            local_2c = uVar5;
          }
          psVar4 = local_10;
          psVar9 = psVar6;
          if ((iVar8 < param_2 + -1) && (STField<short>(iVar3,0x2) == 0)) {
            psVar9 = psVar6 + 2;
            STField<short>(iVar3,0x2) = (short)local_14;
            *psVar6 = sVar1 + 1;
            psVar6[1] = sVar11;
            local_8 = local_8 + 1;
            local_c = local_c + 1;
          }
          psVar10 = psVar9;
          if ((0 < iVar12) && (psVar6 = (short *)(iVar3 + param_2 * -2), *psVar6 == 0)) {
            psVar10 = psVar9 + 2;
            *psVar6 = (short)local_14;
            *psVar9 = sVar1;
            psVar9[1] = sVar11 + -1;
            local_8 = local_8 + 1;
            local_c = local_c + 1;
          }
          psVar6 = psVar10;
          if ((0 < iVar8) && (*(short *)(iVar3 + -2) == 0)) {
            psVar6 = psVar10 + 2;
            *(short *)(iVar3 + -2) = (short)local_14;
            *psVar10 = sVar1 + -1;
            psVar10[1] = sVar11;
            local_8 = local_8 + 1;
            local_c = local_c + 1;
          }
          if ((iVar12 < param_3 + -1) && (*(short *)(iVar3 + param_2 * 2) == 0)) {
            *(short *)(iVar3 + param_2 * 2) = (short)local_14;
            *psVar6 = sVar1;
            psVar6[1] = sVar11 + 1;
            psVar6 = psVar6 + 2;
            local_8 = local_8 + 1;
            local_c = local_c + 1;
          }
          local_30 = local_30 + 1;
        } while (local_30 < local_34);
        local_34 = local_8;
        if (local_8 == 0) break;
        local_10 = local_1c;
        local_14 = local_14 + 1;
        local_1c = psVar4;
      }
    }
  }
LAB_0069fc5a:
  st::fn_006A5E90(local_18);
  *param_8 = local_20;
  return local_28;
}

// 0069FD70 FUN_0069fd70
#line 4 "decomp/ST.exe/functions/0069FD70/decomp.c"
undefined4 __cdecl st::fn_0069FD70(AnonShape_0069FD70_008BB09C *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char local_cc [200];

  uVar3 = 0;
  if (param_1 != nullptr) {
    /* ST_CALLSITE[0069FD93]: CALL 0x0072ea70; direct=0072EA70 Library::MSVCRT::FUN_0072ea70; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/int; signature=__cdecl;pointer:/int;/winnt.h/LPCSTR;pointer:/char */
    piVar1 = st::pointer_boundary_cast<int *>(st::fn_0072EA70(st::pointer_boundary_cast<LPCSTR>("ResRand.dat"),reinterpret_cast<char *>(&DAT_007d1d98)));
    if (piVar1 != nullptr) {

      iVar2 = st::fn_00730050(piVar1,reinterpret_cast<byte *>(&DAT_007d1d88));
      if (0 < iVar2) {
        param_1->field_0004 = (int)param_1;
        st::fn_00730B10(local_cc,200,piVar1);

        iVar2 = st::fn_00730050(piVar1,reinterpret_cast<byte *>(&DAT_007d1d88));
        if (0 < iVar2) {
          param_1->field_0008 = (int)param_1;
          st::fn_00730B10(local_cc,200,piVar1);

          iVar2 = st::fn_00730050(piVar1,reinterpret_cast<byte *>(&DAT_007d1d88));
          if (0 < iVar2) {
            param_1->field_0014 = (int)param_1;
            st::fn_00730B10(local_cc,200,piVar1);

            iVar2 = st::fn_00730050(piVar1,reinterpret_cast<byte *>(&DAT_007d1d88));
            if (0 < iVar2) {
              param_1->field_000C = (int)param_1;
              st::fn_00730B10(local_cc,200,piVar1);

              iVar2 = st::fn_00730050(piVar1,reinterpret_cast<byte *>(&DAT_007d1d88));
              if (0 < iVar2) {
                param_1->field_0018 = (int)param_1;
                st::fn_00730B10(local_cc,200,piVar1);

                iVar2 = st::fn_00730050(piVar1,reinterpret_cast<byte *>(&DAT_007d1d88));
                if (0 < iVar2) {
                  param_1->field_0010 = (int)param_1;
                  st::fn_00730B10(local_cc,200,piVar1);

                  iVar2 = st::fn_00730050(piVar1,reinterpret_cast<byte *>(&DAT_007d1d88));
                  if (0 < iVar2) {
                    param_1->field_001C = (int)param_1;
                    st::fn_00730B10(local_cc,200,piVar1);
                    uVar3 = 1;
                  }
                }
              }
            }
          }
        }
      }

      st::fn_0072EA90(piVar1);
    }
    return uVar3;
  }
  return 0;
}

// 0069FFB0 FUN_0069ffb0
#line 4 "decomp/ST.exe/functions/0069FFB0/decomp.c"
undefined4 * __fastcall st::fn_0069FFB0(undefined4 *param_1)

{
  int iVar1;

  st::fn_004038AA((RecoveredRecordView_00693910_0CDC4AE1 *)((int)param_1 + 0x24e));
  st::fn_00404ED5((undefined4 *)((int)param_1 + 0x1bef));

  st::fn_00403B39((undefined4 *)((int)param_1 + 0x1c03));
  STField<undefined4>(param_1,0x53ef) = 0;
  STField<undefined4>(param_1,0x53eb) = 0;
  memset((void *)((int)param_1 + 0x53f3), 0, 0x104); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset((void *)((int)param_1 + 0x54f7), 0, 0x104); /* compiler bulk-zero initialization */
  iVar1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  memset((void *)((int)param_1 + 0x582f), 0, 0x28); /* compiler bulk-zero initialization */
  iVar1 = 0;
  param_1[6] = 0;
  STField<undefined4>(param_1,0x56ff) = 0;
  memset((void *)((int)param_1 + 0x55fb), 0, 0x104); /* compiler bulk-zero initialization */
  STField<undefined4>(param_1,0x570b) = 0x32;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}
