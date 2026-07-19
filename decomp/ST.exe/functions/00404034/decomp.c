
void __fastcall thunk_FUN_0055ab50(void *param_1)

{
  code *pcVar1;
  void *this;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 unaff_ESI;
  int *piVar6;
  void *unaff_EDI;
  InternalExceptionFrame IStack_50;
  void *pvStack_c;
  uint uStack_8;
  
  if (*(int *)((int)param_1 + 0x114) != 0) {
    IStack_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_50;
    pvStack_c = param_1;
    iVar3 = __setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this = pvStack_c;
    if (iVar3 == 0) {
      uStack_8 = *(uint *)(*(int *)((int)pvStack_c + 0xf4) + 0xc);
      while (uStack_8 = uStack_8 - 1, -1 < (int)uStack_8) {
        iVar3 = *(int *)((int)this + 0xf4);
        if (uStack_8 < *(uint *)(iVar3 + 0xc)) {
          piVar6 = (int *)(*(int *)(iVar3 + 8) * uStack_8 + *(int *)(iVar3 + 0x1c));
        }
        else {
          piVar6 = (int *)0x0;
        }
        if (((uint)(piVar6[5] + piVar6[6]) <= *(uint *)((int)this + 0x108)) &&
           (((*(uint *)((int)this + 0x108) - piVar6[5]) - piVar6[6]) % 7 == 0)) {
          thunk_FUN_00559110(this,*piVar6,(undefined *)piVar6[1],piVar6[2],piVar6[4],piVar6[3],-6,
                             0xffffffff);
          uVar2 = uStack_8;
          puVar4 = (undefined *)(piVar6[3] + -1);
          piVar6[3] = (int)puVar4;
          if ((int)puVar4 < 0) {
            FUN_006b0c70(*(int *)((int)this + 0xf4),uStack_8);
            uStack_8 = uVar2;
          }
          else {
            thunk_FUN_00558dc0(this,*piVar6,piVar6[1],(undefined *)piVar6[2],piVar6[4],puVar4,-6,
                               0xffffffff);
          }
        }
      }
      g_currentExceptionFrame = IStack_50.previous;
      return;
    }
    g_currentExceptionFrame = IStack_50.previous;
    iVar5 = ReportDebugMessage(s_E____titans_grig_visible_cpp_007c92cc,0x40a,0,iVar3,&DAT_007a4ccc,
                               s_VisibleClassTy__VisHoleExec_erro_007c9490);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_grig_visible_cpp_007c92cc,0x40b);
  }
  return;
}

