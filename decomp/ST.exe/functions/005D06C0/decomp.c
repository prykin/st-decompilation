
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::ChangePlayerCiv */

void __thiscall SettMapMTy::ChangePlayerCiv(SettMapMTy *this,uint param_1,char param_2)

{
  code *pcVar1;
  SettMapMTy *pSVar2;
  int errorCode;
  char *pcVar3;
  int iVar4;
  DArrayTy *pDVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar7;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;
  
  if (this->field_1F84 != (DArrayTy *)0x0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pSVar2 = local_8;
    if (errorCode == 0) {
      pDVar5 = local_8->field_1F84;
      if (param_1 < pDVar5->count) {
        pcVar3 = (char *)(pDVar5->elementSize * param_1 + (int)pDVar5->data);
      }
      else {
        pcVar3 = (char *)0x0;
      }
      if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
        pcVar3[3] = param_2;
        if ((pcVar3[4] == '\x02') && (*(int *)(pcVar3 + 6) == DAT_0080877f)) {
          DAT_0080874e = param_2;
        }
        pDVar5 = local_8->field_1F84;
        uVar6 = param_1 + 1;
        bVar7 = uVar6 < pDVar5->count;
        if ((int)uVar6 < (int)pDVar5->count) {
          do {
            if (bVar7) {
              pcVar3 = (char *)(pDVar5->elementSize * uVar6 + (int)pDVar5->data);
            }
            else {
              pcVar3 = (char *)0x0;
            }
            if ((pcVar3 == (char *)0x0) || (*pcVar3 != '\0')) break;
            pcVar3[3] = param_2;
            if (*(int *)(pcVar3 + 6) == DAT_0080877f) {
              DAT_0080874e = param_2;
            }
            pDVar5 = local_8->field_1F84;
            uVar6 = uVar6 + 1;
            bVar7 = uVar6 < pDVar5->count;
          } while ((int)uVar6 < (int)pDVar5->count);
        }
        (*(code *)local_8->field_0000->field_002C)();
        pSVar2->field_2121 = pSVar2->field_2121 + 1;
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x57d,0,errorCode,
                               &DAT_007a4ccc,s_SettMapMTy__ChangePlayerCiv_007cd410);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_settmobj_cpp_007cd258,0x57d);
  }
  return;
}

