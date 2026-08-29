#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_dest.cpp
   STDestC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004050CE|00601F80; family_names=STDestC::GetMessage; ret4=11;
   direct_offsets={10:1,14:1,18:1,1c:0}

   [STSwitchEnumApplier] Switch target field_036E uses
   /SubmarineTitans/Recovered/Enums/STDestC_field_036EState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_4=4;CASE_6=6

   [STSwitchEnumApplier] Switch target field_036E uses
   /SubmarineTitans/Recovered/Enums/STDestC_field_036EState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_6=6 */

int __thiscall STDestC::GetMessage(STDestC *this,STMessage *message)

{
  STMessageId SVar1;
  STDestC *this_00;
  int local_EAX_16;
  int iVar3;
  byte *puVar3;
  int iVar4;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  byte *puVar6;
  InternalExceptionFrame local_54;
  byte *local_10;
  uint local_c;
  STDestC *local_8;

  local_8 = this;
  /* ST_CALLSITE[00601F90]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  local_EAX_16 = STSprGameObjC::GetMessage((STSprGameObjC *)this,message);
  if (local_EAX_16 != 0xffff) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;

    iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
    this_00 = local_8;
    if (iVar3 == 0) {
      SVar1 = message->id;
      if (SVar1 < MESS_TORPHIT) {
        if (SVar1 == MESS_SHARED_010F) {
          /* ST_CALLSITE[006021CB]: CALL 0x00404d77; direct=00404D77 STDestC::sub_006025D0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
          local_10 = sub_006025D0(local_8,&local_c);
          /* ST_CALLSITE[006021E2]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
          STPlaySystemC::SaveObjData(g_playSystem_00802A38,this_00->field_0018,local_10,local_c);
          FreeAndNull(&local_10);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        if (SVar1 == MESS_ID_NONE) {
          if ((local_8->field_036E != CASE_0) && (local_8->field_036E != CASE_4)) {
            /* ST_CALLSITE[00602190]: CALL 0x00402cf2; direct=00402CF2 STDestC::sub_00602BE0 */
            sub_00602BE0(local_8);
          }
          if ((g_playSystem_00802A38->field_00E4 & 0xf) == 0) {
            /* ST_CALLSITE[006021AA]: CALL 0x00401483; direct=00401483 STDestC::sub_00603120 */
            sub_00603120(this_00);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
        }
        else if (SVar1 == MESS_ID_CREATE) {
          puVar3 = (byte *)((message->arg0).ptr);
          if (puVar3[3] != 2) {
            puVar6 = (byte *)&local_8->field_0x231;
            memmove(puVar6, puVar3, 0x13d); /* compiler REP MOVS byte copy */
            /* ST_CALLSITE[0060205D]: CALL 0x00403049; direct=00403049 STDestC::sub_006024B0 */
            iVar5 = sub_006024B0(local_8);
            if (iVar5 != 0) {

              if ((this_00->field_03A7 != 0) && (iVar5 = thunk_FUN_006029c0(), iVar5 == 0)) {
                /* ST_CALLSITE[0060207D]: CALL 0x00401bf4; direct=00401BF4 STDestC::sub_00602440 */
                sub_00602440(this_00);
                g_currentExceptionFrame = local_54.previous;
                return 0;
              }
              if (g_allPlayers_007FA174 == nullptr) {
                g_currentExceptionFrame = local_54.previous;
                return 0;
              }
              /* ST_CALLSITE[006020A9]: CALL 0x004015dc; direct=004015DC STAllPlayersC::RegisterBlot */
              iVar5 = STAllPlayersC::RegisterBlot(g_allPlayers_007FA174,0xffff,this_00);
              if (iVar5 == 0) {
                this_00->field_03A5 = 1;
                g_currentExceptionFrame = local_54.previous;
                return 0;
              }
            }
            /* ST_CALLSITE[006020B4]: CALL 0x00401bf4; direct=00401BF4 STDestC::sub_00602440 */
            sub_00602440(this_00);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
          /* ST_CALLSITE[006020EC]: CALL 0x00404179; direct=00404179 STDestC::sub_00602660 */
          iVar5 = sub_00602660(local_8,puVar3);
          if (-1 < iVar5) {
            if (this_00->field_036E == CASE_4) {
              /* ST_CALLSITE[00602106]: CALL 0x00405d30; direct=00405D30 STDestC::sub_00602E90 */
              puVar3 = (byte *)(sub_00602E90(this_00));
              this_00->field_03AB = puVar3;
              if (puVar3 == nullptr) {
                /* ST_CALLSITE[00602117]: CALL 0x00401bf4; direct=00401BF4 STDestC::sub_00602440 */
                sub_00602440(this_00);
              }
            }
            else if ((this_00->field_03A7 != 0) && (this_00->field_036E != CASE_0)) {
              /* ST_CALLSITE[0060212E]: CALL 0x00402cf2; direct=00402CF2 STDestC::sub_00602BE0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
              sub_00602BE0(this_00);
            }
            if (((g_allPlayers_007FA174 != nullptr) && (this_00->field_03A5 != '\0'))
               /* ST_CALLSITE[00602155]: CALL 0x004015dc; direct=004015DC STAllPlayersC::RegisterBlot */
               && (iVar5 = STAllPlayersC::RegisterBlot
                                     (g_allPlayers_007FA174,this_00->field_0032,this_00), iVar5 != 0
                  )) {
              /* ST_CALLSITE[00602164]: CALL 0x00401bf4; direct=00401BF4 STDestC::sub_00602440 */
              sub_00602440(this_00);
              g_currentExceptionFrame = local_54.previous;
              return 0;
            }
          }
        }
        else if (((SVar1 == MESS_SHARED_0003) &&
                 (thunk_FUN_004ad310((STT3DSprC *)&local_8->field_01D5), this_00->field_03A5 != '\0'
                 )) && (g_allPlayers_007FA174 != nullptr)) {
          /* ST_CALLSITE[00602025]: CALL 0x00405ac9; direct=00405AC9 STAllPlayersC::UnRegisterBlot */
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          STAllPlayersC::UnRegisterBlot
                    (g_allPlayers_007FA174,CONCAT22(extraout_var,this_00->field_0032),
                     (RecoveredRecordView_0044AA20_60F0F4F3 *)this_00);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
      }
      else if (SVar1 == MESS_STOCTOPUSC_0112) {
        if (-1 < local_8->field_039B) {
          thunk_FUN_004ad5e0((STT3DSprC *)&local_8->field_01D5);
        }
      }
      else if (SVar1 == MESS_STSPRGAMEOBJC_0113) {
        if (-1 < local_8->field_039B) {
          /* ST_CALLSITE[00602253]: CALL dword ptr [EDX] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)local_8->field_01D5)();
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
      }
      else if (SVar1 == MESS_HITKILL) {
        /* ST_CALLSITE[0060221B]: CALL 0x00403d0f; direct=00403D0F STT3DSprC::sub_004AD430 */
        STT3DSprC::sub_004AD430((STT3DSprC *)&local_8->field_01D5);
        /* ST_CALLSITE[00602222]: CALL 0x00401bf4; direct=00401BF4 STDestC::sub_00602440 */
        sub_00602440(this_00);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    g_currentExceptionFrame = local_54.previous;

    iVar4 = ReportDebugMessage("E:\\__titans\\nick\\to_dest.cpp",0x95,0,iVar3,"%s",
                               "STDestC::GetMessage");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\nick\\to_dest.cpp",0x97);
  }
  return 0xffff;
}

