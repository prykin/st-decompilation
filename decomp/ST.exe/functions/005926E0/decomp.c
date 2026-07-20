
/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::AnimationCampaign
   
   [STSwitchEnumApplier] Switch target field_1BE8 uses
   /SubmarineTitans/Recovered/Enums/CampaignTy_field_1BE8State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8 */

void __thiscall CampaignTy::AnimationCampaign(CampaignTy *this)

{
  code *pcVar1;
  CampaignTy *this_00;
  int iVar2;
  BITMAPINFO *pBVar3;
  int iVar4;
  CampaignTy_field_1BE8State CVar5;
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
  iVar2 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Start_camp_obj_cpp_007cbcd4,0x1b3,0,iVar2,&DAT_007a4ccc
                               ,s_CampaignTy__AnimationCampaign_007cbe7c);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Start_camp_obj_cpp_007cbcd4,0x1b3);
    return;
  }
  if (PTR_0081176c->field_0028 == 0) goto LAB_00592b82;
  if (local_8->field_1BE7 != '\0') goto LAB_00592b7c;
  local_24[5] = local_8->field_1BE8;
  puVar6 = &local_8->field_1BD7;
  iVar2 = 4;
  do {
    if ((int *)*puVar6 != (int *)0x0) {
      thunk_FUN_005926a0((int *)*puVar6);
    }
    puVar6 = puVar6 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  CVar5 = this_00->field_1BE8;
  switch(CVar5) {
  case CASE_0:
  case CASE_3:
  case CASE_6:
    local_24[0] = 0;
    local_24[1] = 2;
    local_24[2] = 4;
    local_24[3] = 3;
    local_24[4] = 1;
    break;
  case CASE_1:
  case CASE_4:
    local_24[0] = 0;
    local_24[1] = 5;
    local_24[2] = 7;
    local_24[3] = 6;
    local_24[4] = 1;
    break;
  case CASE_2:
  case CASE_5:
    local_24[1] = 10;
    local_24[0] = 8;
    local_24[2] = 0xc;
    local_24[3] = 0xb;
    local_24[4] = 9;
    break;
  case CASE_7:
    local_24[0] = 5;
    local_24[1] = 7;
    local_24[2] = 9;
    local_24[3] = 8;
    local_24[4] = 6;
    break;
  case CASE_8:
    local_24[0] = 10;
    local_24[1] = 0xc;
    local_24[2] = 0xe;
    local_24[3] = 0xd;
    local_24[4] = 0xb;
  }
  switch(CVar5) {
  default:
    iVar2 = 0;
    break;
  case CASE_3:
  case CASE_4:
  case CASE_5:
    iVar2 = 1;
    break;
  case CASE_6:
  case CASE_7:
  case CASE_8:
    iVar2 = 2;
  }
  if ((&this_00->field_1B13)[local_24[2] + iVar2 * 0xf] == 0) goto switchD_00592962_caseD_1;
  switch(CVar5) {
  default:
    iVar2 = 0;
    break;
  case CASE_3:
  case CASE_4:
  case CASE_5:
    iVar2 = 1;
    break;
  case CASE_6:
  case CASE_7:
  case CASE_8:
    iVar2 = 2;
  }
  switch(CVar5) {
  default:
    iVar4 = 0;
    break;
  case CASE_3:
  case CASE_4:
  case CASE_5:
    iVar4 = 1;
    break;
  case CASE_6:
  case CASE_7:
  case CASE_8:
    iVar4 = 2;
  }
  if (*(int *)((&this_00->field_1B13)[local_24[2] + iVar2 * 0xf] + 0x14) -
      *(int *)((&this_00->field_1B13)[local_24[2] + iVar4 * 0xf] + 0x18) != 1)
  goto switchD_00592962_caseD_1;
  switch(CVar5) {
  case CASE_0:
  case CASE_1:
    CVar5 = (DAT_0080874e != 1) + CASE_1;
    goto LAB_00592933;
  case CASE_2:
  case CASE_5:
  case CASE_8:
    CVar5 = (uint)DAT_0080874e * 3 - CASE_3;
LAB_00592933:
    this_00->field_1BE8 = CVar5;
    break;
  case CASE_3:
  case CASE_4:
    this_00->field_1BE8 = (DAT_0080874e != 2) + CASE_4;
    break;
  case CASE_6:
  case CASE_7:
    this_00->field_1BE8 = (DAT_0080874e != 3) + CASE_7;
  }
  switch(this_00->field_1BE8) {
  case CASE_0:
  case CASE_2:
  case CASE_3:
  case CASE_5:
  case CASE_6:
  case CASE_8:
    thunk_FUN_00568bc0(&g_sound,1);
  }
  switch(this_00->field_1BE8) {
  case CASE_0:
    thunk_FUN_005b6730(this_00,0x15,'\0',1);
    iVar2 = 1;
    cVar9 = '\x02';
    uVar8 = 0x18;
    break;
  default:
    goto switchD_00592962_caseD_1;
  case CASE_2:
    iVar2 = -1;
    cVar9 = '\x01';
    uVar8 = 0x1b;
    break;
  case CASE_3:
    thunk_FUN_005b6730(this_00,0x16,'\0',1);
    iVar2 = 1;
    cVar9 = '\x02';
    uVar8 = 0x19;
    break;
  case CASE_5:
    iVar2 = -1;
    cVar9 = '\x01';
    uVar8 = 0x1c;
    break;
  case CASE_6:
    thunk_FUN_005b6730(this_00,0x17,'\0',1);
    iVar2 = 1;
    cVar9 = '\x02';
    uVar8 = 0x1a;
    break;
  case CASE_8:
    iVar2 = -1;
    cVar9 = '\x01';
    uVar8 = 0x1d;
  }
  thunk_FUN_005b6730(this_00,uVar8,cVar9,iVar2);
switchD_00592962_caseD_1:
  if (local_24[5] != this_00->field_1BE8) {
    puVar6 = &this_00->field_1B13;
    local_24[5] = 3;
    do {
      iVar2 = 0xf;
      do {
        if ((AnonShape_006C4AA0_6E9A3AA4 *)*puVar6 != (AnonShape_006C4AA0_6E9A3AA4 *)0x0) {
          FUN_006c4aa0((AnonShape_006C4AA0_6E9A3AA4 *)*puVar6);
        }
        puVar6 = puVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      local_24[5] = local_24[5] + -1;
    } while (local_24[5] != 0);
    switch(this_00->field_1BE8) {
    case CASE_0:
    case CASE_3:
    case CASE_6:
      local_24[0] = 0;
      local_24[1] = 2;
      local_24[2] = 4;
      local_24[3] = 3;
      local_24[4] = 1;
      break;
    case CASE_1:
    case CASE_4:
      local_24[0] = 0;
      local_24[1] = 5;
      local_24[2] = 7;
      local_24[3] = 6;
      local_24[4] = 1;
      break;
    case CASE_2:
    case CASE_5:
      local_24[0] = 8;
      local_24[1] = 10;
      local_24[2] = 0xc;
      local_24[3] = 0xb;
      local_24[4] = 9;
      break;
    case CASE_7:
      local_24[0] = 5;
      local_24[1] = 7;
      local_24[2] = 9;
      local_24[3] = 8;
      local_24[4] = 6;
      break;
    case CASE_8:
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
      iVar2 = 0;
      break;
    case CASE_3:
    case CASE_4:
    case CASE_5:
      iVar2 = 1;
      break;
    case CASE_6:
    case CASE_7:
    case CASE_8:
      iVar2 = 2;
    }
    if ((&this_00->field_1B13)[*piVar7 + iVar2 * 0xf] != 0) {
      switch(this_00->field_1BE8) {
      default:
        iVar2 = 0;
        break;
      case CASE_3:
      case CASE_4:
      case CASE_5:
        iVar2 = 1;
        break;
      case CASE_6:
      case CASE_7:
      case CASE_8:
        iVar2 = 2;
      }
      thunk_FUN_005926a0((int *)(&this_00->field_1B13)[*piVar7 + iVar2 * 0xf]);
    }
    piVar7 = piVar7 + 1;
    local_24[5] = local_24[5] + -1;
  } while (local_24[5] != 0);
  if (this_00->field_1BE8 == CASE_1) {
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
    iVar2 = *(int *)((int)&PTR_0081176c->vtable + local_24[6]);
    if (iVar2 != 0) {
      piVar7 = (int *)((int)&PTR_0081176c->field_025C + local_24[5]);
      if ((&PTR_0081176c->field_0x270)[local_24[5]] == '\0') {
        uVar8 = piVar7[2];
      }
      else {
        uVar8 = piVar7[3];
      }
      if (uVar8 <= local_8->field_0061 - piVar7[4]) {
        pBVar3 = (BITMAPINFO *)FUN_0070b3a0(iVar2,(int)*(short *)(iVar2 + 0x29));
        FUN_006b5f80(DAT_008075a8,*piVar7,piVar7[1],(int)*(short *)(iVar2 + 0x2c),
                     (int)*(short *)(iVar2 + 0x2e));
        PutDDX(*piVar7,piVar7[1],'\x01',pBVar3);
        if ((char)piVar7[5] != '\0') {
          *(undefined1 *)(piVar7 + 5) = 0;
        }
        piVar7[4] = local_8->field_0061;
        switch(*(undefined2 *)((int)piVar7 + 0x15)) {
        case 0:
          *(short *)(iVar2 + 0x29) = *(short *)(iVar2 + 0x29) + 1;
          if (*(short *)(iVar2 + 0x23) <= *(short *)(iVar2 + 0x29)) {
            *(undefined2 *)(iVar2 + 0x29) = 0;
            *(undefined1 *)(piVar7 + 5) = 1;
          }
          break;
        case 1:
          *(short *)(iVar2 + 0x29) = *(short *)(iVar2 + 0x29) + -1;
          if (*(short *)(iVar2 + 0x29) < 0) {
            *(short *)(iVar2 + 0x29) = *(short *)(iVar2 + 0x23) + -1;
            *(undefined1 *)(piVar7 + 5) = 1;
          }
          break;
        case 2:
          *(short *)(iVar2 + 0x29) = *(short *)(iVar2 + 0x29) + 1;
          if (*(short *)(iVar2 + 0x23) <= *(short *)(iVar2 + 0x29)) {
            *(short *)(iVar2 + 0x29) = *(short *)(iVar2 + 0x23) + -1;
            *(undefined1 *)(piVar7 + 5) = 1;
            *(undefined2 *)((int)piVar7 + 0x15) = 3;
          }
          break;
        case 3:
          *(short *)(iVar2 + 0x29) = *(short *)(iVar2 + 0x29) + -1;
          if (*(short *)(iVar2 + 0x29) < 0) {
            *(undefined2 *)(iVar2 + 0x29) = 0;
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

