
/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::AnimationCampaign */

void __thiscall CampaignTy::AnimationCampaign(CampaignTy *this)

{
  undefined4 uVar1;
  code *pcVar2;
  CampaignTy *this_00;
  int iVar3;
  BITMAPINFO *pBVar4;
  int iVar5;
  undefined4 unaff_ESI;
  undefined4 *puVar6;
  int *piVar7;
  void *unaff_EDI;
  uint uVar8;
  char cVar9;
  InternalExceptionFrame local_68;
  int local_24 [7];
  CampaignTy *local_8;
  
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_camp_obj_cpp_007cbcd4,0x1b3,0,iVar3,&DAT_007a4ccc
                               ,s_CampaignTy__AnimationCampaign_007cbe7c);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_camp_obj_cpp_007cbcd4,0x1b3);
    return;
  }
  if (*(int *)(DAT_0081176c + 0x28) == 0) goto LAB_00592b82;
  if (local_8->field_1BE7 != '\0') goto LAB_00592b7c;
  local_24[5] = local_8->field_1BE8;
  puVar6 = &local_8->field_1BD7;
  iVar3 = 4;
  do {
    if ((int *)*puVar6 != (int *)0x0) {
      thunk_FUN_005926a0((int *)*puVar6);
    }
    puVar6 = puVar6 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar1 = this_00->field_1BE8;
  switch(uVar1) {
  case 0:
  case 3:
  case 6:
    local_24[0] = 0;
    local_24[1] = 2;
    local_24[2] = 4;
    local_24[3] = 3;
    local_24[4] = 1;
    break;
  case 1:
  case 4:
    local_24[0] = 0;
    local_24[1] = 5;
    local_24[2] = 7;
    local_24[3] = 6;
    local_24[4] = 1;
    break;
  case 2:
  case 5:
    local_24[1] = 10;
    local_24[0] = 8;
    local_24[2] = 0xc;
    local_24[3] = 0xb;
    local_24[4] = 9;
    break;
  case 7:
    local_24[0] = 5;
    local_24[1] = 7;
    local_24[2] = 9;
    local_24[3] = 8;
    local_24[4] = 6;
    break;
  case 8:
    local_24[0] = 10;
    local_24[1] = 0xc;
    local_24[2] = 0xe;
    local_24[3] = 0xd;
    local_24[4] = 0xb;
  }
  switch(uVar1) {
  default:
    iVar3 = 0;
    break;
  case 3:
  case 4:
  case 5:
    iVar3 = 1;
    break;
  case 6:
  case 7:
  case 8:
    iVar3 = 2;
  }
  if ((&this_00->field_1B13)[local_24[2] + iVar3 * 0xf] == 0) goto switchD_00592962_caseD_1;
  switch(uVar1) {
  default:
    iVar3 = 0;
    break;
  case 3:
  case 4:
  case 5:
    iVar3 = 1;
    break;
  case 6:
  case 7:
  case 8:
    iVar3 = 2;
  }
  switch(uVar1) {
  default:
    iVar5 = 0;
    break;
  case 3:
  case 4:
  case 5:
    iVar5 = 1;
    break;
  case 6:
  case 7:
  case 8:
    iVar5 = 2;
  }
  if (*(int *)((&this_00->field_1B13)[local_24[2] + iVar3 * 0xf] + 0x14) -
      *(int *)((&this_00->field_1B13)[local_24[2] + iVar5 * 0xf] + 0x18) != 1)
  goto switchD_00592962_caseD_1;
  switch(uVar1) {
  case 0:
  case 1:
    iVar3 = (DAT_0080874e != 1) + 1;
    goto LAB_00592933;
  case 2:
  case 5:
  case 8:
    iVar3 = (uint)DAT_0080874e * 3 + -3;
LAB_00592933:
    this_00->field_1BE8 = iVar3;
    break;
  case 3:
  case 4:
    this_00->field_1BE8 = (DAT_0080874e != 2) + 4;
    break;
  case 6:
  case 7:
    this_00->field_1BE8 = (DAT_0080874e != 3) + 7;
  }
  switch(this_00->field_1BE8) {
  case 0:
  case 2:
  case 3:
  case 5:
  case 6:
  case 8:
    thunk_FUN_00568bc0(&g_sound,1);
  }
  switch(this_00->field_1BE8) {
  case 0:
    thunk_FUN_005b6730(this_00,0x15,'\0',1);
    iVar3 = 1;
    cVar9 = '\x02';
    uVar8 = 0x18;
    break;
  default:
    goto switchD_00592962_caseD_1;
  case 2:
    iVar3 = -1;
    cVar9 = '\x01';
    uVar8 = 0x1b;
    break;
  case 3:
    thunk_FUN_005b6730(this_00,0x16,'\0',1);
    iVar3 = 1;
    cVar9 = '\x02';
    uVar8 = 0x19;
    break;
  case 5:
    iVar3 = -1;
    cVar9 = '\x01';
    uVar8 = 0x1c;
    break;
  case 6:
    thunk_FUN_005b6730(this_00,0x17,'\0',1);
    iVar3 = 1;
    cVar9 = '\x02';
    uVar8 = 0x1a;
    break;
  case 8:
    iVar3 = -1;
    cVar9 = '\x01';
    uVar8 = 0x1d;
  }
  thunk_FUN_005b6730(this_00,uVar8,cVar9,iVar3);
switchD_00592962_caseD_1:
  if (local_24[5] != this_00->field_1BE8) {
    piVar7 = &this_00->field_1B13;
    local_24[5] = 3;
    do {
      iVar3 = 0xf;
      do {
        if (*piVar7 != 0) {
          FUN_006c4aa0(*piVar7);
        }
        piVar7 = piVar7 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_24[5] = local_24[5] + -1;
    } while (local_24[5] != 0);
    switch(this_00->field_1BE8) {
    case 0:
    case 3:
    case 6:
      local_24[0] = 0;
      local_24[1] = 2;
      local_24[2] = 4;
      local_24[3] = 3;
      local_24[4] = 1;
      break;
    case 1:
    case 4:
      local_24[0] = 0;
      local_24[1] = 5;
      local_24[2] = 7;
      local_24[3] = 6;
      local_24[4] = 1;
      break;
    case 2:
    case 5:
      local_24[0] = 8;
      local_24[1] = 10;
      local_24[2] = 0xc;
      local_24[3] = 0xb;
      local_24[4] = 9;
      break;
    case 7:
      local_24[0] = 5;
      local_24[1] = 7;
      local_24[2] = 9;
      local_24[3] = 8;
      local_24[4] = 6;
      break;
    case 8:
      local_24[0] = 10;
      local_24[1] = 0xc;
      local_24[2] = 0xe;
      local_24[3] = 0xd;
      local_24[4] = 0xb;
    }
  }
  piVar7 = local_24;
  local_24[5] = 5;
  do {
    switch(this_00->field_1BE8) {
    default:
      iVar3 = 0;
      break;
    case 3:
    case 4:
    case 5:
      iVar3 = 1;
      break;
    case 6:
    case 7:
    case 8:
      iVar3 = 2;
    }
    if ((&this_00->field_1B13)[*piVar7 + iVar3 * 0xf] != 0) {
      switch(this_00->field_1BE8) {
      default:
        iVar3 = 0;
        break;
      case 3:
      case 4:
      case 5:
        iVar3 = 1;
        break;
      case 6:
      case 7:
      case 8:
        iVar3 = 2;
      }
      thunk_FUN_005926a0((int *)(&this_00->field_1B13)[*piVar7 + iVar3 * 0xf]);
    }
    piVar7 = piVar7 + 1;
    local_24[5] = local_24[5] + -1;
  } while (local_24[5] != 0);
  if (this_00->field_1BE8 == 1) {
    this_00->field_1BE7 = 4;
  }
  else {
    this_00->field_1BE7 = 3;
  }
LAB_00592b7c:
  this_00->field_1BE7 = this_00->field_1BE7 + -1;
LAB_00592b82:
  local_24[5] = 0x2e;
  local_24[6] = 0x24c;
  do {
    iVar3 = *(int *)(local_24[6] + DAT_0081176c);
    if (iVar3 != 0) {
      piVar7 = (int *)(local_24[5] + 0x25c + DAT_0081176c);
      if (*(char *)(local_24[5] + 0x270 + DAT_0081176c) == '\0') {
        uVar8 = piVar7[2];
      }
      else {
        uVar8 = piVar7[3];
      }
      if (uVar8 <= (uint)(local_8->field_0061 - piVar7[4])) {
        pBVar4 = (BITMAPINFO *)FUN_0070b3a0(iVar3,(int)*(short *)(iVar3 + 0x29));
        FUN_006b5f80(DAT_008075a8,*piVar7,piVar7[1],(int)*(short *)(iVar3 + 0x2c),
                     (int)*(short *)(iVar3 + 0x2e));
        PutDDX(*piVar7,piVar7[1],'\x01',pBVar4);
        if ((char)piVar7[5] != '\0') {
          *(undefined1 *)(piVar7 + 5) = 0;
        }
        piVar7[4] = local_8->field_0061;
        switch(*(undefined2 *)((int)piVar7 + 0x15)) {
        case 0:
          *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x29) + 1;
          if (*(short *)(iVar3 + 0x23) <= *(short *)(iVar3 + 0x29)) {
            *(undefined2 *)(iVar3 + 0x29) = 0;
            *(undefined1 *)(piVar7 + 5) = 1;
          }
          break;
        case 1:
          *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x29) + -1;
          if (*(short *)(iVar3 + 0x29) < 0) {
            *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x23) + -1;
            *(undefined1 *)(piVar7 + 5) = 1;
          }
          break;
        case 2:
          *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x29) + 1;
          if (*(short *)(iVar3 + 0x23) <= *(short *)(iVar3 + 0x29)) {
            *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x23) + -1;
            *(undefined1 *)(piVar7 + 5) = 1;
            *(undefined2 *)((int)piVar7 + 0x15) = 3;
          }
          break;
        case 3:
          *(short *)(iVar3 + 0x29) = *(short *)(iVar3 + 0x29) + -1;
          if (*(short *)(iVar3 + 0x29) < 0) {
            *(undefined2 *)(iVar3 + 0x29) = 0;
            *(undefined1 *)(piVar7 + 5) = 1;
            *(undefined2 *)((int)piVar7 + 0x15) = 2;
          }
        }
      }
    }
    local_24[6] = local_24[6] + 4;
    local_24[5] = local_24[5] + 0x17;
  } while (local_24[6] < 0x25c);
  g_currentExceptionFrame = local_68.previous;
  return;
}

