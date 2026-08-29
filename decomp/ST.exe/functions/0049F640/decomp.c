#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Recharge
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 004983AC -> read as EAX on
   every CFG path | 00497E00 @ 004983B9 -> read as EAX on every CFG path | 00497E00 @ 0049860C ->
   read as EAX on every CFG path */

int __thiscall STGroupBoatC::Recharge(STGroupBoatC *this,int param_1)

{
  ushort uVar2;
  STGroupBoatC *pSVar3;
  int iVar3;
  STBoatC *pSVar4;
  int iVar6;
  int iVar5;
  uint uVar6;
  dword index;
  InternalExceptionFrame local_68;
  uint local_24;
  uint local_20;
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  STGroupBoatC *local_14;
  int local_10;
  byte local_c [4];
  dword local_8;

  local_8 = this->field_0029->count;
  uVar6 = 0;
  local_10 = 2;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_14 = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  pSVar3 = local_14;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      memset(&local_14->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
      local_14->field_0065 = 0;
      local_14->field_02CE = local_14->field_0199;
      uVar2 = local_14->field_019F;
      local_14->field_02D2 = local_14->field_019D;
      local_14->field_02D4 = uVar2;
      local_14->field_02D6 = local_14->field_01A1;
      local_20 = local_14->field_02CE;
      local_24 = g_playSystem_00802A38->field_00E4;
      local_1c = local_14->field_02D2;
      local_18 = local_14->field_02D6;
      local_1a = local_14->field_02D4;
      if (0 < (int)local_8) {
        do {

          DArrayGetElement(pSVar3->field_0029,uVar6,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[0049F72B]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar4 = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_c),CASE_1);
            if (pSVar4 == nullptr) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0xc11);
            }
            /* ST_CALLSITE[0049F758]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            STBoatC::CmdToObj(pSVar4,CASE_16,&local_24);
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)local_8);
      }
    }
    if (g_playSystem_00802A38->field_00E4 % 0x19 == 7) {
      index = 0;
      if (0 < (int)local_8) {
        do {

          DArrayGetElement(pSVar3->field_0029,index,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[0049F7B0]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar4 = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_c),CASE_1);
            if (pSVar4 == nullptr) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0xc1c);
            }
            /* ST_CALLSITE[0049F7D8]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
            iVar5 = STGameObjC::sub_0045FF10((STGameObjC *)pSVar4);
            if (iVar5 == 0x16) break;
            /* ST_CALLSITE[0049F7E6]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
            uVar6 = STBoatC::CheckPBoxCmd(pSVar4,CASE_16);
            if (uVar6 == 1) break;
          }
          index = index + 1;
        } while ((int)index < (int)local_8);
      }
      if (index == local_8) {
        local_10 = 0;
      }
    }
    g_currentExceptionFrame = local_68.previous;
  }
  else {
    g_currentExceptionFrame = local_68.previous;
    if (iVar3 != -0x5001fff7) {

      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xc25,0,iVar3,"%s"
                                 ,"STGroupBoatC::Recharge");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0xc26);
      return -1;
    }
  }
  return local_10;
}

