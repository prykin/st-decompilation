#include "st/generated.hpp"
// Generated translation unit: source/original/ai/ai_flt.cpp

// 0065D2A0 AiFltClassTy::InitData
#line 1 "decomp/ST.exe/functions/0065D2A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::InitData */

int __thiscall st::fn_0065D2A0(AiFltClassTy *this,undefined4 *param_1)

{
  DArrayTy **ppDVar1;
  AiFltClassTy *pAVar3;
  int iVar4;
  DArrayTy *pDVar5;
  int iVar6;
  byte *puVar7;
  DArrayTy **ppDVar8;
  byte *puVar9;
  InternalExceptionFrame local_50;
  AiFltClassTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pAVar3 = local_c;
  if (iVar4 == 0) {
    if (local_c == nullptr) {
      puVar9 = nullptr;
    }
    else {
      puVar9 = (byte *)(&local_c->field_0020);
    }
    puVar7 = (byte *)(param_1);
    memmove(puVar9, puVar7, 0x260); /* compiler REP MOVS byte copy */
    ppDVar1 = &local_c->field_020B;
    local_c->field_0020 = 900;
    local_c->field_0038 = 1;
    local_8 = 7;
    ppDVar8 = ppDVar1;
    do {
      if (*ppDVar8 != nullptr) {
        pDVar5 = (DArrayTy *)
                 st::fn_006B0060(nullptr,(uint *)((int)ppDVar8[1] + 0x25f + (int)param_1));
        *ppDVar8 = pDVar5;
      }
      ppDVar8 = ppDVar8 + 3;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (*ppDVar1 == nullptr) {
      pDVar5 = st::fn_006AE290(nullptr,10,0x2c,10);
      *ppDVar1 = pDVar5;
    }
    if (pAVar3->field_0217 == nullptr) {
      pDVar5 = st::fn_006AE290(nullptr,0x14,0x34,10);
      pAVar3->field_0217 = pDVar5;
    }
    if (pAVar3->field_0223 == nullptr) {
      pDVar5 = st::fn_006AE290(nullptr,10,0x14,10);
      pAVar3->field_0223 = (AnonPointee_AiFltClassTy_0223 *)pDVar5;
    }
    if (pAVar3->field_022F == nullptr) {
      pDVar5 = st::fn_006AE290(nullptr,10,0xc,10);
      pAVar3->field_022F = (AnonPointee_AiFltClassTy_022F *)pDVar5;
    }
    if (pAVar3->field_023B == nullptr) {
      pDVar5 = st::fn_006AE290(nullptr,10,4,10);
      pAVar3->field_023B = pDVar5;
    }
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  st::fn_0040220C(local_c);
  iVar6 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_flt.cpp",0x31,0,iVar4,"%s",
                             "AiFltClassTy::InitData");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,"E:\\__titans\\ai\\ai_flt.cpp",0x32);
  return iVar4;
}

// 0065D4B0 AiFltClassTy::PrepareToSave
#line 1 "decomp/ST.exe/functions/0065D4B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::PrepareToSave

   [STPrototypeApplier] Propagated return.
   Evidence: 0065D4B0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 00667FC7 */

byte * __thiscall st::fn_0065D4B0(AiFltClassTy *this,uint *param_1)

{
  AiFltClassTy *pAVar2;
  int errorCode;
  AllocationRecord_006684E0 *pAVar3;
  int iVar4;
  byte *pbVar5;
  InternalExceptionFrame local_4c;
  AiFltClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pAVar2 = local_8;
  if (errorCode == 0) {
    if (local_8 == nullptr) {
      pAVar3 = nullptr;
    }
    else {
      pAVar3 = (AllocationRecord_006684E0 *)&local_8->field_0020;
    }
    pAVar3 = st::fn_004014C4(pAVar3,param_1);
    *(undefined4 *)pAVar3 = 900;
    *(undefined4 *)&pAVar3->field_0xc = 1;
    *(undefined4 *)&pAVar3->field_0x66 = pAVar2->field_001C;
    g_currentExceptionFrame = local_4c.previous;
    return (byte *)pAVar3;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_flt.cpp",0x4f,0,errorCode,"%s",
                             "AiFltClassTy::PrepareToSave");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\ai\\ai_flt.cpp",0x50);
  return nullptr;
}

// 0065D760 AiFltClassTy::_AddObjFlt
#line 1 "decomp/ST.exe/functions/0065D760/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::_AddObjFlt

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0065D940 -> 0065D760 @ 0065D98B

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0065D760(AiFltClassTy *this,uint objPtr,int param_2)

{
  bool bVar2;
  AiFltClassTy *pAVar3;
  undefined2 uVar4;
  int iVar5;
  DArrayTy *array;
  int iVar6;
  InternalExceptionFrame local_4c;
  AiFltClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar5 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pAVar3 = local_8;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    if (iVar5 != -100) {
      iVar6 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_flt.cpp",0xa5,0,iVar5,"%s",
                                 "AiFltClassTy::_AddObjFlt");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar5,0,"E:\\__titans\\ai\\ai_flt.cpp",0xa6);
    }
    return;
  }
  if (objPtr == 0) {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  if (local_8->field_007D == -2) {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  if (g_allPlayers_007FA174 != nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar5 = (**(code **)(*(int *)objPtr + 0x2c))();
    if ((iVar5 < 0x32) || (0x73 < iVar5)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if (((bVar2) && (pAVar3->field_007B != 1)) ||
       (iVar5 = (**(code **)(*(int *)objPtr + 0x2c))(), iVar5 == 0x78)) {
      st::fn_006A5E40
                (-100,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_flt.cpp",0x9b);
    }
    array = st::fn_006AE290(nullptr,1,2,1);
    st::fn_006AE1C0(array,(void *)(objPtr + 0x32));
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar5 = (**(code **)(*(int *)objPtr + 0x2c))();
    if ((iVar5 < 1) || (0x28 < iVar5)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (param_2 == 0) {
        uVar4 = 0xfffe;
      }
      else {
        uVar4 = *(undefined2 *)(objPtr + 0x30);
      }
      *(undefined2 *)(objPtr + 0x81c) = uVar4;
    }
    st::fn_0040178F
              (g_allPlayers_007FA174,*(char *)&pAVar3->field_0024,pAVar3->field_007D,&array->flags,
               nullptr);
    st::fn_006AE110(array);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 0065F1D0 AiFltClassTy::AppendZone
#line 1 "decomp/ST.exe/functions/0065F1D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::AppendZone */

int __thiscall st::fn_0065F1D0(AiFltClassTy *this,short *param_1)

{
  int iVar1;
  short sVar2;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  InternalExceptionFrame local_74;
  int local_30;
  int local_2c;
  DArrayTy *local_28;
  uint local_24;
  int local_20;
  AiFltClassTy *local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;

  local_18 = 1;
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_1c = this;
  iVar5 = st::fn_0072D7F0(local_74.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar7 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_flt.cpp",0x2df,0,iVar5,"%s",
                               "AiFltClassTy::AppendZone");
    if (iVar7 == 0) {
      st::fn_006A5E40(iVar5,0,"E:\\__titans\\ai\\ai_flt.cpp",0x2e0);
      return iVar5;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_c = 0;
  local_28 = (DArrayTy *)local_1c->field_022F;
  local_24 = local_28->count;
  if (0 < (int)local_24) {
    sVar2 = param_1[1];
    local_8 = (int)sVar2;
    iVar5 = (int)*param_1;
    local_10 = (int)param_1[3];
    local_14 = (int)param_1[4];
    do {
      if (local_c < local_24) {
        psVar9 = DArrayAt<short>(local_28, local_c);
      }
      else {
        psVar9 = nullptr;
      }
      iVar7 = (int)*psVar9;
      local_30 = local_14 + -1 + local_8;
      iVar8 = (int)psVar9[1];
      local_20 = psVar9[3] + -1 + iVar7;
      local_2c = psVar9[4] + -1 + iVar8;
      if ((((iVar5 < iVar7) || (local_20 < iVar5)) || (local_8 < iVar8)) ||
         (((local_2c < local_8 || (iVar6 = local_10 + -1 + iVar5, iVar6 < iVar7)) ||
          ((psVar9[3] + -1 + iVar7 < iVar6 ||
           ((local_30 < iVar8 || (psVar9[4] + -1 + iVar8 < local_30)))))))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
cf_common_exit_0065F468:
        local_18 = 0;
        break;
      }
      local_20 = local_14 + -1 + local_8;
      if (((((iVar7 < iVar5) || (iVar6 = local_10 + -1 + iVar5, iVar6 < iVar7)) || (iVar8 < local_8)
           ) || ((local_20 < iVar8 || (iVar1 = psVar9[3] + -1 + iVar7, iVar1 < iVar5)))) ||
         ((iVar6 < iVar1 ||
          ((iVar6 = psVar9[4] + -1 + iVar8, iVar6 < local_8 || (local_20 < iVar6)))))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        st::fn_006AE140(local_28,local_c,param_1);
        goto cf_common_exit_0065F468;
      }
      if ((int)local_1c->field_0170 <= (int)local_c) {
        iVar6 = local_10 / 2 + iVar5;
        if ((((iVar6 < iVar7) || (psVar9[3] + iVar7 <= iVar6)) ||
            (iVar6 = local_14 / 2 + local_8, iVar6 < iVar8)) || (psVar9[4] + iVar8 <= iVar6)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) {
          iVar7 = iVar7 + (int)psVar9[3] / 2;
          if (((iVar7 < iVar5) || (local_10 + iVar5 <= iVar7)) ||
             ((iVar8 = iVar8 + (int)psVar9[4] / 2, iVar8 < local_8 || (local_14 + local_8 <= iVar8))
             )) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_0065f3c9;
        }
        iVar7 = psVar9[3] + -1 + (int)*psVar9;
        local_2c = psVar9[1] + -1 + (int)psVar9[4];
        local_30 = local_10 + -1 + iVar5;
        iVar8 = local_14 + -1 + local_8;
        if (iVar5 < *psVar9) {
          *psVar9 = *param_1;
        }
        if (local_8 < psVar9[1]) {
          psVar9[1] = sVar2;
        }
        if (iVar7 < local_30) {
          psVar9[3] = ((short)local_30 - *psVar9) + 1;
        }
        else {
          psVar9[3] = ((short)iVar7 - *psVar9) + 1;
        }
        if (local_2c < iVar8) {
          psVar9[4] = ((short)iVar8 - psVar9[1]) + 1;
        }
        else {
          psVar9[4] = ((short)local_2c - psVar9[1]) + 1;
        }
        goto cf_common_exit_0065F468;
      }
LAB_0065f3c9:
      local_c = local_c + 1;
    } while ((int)local_c < (int)local_24);
  }
  if (local_18 != 0) {
    st::fn_006AE1C0((DArrayTy *)local_1c->field_022F,param_1);
  }
  g_currentExceptionFrame = local_74.previous;
  return 0;
}

// 0065F660 AiFltClassTy::AppendPoint
#line 1 "decomp/ST.exe/functions/0065F660/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::AppendPoint */

int __thiscall st::fn_0065F660(AiFltClassTy *this,short *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  AiFltClassTy *this_00;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  InternalExceptionFrame local_64;
  short local_20 [10];
  AiFltClassTy *local_c;
  int local_8;

  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_c = this;
  iVar6 = st::fn_0072D7F0(local_64.jumpBuffer,0);
  this_00 = local_c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar9 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_flt.cpp",0x303,0,iVar6,"%s",
                               "AiFltClassTy::AppendPoint");
    if (iVar9 == 0) {
      st::fn_006A5E40(iVar6,0,"E:\\__titans\\ai\\ai_flt.cpp",0x304);
      return iVar6;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (0 < param_2) {
    local_8 = 0;
    do {
      local_20[0] = 0;
      local_20[1] = 0;
      local_20[2] = 0;
      local_20[3] = 0;
      local_20[4] = 0;
      local_20[5] = 0;
      local_20[6] = 0;
      local_20[7] = 0;
      local_20[8] = 0;
      local_20[9] = 0;
      sVar1 = param_1[1];
      sVar2 = param_1[4];
      if (sVar1 < 0) {
        iVar6 = this_00->field_001C;
      }
      else {
        iVar6 = this_00->field_001C;
      }
      uVar7 = iVar6 * 0x41c64e6d + 0x3039;
      this_00->field_001C = uVar7;
      sVar3 = param_1[3];
      sVar4 = *param_1;
      if (sVar4 < 0) {
        iVar6 = this_00->field_001C;
      }
      else {
        iVar6 = this_00->field_001C;
      }
      uVar8 = iVar6 * 0x41c64e6d + 0x3039;
      this_00->field_001C = uVar8;
      iVar6 = st::fn_00404D54((uVar8 >> 0x10) % (uint)(int)sVar3 + (int)sVar4,
                                 (uVar7 >> 0x10) % (uint)(int)sVar2 + (int)sVar1,2,local_20,
                                 local_20 + 1,local_20 + 2,0);
      if ((iVar6 != 0) && (iVar6 = st::fn_00404EB2(this_00,local_20), iVar6 != 0)) {
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_2);
  }
  g_currentExceptionFrame = local_64.previous;
  return 0;
}

// 00660180 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::FUN_00660180
#line 1 "decomp/ST.exe/functions/00660180/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_flt.cpp
   Diagnostic line evidence: 1127 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00660180.
   Evidence: incoming_receiver_captures=1; receiver_accesses=5; incoming_edx_uses=0; calls=14;
   ecx_pointer_setup=14; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[8];
   expected_stack=8; receiver_family_members=1; adopt_untyped_existing_thiscall */

undefined4 __thiscall
st::fn_00660180
          (AnonReceiver_00660180 *this,short *param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  DArrayTy *array;
  STGroupBoatC *pSVar3;
  InternalExceptionFrame local_78;
  undefined4 local_34 [3];
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  DArrayTy *local_1c;
  undefined4 local_18;
  short local_14;
  short sStack_12;
  short asStack_10 [2];
  AnonShape_00660180_1CB7CB7C *local_c;
  DArrayTy *local_8;

  *(undefined4 *)&this->field_0xa7 = 0;
  local_c = (AnonShape_00660180_1CB7CB7C *)this;
  if (param_2 != '\x02') {
    iVar2 = 1;
    if (param_2 != '\x01') {
      uVar1 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&this->field_0x1c = uVar1;
      iVar2 = (uVar1 >> 0x10 & 1) + 1;
    }
    if (iVar2 != 2) {
      memset(local_34, 0, 0x18); /* compiler bulk-zero initialization */
      local_34[0] = 1;
      local_28 = *param_1;
      local_26 = param_1[1];
      local_24 = param_1[2];
      local_22 = param_1[3];
      local_20 = param_1[4];
      local_1e = param_1[5];
      if ((*(ushort *)&this->field_0x7d == 0xfffe) ||
         (g_allPlayers_007FA174 == nullptr)) {
        pSVar3 = nullptr;
      }
      else {
        pSVar3 = st::fn_00405CF9(this->field_0x24,*(ushort *)&this->field_0x7d);
      }
      if (pSVar3 == nullptr) {
        return 0xffffffff;
      }
      pSVar3->sub_00498D20(2,(short)local_34);
      return 0;
    }
  }
  local_1c = nullptr;
  local_18 = 0;
  local_8 = nullptr;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  iVar2 = st::fn_0072D7F0(local_78.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_78.previous;
    if (local_8 != nullptr) {
      st::fn_006AE110(local_8);
    }
    return 0xffffffff;
  }
  array = st::fn_006AE290(nullptr,1,6,10);
  local_14 = param_1[3] / 2 + *param_1;
  sStack_12 = param_1[4] / 2 + param_1[1];
  asStack_10[0] = param_1[5] / 2 + param_1[2];
  local_8 = array;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  st::fn_00404D54(CONCAT22(sStack_12,local_14),CONCAT22(asStack_10[0],sStack_12),asStack_10[0],
                     &local_14,&sStack_12,asStack_10,0);
  st::fn_006AE1C0(array,&local_14);
  local_18 = 1;
  local_1c = array;
  if ((local_c->field_007D == 0xfffe) || (g_allPlayers_007FA174 == nullptr)) {
    pSVar3 = nullptr;
  }
  else {
    pSVar3 = st::fn_00405CF9(local_c->field_0024,local_c->field_007D);
  }
  if (pSVar3 == nullptr) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_flt.cpp",0x467);
  }
  else {
    pSVar3->sub_00498D20(6,(short)&local_1c);
  }
  if (array != nullptr) {
    st::fn_006AE110(array);
  }
  g_currentExceptionFrame = local_78.previous;
  return 0;
}

// 006618E0 AiFltClassTy::GoToRepair
#line 1 "decomp/ST.exe/functions/006618E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::GoToRepair
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall GoToRepair(AiFltClassTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=00661B71 RET | 00661BD5 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_006618E0(AiFltClassTy *this)

{
  bool bVar2;
  AiFltClassTy *pAVar3;
  undefined2 uVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int iVar5;
  ushort *puVar6;
  STGameObjC *this_00;
  IMAGE_DOS_HEADER *pIVar7;
  DArrayTy *array;
  int iVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  InternalExceptionFrame local_68;
  undefined4 local_24;
  int local_20;
  AiFltClassTy *local_1c;
  int local_18;
  uint local_14;
  DArrayTy *local_10;
  int local_c;
  DArrayTy *local_8;

  if ((this->field_0203 == 0) || (this->field_0207 + this->field_0203 <= this->field_0280)) {
    this->field_0207 = this->field_0280;
    local_1c = this;
    uVar4 = st::fn_0040343B(this);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    iVar5 = CONCAT22(extraout_var,uVar4);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if ((0 < iVar5) &&
       (local_20 = iVar5, local_c = st::fn_004057E5((AnonShape_0065DA10_8B0AA883 *)this,extraout_EDX),
       (int)this->field_0179 < iVar5 - local_c)) {
      local_18 = st::fn_00404435(this->field_0284,this->field_007B);
      local_8 = nullptr;
      local_10 = nullptr;
      local_68.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_68;
      iVar5 = st::fn_0072D7F0(local_68.jumpBuffer,0);
      pAVar3 = local_1c;
      if (iVar5 == 0) {
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        local_8 = (DArrayTy *)st::fn_004018CF(local_1c,extraout_EDX_00);
        if (local_8 != nullptr) {
          local_14 = 0;
          array = local_10;
          if (0 < (int)local_8->count) {
            do {
              if (local_14 < local_8->count) {
                puVar6 = DArrayAt<ushort>(local_8, local_14);
              }
              else {
                puVar6 = nullptr;
              }
              local_24 = STReplaceLowWord((uint32_t)(puVar6), (uint16_t)(*puVar6));
              this_00 = st::fn_004028BA
                                  (g_allPlayers_007FA174,*(char *)&pAVar3->field_0024,*puVar6,CASE_1
                                  );
              if ((this_00 != nullptr) && ((int)pAVar3->field_0179 < local_20 - local_c))
              {
                iVar5 = (*this_00->vtable->vfunc_2C)();
                pIVar7 = st::fn_0040410B(iVar5);
                if ((pAVar3->field_017F & (uint)pIVar7) != 0) {
                  if (pAVar3->field_0039 == 3) {
                    iVar5 = (*this_00->vtable->vfunc_C4)();
                  }
                  else {
                    iVar5 = (*this_00->vtable->vfunc_7C)();
                  }
                  if (iVar5 < pAVar3->field_0177) {
                    iVar5 = (*this_00->vtable->vfunc_2C)();
                    if ((iVar5 < 0x32) || (0x73 < iVar5)) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    if (bVar2) {
                      if (pAVar3->field_0039 == 3) {
LAB_00661a96:
                        bVar2 = false;
                      }
                      else if (this_00->field_0361 == 5) {
                        bVar2 = true;
                      }
                      else {
                        iVar5 = st::fn_004046C9(this_00,5);
                        if (iVar5 < 1) goto LAB_00661a96;
                        bVar2 = true;
                      }
                      if (!bVar2) {
                        if ((local_18 != 0) || (pAVar3->field_0039 != 3)) {
                          if (pAVar3->field_0039 == 3) {
                            st::fn_00405DCB((AnonShape_004D7270_8F0A3C37 *)this_00);
                          }
                          else {
                            st::fn_00405759
                                      ((TLOBaseTy *)this_00,5,0,1,1,0xffffffff,0,0xff,nullptr);
                          }
                        }
                        local_c = local_c + 1;
                      }
                    }
                    iVar5 = (*this_00->vtable->vfunc_2C)();
                    if ((iVar5 < 1) || (0x28 < iVar5)) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    if ((bVar2) && (local_18 != 0)) {
                      if (array == nullptr) {
                        array = st::fn_006AE290(nullptr,10,2,10);
                        local_10 = array;
                      }
                      st::fn_006AE1C0(array,&local_24);
                      local_c = local_c + 1;
                    }
                  }
                }
              }
              local_14 = local_14 + 1;
            } while ((int)local_14 < (int)local_8->count);
          }
          st::fn_006AE110(local_8);
          local_8 = nullptr;
          if (array != nullptr) {
            if (array->count != 0) {
              st::fn_0040439A(pAVar3->field_0284,&array->flags);
            }
            if (array != nullptr) {
              st::fn_006AE110(array);
            }
          }
        }
        g_currentExceptionFrame = local_68.previous;
        return;
      }
      g_currentExceptionFrame = local_68.previous;
      if (local_8 != nullptr) {
        st::fn_006AE110(local_8);
        local_8 = nullptr;
      }
      if (local_10 != nullptr) {
        st::fn_006AE110(local_10);
        local_10 = nullptr;
      }
      iVar8 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_flt.cpp",0x6e9,0,iVar5,"%s",
                                 "AiFltClassTy::GoToRepair");
      if (iVar8 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar5,0,"E:\\__titans\\ai\\ai_flt.cpp",0x6ea);
    }
  }
  return;
}

// 00662240 AiFltClassTy::GetAiMess
#line 1 "decomp/ST.exe/functions/00662240/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::GetAiMess */

int __thiscall st::fn_00662240(AiFltClassTy *this,uint *param_1)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  Global_sub_004E80F0_param_2Enum GVar6;
  uint *puVar7;
  dword dVar8;
  undefined4 uVar9;
  AiFltClassTy *this_00;
  undefined2 uVar11;
  int iVar12;
  IMAGE_DOS_HEADER *pIVar13;
  STBoatC *pSVar14;
  void *pvVar15;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  DArrayTy *pDVar16;
  ushort *puVar17;
  STGameObjC *pSVar18;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  AiPlrClassTy *this_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  int iVar19;
  uint uVar20;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_06;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_07;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_08;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_09;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_12;
  byte *puVar21;
  STWorldObject *this_02;
  byte *puVar22;
  uint uVar23;
  bool bVar24;
  short *psVar25;
  InternalExceptionFrame local_74;
  short local_30 [2];
  short local_2c [2];
  undefined4 local_28;
  TLOBaseTy *local_24;
  int local_20;
  int local_1c;
  int local_18;
  STGameObjC *local_14;
  DArrayTy *local_10;
  AiFltClassTy *local_c;
  DArrayTy *local_8;
  uint GVar5;

  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_c = this;
  iVar12 = st::fn_0072D7F0(local_74.jumpBuffer,0);
  this_00 = local_c;
  if (iVar12 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar19 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_flt.cpp",0x98a,0,iVar12,"%s",
                                "AiFltClassTy::GetAiMess");
    if (iVar19 == 0) {
      st::fn_006A5E40(iVar12,0,"E:\\__titans\\ai\\ai_flt.cpp",0x98b);
      return iVar12;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (*param_1 < 100) {
    st::fn_006AE1C0(local_c->field_0217,param_1);
    g_currentExceptionFrame = local_74.previous;
    return 0;
  }
  switch(*param_1) {
  case 100:
    if (((local_c->field_007B != -0x8000) && (local_c->field_007B != 1)) &&
       ((local_c->field_0152 != '\0' &&
        ((((uint)STField<ushort>(param_1,0xe) & local_c->field_0153) != 0 &&
         (local_c->field_00B3 == 0)))))) {
      if (STField<ushort>(param_1,0xe) == 1) {
        uVar23 = local_c->field_009B;
        if ((uVar23 < 0x8c) || (0x95 < uVar23)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if (bVar24) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar23 < 100) || (0x6d < uVar23)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if (bVar24) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      else {
        uVar23 = local_c->field_009B;
        if ((uVar23 < 0x8c) || (0x95 < uVar23)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if (bVar24) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar23 < 100) || (0x6d < uVar23)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if (bVar24) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar23 < 0x6e) || (0x77 < uVar23)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if (bVar24) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar23 < 0x82) || (0x8b < uVar23)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if (bVar24) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar23 == 0x23) || ((0xb < uVar23 && (uVar23 < 0x14)))) {
          bVar24 = true;
        }
        else {
          bVar24 = false;
        }
        if (bVar24) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (((0 < local_c->field_0157) &&
          (uVar11 = st::fn_0040343B(local_c),
          (int)this_00->field_0157 <= CONCAT22(extraout_var_02,uVar11))) &&
         (*(undefined1 *)(param_1 + 2) = 1, STField<char>(param_1,9) != '\0')) {
        if (g_allPlayers_007FA174 == nullptr) {
          pSVar18 = nullptr;
        }
        else {
          pSVar18 = st::fn_004028BA
                              (g_allPlayers_007FA174,STField<char>(param_1,0x12),
                               (ushort)param_1[4],CASE_1);
        }
        if (pSVar18 != nullptr) {
          st::fn_004018C5
                    ((STFishC *)pSVar18,local_2c,local_30,(undefined2 *)((int)&local_8 + 2));
          *(short *)&this_00->field_0x195 = local_2c[0] + -2;
          *(short *)&this_00->field_0x197 = local_30[0] + -2;
          *(undefined2 *)&this_00->field_0x199 = 0;
          *(undefined2 *)&this_00->field_0x19b = 5;
          *(undefined2 *)&this_00->field_0x19d = 3;
          *(undefined2 *)&this_00->field_0x19f = 5;
          st::fn_00401906((short *)&this_00->field_0x195,(short *)&this_00->field_0x197,
                             (short *)&this_00->field_0x19b,(short *)&this_00->field_0x19d);
        }
        this_00->field_009B = 0x8c;
LAB_00663af0:
        this_00->field_009F = 0;
        this_00->field_00A3 = 0;
        this_00->field_00A7 = 0;
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
    }
    break;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  case 0x66:
    if ((((local_c->field_007B != -0x8000) && (local_c->field_007B != 1)) &&
        ((local_c->field_0187 != '\0' &&
         (((local_c->field_009B < 0x82 || (0x8b < local_c->field_009B)) &&
          (local_c->field_00B3 == 0)))))) &&
       (uVar11 = st::fn_0040343B(local_c), (int)this_00->field_018C <= CONCAT22(extraout_var_01,uVar11)
       )) {
      *(undefined1 *)(param_1 + 2) = 1;
      STField<undefined2>(param_1,9) = uVar11;
      uVar9 = this_00->field_0188;
      STField<undefined4>(param_1,0xf) = uVar9;
      iVar12 = st::fn_00404331((AnonShape_0065DA10_8B0AA883 *)this_00,uVar9);
      STField<int>(param_1,0xb) = iVar12;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x67:
    if ((((local_c->field_007B != -0x8000) && (local_c->field_007B != 1)) &&
        (local_c->field_0187 != '\0')) && (local_c->field_00B3 == 0)) {
      this_01 = st::fn_00401DC5(*(char *)&local_c->field_0024);
      if ((char)param_1[2] == '\0') {
        this_00->field_00FB = STField<undefined4>(param_1,9);
        this_00->field_00F7 = STField<undefined4>(param_1,0xd);
        this_00->field_00EF = (int)STField<short>(param_1,0x11);
        *(undefined4 *)&this_00->field_0x195 = STField<undefined4>(param_1,0x13);
        *(undefined4 *)&this_00->field_0x199 = STField<undefined4>(param_1,0x17);
        *(undefined4 *)&this_00->field_0x19d = STField<undefined4>(param_1,0x1b);
        this_00->field_009B = 0x82;
        this_00->field_009F = 0;
        this_00->field_00A3 = 0;
        this_00->field_00A7 = 0;
        if (this_01 != nullptr) {
          st::fn_00402C61(this_01,'\0',this_00->field_00F7);
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      else if ((0x81 < this_00->field_009B) && (this_00->field_009B < 0x8c)) {
        if (this_01 != nullptr) {
          st::fn_00402C61(this_01,'\x01',this_00->field_00F7);
        }
        this_00->field_009B = 0;
        goto LAB_00663af0;
      }
    }
    break;
  case 0x68:
    if (local_c->field_0194 == '\0') {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    GVar5 = *STField<uint *>(param_1,10);
    if ((0x53 < GVar5) && (GVar5 < 0x5b)) {
      pIVar13 = st::fn_0040410B(GVar5);
      if ((this_00->field_025F & (uint)pIVar13) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar6 = *STField<Global_sub_004E80F0_param_2Enum *>(param_1,10);
      if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if ((bVar24) && (g_allPlayers_007FA174 != nullptr)) {
        iVar19 = st::fn_0040413D((byte *)this_00->field_0024,GVar6);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar12 = extraout_EDX_00;
      }
      else {
        if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if ((bVar24) && (g_allPlayers_007FA174 != nullptr)) {
          iVar19 = st::fn_0040469C(this_00->field_0024,GVar6);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar12 = extraout_EDX_01;
        }
        else {
          if ((GVar6 == CASE_A3) ||
             (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))) {
            iVar12 = 1;
          }
          else {
            iVar12 = 0;
          }
          if ((iVar12 == 0) || (g_allPlayers_007FA174 == nullptr)) {
            if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
              bVar24 = true;
            }
            else {
              bVar24 = false;
            }
            if ((bVar24) && (g_allPlayers_007FA174 != nullptr)) {
              iVar19 = 1;
            }
            else {
              iVar19 = 0;
            }
          }
          else {
            iVar19 = st::fn_00401799(this_00->field_0024,GVar6);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            iVar12 = extraout_EDX_02;
          }
        }
      }
      if (iVar19 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      local_8 = (DArrayTy *)st::fn_004059B6(this_00,iVar12,0x53);
      if ((local_8 != nullptr) && (local_8->count != 0)) {
        iVar12 = STField<int>(param_1,10);
        if (*(char *)(iVar12 + 0x3e) == '\0') {
          if ((this_00->field_009B == 0xc) || (this_00->field_00B3 != 0)) goto LAB_0066263e;
        }
        else if ((((*(short *)(iVar12 + 0x16) < 0) || (*(short *)(iVar12 + 0x18) < 0)) ||
                 (*(short *)(iVar12 + 0x1a) < 0)) && (this_00->field_0284 != nullptr)) {
          *(ushort *)(iVar12 + 0x16) = this_00->field_0284[0x41];
          *(ushort *)(STField<int>(param_1,10) + 0x18) = this_00->field_0284[0x42];
          *(ushort *)(STField<int>(param_1,10) + 0x1a) = this_00->field_0284[0x43];
        }
        local_10 = nullptr;
        if (0 < (int)local_8->count) {
          bVar24 = local_8->count != 0;
          do {
            pDVar16 = local_10;
            if (bVar24) {
              puVar17 = DArrayAt<ushort>(local_8, (int)local_10);
            }
            else {
              puVar17 = nullptr;
            }
            uVar3 = *puVar17;
            if (g_allPlayers_007FA174 == nullptr) {
              local_14 = nullptr;
            }
            else {
              local_14 = st::fn_004028BA
                                   (g_allPlayers_007FA174,*(char *)&this_00->field_0024,uVar3,CASE_1
                                   );
            }
            if (local_14 != nullptr) {
              *(undefined1 *)(param_1 + 2) = 1;
              STField<ushort>(param_1,0xe) = uVar3;
              if (STField<char>(param_1,9) != '\0') {
                puVar21 = (byte *)(STField<undefined4 *>(param_1,10));
                puVar22 = (byte *)(&this_00->field_01AD);
                memmove(puVar22, puVar21, 0x4a); /* compiler REP MOVS byte copy */
                iVar12 = 0;
                if ((this_00->field_01EB != '\0') &&
                   (iVar12 = st::fn_00402829(this_00->field_01C3,(int)this_00->field_01C5,
                                                (int)this_00->field_01C7,this_00->field_01AD,
                                                this_00->field_0024,nullptr,nullptr,
                                                nullptr,0,nullptr), iVar12 == 0)) {
                  local_18 = (int)this_00->field_01C3;
                  local_1c = (int)this_00->field_01C5;
                  local_20 = (int)this_00->field_01C7;
                  iVar12 = st::fn_00403F03(this_00->field_0024,this_00->field_01AD,&local_18,
                                              &local_1c,&local_20,(int)this_00->field_01C3,
                                              (int)this_00->field_01C5,(int)this_00->field_01C7,
                                              (int)local_14);
                  if (iVar12 == 0) {
                    *(undefined1 *)(param_1 + 2) = 0;
                    STField<undefined2>(param_1,0xe) = 0;
                    pDVar16 = local_10;
                    goto LAB_006625c2;
                  }
                  this_00->field_01C3 = (short)local_18;
                  this_00->field_01C5 = (short)local_1c;
                  this_00->field_01C7 = (short)local_20;
                }
                st::fn_00405A0B(local_14,this_00->field_01AD,(int)this_00->field_01C3,
                                   (int)this_00->field_01C5,(int)this_00->field_01C7);
                if (this_00->field_00B3 != 0) {
                  st::fn_004014BF(this_00);
                }
                this_00->field_009B = 0xc;
                this_00->field_009F = 0;
                this_00->field_00A3 = 0;
                this_00->field_00A7 = 0;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                if (*(char *)(STField<int>(param_1,10) + 0x3e) != '\0') {
                  this_00->field_00B3 = 0xc;
                }
              }
              break;
            }
LAB_006625c2:
            local_10 = (DArrayTy *)((int)&pDVar16->flags + 1);
            bVar24 = local_10 < (DArrayTy *)local_8->count;
          } while ((int)local_10 < (int)local_8->count);
        }
      }
LAB_0066263e:
      if (local_8 == nullptr) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      st::fn_006AE110(local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if ((GVar5 < 0x32) || (0x73 < GVar5)) {
      bVar24 = false;
    }
    else {
      bVar24 = true;
    }
    if (bVar24) {
      pIVar13 = st::fn_0040410B(GVar5);
      if ((this_00->field_025F & (uint)pIVar13) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar6 = *STField<Global_sub_004E80F0_param_2Enum *>(param_1,10);
      if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if ((bVar24) && (g_allPlayers_007FA174 != nullptr)) {
        iVar12 = st::fn_0040413D((byte *)this_00->field_0024,GVar6);
      }
      else {
        if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if ((bVar24) && (g_allPlayers_007FA174 != nullptr)) {
          iVar12 = st::fn_0040469C(this_00->field_0024,GVar6);
        }
        else {
          if ((GVar6 == CASE_A3) ||
             (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))) {
            bVar24 = true;
          }
          else {
            bVar24 = false;
          }
          if ((bVar24) && (g_allPlayers_007FA174 != nullptr)) {
            iVar12 = st::fn_00401799(this_00->field_0024,GVar6);
          }
          else {
            if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
              bVar24 = true;
            }
            else {
              bVar24 = false;
            }
            if ((bVar24) && (g_allPlayers_007FA174 != nullptr)) {
              iVar12 = 1;
            }
            else {
              iVar12 = 0;
            }
          }
        }
      }
      if (iVar12 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar4 = this_00->field_0039;
      if (sVar4 == 1) {
        iVar12 = 0xc;
      }
      else if (sVar4 == 2) {
        iVar12 = 0x18;
      }
      else if (sVar4 == 3) {
        iVar12 = 0x19;
      }
      else {
        iVar12 = 0;
      }
      uVar23 = st::fn_00404A20
                         ((AnonReceiver_0065DA50 *)this_00,iVar12,-1);
      if ((int)uVar23 < 1) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      iVar12 = STField<int>(param_1,10);
      if (*(char *)(iVar12 + 0x3e) == '\0') {
        if (this_00->field_009B == 0x23) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if (this_00->field_009B == 0x78) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if (this_00->field_00B3 != 0) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      *(undefined1 *)(param_1 + 2) = 1;
      STField<undefined2>(param_1,0xe) = 0xffff;
      if (STField<char>(param_1,9) == '\0') {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      if (((*(char *)(iVar12 + 0x3e) != '\0') &&
          (((*(short *)(iVar12 + 0x16) < 0 || (*(short *)(iVar12 + 0x18) < 0)) ||
           (*(short *)(iVar12 + 0x1a) < 0)))) && (this_00->field_0284 != nullptr)) {
        *(ushort *)(iVar12 + 0x16) = this_00->field_0284[0x41];
        *(ushort *)(STField<int>(param_1,10) + 0x18) = this_00->field_0284[0x42];
        *(ushort *)(STField<int>(param_1,10) + 0x1a) = this_00->field_0284[0x43];
      }
      puVar21 = (byte *)(STField<undefined4 *>(param_1,10));
      puVar22 = (byte *)(&this_00->field_01AD);
      memmove(puVar22, puVar21, 0x4a); /* compiler REP MOVS byte copy */
      iVar12 = 0;
      if ((this_00->field_01EB != '\0') &&
         (iVar12 = st::fn_00402829(this_00->field_01C3,(int)this_00->field_01C5,
                                      (int)this_00->field_01C7,this_00->field_01AD,
                                      this_00->field_0024,nullptr,nullptr,nullptr,0,
                                      nullptr), iVar12 == 0)) {
        local_14 = (STGameObjC *)(int)this_00->field_01C3;
        local_10 = (DArrayTy *)(int)this_00->field_01C5;
        local_24 = (TLOBaseTy *)(int)this_00->field_01C7;
        iVar12 = st::fn_00403F03(this_00->field_0024,this_00->field_01AD,(int *)&local_14,
                                    (int *)&local_10,(int *)&local_24,(int)this_00->field_01C3,
                                    (int)this_00->field_01C5,(int)this_00->field_01C7,0);
        if (iVar12 == 0) {
          *(undefined1 *)(param_1 + 2) = 0;
          STField<undefined2>(param_1,0xe) = 0;
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        this_00->field_01C3 = (short)local_14;
        this_00->field_01C5 = (short)local_10;
        this_00->field_01C7 = (short)local_24;
      }
      if (this_00->field_00B3 != 0) {
        st::fn_004014BF(this_00);
      }
      this_00->field_009B = 0x23;
      this_00->field_009F = 0;
      this_00->field_00A3 = 0;
      this_00->field_00A7 = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(char *)(STField<int>(param_1,10) + 0x3e) == '\0') {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      this_00->field_00B3 = 0x23;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if ((GVar5 == 0) || (0x28 < GVar5)) {
      bVar24 = false;
    }
    else {
      bVar24 = true;
    }
    if (bVar24) {
      pIVar13 = st::fn_0040410B(GVar5);
      if ((this_00->field_025F & (uint)pIVar13) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar6 = *STField<Global_sub_004E80F0_param_2Enum *>(param_1,10);
      if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if ((bVar24) && (g_allPlayers_007FA174 != nullptr)) {
        iVar19 = st::fn_0040413D((byte *)this_00->field_0024,GVar6);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar12 = extraout_EDX_03;
      }
      else {
        if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if ((bVar24) && (g_allPlayers_007FA174 != nullptr)) {
          iVar19 = st::fn_0040469C(this_00->field_0024,GVar6);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar12 = extraout_EDX_04;
        }
        else {
          if ((GVar6 == CASE_A3) ||
             (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))) {
            iVar12 = 1;
          }
          else {
            iVar12 = 0;
          }
          if ((iVar12 == 0) || (g_allPlayers_007FA174 == nullptr)) {
            if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
              bVar24 = true;
            }
            else {
              bVar24 = false;
            }
            if ((bVar24) && (g_allPlayers_007FA174 != nullptr)) {
              iVar19 = 1;
            }
            else {
              iVar19 = 0;
            }
          }
          else {
            iVar19 = st::fn_00401799(this_00->field_0024,GVar6);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            iVar12 = extraout_EDX_05;
          }
        }
      }
      if (iVar19 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar4 = this_00->field_0039;
      if (sVar4 == 1) {
        iVar19 = (-(uint)(*STField<int *>(param_1,10) != 9) & 0xfffffff2) + 0x40;
      }
      else if (sVar4 == 2) {
        iVar19 = (-(uint)(*STField<int *>(param_1,10) != 0x15) & 0xffffffe9) + 0x49;
      }
      else if (sVar4 == 3) {
        iVar19 = 0x5c;
      }
      else {
        iVar19 = 0;
      }
      local_8 = (DArrayTy *)st::fn_004059B6(this_00,iVar12,iVar19);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((((local_8 != nullptr) && (uVar23 = local_8->count, uVar23 != 0)) &&
          ((*(char *)(STField<int>(param_1,10) + 0x3e) != '\0' ||
           ((this_00->field_009B != 0xe && (this_00->field_00B3 == 0)))))) &&
         (uVar20 = 0, 0 < (int)uVar23)) {
        do {
          if (uVar20 < uVar23) {
            puVar17 = DArrayAt<ushort>(local_8, uVar20);
          }
          else {
            puVar17 = nullptr;
          }
          uVar3 = *puVar17;
          if (g_allPlayers_007FA174 == nullptr) {
            local_24 = nullptr;
          }
          else {
            local_24 = (TLOBaseTy *)
                       st::fn_004028BA
                                 (g_allPlayers_007FA174,*(char *)&this_00->field_0024,uVar3,CASE_1);
          }
          if (((STGameObjC *)local_24 != nullptr) &&
             (iVar12 = st::fn_004046C9(local_24,1), iVar12 == 0)) {
            *(undefined1 *)(param_1 + 2) = 1;
            STField<ushort>(param_1,0xe) = uVar3;
            if (STField<char>(param_1,9) != '\0') {
              puVar21 = (byte *)(STField<undefined4 *>(param_1,10));
              puVar22 = (byte *)(&this_00->field_01AD);
              memmove(puVar22, puVar21, 0x4a); /* compiler REP MOVS byte copy */
              puVar7 = STField<uint *>(param_1,10);
              st::fn_00405759
                        (local_24,1,*puVar7,1,1,(uint)(ushort)puVar7[3],puVar7[2],
                         (int)(char)puVar7[7],(char *)((int)puVar7 + 0x1d));
              if (this_00->field_00B3 != 0) {
                st::fn_004014BF(this_00);
              }
              this_00->field_009F = 0;
              this_00->field_00A3 = 0;
              this_00->field_00A7 = 0;
              this_00->field_009B = 0xe;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(char *)(STField<int>(param_1,10) + 0x3e) != '\0') {
                this_00->field_00B3 = 0xe;
              }
            }
            break;
          }
          uVar20 = uVar20 + 1;
          uVar23 = local_8->count;
        } while ((int)uVar20 < (int)uVar23);
      }
      if (local_8 == nullptr) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      st::fn_006AE110(local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if ((((GVar5 == 0xa3) || (GVar5 == 0xa8)) || (GVar5 == 0xb2)) || (GVar5 == 0xbe)) {
      bVar24 = true;
    }
    else {
      bVar24 = false;
    }
    if (!bVar24) {
      if (((GVar5 == 0xdd) || (GVar5 == 0xde)) || ((GVar5 == 0xe2 || (GVar5 == 0xdc)))) {
        bVar24 = true;
      }
      else {
        bVar24 = false;
      }
      if (!bVar24) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      if (((int)GVar5 < 1) || (0x28 < (int)GVar5)) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if ((bVar24) && (g_allPlayers_007FA174 != nullptr)) {
        iVar19 = st::fn_0040413D((byte *)local_c->field_0024,GVar5);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar12 = extraout_EDX_09;
      }
      else {
        if (((int)GVar5 < 0x32) || (0x73 < (int)GVar5)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if ((bVar24) && (g_allPlayers_007FA174 != nullptr)) {
          iVar19 = st::fn_0040469C(local_c->field_0024,GVar5);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar12 = extraout_EDX_10;
        }
        else {
          if ((GVar5 == 0xa3) || (((GVar5 == 0xa8 || (GVar5 == 0xb2)) || (GVar5 == 0xbe)))) {
            iVar12 = 1;
          }
          else {
            iVar12 = 0;
          }
          if ((iVar12 == 0) || (g_allPlayers_007FA174 == nullptr)) {
            if (((GVar5 == 0xdd) || ((GVar5 == 0xde || (GVar5 == 0xe2)))) || (GVar5 == 0xdc)) {
              bVar24 = true;
            }
            else {
              bVar24 = false;
            }
            if ((bVar24) && (g_allPlayers_007FA174 != nullptr)) {
              iVar19 = 1;
            }
            else {
              iVar19 = 0;
            }
          }
          else {
            iVar19 = st::fn_00401799(local_c->field_0024,GVar5);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            iVar12 = extraout_EDX_11;
          }
        }
      }
      if (iVar19 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar4 = this_00->field_0039;
      if (0 < sVar4) {
        if (sVar4 < 3) {
          iVar19 = 0x52;
          goto LAB_00663076;
        }
        if (sVar4 == 3) {
          iVar19 = 0x5f;
          goto LAB_00663076;
        }
      }
      iVar19 = 0;
LAB_00663076:
      local_8 = (DArrayTy *)st::fn_004059B6(this_00,iVar12,iVar19);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((((local_8 != nullptr) &&
           (pSVar18 = (STGameObjC *)local_8->count, pSVar18 != nullptr)) &&
          ((*(char *)(STField<int>(param_1,10) + 0x3e) != '\0' ||
           ((this_00->field_009B != 0x10 && (this_00->field_00B3 == 0)))))) &&
         (local_14 = nullptr, 0 < (int)pSVar18)) {
        do {
          if (local_14 < pSVar18) {
            puVar17 = DArrayAt<ushort>(local_8, (int)local_14);
          }
          else {
            puVar17 = nullptr;
          }
          uVar3 = *puVar17;
          if (g_allPlayers_007FA174 == nullptr) {
            pSVar14 = nullptr;
          }
          else {
            pSVar14 = (STBoatC *)
                      st::fn_004028BA
                                (g_allPlayers_007FA174,*(char *)&this_00->field_0024,uVar3,CASE_1);
          }
          local_24 = (TLOBaseTy *)pSVar14;
          if (pSVar14 != nullptr) {
            iVar12 = st::fn_00405470(pSVar14);
            if ((iVar12 == 0) ||
               (STPiece<0,2>(iVar12) = pSVar14->field_05B8, STPiece<2,2>(iVar12) = pSVar14->field_05BA,
               g_worldGrid.sizeZ + -1 <= iVar12)) {
              bVar24 = false;
            }
            else {
              bVar24 = true;
            }
            if (bVar24) {
              *(undefined1 *)(param_1 + 2) = 1;
              STField<ushort>(param_1,0xe) = uVar3;
              if (STField<char>(param_1,9) != '\0') {
                puVar21 = (byte *)(STField<undefined4 *>(param_1,10));
                puVar22 = (byte *)(&this_00->field_01AD);
                memmove(puVar22, puVar21, 0x4a); /* compiler REP MOVS byte copy */
                st::fn_00401B36(local_24,*STField<int *>(param_1,10),
                                   (STField<int *>(param_1,10))[0xb]);
                if (this_00->field_00B3 != 0) {
                  st::fn_004014BF(this_00);
                }
                this_00->field_009F = 0;
                this_00->field_00A3 = 0;
                this_00->field_00A7 = 0;
                this_00->field_009B = 0x12;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                if (*(char *)(STField<int>(param_1,10) + 0x3e) != '\0') {
                  this_00->field_00B3 = 0x12;
                }
              }
              break;
            }
          }
          local_14 = (STGameObjC *)((int)&local_14->vtable + 1);
          pSVar18 = (STGameObjC *)local_8->count;
        } while ((int)local_14 < (int)pSVar18);
      }
      if (local_8 == nullptr) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      st::fn_006AE110(local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if (((int)GVar5 < 1) || (0x28 < (int)GVar5)) {
      bVar24 = false;
    }
    else {
      bVar24 = true;
    }
    if ((bVar24) && (g_allPlayers_007FA174 != nullptr)) {
      iVar12 = st::fn_0040413D((byte *)local_c->field_0024,GVar5);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar23 = extraout_EDX_06;
    }
    else {
      if (((int)GVar5 < 0x32) || (0x73 < (int)GVar5)) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if ((bVar24) && (g_allPlayers_007FA174 != nullptr)) {
        iVar12 = st::fn_0040469C(local_c->field_0024,GVar5);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar23 = extraout_EDX_07;
      }
      else {
        if ((GVar5 == 0xa3) || (((GVar5 == 0xa8 || (GVar5 == 0xb2)) || (GVar5 == 0xbe)))) {
          uVar23 = 1;
        }
        else {
          uVar23 = 0;
        }
        if ((uVar23 == 0) || (g_allPlayers_007FA174 == nullptr)) {
          if (((GVar5 == 0xdd) || ((GVar5 == 0xde || (GVar5 == 0xe2)))) || (GVar5 == 0xdc)) {
            bVar24 = true;
          }
          else {
            bVar24 = false;
          }
          if ((bVar24) && (g_allPlayers_007FA174 != nullptr)) {
            iVar12 = 1;
          }
          else {
            iVar12 = 0;
          }
        }
        else {
          iVar12 = st::fn_00401799(local_c->field_0024,GVar5);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar23 = extraout_EDX_08;
        }
      }
    }
    if (iVar12 == 0) {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    iVar12 = *STField<int *>(param_1,10);
    if (iVar12 - 0xa3U < 0x1c) {
      uVar23 = (uint)*(byte *)(iVar12 + 0x663d51);
      switch(iVar12) {
      case 0xa3:
        iVar12 = 0x4e;
        break;
      default:
        goto switchD_00662d3e_caseD_a4;
      case 0xa8:
        iVar12 = 0x44;
        break;
      case 0xb2:
        iVar12 = 0x70;
        break;
      case 0xbe:
        iVar12 = 0x72;
      }
    }
    else {
switchD_00662d3e_caseD_a4:
      iVar12 = 0;
    }
    local_8 = (DArrayTy *)st::fn_004059B6(this_00,uVar23,iVar12);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((((local_8 != nullptr) && (dVar8 = local_8->count, dVar8 != 0)) &&
        ((*(char *)(STField<int>(param_1,10) + 0x3e) != '\0' ||
         ((this_00->field_009B != 0x12 && (this_00->field_00B3 == 0)))))) &&
       (local_24 = nullptr, 0 < (int)dVar8)) {
      bVar24 = dVar8 != 0;
LAB_00662dbb:
      if (bVar24) {
        puVar17 = DArrayAt<ushort>(local_8, (int)local_24);
      }
      else {
        puVar17 = nullptr;
      }
      uVar3 = *puVar17;
      if (g_allPlayers_007FA174 == nullptr) {
        local_10 = nullptr;
      }
      else {
        local_10 = (DArrayTy *)
                   st::fn_004028BA
                             (g_allPlayers_007FA174,*(char *)&this_00->field_0024,uVar3,CASE_1);
      }
      if ((STGameObjC *)local_10 == nullptr) goto cf_continue_loop_00662E52;
      switch(*STField<undefined4 *>(param_1,10)) {
      case 0xa3:
        iVar12 = st::fn_00405ACE((TLOBaseTy *)local_10,4,0,1,1,1);
        break;
      default:
        iVar12 = 0;
        break;
      case 0xa8:
        iVar12 = st::fn_00405ACE((TLOBaseTy *)local_10,6,0,1,1,1);
        break;
      case 0xb2:
        iVar12 = 1;
        break;
      case 0xbe:
        iVar12 = st::fn_00405ACE((TLOBaseTy *)local_10,8,0,1,1,1);
      }
      if (iVar12 == 0) goto cf_continue_loop_00662E52;
      *(undefined1 *)(param_1 + 2) = 1;
      STField<ushort>(param_1,0xe) = uVar3;
      if (STField<char>(param_1,9) != '\0') {
        puVar21 = (byte *)(STField<undefined4 *>(param_1,10));
        puVar22 = (byte *)(&this_00->field_01AD);
        memmove(puVar22, puVar21, 0x4a); /* compiler REP MOVS byte copy */
        iVar12 = *STField<int *>(param_1,10);
        if (iVar12 == 0xa3) {
          iVar12 = 4;
LAB_00662ee7:
          st::fn_00405759
                    ((TLOBaseTy *)local_10,iVar12,0,1,1,0xffffffff,(STField<int *>(param_1,10))[2]
                     ,0xff,nullptr);
        }
        else {
          if (iVar12 == 0xa8) {
            iVar12 = 6;
            goto LAB_00662ee7;
          }
          if (iVar12 == 0xbe) {
            iVar12 = 8;
            goto LAB_00662ee7;
          }
        }
        if (this_00->field_00B3 != 0) {
          st::fn_004014BF(this_00);
        }
        this_00->field_009F = 0;
        this_00->field_00A3 = 0;
        this_00->field_00A7 = 0;
        this_00->field_009B = 0x12;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(char *)(STField<int>(param_1,10) + 0x3e) != '\0') {
          this_00->field_00B3 = 0x12;
        }
      }
    }
LAB_00662f34:
    if (local_8 != nullptr) {
      st::fn_006AE110(local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x69:
    puVar7 = STField<uint *>(param_1,9);
    uVar23 = *puVar7;
    if ((uVar23 < 0x32) || (0x73 < uVar23)) {
      bVar24 = false;
    }
    else {
      bVar24 = true;
    }
    if (bVar24) {
      if (local_c->field_01B5 != puVar7[2]) {
        sVar4 = STField<short>(puVar7,0x1a);
        sVar1 = (short)puVar7[6];
        sVar2 = STField<short>(puVar7,0x16);
        if ((((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) || (sVar1 < 0)) ||
           (((g_worldGrid.sizeY <= sVar1 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4)))) {
          this_02 = nullptr;
        }
        else {
          this_02 = STGridAt3D(g_worldGrid, sVar2, sVar1, sVar4).objects[0];
        }
        if ((this_02 != nullptr) &&
           (this_02[1].vtable == (STWorldObjectVTable *)local_c->field_0024)) {
          iVar12 = this_02->GetObjectTypeId();
          if (iVar12 == *STField<int *>(param_1,9)) {
            *(undefined1 *)(param_1 + 2) = 1;
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          iVar12 = this_02->GetObjectTypeId();
          if (iVar12 != 0x78) {
            *(undefined1 *)(param_1 + 2) = 0xff;
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          iVar12 = this_02->GetObjectTypeId();
          if (iVar12 == 0x78) {
            iVar12 = *(int *)&this_02[0x10].field_0x19;
          }
          else {
            iVar12 = 0;
          }
          if (iVar12 == *STField<int *>(param_1,9)) {
            iVar12 = this_02->GetObjectTypeId();
            if (iVar12 == 0x78) {
              uVar23 = *(uint *)&this_02[0x11].field_0x5;
            }
            else {
              uVar23 = 0xffffffff;
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (uVar23 == *(ushort *)(STField<int>(param_1,9) + 0xc)) {
              g_currentExceptionFrame = local_74.previous;
              return 0;
            }
          }
        }
LAB_00663325:
        *(undefined1 *)(param_1 + 2) = 0xff;
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
    }
    else {
      if ((uVar23 == 0) || (0x28 < uVar23)) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if (bVar24) {
        if (g_allPlayers_007FA174 == nullptr) {
          pSVar18 = nullptr;
        }
        else {
          pSVar18 = st::fn_004028BA
                              (g_allPlayers_007FA174,*(char *)&local_c->field_0024,
                               (ushort)puVar7[0xe],CASE_1);
        }
        if (pSVar18 == nullptr) goto LAB_00663325;
        iVar12 = st::fn_0040582B(pSVar18,1,*(int *)(STField<int>(param_1,9) + 8));
        if (iVar12 == 0) {
          *(undefined1 *)(param_1 + 2) = 1;
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
    }
    break;
  case 0x6a:
    local_c->field_0097 = param_1[2];
    g_currentExceptionFrame = local_74.previous;
    return 0;
  case 0x6b:
    uVar20 = 0;
    pDVar16 = local_c->field_020B;
    uVar23 = pDVar16->count;
    if (0 < (int)uVar23) {
      bVar24 = uVar23 != 0;
      while( true ) {
        if (bVar24) {
          pvVar15 = DArrayAt<void>(pDVar16, uVar20);
        }
        else {
          pvVar15 = nullptr;
        }
        if (*(int *)(param_1[2] + 8) == STField<int>(pvVar15,0x24)) break;
        uVar20 = uVar20 + 1;
        bVar24 = uVar20 < uVar23;
        if ((int)uVar23 <= (int)uVar20) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      STField<undefined4>(pvVar15,0x24) = 0;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x6d:
    if (local_c->field_0163 == '\x01') {
      if (STField<char>(param_1,0xd) == '\0') {
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if ((local_c->field_007B == 0x10) &&
           (uVar11 = st::fn_0040343B(local_c), 4 < CONCAT22(extraout_var,uVar11))) {
          param_1[2] = 1;
        }
        else {
          param_1[2] = 0xffffffff;
        }
        if ((char)param_1[3] != '\0') {
          psVar25 = STField<short *>(param_1,0xe);
LAB_0066348c:
          st::fn_00402A27(this_00,psVar25);
        }
      }
      else if (*(uint *)&local_c->field_022F->field_0xc < 10) {
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if ((local_c->field_007B == 0x10) &&
           (uVar11 = st::fn_0040343B(local_c), 4 < CONCAT22(extraout_var_00,uVar11))) {
          param_1[2] = 1;
        }
        else {
          param_1[2] = 0xffffffff;
        }
        if ((char)param_1[3] != '\0') {
          psVar25 = STField<short *>(param_1,0xe);
          goto LAB_0066348c;
        }
      }
    }
    if ((this_00->field_0122 == '\x01') && ((char)param_1[3] != '\0')) {
      st::fn_00403F7B(this_00,STField<short *>(param_1,0xe),5);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x6e:
    if (local_c->field_009B != 0x19) {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    sVar4 = local_c->field_0039;
    if (0 < sVar4) {
      if (sVar4 < 3) {
        uVar23 = 0x3b;
        goto LAB_00663504;
      }
      if (sVar4 == 3) {
        uVar23 = 0x60;
        goto LAB_00663504;
      }
    }
    uVar23 = 0;
LAB_00663504:
    if (STField<uint>(param_1,0xb) != uVar23) {
      iVar12 = local_c->field_0116;
      if (iVar12 == 0xdd) {
        uVar23 = (-(uint)(sVar4 != 3) & 0xffffffdb) + 0x5e;
      }
      else if (iVar12 == 0xde) {
        uVar23 = -(uint)(sVar4 != 3) & 0x4f;
      }
      else if (iVar12 == 0xe0) {
        uVar23 = (sVar4 != 3) - 1 & 0x61;
      }
      else {
        uVar23 = 0;
      }
      if (STField<uint>(param_1,0xb) != uVar23) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
    }
    local_c->field_009B = 0x19;
    local_c->field_009F = 0;
    local_c->field_00A3 = 0;
    local_c->field_00A7 = 0;
    g_currentExceptionFrame = local_74.previous;
    return 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 0x70:
    if (((local_c->field_00FF != '\0') &&
        (uVar23 = st::fn_00405394(*(int *)param_1[3]), this_00->field_007B == (short)uVar23)) &&
       (st::fn_00402DC9(this_00,(uint *)param_1[3],0xffff), *(int *)(param_1[3] + 0x24) != 0)) {
      param_1[2] = 1;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x71:
    uVar3 = local_c->field_007B;
    if (uVar3 < 0x21) {
      if (uVar3 != 0x20) {
        if (uVar3 == 2) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if (uVar3 != 0x10) {
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          st::fn_00401EF1((AnonShape_0065DA10_8B0AA883 *)local_c,extraout_EDX);
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
    }
    else if (uVar3 != 0x8000) {
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      st::fn_00401EF1((AnonShape_0065DA10_8B0AA883 *)local_c,extraout_EDX);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    st::fn_0040148D((AnonShape_0065FD00_EB74ED0C *)local_c,extraout_EDX);
    g_currentExceptionFrame = local_74.previous;
    return 0;
  case 0x73:
    iVar12 = (int)*(short *)(STField<int>(param_1,10) + 1);
    sVar4 = local_c->field_0039;
    if (sVar4 < 1) {
LAB_006636da:
      iVar19 = 0;
    }
    else if (sVar4 < 3) {
      iVar19 = 0x35;
    }
    else {
      if (sVar4 != 3) goto LAB_006636da;
      iVar19 = st::fn_0040383C(iVar12);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      iVar12 = extraout_EDX_12;
    }
    local_10 = (DArrayTy *)st::fn_004059B6(this_00,iVar12,iVar19);
    if (((local_10 != nullptr) && (dVar8 = local_10->count, dVar8 != 0)) &&
       (uVar23 = 0, 0 < (int)dVar8)) {
      bVar24 = dVar8 != 0;
      do {
        if (bVar24) {
          puVar17 = DArrayAt<ushort>(local_10, uVar23);
        }
        else {
          puVar17 = nullptr;
        }
        uVar3 = *puVar17;
        if (g_allPlayers_007FA174 == nullptr) {
          pSVar18 = nullptr;
        }
        else {
          pSVar18 = st::fn_004028BA
                              (g_allPlayers_007FA174,*(char *)&local_c->field_0024,uVar3,CASE_1);
        }
        if ((pSVar18 != nullptr) &&
           (iVar12 = st::fn_00401AF5(pSVar18,(int)*(short *)(STField<int>(param_1,10) + 1),
                                        (int)*(short *)(STField<int>(param_1,10) + 3),1),
           iVar12 != 0)) {
          *(undefined1 *)(param_1 + 2) = 1;
          STField<ushort>(param_1,0xe) = uVar3;
          if (STField<char>(param_1,9) != '\0') {
            st::fn_00405759
                      ((TLOBaseTy *)pSVar18,2,(int)*(short *)(STField<int>(param_1,10) + 1),1,1,
                       0xffffffff,0,0xff,nullptr);
          }
          break;
        }
        uVar23 = uVar23 + 1;
        bVar24 = uVar23 < local_10->count;
      } while ((int)uVar23 < (int)local_10->count);
    }
    if (local_10 != nullptr) {
      st::fn_006AE110(local_10);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x74:
    if ((local_c->field_007B == -0x8000) && (local_c->field_009B == 0x78)) {
      local_c->field_009B = 0x33;
      local_c->field_009F = 0;
      local_c->field_00A3 = 0;
      local_c->field_00A7 = 0;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x75:
    *(undefined1 *)(param_1 + 2) = 0;
    if (local_c->field_007B != -0x8000) {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if (local_c->field_009B == 0x34) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
    if ((char)param_1[2] == '\0') {
      sVar4 = local_c->field_0039;
      if (sVar4 < 1) {
LAB_0066380d:
        iVar12 = 0;
      }
      else if (sVar4 < 3) {
        iVar12 = 0x33;
      }
      else {
        if (sVar4 != 3) goto LAB_0066380d;
        iVar12 = 0x62;
      }
      pDVar16 = (DArrayTy *)st::fn_004038E1(local_c,iVar12,(sVar4 != 3) - 1 & 2,nullptr);
      if (pDVar16 != nullptr) {
        *(undefined1 *)(param_1 + 2) = 1;
        st::fn_006AE110(pDVar16);
      }
    }
    if ((char)param_1[2] == '\x01') {
      if (('\0' < STField<char>(param_1,9)) &&
         (STField<DArrayTy *>(param_1,10) != nullptr)) {
        st::fn_004020EA(this_00,STField<DArrayTy *>(param_1,10),1);
      }
      uVar11 = st::fn_0040343B(this_00);
      STField<undefined2>(param_1,0xe) = uVar11;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x76:
    if (local_c->field_007B == -0x8000) {
      STField<undefined2>(param_1,0xf) = 0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pDVar16 = (DArrayTy *)st::fn_004018CF(local_c,extraout_EDX);
      if (pDVar16 != nullptr) {
        uVar23 = 0;
        if (0 < (int)pDVar16->count) {
          bVar24 = pDVar16->count != 0;
          do {
            if (bVar24) {
              puVar17 = DArrayAt<ushort>(pDVar16, uVar23);
            }
            else {
              puVar17 = nullptr;
            }
            local_28 = STReplaceLowWord((uint32_t)(puVar17), (uint16_t)(*puVar17));
            pSVar18 = st::fn_004028BA
                                (g_allPlayers_007FA174,*(char *)&local_c->field_0024,*puVar17,CASE_1
                                );
            if (pSVar18 != nullptr) {
              iVar12 = (*pSVar18->vtable->vfunc_2C)();
              if ((iVar12 < 1) || (0x28 < iVar12)) {
                bVar24 = false;
              }
              else {
                bVar24 = true;
              }
              if (((bVar24) &&
                  ((STField<short>(param_1,9) == -2 ||
                   (STField<short>(param_1,9) == pSVar18->field_081C)))) &&
                 ((STField<int>(param_1,0xb) == 0 ||
                  (iVar12 = (*pSVar18->vtable->vfunc_2C)(), STField<int>(param_1,0xb) == iVar12))
                 )) {
                STField<short>(param_1,0xf) = STField<short>(param_1,0xf) + 1;
                if (STField<DArrayTy *>(param_1,0x11) != nullptr) {
                  st::fn_006AE1C0(STField<DArrayTy *>(param_1,0x11),&local_28);
                }
              }
            }
            uVar23 = uVar23 + 1;
            bVar24 = uVar23 < pDVar16->count;
          } while ((int)uVar23 < (int)pDVar16->count);
        }
        st::fn_006AE110(pDVar16);
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_74.previous;
  return 0;
cf_continue_loop_00662E52:
  local_24 = (TLOBaseTy *)((int)&local_24->vtable + 1);
  bVar24 = local_24 < (TLOBaseTy *)local_8->count;
  if ((int)local_8->count <= (int)local_24) goto LAB_00662f34;
  goto LAB_00662dbb;
}

// 00667D90 AiFltClassTy::GetMessage
#line 1 "decomp/ST.exe/functions/00667D90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004031B6|00667D90; family_names=AiFltClassTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:2,18:2,1c:8} */

int __thiscall st::fn_00667D90(AiFltClassTy *this,STMessage *message)

{
  STMessageId SVar1;
  undefined4 *puVar2;
  AiFltClassTy *this_00;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  STGroupBoatC *this_01;
  int iVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  InternalExceptionFrame local_54;
  AiFltClassTy *local_10;
  byte *local_c;
  AnonShape_0060EA30_DCEB68AD *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar5 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar7 = st::fn_006AD4D0("E:\\__titans\\ai\\ai_flt.cpp",0xeca,0,iVar5,
                               "AiFltClassTy::GetMessage error mess->id == %lX Name=%d",message->id,
                               local_10->field_0018);
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,"E:\\__titans\\ai\\ai_flt.cpp",0xecb);
    return 0xffff;
  }
  local_10->field_0280 = g_playSystem_00802A38->field_00E4;
  SVar1 = message->id;
  if (SVar1 < MESS_STOCTOPUSC_0112) {
    if (SVar1 == MESS_ID_ALLCREATE) {
      st::fn_00404B3D(local_10);
    }
    else if (SVar1 < 4) {
      if (SVar1 == MESS_SHARED_0003) {
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        st::fn_00401CDF((AnonShape_0065D6E0_0F9074F6 *)local_10,extraout_EDX);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        st::fn_00404C41((AnonShape_0065D720_52DE2AAB *)this_00,extraout_EDX_00);
        st::fn_0040220C(this_00);
      }
      else if (SVar1 == MESS_ID_NONE) {
        if (local_10->field_0093 == 0) {
          local_10->field_0093 = 1;
          st::fn_004014F6(local_10);
        }
        else {
          st::fn_00404778(local_10);
          st::fn_00402C8E(this_00);
        }
      }
      else if (SVar1 == MESS_ID_CREATE) {
        puVar2 = (message->arg0).ptr;
        if (puVar2 == nullptr) {
          st::fn_006A5E40
                    (-6,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_flt.cpp",0xe70);
        }
        st::fn_0040215D(this_00,puVar2);
        if (puVar2[3] == 0) {
          this_00->field_001C = DAT_00808754;
        }
        else {
          this_00->field_001C = this_00->field_0086;
        }
        if (puVar2[3] == 0) {
          uVar4 = st::fn_00401E97(*(char *)&this_00->field_0024,1,nullptr);
          this_00->field_007D = uVar4;
          st::fn_00404B3D(this_00);
          uVar6 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          this_00->field_008B = (uVar6 >> 0x10 & 7) + 8;
          uVar6 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          this_00->field_01FB = (uVar6 >> 0x10) % 0x1a + 0x19;
          uVar6 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          this_00->field_0203 = (uVar6 >> 0x10) % 0x1a + 0x19;
          st::fn_004049A8(this_00->field_020B,thunk_FUN_00660d10);
          this_00->field_0170 = *(short *)&this_00->field_022F->field_0xc;
          this_00->field_0127 = *(undefined2 *)&this_00->field_0223->field_0xc;
        }
        if ((this_00->field_007D == 0xfffe) || (g_allPlayers_007FA174 == nullptr)) {
          this_01 = nullptr;
        }
        else {
          this_01 = st::fn_00405CF9(*(char *)&this_00->field_0024,this_00->field_007D);
        }
        if (this_01 != nullptr) {
          st::fn_00404340((STGroupC *)this_01,1);
        }
      }
    }
    else if (SVar1 == MESS_SHARED_010F) {
      local_8 = nullptr;
      local_c = st::fn_00402C39(local_10,(uint *)&local_8);
      st::fn_004025F9(g_playSystem_00802A38,this_00->field_0018,local_c,local_8);
      if (local_c != nullptr) {
        st::fn_006AB060(&local_c);
      }
    }
  }
  else if (SVar1 == MESS_AIFLTCLASSTY_5D95) {
    local_10->field_00A7 = 1;
  }
  else {
    if (SVar1 != MESS_AIFLTCLASSTY_5D96) {
      if (SVar1 != MESS_AIFLTCLASSTY_5D99) goto LAB_00668010;
      (message->arg0).words.low = 1;
    }
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    st::fn_00403A1C((AnonShape_00661CA0_93A030EF *)local_10,extraout_EDX,(int)message);
  }
LAB_00668010:
  st::fn_006E5FD0(this_00,message);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

