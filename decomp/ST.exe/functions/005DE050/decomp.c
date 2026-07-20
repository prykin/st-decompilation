
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::PaintBinDesc */

void __thiscall
StartSystemTy::PaintBinDesc(StartSystemTy *this,AnonShape_005DE050_5BD86458 *param_1)

{
  ccFntTy *pcVar1;
  code *pcVar2;
  StartSystemTy *pSVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 unaff_ESI;
  uint uVar8;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  StartSystemTy *local_10;
  int local_c;
  int local_8;
  
  if ((((this->field_0544 != 0) && (this->field_0548 != 0)) && (-1 < (int)this->field_0540)) &&
     ((param_1 != (AnonShape_005DE050_5BD86458 *)0x0 &&
      (local_c = param_1->field_001C, local_c != 0)))) {
    pcVar1 = this->field_0034;
    local_10 = this;
    if (pcVar1->field_00A0 != 0) {
      FUN_00710790((uint *)pcVar1);
    }
    local_8 = *(int *)&pcVar1->field_0x8a;
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pSVar3 = local_10;
    if (iVar4 == 0) {
      iVar4 = local_10->field_0544;
      FUN_006b4170(iVar4,0,0,0,*(int *)(iVar4 + 4),*(int *)(iVar4 + 8),0xff);
      uVar5 = (uint)param_1->field_0016;
      uVar8 = uVar5;
      if ((int)uVar5 < (int)(*(int *)(local_c + 0x1e0) + uVar5)) {
        do {
          if ((int)uVar8 < *(int *)(pSVar3->field_0548 + 8)) {
            puVar7 = *(uint **)(*(int *)(pSVar3->field_0548 + 0x14) + uVar8 * 4);
          }
          else {
            puVar7 = (uint *)0x0;
          }
          if (puVar7 != (uint *)0x0) {
            ccFntTy::SetSurf(pSVar3->field_0034,pSVar3->field_0544,0,0,(uVar8 - uVar5) * local_8,
                             *(int *)(pSVar3->field_0544 + 4),local_8);
            ccFntTy::WrStr(pSVar3->field_0034,puVar7,0,-1,0);
          }
          uVar8 = uVar8 + 1;
          uVar5 = (uint)param_1->field_0016;
        } while ((int)uVar8 < (int)(*(int *)(local_c + 0x1e0) + uVar5));
      }
      FUN_006b35d0(DAT_008075a8,pSVar3->field_0540);
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_startsys_cpp_007cd718,0x3cb,0,iVar4,&DAT_007a4ccc
                               ,s_StartSystemTy__PaintBinDesc_007cd8e0);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_startsys_cpp_007cd718,0x3cb);
  }
  return;
}

