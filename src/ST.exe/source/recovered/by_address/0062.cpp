#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0062.cpp

// 006201F0 FUN_006201f0
#line 4 "decomp/ST.exe/functions/006201F0/decomp.c"
undefined4 __thiscall st::fn_006201F0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;

  *param_1 = 0xffffffff;
  uVar3 = 0;
  uVar7 = 0;
  *param_2 = 0xffffffff;
  iVar5 = STField<int>(this,0xc5);
  uVar8 = 0xffffffff;
  if (((iVar5 != 0) && (iVar1 = *(int *)(iVar5 + 0xc), -1 < iVar1)) && (uVar6 = 0, 0 < iVar1)) {
    bVar9 = iVar1 != 0;
    do {
      if (bVar9) {
        puVar4 = (uint *)(*(int *)(iVar5 + 8) * uVar6 + *(int *)(iVar5 + 0x1c));
      }
      else {
        puVar4 = nullptr;
      }
      uVar2 = *puVar4;
      if ((uVar2 != 0) && (uVar7 < uVar2)) {
        uVar3 = 1;
        uVar7 = uVar2;
        uVar8 = uVar6;
      }
      uVar2 = *(uint *)(iVar5 + 0xc);
      uVar6 = uVar6 + 1;
      bVar9 = uVar6 < uVar2;
    } while ((int)uVar6 < (int)uVar2);
    if (-1 < (int)uVar8) {
      if (uVar8 < uVar2) {
        iVar5 = *(int *)(iVar5 + 8) * uVar8 + *(int *)(iVar5 + 0x1c);
      }
      else {
        iVar5 = 0;
      }
      *param_1 = *(undefined4 *)(iVar5 + 8);
      *param_2 = *(undefined4 *)(iVar5 + 0xc);
    }
  }
  return uVar3;
}

// 006205B0 FUN_006205b0
#line 4 "decomp/ST.exe/functions/006205B0/decomp.c"
undefined4 __thiscall st::fn_006205B0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;

  *param_1 = 0xffffffff;
  uVar3 = 0;
  uVar7 = 0;
  *param_2 = 0xffffffff;
  iVar5 = STField<int>(this,0xd1);
  uVar8 = 0xffffffff;
  if (((iVar5 != 0) && (iVar1 = *(int *)(iVar5 + 0xc), -1 < iVar1)) && (uVar6 = 0, 0 < iVar1)) {
    bVar9 = iVar1 != 0;
    do {
      if (bVar9) {
        puVar4 = (uint *)(*(int *)(iVar5 + 8) * uVar6 + *(int *)(iVar5 + 0x1c));
      }
      else {
        puVar4 = nullptr;
      }
      uVar2 = *puVar4;
      if ((uVar2 != 0) && (uVar7 < uVar2)) {
        uVar3 = 1;
        uVar7 = uVar2;
        uVar8 = uVar6;
      }
      uVar2 = *(uint *)(iVar5 + 0xc);
      uVar6 = uVar6 + 1;
      bVar9 = uVar6 < uVar2;
    } while ((int)uVar6 < (int)uVar2);
    if (-1 < (int)uVar8) {
      if (uVar8 < uVar2) {
        iVar5 = *(int *)(iVar5 + 8) * uVar8 + *(int *)(iVar5 + 0x1c);
      }
      else {
        iVar5 = 0;
      }
      *param_1 = *(undefined4 *)(iVar5 + 8);
      *param_2 = *(undefined4 *)(iVar5 + 0xc);
    }
  }
  return uVar3;
}

// 00620940 FUN_00620940
#line 4 "decomp/ST.exe/functions/00620940/decomp.c"
undefined4 __thiscall st::fn_00620940(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;

  *param_1 = 0xffffffff;
  uVar3 = 0;
  uVar7 = 0;
  *param_2 = 0xffffffff;
  iVar5 = STField<int>(this,0xdd);
  uVar8 = 0xffffffff;
  if (((iVar5 != 0) && (iVar1 = *(int *)(iVar5 + 0xc), -1 < iVar1)) && (uVar6 = 0, 0 < iVar1)) {
    bVar9 = iVar1 != 0;
    do {
      if (bVar9) {
        puVar4 = (uint *)(*(int *)(iVar5 + 8) * uVar6 + *(int *)(iVar5 + 0x1c));
      }
      else {
        puVar4 = nullptr;
      }
      uVar2 = *puVar4;
      if ((uVar2 != 0) && (uVar7 < uVar2)) {
        uVar3 = 1;
        uVar7 = uVar2;
        uVar8 = uVar6;
      }
      uVar2 = *(uint *)(iVar5 + 0xc);
      uVar6 = uVar6 + 1;
      bVar9 = uVar6 < uVar2;
    } while ((int)uVar6 < (int)uVar2);
    if (-1 < (int)uVar8) {
      if (uVar8 < uVar2) {
        iVar5 = *(int *)(iVar5 + 8) * uVar8 + *(int *)(iVar5 + 0x1c);
      }
      else {
        iVar5 = 0;
      }
      *param_1 = *(undefined4 *)(iVar5 + 8);
      *param_2 = *(undefined4 *)(iVar5 + 0xc);
    }
  }
  return uVar3;
}

// 00620CE0 FUN_00620ce0
#line 4 "decomp/ST.exe/functions/00620CE0/decomp.c"
undefined4 __thiscall st::fn_00620CE0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;

  *param_1 = 0xffffffff;
  uVar3 = 0;
  uVar7 = 0;
  *param_2 = 0xffffffff;
  iVar5 = STField<int>(this,0xe9);
  uVar8 = 0xffffffff;
  if (((iVar5 != 0) && (iVar1 = *(int *)(iVar5 + 0xc), -1 < iVar1)) && (uVar6 = 0, 0 < iVar1)) {
    bVar9 = iVar1 != 0;
    do {
      if (bVar9) {
        puVar4 = (uint *)(*(int *)(iVar5 + 8) * uVar6 + *(int *)(iVar5 + 0x1c));
      }
      else {
        puVar4 = nullptr;
      }
      uVar2 = *puVar4;
      if ((uVar2 != 0) && (uVar7 < uVar2)) {
        uVar3 = 1;
        uVar7 = uVar2;
        uVar8 = uVar6;
      }
      uVar2 = *(uint *)(iVar5 + 0xc);
      uVar6 = uVar6 + 1;
      bVar9 = uVar6 < uVar2;
    } while ((int)uVar6 < (int)uVar2);
    if (-1 < (int)uVar8) {
      if (uVar8 < uVar2) {
        iVar5 = *(int *)(iVar5 + 8) * uVar8 + *(int *)(iVar5 + 0x1c);
      }
      else {
        iVar5 = 0;
      }
      *param_1 = *(undefined4 *)(iVar5 + 8);
      *param_2 = *(undefined4 *)(iVar5 + 0xc);
    }
  }
  return uVar3;
}

// 00621120 FUN_00621120
#line 4 "decomp/ST.exe/functions/00621120/decomp.c"
undefined4 __thiscall st::fn_00621120(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;

  *param_1 = 0xffffffff;
  uVar3 = 0;
  uVar7 = 0;
  *param_2 = 0xffffffff;
  iVar5 = STField<int>(this,0xf5);
  uVar8 = 0xffffffff;
  if (((iVar5 != 0) && (iVar1 = *(int *)(iVar5 + 0xc), -1 < iVar1)) && (uVar6 = 0, 0 < iVar1)) {
    bVar9 = iVar1 != 0;
    do {
      if (bVar9) {
        puVar4 = (uint *)(*(int *)(iVar5 + 8) * uVar6 + *(int *)(iVar5 + 0x1c));
      }
      else {
        puVar4 = nullptr;
      }
      uVar2 = *puVar4;
      if ((uVar2 != 0) && (uVar7 < uVar2)) {
        uVar3 = 1;
        uVar7 = uVar2;
        uVar8 = uVar6;
      }
      uVar2 = *(uint *)(iVar5 + 0xc);
      uVar6 = uVar6 + 1;
      bVar9 = uVar6 < uVar2;
    } while ((int)uVar6 < (int)uVar2);
    if (-1 < (int)uVar8) {
      if (uVar8 < uVar2) {
        iVar5 = *(int *)(iVar5 + 8) * uVar8 + *(int *)(iVar5 + 0x1c);
      }
      else {
        iVar5 = 0;
      }
      *param_1 = *(undefined4 *)(iVar5 + 8);
      *param_2 = *(undefined4 *)(iVar5 + 0xc);
    }
  }
  return uVar3;
}

// 006214C0 FUN_006214c0
#line 4 "decomp/ST.exe/functions/006214C0/decomp.c"
undefined4 __thiscall st::fn_006214C0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;

  *param_1 = 0xffffffff;
  uVar3 = 0;
  uVar7 = 0;
  *param_2 = 0xffffffff;
  iVar5 = STField<int>(this,0x101);
  uVar8 = 0xffffffff;
  if (((iVar5 != 0) && (iVar1 = *(int *)(iVar5 + 0xc), -1 < iVar1)) && (uVar6 = 0, 0 < iVar1)) {
    bVar9 = iVar1 != 0;
    do {
      if (bVar9) {
        puVar4 = (uint *)(*(int *)(iVar5 + 8) * uVar6 + *(int *)(iVar5 + 0x1c));
      }
      else {
        puVar4 = nullptr;
      }
      uVar2 = *puVar4;
      if ((uVar2 != 0) && (uVar7 < uVar2)) {
        uVar3 = 1;
        uVar7 = uVar2;
        uVar8 = uVar6;
      }
      uVar2 = *(uint *)(iVar5 + 0xc);
      uVar6 = uVar6 + 1;
      bVar9 = uVar6 < uVar2;
    } while ((int)uVar6 < (int)uVar2);
    if (-1 < (int)uVar8) {
      if (uVar8 < uVar2) {
        iVar5 = *(int *)(iVar5 + 8) * uVar8 + *(int *)(iVar5 + 0x1c);
      }
      else {
        iVar5 = 0;
      }
      *param_1 = *(undefined4 *)(iVar5 + 8);
      *param_2 = *(undefined4 *)(iVar5 + 0xc);
    }
  }
  return uVar3;
}

// 00621640 FUN_00621640
#line 4 "decomp/ST.exe/functions/00621640/decomp.c"
uint __thiscall st::fn_00621640(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;

  uVar3 = 0xffffffff;
  *param_2 = 0;
  iVar1 = STField<int>(this,0x10a);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0xc);
    if (0 < (int)uVar2) {
      bVar6 = uVar2 != 0;
      uVar4 = uVar3;
      uVar3 = 0;
      while ((((!bVar6 || (iVar5 = *(int *)(iVar1 + 8) * uVar3 + *(int *)(iVar1 + 0x1c), iVar5 == 0)
               ) || (*(int *)(iVar5 + 9) != param_1)) ||
             (uVar4 = uVar3, g_playSystem_00802A38->field_00E4 - *(int *)(iVar5 + 1) < 0x2ef))) {
        uVar3 = uVar3 + 1;
        bVar6 = uVar3 < uVar2;
        if ((int)uVar2 <= (int)uVar3) {
          return uVar4;
        }
      }
      *param_2 = 1;
    }
  }
  return uVar3;
}

// 00621A70 FUN_00621a70
#line 4 "decomp/ST.exe/functions/00621A70/decomp.c"
void __fastcall st::fn_00621A70(AnonShape_00621A70_2531BB4B *param_1)

{
  int iVar1;
  uint index;
  char *pcVar2;
  int local_c;
  int local_8;

  index = 0;
  local_8 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((param_1->field_010A != 0) && (local_c = *(int *)(param_1->field_010A + 0xc), 0 < local_c)) {
    do {
      iVar1 = param_1->field_010A;
      if ((index < *(uint *)(iVar1 + 0xc)) &&
         (pcVar2 = (char *)(*(int *)(iVar1 + 8) * index + *(int *)(iVar1 + 0x1c)),
         pcVar2 != nullptr)) {
        if (((param_1->field_0105 != '\0') && (*pcVar2 == '\0')) &&
           (9 < g_playSystem_00802A38->field_00E4 - param_1->field_0106)) {
          /* ST_CALLSITE[00621ADC]: CALL 0x00401073; direct=00401073 SndUnderAttMenegC::sub_00621780 */
          st::fn_00401073((SndUnderAttMenegC *)param_1,index);
        }
        if (*(uint *)(pcVar2 + 1) < 0x5dd) {
          index = index + 1;
        }
        else {
          st::fn_006B0C70((DArrayTy *)param_1->field_010A,index);
        }
        if (*pcVar2 != '\0') {
          local_8 = local_8 + 1;
        }
      }
      local_c = local_c + -1;
    } while (local_c != 0);
    if (local_8 != 0) {
      return;
    }
  }
  param_1->field_0105 = 0;
  return;
}

// 006225D0 CreateSTMineSet
#line 4 "decomp/ST.exe/functions/006225D0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CAA04>00404E2B

   [STObjectFactoryApplier] Central object factory for 0x0158 (ST_OBJECT_ST_MINE_SET).
   Evidence: registry[92] at 007CAA00 stores type 0x0158 and executable pointer 00404E2B; allocation
   size 871 uniquely matches /STMineSetC */

STMineSetC * __cdecl st::fn_006225D0(void)

{
  STMineSetC *pSVar1;

  pSVar1 = (STMineSetC *)st::fn_006B04D0(0x367);
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_00405272(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 00623040 FUN_00623040
#line 4 "decomp/ST.exe/functions/00623040/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00623040 parameter used as this of
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00424E10::FUN_00424e10 @ 006230BC | 00623040
   parameter used as this of
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00424E10::FUN_00424e10 @ 0062311E

   [STTypeFamilyApplier] EXACT_NAMED_LAYOUT.
   Evidence: anonymous structure has an exact full-layout match to one unique named type */

int st::fn_00623040(AnonReceiver_004248D0 *param_1,undefined4 param_2,int *param_3,
                AnonShape_00623040_D312340A *param_4)

{
  int iVar1;
  int iVar3;
  int local_EAX_124;
  int iVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_4->field_0060 + 0x29);
  if ((iVar1 != 0) && (iVar3 = *(int *)(iVar1 + param_4->field_0070 * 4), iVar3 != 0)) {
    if (param_4->field_004F != '\0') {
      local_EAX_124 =
           st::fn_00403E1D
                     (param_1,iVar3,
                      (float)param_4->field_0064 * _DAT_007904f8 * _DAT_007904f0 - _DAT_007907a8,
                      (float)param_4->field_0068 * _DAT_007904f8 * _DAT_007904f0 - _DAT_007907a8,
                      (float)param_4->field_006C * _DAT_007904f8 * _DAT_007904f0,0x20,0x20,param_3);
      return local_EAX_124;
    }
    iVar2 = st::fn_00403E1D
                      (param_1,*(int *)(iVar1 + (uint)param_4->field_0078 * 4),
                       (float)param_4->field_0064 * _DAT_007904f8 * _DAT_007904f0 - _DAT_007907a8,
                       (float)param_4->field_0068 * _DAT_007904f8 * _DAT_007904f0 - _DAT_007907a8,
                       (float)param_4->field_006C * _DAT_007904f8 * _DAT_007904f0,0x20,0x20,param_3);
    return iVar2;
  }
  return -4;
}

// 00623600 FUN_00623600
#line 4 "decomp/ST.exe/functions/00623600/decomp.c"
void __fastcall st::fn_00623600(AnonShape_00623600_61226D23 *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  VisibleClassTy *pVVar5;
  int iVar6;
  int local_c;
  int local_8;

  pVVar5 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 == nullptr) {
    cVar2 = param_1->field_02E9;
  }
  else {
    iVar6 = (int)param_1->field_004B;
    if (((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
         /* ST_CALLSITE[0062364B]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
         (st::fn_00403F53
                    (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                     (int)param_1->field_0047,(int)param_1->field_0049,&local_8,&local_c), iVar6 < 0
         )) || ((((4 < iVar6 || (local_8 < 0)) ||
                 (((int)pVVar5->field_0030 <= local_8 ||
                  ((local_c = g_centeredOffsets5[iVar6] + local_c, local_c < 0 ||
                   (pVVar5->field_0034 <= local_c)))))) || (pVVar5->field_004C == nullptr)))) ||
       (pVVar5->field_004C[local_8 + local_c * pVVar5->field_0030] != 0)) {
      bVar4 = false;
      if (param_1->field_02AE == 0) {
        cVar2 = param_1->field_02AD;
        if ((cVar2 == '\x03') || (cVar2 == '\x02')) {
          if (param_1->field_030E == '\0') {
            if ((param_1->field_030A == 0) || ((g_playSystem_00802A38->field_00E4 & 1) == 0))
            goto LAB_0062371f;
            iVar6 = st::machine_word_boundary_cast<int>(param_1->field_030A + 1);
            param_1->field_030A = iVar6;
            if (iVar6 == 0x2f) {
              param_1->field_030A = 0;
            }
          }
          else if (((g_playSystem_00802A38->field_00E4 & 1) != 0) &&
                  (iVar6 = st::machine_word_boundary_cast<int>(param_1->field_030A + 1), param_1->field_030A = iVar6, iVar6 == 0x2f)) {
            param_1->field_030A = 0;
          }
          bVar4 = true;
        }
LAB_0062371f:
        if (((DAT_0080732c != 0) || (param_1->field_02CE != 0)) || (bVar4)) {
          if (((cVar2 != '\x03') && (cVar2 != '\x02')) ||
             ((g_playSystem_00802A38->field_00E4 & 1) != 0)) {
            param_1->field_02CE = st::machine_word_boundary_cast<undefined4>(param_1->field_02CE + 1);
          }
          if (param_1->field_02D2 <= (int)param_1->field_02CE) {
            param_1->field_02CE = 0;
          }
          puVar1 = &param_1->field_0x1d5;
          /* ST_CALLSITE[00623783]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
          st::fn_00401064((STT3DSprC *)puVar1,'\x0e',param_1->field_02CE);
          /* ST_CALLSITE[0062378C]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
          st::fn_004030BC((STT3DSprC *)puVar1,'\x0e');
          if (param_1->field_0352 != '\0') {
            /* ST_CALLSITE[006237A6]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
            st::fn_00401064((STT3DSprC *)puVar1,'\f',param_1->field_02CE);
            /* ST_CALLSITE[006237AF]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
            st::fn_004030BC((STT3DSprC *)puVar1,'\f');
          }
          if (DAT_00807326 != '\0') {
            bVar3 = param_1->field_02D6;
            goto LAB_00623863;
          }
        }
      }
      else {
        if (((param_1->field_02AD != '\x03') && (param_1->field_02AD != '\x02')) ||
           ((g_playSystem_00802A38->field_00E4 & 1) != 0)) {
          param_1->field_02CE = st::machine_word_boundary_cast<undefined4>(param_1->field_02CE + 1);
        }
        if (param_1->field_02D2 <= (int)param_1->field_02CE) {
          param_1->field_02CE = 0;
        }
        puVar1 = &param_1->field_0x1d5;
        /* ST_CALLSITE[00623820]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
        st::fn_00401064((STT3DSprC *)puVar1,'\x0e',param_1->field_02CE);
        /* ST_CALLSITE[00623829]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
        st::fn_004030BC((STT3DSprC *)puVar1,'\x0e');
        if (param_1->field_0352 != '\0') {
          /* ST_CALLSITE[00623843]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
          st::fn_00401064((STT3DSprC *)puVar1,'\f',param_1->field_02CE);
          /* ST_CALLSITE[0062384C]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
          st::fn_004030BC((STT3DSprC *)puVar1,'\f');
        }
        if (DAT_00807326 != '\0') {
          bVar3 = param_1->field_02D6;
LAB_00623863:
          /* ST_CALLSITE[00623867]: CALL 0x004052fe; direct=004052FE STT3DSprC::SetCurShad */
          st::fn_004052FE((STT3DSprC *)&param_1->field_0x1d5,'\x0e',(uint)bVar3);
        }
      }
      if (param_1->field_02E9 == '\0') {
        st::fn_00402982(&param_1->field_0x1d5,0);
        param_1->field_02E9 = 1;
        /* ST_CALLSITE[0062388D]: CALL dword ptr [EDX + 0xd8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(param_1->field_0000 + 0xd8))();
        return;
      }
      goto LAB_006238c2;
    }
    cVar2 = param_1->field_02E9;
  }
  if (cVar2 != '\0') {
    st::fn_00403D0F((STT3DSprC *)&param_1->field_0x1d5);
    param_1->field_02E9 = 0;
  }
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
LAB_006238c2:
  /* ST_CALLSITE[006238C6]: CALL dword ptr [EDX + 0xd8] */
  (**(code **)(param_1->field_0000 + 0xd8))();
  return;
}

// 00624000 FUN_00624000
#line 4 "decomp/ST.exe/functions/00624000/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006239A0 -> 00624000 @ 00623A79; STMineSetC::sub_006239A0 this; stable alias ESI

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_00624000(STMineSetC *param_1)

{
  undefined4 *this;
  STMineSetC_field_02ADState SVar1;
  ushort *puVar2;

  this = &param_1->field_01D5;
  /* ST_CALLSITE[0062400E]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
  st::fn_00404264((STT3DSprC *)this,0xe);
  if (param_1->field_0352 != '\0') {
    /* ST_CALLSITE[00624021]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
    st::fn_00404264((STT3DSprC *)this,0xc);
    SVar1 = param_1->field_02AD;
    if (((SVar1 == CASE_0) || (SVar1 == CASE_1)) || (SVar1 == CASE_2)) {
      /* ST_CALLSITE[0062403C]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      st::fn_00404264((STT3DSprC *)this,0xc);
    }
  }
  puVar2 = st::fn_00709AF0
                     (PTR_00806774,CASE_1D,(&PTR_s_expdeep_007d0354)[param_1->field_02AD],0xffffffff
                      ,0,1,0,nullptr);
  param_1->field_02CE = 0;
  param_1->field_02D2 = *(int *)puVar2;
  puVar2 = st::fn_00709AF0
                     (PTR_00806764,CASE_1D,st::pointer_boundary_cast<char *>((&PTR_CHAR_e_007d0374)[param_1->field_02AD]),0xffffffff,0,
                      1,0,nullptr);
  param_1->field_02DB = 0;
  param_1->field_02D7 = *(int *)puVar2;
  puVar2 = st::fn_00709AF0
                     (PTR_00806774,CASE_1D,st::pointer_boundary_cast<char *>((&PTR_CHAR_e_007d0364)[param_1->field_02AD]),0xffffffff,0,
                      1,0,nullptr);
  param_1->field_02E1 = 0;
  param_1->field_02E5 = *(undefined4 *)puVar2;
  return;
}

// 00624140 FUN_00624140
#line 4 "decomp/ST.exe/functions/00624140/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00624140 -> 006E3310 @ 00624383 | 006255B0 -> 00624140 @ 00625685; FUN_006255b0
   parameter param_5 */

undefined4 __thiscall
st::fn_00624140(void *this,int param_1,int param_2,Global_sub_0061BDB0_param_1Enum *param_3,int param_4
            ,int param_5,int param_6,int *param_7,int param_8)

{
  Global_sub_0061BDB0_param_1Enum *pGVar1;
  Global_sub_0061BDB0_param_1Enum *pGVar2;
  Global_sub_0061BDB0_param_1Enum *pGVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  undefined4 local_8;

  pGVar3 = param_3;
  local_8 = 0;
  *param_7 = param_6;
  if ((-1 < param_1) && (-1 < param_2)) {
    if ((int)param_3 < 0) goto LAB_00624457;
    if (((param_1 < g_worldGrid.sizeX) && (param_2 < g_worldGrid.sizeY)) && ((int)param_3 < 5)) {
      sVar8 = (short)param_1;
      sVar9 = (short)param_2;
      sVar10 = (short)param_3;
      iVar4 = st::fn_00404D3B(sVar8,sVar9,sVar10);
      if (iVar4 != 0) {
        return 0;
      }
      if (((((-1 < sVar8) && (sVar8 < g_worldGrid.sizeX)) &&
           ((-1 < sVar9 && ((sVar9 < g_worldGrid.sizeY && (-1 < sVar10)))))) &&
          (sVar10 < g_worldGrid.sizeZ)) &&
         (STGridAt3D(g_worldGrid, sVar8, sVar9, sVar10).objects[0] != nullptr)) {
        if (param_8 < 1) {
          iVar5 = (int)pGVar3 * 0xc9 + 0x32;
          if (iVar5 < param_6) {
            return 0;
          }
          *param_7 = iVar5;
          return 2;
        }
        sVar8 = STField<short>(this,0x34);
        iVar5 = STBiasedDiv16(sVar8, 0xc9); /* exact signed 16-bit grid-index division */
        if (iVar5 == STField<short>(this,0x47)) {
          sVar8 = STField<short>(this,0x36);
          iVar5 = STBiasedDiv16(sVar8, 0xc9); /* exact signed 16-bit grid-index division */
          if (iVar5 == STField<short>(this,0x49)) {
            sVar8 = STField<short>(this,0x38);
            iVar5 = STBiasedDiv16(sVar8, 200); /* exact signed 16-bit grid-index division */
            if (iVar5 == STField<short>(this,0x4b)) {
              return 0;
            }
          }
        }
        iVar5 = (int)pGVar3 * 0xc9 + 0x97;
        if (param_6 < iVar5) {
          return 0;
        }
        *param_7 = iVar5;
        return 2;
      }
      iVar5 = (STField<ST3DSMAPContext *>(this,0x211))->field_0380;
      st::fn_006E3310
                (STField<ST3DSMAPContext *>(this,0x211),(iVar5 * param_4) / 0xc9,
                 (int *)((iVar5 * param_5) / 0xc9),(int)pGVar3,(int *)&param_3);
      lVar7 = st::fn_0072E288();
      iVar5 = (int)(short)lVar7;
      pGVar1 = (Global_sub_0061BDB0_param_1Enum *)((int)pGVar3 + 1);
      pGVar2 = param_3;
      if ((int)param_3 <= (int)pGVar1) {
        pGVar2 = pGVar1;
      }
      if (param_8 < 0) {
        if (iVar5 < param_6) {
          return 0;
        }
        if ((((int)param_3 <= (int)pGVar1) && ((int)pGVar1 < 5)) &&
           (iVar6 = st::fn_00404D3B(sVar8,sVar9,sVar10 + 1), iVar6 == 0)) {
          return 3;
        }
        if ((int)pGVar2 * 200 < iVar5) {
          return 3;
        }
      }
      else {
        if (iVar5 <= param_6) {
          return 0;
        }
        if (((int)pGVar1 < 5) && (iVar6 = st::fn_00404D3B(sVar8,sVar9,sVar10 + -1), iVar6 != 0))
        {
          *param_7 = (int)pGVar3 * 200;
          return 1;
        }
      }
      *param_7 = iVar5;
      return 2;
    }
  }
  if (-1 < (int)param_3) {
    if ((int)param_3 < 5) {
      local_8 = 4;
    }
    return local_8;
  }
LAB_00624457:
  *param_7 = 0;
  return 2;
}

// 00624570 FUN_00624570
#line 4 "decomp/ST.exe/functions/00624570/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00624570_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

undefined4 __thiscall
st::fn_00624570(void *this,Global_sub_00624570_param_1Enum param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;

  uVar1 = 0;
  switch(param_1) {
  case CASE_0:
    STField<undefined1>(this,0x61) = 0;
    STField<undefined1>(this,0x62) = 0;
    STField<uint>(this,0x30f) = g_playSystem_00802A38->field_00E4;
    return 1;
  case CASE_1:
    break;
  case CASE_2:
    iVar2 = st::fn_006ACF0D(STField<int>(this,0x2c2),STField<int>(this,0x2c6),
                         STField<int>(this,0x2ca),param_2,param_3,param_4);
    STField<undefined4>(this,0x306) = 3;
    if (iVar2 < 1) {
      uVar1 = 2;
    }
    else {
      STField<int>(this,0x2f6) = iVar2;
      STField<undefined2>(this,0x3c) = (undefined2)param_3;
      STField<short>(this,0x3e) = (short)param_4;
      STField<int>(this,0x2fa) = ((param_2 - STField<int>(this,0x2c2)) * 10000) / iVar2;
      STField<int>(this,0x2fe) = ((param_3 - STField<int>(this,0x2c6)) * 10000) / iVar2;
      STField<undefined2>(this,0x34) = STField<undefined2>(this,0x2c2);
      STField<undefined2>(this,0x38) = STField<undefined2>(this,0x2ca);
      STField<undefined2>(this,0x3a) = (undefined2)param_2;
      STField<int>(this,0x302) = ((param_4 - STField<int>(this,0x2ca)) * 10000) / iVar2;
      STField<undefined2>(this,0x36) = STField<undefined2>(this,0x2c6);
      uVar1 = 1;
      STField<uint>(this,0x30f) = g_playSystem_00802A38->field_00E4;
    }
    STField<uint>(this,0x30f) = g_playSystem_00802A38->field_00E4;
    return uVar1;
  case CASE_3:
    iVar3 = STBiasedDiv16(param_4, 200); /* exact signed 16-bit grid-index division */
    if (iVar3 == STField<short>(this,0x4b)) {
      uVar1 = 2;
    }
    else {
      STField<short>(this,0x3e) = (short)param_4;
      uVar4 = STField<int>(this,0x2ca) - param_4;
      STField<undefined2>(this,0x36) = STField<undefined2>(this,0x2c6);
      STField<undefined4>(this,0x2fa) = 0;
      uVar5 = (int)uVar4 >> 0x1f;
      STField<undefined4>(this,0x2fe) = 0;
      STField<uint>(this,0x2f6) = (uVar4 ^ uVar5) - uVar5;
      STField<undefined2>(this,0x3a) = (undefined2)param_2;
      STField<undefined2>(this,0x3c) = (undefined2)param_3;
      STField<undefined2>(this,0x34) = STField<undefined2>(this,0x2c2);
      STField<undefined2>(this,0x38) = STField<undefined2>(this,0x2ca);
      STField<uint>(this,0x302) = ((STField<short>(this,0x4b) <= iVar3) - 1 & 0xfffffffe) + 1;
      STField<undefined4>(this,0x306) = 3;
      uVar1 = 1;
    }
    STField<uint>(this,0x30f) = g_playSystem_00802A38->field_00E4;
  default:
    return uVar1;
  }
  iVar3 = (uint)STField<byte>(this,0x2ad) * 4;
  if (*(int *)(&DAT_007d0398 + iVar3) == 0) {
    STField<undefined1>(this,0x62) = 0;
    STField<uint>(this,0x30f) = g_playSystem_00802A38->field_00E4;
    return 1;
  }
  if (STField<int>(this,0x302) == 0) {
    STField<undefined4>(this,0x302) = 1;
  }
  else {
    STField<uint>(this,0x302) = -(((STField<int>(this,0x302) < 1) - 1 & 2) - 1);
  }
  iVar3 = *(int *)(&DAT_007d0388 + iVar3);
  uVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(this,0x1c) = uVar4;
  STField<char>(this,0x62) =
       (&DAT_007d0388)[(uint)STField<byte>(this,0x2ad) * 4] -
       (char)((uVar4 >> 0x10) % (iVar3 / 3 + 1U));
  uVar4 = g_playSystem_00802A38->field_00E4;
  STField<undefined2>(this,0x34) = STField<undefined2>(this,0x2ca);
  STField<uint>(this,0x30f) = uVar4;
  return 1;
}

// 006253B0 FUN_006253b0
#line 4 "decomp/ST.exe/functions/006253B0/decomp.c"
undefined4
st::fn_006253B0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_20;
  int local_c;
  int local_8;

  local_8 = 1;
  if (0 < param_8) {
    iVar2 = param_3;
    do {
      iVar2 = iVar2 + -1;
      local_c = iVar2;
      if (iVar2 < 0) {
        local_c = 0;
      }
      iVar3 = iVar2 + (param_4 - param_3);
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      iVar1 = local_8 + param_3;
      iVar4 = iVar1;
      if (param_6 <= iVar1) {
        iVar4 = param_6 + -1;
      }
      iVar1 = iVar1 + (param_4 - param_3);
      if (param_7 <= iVar1) {
        iVar1 = param_7 + -1;
      }
      iVar5 = param_4 - iVar3;
      if (local_8 <= iVar5) {
        iVar3 = iVar3 + 1;
      }
      iVar6 = iVar1 - param_4;
      if (local_8 <= iVar6) {
        iVar1 = iVar1 + -1;
      }
      if (iVar3 <= iVar1) {
        local_20 = (iVar1 - iVar3) + 1;
        do {
          local_20 = local_20 + -1;
        } while (local_20 != 0);
      }
      if ((local_8 <= iVar5) && (local_c <= iVar4)) {
        iVar3 = (iVar4 - local_c) + 1;
        do {
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if ((local_8 <= iVar6) && (local_c <= iVar4)) {
        iVar3 = (iVar4 - local_c) + 1;
        do {
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_8 = local_8 + 1;
    } while (local_8 <= param_8);
    return 0;
  }
  return 0;
}

// 006255B0 FUN_006255b0
#line 4 "decomp/ST.exe/functions/006255B0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 5.
   Evidence: 006255B0 -> 00624140 @ 00625685 */

undefined4 __thiscall
st::fn_006255B0(void *this,int param_1,undefined4 param_2,int param_3,int param_4,
            Global_sub_0061BDB0_param_1Enum *param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;

  iVar1 = param_7;
  iVar2 = param_6;
  local_8 = 0;
  if (param_1 == 1) {
    iVar3 = st::fn_00405713(this,param_3,param_4,param_5,param_6,param_7,param_8,&param_6,0);
    if (iVar3 != 0) {
      STField<undefined4>(this,0x2c2) = STField<undefined4>(this,0x251);
      STField<undefined4>(this,0x2c6) = STField<undefined4>(this,0x255);
      STField<int>(this,0x2ca) = param_6;
      return param_2;
    }
    STField<int>(this,0x2c2) = iVar2;
    STField<int>(this,0x2c6) = iVar1;
    STField<int>(this,0x2ca) = param_6;
  }
  else if (((1 < param_1) && (param_1 < 4)) && (STField<int *>(this,0x245) != nullptr)) {
    /* ST_CALLSITE[00625602]: CALL dword ptr [EAX + 0xe0] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (**(code **)(*STField<int *>(this,0x245) + 0xe0))
                      (STField<undefined4>(this,0x249),(int)&param_1 + 2,(int)&param_8 + 2,
                       (int)&param_7 + 2,&local_8);
    if (iVar2 == 0) {
      STField<int>(this,0x255) = (int)STPiece<2,2>(param_8);
      STField<int>(this,0x2c6) = (int)STPiece<2,2>(param_8);
      STField<int>(this,0x251) = (int)STPiece<2,2>(param_1);
      STField<int>(this,0x259) = (int)STPiece<2,2>(param_7);
      STField<undefined4>(this,0x24d) = local_8;
      STField<int>(this,0x2c2) = (int)STPiece<2,2>(param_1);
      STField<int>(this,0x2ca) = (int)STPiece<2,2>(param_7);
      st::fn_004042C3(st::pointer_boundary_cast<STMineSetC *>(this));
      /* ST_CALLSITE[00625654]: CALL 0x004012c6; direct=004012C6 STMineSetC::LoadImagMineSet */
      st::fn_004012C6(st::pointer_boundary_cast<STMineSetC *>(this),1);
      return param_2;
    }
  }
  return param_2;
}

// 006263B0 FUN_006263b0
#line 4 "decomp/ST.exe/functions/006263B0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_006263B0_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_9=9;CASE_A=10;CASE_B=11;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_15=21;CASE_16=22;CASE_17=23;CASE_1C=28;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_36=54;CASE_3E=62;CASE_3F=63;CASE_42=66;CASE_46=70;CASE_47=71;CASE_4A=74;CASE_4B=75;CASE_6B=107
    */

undefined4 st::fn_006263B0(Global_sub_006263B0_param_1Enum param_1)

{
  switch(param_1) {
  case CASE_1:
  case CASE_2:
  case CASE_D:
  case CASE_E:
  case CASE_1E:
  case CASE_20:
  case CASE_24:
  case CASE_25:
    return 1;
  case CASE_3:
  case CASE_F:
  case CASE_10:
  case CASE_1F:
    return 2;
  case CASE_4:
  case CASE_9:
  case CASE_A:
  case CASE_15:
  case CASE_17:
  case CASE_1C:
    return 8;
  case CASE_5:
  case CASE_6:
  case CASE_B:
  case CASE_11:
  case CASE_12:
  case CASE_16:
  case CASE_21:
  case CASE_22:
  case CASE_23:
    return 4;
  default:
    return 0x20;
  case CASE_36:
  case CASE_3E:
  case CASE_3F:
  case CASE_42:
  case CASE_46:
  case CASE_47:
  case CASE_4A:
  case CASE_4B:
  case CASE_6B:
    return 0x10;
  }
}

// 006264D0 FUN_006264d0
#line 4 "decomp/ST.exe/functions/006264D0/decomp.c"
undefined4 __thiscall st::fn_006264D0(void *this,int *param_1,int param_2)

{
  uint32_t _local_44;
  uint32_t _local_50;

  byte bVar1;
  byte bVar2;
  STWorldObject *this_00;
  byte bVar3;
  int iVar5;
  int iVar4;
  int iVar6;
  int iVar7;
  short sVar8;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_EBX;
  int *piVar9;
  int *piVar10;
  short sVar11;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_ESI;
  short sVar12;
  undefined4 *puVar13;
  int iVar14;
  bool bVar15;
  undefined4 local_bc [6];
  undefined2 local_a2;
  undefined2 local_a0;
  undefined2 local_9e;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_96;
  undefined4 local_94;
  int local_8f;
  undefined2 local_8b;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  byte local_50;
  undefined3 uStack_4f;
  int local_4c;
  int local_48;
  byte local_44;
  undefined3 uStack_43;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  puVar13 = local_bc;
  local_18 = st::pointer_boundary_cast<int *>(this);
  for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  iVar4 = param_2 * 6;
  sVar8 = *(short *)(&DAT_007d046c + iVar4) + STField<short>(this,0x2c2);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  local_20 = STReplaceLowWord((uint32_t)(unaff_EBX), (uint16_t)(sVar8));
  sVar12 = *(short *)(&DAT_007d046e + iVar4) + STField<short>(this,0x2c6);
  local_54 = STReplaceLowWord((uint32_t)(puVar13), (uint16_t)(sVar12));
  sVar11 = *(short *)(&DAT_007d0470 + iVar4) + STField<short>(this,0x2ca);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  local_40 = STReplaceLowWord((uint32_t)(unaff_ESI), (uint16_t)(sVar11));
  if (param_1 == nullptr) {
    return 0;
  }
  st::fn_004031E3(param_1,&local_28,&local_24,(short *)&local_38);
  iVar4 = (int)sVar11;
  iVar14 = (int)sVar12;
  iVar5 = st::fn_006ACF0D((int)sVar8,iVar14,iVar4,(int)(short)local_28,(int)(short)local_24,
                       (int)(short)local_38);
  bVar3 = st::fn_004025AE(CASE_9B);
  local_10 = iVar5 / (int)(uint)bVar3;
  if (local_10 < 1) {
    local_10 = 1;
  }
  auto param_2_after_write = 1; /* compiler stack-slot lifetime split */
  piVar9 = local_18;
  local_1c = (int)(short)local_20;
  local_14 = iVar14;
  local_8 = iVar4;
  if (0 < local_10) {
    do {
      iVar4 = (((int)(short)local_28 - (int)(short)local_20) * param_2_after_write) / local_10 +
              (int)(short)local_20;
      local_34 = (((int)(short)local_24 - (int)(short)local_54) * param_2_after_write) / local_10 +
                 (int)(short)local_54;
      local_4c = (((int)(short)local_38 - (int)(short)local_40) * param_2_after_write) / local_10 +
                 (int)(short)local_40;
      local_60 = iVar4;
      local_c = st::fn_006ACF0D(local_1c,local_14,local_8,iVar4,local_34,local_4c);
      local_c = local_c / 0x32;
      if (local_c < 1) {
        local_c = 1;
      }
      local_48 = 1;
      if (0 < local_c) {
        local_5c = local_4c - local_8;
        local_64 = local_34 - local_14;
        local_58 = iVar4 - local_1c;
        piVar10 = piVar9;
        iVar14 = local_c;
        local_3c = local_5c;
        local_30 = local_58;
        local_2c = local_64;
        do {
          piVar9 = local_18;
          iVar4 = local_1c + local_30 / iVar14;
          iVar4 = STBiasedDiv16(iVar4, 0xc9); /* exact signed 16-bit grid-index division */
          iVar6 = local_14 + local_2c / iVar14;
          iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
          iVar7 = local_8 + local_3c / iVar14;
          iVar7 = STBiasedDiv16(iVar7, 200); /* exact signed 16-bit grid-index division */
          sVar8 = (short)iVar4;
          if (((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar11 = (short)iVar6, sVar11 < 0)
               ) || ((g_worldGrid.sizeY <= sVar11 || (sVar12 = (short)iVar7, sVar12 < 0)))) ||
             ((g_worldGrid.sizeZ <= sVar12 ||
              (this_00 = STGridAt3D(g_worldGrid, sVar8, sVar11, sVar12).objects[0],
              piVar10 = local_18, iVar14 = local_c, this_00 == nullptr)))) {
            piVar9 = piVar10;
            if (STGridAt3D(g_pathingGrid, iVar4, iVar6, iVar7) < 0) {
              return 0;
            }
          }
          else if (local_18[6] != *(int *)&this_00->field_0x18) {
            /* ST_CALLSITE[00626798]: CALL dword ptr [EDX + 0xf0] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            iVar4 = (**(code **)(*param_1 + 0xf0))();
            if (iVar4 == 0) {
              return 0;
            }
            if (((uint)param_1[9] < 8) &&
               ((g_playSystem_00802A38 == nullptr ||
                (g_bulkInitializedRecords_008087C7[param_1[9]].field_0022 < 8)))) {
              bVar3 = *(byte *)&this_00[1].vtable;
              bVar1 = ((byte *)piVar9)[9];
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              _local_50 = CONCAT31(uStack_4f,bVar3);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              _local_44 = CONCAT31(uStack_43,bVar1);
              if (DAT_00808a8f == '\0') {
                if (bVar3 == bVar1) {
LAB_0062687f:
                  iVar4 = 0;
                }
                else {
                  bVar2 = g_playerRelationMatrix[bVar3][bVar1];
                  if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar3] == 0)) {
                    iVar4 = -2;
                  }
                  else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar3] == 0)) {
                    iVar4 = -1;
                  }
                  else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar3] == 1)) {
                    iVar4 = 1;
                  }
                  else {
                    if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar3] != 1))
                    goto LAB_0062687f;
                    iVar4 = 2;
                  }
                }
                bVar15 = iVar4 < 0;
              }
              else {
                bVar15 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                         g_bulkInitializedRecords_008087C7[bVar3].field_0023;
              }
              if (!bVar15) {
                return 0;
              }
            }
            /* ST_CALLSITE[00626896]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
            iVar4 = this_00->vfunc_F8();
            iVar14 = local_c;
            if (iVar4 == 0) {
              return 0;
            }
          }
          local_30 = local_30 + local_58;
          local_2c = local_2c + local_64;
          local_48 = local_48 + 1;
          local_3c = local_3c + local_5c;
          piVar10 = piVar9;
          iVar4 = local_60;
        } while (local_48 <= iVar14);
      }
      local_14 = local_34;
      local_8 = local_4c;
      param_2_after_write = param_2_after_write + 1;
      local_1c = iVar4;
    } while (param_2_after_write <= local_10);
  }
  local_bc[3] = 1;
  local_bc[2] = 1;
  local_bc[1] = STField<undefined4>(piVar9,0x262);
  local_9e = (short)local_40;
  local_a2 = (short)local_20;
  local_98 = (undefined2)local_38;
  local_9c = (undefined2)local_28;
  local_9a = (undefined2)local_24;
  local_bc[0] = 0x28;
  local_a0 = (undefined2)local_54;
  local_94 = 0x9b;
  /* ST_CALLSITE[0062697A]: CALL dword ptr [EDI + 0x10] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  local_96 = (**(code **)(*piVar9 + 0x10))(local_20,local_54,local_40,local_28,local_24,local_38);
  local_8f = piVar9[6];
  local_8b = 0xffff;
  /* ST_CALLSITE[006269AB]: CALL 0x00401bc2; direct=00401BC2 STPlaySystemC::CreateGameObject */
  st::fn_00401BC2(g_playSystem_00802A38,0x28,0,0,st::machine_word_boundary_cast<undefined4>(local_bc),0);
  return 1;
}

// 00626BC0 FUN_00626bc0
#line 4 "decomp/ST.exe/functions/00626BC0/decomp.c"
void __thiscall st::fn_00626BC0(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;

  uVar2 = 0xffffffff;
  pcVar4 = (char *)((int)this + 0x28e);
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  memmove(param_1, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  return;
}

// 00626C00 FUN_00626c00
#line 4 "decomp/ST.exe/functions/00626C00/decomp.c"
void __thiscall st::fn_00626C00(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;
  char *pcVar4_mg1;
  char *pcVar4_mg0;

  uVar2 = 0xffffffff;
  pcVar4_mg0 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4_mg0;
    pcVar4_mg0 = pcVar4_mg0 + 1;
  } while (cVar1 != '\0');
  if (0xe < ~uVar2 - 1) {
    st::fn_0072E340((char *)((int)this + 0x28e),param_1,0xe);
    STField<undefined1>(this,0x29c) = 0;
    return;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar4_mg1 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4_mg1 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar4_mg1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4_mg1 + -uVar2;
  pcVar5 = (char *)((int)this + 0x28e);
  memmove(pcVar5, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  return;
}

// 00626C90 FUN_00626c90
#line 4 "decomp/ST.exe/functions/00626C90/decomp.c"
void __thiscall st::fn_00626C90(void *this,char *param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;

  if (STField<char>(this,0x2ad) == '\x02') {
    *param_1 = ((STField<uint>(this,0x262) != (uint)DAT_0080874d) - 1U & 0xfe) + 3;
  }
  else {
    *param_1 = '\x04';
  }
  cVar1 = STField<char>(this,0x21d);
  param_1[2] = '\x01';
  param_1[1] = cVar1;
  /* ST_CALLSITE[00626CD7]: CALL dword ptr [EAX + 0x2c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar3 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)(param_1 + 3) = uVar3;
  /* ST_CALLSITE[00626CE7]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar2 = st::fn_004049B7(STField<char>(this,0x24));
  param_1[7] = bVar2;
  *(undefined4 *)(param_1 + 8) = STField<undefined4>(this,0x18);
  st::fn_0072E340(param_1 + 0xc,(char *)((int)this + 0x28e),0xe);
  param_1[0x1b] = 'd';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = '\0';
  param_1[0x2e - STField<short>(this,0x4b)] = '\x01';
  if (STField<int>(this,0x2ae) != 4) {
    param_1[0x1d] = '\x01';
  }
  return;
}

// 00626D70 FUN_00626d70
#line 4 "decomp/ST.exe/functions/00626D70/decomp.c"
void __thiscall st::fn_00626D70(void *this,AnonShape_00626D70_1F4C15C4 *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;

  /* ST_CALLSITE[00626D79]: CALL dword ptr [EAX + 0x2c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar3 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)param_1 = uVar3;
  /* ST_CALLSITE[00626D8B]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar2 = st::fn_004049B7(STField<char>(this,0x24));
  param_1->field_0x4 = bVar2;
  if (STField<char>(this,0x2ad) == '\x02') {
    if (STField<uint>(this,0x262) == (uint)DAT_0080874d) {
      param_1->field_0005 = 1;
    }
    else {
      param_1->field_0005 = 3;
    }
    param_1->field_0009 = 0x4c;
    param_1->field_000F = STField<int>(this,0x2ae) != 4;
  }
  else {
    param_1->field_0005 = 4;
  }
  if (STField<char>(this,0x2ad) == '\x03') {
    iVar4 = ((STField<int>(this,0x35f) - g_playSystem_00802A38->field_00E4) + 0x1194) * 0x28;
    param_1[3].field_0x4 =
         ((char)(iVar4 / 0x1194) + (char)(iVar4 >> 0x1f)) -
         (char)((longlong)iVar4 * 0x7482296b >> 0x3f);
  }
  uVar1 = STField<undefined1>(this,0x21d);
  param_1->field_0006 = 1;
  param_1->field_0x8 = uVar1;
  if (STField<int>(this,0x2ae) != 4) {
    param_1->field_0007 = 1;
  }
  return;
}

// 00626E60 FUN_00626e60
#line 4 "decomp/ST.exe/functions/00626E60/decomp.c"
void __thiscall st::fn_00626E60(void *this,int param_1)

{
  int iVar1;
  uint uVar2;

  uVar2 = 1;
  iVar1 = 0;
  do {
    *(bool *)(iVar1 + param_1) = (STField<uint>(this,0x342) & uVar2) != 0;
    uVar2 = uVar2 << 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return;
}

// 00626EC0 FUN_00626ec0
#line 4 "decomp/ST.exe/functions/00626EC0/decomp.c"
undefined4 __fastcall st::fn_00626EC0(int param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  switch(((undefined1 *)param_1)[0x2ad]) {
  case 0:
    return 0xa6;
  case 1:
    return 0xa7;
  case 2:
    return 0xbd;
  case 3:
    uVar1 = 0xaf;
  }
  return uVar1;
}

// 00626F10 FUN_00626f10
#line 4 "decomp/ST.exe/functions/00626F10/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00626F10_param_1Enum. Cases:
   CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189 */

undefined4 st::fn_00626F10(Global_sub_00626F10_param_1Enum param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  switch(param_1) {
  case CASE_A6:
    return 0;
  case CASE_A7:
    return 1;
  case CASE_AF:
    uVar1 = 3;
    break;
  case CASE_BD:
    return 2;
  }
  return uVar1;
}

// 00626FC0 FUN_00626fc0
#line 4 "decomp/ST.exe/functions/00626FC0/decomp.c"
void __thiscall st::fn_00626FC0(void *this,char *param_1)

{
  byte bVar1;
  undefined4 uVar2;

  if (STField<int>(this,0x2ae) == 4) {
    *param_1 = '\x04';
  }
  else {
    *param_1 = ((STField<uint>(this,0x262) != (uint)DAT_0080874d) - 1U & 0xfe) + 3;
  }
  param_1[1] = '\x01';
  /* ST_CALLSITE[00626FFE]: CALL dword ptr [EDX + 0x2c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)(param_1 + 2) = uVar2;
  /* ST_CALLSITE[0062700E]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar1 = st::fn_004049B7(STField<char>(this,0x24));
  param_1[6] = bVar1;
  *(undefined4 *)(param_1 + 7) = STField<undefined4>(this,0x18);
  return;
}

// 00627050 FUN_00627050
#line 4 "decomp/ST.exe/functions/00627050/decomp.c"
void __thiscall st::fn_00627050(void *this,char *param_1)

{
  byte bVar1;
  undefined4 uVar2;

  if (STField<int>(this,0x2ae) == 4) {
    *param_1 = '\x04';
  }
  else {
    *param_1 = ((STField<uint>(this,0x262) != (uint)DAT_0080874d) - 1U & 0xfe) + 3;
  }
  param_1[1] = '\x01';
  /* ST_CALLSITE[0062708E]: CALL dword ptr [EDX + 0x2c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar2 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)(param_1 + 2) = uVar2;
  /* ST_CALLSITE[0062709E]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar1 = st::fn_004049B7(STField<char>(this,0x24));
  param_1[6] = bVar1;
  *(undefined4 *)(param_1 + 7) = STField<undefined4>(this,0x18);
  return;
}

// 006270E0 FUN_006270e0
#line 4 "decomp/ST.exe/functions/006270E0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_006270E0(void *this,int param_1,undefined1 *param_2)

{
  if (param_2 != nullptr) {
    if (param_1 == 0x15) {
      STField<undefined1>(this,0x35e) = *param_2;
      STField<undefined1>(this,0x359) = 1;
      STField<undefined4>(this,0x35a) = 0x15;
    }
    else if ((param_1 == 0x2a) && (STField<char>(this,0x2ad) == '\x02')) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (**(byte **)(param_2 + 0x17) == 0xff) {
        STField<undefined4>(this,0x342) = 0;
        return;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STField<uint>(this,0x342) =
           STField<uint>(this,0x342) ^ 1 << (**(byte **)(param_2 + 0x17) & 0x1f);
      return;
    }
  }
  return;
}

// 00627170 FUN_00627170
#line 4 "decomp/ST.exe/functions/00627170/decomp.c"
void __fastcall st::fn_00627170(AnonShape_00627170_DB470A34 *param_1)

{
  int iVar1;

  if ((param_1->field_035A == 0x15) && ((param_1->field_0355 & 1) != 0)) {
    if ((ushort)param_1->field_035E != param_1->field_004B) {
      iVar1 = st::fn_00404D6D(param_1,CASE_3,(int)param_1->field_003A,(int)param_1->field_003C,
                                 (short)((ushort)param_1->field_035E * 200 + 100) + -0x32);
      if (iVar1 != 0) {
        param_1->field_02EE = 3;
        param_1->field_02AE = 1;
      }
    }
    param_1->field_0359 = 0;
  }
  return;
}

// 00627200 FUN_00627200
#line 4 "decomp/ST.exe/functions/00627200/decomp.c"
undefined4 __thiscall
st::fn_00627200(void *this,undefined4 param_1,undefined2 *param_2,undefined2 *param_3,
            undefined2 *param_4,undefined4 *param_5)

{
  *param_2 = STField<undefined2>(this,0x2c2);
  *param_3 = STField<undefined2>(this,0x2c6);
  *param_4 = STField<undefined2>(this,0x2ca);
  *param_5 = 0;
  return 0;
}

// 00627250 FUN_00627250
#line 4 "decomp/ST.exe/functions/00627250/decomp.c"
undefined4 __fastcall st::fn_00627250(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1 + 0x2ae) != 0) && (*(int *)(param_1 + 0x2ae) != 1)) {
    return 0;
  }
  return 1;
}

// 00627280 FUN_00627280
#line 4 "decomp/ST.exe/functions/00627280/decomp.c"
undefined4 __thiscall st::fn_00627280(void *this,short param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = STField<int>(this,0x2c2) - (int)param_1;
  iVar3 = STField<int>(this,0x2c6) - (int)param_2;
  iVar4 = STField<int>(this,0x2ca) - (int)param_3;
  iVar1 = (uint)STField<byte>(this,0x2ad) * 6;
  if ((iVar2 * iVar2 * 1000) /
      ((int)*(short *)(&DAT_007d04a8 + iVar1) * (int)*(short *)(&DAT_007d04a8 + iVar1)) +
      (iVar3 * iVar3 * 1000) /
      ((int)*(short *)(&DAT_007d04aa + iVar1) * (int)*(short *)(&DAT_007d04aa + iVar1)) +
      (iVar4 * iVar4 * 1000) /
      ((int)*(short *)(&DAT_007d04ac + iVar1) * (int)*(short *)(&DAT_007d04ac + iVar1)) < 1000) {
    return 1;
  }
  return 0xffffffff;
}

// 00627390 FUN_00627390
#line 4 "decomp/ST.exe/functions/00627390/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00621B50 -> 00627390 @ 00622291

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_00627390(STMineSetC *param_1)

{
  if ((param_1->field_02AE == CASE_0) || (param_1->field_02AE == CASE_1)) {
    param_1->field_02AE = CASE_2;
    param_1->field_030F =
         ((int)(*(int *)(&DAT_007d02a4 + (uint)param_1->field_02AD * 4) +
               (*(int *)(&DAT_007d02a4 + (uint)param_1->field_02AD * 4) >> 0x1f & 3U)) >> 2) +
         g_playSystem_00802A38->field_00E4;
  }
  return;
}

// 00627650 FUN_00627650
#line 4 "decomp/ST.exe/functions/00627650/decomp.c"
void __thiscall st::fn_00627650(void *this,undefined4 param_1)

{
  STField<undefined4>(this,0x342) = param_1;
  return;
}

// 00627670 FUN_00627670
#line 4 "decomp/ST.exe/functions/00627670/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00624920 -> 00627670 @ 00624C4E; STMineSetC::sub_00624920 this; stable alias ESI

   [STSwitchEnumApplier] Switch target field_02AD uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_02ADState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189 */

undefined4 __fastcall st::fn_00627670(STMineSetC *param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  switch(param_1->field_02AD) {
  case CASE_0:
    return DAT_007e65a8;
  case CASE_1:
    return DAT_007e65bc;
  case CASE_2:
    return DAT_007e6774;
  case CASE_3:
    uVar1 = *(undefined4 *)(&DAT_007d0284 + param_1->field_034E * 4);
  }
  return uVar1;
}

// 00627700 FUN_00627700
#line 4 "decomp/ST.exe/functions/00627700/decomp.c"
void __fastcall st::fn_00627700(AnonShape_00627700_6F319351 *param_1)

{
  int iVar1;
  STMessage *pSVar2;
  STMessage local_24;

  if (g_aiBossClass_008117BC != nullptr) {
    pSVar2 = &local_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar2->unknown_00 = 0;
      pSVar2 = (STMessage *)&pSVar2->unknown_04;
    }
    local_24.arg0.words.low = param_1->field_0024;
    local_24.arg0.words.high = param_1->field_0032;
    local_24.arg1.words.low = param_1->field_0262;
    if (param_1->field_02A1 == 0) {
      local_24.arg1.words.high = 0xffff;
    }
    else {
      local_24.arg1.words.high = param_1->field_02A5;
    }
    local_24.id = 0x5de3;
    /* ST_CALLSITE[00627768]: CALL dword ptr [EDX] */
    g_aiBossClass_008117BC->GetMessage(&local_24);
  }
  return;
}

// 00627790 FUN_00627790
#line 4 "decomp/ST.exe/functions/00627790/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006239A0 -> 00627790 @ 00623B42; STMineSetC::sub_006239A0 this; stable alias ESI */

void __fastcall st::fn_00627790(STMineSetC *param_1)

{
  int iVar1;
  STMessage *pSVar2;
  STMessage local_28;
  int local_8;

  if (g_aiBossClass_008117BC != nullptr) {
    pSVar2 = &local_28;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar2->unknown_00 = 0;
      pSVar2 = (STMessage *)&pSVar2->unknown_04;
    }
    local_28.arg0.words.low = *(undefined2 *)&param_1->field_0024;
    local_28.arg0.words.high = param_1->field_0032;
    if ((((AnonShape_005EFAE0_B406B78B *)param_1->field_0241 == 0)
        || (iVar1 = st::fn_006E62D0
                              (g_playSystem_00802A38,
                               (AnonShape_005EFAE0_B406B78B *)param_1->field_0241,&local_8),
           iVar1 == -4)) || (local_8 == 0)) {
      local_28.arg1.words.low = 0xff;
      local_28.arg1.words.high = 0xffff;
    }
    else {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_28.arg1.words.low = *(word *)(local_8 + 0x24);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_28.arg1.words.high = *(word *)(local_8 + 0x32);
    }
    local_28.id = 0x5de4;
    /* ST_CALLSITE[00627816]: CALL dword ptr [EAX] */
    g_aiBossClass_008117BC->GetMessage(&local_28);
    return;
  }
  return;
}

// 00627850 FUN_00627850
#line 4 "decomp/ST.exe/functions/00627850/decomp.c"
void __cdecl
st::fn_00627850(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,int param_6,int param_7,undefined4 param_8,char *param_9,undefined4 param_10)

{
  char cVar1;
  short sVar2;
  uint uVar4;
  short sVar6;
  short sVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  char local_2c [14];
  undefined1 local_1e;
  undefined4 local_1d;
  undefined4 local_19;
  undefined4 local_15;
  undefined4 local_11;
  int local_c;
  int local_8;
  char *pcVar8_mg1;
  char *pcVar8_mg0;

  local_8 = STBiasedDiv16(param_5, 0xc9); /* exact signed 16-bit grid-index division */
  sVar7 = (short)local_8;
  sVar6 = STBiasedDiv16(param_6, 0xc9); /* exact signed 16-bit grid-index division */
  local_c = STBiasedDiv16(param_7, 200); /* exact signed 16-bit grid-index division */
  puVar9 = &local_5c;
  memset(puVar9, 0, 0x4f); /* compiler bulk-zero initialization */
  puVar9 = (undefined4 *)((byte *)puVar9 + 0x4c);
  local_19 = param_3;
  local_54 = 1;
  local_50 = 1;
  local_1d = param_8;
  local_58 = param_2;
  local_15 = param_4;
  local_5c = 0x1ae;
  local_48 = param_1;
  local_11 = param_10;
  if (param_9 != nullptr) {
    uVar4 = 0xffffffff;
    pcVar8_mg0 = param_9;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8_mg0;
      pcVar8_mg0 = pcVar8_mg0 + 1;
    } while (cVar1 != '\0');
    if (~uVar4 - 1 < 0xf) {
      uVar4 = 0xffffffff;
      do {
        pcVar8_mg1 = param_9;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8_mg1 = param_9 + 1;
        cVar1 = *param_9;
        param_9 = pcVar8_mg1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar8 = pcVar8_mg1 + -uVar4;
      pcVar10 = local_2c;
      memmove(pcVar10, pcVar8, uVar4); /* compiler REP MOVS byte copy */
      sVar7 = (short)local_8;
    }
    else {
      st::fn_0072E340(local_2c,param_9,0xe);
      local_1e = 0;
    }
  }
  local_40 = param_6;
  local_44 = param_5;
  local_3c = param_7;
  local_38 = (int)(short)(sVar7 * 0xc9 + 100);
  local_34 = (int)(short)(sVar6 * 0xc9 + 100);
  local_30 = (int)(short)((short)local_c * 200 + 100);
  /* ST_CALLSITE[006279E0]: CALL dword ptr [EDX + 0x8] */
  g_playSystem_00802A38->vfunc_08(0x158,0,0,(short)&local_5c,0);
  return;
}

// 00627A60 FUN_00627a60
#line 4 "decomp/ST.exe/functions/00627A60/decomp.c"
undefined4 __fastcall st::fn_00627A60(int param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x2ae);
  if ((((iVar1 != 2) && (iVar1 != 3)) && (iVar1 != 4)) && (iVar1 != 5)) {
    return 1;
  }
  return 0;
}

// 00627AA0 FUN_00627aa0
#line 4 "decomp/ST.exe/functions/00627AA0/decomp.c"
bool __thiscall st::fn_00627AA0(void *this,uint param_1)

{
  byte bVar1;
  byte bVar2;
  int local_EAX_513;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;

  iVar4 = STField<int>(this,0x2ae);
  if (iVar4 == 2) {
    return false;
  }
  if (iVar4 == 3) {
    return false;
  }
  if (iVar4 == 4) {
    return false;
  }
  if (iVar4 == 5) {
    return false;
  }
  if (7 < param_1) {
    return false;
  }
  if ((g_playSystem_00802A38 != nullptr) &&
     (7 < g_bulkInitializedRecords_008087C7[param_1].field_0022)) {
    return false;
  }
  bVar1 = STField<byte>(this,0x24);
  if (DAT_00808a8f == '\0') {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((byte)param_1 == bVar1) {
LAB_00627bb8:
      iVar4 = 0;
    }
    else {
      uVar5 = param_1 & 0xff;
      bVar2 = g_playerRelationMatrix[uVar5][bVar1];
      if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar5] == 0)) {
        iVar4 = -2;
      }
      else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][uVar5] == 0)) {
        iVar4 = -1;
      }
      else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar5] == 1)) {
        iVar4 = 1;
      }
      else {
        if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][uVar5] != 1)) goto LAB_00627bb8;
        iVar4 = 2;
      }
    }
    bVar6 = iVar4 < 0;
  }
  else {
    bVar6 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
            g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023;
  }
  if (bVar6) goto LAB_00627c8a;
  if (DAT_00808a8f == '\0') {
    if (bVar1 == (byte)param_1) {
LAB_00627c7a:
      iVar4 = 0;
    }
    else {
      uVar5 = param_1 & 0xff;
      bVar2 = g_playerRelationMatrix[bVar1][uVar5];
      if ((bVar2 == 0) && (g_playerRelationMatrix[uVar5][bVar1] == 0)) {
        iVar4 = -2;
      }
      else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar5][bVar1] == 0)) {
        iVar4 = -1;
      }
      else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar5][bVar1] == 1)) {
        iVar4 = 1;
      }
      else {
        if ((bVar2 != 1) || (g_playerRelationMatrix[uVar5][bVar1] != 1)) goto LAB_00627c7a;
        iVar4 = 2;
      }
    }
    bVar6 = iVar4 < 0;
  }
  else {
    bVar6 = g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023 !=
            g_bulkInitializedRecords_008087C7[bVar1].field_0023;
  }
  if (!bVar6) {
switchD_00627c97_default:
    return false;
  }
LAB_00627c8a:
  switch(STField<undefined1>(this,0x2ad)) {
  case 0:
  case 2:
    /* ST_CALLSITE[00627CA1]: CALL 0x00402865; direct=00402865 STMineSetC::sub_0041D6C0 */
    local_EAX_513 = st::fn_00402865(st::pointer_boundary_cast<STMineSetC *>(this),param_1);
    return SUB41(local_EAX_513,0);
  case 1:
    iVar3 = st::fn_00401811(this,param_1);
    return SUB41(iVar3,0);
  case 3:
    goto switchD_00627c97_default;
  default:
    return true;
  }
}

// 00627D90 FUN_00627d90
#line 4 "decomp/ST.exe/functions/00627D90/decomp.c"
undefined4 st::fn_00627D90(undefined4 param_1)

{
  return param_1;
}

// 00627DB0 FUN_00627db0
#line 4 "decomp/ST.exe/functions/00627DB0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00627DB0 -> 00568DD0 @ 00627E36 */

void __thiscall st::fn_00627DB0(void *this,int param_1,int param_2,int soundId)

{
  short sVar1;
  SoundPosition local_10;

  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    local_10.x = (short)(((short)(param_1 / 0xc9) + sVar1) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.x = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                             (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    local_10.y = (short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.y = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                             (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  local_10.unknown = STField<int>(this,0x18);
  /* ST_CALLSITE[00627E36]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
  st::fn_00404BD8((SoundClassTy *)&g_sound,SOUND_MODE_2,nullptr,soundId,&local_10,0);
  return;
}

// 00627E80 FUN_00627e80
#line 4 "decomp/ST.exe/functions/00627E80/decomp.c"
undefined4 __fastcall st::fn_00627E80(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1 + 0x2ae) != 0) && (*(int *)(param_1 + 0x2ae) != 1)) {
    return 0;
  }
  return 100;
}

// 00629010 FUN_00629010
#line 4 "decomp/ST.exe/functions/00629010/decomp.c"
/* [STAbiConsistencyApplier] pointer_return_element_width target=return:-1: return=/uint *32
   Evidence: generic returned address is dereferenced with one consistent machine width across
   callers; width=4, sites=006041A0 @ 006041EA MOV dword ptr [EAX + 0xce],EBX | 00604EE0 @ 00604F2E
   MOV dword ptr [EAX + 0xce],EBX */

uint * st::fn_00629010(void)

{
  undefined4 *puVar1;
  uint *puVar2;

  puVar1 = (undefined4 *)st::fn_0072E530(0x108);
  if (puVar1 != nullptr) {
    puVar2 = st::fn_00402225(puVar1);
    return puVar2;
  }
  return nullptr;
}

// 00629040 FUN_00629040
#line 4 "decomp/ST.exe/functions/00629040/decomp.c"
undefined4 * __fastcall st::fn_00629040(undefined4 *param_1)

{
  undefined4 *puVar2;

  puVar2 = param_1;
  memset(puVar2, 0, 0xd7); /* compiler bulk-zero initialization */
  puVar2 = (undefined4 *)((byte *)puVar2 + 0xd4);
  STField<undefined4>(param_1,0xc6) = 0xffffffff;
  return param_1;
}

// 0062A8B0 FUN_0062a8b0
#line 4 "decomp/ST.exe/functions/0062A8B0/decomp.c"
undefined4
st::fn_0062A8B0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5,
            int param_6)

{
  uint uVar1;

  uVar1 = st::fn_00404A3E(param_4,param_5,param_6);
  *param_3 = 0xd5c;
  switch(uVar1) {
  case 0:
    *param_1 = 0x24b5;
    *param_2 = 0;
    return 1;
  case 1:
    *param_1 = 0x19f5;
    *param_2 = 0xffffe60b;
    return 1;
  case 2:
    *param_1 = 0;
    *param_2 = 0xffffdb4b;
    return 1;
  case 3:
    *param_1 = 0xffffe60b;
    *param_2 = 0xffffe60b;
    return 1;
  case 4:
    *param_1 = 0xffffdb4b;
    *param_2 = 0;
    return 1;
  case 5:
    *param_1 = 0xffffe60b;
    *param_2 = 0x19f5;
    return 1;
  case 6:
    *param_1 = 0;
    *param_2 = 0x24b5;
    return 1;
  case 7:
    *param_1 = 0x19f5;
    *param_2 = 0x19f5;
    return 1;
  default:
    return 0;
  case 0xffffffff:
    return 0xffffffff;
  }
}

// 0062AB10 FUN_0062ab10
#line 4 "decomp/ST.exe/functions/0062AB10/decomp.c"
undefined4 __thiscall
st::fn_0062AB10(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_8;

  local_8 = 0;
  uVar5 = st::fn_006C8334(param_4 * param_4 + param_5 * param_5 + param_6 * param_6);
  if (uVar5 == 0) {
    local_8 = 0xffffffff;
  }
  else {
    iVar6 = (param_1 * param_4 + param_2 * param_5 + param_3 * param_6) * 2;
    iVar7 = (int)(iVar6 + (iVar6 >> 0x1f & 0x7fU)) >> 7;
    iVar2 = (param_4 * 10000 + ((iVar7 * param_1) / 10000) * -0x80) / 100;
    iVar4 = (param_5 * 10000 + ((iVar7 * param_2) / 10000) * -0x80) / 100;
    iVar6 = (param_6 * 10000 + ((iVar7 * param_3) / 10000) * -0x80) / 100;
    uVar5 = st::fn_006C8334(iVar6 * iVar6 + iVar2 * iVar2 + iVar4 * iVar4);
    if ((int)uVar5 / 100 != 0) {
      if (0 < iVar7) {
        return 2;
      }
      STField<int>(this,0x9a) = (int)uVar5 / 100;
      STField<undefined4>(this,0x7a) = STField<undefined4>(this,0x46);
      STField<undefined4>(this,0x7e) = STField<undefined4>(this,0x4a);
      STField<undefined4>(this,0x82) = STField<undefined4>(this,0x4e);
      STField<undefined4>(this,0x86) = 0;
      uVar5 = st::fn_006C8334(iVar2 * iVar2 + iVar4 * iVar4);
      iVar7 = (int)uVar5 / 100;
      if (iVar7 != 0) {
        iVar1 = STField<int>(this,0x9a);
        if (iVar6 < 1) {
          iVar3 = iVar6 * -5;
        }
        else {
          iVar3 = iVar6 * 5;
        }
        STField<int>(this,0x8e) = (iVar3 * 2000) / iVar1;
        if (iVar6 < 1) {
          iVar6 = iVar7 * -5;
        }
        else {
          iVar6 = iVar7 * 5;
        }
        STField<int>(this,0x8a) = (iVar6 * 2000) / iVar1;
        STField<int>(this,0x92) = (iVar4 * 10000) / iVar7;
        STField<int>(this,0x96) = (iVar2 * 10000) / iVar7;
        STField<int>(this,0x9a) = (int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7;
        STField<uint>(this,0xae) = g_playSystem_00802A38->field_00E4;
        return 1;
      }
      iVar2 = STField<int>(this,0x9a);
      if (iVar6 < 1) {
        iVar6 = iVar6 * -0x19;
      }
      else {
        iVar6 = iVar6 * 0x19;
      }
      STField<undefined4>(this,0x8a) = 0;
      STField<int>(this,0x96) = param_1;
      STField<int>(this,0x8e) = (iVar6 * 400) / iVar2;
      STField<int>(this,0x92) = param_2;
      STField<int>(this,0x9a) = (int)(iVar2 + (iVar2 >> 0x1f & 0x7fU)) >> 7;
      return 1;
    }
  }
  return local_8;
}

// 0062AF40 FUN_0062af40
#line 4 "decomp/ST.exe/functions/0062AF40/decomp.c"
/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=2, ignored=0, unknown=0 */

undefined4 * __thiscall st::fn_0062AF40(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;

  puVar1 = st::pointer_boundary_cast<undefined4 *>(st::fn_006AAC70(0xd7));
  *param_1 = 0;
  if (puVar1 != nullptr) {
    puVar3 = puVar1;
    for (iVar2 = 0x35; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *(undefined4 *)this;
      this = (undefined4 *)((int)this + 4);
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = *(undefined2 *)this;
    STField<undefined1>(puVar3,2) = STField<undefined1>(this,2);
    puVar1[3] = 2;
    *param_1 = 0xd7;
  }
  return puVar1;
}

// 0062AF90 FUN_0062af90
#line 4 "decomp/ST.exe/functions/0062AF90/decomp.c"
void __thiscall st::fn_0062AF90(void *this,int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  STWorldObject *this_00;
  AnonShape_0062FCA0_22A9EE35 *pAVar8;
  AnonShape_0062FCA0_22A9EE35 local_38;
  undefined4 local_c;
  AnonShape_0062AF90_A19AAC76 *local_8;

  iVar5 = 1;
  iVar7 = STBiasedDiv16(param_1, 0xc9); /* exact signed 16-bit grid-index division */
  iVar4 = STBiasedDiv16(param_2, 0xc9); /* exact signed 16-bit grid-index division */
  iVar2 = STBiasedDiv16(param_3, 200); /* exact signed 16-bit grid-index division */
  if ((((-1 < iVar7) && (iVar7 < g_worldGrid.sizeX)) && (-1 < iVar4)) &&
     (((iVar4 < g_worldGrid.sizeY && (-1 < iVar2)) && (iVar2 < g_worldGrid.sizeZ)))) {
    sVar6 = (short)iVar7;
    if (((sVar6 < 0) || (g_worldGrid.sizeX <= sVar6)) ||
       ((sVar3 = (short)iVar4, sVar3 < 0 ||
        (((g_worldGrid.sizeY <= sVar3 || (sVar1 = (short)iVar2, sVar1 < 0)) ||
         (g_worldGrid.sizeZ <= sVar1)))))) {
      this_00 = nullptr;
    }
    else {
      this_00 = STGridAt3D(g_worldGrid, sVar6, sVar3, sVar1).objects[1];
    }
    pAVar8 = &local_38;
    local_8 = st::pointer_boundary_cast<AnonShape_0062AF90_A19AAC76 *>(this);
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pAVar8 = 0;
      pAVar8 = (AnonShape_0062FCA0_22A9EE35 *)&pAVar8->field_0x4;
    }
    STPiece<28,4>(local_38) = param_3;
    STPiece<20,4>(local_38) = param_1;
    local_c = local_8->field_0018;
    STPiece<24,4>(local_38) = param_2;
    STPiece<36,4>(local_38) = local_8->field_0004;
    local_38.field_0020 = 1000;
    switch(local_8->field_0015) {
    case 1:
      if (local_8->field_001C == 1) {
        iVar5 = 1;
      }
      else if (local_8->field_001C == 2) {
        iVar5 = 2;
      }
      break;
    case 2:
      iVar5 = 5;
      break;
    case 8:
      iVar5 = 4;
      break;
    case 0x10:
    case 0x20:
    case 0x80:
      iVar5 = 3;
      break;
    case 0x40:
      iVar5 = 6;
    }
    local_38.field_0028 = iVar5 << 0x10 | (uint)local_8->field_0014;
    STPiece<0,4>(local_38) = 0xbe;
    STPiece<4,4>(local_38) = 0xff;
    STPiece<8,4>(local_38) = 0;
    STPiece<12,4>(local_38) = 1;
    if ((this_00 != nullptr) && (this_00->value_20 == 0xbe)) {
      st::fn_004026E9(this_00,&local_38);
      return;
    }
    /* ST_CALLSITE[0062B19D]: CALL dword ptr [EDX + 0x8] */
    g_playSystem_00802A38->vfunc_08(0x132,0,0,(short)&local_38,0);
  }
  return;
}

// 0062B300 FUN_0062b300
#line 4 "decomp/ST.exe/functions/0062B300/decomp.c"
undefined4 __fastcall st::fn_0062B300(int param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  switch(((undefined1 *)param_1)[0x15]) {
  case 1:
    if (((byte *)param_1)[0x14] < 4) {
      return 1;
    }
    break;
  case 2:
  case 8:
    if (((byte *)param_1)[0x14] < 7) {
      return 1;
    }
    break;
  case 0x80:
    if (((char *)param_1)[0x14] == '\0') {
      uVar1 = 1;
    }
  }
  return uVar1;
}

// 0062B420 FUN_0062b420
#line 4 "decomp/ST.exe/functions/0062B420/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0062B420 parameter used as this of
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00424E10::FUN_00424e10 @ 0062B46A */

int st::fn_0062B420(AnonReceiver_004248D0 *param_1,undefined4 param_2,int *param_3,
                AnonShape_0062B420_FA3E468B *param_4)

{
  int iVar2;
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_4->field_00CA + 0x29);
  if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + param_4->field_00B2 * 4), iVar2 != 0)) {
    iVar1 = st::fn_00403E1D
                      (param_1,iVar2,param_4->field_006A - _DAT_007907a8,
                       param_4->field_006E - _DAT_007907a8,param_4->field_0072,0x20,0x20,param_3);
    return iVar1;
  }
  return -4;
}

// 0062B680 FUN_0062b680
#line 4 "decomp/ST.exe/functions/0062B680/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:0: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0062B696 MOV EAX,dword ptr [EBP + 0x8];
   first-use mask
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0062B6B2 MOV EAX,dword ptr [EBP + 0xc];
   first-use mask
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:2: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0062B6CB MOV EAX,dword ptr [EBP +
   0x10]; first-use mask
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:3: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0062B699 MOV ECX,dword ptr [EBP +
   0x14]; first-use mask
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:4: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0062B6AC MOV ECX,dword ptr [EBP +
   0x18]; first-use mask
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:5: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0062B6C5 MOV ECX,dword ptr [EBP +
   0x1c]; first-use mask */

void __cdecl
st::fn_0062B680(ushort param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
            ushort param_6,undefined4 param_7,int param_8)

{
  undefined4 local_44 [6];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  memset(local_44, 0, 0x40); /* compiler bulk-zero initialization */
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_28 = CONCAT22(param_1,param_4);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_24 = CONCAT22(param_2,param_5);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_20 = CONCAT22(param_3,param_6);
  local_1c = param_7;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_18 = *(undefined4 *)(param_8 + 0x18);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_14 = *(undefined4 *)(param_8 + 0x24);
  local_44[0] = 0xd2;
  local_44[1] = 0xff;
  local_44[2] = 0;
  local_44[3] = 0;
  local_2c = 3;
  local_10 = 0;
  /* ST_CALLSITE[0062B728]: CALL dword ptr [EAX + 0x8] */
  g_playSystem_00802A38->vfunc_08(0x124,0,0,(short)local_44,0);
  return;
}

// 0062B770 FUN_0062b770
#line 4 "decomp/ST.exe/functions/0062B770/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=1,
   ignored=3, unknown=0 */

void __cdecl
st::fn_0062B770(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 local_44 [5];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  memset(local_44, 0, 0x40); /* compiler bulk-zero initialization */
  local_28 = param_1;
  local_24 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_18 = *(undefined4 *)(param_5 + 0x18);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_14 = *(undefined4 *)(param_5 + 0x24);
  local_10 = param_6;
  local_8 = param_8;
  local_44[0] = 0xd2;
  local_44[1] = 0xff;
  local_44[2] = 0;
  local_44[3] = 0;
  local_2c = 0;
  local_30 = 0;
  local_c = param_7;
  /* ST_CALLSITE[0062B7ED]: CALL dword ptr [EAX + 0x8] */
  g_playSystem_00802A38->vfunc_08(0x124,0,0,(short)local_44,0);
  return;
}

// 0062B830 FUN_0062b830
#line 4 "decomp/ST.exe/functions/0062B830/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B8C80 -> 0062B830 @ 004B95E3; MOVSX at 004B95DC establishes signed source width 2 |
   004B9FA0 -> 0062B830 @ 004BBD81; MOVSX at 004BBD7A establishes signed source width 2 | 004D32C0
   -> 0062B830 @ 004D4CD9; MOVSX at 004D4CD2 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004B8C80 -> 0062B830 @ 004B95E3; MOVSX at 004B95C6 establishes signed source width 2 |
   004B9FA0 -> 0062B830 @ 004BBD81; MOVSX at 004BBD64 establishes signed source width 2 | 004D32C0
   -> 0062B830 @ 004D4CD9; MOVSX at 004D4CBC establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004B8C80 -> 0062B830 @ 004B95E3; MOVSX at 004B95C2 establishes signed source width 2 |
   004B9FA0 -> 0062B830 @ 004BBD81; MOVSX at 004BBD60 establishes signed source width 2 | 004D32C0
   -> 0062B830 @ 004D4CD9; MOVSX at 004D4CB8 establishes signed source width 2 */

void __cdecl
st::fn_0062B830(int param_1,int param_2,int param_3,undefined4 param_4,int *param_5,undefined4 param_6,
            undefined4 param_7,int param_8,int param_9)

{
  int *this;
  int iVar1;
  undefined4 local_44 [5];
  uint local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_c;
  undefined4 local_8;

  this = param_5;
  memset(local_44, 0, 0x40); /* compiler bulk-zero initialization */
  local_28 = param_1;
  local_24 = param_2;
  local_18 = param_5[6];
  local_20 = param_3;
  local_14 = param_5[9];
  local_1c = param_4;
  local_44[0] = 0xd2;
  local_44[1] = 0xff;
  local_44[2] = 0;
  local_44[3] = 0;
  local_2c = 1;
  /* ST_CALLSITE[0062B88C]: CALL dword ptr [EAX + 0x2c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(*param_5 + 0x2c))();
  local_8 = param_7;
  local_30 = (uint)(*(int *)(&DAT_00791d68 + iVar1 * 4) == 1);
  local_c = param_6;
  /* ST_CALLSITE[0062B8C1]: CALL dword ptr [EDX + 0x8] */
  g_playSystem_00802A38->vfunc_08(0x124,0,0,(short)local_44,0);
  /* ST_CALLSITE[0062B8D2]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
  st::fn_004018C5
            ((STFishC *)this,(short *)((int)&param_3 + 2),(short *)((int)&param_2 + 2),
             (short *)((int)&param_1 + 2));
  iVar1 = param_8;
  if ((param_9 == 0) && (g_manRuin_008117B0 != nullptr)) {
    if (this[0xb] == 0) {
      /* ST_CALLSITE[0062B906]: CALL 0x004035f3; direct=004035F3 STManRuinC::sub_00631510 */
      st::fn_004035F3
                (g_manRuin_008117B0,this[8],1,(int)STPiece<2,2>(param_3),(int)STPiece<2,2>(param_2),
                 (int)STPiece<2,2>(param_1),param_8);
    }
    if (this[0xb] == 1) {
      /* ST_CALLSITE[0062B92D]: CALL 0x004035f3; direct=004035F3 STManRuinC::sub_00631510 */
      st::fn_004035F3
                (g_manRuin_008117B0,this[8],4,(int)STPiece<2,2>(param_3),(int)STPiece<2,2>(param_2),
                 (int)STPiece<2,2>(param_1),iVar1);
    }
  }
  return;
}

// 0062B990 FUN_0062b990
#line 4 "decomp/ST.exe/functions/0062B990/decomp.c"
void __cdecl
st::fn_0062B990(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_44 [6];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;

  memset(local_44, 0, 0x40); /* compiler bulk-zero initialization */
  local_28 = param_1;
  local_24 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_18 = *(undefined4 *)(param_5 + 0x18);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_14 = *(undefined4 *)(param_5 + 0x24);
  local_c = param_6;
  local_44[0] = 0xd2;
  local_44[1] = 0xff;
  local_44[2] = 0;
  local_44[3] = 0;
  local_2c = 2;
  local_8 = param_7;
  /* ST_CALLSITE[0062BA08]: CALL dword ptr [EAX + 0x8] */
  g_playSystem_00802A38->vfunc_08(0x124,0,0,(short)local_44,0);
  return;
}

// 0062BA50 FUN_0062ba50
#line 4 "decomp/ST.exe/functions/0062BA50/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl st::fn_0062BA50(float *param_1,float *param_2)

{
  float fVar1;

  fVar1 = (param_1[8] * param_1[4] * *param_1 - param_1[5] * param_1[7] * *param_1) +
          (param_1[6] * param_1[5] * param_1[1] - param_1[8] * param_1[3] * param_1[1]) +
          (param_1[2] * param_1[3] * param_1[7] - param_1[6] * param_1[2] * param_1[4]);
  if (fVar1 != _DAT_0079034c) {
    *param_2 = (param_1[8] * param_1[4] - param_1[5] * param_1[7]) / fVar1;
    param_2[1] = -((param_1[8] * param_1[3] - param_1[6] * param_1[5]) / fVar1);
    param_2[2] = (param_1[3] * param_1[7] - param_1[6] * param_1[4]) / fVar1;
    param_2[3] = -((param_1[8] * param_1[1] - param_1[2] * param_1[7]) / fVar1);
    param_2[4] = (param_1[8] * *param_1 - param_1[6] * param_1[2]) / fVar1;
    param_2[5] = -((*param_1 * param_1[7] - param_1[6] * param_1[1]) / fVar1);
    param_2[6] = (param_1[5] * param_1[1] - param_1[2] * param_1[4]) / fVar1;
    param_2[7] = -((param_1[5] * *param_1 - param_1[2] * param_1[3]) / fVar1);
    param_2[8] = (*param_1 * param_1[4] - param_1[3] * param_1[1]) / fVar1;
    return 1;
  }
  return 0;
}

// 0062BBC0 FUN_0062bbc0
#line 4 "decomp/ST.exe/functions/0062BBC0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl
st::fn_0062BBC0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,undefined4 param_9,undefined4 param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  AnonShape_0062BBC0_87279CD5 *pAVar7;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  AnonShape_0062BBC0_87279CD5 *local_8;

  local_8 = st::pointer_boundary_cast<AnonShape_0062BBC0_87279CD5 *>(st::fn_006AAC70(0x6d));
  pAVar7 = local_8;
  for (iVar6 = 0x1b; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(int *)pAVar7 = 0;
    pAVar7 = (AnonShape_0062BBC0_87279CD5 *)&pAVar7->field_0x4;
  }
  *(undefined1 *)pAVar7 = 0;
  *(int *)local_8 = param_1;
  *(int *)&local_8->field_0x4 = param_2;
  *(int *)&local_8->field_0x8 = param_3;
  *(int *)&local_8->field_0x30 = param_4;
  *(int *)&local_8->field_0x34 = param_5;
  *(int *)&local_8->field_0x38 = param_6;
  *(int *)&local_8->field_0xc = param_8;
  *(int *)&local_8->field_0x10 = param_7;
  local_8->field_0x3c = 3;
  local_8->field_003D = param_9;
  local_8->field_0041 = param_10;
  local_8->field_0045 = 0;
  local_2c = (float)(*(int *)&local_8->field_0x30 - *(int *)local_8);
  local_28 = (float)(*(int *)&local_8->field_0x34 - *(int *)&local_8->field_0x4);
  local_24 = (float)(*(int *)&local_8->field_0x38 - *(int *)&local_8->field_0x8);
  fVar1 = SQRT(local_2c * local_2c + local_28 * local_28 + local_24 * local_24);
  local_2c = local_2c / fVar1;
  local_28 = local_28 / fVar1;
  local_24 = local_24 / fVar1;
  iVar6 = *(int *)&local_8->field_0x38;
  if (iVar6 == *(int *)&local_8->field_0x8) {
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
  }
  else {
    fVar1 = (float)(*(int *)&local_8->field_0x4 - *(int *)&local_8->field_0x34);
    fVar4 = (float)(*(int *)local_8 - *(int *)&local_8->field_0x30);
    fVar3 = fVar1 * local_28 + fVar4 * local_2c;
    if (fVar3 == _DAT_0079034c) {
      st::fn_006AB060(&local_8);
      return nullptr;
    }
    local_14 = (float)*(int *)local_8;
    fVar5 = (float)*(int *)&local_8->field_0x34;
    fVar2 = (float)*(int *)&local_8->field_0x30;
    fVar3 = (--(local_14 * local_2c +
               (float)*(int *)&local_8->field_0x4 * local_28 +
               (float)*(int *)&local_8->field_0x8 * local_24) -
            ((float)iVar6 * local_24 + fVar5 * local_28 + fVar2 * local_2c)) / fVar3;
    local_14 = (fVar4 * fVar3 + fVar2) - local_14;
    local_10 = (fVar1 * fVar3 + fVar5) - (float)*(int *)&local_8->field_0x4;
    local_c = (float)iVar6 - (float)*(int *)&local_8->field_0x8;
    fVar1 = SQRT(local_14 * local_14 + local_10 * local_10 + local_c * local_c);
    local_14 = local_14 / fVar1;
    local_10 = local_10 / fVar1;
    local_c = local_c / fVar1;
  }
  local_20 = local_10 * local_24 - local_c * local_28;
  local_1c = local_c * local_2c - local_14 * local_24;
  local_18 = local_14 * local_28 - local_10 * local_2c;
  iVar6 = st::fn_004039C7(&local_2c,(float *)&local_8->field_0x49);
  if (iVar6 == 0) {
    return nullptr;
  }
  return (int *)local_8;
}

// 0062BEC0 FUN_0062bec0
#line 4 "decomp/ST.exe/functions/0062BEC0/decomp.c"
void __cdecl st::fn_0062BEC0(float *param_1,float *param_2,float *param_3)

{
  *param_3 = param_2[6] * param_1[2] + param_1[1] * param_2[3] + *param_1 * *param_2;
  param_3[1] = param_2[1] * *param_1 + param_2[7] * param_1[2] + param_1[1] * param_2[4];
  param_3[2] = param_2[2] * *param_1 + param_2[8] * param_1[2] + param_1[1] * param_2[5];
  param_3[3] = param_1[5] * param_2[6] + param_1[3] * *param_2 + param_1[4] * param_2[3];
  param_3[4] = param_1[3] * param_2[1] + param_1[4] * param_2[4] + param_1[5] * param_2[7];
  param_3[5] = param_1[3] * param_2[2] + param_1[4] * param_2[5] + param_1[5] * param_2[8];
  param_3[6] = param_1[7] * param_2[3] + param_2[6] * param_1[8] + param_1[6] * *param_2;
  param_3[7] = param_2[1] * param_1[6] + param_2[4] * param_1[7] + param_2[7] * param_1[8];
  param_3[8] = param_2[2] * param_1[6] + param_2[5] * param_1[7] + param_2[8] * param_1[8];
  return;
}

// 0062BFF0 FUN_0062bff0
#line 4 "decomp/ST.exe/functions/0062BFF0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
st::fn_0062BFF0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,float *param_7,
            float param_8)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float local_7c [9];
  float local_58 [5];
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34 [4];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;

  local_34[0] = (float)(param_4 - param_1);
  local_34[1] = (float)(param_5 - param_2);
  local_34[2] = (float)(param_6 - param_3);
  local_8 = SQRT(local_34[0] * local_34[0] + local_34[1] * local_34[1] + local_34[2] * local_34[2]);
  local_34[0] = local_34[0] / local_8;
  local_34[1] = local_34[1] / local_8;
  local_34[2] = local_34[2] / local_8;
  if (param_6 - param_3 == 0) {
    local_1c = 0.0;
    local_18 = 0.0;
    local_14 = 1.0;
    local_10 = 0.0;
  }
  else {
    local_c = (float)(param_1 - param_4);
    local_10 = (float)(param_2 - param_5);
    local_8 = local_c * local_34[0] + (float)(param_2 - param_5) * local_34[1];
    if (local_8 == _DAT_0079034c) {
      return 0;
    }
    local_8 = (--((float)param_3 * local_34[2] +
                 (float)param_2 * local_34[1] + (float)param_1 * local_34[0]) -
              ((float)param_6 * local_34[2] +
              (float)param_5 * local_34[1] + (float)param_4 * local_34[0])) / local_8;
    local_1c = (local_c * local_8 + (float)param_4) - (float)param_1;
    local_18 = (local_10 * local_8 + (float)param_5) - (float)param_2;
    local_14 = (float)param_6 - (float)param_3;
    fVar1 = SQRT(local_1c * local_1c + local_18 * local_18 + local_14 * local_14);
    local_1c = local_1c / fVar1;
    local_18 = local_18 / fVar1;
    local_14 = local_14 / fVar1;
  }
  local_34[3] = local_18 * local_34[2] - local_14 * local_34[1];
  local_24 = local_14 * local_34[0] - local_1c * local_34[2];
  local_20 = local_1c * local_34[1] - local_18 * local_34[0];
  if (param_8 != _DAT_0079034c) {
    fVar5 = (float10)fcos((float10)param_8);
    local_58[0] = 1.0;
    local_58[1] = 0.0;
    local_58[2] = 0.0;
    local_58[3] = 0.0;
    local_40 = 0;
    fVar6 = (float10)fsin((float10)param_8);
    local_58[4] = (float)fVar5;
    local_44 = (float)-fVar6;
    local_3c = (float)fVar6;
    local_38 = (float)fVar5;
    st::fn_00403477(local_58,local_34,local_7c);
    pfVar3 = local_7c;
    pfVar4 = local_34;
    memmove(pfVar4, pfVar3, 0x24); /* compiler REP MOVS byte copy */
  }
  iVar2 = st::fn_004039C7(local_34,param_7);
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}

// 0062C2A0 FUN_0062c2a0
#line 4 "decomp/ST.exe/functions/0062C2A0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __cdecl st::fn_0062C2A0(int *param_1)

{
  if (*param_1 != 0) {
    st::fn_006AB060(param_1);
  }
  return;
}

// 0062C2D0 FUN_0062c2d0
#line 4 "decomp/ST.exe/functions/0062C2D0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl st::fn_0062C2D0(AnonShape_0062C2D0_06591E1F *param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float10 fVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  int iVar19;
  short sVar20;
  byte bVar21;

  bVar5 = false;
  if (param_1 != nullptr) {
    iVar2 = param_3 - *(int *)&param_1->field_0x4;
    iVar4 = param_4 - *(int *)&param_1->field_0x8;
    bVar5 = true;
    fVar1 = SQRT((float)((param_2 - *(int *)param_1) * (param_2 - *(int *)param_1) + iVar4 * iVar4 +
                        iVar2 * iVar2)) - (float)*(int *)&param_1->field_0xc;
    if ((float)-*(int *)&param_1->field_0xc < fVar1) {
      iVar2 = *(int *)&param_1->field_0x14;
      lVar7 = st::fn_0072E288();
      *(int *)&param_1->field_0x14 = (int)lVar7;
      lVar7 = st::fn_0072E288();
      iVar4 = (int)lVar7;
      fVar6 = (float10)param_1->field_0041 + (float10)param_1->field_0045;
      param_1->field_0045 = (float)fVar6;
      fVar6 = fVar6 * (float10)_DAT_0079d078;
      fcos(fVar6);
      fsin(fVar6);
      lVar7 = st::fn_0072E288();
      lVar8 = st::fn_0072E288();
      lVar9 = st::fn_0072E288();
      *(int *)&param_1->field_0x18 = (int)lVar7;
      *(int *)&param_1->field_0x1c = (int)lVar8;
      *(int *)&param_1->field_0x20 = (int)lVar9;
      lVar10 = st::fn_0072E288();
      lVar11 = st::fn_0072E288();
      lVar12 = st::fn_0072E288();
      *(int *)&param_1->field_0x2c = (int)lVar12;
      *(int *)&param_1->field_0x24 = (int)lVar10;
      *(int *)&param_1->field_0x28 = (int)lVar11;
      /* ST_CALLSITE[0062C49B]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
      st::fn_00401433
                (g_traksClass_00802A7C,3,1,0,*(int *)param_1 + (int)lVar7,
                 *(int *)&param_1->field_0x4 + (int)lVar8,*(int *)&param_1->field_0x8 + (int)lVar9,
                 (short)lVar10,(short)lVar11,(short)lVar12,0,0,0,-1,0,0);
      if ((float)iVar2 == _DAT_0079034c) {
        return true;
      }
      bVar5 = fVar1 <= _DAT_0079d070;
      bVar21 = 0;
      sVar20 = 0;
      iVar19 = -1;
      sVar18 = 0;
      sVar17 = 0;
      sVar16 = 0;
      fVar6 = (((float10)param_1->field_0045 - (float10)iVar4) * (float10)_DAT_0079d068 +
              (float10)iVar4) * (float10)_DAT_0079d078;
      fcos(fVar6);
      fsin(fVar6);
      lVar7 = st::fn_0072E288();
      sVar15 = (short)lVar7;
      lVar7 = st::fn_0072E288();
      sVar14 = (short)lVar7;
      lVar7 = st::fn_0072E288();
      sVar13 = (short)lVar7;
      lVar7 = st::fn_0072E288();
      iVar2 = (int)lVar7 + *(int *)&param_1->field_0x8;
      lVar7 = st::fn_0072E288();
      iVar3 = (int)lVar7 + *(int *)&param_1->field_0x4;
      lVar7 = st::fn_0072E288();
      /* ST_CALLSITE[0062C60E]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
      st::fn_00401433
                (g_traksClass_00802A7C,3,1,3,(int)lVar7 + *(int *)param_1,iVar3,iVar2,sVar13,sVar14,
                 sVar15,sVar16,sVar17,sVar18,iVar19,sVar20,bVar21);
      fVar6 = (((float10)param_1->field_0045 - (float10)iVar4) * (float10)_DAT_00790784 +
              (float10)iVar4) * (float10)_DAT_0079d078;
      fcos(fVar6);
      fsin(fVar6);
      bVar21 = 0;
      sVar20 = 0;
      iVar19 = -1;
      sVar18 = 0;
      sVar17 = 0;
      sVar16 = 0;
      lVar7 = st::fn_0072E288();
      sVar15 = (short)lVar7;
      lVar7 = st::fn_0072E288();
      sVar14 = (short)lVar7;
      lVar7 = st::fn_0072E288();
      sVar13 = (short)lVar7;
      lVar7 = st::fn_0072E288();
      iVar2 = (int)lVar7 + *(int *)&param_1->field_0x8;
      lVar7 = st::fn_0072E288();
      iVar3 = (int)lVar7 + *(int *)&param_1->field_0x4;
      lVar7 = st::fn_0072E288();
      /* ST_CALLSITE[0062C749]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
      st::fn_00401433
                (g_traksClass_00802A7C,3,1,2,(int)lVar7 + *(int *)param_1,iVar3,iVar2,sVar13,sVar14,
                 sVar15,sVar16,sVar17,sVar18,iVar19,sVar20,bVar21);
      bVar21 = 0;
      sVar20 = 0;
      iVar3 = -1;
      sVar18 = 0;
      sVar17 = 0;
      sVar16 = 0;
      fVar6 = (((float10)param_1->field_0045 - (float10)iVar4) * (float10)_DAT_0079d06c +
              (float10)iVar4) * (float10)_DAT_0079d078;
      fcos(fVar6);
      fsin(fVar6);
      lVar7 = st::fn_0072E288();
      sVar15 = (short)lVar7;
      lVar7 = st::fn_0072E288();
      sVar14 = (short)lVar7;
      lVar7 = st::fn_0072E288();
      sVar13 = (short)lVar7;
      lVar7 = st::fn_0072E288();
      iVar2 = (int)lVar7 + *(int *)&param_1->field_0x8;
      lVar7 = st::fn_0072E288();
      iVar4 = (int)lVar7 + *(int *)&param_1->field_0x4;
      lVar7 = st::fn_0072E288();
      /* ST_CALLSITE[0062C880]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
      st::fn_00401433
                (g_traksClass_00802A7C,3,1,1,(int)lVar7 + *(int *)param_1,iVar4,iVar2,sVar13,sVar14,
                 sVar15,sVar16,sVar17,sVar18,iVar3,sVar20,bVar21);
    }
  }
  return bVar5;
}

// 0062CA00 FUN_0062ca00
#line 4 "decomp/ST.exe/functions/0062CA00/decomp.c"
undefined4 st::fn_0062CA00(void)

{
  return 0x6d;
}

// 0062CA20 FUN_0062ca20
#line 4 "decomp/ST.exe/functions/0062CA20/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0062CA20 returns return of Library::DKW::LIB::FUN_006aac70 @ 0062CA5B */

int __cdecl st::fn_0062CA20(undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar3;
  byte *puVar4;

  puVar1 = nullptr;
  uVar3 = 0x6d;
  if (param_1 != nullptr) {
    puVar1 = st::pointer_boundary_cast<undefined4 *>(st::fn_006AAC70(0x6d));
    if (puVar1 == nullptr) {
      uVar3 = 0;
    }
    puVar4 = (byte *)(puVar1);
    memmove(puVar4, param_1, uVar3); /* compiler REP MOVS byte copy */
    *param_2 = uVar3;
  }
  return (int)puVar1;
}

// 0062CA70 FUN_0062ca70
#line 4 "decomp/ST.exe/functions/0062CA70/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0062CA70 returns literal 1 at 0062CA95 @ 0062CA9C */

uint __cdecl st::fn_0062CA70(undefined4 *param_1,undefined4 *param_2)

{
  byte *puVar1;

  puVar1 = (byte *)(st::fn_006AAC70(0x6d));
  *param_1 = st::machine_word_boundary_cast<undefined4>(puVar1);
  if (puVar1 != nullptr) {
    memmove(puVar1, param_2, 0x6d); /* compiler REP MOVS byte copy */
    return 1;
  }
  return 0;
}

// 0062CAC0 FUN_0062cac0
#line 4 "decomp/ST.exe/functions/0062CAC0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
st::fn_0062CAC0(AnonShape_0062CAC0_4BF74422 *param_1,int param_2,int param_3,int param_4,
            undefined4 param_5,int param_6,int param_7,short *param_8)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;

  if (param_1 != nullptr) {
    iVar2 = param_3 - *(int *)&param_1->field_0x4;
    iVar3 = param_4 - *(int *)&param_1->field_0x8;
    param_1->field_003D = (int)*(short *)(param_6 + 2 + param_7 * 4);
    fVar1 = SQRT((float)((param_2 - *(int *)param_1) * (param_2 - *(int *)param_1) + iVar3 * iVar3 +
                        iVar2 * iVar2)) - (float)*(int *)&param_1->field_0xc;
    if ((float)-*(int *)&param_1->field_0xc < fVar1) {
      lVar5 = st::fn_0072E288();
      *(int *)&param_1->field_0x14 = (int)lVar5;
      fVar4 = (float10)param_1->field_0041 + (float10)param_1->field_0045;
      param_1->field_0045 = (float)fVar4;
      fVar4 = fVar4 * (float10)_DAT_0079d07c;
      fcos(fVar4);
      fsin(fVar4);
      lVar5 = st::fn_0072E288();
      lVar6 = st::fn_0072E288();
      lVar7 = st::fn_0072E288();
      *(int *)&param_1->field_0x18 = (int)lVar5;
      *(int *)&param_1->field_0x1c = (int)lVar6;
      *(int *)&param_1->field_0x20 = (int)lVar7;
      *param_8 = (short)lVar5 + *(short *)param_1;
      param_8[1] = *(short *)&param_1->field_0x4 + (short)lVar6;
      param_8[2] = (short)lVar7 + *(short *)&param_1->field_0x8;
      /* ST_CALLSITE[0062CC18]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
      st::fn_00401433
                (g_traksClass_00802A7C,3,0,0,(int)lVar5 + *(int *)param_1,
                 *(int *)&param_1->field_0x4 + (int)lVar6,(int)lVar7 + *(int *)&param_1->field_0x8,0
                 ,0,0,0,0,0,-1,0,1);
      if (fVar1 <= _DAT_0079d070) {
        return 1;
      }
    }
  }
  return 0;
}

// 0062CEC0 CreateSTManRub3
#line 4 "decomp/ST.exe/functions/0062CEC0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA994>004046DD

   [STObjectFactoryApplier] Central object factory for 0x0145 (ST_OBJECT_ST_MAN_RUB3).
   Evidence: registry[78] at 007CA990 stores type 0x0145 and executable pointer 004046DD; allocation
   size 184 uniquely matches /STManRub3C; calls named constructor STManRub3C::STManRub3C */

STManRub3C * __cdecl st::fn_0062CEC0(void)

{
  STManRub3C *this;

  this = (STManRub3C *)st::fn_006B04D0(0xb8);
  if (this != nullptr) {
    /* ST_CALLSITE[0062CED0]: CALL 0x004053ee; direct=004053EE STManRub3C::STManRub3C */
    g_manRub3_008117A4 = st::fn_004053EE(this);
    return g_manRub3_008117A4;
  }
  g_manRub3_008117A4 = nullptr;
  return nullptr;
}

// 0062D120 FUN_0062d120
#line 4 "decomp/ST.exe/functions/0062D120/decomp.c"
undefined4 __thiscall
st::fn_0062D120(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
            int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((this != (void *)0xffffffd0) && (iVar2 = *(int *)((int)this + param_1 * 4 + 0x30), iVar2 != 0)
     ) {
    if ((int)param_6 < 0) {
      uVar1 = *(uint *)(iVar2 + 0xc);
      uVar4 = 0;
      if (0 < (int)uVar1) {
        bVar5 = uVar1 != 0;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        while ((((!bVar5 ||
                 (iVar3 = *(int *)(iVar2 + 8) * uVar4 + *(int *)(iVar2 + 0x1c), iVar3 == 0)) ||
                (*(int *)(iVar3 + 4) != param_2)) ||
               (((*(int *)(iVar3 + 8) != param_3 || (*(int *)(iVar3 + 0xc) != param_4)) ||
                (*(int *)(iVar3 + 0x14) != param_5))))) {
          uVar4 = uVar4 + 1;
          bVar5 = uVar4 < uVar1;
          if ((int)uVar1 <= (int)uVar4) {
            return 0;
          }
        }
        if (param_7 == 0) {
          iVar2 = *(int *)(iVar3 + 0x1c) + -1;
        }
        else {
          iVar2 = *(int *)(iVar3 + 0x1c) + 1;
        }
        *(int *)(iVar3 + 0x1c) = iVar2;
        if (iVar2 < 0) {
          *(undefined4 *)(iVar3 + 0x1c) = 0;
        }
        return *(undefined4 *)(iVar3 + 0x1c);
      }
    }
    else {
      if (param_6 < *(uint *)(iVar2 + 0xc)) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar2 = *(int *)(iVar2 + 8) * param_6 + *(int *)(iVar2 + 0x1c);
      }
      else {
        iVar2 = 0;
      }
      if (param_7 == 0) {
        iVar3 = *(int *)(iVar2 + 0x1c) + -1;
      }
      else {
        iVar3 = *(int *)(iVar2 + 0x1c) + 1;
      }
      *(int *)(iVar2 + 0x1c) = iVar3;
      if (iVar3 < 0) {
        *(undefined4 *)(iVar2 + 0x1c) = 0;
        return 0;
      }
    }
  }
  return 0;
}

// 0062D230 FUN_0062d230
#line 4 "decomp/ST.exe/functions/0062D230/decomp.c"
uint __thiscall st::fn_0062D230(void *this,int *param_1)

{
  DArrayTy *array;
  uint uVar1;
  void *pvVar2;
  uint index;
  bool bVar3;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  array = *(DArrayTy **)((int)this + *param_1 * 4 + 0x30);
  if (array != nullptr) {
    uVar1 = array->count;
    index = 0;
    if (0 < (int)uVar1) {
      bVar3 = uVar1 != 0;
      while ((((!bVar3 ||
               (pvVar2 = DArrayAt<void>(array, index),
               pvVar2 == nullptr)) || (STField<int>(pvVar2,4) != param_1[1])) ||
             (((STField<int>(pvVar2,8) != param_1[2] ||
               (STField<int>(pvVar2,0xc) != param_1[3])) ||
              (STField<int>(pvVar2,0x14) != param_1[5]))))) {
        index = index + 1;
        bVar3 = index < uVar1;
        if ((int)uVar1 <= (int)index) {
          return 0xffffffff;
        }
      }
      st::fn_006B0C70(array,index);
      return index;
    }
  }
  return 0xffffffff;
}

// 0062D2D0 FUN_0062d2d0
#line 4 "decomp/ST.exe/functions/0062D2D0/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __thiscall
st::fn_0062D2D0(void *this,int param_1,int param_2,int param_3,undefined4 param_4,int *param_5,
            int param_6)

{
  alignas(4) byte st_stack_frame[160];

  int iVar2;
  uint uVar3;
  int iVar1;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint local_78 [7];
  undefined4 uStack_5c;
  int *local_4c [2];
  int aiStack_44 [5];
  int local_30;
  undefined4 local_2c;
  uint local_24;
  uint local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = (undefined *)&DAT_0079d088;
  puStack_10 = (undefined1 *)&st_image_0072D964;
  local_14 = ExceptionList;
  local_2c = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((this != (void *)0xffffffd0) && (iVar2 = *(int *)((int)this + param_1 * 4 + 0x30), iVar2 != 0)
     ) {
    iVar2 = *(int *)(iVar2 + 0xc);
    uStack_5c = 0x62d333;
    local_1c = (st_stack_frame + 68) + iVar2 * -0x28;
    local_8 = 0xffffffff;
    local_24 = 0xffffffff;
    if (param_6 == 0) {
      aiStack_44[3] = (int)g_worldGrid.sizeY * (int)g_worldGrid.sizeX;
    }
    else {
      aiStack_44[3] = 4;
    }
    local_30 = aiStack_44[3];
    local_20 = 0xffffffff;
    uVar5 = 0;
    ExceptionList = &local_14;
    if (0 < iVar2) {
      local_4c[0] = aiStack_44 + iVar2 * -10 + 4;
      ExceptionList = &local_14;
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar4 = *(int *)((int)this + param_1 * 4 + 0x30);
        if (uVar5 < *(uint *)(iVar4 + 0xc)) {
          piVar6 = (int *)(*(int *)(iVar4 + 8) * uVar5 + *(int *)(iVar4 + 0x1c));
        }
        else {
          piVar6 = nullptr;
        }
        local_78[iVar2 * -10 + 7] = piVar6[2];
        local_78[iVar2 * -10 + 6] = piVar6[1];
        local_78[iVar2 * -10 + 5] = param_3;
        local_78[iVar2 * -10 + 4] = param_2;
        local_78[iVar2 * -10 + 3] = 0x62d3b3;
        iVar1 = st::fn_006ACF90(local_78[iVar2 * -10 + 4],local_78[iVar2 * -10 + 5],
                             local_78[iVar2 * -10 + 6],local_78[iVar2 * -10 + 7]);
        if (iVar1 < aiStack_44[3]) {
          local_24 = uVar5;
          aiStack_44[3] = iVar1;
        }
        if ((piVar6[7] == 0) && (iVar1 < local_30)) {
          local_30 = iVar1;
          local_20 = uVar5;
        }
        piVar7 = local_4c[0] + -9;
        memmove(piVar7, piVar6, 0x20); /* compiler REP MOVS byte copy */
        local_4c[0][-1] = iVar1;
        *local_4c[0] = 0;
        uVar5 = uVar5 + 1;
        local_4c[0] = local_4c[0] + 10;
      } while ((int)uVar5 < iVar2);
    }
    uVar3 = local_20;
    uVar5 = local_24;
    iVar4 = iVar2 * -0x28 + -0x58;
    if ((int)local_20 < 0) {
      if ((int)local_24 < 0) {
        ExceptionList = local_14;
        return local_2c;
      }
      iVar4 = local_24 * 0x28 + iVar4;
      *param_5 = aiStack_44[iVar2 * -10 + local_24 * 10 + -4];
      param_5[1] = *(int *)((st_stack_frame + 76) + iVar4 + 0x58);
      param_5[2] = (int)local_4c[iVar2 * -10 + local_24 * 10];
      param_5[3] = aiStack_44[iVar2 * -10 + local_24 * 10];
      local_78[iVar2 * -10 + 7] = 1;
      local_78[iVar2 * -10 + 6] = uVar5;
      local_78[iVar2 * -10 + 5] = aiStack_44[iVar2 * -10 + uVar5 * 10];
      local_78[iVar2 * -10 + 4] = (uint)local_4c[iVar2 * -10 + uVar5 * 10];
      local_78[iVar2 * -10 + 3] = *(undefined4 *)((st_stack_frame + 76) + iVar4 + 0x58);
      local_78[iVar2 * -10 + 2] = aiStack_44[iVar2 * -10 + uVar5 * 10 + -4];
    }
    else {
      iVar4 = local_20 * 0x28 + iVar4;
      *param_5 = aiStack_44[iVar2 * -10 + local_20 * 10 + -4];
      param_5[1] = *(int *)((st_stack_frame + 76) + iVar4 + 0x58);
      param_5[2] = (int)local_4c[iVar2 * -10 + local_20 * 10];
      param_5[3] = aiStack_44[iVar2 * -10 + local_20 * 10];
      local_78[iVar2 * -10 + 7] = 1;
      local_78[iVar2 * -10 + 6] = uVar3;
      local_78[iVar2 * -10 + 5] = aiStack_44[iVar2 * -10 + uVar3 * 10];
      local_78[iVar2 * -10 + 4] = (uint)local_4c[iVar2 * -10 + uVar3 * 10];
      local_78[iVar2 * -10 + 3] = *(undefined4 *)((st_stack_frame + 76) + iVar4 + 0x58);
      local_78[iVar2 * -10 + 2] = aiStack_44[iVar2 * -10 + uVar3 * 10 + -4];
    }
    local_78[iVar2 * -10 + 1] = param_1;
    local_78[iVar2 * -10] = 0x62d442;
    st::fn_00402527(this,local_78[iVar2 * -10 + 1],local_78[iVar2 * -10 + 2],
                       local_78[iVar2 * -10 + 3],local_78[iVar2 * -10 + 4],local_78[iVar2 * -10 + 5]
                       ,local_78[iVar2 * -10 + 6],local_78[iVar2 * -10 + 7]);
    local_2c = 1;
  }
  ExceptionList = local_14;
  return local_2c;
}

// 0062D550 FUN_0062d550
#line 1 "decomp/ST.exe/functions/0062D550/decomp.c"

uint * st::fn_0062D550(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int local_c;
  uint *local_8;

  piVar2 = param_2;
  iVar5 = 0;
  iVar3 = 0;
  *param_2 = 0;
  auto param_2_after_write = (int *)0x8; /* compiler stack-slot lifetime split */
  piVar7 = param_1;
  do {
    iVar1 = *piVar7;
    if (iVar1 != 0) {
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x1c + *(int *)(iVar1 + 0xc) * *(int *)(iVar1 + 8);
    }
    piVar7 = piVar7 + 1;
    param_2_after_write = (int *)((int)param_2_after_write + -1);
  } while (param_2_after_write != nullptr);
  if (iVar5 != 0) {
    uVar6 = *piVar2 + iVar5 + iVar3 * 4;
    *piVar2 = uVar6;
    puVar4 = st::pointer_boundary_cast<uint *>(st::fn_006AAC70(uVar6));
    local_c = 8;
    puVar8 = puVar4;
    do {
      if ((uint *)*param_1 != nullptr) {
        local_8 = st::pointer_boundary_cast<uint *>(st::fn_006B0020((uint *)*param_1,(int *)&param_2_after_write));
        if ((local_8 != nullptr) && (param_2_after_write != nullptr)) {
          *puVar8 = (uint)param_2_after_write;
          puVar9 = local_8;
          puVar10 = puVar8 + 1;
          for (uVar6 = (uint)param_2_after_write >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar6 = (uint)param_2_after_write & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(char *)puVar10 = (char)*puVar9;
            puVar9 = (uint *)((int)puVar9 + 1);
            puVar10 = (uint *)((int)puVar10 + 1);
          }
          st::fn_006AB060(&local_8);
          puVar8 = (uint *)((int)(puVar8 + 1) + (int)param_2_after_write);
        }
      }
      param_1 = param_1 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    return puVar4;
  }
  return nullptr;
}

// 0062D7D0 FUN_0062d7d0
#line 1 "decomp/ST.exe/functions/0062D7D0/decomp.c"

int st::fn_0062D7D0(int *param_1,int *param_2)

{
  int iVar1;
  DArrayTy *pDVar2;
  int iVar3;
  int *piVar4;

  piVar4 = param_2;
  iVar3 = 0;
  auto param_2_after_write = (int *)0x8; /* compiler stack-slot lifetime split */
  do {
    if (*param_1 != 0) {
      pDVar2 = st::fn_006B0060(nullptr,(uint *)(piVar4 + 1));
      *param_1 = (int)pDVar2;
      iVar1 = *piVar4;
      piVar4 = (int *)((int)(piVar4 + 1) + iVar1);
      iVar3 = iVar3 + 4 + iVar1;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = param_1 + 1;
    param_2_after_write = (int *)((int)param_2_after_write + -1);
  } while (param_2_after_write != nullptr);
  return iVar3;
}

// 0062DB10 FUN_0062db10
#line 1 "decomp/ST.exe/functions/0062DB10/decomp.c"

void st::fn_0062DB10(int *param_1)

{
  int iVar1;

  if (param_1 != nullptr) {
    iVar1 = st::fn_006E62D0
                      (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1,(int *)&param_1);
    if (iVar1 != -4) {
      st::fn_00402E41((STColl3C *)param_1);
    }
  }
  return;
}

// 0062DB50 FUN_0062db50
#line 4 "decomp/ST.exe/functions/0062DB50/decomp.c"
uint __thiscall st::fn_0062DB50(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x50);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = *(uint *)(iVar1 + 0xc);
  uVar4 = 0xffffffff;
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    uVar4 = 0;
    while (((!bVar5 ||
            (piVar3 = (int *)(*(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c)),
            piVar3 == nullptr)) || (*piVar3 != param_2))) {
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar2;
      if ((int)uVar2 <= (int)uVar4) {
        return 0xffffffff;
      }
    }
  }
  return uVar4;
}

// 0062DBD0 FUN_0062dbd0
#line 4 "decomp/ST.exe/functions/0062DBD0/decomp.c"
uint __thiscall st::fn_0062DBD0(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int local_c;
  uint local_8;

  local_8 = 0xffffffff;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar3 = *(int *)((int)this + param_1 * 4 + 0x50);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  uVar4 = 0;
  if (0 < iVar3) {
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar1 = *(int *)((int)this + param_1 * 4 + 0x50);
      if (((uVar4 < *(uint *)(iVar1 + 0xc)) &&
          (piVar2 = (int *)(*(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c)),
          piVar2 != nullptr)) && (*piVar2 == param_2)) {
        piVar2 = piVar2 + 4;
        local_c = 3;
        do {
          if ((int *)*piVar2 != nullptr) {
            st::fn_00404BEC((int *)*piVar2);
            *piVar2 = 0;
          }
          piVar2 = piVar2 + 1;
          local_c = local_c + -1;
        } while (local_c != 0);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        st::fn_006B0C70(*(DArrayTy **)((int)this + param_1 * 4 + 0x50),uVar4);
        local_8 = uVar4;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar3);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((-1 < (int)local_8) && (iVar3 = *(int *)((int)this + param_1 * 4 + 0x70), iVar3 != 0)) {
      uVar4 = 0;
      if (0 < *(int *)(iVar3 + 0xc)) {
        bVar5 = *(int *)(iVar3 + 0xc) != 0;
        do {
          if (((bVar5) && (iVar3 = *(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c), iVar3 != 0)
              ) && ((int)local_8 < *(int *)(iVar3 + 4))) {
            *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
          }
          uVar4 = uVar4 + 1;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar3 = *(int *)((int)this + param_1 * 4 + 0x70);
          bVar5 = uVar4 < *(uint *)(iVar3 + 0xc);
        } while ((int)uVar4 < (int)*(uint *)(iVar3 + 0xc));
      }
    }
  }
  return local_8;
}

// 0062DD00 FUN_0062dd00
#line 4 "decomp/ST.exe/functions/0062DD00/decomp.c"
void __thiscall st::fn_0062DD00(void *this,int param_1)

{
  DArrayTy *array;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  array = *(DArrayTy **)((int)this + param_1 * 4 + 0x50);
  if (array != nullptr) {
    st::fn_006AE110(array);
    *(undefined4 *)((int)this + param_1 * 4 + 0x50) = 0;
  }
  return;
}

// 0062DF30 FUN_0062df30
#line 4 "decomp/ST.exe/functions/0062DF30/decomp.c"
uint __thiscall st::fn_0062DF30(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x70);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = *(uint *)(iVar1 + 0xc);
  uVar4 = 0xffffffff;
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    uVar4 = 0;
    while (((!bVar5 ||
            (piVar3 = (int *)(*(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c)),
            piVar3 == nullptr)) || (*piVar3 != param_2))) {
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar2;
      if ((int)uVar2 <= (int)uVar4) {
        return 0xffffffff;
      }
    }
  }
  return uVar4;
}

// 0062DFB0 FUN_0062dfb0
#line 1 "decomp/ST.exe/functions/0062DFB0/decomp.c"

/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_0062DFB0(void)

{
  return;
}

// 0062DFD0 FUN_0062dfd0
#line 4 "decomp/ST.exe/functions/0062DFD0/decomp.c"
uint __thiscall st::fn_0062DFD0(void *this,int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint local_c;
  uint local_8;

  local_c = 0xffffffff;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x70);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0xc);
    local_8 = 0;
    if (0 < iVar1) {
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar3 = *(int *)((int)this + param_1 * 4 + 0x70);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((((local_8 < *(uint *)(iVar3 + 0xc)) &&
             (piVar4 = (int *)(*(int *)(iVar3 + 8) * local_8 + *(int *)(iVar3 + 0x1c)),
             piVar4 != nullptr)) && (*piVar4 == param_2)) && (uVar2 = piVar4[2], -1 < (int)uVar2)
           ) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar3 = *(int *)((int)this + param_1 * 4 + 0x50);
          if (((iVar3 != 0) && (uVar2 < *(uint *)(iVar3 + 0xc))) &&
             (iVar3 = *(int *)(iVar3 + 8) * uVar2 + *(int *)(iVar3 + 0x1c), iVar3 != 0)) {
            st::fn_0040561E();
            *param_3 = piVar4[2];
            *(undefined4 *)(iVar3 + 0x10 + piVar4[2] * 4) = 0;
            *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + -1;
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          st::fn_006B0C70(*(DArrayTy **)((int)this + param_1 * 4 + 0x70),local_8);
          local_c = local_8;
        }
        local_8 = local_8 + 1;
      } while ((int)local_8 < iVar1);
    }
    return local_c;
  }
  return 0xffffffff;
}

// 0062E0F0 FUN_0062e0f0
#line 4 "decomp/ST.exe/functions/0062E0F0/decomp.c"
void __thiscall st::fn_0062E0F0(void *this,int param_1)

{
  DArrayTy *array;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  array = *(DArrayTy **)((int)this + param_1 * 4 + 0x70);
  if (array != nullptr) {
    st::fn_006AE110(array);
    *(undefined4 *)((int)this + param_1 * 4 + 0x70) = 0;
  }
  return;
}

// 0062E170 FUN_0062e170
#line 4 "decomp/ST.exe/functions/0062E170/decomp.c"
void st::fn_0062E170(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 local_30 [5];
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  memset(local_30, 0, 0x2c); /* compiler bulk-zero initialization */
  local_30[3] = 1;
  local_30[2] = 1;
  local_30[0] = 0x140;
  local_30[1] = param_1;
  local_1c = param_2 * 0xc9 + 100;
  local_18 = param_3 * 0xc9 + 100;
  local_10 = param_7;
  local_14 = param_4 * 200 + 100;
  local_c = param_5;
  local_8 = param_6;
  /* ST_CALLSITE[0062E1F7]: CALL dword ptr [EDX + 0x8] */
  g_playSystem_00802A38->vfunc_08(0x144,0,0,(short)local_30,0);
  return;
}

// 0062E240 FUN_0062e240
#line 4 "decomp/ST.exe/functions/0062E240/decomp.c"
void __thiscall
st::fn_0062E240(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
            uint param_6)

{
  uint uVar1;
  STWorldObject *this_00;
  short sVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  void *local_8;

  sVar4 = (short)param_2;
  local_8 = this;
  if (((((((-1 < sVar4) && (sVar4 < g_worldGrid.sizeX)) && (sVar5 = (short)param_3, -1 < sVar5)) &&
        ((sVar5 < g_worldGrid.sizeY && (sVar2 = (short)param_4, -1 < sVar2)))) &&
       ((sVar2 < g_worldGrid.sizeZ &&
        ((this_00 = STGridAt3D(g_worldGrid, sVar4, sVar5, sVar2).objects[0], this_00 != nullptr &&
         (*(int *)&this_00->field_0x18 == param_5)))))) &&
      ((this_00->value_20 == 1000 &&
       /* ST_CALLSITE[0062E2BE]: CALL dword ptr [EDX + 0x2c] */
       (iVar3 = this_00->GetObjectTypeId(), iVar3 == 0x6e)))) ||
     ((param_5 != 0 &&
      (iVar3 = st::fn_006E62D0
                         (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_5,
                          (int *)&local_8), iVar3 != -4)))) {
    uVar6 = param_6;
    if (param_6 == 0) {
      uVar6 = 1;
    }
    if (param_6 < 0x80000000) {
      iVar3 = 0;
      do {
        uVar1 = STField<int>(this,0xb4) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0xb4) = uVar1;
        st::fn_00403DA5(param_1,param_2,param_3,param_4,param_5,(uVar1 >> 0x10) % 0x1f + iVar3,3);
        iVar3 = iVar3 + 0x1e;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return;
}

// 0062E3A0 FUN_0062e3a0
#line 4 "decomp/ST.exe/functions/0062E3A0/decomp.c"
void __thiscall st::fn_0062E3A0(void *this,int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;

  iVar1 = param_3;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)((int)this + (int)param_1 * 4 + 0x50);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0xc))) &&
     (iVar2 = *(int *)(iVar2 + 8) * param_2 + *(int *)(iVar2 + 0x1c), iVar2 != 0)) {
    puVar4 = (undefined4 *)(iVar2 + 0x10);
    iVar2 = 3;
    do {
      if (((AnonShape_005EFAE0_B406B78B *)*puVar4 != nullptr) &&
         (iVar3 = st::fn_006E62D0
                            (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)*puVar4,
                             (int *)&param_1), iVar3 != -4)) {
        if (iVar1 == 0) {
          st::fn_004049D0((AnonShape_005FB030_9C7404C6 *)param_1);
        }
        else if (iVar1 == 1) {
          st::fn_00402E41((STColl3C *)param_1);
        }
      }
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 0062E440 FUN_0062e440
#line 4 "decomp/ST.exe/functions/0062E440/decomp.c"
undefined4
st::fn_0062E440(int param_1,ushort param_2,ushort param_3,ushort param_4,int param_5,int param_6)

{
  uint uVar1;
  undefined4 uVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STManRub3C *in_ECX;

  /* ST_CALLSITE[0062E463]: CALL 0x00403279; direct=00403279 STManRub3C::AddNewDock */
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uVar1 = st::fn_00403279
                    (in_ECX,param_1,param_2,param_3,param_4,param_5,(ushort)param_6,&param_6);
  uVar2 = 1;
  if ((int)uVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// 0062E490 FUN_0062e490
#line 4 "decomp/ST.exe/functions/0062E490/decomp.c"
undefined4 __thiscall st::fn_0062E490(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_stack_00000014;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_stack_00000018;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uVar1 = st::fn_004048AE(this,(int)param_1,in_stack_00000014);
  if (-1 < (int)uVar1) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = *(int *)((int)this + (int)param_1 * 4 + 0x50);
    if (uVar1 < *(uint *)(iVar2 + 0xc)) {
      iVar2 = *(int *)(iVar2 + 8) * uVar1 + *(int *)(iVar2 + 0x1c);
    }
    else {
      iVar2 = 0;
    }
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    if (in_stack_00000018 != 0) {
      *(undefined4 *)(iVar2 + 0x24) = 1;
      return 0xffffffff;
    }
    st::fn_00405696(this,param_1,uVar1,0);
    *(undefined4 *)(iVar2 + 0x24) = 0;
  }
  return 0xffffffff;
}

// 0062E520 FUN_0062e520
#line 4 "decomp/ST.exe/functions/0062E520/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0062E520 returns return of FUN_0062dbd0 @ 0062E531 */

uint __thiscall st::fn_0062E520(void *this,int param_1,int param_2)

{
  uint uVar1;

  uVar1 = st::fn_004037A1(this,param_1,param_2);
  return uVar1;
}

// 0062E550 FUN_0062e550
#line 4 "decomp/ST.exe/functions/0062E550/decomp.c"
uint __thiscall st::fn_0062E550(void *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;

  uVar1 = st::fn_004048AE(this,param_1,param_3);
  if ((int)uVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    /* ST_CALLSITE[0062E577]: CALL 0x0040543e; direct=0040543E STManRub3C::AddNewColl3 */
    uVar2 = st::fn_0040543E(st::pointer_boundary_cast<STManRub3C *>(this),param_1,param_2,param_3,uVar1);
    if (-1 < (int)uVar2) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar3 = *(int *)((int)this + param_1 * 4 + 0x50);
      if (uVar1 < *(uint *)(iVar3 + 0xc)) {
        iVar3 = *(int *)(iVar3 + 8) * uVar1 + *(int *)(iVar3 + 0x1c);
      }
      else {
        iVar3 = 0;
      }
      iVar4 = 0;
      piVar5 = (int *)(iVar3 + 0x10);
      do {
        if (*piVar5 == 0) {
          *(int *)(iVar3 + 0x10 + iVar4 * 4) = param_2;
          *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
          return uVar2;
        }
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar4 < 3);
      return uVar2;
    }
  }
  return uVar2;
}

// 0062E610 FUN_0062e610
#line 4 "decomp/ST.exe/functions/0062E610/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0062E610 -> 0062DFD0 @ 0062E61F

   [STPrototypeApplier] Propagated return.
   Evidence: 0062E610 returns return of FUN_0062dfd0 @ 0062E625 */

uint __thiscall st::fn_0062E610(void *this,int param_1,int *param_2)

{
  uint uVar1;

  uVar1 = st::fn_00405D2B(this,param_1,(int)param_2,(int *)&param_2);
  return uVar1;
}

// 0062E640 FUN_0062e640
#line 4 "decomp/ST.exe/functions/0062E640/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall st::fn_0062E640(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;

  uVar2 = st::fn_004048AE(this,param_1,param_2);
  if ((int)uVar2 < 0) {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x50);
  if (uVar2 < *(uint *)(iVar1 + 0xc)) {
    return *(undefined4 *)(*(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c) + 0xc);
  }
  return _DAT_0000000c;
}

// 0062E6B0 FUN_0062e6b0
#line 4 "decomp/ST.exe/functions/0062E6B0/decomp.c"
undefined4 __thiscall st::fn_0062E6B0(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;

  uVar2 = st::fn_004048AE(this,param_1,param_2);
  if (-1 < (int)uVar2) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)((int)this + param_1 * 4 + 0x50);
    if (uVar2 < *(uint *)(iVar1 + 0xc)) {
      piVar3 = (int *)(*(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c));
    }
    else {
      piVar3 = nullptr;
    }
    st::fn_00403B5C(this,param_1,(int)STField<short>(piVar3,6),(int)(short)piVar3[2],
                       (int)STField<short>(piVar3,10),*piVar3,1);
    return 1;
  }
  return 0;
}

// 0062ECE0 CreateSTRubbish
#line 4 "decomp/ST.exe/functions/0062ECE0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7D4>004054FC

   [STObjectFactoryApplier] Central object factory for 0x0132 (ST_OBJECT_ST_RUBBISH).
   Evidence: registry[22] at 007CA7D0 stores type 0x0132 and executable pointer 004054FC; allocation
   size 510 uniquely matches /STRubbishC */

STRubbishC * __cdecl st::fn_0062ECE0(void)

{
  STRubbishC *pSVar1;

  pSVar1 = (STRubbishC *)st::fn_006B04D0(0x1fe);
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_00405DDF(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 0062F080 FUN_0062f080
#line 4 "decomp/ST.exe/functions/0062F080/decomp.c"
undefined4 __thiscall
st::fn_0062F080(void *this,int param_1,undefined4 param_2,STRubbishC_LoadImagSpr_param_4Enum param_3)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x1e5);
  if (((iVar1 != 0) && (*(void **)(iVar1 + 0x10) != nullptr)) &&
     /* ST_CALLSITE[0062F0A9]: CALL 0x004025e5; direct=004025E5 STRubbishC::LoadImagSpr */
     (iVar1 = st::fn_004025E5
                        (st::pointer_boundary_cast<STRubbishC *>(this),*(void **)(iVar1 + 0x10),(int *)(iVar1 + 0x14),param_2,param_3),
     iVar1 == 0)) {
    return 1;
  }
  return 0;
}

// 0062F0D0 FUN_0062f0d0
#line 4 "decomp/ST.exe/functions/0062F0D0/decomp.c"
void __thiscall st::fn_0062F0D0(void *this,int param_1)

{
  int iVar1;
  STT3DSprC *this_00;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x1e5);
  if ((iVar1 != 0) && (this_00 = *(STT3DSprC **)(iVar1 + 0x10), this_00 != nullptr)) {
    st::fn_00405AA6(this_00,'\x0e');
    /* ST_CALLSITE[0062F106]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    st::fn_00405240(this_00,0xe,g_playSystem_00802A38->field_00E4);
    *(undefined1 *)(*(int *)((int)this + param_1 * 4 + 0x1e5) + 0x3d) = 1;
    st::fn_006EA3E0(g_sT3DSMAPContext_00807598,this_00->field_0018,-1);
  }
  return;
}

// 0062F150 FUN_0062f150
#line 4 "decomp/ST.exe/functions/0062F150/decomp.c"
void __fastcall st::fn_0062F150(RecoveredRecord_STRubbishC_0062F150 *param_1)

{
  int iVar1;
  STT3DSprC *this;
  VisibleClassTy *pVVar2;
  int *piVar3;
  int local_10;
  int local_c;
  int local_8;

  pVVar2 = g_visibleClass_00802A88;
  local_c = 0;
  if ((param_1->field_01F9 != '\0') && (g_visibleClass_00802A88 != nullptr)) {
    iVar1 = param_1->field_01DD;
    if ((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) {
      /* ST_CALLSITE[0062F1B9]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
      st::fn_00403F53
                (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,param_1->field_01D5,
                 param_1->field_01D9,&local_8,&local_10);
      if (((((-1 < iVar1) && (iVar1 < 5)) && (-1 < local_8)) &&
          (((local_8 < (int)pVVar2->field_0030 &&
            (local_10 = g_centeredOffsets5[iVar1] + local_10, -1 < local_10)) &&
           (local_10 < pVVar2->field_0034)))) &&
         ((pVVar2->field_004C != nullptr &&
          (pVVar2->field_004C[local_8 + local_10 * pVVar2->field_0030] == 0)))) goto LAB_0062f208;
    }
    local_c = 1;
  }
LAB_0062f208:
  local_8 = 0;
  piVar3 = (int *)&param_1->field_0x1e5;
  do {
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      this = *(STT3DSprC **)(iVar1 + 0x10);
      if (*(int *)(iVar1 + 0x18) == 2) {
        if (g_playSystem_00802A38->field_00E4 % 5 == 0) {
          if (this != nullptr) {
            /* ST_CALLSITE[0062F261]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
            st::fn_0040116D
                      (this,PTR_00806724->entries[((byte *)iVar1)[0x34]],
                       (int)PTR_00806724->field_002C);
          }
          *(char *)(*piVar3 + 0x34) = *(char *)(*piVar3 + 0x34) + '\x01';
          if (PTR_00806724->entryCount <= (short)(ushort)*(byte *)(*piVar3 + 0x34)) {
            st::fn_00404728(param_1,local_8);
          }
        }
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      else if (*(uint *)(iVar1 + 0x39) < g_playSystem_00802A38->field_00E4 - *(int *)(iVar1 + 0x35))
      {
        *(undefined4 *)(iVar1 + 0x18) = 2;
        *(uint *)(*piVar3 + 0x35) = g_playSystem_00802A38->field_00E4;
        *(undefined4 *)(*piVar3 + 0x39) = 10;
        *(undefined1 *)(*piVar3 + 0x34) = 0;
      }
      iVar1 = *piVar3;
      if (local_c == 0) {
        if (((iVar1 != 0) && (((char *)iVar1)[0x3d] != '\0')) && (this != nullptr)) {
          st::fn_00403D0F(this);
          *(undefined1 *)(*piVar3 + 0x3d) = 0;
        }
      }
      else if (((iVar1 != 0) && (((char *)iVar1)[0x3d] == '\0')) && (this != nullptr)) {
        st::fn_00402982(this,0);
        *(undefined1 *)(*piVar3 + 0x3d) = 1;
      }
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + 1;
  } while (local_8 < 5);
  return;
}

// 0062F6C0 FUN_0062f6c0
#line 4 "decomp/ST.exe/functions/0062F6C0/decomp.c"
undefined4 __thiscall st::fn_0062F6C0(void *this,int param_1)

{
  int *slotStorage;
  int iVar1;
  STT3DSprC *pSVar2;
  undefined4 uVar3;

  uVar3 = 0;
  if ((-1 < param_1) && (param_1 < 5)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)((int)this + param_1 * 4 + 0x1e5);
    slotStorage = (int *)((int)this + param_1 * 4 + 0x1e5);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 4);
      if ((iVar1 == 3) || (iVar1 == 6)) {
        /* ST_CALLSITE[0062F702]: CALL 0x004050c9; direct=004050C9 STRubbishC::sub_00630260 */
        st::fn_004050C9(st::pointer_boundary_cast<STRubbishC *>(this),param_1,0);
      }
      pSVar2 = *(STT3DSprC **)(*slotStorage + 0x10);
      if (pSVar2 != nullptr) {
        st::fn_004021D5(pSVar2);
        st::fn_0072E2B0((HoloTy *)pSVar2);
        *(undefined4 *)(*slotStorage + 0x10) = 0;
      }
      uVar3 = 1;
      STField<int>(this,0x1e1) = STField<int>(this,0x1e1) + -1;
      st::fn_006AB060(slotStorage);
      *slotStorage = 0;
    }
    if (STField<int>(this,0x1e1) == 0) {
      STField<undefined4>(this,0x1fa) = 2;
    }
    return uVar3;
  }
  return 0;
}

// 0062F7A0 FUN_0062f7a0
#line 4 "decomp/ST.exe/functions/0062F7A0/decomp.c"
void __fastcall st::fn_0062F7A0(AnonShape_0062F7A0_700302F7 *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    st::fn_00404728(param_1,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  if (((-1 < (int)param_1->field_01D5) || (-1 < (int)param_1->field_01D9)) ||
     (-1 < (int)param_1->field_01DD)) {
    st::fn_00404EC1((short)param_1->field_01D5,(short)param_1->field_01D9,
                       (short)param_1->field_01DD,1,(AnonShape_00495FF0_59081BDD *)param_1);
    param_1->field_01D5 = 0xffffffff;
    param_1->field_01D9 = 0xffffffff;
    param_1->field_01DD = 0xffffffff;
  }
  return;
}

// 0062F830 FUN_0062f830
#line 4 "decomp/ST.exe/functions/0062F830/decomp.c"
undefined4 __thiscall st::fn_0062F830(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)((int)this + param_2 * 4 + 0x1e5);
  if ((((piVar1 != nullptr) && (STField<int>(this,0x1fa) != 2)) && (piVar1[8] == param_3)) &&
     ((piVar1[9] == param_4 && (iVar2 = *piVar1, 0 < iVar2)))) {
    if (param_1 < iVar2) {
      *piVar1 = iVar2 - param_1;
      return 1;
    }
    *piVar1 = 0;
    *(undefined4 *)(*(int *)((int)this + param_2 * 4 + 0x1e5) + 0x18) = 2;
    *(uint *)(*(int *)((int)this + param_2 * 4 + 0x1e5) + 0x35) = g_playSystem_00802A38->field_00E4;
    *(undefined4 *)(*(int *)((int)this + param_2 * 4 + 0x1e5) + 0x39) = 10;
    *(undefined1 *)(*(int *)((int)this + param_2 * 4 + 0x1e5) + 0x34) = 0;
    uVar3 = 1;
  }
  return uVar3;
}

// 0062F940 FUN_0062f940
#line 4 "decomp/ST.exe/functions/0062F940/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0062F940 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 0062EB26 */

byte * __thiscall st::fn_0062F940(void *this,uint *param_1)

{
  byte *allocation;
  int *piVar1;
  byte *pbVar2;
  int *piVar3;
  byte *puVar4;
  int iVar5;
  byte *pbVar6;
  uint local_c;
  int local_8;

  local_8 = 0;
  *param_1 = 0;
  local_c = 0x3d;
  allocation = st::pointer_boundary_cast<byte *>(st::fn_006AAC70(0x3d));
  if (allocation != nullptr) {
    allocation[0] = 0xbe;
    allocation[1] = 0;
    allocation[2] = 0;
    allocation[3] = 0;
    allocation[4] = 0xff;
    allocation[5] = 0;
    allocation[6] = 0;
    allocation[7] = 0;
    allocation[8] = 0;
    allocation[9] = 0;
    allocation[10] = 0;
    allocation[0xb] = 0;
    allocation[0xc] = 2;
    allocation[0xd] = 0;
    allocation[0xe] = 0;
    allocation[0xf] = 0;
    iVar5 = 5;
    *(undefined4 *)(allocation + 0x14) = STField<undefined4>(this,0x1d5);
    *(undefined4 *)(allocation + 0x18) = STField<undefined4>(this,0x1d9);
    *(undefined4 *)(allocation + 0x1c) = STField<undefined4>(this,0x1dd);
    piVar3 = (int *)((int)this + 0x1e5);
    *(undefined4 *)(allocation + 0x20) = STField<undefined4>(this,0x1e1);
    pbVar2 = allocation + 0x24;
    piVar1 = piVar3;
    do {
      *(int *)pbVar2 = *piVar1;
      if (*piVar1 != 0) {
        local_8 = local_8 + 1;
      }
      pbVar2 = pbVar2 + 4;
      piVar1 = piVar1 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    allocation[0x38] = STField<byte>(this,0x1f9);
    *(undefined4 *)(allocation + 0x39) = STField<undefined4>(this,0x1fa);
    if (local_8 != 0) {
      local_c = local_8 * 0x3e + 0x3d;
      allocation = st::pointer_boundary_cast<byte *>(st::fn_006ACF50(allocation,local_c));
      if (allocation == nullptr) {
        return nullptr;
      }
      pbVar2 = allocation + 0x3d;
      local_8 = 5;
      do {
        if ((undefined4 *)*piVar3 != nullptr) {
          puVar4 = (byte *)*piVar3;
          pbVar6 = pbVar2;
          memmove(pbVar6, puVar4, 0x3e); /* compiler REP MOVS byte copy */
          pbVar2 = pbVar2 + 0x3e;
        }
        piVar3 = piVar3 + 1;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    *param_1 = local_c;
  }
  return allocation;
}

// 0062FA80 FUN_0062fa80
#line 4 "decomp/ST.exe/functions/0062FA80/decomp.c"
int __thiscall st::fn_0062FA80(void *this,AnonShape_0062FA80_0B91B2B9 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  AnonShape_0062FA80_0B91B2B9 *pAVar6;
  int local_EAX_76;
  int iVar8;
  int iVar7;
  int *piVar9;
  undefined4 *puVar10;
  byte *puVar11;
  byte *puVar12;
  int local_c;
  int local_8;

  pAVar6 = param_1;
  local_c = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == nullptr) {
    return 0;
  }
  STField<undefined4>(this,0x1d5) = param_1->field_0014;
  uVar4 = param_1->field_0018;
  STField<undefined4>(this,0x1d9) = uVar4;
  uVar5 = param_1->field_001C;
  STField<undefined4>(this,0x1dd) = uVar5;
  local_EAX_76 = st::fn_00404D3B(STField<short>(this,0x1d5),(short)uVar4,(short)uVar5);
  if (local_EAX_76 != 0) {
    sVar1 = STField<short>(this,0x1d5);
    sVar2 = STField<short>(this,0x1dd);
    sVar3 = STField<short>(this,0x1d9);
    if ((((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
         ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) ||
        ((g_worldGrid.sizeZ <= sVar2 ||
         (STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[1] == nullptr)))) &&
       /* ST_CALLSITE[0062FB6D]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
       (iVar8 = st::fn_00401325
                          ((short)STField<undefined4>(this,0x1d5),
                           (short)STField<undefined4>(this,0x1d9),
                           (short)STField<undefined4>(this,0x1dd),1,st::pointer_boundary_cast<RecoveredRecord_DumpClassC_00495EC0 *>(this)), iVar8 == 0)) {
      piVar9 = (int *)&param_1->field_0x24;
      STField<undefined4>(this,0x1e1) = param_1->field_0020;
      STField<undefined1>(this,0x1f9) = param_1->field_0038;
      auto param_1_after_write = (AnonShape_0062FA80_0B91B2B9 *)0x5; /* compiler stack-slot lifetime split */
      do {
        /* ST_CALLSITE[0062FB9D]: CALL 0x004017f3; direct=004017F3 STRubbishC::RubbishCreatePart */
        if ((*piVar9 != 0) && (iVar7 = st::fn_004017F3(st::pointer_boundary_cast<STRubbishC *>(this)), -1 < iVar7)) {
          local_c = local_c + 1;
        }
        piVar9 = piVar9 + 1;
        param_1_after_write = (AnonShape_0062FA80_0B91B2B9 *)&param_1_after_write[-1].field_0x3b;
      } while (param_1_after_write != nullptr);
      STField<undefined4>(this,0x1fa) = *(undefined4 *)&pAVar6->field_0x39;
      if (local_c == 0) {
        return 0;
      }
      local_8 = 0x3d;
      puVar10 = (undefined4 *)&pAVar6[1].field_0x1;
      piVar9 = (int *)((int)this + 0x1e5);
      param_1_after_write = (AnonShape_0062FA80_0B91B2B9 *)0x5;
      do {
        puVar12 = (byte *)*piVar9;
        if (puVar12 != nullptr) {
          local_8 = local_8 + 0x3e;
          uVar4 = puVar12[4];
          puVar11 = (byte *)(puVar10);
          memmove(puVar12, puVar11, 0x3e); /* compiler REP MOVS byte copy */
          puVar10 = (undefined4 *)((int)puVar10 + 0x3e);
          *(undefined4 *)(*piVar9 + 0x10) = uVar4;
        }
        piVar9 = piVar9 + 1;
        param_1_after_write = (AnonShape_0062FA80_0B91B2B9 *)&param_1_after_write[-1].field_0x3b;
      } while (param_1_after_write != nullptr);
      return local_8;
    }
  }
  /* ST_CALLSITE[0062FC1B]: CALL 0x00405885; direct=00405885 STRubbishC::sub_0062F900 */
  st::fn_00405885(st::pointer_boundary_cast<STRubbishC *>(this));
  return 0;
}

// 0062FE00 FUN_0062fe00
#line 4 "decomp/ST.exe/functions/0062FE00/decomp.c"
void __fastcall st::fn_0062FE00(STJellyGunC *param_1)

{
  STT3DSprC *pSVar1;
  int iVar2;
  int iVar3;
  int *piVar4;

  iVar3 = 0;
  piVar4 = (int *)&param_1->field_0x1e5;
  do {
    if (*piVar4 != 0) {
      if (*(int *)(*piVar4 + 0x10) == 0) {
        pSVar1 = (STT3DSprC *)st::fn_0072E530(0x40);
        if (pSVar1 == nullptr) {
          pSVar1 = nullptr;
        }
        else {
          /* ST_CALLSITE[0062FE2A]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
          pSVar1 = st::fn_00401316(pSVar1);
        }
        *(STT3DSprC **)(*piVar4 + 0x10) = pSVar1;
      }
      iVar2 = st::fn_0040318E(param_1,iVar3,*(undefined4 *)(*piVar4 + 0xc),
                                 *(undefined4 *)(*piVar4 + 4));
      if (iVar2 == 0) {
        if (param_1->field_01E1 == 1) {
          /* ST_CALLSITE[0062FE59]: CALL 0x00405885; direct=00405885 STRubbishC::sub_0062F900 */
          st::fn_00405885((STRubbishC *)param_1);
        }
        else {
          st::fn_00404728(param_1,iVar3);
        }
      }
      else {
        st::fn_004047BE(param_1,iVar3);
      }
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 5);
  return;
}

// 0062FFD0 FUN_0062ffd0
#line 1 "decomp/ST.exe/functions/0062FFD0/decomp.c"

int st::fn_0062FFD0(int param_1,int param_2)

{
  int iVar1;

  iVar1 = param_2 + param_1;
  if (3 < iVar1) {
    iVar1 = iVar1 + -4;
  }
  return iVar1;
}

