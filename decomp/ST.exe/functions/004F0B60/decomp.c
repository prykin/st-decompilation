
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldobj.cpp
   BldObjPanelTy::Update */

void __thiscall BldObjPanelTy::Update(BldObjPanelTy *this)

{
  code *pcVar1;
  BldObjPanelTy *this_00;
  int errorCode;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_48 [16];
  BldObjPanelTy *local_8;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar5);
  this_00 = local_8;
  if (errorCode == 0) {
    STAllPlayersC::GetPanelInfo
              (g_sTAllPlayers_007FA174,8,(AnonShape_0043BEB0_1C00EC12 *)&local_8->field_027E);
    if ((&this_00->field_027E)[(byte)this_00->field_0279] == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)((&this_00->field_027E)[(byte)this_00->field_0279] + 0xc);
    }
    if ((&this_00->field_027E)[(byte)this_00->field_0278] == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)((&this_00->field_027E)[(byte)this_00->field_0278] + 0xc);
    }
    thunk_FUN_0053f510(this_00,uVar2,uVar4);
    thunk_FUN_004f0c80((AnonShape_004EF140_16642BA0 *)this_00);
    g_currentExceptionFrame = pIVar5;
    return;
  }
  g_currentExceptionFrame = pIVar5;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_bldobj_cpp_007c1984,0x5e,0,errorCode,&DAT_007a4ccc
                             ,s_BldObjPanelTy__Update_007c19f0);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_bldobj_cpp_007c1984,0x5e);
  return;
}

