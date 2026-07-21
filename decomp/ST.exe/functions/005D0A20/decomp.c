
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::ChangePlayerState */

void __thiscall SettMapMTy::ChangePlayerState(SettMapMTy *this,uint param_1)

{
  uint uVar1;
  DArrayTy *pDVar2;
  code *pcVar3;
  SettMapMTy *pSVar4;
  int errorCode;
  char *pcVar5;
  int iVar6;
  undefined4 unaff_ESI;
  AnonShape_005D00B0_9E7CC102 *pAVar7;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;
  
  if (this->field_1F84 != (DArrayTy *)0x0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pSVar4 = local_8;
    if (errorCode == 0) {
      pDVar2 = local_8->field_1F84;
      if (param_1 < pDVar2->count) {
        pAVar7 = (AnonShape_005D00B0_9E7CC102 *)(pDVar2->elementSize * param_1 + (int)pDVar2->data);
      }
      else {
        pAVar7 = (AnonShape_005D00B0_9E7CC102 *)0x0;
      }
      if (*(char *)pAVar7 != '\0') {
        if (pAVar7->field_0x1 == '\0') {
          uVar1 = param_1 + 1;
          while( true ) {
            pDVar2 = pSVar4->field_1F84;
            if (uVar1 < pDVar2->count) {
              pcVar5 = (char *)(pDVar2->elementSize * uVar1 + (int)pDVar2->data);
            }
            else {
              pcVar5 = (char *)0x0;
            }
            if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\0')) break;
            if (*(DArrayTy **)(pcVar5 + 0x50) != (DArrayTy *)0x0) {
              DArrayDestroy(*(DArrayTy **)(pcVar5 + 0x50));
            }
            FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)pSVar4->field_1F84,uVar1);
          }
          pAVar7->field_0x1 = 1;
        }
        else if (pDVar2->count < 0x18) {
          pAVar7->field_0x1 = 0;
          thunk_FUN_005d00b0(local_8,pAVar7,param_1 + 1);
        }
        (*(code *)pSVar4->field_0000->field_002C)();
        pSVar4->field_2121 = pSVar4->field_2121 + 1;
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x5ba,0,errorCode,
                               &DAT_007a4ccc,s_SettMapMTy__ChangePlayerState_007cd458);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_settmobj_cpp_007cd258,0x5ba);
  }
  return;
}

