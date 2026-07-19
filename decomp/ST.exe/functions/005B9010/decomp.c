
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::StatePanel */

void __thiscall MMsgTy::StatePanel(MMsgTy *this,int param_1)

{
  short sVar1;
  code *pcVar2;
  MMsgTy *this_00;
  byte bVar3;
  int errorCode;
  uint uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  MMsgTy *local_c;
  uint local_8;
  
  this->field_002D = 0x20;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (errorCode == 0) {
    local_8 = local_8 & 0xffffff00;
    if (local_c->field_0x9a != '\0') {
      do {
        uVar4 = local_8 & 0xff;
        if ((*(int *)(&this_00->field_0x66 + uVar4 * 4) == 0) ||
           (sVar1 = *(short *)(param_1 + uVar4 * 2), sVar1 == 0)) {
          *(undefined2 *)(&this_00->field_0x1c82 + uVar4 * 2) = *(undefined2 *)(param_1 + uVar4 * 2)
          ;
        }
        else {
          if (sVar1 < 1) {
            *(undefined4 *)&this_00->field_0x31 = 0;
          }
          else {
            *(undefined4 *)&this_00->field_0x31 = 1;
          }
          FUN_006e6080(this_00,2,*(undefined4 *)(&this_00->field_0x66 + uVar4 * 4),
                       (undefined4 *)&this_00->field_0x1d);
        }
        bVar3 = (char)local_8 + 1;
        local_8 = CONCAT31(local_8._1_3_,bVar3);
      } while (bVar3 < (byte)this_00->field_0x9a);
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x1c1,0,errorCode,
                             &DAT_007a4ccc,s_MMsgTy__StatePanel_007ccce0);
  if (iVar5 == 0) {
    RaiseInternalException(errorCode,0,s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x1c1);
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

