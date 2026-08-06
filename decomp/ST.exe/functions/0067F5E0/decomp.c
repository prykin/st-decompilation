#include "../../pseudocode_runtime.h"


uint __cdecl FUN_0067f5e0(byte *param_1)

{
  byte bVar1;
  dword dVar2;
  int local_EAX_39;
  byte *pbVar3;
  int iVar5;
  int uVar3;
  int iVar4;
  byte *pbVar6;
  bool bVar7;
  InternalExceptionFrame local_4c;
  undefined4 local_8;

  local_8 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_EAX_39 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (local_EAX_39 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    if (-1 < local_EAX_39) {
      local_EAX_39 = 0xffffffff;
    }
    return local_EAX_39;
  }
  uVar3 = 0;
  dVar2 = g_dArray_00848A2C->elementSize;
  if (0 < (int)dVar2) {
    if ((int)dVar2 < 1) {
      pbVar6 = nullptr;
      pbVar3 = param_1;
      goto LAB_0067f63c;
    }
    do {
      pbVar6 = *(byte **)(g_dArray_00848A2C->growCapacity + uVar3 * 4);
      pbVar3 = param_1;
LAB_0067f63c:
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_0067f660:
          iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0067f665;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_0067f660;
        pbVar6 = pbVar6 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_0067f665:
      if (iVar5 == 0) goto LAB_0067f671;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (int)dVar2);
  }
  uVar3 = 0xffffffff;
LAB_0067f671:
  if (uVar3 < 0) {
    uVar3 = Library::DKW::TBL::FUN_006b5aa0(g_dArray_00848A2C,(char *)param_1);
    local_8 = 0;
    iVar4 = Library::DKW::TBL::DArrayAppend(g_array_00848A28,&local_8);
    if (iVar4 != uVar3) {
      RaiseInternalException(-5,g_overwriteContext_007ED77C,".\\ai\\ai_script_v.inl",0x126);
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return uVar3;
}

