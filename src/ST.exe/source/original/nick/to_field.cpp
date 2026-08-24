#include "st/generated.hpp"
// Generated translation unit: source/original/nick/to_field.cpp

// 006099E0 STFieldC::CreateField
#line 4 "decomp/ST.exe/functions/006099E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_field.cpp
   STFieldC::CreateField */

uint __thiscall st::fn_006099E0(STFieldC *this,uint param_1)

{
  STFieldC *pSVar2;
  int iVar3;
  STFieldC_field_0234DArray *pSVar3;
  int iVar4;
  uint uVar7;
  undefined4 local_90 [15];
  undefined4 local_54;
  InternalExceptionFrame local_50;
  STFieldC *local_c;
  uint local_8;

  local_8 = 0xffffffff;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pSVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    uVar7 = local_8;
    if (0 < (int)local_8) {
      do {
        st::fn_006AE110((DArrayTy *)pSVar2->field_0234);
        uVar7 = uVar7 - 1;
        pSVar2->field_0234 = nullptr;
      } while (uVar7 != 0);
    }
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_field.cpp"),0x1e5,0,iVar3,st::mutable_c_string("%s"),
                               "STFieldC::CreateField");
    if (iVar4 == 0) {
      st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\nick\\to_field.cpp"),0x1e7);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_c->field_0234 == nullptr) {
    pSVar3 = (STFieldC_field_0234DArray *)
             st::fn_006AE290(nullptr,param_1,0x40,10);
    pSVar2->field_0234 = pSVar3;
  }
  if ((pSVar2->field_0234 != nullptr) && (param_1 != 0)) {
    memset(local_90, 0, 0x40); /* compiler bulk-zero initialization */
    local_54 = 0xffffffff;
    if (0 < (int)param_1) {
      do {
        local_8 = st::fn_006AE1C0((DArrayTy *)pSVar2->field_0234,local_90);
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
    if (-1 < (int)local_8) {
      g_currentExceptionFrame = local_50.previous;
      return local_8 + 1;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

// 00609B90 STFieldC::InitSprSistem
#line 4 "decomp/ST.exe/functions/00609B90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_field.cpp
   STFieldC::InitSprSistem */

undefined4 __thiscall st::fn_00609B90(STFieldC *this,int param_1)

{
  dword dVar1;
  STFieldC_field_0234DArray *pSVar2;
  STFieldC *this_00;
  int errorCode;
  STFieldC_field_0234Element *element_0234;
  int iVar5;
  uint uVar6;
  uint uVar7;
  InternalExceptionFrame local_4c;
  STFieldC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    if ((local_8->field_0234 != nullptr) &&
       (dVar1 = local_8->field_0234->count, uVar7 = 0, 0 < (int)dVar1)) {
      do {
        pSVar2 = this_00->field_0234;
        if (uVar7 < pSVar2->count) {
          element_0234 = DArrayAt<STFieldC_field_0234Element>(pSVar2, uVar7);
        }
        else {
          element_0234 = nullptr;
        }
        if (element_0234 != nullptr) {
          if ((this_00->field_01F5 == 0x4d) && (param_1 != 0)) {
            element_0234->field_0004 = 0;
          }
          if ((int)element_0234->field_003C < 0) {
            /* ST_CALLSITE[00609C14]: CALL 0x004021df; direct=004021DF STFieldC::LoadImagSpr */
            st::fn_004021DF(this_00,uVar7);
          }
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)dVar1);
    }
    g_currentExceptionFrame = local_4c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_field.cpp"),0x208,0,errorCode,
                             st::mutable_c_string("%s"),"STFieldC::InitSprSistem(void)");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\nick\\to_field.cpp"),0x20a);
  return 0xffff;
}

// 00609D60 STFieldC::LoadImagSpr
#line 4 "decomp/ST.exe/functions/00609D60/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_field.cpp
   STFieldC::LoadImagSpr */

undefined4 __thiscall st::fn_00609D60(STFieldC *this,uint param_1)

{
  STFieldC_field_0234DArray *pSVar1;
  uint uVar2;
  uint *puVar4;
  int errorCode;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char *text;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  STFieldC_field_0234Element *element_0234;
  uint local_8;

  pSVar1 = this->field_0234;
  local_10 = 0;
  if (pSVar1 == nullptr) {
    return 0;
  }
  if (param_1 < pSVar1->count) {
    element_0234 = DArrayAt<STFieldC_field_0234Element>(pSVar1, param_1);
  }
  else {
    element_0234 = nullptr;
  }
  if ((element_0234 != nullptr) && (element_0234->field_0004 != 0xffffffff)) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    errorCode = st::fn_0072D7F0(local_54.jumpBuffer,0);
    puVar4 = &(element_0234)->field_0000;
    if (errorCode != 0) {
      g_currentExceptionFrame = local_54.previous;
      iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_field.cpp"),0x248,0,errorCode,
                                 st::mutable_c_string("%s"),"STFieldC::LoadImagSpr");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\nick\\to_field.cpp"),0x24a);
      return 0xffff;
    }
    uVar2 = element_0234->field_0000;
    if (uVar2 < 4) {
      text = (&PTR_s_pics_g_007cf6d0)[uVar2];
      piVar8 = PTR_00806764;
    }
    else {
      text = (&PTR_s_pics_g_007cf6d0)[uVar2];
      piVar8 = PTR_00806774;
    }
    puVar5 = st::fn_00709AF0
                       (piVar8,CASE_1D,text,0xffffffff,0,1,0,nullptr);
    st::fn_006E8660
              (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar5,9),
               STField<uint>(puVar5,0xd),*(int *)(&DAT_007cf6f0 + *puVar4 * 8) / 2,
               *(int *)(&DAT_007cf6f4 + *puVar4 * 8) / 2 - 0xe,0);
    st::fn_006E98E0
              (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar5,STField<int>(puVar5,0x21),1);
    st::fn_006EA270(g_sT3DSMAPContext_00807598,local_8,0,0);
    st::fn_006EA5E0(g_sT3DSMAPContext_00807598,local_8,0,0);
    st::fn_006EA960
              (g_sT3DSMAPContext_00807598,local_8,
               (float)(int)puVar4[3] * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)puVar4[4] * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)puVar4[5] * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    st::fn_006EAAA0(g_sT3DSMAPContext_00807598,local_8,0);
    puVar4[1] = 1;
    puVar4[0xf] = local_8;
    g_currentExceptionFrame = local_54.previous;
  }
  return local_10;
}

