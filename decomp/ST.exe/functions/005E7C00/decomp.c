
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::AddStr */

void __thiscall WaitTy::AddStr(WaitTy *this,uint *param_1,int param_2)

{
  code *pcVar1;
  WaitTy *pWVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  uint *local_10;
  WaitTy *local_c;
  uint *local_8;
  
  if (param_1 != (uint *)0x0) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_c = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pWVar2 = local_c;
    if (iVar3 == 0) {
      if (param_2 != 0) {
        iVar3 = local_c->field_1AF0;
        uVar8 = local_c->field_1AF4;
        if ((int)uVar8 < *(int *)(iVar3 + 8)) {
          do {
            FUN_006b7830(iVar3,uVar8);
            iVar3 = pWVar2->field_1AF0;
            uVar8 = pWVar2->field_1AF4;
          } while ((int)uVar8 < *(int *)(iVar3 + 8));
        }
        FUN_006b4170(pWVar2->field_1AEC,0,0,pWVar2->field_1AF4 * 0x13,
                     *(int *)(pWVar2->field_1AEC + 4),(0x16 - pWVar2->field_1AF4) * 0x13,0);
      }
      puVar4 = ccFntTy::_TxtToSarr(*(ccFntTy **)(DAT_0081176c + 0x30),param_1);
      puVar5 = local_10;
      if (puVar4 != (uint *)0x0) {
        puVar5 = ccFntTy::FormSarr(*(ccFntTy **)(DAT_0081176c + 0x30),(int)puVar4,
                                   (uint *)s________________007c21d8,0x1e4,0,0xffffffff,1);
        local_10 = puVar5;
        FUN_006b5570((byte *)puVar4);
      }
      pWVar2->field_1AF4 = *(undefined4 *)(pWVar2->field_1AF0 + 8);
      if (puVar5 != (uint *)0x0) {
        iVar3 = 0;
        if (0 < (int)puVar5[2]) {
          if ((int)puVar5[2] < 1) {
            pcVar6 = (char *)0x0;
            goto LAB_005e7d14;
          }
          do {
            pcVar6 = *(char **)(puVar5[5] + iVar3 * 4);
LAB_005e7d14:
            Library::DKW::TBL::FUN_006b5aa0(pWVar2->field_1AF0,pcVar6);
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)puVar5[2]);
        }
        FUN_006b5570((byte *)puVar5);
      }
      iVar3 = *(int *)(pWVar2->field_1AF0 + 8);
      if (iVar3 < 0x16) {
        iVar9 = iVar3 + -1;
      }
      else if (iVar3 < 0x2c) {
        puVar7 = (undefined4 *)pWVar2->field_1AEC;
        iVar9 = 0x2c - iVar3;
        Library::DKW::WGR::FUN_006b55f0
                  (puVar7,0,0,0,(int)puVar7,0,0,iVar3 * 0x13 + -0x1a2,puVar7[1],iVar9 * 0x13);
      }
      else {
        iVar3 = pWVar2->field_1AEC;
        iVar9 = 0;
        local_8 = *(uint **)(iVar3 + 0x14);
        if (local_8 == (uint *)0x0) {
          local_8 = (uint *)(((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 &
                             0x1ffffffc) * *(int *)(iVar3 + 8));
        }
        puVar7 = (undefined4 *)FUN_006b4fa0(iVar3);
        for (uVar8 = (uint)local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        for (uVar8 = (uint)local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar7 = 0;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
      }
      for (iVar3 = *(int *)(pWVar2->field_1AF0 + 8); 0x15 < iVar3; iVar3 = *(int *)(iVar3 + -0x10))
      {
        FUN_006b7830(pWVar2->field_1AF0,0);
        iVar3 = pWVar2->field_1AF0;
        pWVar2->field_1AF0 = iVar3 + -0x18;
      }
      if (iVar9 <= *(int *)(pWVar2->field_1AF0 + 8) + -1) {
        local_8 = &pWVar2->field_1A94 + iVar9;
        iVar3 = iVar9 * 0x13;
        do {
          FUN_006b4170(pWVar2->field_1AEC,0,0,iVar3,*(int *)(pWVar2->field_1AEC + 4),0x13,0);
          ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x30),pWVar2->field_1AEC,0,2,iVar3,
                           *(int *)(pWVar2->field_1AEC + 4) + -4,0x13);
          if (iVar9 < *(int *)(pWVar2->field_1AF0 + 8)) {
            puVar5 = *(uint **)(*(int *)(pWVar2->field_1AF0 + 0x14) + iVar9 * 4);
          }
          else {
            puVar5 = (uint *)0x0;
          }
          ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x30),puVar5,0,-1,1);
          FUN_006b35d0(DAT_008075a8,*local_8);
          iVar9 = iVar9 + 1;
          local_8 = local_8 + 1;
          iVar3 = iVar3 + 0x13;
        } while (iVar9 <= *(int *)(pWVar2->field_1AF0 + 8) + -1);
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Start_wait_obj_cpp_007cdd5c,0x120,0,iVar3,&DAT_007a4ccc
                               ,s_WaitTy__AddStr_007cddc4);
    if (iVar9 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_wait_obj_cpp_007cdd5c,0x120);
  }
  return;
}

