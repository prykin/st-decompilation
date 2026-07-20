
/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::VisHoleExec */

void __thiscall VisibleClassTy::VisHoleExec(VisibleClassTy *this,void *param_1)

{
  code *pcVar1;
  VisibleClassTy *this_00;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  int *piVar6;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  VisibleClassTy *local_c;
  uint local_8;
  
  if (this->field_0114 != 0) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_c;
    if (iVar3 == 0) {
      local_8 = *(uint *)(local_c->field_00F4 + 0xc);
      while (local_8 = local_8 - 1, -1 < (int)local_8) {
        iVar3 = this_00->field_00F4;
        if (local_8 < *(uint *)(iVar3 + 0xc)) {
          piVar6 = (int *)(*(int *)(iVar3 + 8) * local_8 + *(int *)(iVar3 + 0x1c));
        }
        else {
          piVar6 = (int *)0x0;
        }
        if (((uint)(piVar6[5] + piVar6[6]) <= (uint)this_00->field_0108) &&
           ((uint)((this_00->field_0108 - piVar6[5]) - piVar6[6]) % 7 == 0)) {
          thunk_FUN_00559110(this_00,*piVar6,(undefined *)piVar6[1],piVar6[2],piVar6[4],piVar6[3],-6
                             ,0xffffffff);
          uVar2 = local_8;
          uVar4 = piVar6[3] - 1;
          piVar6[3] = uVar4;
          if ((int)uVar4 < 0) {
            FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)this_00->field_00F4,local_8);
            local_8 = uVar2;
          }
          else {
            thunk_FUN_00558dc0(this_00,*piVar6,piVar6[1],(undefined *)piVar6[2],(int *)piVar6[4],
                               uVar4,(int *)0xfffffffa,0xffffffff);
          }
        }
      }
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
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

