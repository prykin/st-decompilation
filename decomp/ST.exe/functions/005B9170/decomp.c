
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::CloseSprBut */

void __thiscall MMsgTy::CloseSprBut(MMsgTy *this)

{
  code *pcVar1;
  MMsgTy *this_00;
  int errorCode;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  InternalExceptionFrame local_54;
  MMsgTy *local_10;
  uint local_c;
  uint local_8;
  
  bVar5 = 0;
  local_c = local_c & 0xffffff00;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_ESI,unaff_EBX);
  this_00 = local_10;
  if (errorCode == 0) {
    MMObjTy::CloseButtons((MMObjTy *)local_10);
    bVar4 = 0;
    local_8 = local_8 & 0xffffff00;
    if (this_00->field_0x9a != '\0') {
      do {
        uVar2 = local_8 & 0xff;
        *(undefined4 *)(&this_00->field_0x127 + uVar2 * 0x1fb) = this_00->field_0061;
        *(uint *)(&this_00->field_0x123 + uVar2 * 0x1fb) = ((local_c & 0xff) + 1) * 100;
        if (*(int *)(&this_00->field_0xbc + uVar2 * 0x1fb) != 0) {
          local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
        }
        bVar4 = bVar4 + 1;
        local_8 = CONCAT31(local_8._1_3_,bVar4);
      } while (bVar4 < (byte)this_00->field_0x9a);
    }
    local_8 = local_8 & 0xffffff00;
    if (this_00->field_0x9a != '\0') {
      do {
        if (*(uint *)(&this_00->field_0x178 + (local_8 & 0xff) * 0x1fb) != 0xffffffff) {
          FUN_006b3af0(*(int **)(&this_00->field_0x1bc + (local_8 & 0xff) * 0x1fb),
                       *(uint *)(&this_00->field_0x178 + (local_8 & 0xff) * 0x1fb));
        }
        bVar5 = bVar5 + 1;
        local_8 = CONCAT31(local_8._1_3_,bVar5);
      } while (bVar5 < (byte)this_00->field_0x9a);
    }
    HidePanel(this_00,1,1,1);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x1d3,0,errorCode,
                             &DAT_007a4ccc,s_MMsgTy__CloseSprBut_007cccf8);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x1d3);
  return;
}

