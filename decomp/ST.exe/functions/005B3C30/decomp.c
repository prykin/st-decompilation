
/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::CloseButtons */

void __thiscall MainMenuTy::CloseButtons(MainMenuTy *this)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 unaff_ESI;
  int *piVar4;
  MainMenuTy *this_00;
  void *unaff_EDI;
  int iVar5;
  InternalExceptionFrame local_4c;
  MainMenuTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 == 0) {
    MMObjTy::CloseButtons((MMObjTy *)local_8);
    iVar2 = 0;
    if (this_00->field_009A != '\0') {
      iVar5 = 0x96;
      piVar4 = &this_00->field_0123;
      do {
        DVar3 = timeGetTime();
        piVar4[1] = DVar3;
        *piVar4 = iVar5;
        *(undefined1 *)(piVar4 + -0x1a) = 1;
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + 0x96;
        piVar4 = (int *)((int)piVar4 + 0x1fb);
        this_00 = local_8;
      } while (iVar2 < (int)(uint)(byte)local_8->field_009A);
    }
    this_00->field_0065 = 4;
    thunk_FUN_005b6730(this_00,2,'\x01',-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Start_main_obj_cpp_007cc8e8,0xf7,0,iVar2,&DAT_007a4ccc,
                             s_MainMenuTy__CloseButtons_007cc9c0);
  if (iVar5 == 0) {
    RaiseInternalException(iVar2,0,s_E____titans_Start_main_obj_cpp_007cc8e8,0xf7);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

