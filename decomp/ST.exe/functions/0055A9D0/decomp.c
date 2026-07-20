
/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::VisHoleCreate */

uint __thiscall
VisibleClassTy::VisHoleCreate
          (VisibleClassTy *this,int param_1,int param_2,undefined *param_3,uint param_4,
          undefined *param_5,undefined4 param_6)

{
  uint *puVar1;
  code *pcVar2;
  VisibleClassTy *this_00;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar6;
  InternalExceptionFrame local_6c;
  int local_28 [2];
  undefined *local_20;
  undefined *local_1c;
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  VisibleClassTy *local_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  if ((this->field_0114 != 0) && (-1 < (int)param_5)) {
    local_6c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_6c;
    local_c = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_c;
    if (iVar3 == 0) {
      puVar1 = (uint *)local_c->field_00F4;
      if (puVar1 != (uint *)0x0) {
        piVar6 = local_28;
        for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar6 = 0;
          piVar6 = piVar6 + 1;
        }
        local_28[1] = param_2;
        local_28[0] = param_1;
        local_18 = (int *)param_4;
        local_20 = param_3;
        local_10 = param_6;
        local_1c = param_5;
        local_14 = this_00->field_0108;
        local_8 = Library::DKW::TBL::FUN_006ae1c0(puVar1,local_28);
        thunk_FUN_00558dc0(this_00,local_28[0],local_28[1],local_20,local_18,(uint)local_1c,
                           (int *)0xfffffffa,0xffffffff);
      }
      g_currentExceptionFrame = local_6c.previous;
      return local_8;
    }
    g_currentExceptionFrame = local_6c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_grig_visible_cpp_007c92cc,0x3f0,0,iVar3,&DAT_007a4ccc,
                               s_VisibleClassTy__VisHoleCreate_er_007c9464);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    RaiseInternalException(iVar3,0,s_E____titans_grig_visible_cpp_007c92cc,0x3f1);
  }
  return 0xffffffff;
}

