#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0069.cpp

// 00690180 FUN_00690180
#line 4 "decomp/ST.exe/functions/00690180/decomp.c"
int __thiscall st::fn_00690180(void *this,uint param_1,uint *param_2)

{
  int iVar2;
  int iVar1;

  iVar2 = STField<int>(this,0xa5);
  if (((iVar2 != 0) && (-1 < (int)param_1)) && ((int)param_1 < (int)*(uint *)(iVar2 + 0xc))) {
    if (param_1 < *(uint *)(iVar2 + 0xc)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = *(int *)(iVar2 + 8) * param_1 + *(int *)(iVar2 + 0x1c);
    }
    else {
      iVar2 = 0;
    }
    if (*(AiFltClassTy **)(iVar2 + 4) != nullptr) {
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

  this_00 = (AiFltClassTy *)st::fn_00402FDB(this,param_1);
  if (this_00 != nullptr) {
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
  undefined4 uVar2;

  iVar1 = STField<int>(this,0xa5);
  if (((iVar1 != 0) && (-1 < (int)param_1)) && ((int)param_1 < (int)*(uint *)(iVar1 + 0xc))) {
    if (param_1 < *(uint *)(iVar1 + 0xc)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar1 = *(int *)(iVar1 + 8) * param_1 + *(int *)(iVar1 + 0x1c);
    }
    else {
      iVar1 = 0;
    }
    if (*(undefined4 **)(iVar1 + 4) != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
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
  undefined4 *puVar1;
  uint uVar2;

  puVar1 = (undefined4 *)st::fn_00402FDB(this,param_1);
  if (puVar1 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar2 = (**(code **)*puVar1)(param_2);
    return uVar2;
  }
  return 0xffff;
}

// 006903E0 FUN_006903e0
#line 4 "decomp/ST.exe/functions/006903E0/decomp.c"
void __thiscall st::fn_006903E0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  uVar3 = 0;
  iVar2 = STField<int>(this,0xa5);
  if (0 < *(int *)(iVar2 + 0xc)) {
    bVar4 = *(int *)(iVar2 + 0xc) != 0;
    do {
      if (((bVar4) && (iVar2 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c), iVar2 != 0)) &&
         (puVar1 = *(undefined4 **)(iVar2 + 4), puVar1 != nullptr)) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)*puVar1)(param_1);
      }
      iVar2 = STField<int>(this,0xa5);
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < *(uint *)(iVar2 + 0xc);
    } while ((int)uVar3 < (int)*(uint *)(iVar2 + 0xc));
  }
  return;
}

// 00690450 FUN_00690450
#line 4 "decomp/ST.exe/functions/00690450/decomp.c"
void __thiscall st::fn_00690450(void *this,short param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  uVar3 = 0;
  iVar2 = STField<int>(this,0xa5);
  if (0 < *(int *)(iVar2 + 0xc)) {
    bVar4 = *(int *)(iVar2 + 0xc) != 0;
    do {
      if ((((bVar4) && (iVar2 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c), iVar2 != 0))
          && (puVar1 = *(undefined4 **)(iVar2 + 4), puVar1 != nullptr)) &&
         ((STField<short>(puVar1,0x7b) == param_1 && (puVar1 != nullptr)))) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)*puVar1)(param_2);
      }
      iVar2 = STField<int>(this,0xa5);
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < *(uint *)(iVar2 + 0xc);
    } while ((int)uVar3 < (int)*(uint *)(iVar2 + 0xc));
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
  if (0 < *(int *)(iVar1 + 0xc)) {
    bVar3 = *(int *)(iVar1 + 0xc) != 0;
    do {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if ((((bVar3) && (iVar1 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c), iVar1 != 0))
          && (iVar1 = *(int *)(iVar1 + 4), iVar1 != 0)) &&
         (iVar1 = (*(code *)param_1)(iVar1,param_2), iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = STField<int>(this,0xa5);
      uVar2 = uVar2 + 1;
      bVar3 = uVar2 < *(uint *)(iVar1 + 0xc);
    } while ((int)uVar2 < (int)*(uint *)(iVar1 + 0xc));
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
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (((bVar5) && (iVar4 = *(int *)(iVar1 + 8) * uVar3 + *(int *)(iVar1 + 0x1c), iVar4 != 0)) &&
         (param_1 == *(short *)(iVar4 + 2))) {
        if (param_2 == -1) {
          return uVar3;
        }
        if (param_2 == *(short *)(iVar4 + 4)) {
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
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (((bVar5) &&
          (psVar4 = (short *)(*(int *)(iVar1 + 8) * uVar3 + *(int *)(iVar1 + 0x1c)),
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

  pAVar1 = (AiTactClassTy *)st::fn_006B04D0(0x144);
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

void __cdecl st::fn_00691480(AnonShape_00691480_E757992C *param_1)

{
  AnonShape_00691480_E757992C *pAVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;

  pAVar1 = param_1;
  if (param_1->field_0018 != '\0') {
    if (param_1->field_0018 == '\x02') {
      iVar2 = param_1->field_0085;
      uVar3 = 0;
      if (0 < *(int *)(iVar2 + 0xc)) {
        bVar5 = *(int *)(iVar2 + 0xc) != 0;
        do {
          if (bVar5) {
            iVar2 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c);
          }
          else {
            iVar2 = 0;
          }
          if (*(int *)(iVar2 + 4) == 0) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = nullptr;
          }
          else {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = (AnonShape_00691480_E757992C *)(*(int *)(iVar2 + 4) + 0x20);
          }
          st::fn_00405BCD((int *)&param_1);
          iVar2 = pAVar1->field_0085;
          uVar3 = uVar3 + 1;
          bVar5 = uVar3 < *(uint *)(iVar2 + 0xc);
        } while ((int)uVar3 < (int)*(uint *)(iVar2 + 0xc));
      }
    }
    piVar4 = &pAVar1->field_0085;
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
  if ((AnonShape_00691480_E757992C *)*param_1 != nullptr) {
    st::fn_00402202((AnonShape_00691480_E757992C *)*param_1);
    st::fn_006AB060(param_1);
  }
  return;
}

// 00691570 FUN_00691570
#line 4 "decomp/ST.exe/functions/00691570/decomp.c"
undefined4 * __fastcall st::fn_00691570(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
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
   00691650 returns used as parameter 1 of Library::Ourlib::MFSPR::mfSSprLoad @ 006920A0 */

char * st::fn_00691650(undefined4 param_1,undefined4 param_2)

{
  st::external_00000080(&DAT_00853a68,"%s%u",param_1,param_2);
  return &DAT_00853a68;
}

// 00692390 FUN_00692390
#line 4 "decomp/ST.exe/functions/00692390/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00692390 returns used as parameter 2 of cMf32::RecChk @ 00691857 */

char * st::fn_00692390(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;

  pcVar1 = st::fn_0040456B("CONTUR",param_4);
  st::external_00000080(&DAT_00853b6c,"%s%u%u%u",pcVar1,param_1,param_2,param_3);
  return &DAT_00853b6c;
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
            if (*(int *)(iVar4 + 0x25) == 0) {
              iVar3 = 0;
              if (0 < *(short *)(iVar4 + 0x23)) {
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
          if (*(int *)(iVar4 + 0x25) == 0) {
            iVar3 = 0;
            if (0 < *(short *)(iVar4 + 0x23)) {
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
   @ 00691FE9 */

AnonShape_006B4B20_3D4F4412 *
st::fn_00692920(cMf32 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  AnonShape_006B4B20_3D4F4412 *pAVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ushort *local_10;
  int local_c;
  int local_8;

  puVar1 = param_3;
  pAVar2 = nullptr;
  if (param_2 != nullptr) {
    local_10 = st::fn_006F1CE0(param_1,1,"PAL_APP",nullptr,1);
    pAVar2 = (AnonShape_006B4B20_3D4F4412 *)
             st::fn_006B50C0((int)param_3,param_4,8,0x100,(undefined4 *)(local_10 + 0x14),1);
    local_8 = st::fn_006B4FA0((int *)pAVar2);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_5 == 0) {
      if (0 < param_4) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = (undefined4 *)param_4;
        puVar8 = param_2;
        do {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = (undefined4 *)(param_4 + -1);
          puVar6 = puVar8;
          puVar7 = (undefined4 *)
                   (((uint)pAVar2->field_000E * pAVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
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
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = (undefined4 *)((int)param_3 + -1);
          puVar8 = (undefined4 *)((int)puVar8 + (int)puVar1);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = (int)param_2;
        } while (param_3 != nullptr);
      }
    }
    else if (0 < param_4) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = param_2;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = param_4;
      do {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = (undefined4 *)(param_4 + -1);
        puVar3 = (undefined1 *)
                 (((uint)pAVar2->field_000E * pAVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                  (int)param_2 + local_8);
        if (0 < (int)puVar1) {
          puVar5 = puVar3;
          puVar8 = puVar1;
          do {
            puVar8 = (undefined4 *)((int)puVar8 + -1);
            *puVar5 = *(undefined1 *)
                       (local_c + 0x37ac +
                       ((int)((uint)(byte)puVar5[(int)param_3 - (int)puVar3] * 0xf) >> 8) * 4);
            puVar5 = puVar5 + 1;
          } while (puVar8 != nullptr);
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = (undefined4 *)((int)param_3 + (int)puVar1);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_5 = param_5 + -1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int)param_2;
      } while (param_5 != 0);
    }
    st::fn_006F20E0(param_1,(uint *)&local_10);
  }
  return pAVar2;
}

// 00692AE0 FUN_00692ae0
#line 4 "decomp/ST.exe/functions/00692AE0/decomp.c"
undefined4 __thiscall st::fn_00692AE0(void *this,uint param_1,int param_2)

{
  undefined4 uVar1;

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
#line 1 "decomp/ST.exe/functions/00692BA0/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00691690 -> 00692BA0 @ 00691759 | 00691690 -> 00692BA0 @ 00691888 | 00691690 ->
   00692BA0 @ 006918FD | 00691690 -> 00692BA0 @ 006920B8 */

void st::fn_00692BA0(char *param_1)

{
  int iVar1;
  byte *pbVar2;
  char *pcVar3;

  iVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(short *)(param_1 + 0x23)) {
    pcVar3 = param_1 + 0x2d;
    do {
      pbVar2 = &DAT_007d5930;
      do {
        st::fn_006C8E60(*(int **)pcVar3,*pbVar2,pbVar2[4]);
        pbVar2 = pbVar2 + 8;
      } while ((int)pbVar2 < 0x7d5958);
      iVar1 = iVar1 + 1;
      pcVar3 = pcVar3 + 4;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    } while (iVar1 < *(short *)(param_1 + 0x23));
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
  undefined4 uVar1;

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
    st::fn_0040394A("stone_c",DAT_007d99a0);
    return;
  case CASE_1:
    st::fn_0040394A("stone_c",DAT_007dac80);
    return;
  case CASE_2:
    st::fn_0040394A("stone_c",DAT_007dbf60);
    return;
  case CASE_3:
    st::fn_0040394A("stone_c",DAT_007dd240);
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
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  byte local_108 [260];

  uVar2 = st::fn_00401131(param_2);
  uVar5 = 0;
  iVar7 = uVar2 * 0x218;
  if (*(int *)(iVar7 + 0x20c + DAT_00853d80) != 0) {
    do {
      st::external_00000080((LPSTR)local_108,"%s%u",iVar7 + DAT_00853d80,uVar5);
      pbVar6 = local_108;
      pbVar3 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_0069385e:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00693863;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar6[1];
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
    } while (uVar5 < *(uint *)(iVar7 + 0x20c + DAT_00853d80));
  }
  return 0xffffffff;
}

// 006938C0 FUN_006938c0
#line 4 "decomp/ST.exe/functions/006938C0/decomp.c"
uint __cdecl st::fn_006938C0(int param_1)

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
  return 0xffffffff;
}

// 00693910 FUN_00693910
#line 4 "decomp/ST.exe/functions/00693910/decomp.c"
/* [STReturnSemanticsApplier] typed_pointer_return.
   Evidence: all 1 value-return path(s) forward Listing variable param_1 with evidence-backed
   structure /SubmarineTitans/Recovered/PointerShapes/AnonShape_00693910_1CC6632C (current recovered
   extent=6560) */

AnonShape_00693910_1CC6632C * __fastcall st::fn_00693910(AnonShape_00693910_1CC6632C *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  byte *puVar3;
  AnonShape_00693910_1CC6632C *pAVar4;
  byte *puVar5;
  int local_8;

  puVar2 = (undefined4 *)&param_1->field_0x4a;
  pAVar4 = param_1;
  for (iVar1 = 0x666; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar4 = 0;
    pAVar4 = (AnonShape_00693910_1CC6632C *)&pAVar4->field_0x4;
  }
  *(undefined1 *)pAVar4 = 0;
  *(undefined4 *)&param_1->field_0x4 = 0x8f000205;
  param_1->field_02DA = 1;
  param_1->field_02DB = 1;
  param_1->field_0x2dc = 0;
  param_1->field_02DD = 2;
  param_1->field_02E1 = 0xffffffff;
  local_8 = 8;
  do {
    puVar3 = (byte *)(&DAT_007d6268);
    puVar5 = (byte *)((int)puVar2 + -0x39);
    memmove(puVar5, puVar3, 0x51); /* compiler REP MOVS byte copy */
    iVar1 = 0;
    puVar3 = (byte *)(puVar2);
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0xffffffff;
      puVar3 = (byte *)(puVar3 + 1);
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
  undefined4 local_c;
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
    st::fn_006F1CE0(in_stack_00000004,0,PTR_s_DESCRIPTOR_0079d770,(int *)&local_8,1);
    g_currentExceptionFrame = local_54.previous;
  }
  else {
    g_currentExceptionFrame = local_54.previous;
    local_c = 0;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_006F20E0(in_stack_00000004,(uint *)&local_8);
  }
  if (local_8 != nullptr) {
    puVar3 = (byte *)(local_8);
    memmove(local_10, puVar3, 0x1999); /* compiler REP MOVS byte copy */
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_006F20E0(in_stack_00000004,(uint *)&local_8);
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
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
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
  puVar7 = (byte *)(&DAT_007d6268);
  puVar9 = (byte *)(puVar1);
  memmove(puVar9, puVar7, 0x51); /* compiler REP MOVS byte copy */
  *(char *)((int)param_1 + param_2 * 0x51 + 0x33) = (char)param_2;
  *(undefined1 *)((int)param_1 + param_2 * 0x51 + 0x32) = param_3;
  *(undefined4 *)((int)param_1 + param_2 * 0x51 + 0x35) = param_4;
  *(undefined4 *)((int)param_1 + param_2 * 0x51 + 0x39) = param_5;
  *(undefined4 *)((int)param_1 + param_2 * 0x51 + 0x3d) = param_6;
  *(undefined1 *)puVar1 = param_7;
  if (-1 < (int)uVar4) {
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
int __thiscall st::fn_00693C10(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar1;
  byte *puVar3;
  byte *puVar4;

  iVar1 = st::fn_00403913(this,(uint)STField<byte>(param_1,0x22));
  if (iVar1 == 0) {
    uVar1 = st::fn_004029FF(this);
    puVar3 = (byte *)(param_1);
    puVar4 = (byte *)((uint)STField<byte>(param_1,0x22) * 0x51 + 0x11 + (int)this);
    memmove(puVar4, puVar3, 0x51); /* compiler REP MOVS byte copy */
    STField<char>(this,0x10) = STField<char>(this,0x10) + '\x01';
    if (-1 < (int)uVar1) {
      *(char *)((uint)STField<byte>(param_1,0x22) * 0x51 + 0x34 + (int)this) = (char)uVar1;
    }
    return (uint)STField<byte>(param_1,0x22) * 0x51 + 0x11 + (int)this;
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

  puVar2 = (byte *)(&DAT_007d6268);
  puVar3 = (byte *)((int)this + param_1 * 0x51 + 0x11);
  memmove(puVar3, puVar2, 0x51); /* compiler REP MOVS byte copy */
  iVar1 = 0;
  puVar2 = (byte *)((int)this + param_1 * 0x51 + 0x4a);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = (byte *)(puVar2 + 1);
  }
  return;
}

// 00693DC0 FUN_00693dc0
#line 4 "decomp/ST.exe/functions/00693DC0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00693DC0 -> 00693D00 @ 00693E07 */

undefined4 st::fn_00693DC0(cMf32 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  AnonReceiver_00693D00 *this;
  int iVar2;
  AnonReceiver_00693D00 *pAVar3;
  byte *puVar4;
  undefined4 local_19a8 [1635];
  undefined4 uStackY_1c;

  st::fn_0072DA40();
  st::fn_004038AA((AnonShape_00693910_1CC6632C *)local_19a8);
  pAVar3 = this;
  puVar4 = (byte *)(local_19a8);
  memmove(puVar4, pAVar3, 0x1999); /* compiler REP MOVS byte copy */
  iVar2 = 0;
  do {
    st::fn_00401F05(this,iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  uStackY_1c = 0x693e0c;
  uVar1 = st::fn_00402103
                    (this,param_1,param_2);
  puVar4 = (byte *)(local_19a8);
  pAVar3 = this;
  memmove(pAVar3, puVar4, 0x1999); /* compiler REP MOVS byte copy */
  st::fn_00403783();
  return uVar1;
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

// 00693EB0 FUN_00693eb0
#line 4 "decomp/ST.exe/functions/00693EB0/decomp.c"
undefined4 st::fn_00693EB0(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 *this;
  int iVar6;
  int iVar7;
  byte *puVar8;
  byte *puVar9;
  int iVar10;
  undefined4 local_19ac [4];
  undefined4 auStackY_199b [8];
  char acStackY_1979 [614];
  undefined4 auStackY_1713 [1470];
  undefined4 uStackY_18;

  iVar10 = param_2;
  st::fn_0072DA40();
  puVar8 = (byte *)(this);
  puVar9 = (byte *)(local_19ac);
  memmove(puVar9, puVar8, 0x1999); /* compiler REP MOVS byte copy */
  iVar6 = param_2 * 0x51;
  puVar8 = (byte *)((int)this + param_1 * 0x51 + 0x11);
  puVar9 = (byte *)(iVar6 + 0x11 + (int)this);
  for (iVar7 = 0x14; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = (byte *)(puVar8 + 1);
    puVar9 = (byte *)(puVar9 + 1);
  }
  *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
  *(char *)(iVar6 + 0x33 + (int)this) = (char)param_2;
  uStackY_18 = 0x693f0a;
  st::fn_004026D5(this,param_1);
  if (acStackY_1979[iVar6] != -1) {
    puVar8 = (byte *)((int)auStackY_199b + iVar6);
    puVar9 = (byte *)((int)this + param_1 * 0x51 + 0x11);
    memmove(puVar9, puVar8, 0x51); /* compiler REP MOVS byte copy */
    *(char *)((int)this + param_1 * 0x51 + 0x33) = (char)param_1;
  }
  puVar8 = (byte *)((int)this + param_1 * 8 + 0x299);
  iVar6 = 0;
  do {
    *(undefined1 *)((int)this + iVar6 + param_2 * 8 + 0x299) = *(undefined1 *)((int)puVar8 + iVar6);
    *(undefined1 *)((int)puVar8 + iVar6) = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 8);
  iVar6 = param_2 + param_1 * 8;
  iVar7 = param_1 + param_2 * 8;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_2 = 8;
  uVar1 = *(undefined1 *)((int)auStackY_1713 + iVar6);
  *(undefined1 *)(iVar7 + 0x299 + (int)this) = uVar1;
  puVar5 = (undefined1 *)(param_1 + 0x299 + (int)this);
  puVar4 = puVar5;
  do {
    puVar4[iVar10 - param_1] = *puVar4;
    *puVar4 = 0;
    puVar4 = puVar4 + 8;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  uVar2 = *(undefined1 *)((int)auStackY_1713 + iVar7);
  uVar3 = auStackY_1713[iVar10 * 2];
  *(undefined1 *)(iVar6 + 0x299 + (int)this) = uVar2;
  *puVar8 = uVar3;
  puVar4 = (undefined1 *)((int)auStackY_1713 + iVar10);
  puVar8[1] = auStackY_1713[iVar10 * 2 + 1];
  *(undefined1 *)(iVar6 + 0x299 + (int)this) = uVar2;
  iVar10 = 8;
  do {
    uVar2 = *puVar4;
    puVar4 = puVar4 + 8;
    *puVar5 = uVar2;
    puVar5 = puVar5 + 8;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  *(undefined1 *)(iVar7 + 0x299 + (int)this) = uVar1;
  return 1;
}

// 00694070 FUN_00694070
#line 4 "decomp/ST.exe/functions/00694070/decomp.c"
void __thiscall st::fn_00694070(void *this,int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;

  iVar1 = st::fn_00403913(this,param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x24) = *param_2;
    *(undefined4 *)(iVar1 + 0x28) = param_2[1];
    *(undefined4 *)(iVar1 + 0x2c) = param_3;
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
    st::fn_00402F72(this);
  }
  return;
}

// 00694100 FUN_00694100
#line 4 "decomp/ST.exe/functions/00694100/decomp.c"
void __fastcall st::fn_00694100(void *param_1)

{
  int iVar1;
  uint uVar2;

  uVar2 = 0;
  do {
    iVar1 = st::fn_00404AED(param_1,uVar2);
    if (iVar1 == 0) {
      STField<undefined4>(param_1,0x199d) = 0xffffffff;
      while( true ) {
        iVar1 = STField<int>(param_1,0x199d) + 1;
        STField<int>(param_1,0x199d) = iVar1;
        while( true ) {
          if (7 < iVar1) goto LAB_0069417a;
          iVar1 = st::fn_00403913(param_1,iVar1);
          if (iVar1 != 0) break;
          iVar1 = STField<int>(param_1,0x199d) + 1;
          STField<int>(param_1,0x199d) = iVar1;
        }
        iVar1 = st::fn_00403913(param_1,STField<int>(param_1,0x199d));
        if (iVar1 == 0) break;
        if ((int)uVar2 < (int)(uint)*(byte *)(iVar1 + 0x23)) {
          *(byte *)(iVar1 + 0x23) = *(byte *)(iVar1 + 0x23) - 1;
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
uint __fastcall st::fn_006941C0(void *param_1)

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
  return 0xffffffff;
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
    if (*(byte *)(iVar1 + 0x23) == param_1) {
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
    st::fn_006F1CE0(in_stack_00000004,0,PTR_s_DESCRIPTOR_0079d770,(int *)&local_c,0x1999);
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
    *(undefined1 *)(local_10 + 0x10) = *(undefined1 *)(local_c + 0x10);
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
  undefined1 *puVar1;

  puVar1 = (undefined1 *)st::fn_00403913(this,param_1);
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
      memset((void *)((int)this + (uint)*(byte *)(iVar2 + 0x39) * 0x9c + 0x2fa), 0, 0x9c); /* compiler bulk-zero initialization */
      iVar4 = 0;
      memset((void *)(iVar2 + 1), 0, 0x20); /* compiler bulk-zero initialization */
      *(undefined1 *)(iVar2 + 0x39) = 0xff;
    }
  }
  return;
}

// 00694510 FUN_00694510
#line 4 "decomp/ST.exe/functions/00694510/decomp.c"
char * __fastcall st::fn_00694510(void *param_1)

{
  char *pcVar1;
  int iVar2;

  STField<undefined4>(param_1,0x199d) = 0xffffffff;
  while( true ) {
    iVar2 = STField<int>(param_1,0x199d) + 1;
    STField<int>(param_1,0x199d) = iVar2;
    while( true ) {
      if (7 < iVar2) {
        return nullptr;
      }
      iVar2 = st::fn_00403913(param_1,iVar2);
      if (iVar2 != 0) break;
      iVar2 = STField<int>(param_1,0x199d) + 1;
      STField<int>(param_1,0x199d) = iVar2;
    }
    pcVar1 = (char *)st::fn_00403913(param_1,STField<int>(param_1,0x199d));
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
  undefined4 local_c;

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
void __fastcall st::fn_00694890(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int **)(param_1 + 0x10) != nullptr) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_00405D8A(*(int **)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

// 00695010 FUN_00695010
#line 4 "decomp/ST.exe/functions/00695010/decomp.c"
undefined4 __thiscall st::fn_00695010(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_14 [4];
  uint local_10;
  int local_c;
  undefined4 local_8;

  iVar1 = *(int *)(param_3 + 4);
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
  st::fn_0040414C(STField<int *>(this,8),param_1,param_2,local_c,(int)local_14);
  if (((local_10 & 0x2000) != 0) || (uVar4 = 6, (short)local_10 == 0x1100)) {
    uVar4 = local_8;
  }
  if ((local_10 & 0x4000) != 0) {
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
  uint uVar1;
  uint uVar2;

  uVar1 = st::fn_00401131(param_1);
  uVar2 = st::fn_0072E6C0();
  return uVar2 % *(uint *)(DAT_00853d80 + 0x20c + uVar1 * 0x218);
}

// 00695140 FUN_00695140
#line 4 "decomp/ST.exe/functions/00695140/decomp.c"
void st::fn_00695140(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte *puVar4;

  uVar1 = param_2[6];
  uVar2 = param_2[7];
  puVar4 = (byte *)(param_1);
  memmove(param_2, puVar4, 0x20); /* compiler REP MOVS byte copy */
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}

// 00695180 FUN_00695180
#line 1 "decomp/ST.exe/functions/00695180/decomp.c"

/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=006952B0 @ 006956B8
   -> TEST TEST EAX,EAX */

int st::fn_00695180(AnonShape_0052EFB0_8161B92D *param_1,RecoveredRecord_CGenerate_00695180 *param_2,
                int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_3 + 0x10);
  uVar5 = 0;
  iVar6 = 0;
  iVar8 = 0;
  if (param_1->field_000C != iVar1) {
    return 0;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_4 == 0) {
    return 1;
  }
  if ((param_1->field_0014 == 0) && (0 < iVar1)) {
    iVar2 = param_1->field_0018;
    iVar3 = param_2->field_0018;
    do {
      if (uVar5 < *(uint *)(iVar2 + 0xc)) {
        iVar7 = *(int *)(iVar2 + 8) * uVar5 + *(int *)(iVar2 + 0x1c);
      }
      else {
        iVar7 = 0;
      }
      if (uVar5 < *(uint *)(iVar3 + 0xc)) {
        iVar4 = *(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c);
      }
      else {
        iVar4 = 0;
      }
      iVar8 = iVar8 + *(int *)(iVar7 + 0x2c);
      iVar6 = iVar6 + *(int *)(iVar4 + 0x2c);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar1);
  }
  local_8 = (uint)(param_2->field_0014 + param_2->field_0010 * 0x122 + iVar6 <
                  param_1->field_0014 + param_1->field_0010 * 0x122 + iVar8);
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
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((iVar8 != 0) && (param_1 < *(uint *)(iVar8 + 0xc))) &&
     (piVar7 = (int *)(*(int *)(iVar8 + 8) * param_1 + *(int *)(iVar8 + 0x1c)), piVar7 != nullptr
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
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = 0;
    }
    else {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = *piVar7;
    }
    st::fn_006B0C70(STField<DArrayTy *>(this,0x5853),param_1);
    iVar8 = STField<int>(this,0x5853);
    uVar6 = 0;
    if (0 < *(int *)(iVar8 + 0xc)) {
      bVar9 = *(int *)(iVar8 + 0xc) != 0;
      do {
        if (bVar9) {
          iVar8 = *(int *)(iVar8 + 8) * uVar6 + *(int *)(iVar8 + 0x1c);
        }
        else {
          iVar8 = 0;
        }
        if (((int)param_1 <= (int)uVar6) && (iVar3 = *(int *)(iVar8 + 0x15), iVar3 != 0)) {
          uVar5 = 0;
          if (0 < *(int *)(iVar3 + 0xc)) {
            bVar9 = *(int *)(iVar3 + 0xc) != 0;
            do {
              if (bVar9) {
                iVar3 = *(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c);
              }
              else {
                iVar3 = 0;
              }
              psVar1 = (short *)(STField<int>(this,0x584f) +
                                (STField<int>(this,0x582f) * param_2 + *(int *)(iVar3 + 2)) * 2);
              if ((int)*psVar1 != uVar6) {
                *psVar1 = (short)uVar6;
              }
              iVar3 = *(int *)(iVar8 + 0x15);
              uVar5 = uVar5 + 1;
              bVar9 = uVar5 < *(uint *)(iVar3 + 0xc);
            } while ((int)uVar5 < (int)*(uint *)(iVar3 + 0xc));
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
        bVar9 = uVar6 < *(uint *)(iVar8 + 0xc);
      } while ((int)uVar6 < (int)*(uint *)(iVar8 + 0xc));
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
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((iVar1 != 0) && (param_1 < *(uint *)(iVar1 + 0xc))) &&
     (iVar1 = *(int *)(iVar1 + 8) * param_1 + *(int *)(iVar1 + 0x1c), iVar1 != 0)) {
    if (*(DArrayTy **)(iVar1 + 0x15) != nullptr) {
      st::fn_006AE110(*(DArrayTy **)(iVar1 + 0x15));
      *(undefined4 *)(iVar1 + 0x15) = 0;
    }
    if (*(DArrayTy **)(iVar1 + 0x19) != nullptr) {
      st::fn_006AE110(*(DArrayTy **)(iVar1 + 0x19));
      *(undefined4 *)(iVar1 + 0x19) = 0;
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
    if (param_1 < *(uint *)(iVar6 + 0xc)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar6 = *(int *)(iVar6 + 8) * param_1 + *(int *)(iVar6 + 0x1c);
    }
    else {
      iVar6 = 0;
    }
    if (*(int *)(iVar6 + 0x19) == 0) {
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
  undefined4 local_8;

  iVar5 = STField<int>(this,0x5853);
  local_8 = 0;
  if (iVar5 != 0) {
    if (param_1 < *(uint *)(iVar5 + 0xc)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = *(int *)(iVar5 + 8) * param_1 + *(int *)(iVar5 + 0x1c);
    }
    else {
      iVar2 = 0;
    }
    if (param_2 < *(uint *)(iVar5 + 0xc)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar5 = *(int *)(iVar5 + 8) * param_2 + *(int *)(iVar5 + 0x1c);
    }
    else {
      iVar5 = 0;
    }
    if (((iVar2 != 0) && (iVar5 != 0)) && (*(int *)(iVar2 + 0x15) != 0)) {
      iVar2 = *(int *)(iVar5 + 0x15);
      uVar4 = 0;
      if (0 < *(int *)(iVar2 + 0xc)) {
        bVar6 = *(int *)(iVar2 + 0xc) != 0;
        do {
          if ((bVar6) && (iVar2 = *(int *)(iVar2 + 8) * uVar4 + *(int *)(iVar2 + 0x1c), iVar2 != 0))
          {
            uVar1 = st::fn_00404156(this,param_1,*(int *)(iVar2 + 2),param_3);
            if (-1 < (int)uVar1) {
              local_8 = local_8 + 1;
            }
          }
          iVar2 = *(int *)(iVar5 + 0x15);
          uVar4 = uVar4 + 1;
          bVar6 = uVar4 < *(uint *)(iVar2 + 0xc);
        } while ((int)uVar4 < (int)*(uint *)(iVar2 + 0xc));
      }
      iVar2 = *(int *)(iVar5 + 0x19);
      if (iVar2 != 0) {
        uVar4 = 0;
        if (0 < *(int *)(iVar2 + 0xc)) {
          bVar6 = *(int *)(iVar2 + 0xc) != 0;
          do {
            if (bVar6) {
              piVar3 = (int *)(*(int *)(iVar2 + 8) * uVar4 + *(int *)(iVar2 + 0x1c));
            }
            else {
              piVar3 = nullptr;
            }
            st::fn_0040138E(this,param_1,*piVar3);
            iVar2 = *(int *)(iVar5 + 0x19);
            uVar4 = uVar4 + 1;
            bVar6 = uVar4 < *(uint *)(iVar2 + 0xc);
          } while ((int)uVar4 < (int)*(uint *)(iVar2 + 0xc));
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
void __thiscall st::fn_00696310(void *this,int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;

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
  uVar3 = (uint)(byte)(&DAT_0079d77c)[iVar1];
  if (param_4 != nullptr) {
    *param_4 = iVar1;
  }
  if (uVar3 != 0) {
    piVar2 = (int *)(iVar1 * 0x20 + 0x570f + (int)this);
    do {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      *param_3 = iVar1 + param_1;
      param_3 = param_3 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
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
  if (param_1 < *(uint *)(iVar1 + 0xc)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar3 = *(int *)(iVar1 + 8) * param_1 + *(int *)(iVar1 + 0x1c);
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x19), iVar3 != 0)) {
      uVar6 = 0;
      if (0 < *(int *)(iVar3 + 0xc)) {
        bVar7 = *(int *)(iVar3 + 0xc) != 0;
        do {
          if (bVar7) {
            puVar4 = (uint *)(*(int *)(iVar3 + 8) * uVar6 + *(int *)(iVar3 + 0x1c));
          }
          else {
            puVar4 = nullptr;
          }
          if ((((*puVar4 < *(uint *)(iVar1 + 0xc)) &&
               (piVar5 = (int *)(*puVar4 * *(int *)(iVar1 + 8) + *(int *)(iVar1 + 0x1c)),
               piVar5 != nullptr)) && (*piVar5 == param_2)) && (uVar6 != param_3)) {
            local_8 = local_8 + 1;
          }
          uVar6 = uVar6 + 1;
          bVar7 = uVar6 < *(uint *)(iVar3 + 0xc);
          iVar2 = local_8;
        } while ((int)uVar6 < (int)*(uint *)(iVar3 + 0xc));
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
  ushort local_1c;
  ushort uStack_1a;
  undefined2 uStack_18;
  char cStack_17;
  ushort local_14;
  ushort uStack_12;
  undefined2 uStack_10;
  char cStack_f;
  undefined4 local_c;
  int local_8;

  local_c = 0;
  if (((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
      ((param_3 < param_1[1] && (-1 < param_4)))) &&
     ((param_4 < *param_1 && ((-1 < param_5 && (param_5 < param_1[1])))))) {
    iVar2 = st::fn_0040414C(param_1,param_2,param_3,param_6,(int)&local_14);
    iVar3 = st::fn_0040414C(param_1,param_4,param_5,param_6,(int)&local_1c);
    if (uStack_12 != 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pbVar3 = (byte *)(*(int *)(local_8 + 0x5833) * param_3 + *(int *)(local_8 + 0x584b) + param_2);
      *pbVar3 = *pbVar3 | '\x01' << ((byte)param_6 & 0x1f);
    }
    if (uStack_1a != 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pbVar3 = (byte *)(*(int *)(local_8 + 0x5833) * param_5 + *(int *)(local_8 + 0x584b) + param_4);
      *pbVar3 = *pbVar3 | '\x01' << ((byte)param_6 & 0x1f);
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if ((((cStack_17 == cStack_f) && ((short)iVar2 == (short)iVar3)) &&
        (((-(uint)((uStack_12 & 0x2000) != 0) & 0xffffff01) + 0xffff & (uint)uStack_12) ==
         ((-(uint)((uStack_1a & 0x2000) != 0) & 0xffffff01) + 0xffff & (uint)uStack_1a))) &&
       (uVar1 = CONCAT22(uStack_1a,local_1c),
       ((-(ushort)((local_14 & 0x2000) != 0) & 0xff01) - 1 & local_14) ==
       ((-(ushort)((local_1c & 0x2000) != 0) & 0xff01) - 1 & local_1c))) {
      if (param_7 == 1) {
        uVar1 = (uint)uStack_1a;
      }
      iVar4 = 0;
      piVar2 = &DAT_007df82c;
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
  undefined4 uVar1;
  undefined1 local_c [4];
  uint local_8;

  st::fn_0040414C(STField<int *>(this,8),param_1,param_2,param_3,(int)local_c);
  if (((local_8 & 0x2000) == 0) || (uVar1 = 1, (local_8 & 0xf) != 0)) {
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
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = nullptr;
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
            if ((int)pAVar8 < (int)param_1) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = pAVar8;
            }
            if (iVar6 < local_c) {
              local_c = iVar6;
            }
            if ((int)local_10 < (int)pAVar8) {
              local_10 = pAVar8;
            }
            pAVar8 = param_1;
            pAVar3 = local_10;
            iVar4 = local_c;
            if (iVar6 <= local_8) goto LAB_00697b99;
          }
          local_c = iVar4;
          local_10 = pAVar3;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = pAVar8;
          local_8 = iVar6;
        }
LAB_00697b99:
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar2);
      if ((local_14 != 0) &&
         (local_14 == ((local_8 - local_c) + 1) * ((int)local_10 + (1 - (int)param_1)))) {
        *param_2 = (int)param_1;
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
void __thiscall st::fn_00697CF0(void *this,int param_1,int param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint local_EAX_231;
  int iVar4;
  undefined2 *puVar5;
  short *psVar6;
  uint local_EAX_1023;
  uint local_EAX_1070;
  uint local_EAX_1102;
  int iVar7;
  uint uVar4;
  uint uVar8;
  uint local_EAX_1988;
  uint local_EAX_2126;
  uint local_EAX_2144;
  uint local_EAX_2175;
  uint local_EAX_2197;
  uint local_EAX_2223;
  uint local_EAX_2245;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  AnonShape_00697CF0_36737CA3 *pAVar15;
  undefined4 *puVar16;
  int iVar17;
  bool bVar18;
  int local_c4;
  undefined1 local_c0 [4];
  uint local_bc;
  int local_b8;
  undefined1 *local_b4;
  uint local_ac;
  int local_a8;
  AnonShape_00697CF0_36737CA3 *local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  int local_90;
  uint local_88;
  int local_84;
  int local_80;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 *local_64;
  int local_5c;
  uint local_58;
  int local_50;
  uint local_48;
  int local_44;
  uint local_3c;
  int local_38;
  int local_2c;
  undefined1 *local_28;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079d798;
  puStack_10 = &st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff14;
  iVar13 = 0;
  local_6c = 0;
  local_48 = 0;
  local_5c = 0;
  local_ac = 0;
  local_b8 = 0;
  local_68 = 0;
  if (STField<int>(this,0x5853) != 0) {
    iVar4 = *(int *)(STField<int>(this,0x5853) + 0xc);
    local_8 = 0;
    ExceptionList = &local_14;
    local_70 = iVar4;
    st::fn_0072DA40();
    local_8 = 0xffffffff;
    local_88 = 0;
    local_28 = &stack0xffffff14;
    puVar2 = &stack0xffffff14;
    local_1c = &stack0xffffff14;
    puVar3 = &stack0xffffff14;
    if (0 < iVar4) {
      do {
        puVar2 = local_28;
        puVar3 = local_1c;
        if (param_1 < 1) break;
        iVar4 = STField<int>(this,0x5853);
        if (local_88 < *(uint *)(iVar4 + 0xc)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pAVar15 = (AnonShape_00697CF0_36737CA3 *)
                    (*(int *)(iVar4 + 8) * local_88 + *(int *)(iVar4 + 0x1c));
        }
        else {
          pAVar15 = nullptr;
        }
        local_a4 = pAVar15;
        if ((*(int *)pAVar15 == 0) && (pAVar15->field_0005 < 1)) {
          if (pAVar15->field_0015 != 0) {
            local_EAX_231 = st::fn_0072E6C0();
            local_a0 = (int)local_EAX_231 % 6 + 1;
            local_74 = 0;
            local_90 = 0;
            local_94 = 0;
            iVar4 = pAVar15->field_0015;
            uVar9 = *(uint *)(iVar4 + 0xc);
            if (0 < (int)uVar9) {
              do {
                if (local_94 < uVar9) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  pbVar14 = (byte *)(*(int *)(iVar4 + 8) * local_94 + *(int *)(iVar4 + 0x1c));
                }
                else {
                  pbVar14 = nullptr;
                }
                if (pbVar14 != nullptr) {
                  local_90 = local_90 + 1;
                  iVar4 = *(int *)(pbVar14 + 2) / STField<int>(this,0x5833);
                  uVar11 = *(int *)(pbVar14 + 2) % STField<int>(this,0x5833);
                  uVar9 = uVar11;
                  iVar13 = iVar4;
                  uVar12 = uVar11;
                  if (local_94 == 0) {
LAB_00697e8c:
                    local_48 = uVar12;
                    local_5c = iVar13;
                    local_ac = uVar9;
                    local_b8 = iVar4;
                  }
                  else {
                    if ((int)uVar11 < (int)local_48) {
                      local_48 = uVar11;
                    }
                    if (iVar4 < local_5c) {
                      local_5c = iVar4;
                    }
                    if ((int)local_ac < (int)uVar11) {
                      local_ac = uVar11;
                    }
                    uVar9 = local_ac;
                    iVar13 = local_5c;
                    uVar12 = local_48;
                    if (local_b8 < iVar4) goto LAB_00697e8c;
                  }
                  if ((*pbVar14 & 1) != 0) {
                    local_74 = local_74 + 1;
                    st::fn_0040204F(uVar11,iVar4,0,1,0,1,local_a0);
                  }
                }
                local_94 = local_94 + 1;
                iVar4 = local_a4->field_0015;
                uVar9 = *(uint *)(iVar4 + 0xc);
                iVar13 = local_6c;
              } while ((int)local_94 < (int)uVar9);
            }
            if (local_90 != 0) {
              puVar5 = (undefined2 *)(local_28 + iVar13 * 0x10);
              *puVar5 = (undefined2)local_88;
              puVar5[1] = (short)local_90;
              *(int *)(puVar5 + 2) = local_74;
              puVar5[4] = (undefined2)local_48;
              puVar5[5] = (undefined2)local_ac;
              puVar5[6] = (undefined2)local_5c;
              puVar5[7] = (undefined2)local_b8;
              iVar13 = iVar13 + 1;
              local_6c = iVar13;
            }
          }
        }
        else if (0 < *(int *)pAVar15) break;
        local_88 = local_88 + 1;
        puVar2 = local_28;
        puVar3 = local_1c;
      } while ((int)local_88 < local_70);
    }
    local_1c = puVar3;
    local_28 = puVar2;
    if (iVar13 != 0) {
      local_8 = 1;
      st::fn_0072DA40();
      local_b4 = &stack0xffffff14;
      local_1c = &stack0xffffff14;
      st::fn_0072DA40();
      local_8 = 0xffffffff;
      local_a8 = iVar13 * 2;
      local_1c = &stack0xffffff14;
      local_64 = (undefined4 *)&stack0xffffff14;
      while ((0 < param_2 && (iVar13 = local_6c, 0 < local_a8))) {
        local_a8 = local_a8 + -1;
        local_80 = st::fn_004012D5((int)local_28,local_6c,0x10,4,3);
        iVar13 = local_6c;
        if (-1 < local_80) {
          psVar6 = (short *)(local_28 + local_80 * 0x10);
          iVar13 = STField<int>(this,0x5853);
          if ((uint)(int)*psVar6 < *(uint *)(iVar13 + 0xc)) {
            local_a4 = (AnonShape_00697CF0_36737CA3 *)
                       (*(int *)(iVar13 + 8) * (int)*psVar6 + *(int *)(iVar13 + 0x1c));
          }
          else {
            local_a4 = nullptr;
          }
          local_38 = ((int)psVar6[5] - (int)psVar6[4]) + 1;
          local_44 = ((int)psVar6[7] - (int)psVar6[6]) + 1;
          puVar16 = local_64;
          for (uVar9 = (local_44 * local_38 & 0x7fffffffU) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar16 = 0xffffffff;
            puVar16 = puVar16 + 1;
          }
          for (uVar9 = local_44 * local_38 * 2 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar16 = 0xff;
            puVar16 = (undefined4 *)((int)puVar16 + 1);
          }
          local_94 = 0;
          iVar13 = local_a4->field_0015;
          if (0 < *(int *)(iVar13 + 0xc)) {
            bVar18 = *(int *)(iVar13 + 0xc) != 0;
            do {
              if (bVar18) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                pbVar14 = (byte *)(*(int *)(iVar13 + 8) * local_94 + *(int *)(iVar13 + 0x1c));
              }
              else {
                pbVar14 = nullptr;
              }
              if ((*pbVar14 & 1) != 0) {
                *(undefined2 *)
                 /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                 ((int)local_64 +
                 (((*(int *)(pbVar14 + 2) / STField<int>(this,0x5833) -
                   (int)*(short *)(local_28 + local_80 * 0x10 + 0xc)) * local_38 -
                  (int)*(short *)(local_28 + local_80 * 0x10 + 8)) +
                 *(int *)(pbVar14 + 2) % STField<int>(this,0x5833)) * 2) = 0;
              }
              local_94 = local_94 + 1;
              iVar13 = local_a4->field_0015;
              bVar18 = local_94 < *(uint *)(iVar13 + 0xc);
            } while ((int)local_94 < (int)*(uint *)(iVar13 + 0xc));
          }
          local_EAX_1023 = st::fn_0072E6C0();
          local_9c = local_EAX_1023 & 0x80000007;
          if ((int)local_9c < 0) {
            local_9c = (local_9c - 1 | 0xfffffff8) + 1;
          }
          local_c4 = 10;
          local_3c = 0xffffff9c;
          local_98 = -100;
          local_EAX_1070 = st::fn_0072E6C0();
          local_58 = local_EAX_1070 & 0x80000003;
          if ((int)local_58 < 0) {
            local_58 = (local_58 - 1 | 0xfffffffc) + 1;
          }
          do {
            iVar13 = local_a4->field_0015;
            uVar9 = *(uint *)(iVar13 + 0xc);
            local_EAX_1102 = st::fn_0072E6C0();
            uVar12 = (int)local_EAX_1102 % (int)uVar9;
            puVar1 = (&PTR_DAT_007d7f70)[local_9c];
            if (uVar12 < uVar9) {
              iVar13 = *(int *)(iVar13 + 8) * uVar12 + *(int *)(iVar13 + 0x1c);
            }
            else {
              iVar13 = 0;
            }
            local_84 = *(int *)(iVar13 + 2) / STField<int>(this,0x5833);
            local_78 = *(int *)(iVar13 + 2) % STField<int>(this,0x5833);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar13 = (int)*(short *)(local_28 + local_80 * 0x10 + 0xc);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if ((((iVar13 <= local_84) && (local_84 < *(short *)(local_28 + local_80 * 0x10 + 0xe)))
                && (iVar4 = (int)*(short *)(local_28 + local_80 * 0x10 + 8), iVar4 <= (int)local_78)
                ) && ((int)local_78 < (int)*(short *)(local_28 + local_80 * 0x10 + 10))) {
              local_68 = 1;
              iVar17 = local_58 * 0xe4;
              if (*(int *)(puVar1 + iVar17) < 1) {
                local_68 = 0;
              }
              else {
                local_94 = 0;
                do {
                  iVar7 = local_94 * 0x1c + iVar17;
                  iVar10 = (*(int *)(puVar1 + iVar7 + 4) - iVar4) + local_78;
                  iVar7 = (*(int *)(puVar1 + iVar7 + 8) - iVar13) + local_84;
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  if ((((-1 < iVar10) && (iVar10 < local_38)) &&
                      ((-1 < iVar7 && (iVar7 < local_44)))) &&
                     ((((int)local_78 < iVar4 ||
                       ((int)*(short *)(local_28 + local_80 * 0x10 + 10) < (int)local_78)) ||
                      ((local_84 < iVar13 ||
                       ((*(short *)(local_28 + local_80 * 0x10 + 0xe) < local_84 ||
                        (*(short *)((int)local_64 + (iVar7 * local_38 + iVar10) * 2) != 0)))))))) {
                    local_68 = 0;
                    break;
                  }
                  local_94 = local_94 + 1;
                } while ((int)local_94 < *(int *)(puVar1 + iVar17));
              }
              iVar13 = local_84;
              uVar9 = local_78;
              if (local_68 == 1) break;
            }
            local_c4 = local_c4 + -1;
            iVar13 = local_98;
            uVar9 = local_3c;
          } while (0 < local_c4);
          local_3c = uVar9;
          local_98 = iVar13;
          iVar13 = local_6c;
          if (local_68 != 0) {
            iVar4 = local_58 * 0xe4;
            st::fn_00404EF8(this,local_3c,local_98,*(int *)(puVar1 + iVar4 + 4) + local_3c,
                               *(int *)(puVar1 + iVar4 + 8) + local_98,0,1);
            iVar13 = 0;
            if (*(int *)(puVar1 + iVar4) != 1 && -1 < *(int *)(puVar1 + iVar4) + -1) {
              do {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar7 = *(int *)(puVar1 + (local_58 * 0x39 + iVar13) * 4 + 0xcc) * 0x1c + iVar4;
                iVar17 = *(int *)(puVar1 + (local_58 * 0x39 + iVar13) * 4 + 200) * 0x1c + iVar4;
                st::fn_00404EF8(this,*(int *)(puVar1 + iVar17 + 4) + local_3c,
                                   *(int *)(puVar1 + iVar17 + 8) + local_98,
                                   *(int *)(puVar1 + iVar7 + 4) + local_3c,
                                   *(int *)(puVar1 + iVar7 + 8) + local_98,0,1);
                iVar13 = iVar13 + 1;
              } while (iVar13 < *(int *)(puVar1 + iVar4) + -1);
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = param_2 + -1;
            *(undefined4 *)(local_28 + local_80 * 0x10 + 4) = 0;
            iVar13 = local_6c;
          }
        }
      }
    }
    local_a8 = iVar13 * 3;
    for (; (-1 < param_1 && (0 < local_a8)); local_a8 = local_a8 + -1) {
      uVar4 = st::fn_0072E6C0();
      iVar4 = STField<int>(this,0x5853);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((uint)(int)*(short *)(local_28 + ((int)uVar4 % iVar13) * 0x10) < *(uint *)(iVar4 + 0xc)) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_a4 = (AnonShape_00697CF0_36737CA3 *)
                   (*(int *)(iVar4 + 8) * (int)*(short *)(local_28 + ((int)uVar4 % iVar13) * 0x10) +
                   *(int *)(iVar4 + 0x1c));
      }
      else {
        local_a4 = nullptr;
      }
      if ((((*(int *)local_a4 == 0) && (local_a4->field_0005 < 2)) && (3 < local_a4->field_0011)) &&
         (local_a4->field_0015 != 0)) {
        local_50 = local_a4->field_0011 / 10 + 1;
        iVar13 = local_a4->field_0015;
        uVar9 = *(uint *)(iVar13 + 0xc);
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
              iVar13 = *(int *)(iVar13 + 8) * uVar12 + *(int *)(iVar13 + 0x1c);
            }
            else {
              iVar13 = 0;
            }
            if (iVar13 != 0) {
              iVar4 = *(int *)(iVar13 + 2) / STField<int>(this,0x5833);
              uVar12 = *(int *)(iVar13 + 2) % STField<int>(this,0x5833);
              local_EAX_1988 = st::fn_0072E6C0();
              uVar9 = local_EAX_1988 & 0x80000003;
              if ((int)uVar9 < 0) {
                uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
              }
              if (uVar9 == 1) {
                st::fn_0040414C(STField<int *>(this,8),uVar12,iVar4,0,(int)local_c0);
                bVar18 = false;
                iVar13 = st::fn_004019B0(STField<int *>(this,8),uVar12,iVar4,0,0xff);
                if ((iVar13 == 0) ||
                   ((((local_bc & 0x2000) == 0x2000 && ((local_bc & 0xf) == 0)) &&
                    ((local_bc & 0x4000) == 0)))) {
                  bVar18 = true;
                }
                if (bVar18) {
                  local_EAX_2126 = st::fn_0072E6C0();
                  if ((int)local_EAX_2126 % 6 == 1) {
                    local_EAX_2144 = st::fn_0072E6C0();
                    uVar11 = (int)local_EAX_2144 % 3 + 1;
                    iVar17 = 0;
                    iVar13 = 1;
                    uVar9 = 1;
                    iVar7 = 0;
                  }
                  else if ((int)local_EAX_2126 % 6 == 2) {
                    local_EAX_2223 = st::fn_0072E6C0();
                    uVar11 = (int)local_EAX_2223 % 6 + 1;
                    iVar17 = 0;
                    iVar13 = 0xff;
                    local_EAX_2245 = st::fn_0072E6C0();
                    uVar9 = local_EAX_2245 & 0x80000001;
                    if ((int)uVar9 < 0) {
                      uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
                    }
                    uVar9 = uVar9 + 1;
                    iVar7 = 1;
                  }
                  else {
                    local_EAX_2175 = st::fn_0072E6C0();
                    uVar11 = (int)local_EAX_2175 % 6 + 1;
                    iVar17 = 0;
                    iVar13 = 0xff;
                    local_EAX_2197 = st::fn_0072E6C0();
                    uVar9 = local_EAX_2197 & 0x80000001;
                    if ((int)uVar9 < 0) {
                      uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
                    }
                    uVar9 = uVar9 + 2;
                    iVar7 = 0;
                  }
                  st::fn_0040204F(uVar12,iVar4,iVar7,uVar9,iVar13,iVar17,uVar11);
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_1 = param_1 + -1;
                  local_50 = local_50 + -1;
                  if ((local_50 < 1) || (param_1 < 1)) break;
                }
              }
            }
            local_94 = local_94 + 1;
            iVar13 = local_a4->field_0015;
            uVar9 = *(uint *)(iVar13 + 0xc);
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
uint __cdecl st::fn_00698DB0(int param_1,int param_2)

{
  if (*(uint *)(param_1 + 6) < *(uint *)(param_2 + 6)) {
    return 0xffffffff;
  }
  return (uint)(*(uint *)(param_2 + 6) < *(uint *)(param_1 + 6));
}

// 00698DE0 FUN_00698de0
#line 4 "decomp/ST.exe/functions/00698DE0/decomp.c"
int st::fn_00698DE0(undefined1 *param_1,uint param_2,int param_3,undefined4 param_4,int param_5,
                int param_6,int param_7)

{
  short *psVar1;
  int iVar2;
  undefined1 *puVar3;
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
  st::fn_00730810(param_1,param_2,10,st::fn_00404A93);
  iVar2 = *(int *)(param_1 + param_2 * 10 + -4);
  uVar5 = 0;
  uVar4 = param_2;
  if (0 < (int)param_2) {
    puVar7 = (uint *)(param_1 + 6);
    do {
      uVar4 = uVar5;
      if ((uint)(((100 - param_7) * iVar2) / 100) < *puVar7) break;
      uVar5 = uVar5 + 1;
      *puVar7 = iVar2 - *puVar7;
      puVar7 = (uint *)((int)puVar7 + 10);
      uVar4 = param_2;
    } while ((int)uVar5 < (int)param_2);
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_2 = uVar4;
  if (0 < param_3) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_7 = param_3;
    psVar6 = (short *)(param_6 + 4);
    do {
      local_EAX_152 = st::fn_004012D5((int)puVar3,param_2,10,6,10);
      psVar8 = psVar6;
      if (-1 < local_EAX_152) {
        psVar8 = psVar6 + 5;
        psVar1 = (short *)(puVar3 + local_EAX_152 * 10);
        psVar6[-2] = *(short *)(puVar3 + local_EAX_152 * 10);
        psVar6[-1] = psVar1[1];
        local_8 = local_8 + 1;
        *psVar6 = psVar1[2];
        if (-1 < (int)param_2) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (undefined1 *)(param_2 + 1);
          puVar7 = (uint *)(puVar3 + 6);
          do {
            iVar5 = st::fn_006ACF90((int)*psVar1,(int)psVar1[1],(int)*(short *)((int)puVar7 + -6),
                                 (int)(short)puVar7[-1]);
            if (iVar5 < 7) {
              if (iVar5 < 3) {
                *puVar7 = 0;
              }
              else {
                *puVar7 = *puVar7 / (uint)(iVar5 * param_5);
              }
            }
            puVar7 = (uint *)((int)puVar7 + 10);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = param_1 + -1;
          } while (param_1 != nullptr);
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_7 = param_7 + -1;
      psVar6 = psVar8;
    } while (param_7 != 0);
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
  undefined1 local_c [4];
  uint local_8;

  iVar4 = param_2 / 2;
  iVar3 = param_1 / 2;
  iVar1 = st::fn_0040414C(STField<int *>(this,8),iVar3,iVar4,param_3,(int)local_c);
  if ((((local_8 & 0x2000) != 0) || ((short)local_8 == 0x1100)) && ((local_8 & 0x4000) == 0)) {
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
int __thiscall
st::fn_0069B530(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
            int *param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *local_98;
  int *local_94;
  int local_90;
  int local_80;
  int local_34;
  int local_2c;
  int local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079d7f8;
  puStack_10 = &st_image_0072D964;
  local_14 = ExceptionList;
  local_2c = 0;
  local_80 = 0;
  iVar2 = (param_4 - param_2) + 1;
  iVar9 = (param_5 - param_3) + 1;
  iVar5 = iVar9 * iVar2;
  local_8 = 0;
  iVar8 = STField<int>(this,0x5847);
  ExceptionList = &local_14;
  st::fn_0072DA40();
  local_8 = 0xffffffff;
  local_34 = 0;
  if (0 < iVar8) {
    local_90 = 0;
    do {
      iVar8 = STField<int>(this,0x582f);
      if (param_5 < iVar9) {
        local_94 = (int *)(&stack0xffffff5c + (iVar5 * param_5 + local_90) * 4);
        iVar7 = param_5;
        do {
          if (0 < iVar2) {
            iVar3 = ((iVar7 + param_3) * STField<int>(this,0x5833) + local_34 * iVar8 + param_2)
                    * 2;
            piVar4 = local_94;
            iVar6 = iVar2;
            do {
              *piVar4 = (int)*(short *)(iVar3 + STField<int>(this,0x584f));
              iVar3 = iVar3 + 2;
              piVar4 = piVar4 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          iVar7 = iVar7 + 1;
          local_94 = local_94 + iVar5;
        } while (iVar7 < iVar9);
      }
      local_34 = local_34 + 1;
      local_90 = local_90 + iVar5;
    } while (local_34 < STField<int>(this,0x5847));
  }
  if (local_34 < STField<int>(this,0x5847)) {
    do {
      iVar8 = local_34 * iVar5;
      local_24 = iVar8;
      for (iVar9 = param_3; iVar9 <= param_5; iVar9 = iVar9 + 1) {
        if (param_3 != iVar9) {
          iVar8 = iVar8 + iVar2;
          local_24 = iVar8;
        }
        if (param_2 <= param_4) {
          iVar6 = 0;
          local_98 = (int *)(&stack0xffffff5c + iVar8 * 4);
          iVar7 = param_2;
          do {
            iVar3 = STField<int>(this,0x5833);
            if ((((iVar7 < iVar3) && (iVar7 + 1 < iVar3)) && (iVar9 < iVar3)) && (iVar9 + 1 < iVar3)
               ) {
              iVar1 = iVar6 + 1 + iVar8;
              iVar3 = iVar6 + iVar2 + iVar8;
              iVar8 = iVar6 + 1 + iVar2 + iVar8;
              if (*local_98 == 1) {
                if (((*(int *)(&stack0xffffff5c + iVar1 * 4) == 1) &&
                    (*(int *)(&stack0xffffff5c + iVar3 * 4) == 1)) &&
                   (*(int *)(&stack0xffffff5c + iVar8 * 4) == 1)) {
                  *local_98 = 4;
                  *(undefined4 *)(&stack0xffffff5c + iVar1 * 4) = 4;
                  *(undefined4 *)(&stack0xffffff5c + iVar3 * 4) = 4;
                  *(undefined4 *)(&stack0xffffff5c + iVar8 * 4) = 4;
                  local_80 = local_80 + 1;
                }
                else {
                  local_2c = local_2c + 1;
                }
              }
            }
            iVar7 = iVar7 + 1;
            local_98 = local_98 + -1;
            iVar6 = iVar6 + -1;
            iVar8 = local_24;
          } while (iVar7 <= param_4);
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
  ExceptionList = local_14;
  return local_80 + local_2c;
}

// 0069B8D0 FUN_0069b8d0
#line 4 "decomp/ST.exe/functions/0069B8D0/decomp.c"
uint __cdecl st::fn_0069B8D0(int param_1,int param_2)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_2 + 0x2c) < *(int *)(param_1 + 0x2c)) {
    return 0xffffffff;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(*(int *)(param_1 + 0x2c) < *(int *)(param_2 + 0x2c));
}

// 0069B910 FUN_0069b910
#line 1 "decomp/ST.exe/functions/0069B910/decomp.c"

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
        iVar3 = *(int *)(iVar10 + 0x3c);
        iVar9 = *(int *)(iVar10 + 0x34);
        if ((local_8 != 0) && (local_14 = 0, 0 < local_8)) {
          local_1c = param_3;
          do {
            if (*local_1c == local_18) {
              bVar4 = false;
              break;
            }
            iVar8 = *local_1c * 0x40 + param_1;
            iVar6 = st::fn_006ACF90((iVar2 - iVar1) / 2 + iVar1,(iVar3 - iVar9) / 2 + iVar9,
                                 (*(int *)(iVar8 + 0x38) - *(int *)(iVar8 + 0x30)) / 2 +
                                 *(int *)(iVar8 + 0x30),
                                 (*(int *)(iVar8 + 0x3c) - *(int *)(iVar8 + 0x34)) / 2 +
                                 *(int *)(iVar8 + 0x34));
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
            if (param_6 <= *(int *)(iVar10 + 0x2c)) {
              iVar11 = *(int *)(iVar10 + 0x38);
              iVar1 = *(int *)(iVar10 + 0x30);
              bVar4 = true;
              iVar2 = *(int *)(iVar10 + 0x3c);
              iVar3 = *(int *)(iVar10 + 0x34);
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
                                     *(int *)(iVar9 + 0x38) / 2 + *(int *)(iVar9 + 0x30),
                                     *(int *)(iVar9 + 0x3c) / 2 + *(int *)(iVar9 + 0x34));
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
      iVar2 = iVar2 + *(int *)(iVar5 + 0x2c);
      iVar7 = (*(int *)(iVar5 + 0x38) - *(int *)(iVar5 + 0x30)) / 2 + *(int *)(iVar5 + 0x30);
      iVar5 = (*(int *)(iVar5 + 0x3c) - *(int *)(iVar5 + 0x34)) / 2 + *(int *)(iVar5 + 0x34);
      if (local_1c < param_3) {
        local_14 = param_3 - local_1c;
        local_8 = param_2;
        do {
          local_8 = local_8 + 1;
          iVar6 = *local_8 * 0x40 + param_1;
          iVar4 = st::fn_006ACF90(iVar7,iVar5,
                               (*(int *)(iVar6 + 0x38) - *(int *)(iVar6 + 0x30)) / 2 +
                               *(int *)(iVar6 + 0x30),
                               (*(int *)(iVar6 + 0x3c) - *(int *)(iVar6 + 0x34)) / 2 +
                               *(int *)(iVar6 + 0x34));
          if (iVar4 < local_c) {
            local_c = iVar4;
          }
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      iVar3 = st::fn_006ACF90(iVar7,iVar5,*STField<int *>(this,8),(STField<int *>(this,8))[1]);
      local_10 = local_10 + iVar3;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
  undefined4 uVar3;
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
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = local_c;
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
                  param_2[-1] = 0xff;
                  *(undefined1 *)((int)param_2 + -6) = 1;
                  goto LAB_0069c428;
                }
                iVar6 = iVar6 + 1;
                pbVar8 = pbVar8 + 1;
              } while (iVar6 < 0x14);
              pbVar4 = pbVar4 + (int)piVar2 * 0x14;
              local_18 = (int *)((int)local_18 + 1);
            } while ((int)local_18 < 0x14);
            param_2[-1] = local_2c;
            *(undefined1 *)((int)param_2 + -6) = 0;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_0069c428:
            *param_2 = -1;
            param_2[1] = -1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = (int *)((int)param_2 + 0xe);
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
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = nullptr;
        if (0 < (int)piVar2) {
          local_8 = local_18;
          uVar7 = local_2c;
          do {
            local_30 = *local_8;
            local_28 = uVar7;
            iVar5 = st::fn_00405C81(local_20,local_14 + (int)param_2,(int)piVar2,local_58,
                                       nullptr);
            iVar6 = 0;
            local_24 = 0;
            if (0 < iVar5) {
              local_c = local_58;
              local_1c = iVar5;
              do {
                iVar5 = *local_c;
                if (((*(int *)(param_1 + 2 + iVar5 * 0xe) == local_30) &&
                    (iVar6 = iVar6 + 1, -1 < iVar5 % (int)piVar2 - (int)param_2)) &&
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
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = (int *)((int)param_2 + 1);
            uVar7 = uVar7 + 0xe;
            local_8 = (int *)((int)local_8 + 0xe);
            iVar5 = local_34;
          } while ((int)param_2 < (int)piVar2);
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
          if (uVar5 < *(uint *)(iVar3 + 0xc)) {
            piVar4 = (int *)(*(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c));
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

uint st::fn_0069C710(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;

  iVar3 = param_3;
  uVar4 = 0xffffffff;
  if (param_3 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar4 = st::fn_006AE1C0(*(DArrayTy **)(param_3 + 0xc),&param_2);
    if (-1 < (int)uVar4) {
      pbVar1 = (byte *)(param_1 + 1 + param_2 * 0xe);
      bVar2 = *pbVar1;
      if ((bVar2 & 4) == 0) {
        if ((bVar2 & 8) != 0) {
          *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
        }
      }
      else {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
        if ((*pbVar1 & 8) != 0) {
          *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
          return uVar4;
        }
      }
    }
  }
  return uVar4;
}

// 0069C790 FUN_0069c790
#line 1 "decomp/ST.exe/functions/0069C790/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0069C8B0 -> 0069C790 @ 0069C9FA */

int st::fn_0069C790(uint *param_1,int param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_c;
  int local_8;

  local_c = 0;
  if (param_3 < param_1[3]) {
    local_8 = param_1[2] * param_3 + param_1[7];
  }
  else {
    local_8 = 0;
  }
  if (param_4 < param_1[3]) {
    iVar5 = param_1[2] * param_4 + param_1[7];
  }
  else {
    iVar5 = 0;
  }
  iVar3 = 0;
  if ((local_8 != 0) && (iVar5 != 0)) {
    iVar3 = *(int *)(iVar5 + 0xc);
    uVar4 = 0;
    uVar2 = *(uint *)(iVar3 + 0xc);
    if (0 < (int)uVar2) {
      do {
        if (uVar4 < uVar2) {
          piVar1 = (int *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c));
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
        iVar3 = *(int *)(iVar5 + 0xc);
        uVar4 = uVar4 + 1;
        uVar2 = *(uint *)(iVar3 + 0xc);
      } while ((int)uVar4 < (int)uVar2);
    }
    st::fn_006AE110(*(DArrayTy **)(iVar5 + 0xc));
    st::fn_00403337((DArrayTy *)param_1,param_2,param_4);
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
  void *pvVar2;
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
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = local_18;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = local_1c;
        local_14 = local_20;
        local_28 = param_2;
        do {
          uVar4 = 0xffffffff;
          local_24 = *local_14;
          local_30 = st::fn_00405C81(local_8,param_1,param_2,local_68,nullptr);
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
              pvVar2 = DArrayAt<void>(array, uVar6);
            }
            else {
              pvVar2 = nullptr;
            }
            uVar5 = st::fn_00402AE0(iVar1,param_1,(int)pvVar2);
            if (-1 < (int)uVar5) {
              *(int *)(param_3 + 10 + iVar1) = uVar6;
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
                      (pvVar2 = DArrayAt<void>(array, uVar8),
                      pvVar2 != nullptr)) &&
                     (uVar3 = st::fn_00402AE0(iVar1,param_1,(int)pvVar2), -1 < (int)uVar3)) {
                    *(uint *)(param_3 + 10 + iVar1) = uVar8;
                  }
                }
                else if (uVar4 != uVar8) {
                  uVar8 = *(uint *)(iVar1 + 10 + local_68[local_10] * 0xe);
                  uVar7 = uVar4;
                  if ((int)uVar8 < (int)uVar4) {
                    uVar7 = uVar8;
                    uVar8 = uVar4;
                  }
                  st::fn_00405BEB(&array->flags,iVar1,uVar7,uVar8);
                  break;
                }
              }
              local_10 = local_10 + 1;
              local_c = local_c + 1;
            } while (local_10 < local_30);
            if ((int)uVar4 < 0) goto LAB_0069ca03;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = param_3 + 0xe;
          local_14 = (int *)((int)local_14 + 0xe);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = param_1 + 1;
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
void __thiscall st::fn_0069E4D0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint local_EAX_45;
  int iVar2;
  uint local_EAX_74;
  uint uVar2;
  uint local_EAX_356;
  uint uVar5;
  uint local_EAX_397;
  uint local_EAX_509;
  uint local_EAX_611;
  uint local_EAX_628;
  uint uVar4;
  uint local_EAX_985;
  uint local_EAX_1105;
  uint local_EAX_1189;
  uint uVar3;
  uint local_EAX_1261;
  uint local_EAX_1550;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
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

  piVar10 = local_70;
  local_18 = this;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar10 = 0;
    piVar10 = piVar10 + 1;
  }
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_3c[2] = 0;
  local_3c[3] = 0;
  local_c = 0;
  local_10 = 0;
  do {
    local_EAX_45 = st::fn_0072E6C0();
    iVar6 = (int)local_EAX_45 % 9 + -8 + local_c;
    iVar2 = st::fn_006AFF50(iVar6);
    local_EAX_74 = st::fn_006AFF5B(iVar6);
    uVar2 = st::fn_0072E6C0();
    iVar6 = (int)uVar2 % 0x33 + 0xb4;
    iVar2 = (iVar6 * iVar2) / 10000;
    iVar9 = (int)(iVar6 * local_EAX_74) / 10000;
    iVar6 = iVar2 + param_2;
    iVar7 = iVar6 / 100;
    local_28 = param_3 + iVar9;
    iVar1 = local_28 / 100;
    if ((((0 < iVar7) && (iVar7 < param_4 + -1)) && (0 < iVar1)) && (iVar1 < param_5 + -1)) {
      iVar7 = iVar1 * param_4 + iVar7;
      local_14 = (int *)(param_1 + 6 + iVar7 * 0xe);
      if (*local_14 < 0) {
        local_1c = st::fn_00405C81(local_18,iVar7,param_4,local_a0,nullptr);
        iVar7 = 0;
        if (0 < local_1c) {
          local_8 = local_a0;
          do {
            if (*(int *)(param_1 + 2 + *local_8 * 0xe) != 0) goto LAB_0069e69c;
            iVar7 = iVar7 + 1;
            local_8 = local_8 + 1;
          } while (iVar7 < local_1c);
        }
        local_EAX_356 = st::fn_0072E6C0();
        piVar10 = local_14;
        uVar5 = local_EAX_356 & 0x80000003;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
        }
        if (0 < (int)uVar5) {
          *(undefined4 *)((int)local_70 + local_10) = 1;
          *piVar10 = 0x3ef;
          local_EAX_397 = st::fn_0072E6C0();
          st::fn_00402856(local_18,iVar6,local_28,0,0x3ef,local_EAX_397 % (DAT_007d934c - 2U));
          *(short *)((int)asStack_c4 + local_10) = (short)iVar2;
          *(short *)((int)asStack_c4 + local_10 + 2) = (short)iVar9;
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
    iVar6 = (int)local_EAX_509 % 9;
    if (local_70[iVar6] == 0) {
      iVar2 = 0;
      do {
        iVar6 = iVar6 + 1;
        if (8 < iVar6) {
          iVar6 = 0;
        }
      } while ((local_70[iVar6] < 1) && (iVar2 = iVar2 + 1, iVar2 < 9));
    }
    local_24 = local_70 + iVar6;
    if (0 < local_70[iVar6]) {
      local_28 = (int)asStack_c4[iVar6 * 2];
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_3c[4] = (int)*(short *)((int)local_a0 + iVar6 * 4 + -0x22);
      local_10 = 0;
      local_20 = iVar6 * 0x28;
      do {
        iVar6 = local_20;
        local_EAX_611 = st::fn_0072E6C0();
        iVar6 = (int)local_EAX_611 % 0x79 + -0x3c + iVar6;
        local_EAX_628 = st::fn_0072E6C0();
        iVar9 = (int)local_EAX_628 % 0x29 + 0xaa;
        iVar2 = st::fn_006AFF50(iVar6);
        iVar2 = (iVar9 * iVar2) / 10000 + local_28;
        uVar4 = st::fn_006AFF5B(iVar6);
        iVar9 = (int)(uVar4 * iVar9) / 10000 + local_3c[4];
        local_14 = (int *)((iVar2 + param_2) / 100);
        iVar6 = (iVar9 + param_3) / 100;
        if (((0 < iVar2 + param_2) && (0 < iVar9 + param_3)) &&
           ((-1 < (int)local_14 &&
            ((((int)local_14 < param_4 && (-1 < iVar6)) && (iVar6 < param_5)))))) {
          int scalar_local_14 = iVar6 * param_4 + (int)local_14; /* split integer lifetime from pointer-typed SSA storage */
          iVar6 = param_1 + scalar_local_14 * 0xe;
          if ((*(int *)(iVar6 + 6) < 0) && (*(int *)(iVar6 + 2) == 0)) {
            local_1c = st::fn_00405C81(local_18,scalar_local_14,param_4,local_a0,nullptr);
            iVar6 = local_c;
            int scalar_piVar10 = scalar_local_14;
            iVar7 = 0;
            if (local_1c < 1) {
LAB_0069e887:
              *(undefined4 *)((int)local_3c + local_c) = 1;
              *(undefined4 *)(param_1 + 6 + scalar_piVar10 * 0xe) = 0x3ef;
              local_EAX_985 = st::fn_0072E6C0();
              st::fn_00402856(local_18,iVar2 + param_2,iVar9 + param_3,0,0x3ef,
                                 local_EAX_985 % (DAT_007d934c - 4U) + 4);
              piVar10 = local_24;
              *(short *)((int)asStack_4c + iVar6) = (short)iVar2;
              *(short *)((int)asStack_4c + iVar6 + 2) = (short)iVar9;
              local_c = iVar6 + 4;
              *piVar10 = 0;
              break;
            }
            piVar8 = local_a0;
            while ((iVar1 = param_1 + *piVar8 * 0xe, *(int *)(iVar1 + 2) == 0 ||
                   (*(int *)(iVar1 + 6) < 1))) {
              iVar7 = iVar7 + 1;
              piVar8 = piVar8 + 1;
              if (local_1c <= iVar7) goto LAB_0069e887;
            }
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
      iVar6 = 0;
      do {
        uVar5 = uVar5 + 1;
        if (3 < (int)uVar5) {
          uVar5 = 0;
        }
      } while ((local_70[uVar5] < 1) && (iVar6 = iVar6 + 1, iVar6 < 4));
    }
    if (0 < local_3c[uVar5]) {
      int scalar_local_24 = (int)asStack_4c[uVar5 * 2]; /* split integer lifetime from pointer-typed SSA storage */
      local_20 = (int)asStack_4c[uVar5 * 2 + 1];
      local_10 = 0;
      do {
        local_EAX_1189 = st::fn_0072E6C0();
        uVar3 = st::fn_0072E6C0();
        iVar2 = (int)uVar3 % 0x1f + 0x8c;
        iVar6 = st::fn_006AFF50((int)local_EAX_1189 % 0x169);
        iVar9 = (iVar2 * iVar6) / 10000 + scalar_local_24;
        local_EAX_1261 = st::fn_006AFF5B((int)local_EAX_1189 % 0x169);
        iVar7 = (int)(local_EAX_1261 * iVar2) / 10000 + local_20;
        iVar6 = (iVar9 + param_2) / 100;
        iVar2 = (param_3 + iVar7) / 100;
        if ((((0 < iVar6) && (iVar6 < param_4 + -1)) && (0 < iVar2)) && (iVar2 < param_5 + -1)) {
          local_14 = (int *)(iVar2 * param_4 + iVar6);
          iVar6 = param_1 + (int)local_14 * 0xe;
          if ((*(int *)(iVar6 + 6) < 0) && (*(int *)(iVar6 + 2) == 0)) {
            local_1c = st::fn_00405C81(local_18,(int)local_14,param_4,local_a0,nullptr);
            iVar6 = local_c;
            piVar10 = local_14;
            iVar2 = 0;
            if (local_1c < 1) {
LAB_0069eab9:
              *(undefined4 *)((int)auStack_d0 + local_c) = 1;
              *(undefined4 *)(param_1 + 6 + (int)piVar10 * 0xe) = 0x3ef;
              local_EAX_1550 = st::fn_0072E6C0();
              st::fn_00402856(local_18,iVar9 + param_2,iVar7 + param_3,0,0x3ef,
                                 local_EAX_1550 % (DAT_007d934c - 5U) + 5);
              *(short *)((int)auStack_7c + iVar6) = (short)iVar9;
              *(short *)((int)auStack_7c + iVar6 + 2) = (short)iVar7;
              local_c = iVar6 + 4;
              break;
            }
            piVar8 = local_a0;
            while ((iVar1 = param_1 + *piVar8 * 0xe, *(int *)(iVar1 + 2) == 0 ||
                   (*(int *)(iVar1 + 6) < 1))) {
              iVar2 = iVar2 + 1;
              piVar8 = piVar8 + 1;
              if (local_1c <= iVar2) goto LAB_0069eab9;
            }
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
  undefined4 uVar2;
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
  st::fn_004026E4(this);
  if (0 < param_1) {
    do {
      uVar1 = st::fn_0072E6C0();
      iVar3 = (int)uVar1 % (STField<int>(this,0x5833) * 100 + -99);
      uVar1 = st::fn_0072E6C0();
      local_c = (int)uVar1 % (STField<int>(this,0x5837) * 100 + -99);
      uVar2 = st::fn_004036ED(this,iVar3 / 200,local_c / 200,param_2);
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
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  st::fn_00403805(this);
  return;
}

// 0069F160 FUN_0069f160
#line 4 "decomp/ST.exe/functions/0069F160/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall st::fn_0069F160(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar6;
  uint uVar4;
  uint local_EAX_583;
  uint uVar3;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int local_a8;
  int local_a4;
  int local_98;
  int local_78;
  int local_74;
  int local_68;
  int local_58;
  int local_54 [10];
  uint local_2c;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d828;
  puStack_10 = &st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff40;
  local_58 = 0;
  uVar7 = (param_3 + 1) * param_1 * param_2;
  iVar1 = param_1 * param_2;
  if (100 < param_4) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = 100;
  }
  ExceptionList = &local_14;
  _DAT_00853dd0 = st::fn_0072E6C0();
  local_8 = 0;
  st::fn_0072DA40();
  local_1c = &stack0xffffff40;
  st::fn_0072DA40();
  local_8 = 0xffffffff;
  puVar11 = (undefined4 *)&stack0xffffff40;
  local_1c = &stack0xffffff40;
  for (uVar5 = (uVar7 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  for (uVar5 = uVar7 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar11 = 0;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  st::fn_00405D0D(this,(int)&stack0xffffff40,param_3 + 1);
  puVar11 = (undefined4 *)&stack0xffffff40;
  for (uVar5 = (uVar7 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  for (uVar7 = uVar7 * 2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar11 = 0;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  st::fn_0040564B(this,param_1);
  _DAT_00853dd0 = st::fn_0072E6C0();
  if (1 < param_3) {
    iVar10 = iVar1 * 2;
    local_98 = param_3 + -1;
    iVar14 = iVar1;
    do {
      if (-1 < param_2) {
        local_a4 = param_2 + 1;
        iVar9 = iVar10;
        iVar13 = iVar14;
        do {
          if (-1 < param_1) {
            local_a8 = param_1 + 1;
            iVar8 = iVar9;
            iVar12 = iVar13;
            do {
              if ((*(short *)(&stack0xffffff40 + iVar8) == 0) &&
                 (iVar2 = st::fn_0040208B(this,iVar12,(int)local_54), 0 < iVar2)) {
                piVar6 = local_54;
                do {
                  if (*(short *)(&stack0xffffff40 + *piVar6 * 2) != 0) {
                    *(short *)(&stack0xffffff40 + iVar8) = *(short *)(&stack0xffffff40 + iVar8) + 1;
                  }
                  piVar6 = piVar6 + 1;
                  iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
              }
              iVar8 = iVar8 + 2;
              iVar12 = iVar12 + 1;
              local_a8 = local_a8 + -1;
            } while (local_a8 != 0);
          }
          iVar9 = iVar9 + param_1 * 2;
          iVar13 = iVar13 + param_1;
          local_a4 = local_a4 + -1;
        } while (local_a4 != 0);
      }
      iVar14 = iVar14 + iVar1;
      iVar10 = iVar10 + iVar1 * 2;
      local_98 = local_98 + -1;
    } while (local_98 != 0);
  }
  _DAT_00853dd0 = st::fn_0072E6C0();
  local_74 = 0;
  local_78 = 0;
  iVar10 = (STField<int *>(this,8))[1];
  iVar14 = *STField<int *>(this,8);
  if (0 < param_4) {
    do {
      if (param_4 * 100 <= local_74) break;
      uVar6 = st::fn_0072E6C0();
      uVar4 = st::fn_0072E6C0();
      uVar7 = (int)uVar4 % param_1;
      local_EAX_583 = st::fn_0072E6C0();
      local_2c = (int)local_EAX_583 % param_2;
      local_68 = 0;
      if (0 < param_3) {
        iVar9 = local_2c * param_1;
        uVar5 = (int)uVar6 % param_3;
        do {
          uVar15 = uVar5 + 1;
          iVar13 = uVar15 * iVar1 + iVar9 + uVar7;
          if (((*(short *)(&stack0xffffff40 + iVar13 * 2) == 0) &&
              (*(short *)(DAT_00853dd4 +
                         (uVar7 + uVar5 * iVar10 * iVar14 * 4 +
                         *STField<int *>(this,8) * local_2c * 2) * 2) == 0)) &&
             (uVar3 = st::fn_0072E6C0(),
             1 < (int)uVar3 % (*(short *)(&stack0xffffff40 + iVar13 * 2) + 3))) {
            st::fn_004047E6(this,uVar7,local_2c,uVar5);
            *(undefined2 *)(&stack0xffffff40 + iVar13 * 2) = 0xffff;
            local_58 = local_58 + 1;
            local_78 = local_78 + 1;
            break;
          }
          if (param_3 <= (int)uVar15) {
            uVar15 = 0;
          }
          local_68 = local_68 + 1;
          uVar5 = uVar15;
        } while (local_68 < param_3);
      }
      local_74 = local_74 + 1;
    } while (local_78 < param_4);
  }
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
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_3 = 0;
  puVar4 = st::fn_00405A56(*(Global_sub_00692C10_param_1Enum *)(&DAT_007d7f90 + uVar3 * 8),
                              *(int *)(&DAT_007d7f94 + uVar3 * 8),&param_3,uVar1,0);
  puVar4[5] = param_1;
  puVar4[6] = param_2;
  st::fn_00404822(this,(byte *)puVar4,param_3);
  return;
}

// 0069F660 FUN_0069f660
#line 4 "decomp/ST.exe/functions/0069F660/decomp.c"
void st::fn_0069F660(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,uint *param_6)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
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
  puVar2 = st::fn_006AAC70((iVar1 + iVar11) * 4 + 8);
  if (puVar2 == nullptr) {
    return;
  }
  iVar10 = 0;
  if (iVar11 < iVar1) {
    iVar3 = -iVar1;
    puVar5 = puVar2;
    for (; (iVar3 = iVar11 * 2 + iVar3, param_2 != param_4 || (param_3 != param_5));
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + iVar4) {
      *puVar5 = (short)param_2;
      puVar5[1] = (short)param_3;
      iVar9 = iVar10 + 1;
      puVar6 = puVar5 + 2;
      if (-1 < iVar3) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + iVar4;
        iVar9 = iVar10 + 2;
        puVar5[3] = (short)param_3;
        puVar6 = puVar5 + 4;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
  undefined4 local_8;

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
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = *piVar1;
      iVar2 = 0;
      local_8 = 0;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = param_1;
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
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_4 = iVar5;
              break;
            }
            iVar5 = iVar5 + 1;
            piVar4 = (int *)((int)piVar4 + param_3);
          } while (iVar5 < param_2);
          if (param_1 < iVar2) {
            local_8 = param_4;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = iVar2;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_5 = param_5 + -1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
  undefined2 *puVar2;
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
    local_28 = st::fn_006AAC70(iVar3 * 4);
    if (local_28 != nullptr) {
      local_20 = 1;
      bVar13 = param_4 != param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = param_4;
      *local_28 = (short)param_4;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = iVar7;
      local_28[1] = (short)iVar7;
      puVar2 = local_28;
      if ((bVar13) || (iVar7 != param_7)) {
        do {
          local_38 = puVar2 + 2;
          sVar11 = 30000;
          psVar6 = &DAT_007d8012;
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
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_5 = local_3c;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
    local_1c = st::fn_006AAC70(0x400);
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
            psVar4 = st::fn_006ACF50(local_18,(uint)local_38);
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
                      ((undefined4 *)(local_2c + 0x400 + (int)psVar4),
                       (AnonPointee_TLOBaseTy_0607 *)(uVar5 + (int)psVar4),uVar5);
            local_2c = uVar5;
          }
          psVar4 = local_10;
          psVar9 = psVar6;
          if ((iVar8 < param_2 + -1) && (*(short *)(iVar3 + 2) == 0)) {
            psVar9 = psVar6 + 2;
            *(short *)(iVar3 + 2) = (short)local_14;
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
  undefined4 uVar3;
  char local_cc [200];

  uVar3 = 0;
  if (param_1 != nullptr) {
    piVar1 = (int *)st::fn_0072EA70("ResRand.dat",&DAT_007d1d98);
    if (piVar1 != nullptr) {
      iVar2 = st::fn_00730050(piVar1,&DAT_007d1d88);
      if (0 < iVar2) {
        param_1->field_0004 = (int)param_1;
        st::fn_00730B10(local_cc,200,piVar1);
        iVar2 = st::fn_00730050(piVar1,&DAT_007d1d88);
        if (0 < iVar2) {
          param_1->field_0008 = (int)param_1;
          st::fn_00730B10(local_cc,200,piVar1);
          iVar2 = st::fn_00730050(piVar1,&DAT_007d1d88);
          if (0 < iVar2) {
            param_1->field_0014 = (int)param_1;
            st::fn_00730B10(local_cc,200,piVar1);
            iVar2 = st::fn_00730050(piVar1,&DAT_007d1d88);
            if (0 < iVar2) {
              param_1->field_000C = (int)param_1;
              st::fn_00730B10(local_cc,200,piVar1);
              iVar2 = st::fn_00730050(piVar1,&DAT_007d1d88);
              if (0 < iVar2) {
                param_1->field_0018 = (int)param_1;
                st::fn_00730B10(local_cc,200,piVar1);
                iVar2 = st::fn_00730050(piVar1,&DAT_007d1d88);
                if (0 < iVar2) {
                  param_1->field_0010 = (int)param_1;
                  st::fn_00730B10(local_cc,200,piVar1);
                  iVar2 = st::fn_00730050(piVar1,&DAT_007d1d88);
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

  st::fn_004038AA((AnonShape_00693910_1CC6632C *)((int)param_1 + 0x24e));
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

