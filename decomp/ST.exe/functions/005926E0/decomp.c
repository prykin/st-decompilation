#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::AnimationCampaign

   [STSwitchEnumApplier] Switch target field_1BE8 uses
   /SubmarineTitans/Recovered/Enums/CampaignTy_field_1BE8State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8 */

void __thiscall CampaignTy::AnimationCampaign(CampaignTy *this)

{
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar1;
  code *pcVar2;
  CampaignTy *this_00;
  int iVar3;
  BITMAPINFO *pBVar4;
  int iVar5;
  CampaignTy_field_1BE8State CVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  char cVar10;
  InternalExceptionFrame local_68;
  int local_24 [7];
  CampaignTy *local_8;

  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Start\\camp_obj.cpp",0x1b3,0,iVar3,"%s"
                               ,"CampaignTy::AnimationCampaign");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\camp_obj.cpp",0x1b3);
    return;
  }
  if (PTR_0081176c->field_0028 == 0) goto LAB_00592b82;
  if (local_8->field_1BE7 != '\0') goto LAB_00592b7c;
  local_24[5] = local_8->field_1BE8;
  puVar7 = &local_8->field_1BD7;
  iVar3 = 4;
  do {
    if ((int *)*puVar7 != (int *)0x0) {
      thunk_FUN_005926a0((int *)*puVar7);
    }
    puVar7 = puVar7 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  CVar6 = this_00->field_1BE8;
  switch(CVar6) {
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
  switch(CVar6) {
  default:
    iVar3 = 0;
    break;
  case CASE_3:
  case CASE_4:
  case CASE_5:
    iVar3 = 1;
    break;
  case CASE_6:
  case CASE_7:
  case CASE_8:
    iVar3 = 2;
  }
  if ((&this_00->field_1B13)[local_24[2] + iVar3 * 0xf] == 0) goto switchD_00592962_caseD_1;
  switch(CVar6) {
  default:
    iVar3 = 0;
    break;
  case CASE_3:
  case CASE_4:
  case CASE_5:
    iVar3 = 1;
    break;
  case CASE_6:
  case CASE_7:
  case CASE_8:
    iVar3 = 2;
  }
  switch(CVar6) {
  default:
    iVar5 = 0;
    break;
  case CASE_3:
  case CASE_4:
  case CASE_5:
    iVar5 = 1;
    break;
  case CASE_6:
  case CASE_7:
  case CASE_8:
    iVar5 = 2;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)((&this_00->field_1B13)[local_24[2] + iVar3 * 0xf] + 0x14) -
      *(int *)((&this_00->field_1B13)[local_24[2] + iVar5 * 0xf] + 0x18) != 1)
  goto switchD_00592962_caseD_1;
  switch(CVar6) {
  case CASE_0:
  case CASE_1:
    CVar6 = (DAT_0080874e != 1) + CASE_1;
    goto LAB_00592933;
  case CASE_2:
  case CASE_5:
  case CASE_8:
    CVar6 = (uint)DAT_0080874e * 3 - CASE_3;
LAB_00592933:
    this_00->field_1BE8 = CVar6;
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
    iVar3 = 1;
    cVar10 = '\x02';
    uVar9 = 0x18;
    break;
  default:
    goto switchD_00592962_caseD_1;
  case CASE_2:
    iVar3 = -1;
    cVar10 = '\x01';
    uVar9 = 0x1b;
    break;
  case CASE_3:
    thunk_FUN_005b6730(this_00,0x16,'\0',1);
    iVar3 = 1;
    cVar10 = '\x02';
    uVar9 = 0x19;
    break;
  case CASE_5:
    iVar3 = -1;
    cVar10 = '\x01';
    uVar9 = 0x1c;
    break;
  case CASE_6:
    thunk_FUN_005b6730(this_00,0x17,'\0',1);
    iVar3 = 1;
    cVar10 = '\x02';
    uVar9 = 0x1a;
    break;
  case CASE_8:
    iVar3 = -1;
    cVar10 = '\x01';
    uVar9 = 0x1d;
  }
  thunk_FUN_005b6730(this_00,uVar9,cVar10,iVar3);
switchD_00592962_caseD_1:
  if (local_24[5] != this_00->field_1BE8) {
    puVar7 = &this_00->field_1B13;
    local_24[5] = 3;
    do {
      iVar3 = 0xf;
      do {
        if ((AnonShape_006C4AA0_6E9A3AA4 *)*puVar7 != (AnonShape_006C4AA0_6E9A3AA4 *)0x0) {
          FUN_006c4aa0((AnonShape_006C4AA0_6E9A3AA4 *)*puVar7);
        }
        puVar7 = puVar7 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
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
  piVar8 = local_24;
  local_24[5] = 5;
  do {
    switch(this_00->field_1BE8) {
    default:
      iVar3 = 0;
      break;
    case CASE_3:
    case CASE_4:
    case CASE_5:
      iVar3 = 1;
      break;
    case CASE_6:
    case CASE_7:
    case CASE_8:
      iVar3 = 2;
    }
    if ((&this_00->field_1B13)[*piVar8 + iVar3 * 0xf] != 0) {
      switch(this_00->field_1BE8) {
      default:
        iVar3 = 0;
        break;
      case CASE_3:
      case CASE_4:
      case CASE_5:
        iVar3 = 1;
        break;
      case CASE_6:
      case CASE_7:
      case CASE_8:
        iVar3 = 2;
      }
      thunk_FUN_005926a0((int *)(&this_00->field_1B13)[*piVar8 + iVar3 * 0xf]);
    }
    piVar8 = piVar8 + 1;
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
    pAVar1 = *(AnonShape_GLOBAL_0081175C_57F682DD **)((int)&PTR_0081176c->vtable + local_24[6]);
    if (pAVar1 != (AnonShape_GLOBAL_0081175C_57F682DD *)0x0) {
      piVar8 = (int *)((int)&PTR_0081176c->field_025C + local_24[5]);
      if ((&PTR_0081176c->field_0x270)[local_24[5]] == '\0') {
        uVar9 = piVar8[2];
      }
      else {
        uVar9 = piVar8[3];
      }
      if (uVar9 <= local_8->field_0061 - piVar8[4]) {
        pBVar4 = (BITMAPINFO *)FUN_0070b3a0(pAVar1,(int)(short)pAVar1->field_0029);
        FUN_006b5f80((int *)PTR_008075a8,*piVar8,piVar8[1],(int)*(short *)(pAVar1 + 1),
                     (int)*(short *)&pAVar1[1].field_0x2);
        PutDDX(*piVar8,piVar8[1],'\x01',pBVar4);
        if ((char)piVar8[5] != '\0') {
          *(undefined1 *)(piVar8 + 5) = 0;
        }
        piVar8[4] = local_8->field_0061;
        switch(*(undefined2 *)((int)piVar8 + 0x15)) {
        case 0:
          pAVar1->field_0029 = pAVar1->field_0029 + 1;
          if (pAVar1->field_0023 <= (short)pAVar1->field_0029) {
            pAVar1->field_0029 = 0;
            *(undefined1 *)(piVar8 + 5) = 1;
          }
          break;
        case 1:
          pAVar1->field_0029 = pAVar1->field_0029 + -1;
          if ((short)pAVar1->field_0029 < 0) {
            pAVar1->field_0029 = pAVar1->field_0023 + -1;
            *(undefined1 *)(piVar8 + 5) = 1;
          }
          break;
        case 2:
          pAVar1->field_0029 = pAVar1->field_0029 + 1;
          if (pAVar1->field_0023 <= (short)pAVar1->field_0029) {
            pAVar1->field_0029 = pAVar1->field_0023 + -1;
            *(undefined1 *)(piVar8 + 5) = 1;
            *(undefined2 *)((int)piVar8 + 0x15) = 3;
          }
          break;
        case 3:
          pAVar1->field_0029 = pAVar1->field_0029 + -1;
          if ((short)pAVar1->field_0029 < 0) {
            pAVar1->field_0029 = 0;
            *(undefined1 *)(piVar8 + 5) = 1;
            *(undefined2 *)((int)piVar8 + 0x15) = 2;
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

