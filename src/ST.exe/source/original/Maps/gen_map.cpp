#include "st/generated.hpp"
// Generated translation unit: source/original/Maps/gen_map.cpp

// 00695A60 CGenerate::CteateField
#line 4 "decomp/ST.exe/functions/00695A60/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Maps\gen_map.cpp
   CGenerate::CteateField */

undefined4 __thiscall
st::fn_00695A60
          (CGenerate *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  CGenerate *pCVar2;
  int errorCode;
  byte *pbVar3;
  ushort *puVar4;
  CGenerate_field_5853DArray *pCVar5;
  uint uVar6;
  int iVar7;
  uint size;
  InternalExceptionFrame local_50;
  undefined4 local_c;
  CGenerate *local_8;

  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pCVar2 = local_8;
  if (errorCode == 0) {
    size = param_1 * param_2;
    local_8->field_582F = size;
    local_8->field_5833 = param_1;
    local_8->field_583F = 0;
    local_8->field_5843 = param_4;
    local_8->field_5837 = (int)size / param_1;
    local_8->field_583B = param_5;
    local_8->field_5847 = param_3;
    pbVar3 = st::pointer_boundary_cast<byte *>(st::fn_006AAC70(size));
    pCVar2->field_584B = pbVar3;
    puVar4 = static_cast<ushort *>(st::fn_006AAC70(pCVar2->field_582F * ((-(uint)(param_6 != 0) & 7) + 1) * 2));
    pCVar2->field_584F = puVar4;
    pCVar5 = (CGenerate_field_5853DArray *)
             st::fn_006AE290(nullptr,10,0x1d,10);
    pCVar2->field_5853 = pCVar5;
    g_currentExceptionFrame = local_50.previous;
    if (((pCVar2->field_584B == nullptr) || (pCVar2->field_584F == nullptr)) ||
       (uVar6 = 1, pCVar2->field_5853 == nullptr)) {
      return local_c;
    }
  }
  else {
    g_currentExceptionFrame = local_50.previous;
    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Maps\\gen_map.cpp"),0x330,0,errorCode,
                               st::mutable_c_string("%s"),"CGenerate::CteateField");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Maps\\gen_map.cpp"),0x332);
    uVar6 = 0xffff;
  }
  return uVar6;
}

