#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_dest.cpp
   STDestC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004050CE|00601F80; family_names=STDestC::GetMessage; ret4=11;
   direct_offsets={10:1,14:1,18:1,1c:0} */

int __thiscall STDestC::GetMessage(STDestC *this,STMessage *message)

{
  STMessageId SVar1;
  AnonShape_00602BE0_B1CC517D *this_00;
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
  AnonShape_0060EA30_DCEB68AD *local_c;
  AnonShape_00602BE0_B1CC517D *local_8;

  local_8 = (AnonShape_00602BE0_B1CC517D *)this;
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
          local_10 = sub_006025D0((STDestC *)local_8,&local_c);
          STPlaySystemC::SaveObjData
                    (g_playSystem_00802A38,*(int **)&this_00->field_0x18,local_10,local_c);
          FreeAndNull(&local_10);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        if (SVar1 == MESS_ID_NONE) {
          if ((local_8->field_036E != 0) && (local_8->field_036E != 4)) {
            sub_00602BE0((STDestC *)local_8);
          }
          if ((g_playSystem_00802A38->field_00E4 & 0xf) == 0) {
            sub_00603120((STDestC *)this_00);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
        }
        else if (SVar1 == MESS_ID_CREATE) {
          puVar3 = (byte *)((message->arg0).ptr);
          if (puVar3[3] != 2) {
            puVar6 = (byte *)&local_8->field_0x231;
            memmove(puVar6, puVar3, 0x13d); /* compiler REP MOVS byte copy */
            iVar5 = sub_006024B0((STDestC *)local_8);
            if (iVar5 != 0) {
              if ((*(int *)&this_00->field_0x3a7 != 0) && (iVar5 = thunk_FUN_006029c0(), iVar5 == 0)
                 ) {
                sub_00602440((STDestC *)this_00);
                g_currentExceptionFrame = local_54.previous;
                return 0;
              }
              if (g_allPlayers_007FA174 == nullptr) {
                g_currentExceptionFrame = local_54.previous;
                return 0;
              }
              iVar5 = STAllPlayersC::RegisterBlot(g_allPlayers_007FA174,0xffff,this_00);
              if (iVar5 == 0) {
                this_00->field_0x3a5 = 1;
                g_currentExceptionFrame = local_54.previous;
                return 0;
              }
            }
            sub_00602440((STDestC *)this_00);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
          iVar5 = sub_00602660((STDestC *)local_8,puVar3);
          if (-1 < iVar5) {
            if (this_00->field_036E == 4) {
              puVar3 = (byte *)(sub_00602E90((STDestC *)this_00));
              this_00->field_03AB = puVar3;
              if (puVar3 == nullptr) {
                sub_00602440((STDestC *)this_00);
              }
            }
            else if ((*(int *)&this_00->field_0x3a7 != 0) && (this_00->field_036E != 0)) {
              sub_00602BE0((STDestC *)this_00);
            }
            if (((g_allPlayers_007FA174 != nullptr) && (this_00->field_0x3a5 != '\0'))
               && (iVar5 = STAllPlayersC::RegisterBlot
                                     (g_allPlayers_007FA174,*(ushort *)&this_00->field_0x32,this_00)
                  , iVar5 != 0)) {
              sub_00602440((STDestC *)this_00);
              g_currentExceptionFrame = local_54.previous;
              return 0;
            }
          }
        }
        else if (((SVar1 == MESS_SHARED_0003) &&
                 (thunk_FUN_004ad310((STT3DSprC *)&local_8->field_0x1d5),
                 this_00->field_0x3a5 != '\0')) && (g_allPlayers_007FA174 != nullptr))
        {
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          STAllPlayersC::UnRegisterBlot
                    (g_allPlayers_007FA174,
                     CONCAT22(extraout_var,*(undefined2 *)&this_00->field_0x32),
                     (AnonShape_0044AA20_1EE9340C *)this_00);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
      }
      else if (SVar1 == MESS_STOCTOPUSC_0112) {
        if (-1 < (int)local_8->field_039B) {
          thunk_FUN_004ad5e0((STT3DSprC *)&local_8->field_0x1d5);
        }
      }
      else if (SVar1 == MESS_STSPRGAMEOBJC_0113) {
        if (-1 < (int)local_8->field_039B) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)**(undefined4 **)&local_8->field_0x1d5)();
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
      }
      else if (SVar1 == MESS_HITKILL) {
        thunk_FUN_004ad430((STT3DSprC *)&local_8->field_0x1d5);
        sub_00602440((STDestC *)this_00);
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

