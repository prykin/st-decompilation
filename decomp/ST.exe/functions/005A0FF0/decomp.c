
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::DoLogon */

void __thiscall FSGSTy::DoLogon(FSGSTy *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  FSGSTy *pFVar4;
  int iVar5;
  int iVar6;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar7;
  undefined4 local_58 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  FSGSTy *local_8;
  
  pIVar7 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffa4;
  local_8 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_58,0,unaff_ESI,pIVar7);
  this_00 = DAT_00802a30;
  if (iVar5 == 0) {
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      uVar1 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
      uVar2 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
      DAT_00802a30[0xb].field_0x47 = 1;
      *(undefined2 *)&this_00[0xb].field_0x48 = 0xffff;
      CursorClassTy::SetGCType(this_00,CASE_0,uVar2,uVar1);
      CursorClassTy::DrawSprite
                (this_00,*(int *)((int)&this_00[1].field_0060 + 1),*(int *)&this_00[2].field_0x1);
      this_00[2].field_0xa = 0;
      *(undefined4 *)&this_00[0xc].field_0x2f = 0xffffffff;
    }
    pFVar4 = local_8;
    (**(code **)(*(int *)local_8 + 8))();
    pFVar4->field_0x1a61 = 2;
    iVar5 = *(int *)&pFVar4->field_0x1a5b;
    if (*(int *)(iVar5 + 0x2e6) != 0) {
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      thunk_FUN_005b8f40(*(void **)(iVar5 + 0x2e6),&local_18);
    }
    g_currentExceptionFrame = pIVar7;
    return;
  }
  g_currentExceptionFrame = pIVar7;
  iVar6 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x918,0,iVar5,&DAT_007a4ccc,
                             s_FSGSTy__DoLogon_007cc3f4);
  if (iVar6 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  RaiseInternalException(iVar5,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x918);
  return;
}

