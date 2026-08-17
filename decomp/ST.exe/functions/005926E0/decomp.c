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
  CampaignTy *this_00;
  int iVar3;
  BITMAPINFO *pBVar3;
  int iVar5;
  int iVar4;
  CampaignTy_field_1BE8State CVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  char cVar11;
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
  if (g_startSystem_0081176C->field_0028 == 0) goto LAB_00592b82;
  if (local_8->field_1BE7 != '\0') goto LAB_00592b7c;
  local_24[5] = local_8->field_1BE8;
  puVar7 = local_8->field_1BD7;
  iVar6 = 4;
  do {
    if ((int *)*puVar7 != nullptr) {
      thunk_FUN_005926a0((int *)*puVar7);
    }
    puVar7 = puVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
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
    iVar6 = 0;
    break;
  case CASE_3:
  case CASE_4:
  case CASE_5:
    iVar6 = 1;
    break;
  case CASE_6:
  case CASE_7:
  case CASE_8:
    iVar6 = 2;
  }
  if ((&this_00->field_1B13)[local_24[2] + iVar6 * 0xf] == 0) goto switchD_00592962_caseD_1;
  switch(CVar5) {
  default:
    iVar6 = 0;
    break;
  case CASE_3:
  case CASE_4:
  case CASE_5:
    iVar6 = 1;
    break;
  case CASE_6:
  case CASE_7:
  case CASE_8:
    iVar6 = 2;
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
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)((&this_00->field_1B13)[local_24[2] + iVar6 * 0xf] + 0x14) -
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
    iVar6 = 1;
    cVar11 = '\x02';
    uVar10 = 0x18;
    break;
  default:
    goto switchD_00592962_caseD_1;
  case CASE_2:
    iVar6 = -1;
    cVar11 = '\x01';
    uVar10 = 0x1b;
    break;
  case CASE_3:
    thunk_FUN_005b6730(this_00,0x16,'\0',1);
    iVar6 = 1;
    cVar11 = '\x02';
    uVar10 = 0x19;
    break;
  case CASE_5:
    iVar6 = -1;
    cVar11 = '\x01';
    uVar10 = 0x1c;
    break;
  case CASE_6:
    thunk_FUN_005b6730(this_00,0x17,'\0',1);
    iVar6 = 1;
    cVar11 = '\x02';
    uVar10 = 0x1a;
    break;
  case CASE_8:
    iVar6 = -1;
    cVar11 = '\x01';
    uVar10 = 0x1d;
  }
  thunk_FUN_005b6730(this_00,uVar10,cVar11,iVar6);
switchD_00592962_caseD_1:
  if (local_24[5] != this_00->field_1BE8) {
    puVar8 = &this_00->field_1B13;
    local_24[5] = 3;
    do {
      iVar6 = 0xf;
      do {
        if ((AnonShape_006C4AA0_6E9A3AA4 *)*puVar8 != nullptr) {
          FUN_006c4aa0((AnonShape_006C4AA0_6E9A3AA4 *)*puVar8);
        }
        puVar8 = puVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
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
  piVar9 = local_24;
  local_24[5] = 5;
  do {
    switch(this_00->field_1BE8) {
    default:
      iVar6 = 0;
      break;
    case CASE_3:
    case CASE_4:
    case CASE_5:
      iVar6 = 1;
      break;
    case CASE_6:
    case CASE_7:
    case CASE_8:
      iVar6 = 2;
    }
    if ((&this_00->field_1B13)[*piVar9 + iVar6 * 0xf] != 0) {
      switch(this_00->field_1BE8) {
      default:
        iVar6 = 0;
        break;
      case CASE_3:
      case CASE_4:
      case CASE_5:
        iVar6 = 1;
        break;
      case CASE_6:
      case CASE_7:
      case CASE_8:
        iVar6 = 2;
      }
      thunk_FUN_005926a0((int *)(&this_00->field_1B13)[*piVar9 + iVar6 * 0xf]);
    }
    piVar9 = piVar9 + 1;
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
    pAVar1 = *(AnonShape_GLOBAL_0081175C_57F682DD **)
              ((int)&g_startSystem_0081176C->vtable + local_24[6]);
    if (pAVar1 != nullptr) {
      piVar9 = (int *)((int)g_startSystem_0081176C->array_0244 + local_24[5] + 0x18);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(char *)((int)g_startSystem_0081176C->array_0244 + local_24[5] + 0x2c) == '\0') {
        uVar10 = piVar9[2];
      }
      else {
        uVar10 = piVar9[3];
      }
      if (uVar10 <= local_8->field_0061 - piVar9[4]) {
        pBVar3 = FUN_0070b3a0(pAVar1,(int)(short)pAVar1->field_0029);
        FUN_006b5f80((int *)g_ddxContext_008075A8,*piVar9,piVar9[1],(int)*(short *)(pAVar1 + 1),
                     (int)*(short *)&pAVar1[1].field_0x2);
        /* ST_CALLSITE[00592C0A]: CALL 0x00403738; direct=00403738 PutDDX */
        PutDDX(*piVar9,piVar9[1],'\x01',pBVar3);
        if ((char)piVar9[5] != '\0') {
          ((undefined1 *)piVar9)[5] = 0;
        }
        piVar9[4] = local_8->field_0061;
        switch(STField<undefined2>(piVar9,0x15)) {
        case 0:
          pAVar1->field_0029 = pAVar1->field_0029 + 1;
          if (pAVar1->field_0023 <= (short)pAVar1->field_0029) {
            pAVar1->field_0029 = 0;
            ((undefined1 *)piVar9)[5] = 1;
          }
          break;
        case 1:
          pAVar1->field_0029 = pAVar1->field_0029 + -1;
          if ((short)pAVar1->field_0029 < 0) {
            pAVar1->field_0029 = pAVar1->field_0023 + -1;
            ((undefined1 *)piVar9)[5] = 1;
          }
          break;
        case 2:
          pAVar1->field_0029 = pAVar1->field_0029 + 1;
          if (pAVar1->field_0023 <= (short)pAVar1->field_0029) {
            pAVar1->field_0029 = pAVar1->field_0023 + -1;
            ((undefined1 *)piVar9)[5] = 1;
            STField<undefined2>(piVar9,0x15) = 3;
          }
          break;
        case 3:
          pAVar1->field_0029 = pAVar1->field_0029 + -1;
          if ((short)pAVar1->field_0029 < 0) {
            pAVar1->field_0029 = 0;
            ((undefined1 *)piVar9)[5] = 1;
            STField<undefined2>(piVar9,0x15) = 2;
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

