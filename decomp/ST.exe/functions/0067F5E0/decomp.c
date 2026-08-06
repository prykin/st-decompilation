#include "../../pseudocode_runtime.h"


uint __cdecl FUN_0067f5e0(byte *param_1)

{
  byte bVar1;
  int local_EAX_39;
  byte *pbVar2;
  int iVar3;
  int uVar3;
  int iVar4;
  AnonNested_AnonShape_GLOBAL_00848A2C_50EB5CD1_0014_282260F2 *pAVar5;
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
  iVar4 = PTR_00848a2c->field_0008;
  if (0 < iVar4) {
    if (iVar4 < 1) {
      pAVar5 = nullptr;
      pbVar2 = param_1;
      goto LAB_0067f63c;
    }
    do {
      pAVar5 = PTR_00848a2c->entries_0014[uVar3];
      pbVar2 = param_1;
LAB_0067f63c:
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < pAVar5->field_0000;
        if (bVar1 != pAVar5->field_0000) {
LAB_0067f660:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_0067f665;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pAVar5->field_0001;
        if (bVar1 != pAVar5->field_0001) goto LAB_0067f660;
        pAVar5 = pAVar5 + 1;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_0067f665:
      if (iVar3 == 0) goto LAB_0067f671;
      uVar3 = uVar3 + 1;
    } while (uVar3 < iVar4);
  }
  uVar3 = 0xffffffff;
LAB_0067f671:
  if (uVar3 < 0) {
    uVar3 = Library::DKW::TBL::FUN_006b5aa0((uint *)PTR_00848a2c,(char *)param_1);
    local_8 = 0;
    iVar4 = Library::DKW::TBL::DArrayAppend(g_array_00848A28,&local_8);
    if (iVar4 != uVar3) {
      RaiseInternalException(-5,g_overwriteContext_007ED77C,".\\ai\\ai_script_v.inl",0x126);
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return uVar3;
}

