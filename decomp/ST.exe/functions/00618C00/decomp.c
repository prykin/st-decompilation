
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_jump_mine.cpp
   STJumpMineC::GetMessage */

undefined4 __thiscall STJumpMineC::GetMessage(STJumpMineC *this,int param_1)

{
  code *pcVar1;
  STJumpMineC *this_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  undefined4 *puVar6;
  void *unaff_EDI;
  undefined4 *puVar7;
  InternalExceptionFrame local_58;
  void *local_14;
  byte *local_10;
  uint local_c;
  STJumpMineC *local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar4 = ReportDebugMessage(s_E____titans_nick_to_jump_mine_cp_007d0100,0xad,0,iVar2,
                               &DAT_007a4ccc,s_STJumpMineC__GetMessage_007d0128);
    if (iVar4 == 0) {
      RaiseInternalException(iVar2,0,s_E____titans_nick_to_jump_mine_cp_007d0100,0xaf);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar3 < 0x110) {
    if (uVar3 == 0x10f) {
      local_10 = (byte *)thunk_FUN_00619350(local_8,&local_c);
      STPlaySystemC::SaveObjData(DAT_00802a38,this_00->field_0018,local_10,local_c);
      FUN_006ab060(&local_10);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (uVar3 == 0) {
      iVar2 = thunk_FUN_00619c70(local_8);
      if (iVar2 != 0) {
        if (this_00->field_0150 == '\0') {
          uVar3 = thunk_FUN_006191a0(this_00,(int)(short)this_00->field_00C9,
                                     (int)(short)this_00->field_00CB);
          this_00->field_0150 = (char)uVar3;
          if ((char)uVar3 != '\0') {
            LoadImagJMine(this_00,1);
          }
          if (this_00->field_0150 == '\0') {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
        }
        thunk_FUN_00619a20((int)this_00);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
    else if (uVar3 == 2) {
      puVar6 = *(undefined4 **)(param_1 + 0x14);
      if (puVar6[3] == 2) {
        thunk_FUN_006193a0(local_8,puVar6);
        puVar6 = (undefined4 *)&this_00->field_0x20;
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        *(undefined1 *)puVar6 = 0;
        this_00->field_001C = this_00->field_014C;
        if ((this_00->field_0150 != '\0') && (this_00->field_0093 != 5)) {
          LoadImagJMine(this_00,1);
        }
        if ((this_00->field_0093 == 5) || (this_00->field_0093 == 0)) {
          thunk_FUN_006192e0(this_00);
          this_00->field_0093 = 6;
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
      }
      else {
        puVar7 = (undefined4 *)&local_8->field_0x4d;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        *(undefined2 *)puVar7 = *(undefined2 *)puVar6;
        local_8->field_001C = DAT_00808754;
        iVar2 = thunk_FUN_006193e0((int)local_8);
        if (iVar2 == 0) {
LAB_00618ce0:
          thunk_FUN_006192e0(this_00);
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
        iVar2 = thunk_FUN_0061bdb0(this_00,CASE_0,*(int *)&this_00->field_0xe7,
                                   *(int *)&this_00->field_0xeb,*(uint *)&this_00->field_0xef);
        if (iVar2 == 0) {
          iVar2 = thunk_FUN_0061bdb0(this_00,CASE_1,*(int *)&this_00->field_0xe7,
                                     *(int *)&this_00->field_0xeb,*(uint *)&this_00->field_0xef);
          if (iVar2 == 0) goto LAB_00618ce0;
          this_00->field_0093 = 1;
        }
        else {
          this_00->field_0093 = 4;
        }
        uVar3 = thunk_FUN_006191a0(this_00,(int)(short)this_00->field_00C9,
                                   (int)(short)this_00->field_00CB);
        this_00->field_0150 = (char)uVar3;
        if ((void *)this_00->field_007D != (void *)0x0) {
          thunk_FUN_00617a20((void *)this_00->field_007D,this_00->field_008B,this_00->field_0018,
                             this_00);
        }
        if (this_00->field_0150 != '\0') {
          LoadImagJMine(this_00,1);
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
      }
    }
    else if (uVar3 == 3) {
      if ((void *)local_8->field_007D != (void *)0x0) {
        if (local_8->field_014B != '\0') {
          thunk_FUN_00618900((void *)local_8->field_007D,local_8->field_0145,0);
        }
        this_00->field_014B = 0;
        thunk_FUN_00617aa0((void *)this_00->field_007D,this_00->field_0018);
      }
      thunk_FUN_00619320((int)this_00);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
  }
  else if (uVar3 == 0x111) {
    if (((local_8->field_007D != 0) &&
        (iVar2 = FUN_006e62d0(DAT_00802a38,local_8->field_0079,(int *)&local_14), iVar2 != -4)) &&
       (this_00->field_007D = local_14, local_14 != (void *)0x0)) {
      thunk_FUN_00617a20(local_14,this_00->field_008B,this_00->field_0018,this_00);
    }
  }
  else if (uVar3 == 0x112) {
    if ((-1 < (int)local_8->field_0097) && (local_8->field_0093 != 5)) {
      FUN_006e9520(DAT_00807598,local_8->field_0097,0,0,(uint)local_8);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
  }
  else if (((uVar3 == 0x113) && (-1 < (int)local_8->field_0097)) && (local_8->field_0093 != 5)) {
    FUN_006e9520(DAT_00807598,local_8->field_0097,0,0x401109,(uint)&local_8->field_0x4d);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

