
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::ChangePlayerCiv */

void __thiscall SettMapMTy::ChangePlayerCiv(SettMapMTy *this,uint param_1,char param_2)

{
  code *pcVar1;
  SettMapMTy *pSVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar7;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;
  
  if (*(int *)(this + 0x1f84) != 0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pSVar2 = local_8;
    if (iVar3 == 0) {
      iVar3 = *(int *)(local_8 + 0x1f84);
      if (param_1 < *(uint *)(iVar3 + 0xc)) {
        pcVar4 = (char *)(*(int *)(iVar3 + 8) * param_1 + *(int *)(iVar3 + 0x1c));
      }
      else {
        pcVar4 = (char *)0x0;
      }
      if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
        pcVar4[3] = param_2;
        if ((pcVar4[4] == '\x02') && (*(int *)(pcVar4 + 6) == DAT_0080877f)) {
          DAT_0080874e = param_2;
        }
        iVar3 = *(int *)(local_8 + 0x1f84);
        uVar6 = param_1 + 1;
        bVar7 = uVar6 < *(uint *)(iVar3 + 0xc);
        if ((int)uVar6 < (int)*(uint *)(iVar3 + 0xc)) {
          do {
            if (bVar7) {
              pcVar4 = (char *)(*(int *)(iVar3 + 8) * uVar6 + *(int *)(iVar3 + 0x1c));
            }
            else {
              pcVar4 = (char *)0x0;
            }
            if ((pcVar4 == (char *)0x0) || (*pcVar4 != '\0')) break;
            pcVar4[3] = param_2;
            if (*(int *)(pcVar4 + 6) == DAT_0080877f) {
              DAT_0080874e = param_2;
            }
            iVar3 = *(int *)(local_8 + 0x1f84);
            uVar6 = uVar6 + 1;
            bVar7 = uVar6 < *(uint *)(iVar3 + 0xc);
          } while ((int)uVar6 < (int)*(uint *)(iVar3 + 0xc));
        }
        (**(code **)(*(int *)local_8 + 0x2c))();
        *(int *)(pSVar2 + 0x2121) = *(int *)(pSVar2 + 0x2121) + 1;
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x57d,0,iVar3,&DAT_007a4ccc
                               ,s_SettMapMTy__ChangePlayerCiv_007cd410);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_settmobj_cpp_007cd258,0x57d);
  }
  return;
}

