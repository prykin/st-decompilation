
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::ChatMessage */

void __thiscall StartSystemTy::ChatMessage(StartSystemTy *this,int param_1)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  SystemClassTy *this_00;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_74;
  undefined4 local_30 [4];
  undefined4 local_20;
  int local_1c;
  int local_10;
  int local_c;
  SystemClassTy *local_8;
  
  puVar4 = local_30;
  local_8 = (SystemClassTy *)this;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  iVar6 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_startsys_cpp_007cd718,0x349,0,iVar6,&DAT_007a4ccc
                               ,s_StartSystemTy__ChatMessage_007cd86c);
    if (iVar5 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_Start_startsys_cpp_007cd718,0x349);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar6 == 0x633f) {
    if ((((*(int *)((int)&local_8[0x33].parentSystem + 2) != 0) && (DAT_0080c4fa != 0)) &&
        (-1 < (int)local_8[0x2a].app)) &&
       ((param_1 != 0 && (iVar6 = *(int *)(param_1 + 0x1c), iVar6 != 0)))) {
      iVar5 = local_8[1].systemId;
      local_10 = iVar6;
      if (*(int *)(iVar5 + 0xa0) != 0) {
        FUN_00710790(iVar5);
      }
      iVar2 = *(int *)((int)&this_00[0x33].parentSystem + 2);
      local_c = *(int *)(iVar5 + 0x8a);
      FUN_006b4170(iVar2,0,0,0,*(int *)(iVar2 + 4),*(int *)(iVar2 + 8),0xff);
      uVar7 = (uint)*(ushort *)(param_1 + 0x16);
      iVar5 = DAT_0080c4fa;
      uVar8 = uVar7;
      if ((int)uVar7 < (int)(uVar7 + *(int *)(iVar6 + 0x1e0))) {
        do {
          if ((int)uVar8 < *(int *)(iVar5 + 8)) {
            puVar9 = *(uint **)(*(int *)(iVar5 + 0x14) + uVar8 * 4);
          }
          else {
            puVar9 = (uint *)0x0;
          }
          if (puVar9 != (uint *)0x0) {
            iVar6 = *(int *)((int)&this_00[0x33].parentSystem + 2);
            ccFntTy::SetSurf((ccFntTy *)this_00[1].systemId,iVar6,0,0,(uVar8 - uVar7) * local_c,
                             *(int *)(iVar6 + 4),local_c);
            ccFntTy::WrStr((ccFntTy *)this_00[1].systemId,puVar9,0,-1,0);
            iVar5 = DAT_0080c4fa;
          }
          uVar8 = uVar8 + 1;
          uVar7 = (uint)*(ushort *)(param_1 + 0x16);
        } while ((int)uVar8 < (int)(uVar7 + *(int *)(local_10 + 0x1e0)));
      }
      FUN_006b35d0(DAT_008075a8,(uint)this_00[0x2a].app);
    }
  }
  else {
    if (iVar6 == 0xc0a0) {
      iVar6 = *(int *)((int)&local_8[0x34].vtable + 2);
      uVar8 = *(uint *)(iVar6 + 0x14);
      if (uVar8 == 0) {
        uVar8 = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar6 + 8);
      }
      puVar4 = (undefined4 *)FUN_006b4fa0(iVar6);
      for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar4 = 0xffffffff;
        puVar4 = puVar4 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar4 = 0xff;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      ccFntTy::SetSurf((ccFntTy *)this_00[1].systemId,*(int *)((int)&this_00[0x34].vtable + 2),0,0,0
                       ,0,0);
      if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
        ccFntTy::WrStr((ccFntTy *)this_00[1].systemId,(uint *)**(undefined4 **)(param_1 + 0x14),0,-1
                       ,2);
      }
      uVar1 = *(ushort *)(param_1 + 0x18);
      if ((uVar1 != 0xffff) || (*(short *)(param_1 + 0x1a) != -1)) {
        iVar6 = *(int *)((int)&this_00[0x34].vtable + 2);
        FUN_006b5b10(iVar6,0,(uint)uVar1,*(ushort *)(param_1 + 0x1a) + 2,(uint)uVar1,
                     (*(int *)(iVar6 + 8) - (uint)*(ushort *)(param_1 + 0x1a)) + -5,9,0xd);
      }
      FUN_006b35d0(DAT_008075a8,this_00[0x2a].systemId);
      g_currentExceptionFrame = local_74.previous;
      return;
    }
    if ((iVar6 == 0xc0a1) && (local_8[0x2a].objectLock != (void *)0x0)) {
      local_20 = 0x21;
      SystemClassTy::SendMessage(local_8,2,(int)local_8[0x2a].objectLock,(int)local_30);
      if (local_1c == 0) {
        local_20 = 0x20;
        local_1c = 1;
        SystemClassTy::SendMessage(this_00,2,(int)this_00[0x2a].objectLock,(int)local_30);
        g_currentExceptionFrame = local_74.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_74.previous;
  return;
}

