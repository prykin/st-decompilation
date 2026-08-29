#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Teleport
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 004983E3 -> read as EAX on
   every CFG path | 00497E00 @ 004983F0 -> read as EAX on every CFG path | 00497E00 @ 0049861A ->
   read as EAX on every CFG path */

int __thiscall STGroupBoatC::Teleport(STGroupBoatC *this,int param_1)

{
  ushort uVar2;
  STGroupBoatC *pSVar3;
  int iVar3;
  STBoatC *pSVar4;
  int iVar6;
  int iVar5;
  uint uVar6;
  dword index;
  InternalExceptionFrame local_6c;
  uint local_28;
  uint local_24;
  ushort local_20;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  ushort local_16;
  STGroupBoatC *local_14;
  int local_10;
  byte local_c [4];
  dword local_8;

  local_8 = this->field_0029->count;
  uVar6 = 0;
  local_10 = 2;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_14 = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  pSVar3 = local_14;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      memset(&local_14->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
      local_14->field_0065 = 0;
      local_14->field_02D8 = local_14->field_01A3;
      uVar2 = local_14->field_01A9;
      local_14->field_02DC = local_14->field_01A7;
      local_14->field_02DE = uVar2;
      uVar2 = local_14->field_01AD;
      local_14->field_02E0 = local_14->field_01AB;
      local_14->field_02E2 = uVar2;
      uVar2 = local_14->field_01B1;
      local_14->field_02E4 = local_14->field_01AF;
      local_14->field_02E6 = uVar2;
      local_24 = local_14->field_02D8;
      local_28 = g_playSystem_00802A38->field_00E4;
      local_20 = local_14->field_02DC;
      local_1c = local_14->field_02E0;
      local_16 = local_14->field_02E6;
      local_1e = local_14->field_02DE;
      local_1a = local_14->field_02E2;
      local_18 = local_14->field_02E4;
      if (0 < (int)local_8) {
        do {

          DArrayGetElement(pSVar3->field_0029,uVar6,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[0049FA10]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar4 = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_c),CASE_1);
            if (pSVar4 == nullptr) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0xc46);
            }
            /* ST_CALLSITE[0049FA3D]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            STBoatC::CmdToObj(pSVar4,CASE_15,&local_28);
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)local_8);
      }
    }
    if (g_playSystem_00802A38->field_00E4 % 0x19 == 1) {
      index = 0;
      if (0 < (int)local_8) {
        do {

          DArrayGetElement(pSVar3->field_0029,index,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[0049FA95]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar4 = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_c),CASE_1);
            if (pSVar4 == nullptr) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0xc51);
            }
            /* ST_CALLSITE[0049FABD]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
            iVar5 = STGameObjC::sub_0045FF10((STGameObjC *)pSVar4);
            if (iVar5 == 0x15) break;
            /* ST_CALLSITE[0049FACB]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
            uVar6 = STBoatC::CheckPBoxCmd(pSVar4,CASE_15);
            if (uVar6 == 1) break;
          }
          index = index + 1;
        } while ((int)index < (int)local_8);
      }
      if (index == local_8) {
        local_10 = 0;
      }
    }
    g_currentExceptionFrame = local_6c.previous;
  }
  else {
    g_currentExceptionFrame = local_6c.previous;
    if (iVar3 != -0x5001fff7) {

      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xc5a,0,iVar3,"%s"
                                 ,"STGroupBoatC::Teleport");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0xc5b);
      return -1;
    }
  }
  return local_10;
}

