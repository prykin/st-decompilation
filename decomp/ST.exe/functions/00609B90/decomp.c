
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_field.cpp
   STFieldC::InitSprSistem */

undefined4 __thiscall STFieldC::InitSprSistem(STFieldC *this,int param_1)

{
  code *pcVar1;
  STFieldC *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  uint uVar5;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  STFieldC *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 == 0) {
    if ((local_8->field_0234 != 0) &&
       (iVar2 = *(int *)(local_8->field_0234 + 0xc), uVar5 = 0, 0 < iVar2)) {
      do {
        iVar3 = this_00->field_0234;
        if (uVar5 < *(uint *)(iVar3 + 0xc)) {
          iVar3 = *(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c);
        }
        else {
          iVar3 = 0;
        }
        if (iVar3 != 0) {
          if ((this_00->field_01F5 == 0x4d) && (param_1 != 0)) {
            *(undefined4 *)(iVar3 + 4) = 0;
          }
          if (*(int *)(iVar3 + 0x3c) < 0) {
            LoadImagSpr(this_00,uVar5);
          }
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar2);
    }
    g_currentExceptionFrame = local_4c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_nick_to_field_cpp_007cf850,0x208,0,iVar2,&DAT_007a4ccc,
                             s_STFieldC__InitSprSistem_void__007cf874);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  RaiseInternalException(iVar2,0,s_E____titans_nick_to_field_cpp_007cf850,0x20a);
  return 0xffff;
}

