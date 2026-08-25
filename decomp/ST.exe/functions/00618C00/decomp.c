#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_jump_mine.cpp
   STJumpMineC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00402D6A|00618C00; family_names=STJumpMineC::GetMessage; ret4=10;
   direct_offsets={10:1,14:1,18:4,1c:2}

   [STSwitchEnumApplier] Switch target field_0093 uses
   /SubmarineTitans/Recovered/Enums/STJumpMineC_field_0093State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

int __thiscall STJumpMineC::GetMessage(STJumpMineC *this,STMessage *message)

{
  STMessageId SVar1;
  STJumpMineC *this_00;
  byte bVar3;
  int local_EAX_35;
  int iVar4;
  int iVar6_mg1;
  int iVar5;
  int iVar6;
  byte *puVar7;
  byte *puVar8;
  InternalExceptionFrame local_58;
  void *local_14;
  byte *local_10;
  uint local_c;
  STJumpMineC *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_8 = this;
  local_EAX_35 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_8;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\nick\\to_jump_mine.cpp",0xad,0,local_EAX_35,
                               "%s","STJumpMineC::GetMessage");
    if (iVar5 == 0) {
      RaiseInternalException(local_EAX_35,0,"E:\\__titans\\nick\\to_jump_mine.cpp",0xaf);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar1 = message->id;
  if (SVar1 < MESS_TORPHIT) {
    if (SVar1 == MESS_SHARED_010F) {
      /* ST_CALLSITE[00618EB2]: CALL 0x0040490d; direct=0040490D STJumpMineC::sub_00619350 */
      local_10 = sub_00619350(local_8,&local_c);
      /* ST_CALLSITE[00618EC9]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
      STPlaySystemC::SaveObjData(g_playSystem_00802A38,this_00->field_0018,local_10,local_c);
      FreeAndNull(&local_10);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_NONE) {
      /* ST_CALLSITE[00618E37]: CALL 0x00404f8e; direct=00404F8E STJumpMineC::sub_00619C70 */
      iVar4 = sub_00619C70(local_8);
      if (iVar4 != 0) {
        if (this_00->field_0150 == '\0') {
          /* ST_CALLSITE[00618E68]: CALL 0x00401181; direct=00401181 STJumpMineC::sub_006191A0 */
          bVar3 = sub_006191A0(this_00,(int)this_00->field_00C9,(int)this_00->field_00CB);
          this_00->field_0150 = bVar3;
          if (bVar3 != 0) {
            /* ST_CALLSITE[00618E7B]: CALL 0x004056eb; direct=004056EB STJumpMineC::LoadImagJMine */
            LoadImagJMine(this_00,1);
          }
          if (this_00->field_0150 == '\0') {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
        }
        /* ST_CALLSITE[00618E90]: CALL 0x00402c48; direct=00402C48 STJumpMineC::sub_00619A20 */
        sub_00619A20(this_00);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
    else if (SVar1 == MESS_ID_CREATE) {
      puVar7 = (byte *)((message->arg0).ptr);
      if (puVar7[3] == 2) {
        thunk_FUN_006193a0(local_8,puVar7);
        puVar7 = (byte *)&this_00->field_0x20;
        memset(puVar7, 0, 0x2d); /* compiler bulk-zero initialization */
        puVar7 = (byte *)((byte *)puVar7 + 0x2c);
        iVar6 = 0;
        this_00->field_001C = this_00->field_014C;
        if ((this_00->field_0150 != '\0') && (this_00->field_0093 != CASE_5)) {
          /* ST_CALLSITE[00618DF5]: CALL 0x004056eb; direct=004056EB STJumpMineC::LoadImagJMine */
          LoadImagJMine(this_00,1);
        }
        if ((this_00->field_0093 == CASE_5) || (this_00->field_0093 == CASE_0)) {
          /* ST_CALLSITE[00618E0F]: CALL 0x004023ec; direct=004023EC STJumpMineC::sub_006192E0 */
          sub_006192E0(this_00);
          this_00->field_0093 = CASE_6;
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
      }
      else {
        puVar8 = (byte *)&local_8->field_0x4d;
        memmove(puVar8, puVar7, 0x42); /* compiler REP MOVS byte copy */
        local_8->field_001C = DAT_00808754;
        /* ST_CALLSITE[00618CD7]: CALL 0x00402f90; direct=00402F90 STJumpMineC::sub_006193E0 */
        iVar6 = sub_006193E0(local_8);
        if (iVar6 == 0) {
LAB_00618ce0:
          /* ST_CALLSITE[00618CE2]: CALL 0x004023ec; direct=004023EC STJumpMineC::sub_006192E0 */
          sub_006192E0(this_00);
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
        iVar6 = thunk_FUN_0061bdb0(this_00,CASE_0,this_00->field_00E7,this_00->field_00EB,
                                   this_00->field_00EF);
        if (iVar6 == 0) {
          iVar6 = thunk_FUN_0061bdb0(this_00,CASE_1,this_00->field_00E7,this_00->field_00EB,
                                     this_00->field_00EF);
          if (iVar6 == 0) goto LAB_00618ce0;
          this_00->field_0093 = CASE_1;
        }
        else {
          this_00->field_0093 = CASE_4;
        }
        /* ST_CALLSITE[00618D6F]: CALL 0x00401181; direct=00401181 STJumpMineC::sub_006191A0 */
        bVar3 = sub_006191A0(this_00,(int)this_00->field_00C9,(int)this_00->field_00CB);
        this_00->field_0150 = bVar3;
        if ((void *)this_00->field_007D != nullptr) {
          thunk_FUN_00617a20((void *)this_00->field_007D,this_00->field_008B,this_00->field_0018,
                             this_00);
        }
        if (this_00->field_0150 != '\0') {
          /* ST_CALLSITE[00618DA4]: CALL 0x004056eb; direct=004056EB STJumpMineC::LoadImagJMine */
          LoadImagJMine(this_00,1);
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
      }
    }
    else if (SVar1 == MESS_SHARED_0003) {
      if ((void *)local_8->field_007D != nullptr) {
        if (local_8->field_014B != '\0') {
          thunk_FUN_00618900((void *)local_8->field_007D,local_8->field_0145,0);
        }
        this_00->field_014B = 0;
        thunk_FUN_00617aa0((void *)this_00->field_007D,(int)this_00->field_0018);
      }
      thunk_FUN_00619320((int)this_00);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
  }
  else if (SVar1 == MESS_ID_ALLCREATE) {
    if (((local_8->field_007D != 0) &&
        (iVar6_mg1 = STPlaySystemC::sub_006E62D0
                               (g_playSystem_00802A38,local_8->field_0079,(int *)&local_14),
        iVar6_mg1 != -4)) && (this_00->field_007D = local_14, local_14 != nullptr)) {
      thunk_FUN_00617a20(local_14,this_00->field_008B,this_00->field_0018,this_00);
    }
  }
  else if (SVar1 == MESS_STOCTOPUSC_0112) {
    if ((-1 < local_8->field_0097) && (local_8->field_0093 != CASE_5)) {
      Library::Ourlib::ST3DSMAP::SprSetShadow
                (g_sT3DSMAPContext_00807598,local_8->field_0097,0,0,(uint)local_8);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
  }
  else if (((SVar1 == MESS_STSPRGAMEOBJC_0113) && (-1 < local_8->field_0097)) &&
          (local_8->field_0093 != CASE_5)) {
    Library::Ourlib::ST3DSMAP::SprSetShadow
              (g_sT3DSMAPContext_00807598,local_8->field_0097,0,0x401109,(uint)&local_8->field_0x4d);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

