
void __thiscall SettMapMTy::ChangePlayerColor(SettMapMTy *this,uint param_1,char param_2)

{
  code *pcVar1;
  SettMapTy *this_00;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  char *pcVar5;
  void *unaff_EDI;
  bool bVar6;
  InternalExceptionFrame IStack_4c;
  SettMapTy *pSStack_8;
  
  if (*(int *)(this + 0x1f84) != 0) {
    IStack_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_4c;
    pSStack_8 = (SettMapTy *)this;
    iVar2 = __setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = pSStack_8;
    if (iVar2 == 0) {
      iVar2 = *(int *)(pSStack_8 + 0x1f84);
      if (param_1 < *(uint *)(iVar2 + 0xc)) {
        pcVar5 = (char *)(*(int *)(iVar2 + 8) * param_1 + *(int *)(iVar2 + 0x1c));
      }
      else {
        pcVar5 = (char *)0x0;
      }
      if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
        if (pcVar5[2] != 0xff) {
          thunk_FUN_0056a840(&DAT_00807620,pcVar5[2]);
        }
        pcVar5[2] = param_2;
        if ((pcVar5[4] == '\x02') && (*(int *)(pcVar5 + 6) == DAT_0080877f)) {
          DAT_0080874d = param_2;
        }
        iVar2 = *(int *)(this_00 + 0x1f84);
        uVar4 = param_1 + 1;
        bVar6 = uVar4 < *(uint *)(iVar2 + 0xc);
        if ((int)uVar4 < (int)*(uint *)(iVar2 + 0xc)) {
          do {
            if (bVar6) {
              pcVar5 = (char *)(*(int *)(iVar2 + 8) * uVar4 + *(int *)(iVar2 + 0x1c));
            }
            else {
              pcVar5 = (char *)0x0;
            }
            if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\0')) break;
            pcVar5[2] = param_2;
            if (*(int *)(pcVar5 + 6) == DAT_0080877f) {
              DAT_0080874d = param_2;
            }
            iVar2 = *(int *)(this_00 + 0x1f84);
            uVar4 = uVar4 + 1;
            bVar6 = uVar4 < *(uint *)(iVar2 + 0xc);
          } while ((int)uVar4 < (int)*(uint *)(iVar2 + 0xc));
        }
        (**(code **)(*(int *)this_00 + 0x2c))();
        SettMapTy::PaintSC(this_00);
        *(int *)(this_00 + 0x2121) = *(int *)(this_00 + 0x2121) + 1;
      }
      g_currentExceptionFrame = IStack_4c.previous;
      return;
    }
    g_currentExceptionFrame = IStack_4c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x598,0,iVar2,&DAT_007a4ccc
                               ,s_SettMapMTy__ChangePlayerColor_007cd434);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Start_settmobj_cpp_007cd258,0x598);
  }
  return;
}

