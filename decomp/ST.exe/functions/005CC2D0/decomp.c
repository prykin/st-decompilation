
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::DoneSettMap */

void __thiscall SettMapMTy::DoneSettMap(SettMapMTy *this)

{
  code *pcVar1;
  SettMapMTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  uint uVar4;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x65,0,iVar2,&DAT_007a4ccc,
                               s_SettMapMTy__DoneSettMap_007cd29c);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Start_settmobj_cpp_007cd258,0x65);
    return;
  }
  if (local_8->field_2204 != 0) {
    FUN_006ab060((LPVOID *)&local_8->field_2204);
  }
  FUN_006b3bb0(DAT_008075a8,this_00->field_2200);
  iVar2 = this_00->field_2237;
  this_00->field_2200 = 0xffffffff;
  if (iVar2 != 0) {
    uVar4 = 0;
    if (*(int *)(iVar2 + 0xc) != 0) {
      if (*(int *)(iVar2 + 0xc) == 0) {
        iVar2 = 0;
        goto LAB_005cc360;
      }
      do {
        iVar2 = *(int *)(iVar2 + 8) * uVar4 + *(int *)(iVar2 + 0x1c);
LAB_005cc360:
        if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
          FUN_006ab060((LPVOID *)(iVar2 + 8));
        }
        iVar2 = this_00->field_2237;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(iVar2 + 0xc));
    }
    FUN_006ae110((byte *)this_00->field_2237);
    this_00->field_2237 = 0;
  }
  SettMapTy::DoneSettMap((SettMapTy *)this_00);
  g_currentExceptionFrame = local_4c.previous;
  return;
}

