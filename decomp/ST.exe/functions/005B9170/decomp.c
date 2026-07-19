
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::CloseSprBut */

void __thiscall MMsgTy::CloseSprBut(MMsgTy *this)

{
  code *pcVar1;
  MMObjTy *this_00;
  int errorCode;
  uint uVar2;
  int iVar3;
  MMObjTy MVar4;
  MMObjTy MVar5;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  InternalExceptionFrame local_54;
  MMObjTy *local_10;
  uint local_c;
  uint local_8;
  
  MVar5 = (MMObjTy)0x0;
  local_c = local_c & 0xffffff00;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = (MMObjTy *)this;
  errorCode = __setjmp3(local_54.jumpBuffer,0,unaff_ESI,unaff_EBX);
  this_00 = local_10;
  if (errorCode == 0) {
    MMObjTy::CloseButtons(local_10);
    MVar4 = (MMObjTy)0x0;
    local_8 = local_8 & 0xffffff00;
    if (this_00[0x9a] != (MMObjTy)0x0) {
      do {
        uVar2 = local_8 & 0xff;
        *(undefined4 *)(this_00 + uVar2 * 0x1fb + 0x127) = *(undefined4 *)(this_00 + 0x61);
        *(uint *)(this_00 + uVar2 * 0x1fb + 0x123) = ((local_c & 0xff) + 1) * 100;
        if (*(int *)(this_00 + uVar2 * 0x1fb + 0xbc) != 0) {
          local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
        }
        MVar4 = (MMObjTy)((char)MVar4 + 1);
        local_8 = CONCAT31(local_8._1_3_,MVar4);
      } while ((byte)MVar4 < (byte)this_00[0x9a]);
    }
    local_8 = local_8 & 0xffffff00;
    if (this_00[0x9a] != (MMObjTy)0x0) {
      do {
        if (*(uint *)(this_00 + (local_8 & 0xff) * 0x1fb + 0x178) != 0xffffffff) {
          FUN_006b3af0(*(int **)(this_00 + (local_8 & 0xff) * 0x1fb + 0x1bc),
                       *(uint *)(this_00 + (local_8 & 0xff) * 0x1fb + 0x178));
        }
        MVar5 = (MMObjTy)((char)MVar5 + 1);
        local_8 = CONCAT31(local_8._1_3_,MVar5);
      } while ((byte)MVar5 < (byte)this_00[0x9a]);
    }
    HidePanel((MMsgTy *)this_00,1,1,1);
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

