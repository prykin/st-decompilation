#include "st/generated.hpp"
// Generated translation unit: source/original/nick/to_TmMin.cpp

// 0063D280 STTmMineC::CreatePart
#line 4 "decomp/ST.exe/functions/0063D280/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_TmMin.cpp
   STTmMineC::CreatePart */

uint __thiscall st::fn_0063D280(STTmMineC *this,uint param_1)

{
  STTmMineC_field_0336DArray *pSVar1;
  STTmMineC *pSVar3;
  int iVar3;
  DArrayTy *pSVar3_mg0;
  int iVar4;
  STTmMineC_field_0336Element *element_0336;
  uint uVar7;
  uint local_8c [15];
  InternalExceptionFrame local_50;
  STTmMineC *local_c;
  uint local_8;

  local_8 = 0xffffffff;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pSVar3 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;

    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_TmMin.cpp"),0x4a6,0,iVar3,st::mutable_c_string("%s"),
                               "STTmMineC::CreatePart");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\nick\\to_TmMin.cpp"),0x4a8);
    return 0xffff;
  }
  if (local_c->field_0336 == nullptr) {
    /* ST_CALLSITE[0063D2D5]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/STTmMineC_field_0336DArray; source view only; no Ghidra override */
    pSVar3_mg0 = st::fn_006AE290(nullptr,param_1,0x3c,10);
    pSVar3->field_0336 = reinterpret_cast<STTmMineC_field_0336DArray *>(pSVar3_mg0);
    if (pSVar3_mg0 == nullptr) {
      g_currentExceptionFrame = local_50.previous;
      return local_8;
    }
  }
  if (param_1 != 0) {
    uVar7 = 0;
    memset(local_8c, 0, 0x3c); /* compiler bulk-zero initialization */
    if (0 < (int)param_1) {
      do {

        local_8 = st::fn_006AE1C0((DArrayTy *)pSVar3->field_0336,local_8c);
        pSVar1 = st::pointer_boundary_cast<STTmMineC_field_0336DArray *>(pSVar3->field_0336);
        if (uVar7 < pSVar1->count) {
          element_0336 = DArrayAt<STTmMineC_field_0336Element>(pSVar1, uVar7);
        }
        else {
          element_0336 = nullptr;
        }
        if (element_0336 != nullptr) {
          element_0336->field_0038 = -1;
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)param_1);
    }
    if (-1 < (int)local_8) {
      g_currentExceptionFrame = local_50.previous;
      return local_8 + 1;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

// 0063DEF0 STTmMineC::LoadImagNuclear
#line 4 "decomp/ST.exe/functions/0063DEF0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_TmMin.cpp
   STTmMineC::LoadImagNuclear
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00639C90 @ 0063AA64 -> read as EAX on
   every CFG path | 0063D100 @ 0063D1EF -> read as EAX on every CFG path */

int __thiscall st::fn_0063DEF0(STTmMineC *this,int param_1)

{
  STTmMineC *pSVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  InternalExceptionFrame local_54;
  int local_10;
  STTmMineC *local_c;
  uint local_8;

  local_10 = 0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;

  iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  pSVar2 = local_c;
  if (iVar3 == 0) {
    if (local_c->field_033A == -1) {
      /* ST_CALLSITE[0063DF52]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
      puVar4 = st::fn_00709AF0
                         (PTR_00806774,CASE_1D,st::mutable_c_string("expl_nb0"),0xffffffff,0,1,0,
                          nullptr);

      st::fn_006E8660
                (st::pointer_boundary_cast<ST3DSMAPContext *>(pSVar2->field_0211),reinterpret_cast<int *>(&local_8),1,0,STField<uint>(puVar4,9),
                 STField<uint>(puVar4,0xd),0x6f,0xf0,0);

      st::fn_006E98E0
                (st::pointer_boundary_cast<ST3DSMAPContext *>(pSVar2->field_0211),local_8,0,*(int *)puVar4,STField<int>(puVar4,0x21),1);
      st::fn_006EA270(st::pointer_boundary_cast<ST3DSMAPContext *>(pSVar2->field_0211),local_8,0,pSVar2->field_033E);
      st::fn_006EA960
                (st::pointer_boundary_cast<void *>(pSVar2->field_0211),local_8,
                 (float)pSVar2->field_0266 * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar2->field_026A * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar2->field_026E * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);

      st::fn_006EAAA0(st::pointer_boundary_cast<void *>(pSVar2->field_0211),local_8,0);
      st::fn_006EAB60(st::pointer_boundary_cast<void *>(pSVar2->field_0211),local_8);
      pSVar2->field_0346 = 0;
      pSVar2->field_033A = local_8;
      pSVar2->field_0342 = *(undefined4 *)puVar4;
    }
    if ((pSVar2->field_0353 == -1) && (param_1 != 0)) {
      puVar4 = st::fn_00709AF0
                         (PTR_00806774,CASE_1D,st::mutable_c_string("expl_fla"),0xffffffff,0,1,0,
                          nullptr);
      pSVar2->field_034B = puVar4;
      pSVar2->field_034F = 0;
    }
    g_currentExceptionFrame = local_54.previous;
    return local_10;
  }
  g_currentExceptionFrame = local_54.previous;

  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_TmMin.cpp"),0x5d3,0,iVar3,st::mutable_c_string("%s"),
                             "STTmMineC::LoadImagNuclear");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\nick\\to_TmMin.cpp"),0x5d5);
  return 0xffff;
}

// 0063E160 STTmMineC::LoadImagSpr
#line 4 "decomp/ST.exe/functions/0063E160/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_TmMin.cpp
   STTmMineC::LoadImagSpr */

undefined4 __thiscall st::fn_0063E160(STTmMineC *this,uint param_1,int param_2)

{
  STTmMineC_field_0336DArray *pSVar1;
  uint uVar2;
  STTmMineC *pSVar4;
  char *pcVar5;
  int errorCode;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  ST3DSMAPContext **ppSVar9;
  InternalExceptionFrame local_58;
  uint local_14;
  STTmMineC *local_10;
  STTmMineC_field_0336Element *element_0336;
  uint local_8;

  pSVar1 = st::pointer_boundary_cast<STTmMineC_field_0336DArray *>(this->field_0336);
  local_14 = 0;
  if (pSVar1 == nullptr) {
    return 0;
  }
  if (param_1 < pSVar1->count) {
    element_0336 = DArrayAt<STTmMineC_field_0336Element>(pSVar1, param_1);
  }
  else {
    element_0336 = nullptr;
  }
  if (element_0336 != nullptr) {
    if ((param_2 != 0) && (-1 < element_0336->field_0038)) {
      return 0xffffffff;
    }
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_10 = this;

    errorCode = st::fn_0072D7F0(local_58.jumpBuffer,0);
    pcVar5 = reinterpret_cast<char *>(element_0336);
    if (errorCode != 0) {
      g_currentExceptionFrame = local_58.previous;

      iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_TmMin.cpp"),0x603,0,errorCode,
                                 st::mutable_c_string("%s"),"STTmMineC::LoadImagSpr");
      if (iVar7 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\nick\\to_TmMin.cpp"),0x605);
      return 0xffff;
    }
    /* ST_CALLSITE[0063E203]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
    puVar6 = st::fn_00709AF0
                       (PTR_00806764,CASE_1D,(&PTR_s_blast_p_007d1f68)[*(int *)element_0336],0xffffffff
                        ,0,1,0,nullptr);
    pSVar4 = local_10;
    uVar2 = *(uint *)(pcVar5 + 0x38);
    if ((int)uVar2 < 0) {

      st::fn_006E8660
                (st::pointer_boundary_cast<ST3DSMAPContext *>(local_10->field_0211),reinterpret_cast<int *>(&local_8),1,0,STField<uint>(puVar6,9),
                 STField<uint>(puVar6,0xd),STField<int>(puVar6,9) / 2,
                 (int)STField<uint>(puVar6,0xd) / 2 - 0xe,0);
    }
    else {
      local_8 = uVar2;
      st::fn_006E9830
                (st::pointer_boundary_cast<void *>(local_10->field_0211),uVar2,STField<int>(puVar6,9) / 2,
                 STField<int>(puVar6,0xd) / 2 - 0xe);
    }
    ppSVar9 = reinterpret_cast<ST3DSMAPContext **>(&pSVar4->field_0211);

    st::fn_006E98E0(*ppSVar9,local_8,0,*(int *)puVar6,STField<int>(puVar6,0x21),1);
    st::fn_006EA270(*ppSVar9,local_8,0,*(uint *)(pcVar5 + 0x20));
    st::fn_006EA5E0(*ppSVar9,local_8,0,0);
    st::fn_006EA960
              (*ppSVar9,local_8,(float)*(int *)(pcVar5 + 8) * _DAT_007904f8 * _DAT_007904f0,
               (float)*(int *)(pcVar5 + 0xc) * _DAT_007904f8 * _DAT_007904f0,
               *(float *)(pcVar5 + 0x10) + _DAT_007904fc);

    st::fn_006EAAA0(*ppSVar9,local_8,0);
    if (*(int *)(pcVar5 + 4) != 0) {
      st::fn_006EAB60(*ppSVar9,local_8);
    }
    *(uint *)(pcVar5 + 0x38) = local_8;
    g_currentExceptionFrame = local_58.previous;
  }
  return local_14;
}

// 0063F3D0 STTmMineC::LoadImagVacuum
#line 4 "decomp/ST.exe/functions/0063F3D0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_TmMin.cpp
   STTmMineC::LoadImagVacuum */

undefined4 __thiscall st::fn_0063F3D0(STTmMineC *this,int param_1)

{
  uint *puVar1;
  STTmMineC *pSVar3;
  int errorCode;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  InternalExceptionFrame local_54;
  uint local_10;
  STTmMineC *local_c;
  uint local_8;

  local_10 = 0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;

  errorCode = st::fn_0072D7F0(local_54.jumpBuffer,0);
  pSVar3 = local_c;
  if (errorCode == 0) {
    if (local_c->field_033A == -1) {
      /* ST_CALLSITE[0063F434]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
      puVar4 = st::fn_00709AF0
                         (PTR_00806774,CASE_1D,st::mutable_c_string("expl_vc0"),0xffffffff,0,1,0,
                          nullptr);

      st::fn_006E8660
                (st::pointer_boundary_cast<ST3DSMAPContext *>(pSVar3->field_0211),reinterpret_cast<int *>(&local_8),1,0,STField<uint>(puVar4,9),
                 STField<uint>(puVar4,0xd),(int)STField<uint>(puVar4,9) / 2,0xa9,0);

      st::fn_006E98E0
                (st::pointer_boundary_cast<ST3DSMAPContext *>(pSVar3->field_0211),local_8,0,*(int *)puVar4,STField<int>(puVar4,0x21),1);
      st::fn_006EA270(st::pointer_boundary_cast<ST3DSMAPContext *>(pSVar3->field_0211),local_8,0,pSVar3->field_033E);
      st::fn_006EA960
                (st::pointer_boundary_cast<void *>(pSVar3->field_0211),local_8,
                 (float)pSVar3->field_0266 * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar3->field_026A * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar3->field_026E * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);

      st::fn_006EAAA0(st::pointer_boundary_cast<void *>(pSVar3->field_0211),local_8,0);
      st::fn_006EAB60(st::pointer_boundary_cast<void *>(pSVar3->field_0211),local_8);
      pSVar3->field_033A = local_8;
      pSVar3->field_0342 = *(undefined4 *)puVar4;
    }
    if ((pSVar3->field_0353 == -1) && (param_1 != 0)) {
      puVar4 = st::fn_00709AF0
                         (PTR_00806774,CASE_1D,st::mutable_c_string("expl_fla"),0xffffffff,0,1,0,
                          nullptr);
      pSVar3->field_034B = puVar4;
      pSVar3->field_034F = 0;
    }
    puVar1 = (uint *)&pSVar3->field_0363;
    if ((pSVar3->field_0363 == 0xffffffff) && (param_1 != 0)) {
      /* ST_CALLSITE[0063F596]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
      puVar4 = st::fn_00709AF0
                         (PTR_00806774,CASE_1D,st::mutable_c_string("expl_vc1"),0xffffffff,0,1,0,
                          nullptr);
      pSVar3->field_035F = puVar4;

      st::fn_006E8660
                (st::pointer_boundary_cast<ST3DSMAPContext *>(pSVar3->field_0211),reinterpret_cast<int *>(puVar1),1,0,STField<uint>(puVar4,9),
                 STField<uint>(puVar4,0xd),0xa8,0x43,0);

      st::fn_006E98E0
                (st::pointer_boundary_cast<ST3DSMAPContext *>(pSVar3->field_0211),*puVar1,0,*(int *)puVar4,STField<int>(puVar4,0x21),1);
      st::fn_006EA270(st::pointer_boundary_cast<ST3DSMAPContext *>(pSVar3->field_0211),*puVar1,0,pSVar3->field_0367);
      st::fn_006EA960
                (st::pointer_boundary_cast<void *>(pSVar3->field_0211),*puVar1,
                 (float)pSVar3->field_0266 * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar3->field_026A * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar3->field_026E * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);

      st::fn_006EAAA0(st::pointer_boundary_cast<void *>(pSVar3->field_0211),*puVar1,0);
      pSVar3->field_036B = *(undefined4 *)puVar4;
    }
    g_currentExceptionFrame = local_54.previous;
    return local_10;
  }
  g_currentExceptionFrame = local_54.previous;

  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_TmMin.cpp"),0x794,0,errorCode,
                             st::mutable_c_string("%s"),"STTmMineC::LoadImagVacuum");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\nick\\to_TmMin.cpp"),0x796);
  return 0xffff;
}
