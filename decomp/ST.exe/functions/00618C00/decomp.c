
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
  STJumpMineC *pSVar7;
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
      STPlaySystemC::SaveObjData(DAT_00802a38,*(undefined4 *)(this_00 + 0x18),local_10,local_c);
      FUN_006ab060(&local_10);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (uVar3 == 0) {
      iVar2 = thunk_FUN_00619c70(local_8);
      if (iVar2 != 0) {
        if (this_00[0x150] == (STJumpMineC)0x0) {
          uVar3 = thunk_FUN_006191a0(this_00,(int)*(short *)(this_00 + 0xc9),
                                     (int)*(short *)(this_00 + 0xcb));
          this_00[0x150] = SUB41(uVar3,0);
          if (SUB41(uVar3,0) != (STJumpMineC)0x0) {
            LoadImagJMine(this_00,1);
          }
          if (this_00[0x150] == (STJumpMineC)0x0) {
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
        pSVar7 = this_00 + 0x20;
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)pSVar7 = 0;
          pSVar7 = pSVar7 + 4;
        }
        *pSVar7 = (STJumpMineC)0x0;
        *(undefined4 *)(this_00 + 0x1c) = *(undefined4 *)(this_00 + 0x14c);
        if ((this_00[0x150] != (STJumpMineC)0x0) && (*(int *)(this_00 + 0x93) != 5)) {
          LoadImagJMine(this_00,1);
        }
        if ((*(int *)(this_00 + 0x93) == 5) || (*(int *)(this_00 + 0x93) == 0)) {
          thunk_FUN_006192e0(this_00);
          *(undefined4 *)(this_00 + 0x93) = 6;
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
      }
      else {
        pSVar7 = local_8 + 0x4d;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)pSVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          pSVar7 = pSVar7 + 4;
        }
        *(undefined2 *)pSVar7 = *(undefined2 *)puVar6;
        *(undefined4 *)(local_8 + 0x1c) = DAT_00808754;
        iVar2 = thunk_FUN_006193e0((int)local_8);
        if (iVar2 == 0) {
LAB_00618ce0:
          thunk_FUN_006192e0(this_00);
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
        iVar2 = thunk_FUN_0061bdb0(this_00,CASE_0,*(int *)(this_00 + 0xe7),*(int *)(this_00 + 0xeb),
                                   *(uint *)(this_00 + 0xef));
        if (iVar2 == 0) {
          iVar2 = thunk_FUN_0061bdb0(this_00,CASE_1,*(int *)(this_00 + 0xe7),
                                     *(int *)(this_00 + 0xeb),*(uint *)(this_00 + 0xef));
          if (iVar2 == 0) goto LAB_00618ce0;
          *(undefined4 *)(this_00 + 0x93) = 1;
        }
        else {
          *(undefined4 *)(this_00 + 0x93) = 4;
        }
        uVar3 = thunk_FUN_006191a0(this_00,(int)*(short *)(this_00 + 0xc9),
                                   (int)*(short *)(this_00 + 0xcb));
        this_00[0x150] = SUB41(uVar3,0);
        if (*(void **)(this_00 + 0x7d) != (void *)0x0) {
          thunk_FUN_00617a20(*(void **)(this_00 + 0x7d),*(int *)(this_00 + 0x8b),
                             *(undefined4 *)(this_00 + 0x18),this_00);
        }
        if (this_00[0x150] != (STJumpMineC)0x0) {
          LoadImagJMine(this_00,1);
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
      }
    }
    else if (uVar3 == 3) {
      if (*(void **)(local_8 + 0x7d) != (void *)0x0) {
        if (local_8[0x14b] != (STJumpMineC)0x0) {
          thunk_FUN_00618900(*(void **)(local_8 + 0x7d),*(int *)(local_8 + 0x145),0);
        }
        this_00[0x14b] = (STJumpMineC)0x0;
        thunk_FUN_00617aa0(*(void **)(this_00 + 0x7d),*(int *)(this_00 + 0x18));
      }
      thunk_FUN_00619320((int)this_00);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
  }
  else if (uVar3 == 0x111) {
    if (((*(int *)(local_8 + 0x7d) != 0) &&
        (iVar2 = FUN_006e62d0(DAT_00802a38,*(int *)(local_8 + 0x79),(int *)&local_14), iVar2 != -4))
       && (*(void **)(this_00 + 0x7d) = local_14, local_14 != (void *)0x0)) {
      thunk_FUN_00617a20(local_14,*(int *)(this_00 + 0x8b),*(undefined4 *)(this_00 + 0x18),this_00);
    }
  }
  else if (uVar3 == 0x112) {
    if ((-1 < (int)*(uint *)(local_8 + 0x97)) && (*(int *)(local_8 + 0x93) != 5)) {
      FUN_006e9520(DAT_00807598,*(uint *)(local_8 + 0x97),0,0,(uint)local_8);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
  }
  else if (((uVar3 == 0x113) && (-1 < (int)*(uint *)(local_8 + 0x97))) &&
          (*(int *)(local_8 + 0x93) != 5)) {
    FUN_006e9520(DAT_00807598,*(uint *)(local_8 + 0x97),0,0x401109,(uint)(local_8 + 0x4d));
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

