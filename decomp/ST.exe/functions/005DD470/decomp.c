
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::ChatMessage
   
   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005B0BA0 -> 005DD470 @ 005B0BFB | 005D1400 -> 005DD470 @ 005D1464 | 005EA680 ->
   005DD470 @ 005EA6DB */

void __thiscall StartSystemTy::ChatMessage(StartSystemTy *this,AnonShape_005DE050_5BD86458 *param_1)

{
  ushort uVar1;
  AnonShape_006B5B10_E0D06CF1 *pAVar2;
  AnonShape_006C7610_838EDECF *pAVar3;
  code *pcVar4;
  SystemClassTy *this_00;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_74;
  undefined4 local_30 [4];
  undefined4 local_20;
  int local_1c;
  int local_10;
  int local_c;
  SystemClassTy *local_8;
  
  puVar5 = local_30;
  local_8 = (SystemClassTy *)this;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  iVar7 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_startsys_cpp_007cd718,0x349,0,iVar7,&DAT_007a4ccc
                               ,s_StartSystemTy__ChatMessage_007cd86c);
    if (iVar6 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_Start_startsys_cpp_007cd718,0x349);
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = *(int *)&param_1->field_0x10;
  if (iVar7 == 0x633f) {
    if ((((*(int *)((int)&local_8[0x33].parentSystem + 2) != 0) && (DAT_0080c4fa != 0)) &&
        (-1 < (int)local_8[0x2a].app)) &&
       ((param_1 != (AnonShape_005DE050_5BD86458 *)0x0 && (iVar7 = param_1->field_001C, iVar7 != 0))
       )) {
      puVar10 = (uint *)local_8[1].systemId;
      local_10 = iVar7;
      if (puVar10[0x28] != 0) {
        FUN_00710790(puVar10);
      }
      pAVar3 = *(AnonShape_006C7610_838EDECF **)((int)&this_00[0x33].parentSystem + 2);
      local_c = *(int *)((int)puVar10 + 0x8a);
      FUN_006b4170(pAVar3,0,0,0,pAVar3->field_0004,pAVar3->field_0008,0xff);
      uVar8 = (uint)param_1->field_0016;
      iVar6 = DAT_0080c4fa;
      uVar9 = uVar8;
      if ((int)uVar8 < (int)(uVar8 + *(int *)(iVar7 + 0x1e0))) {
        do {
          if ((int)uVar9 < *(int *)(iVar6 + 8)) {
            puVar10 = *(uint **)(*(int *)(iVar6 + 0x14) + uVar9 * 4);
          }
          else {
            puVar10 = (uint *)0x0;
          }
          if (puVar10 != (uint *)0x0) {
            iVar7 = *(int *)((int)&this_00[0x33].parentSystem + 2);
            ccFntTy::SetSurf((ccFntTy *)this_00[1].systemId,iVar7,0,0,(uVar9 - uVar8) * local_c,
                             *(int *)(iVar7 + 4),local_c);
            ccFntTy::WrStr((ccFntTy *)this_00[1].systemId,puVar10,0,-1,0);
            iVar6 = DAT_0080c4fa;
          }
          uVar9 = uVar9 + 1;
          uVar8 = (uint)param_1->field_0016;
        } while ((int)uVar9 < (int)(uVar8 + *(int *)(local_10 + 0x1e0)));
      }
      FUN_006b35d0(DAT_008075a8,(uint)this_00[0x2a].app);
    }
  }
  else {
    if (iVar7 == 0xc0a0) {
      iVar7 = *(int *)((int)&local_8[0x34].vtable + 2);
      uVar9 = *(uint *)(iVar7 + 0x14);
      if (uVar9 == 0) {
        uVar9 = ((uint)*(ushort *)(iVar7 + 0xe) * *(int *)(iVar7 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar7 + 8);
      }
      puVar5 = (undefined4 *)FUN_006b4fa0(iVar7);
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar5 = 0xff;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      ccFntTy::SetSurf((ccFntTy *)this_00[1].systemId,*(int *)((int)&this_00[0x34].vtable + 2),0,0,0
                       ,0,0);
      if (*(undefined4 **)&param_1->field_0x14 != (undefined4 *)0x0) {
        ccFntTy::WrStr((ccFntTy *)this_00[1].systemId,(uint *)**(undefined4 **)&param_1->field_0x14,
                       0,-1,2);
      }
      uVar1 = *(ushort *)&param_1->field_0x18;
      if ((uVar1 != 0xffff) || (*(short *)&param_1->field_0x1a != -1)) {
        pAVar2 = *(AnonShape_006B5B10_E0D06CF1 **)((int)&this_00[0x34].vtable + 2);
        FUN_006b5b10(pAVar2,0,(uint)uVar1,*(ushort *)&param_1->field_0x1a + 2,(uint)uVar1,
                     (pAVar2->field_0008 - (uint)*(ushort *)&param_1->field_0x1a) + -5,9,0xd);
      }
      FUN_006b35d0(DAT_008075a8,this_00[0x2a].systemId);
      g_currentExceptionFrame = local_74.previous;
      return;
    }
    if ((iVar7 == 0xc0a1) && (local_8[0x2a].objectLock != (void *)0x0)) {
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

