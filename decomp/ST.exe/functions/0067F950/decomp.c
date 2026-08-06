#include "../../pseudocode_runtime.h"


uint __cdecl FUN_0067f950(byte *param_1)

{
  byte bVar1;
  dword dVar2;
  int local_EAX_39;
  byte *pbVar3;
  int iVar4;
  int uVar3;
  byte *pbVar5;
  bool bVar6;
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
  dVar2 = g_dArray_00848A34->elementSize;
  if (0 < (int)dVar2) {
    if ((int)dVar2 < 1) {
      pbVar5 = nullptr;
      pbVar3 = param_1;
      goto LAB_0067f9ac;
    }
    do {
      pbVar5 = *(byte **)(g_dArray_00848A34->growCapacity + uVar3 * 4);
      pbVar3 = param_1;
LAB_0067f9ac:
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_0067f9d0:
          iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_0067f9d5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_0067f9d0;
        pbVar5 = pbVar5 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0067f9d5:
      if (iVar4 == 0) goto LAB_0067f9e1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (int)dVar2);
  }
  uVar3 = 0xffffffff;
LAB_0067f9e1:
  if (uVar3 < 0) {
    uVar3 = Library::DKW::TBL::FUN_006b5aa0(&g_dArray_00848A34->flags,(char *)param_1);
    local_8 = 0;
    iVar4 = Library::DKW::TBL::DArrayAppend(g_array_00848A30,&local_8);
    if (iVar4 != uVar3) {
      RaiseInternalException(-5,g_overwriteContext_007ED77C,".\\ai\\ai_script_v.inl",0x195);
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return uVar3;
}

