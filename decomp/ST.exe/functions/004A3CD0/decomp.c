#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::DistributeDock */

void __thiscall
STGroupBoatC::DistributeDock(STGroupBoatC *this,int param_1,DArrayTy *param_2,DArrayTy *param_3)

{
  dword dVar1;
  STGroupBoatC *pSVar3;
  int local_EAX_54;
  STGameObjC *pSVar4;
  int iVar4;
  int iVar6;
  int local_EAX_299;
  STBoatC *pSVar7;
  DArrayTy *pDVar8;
  STFishC *pSVar9;
  int iVar5;
  uint uVar10;
  InternalExceptionFrame local_88;
  uint local_44;
  short local_40;
  short local_3e;
  short local_3c;
  ushort local_38;
  ushort uStack_36;
  dword local_30;
  STGroupBoatC *local_2c;
  DArrayTy *local_28;
  dword local_24;
  DArrayTy *local_20;
  short local_1c [2];
  short local_18 [2];
  short local_14 [2];
  uint local_10;
  DArrayTy *local_c;
  byte local_8 [4];
  uVar10 = 0;
  local_20 = nullptr;
  local_c = nullptr;
  local_28 = nullptr;
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_2c = this;

  local_EAX_54 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0);
  if (local_EAX_54 == 0) {
    if ((param_3 == nullptr) || (local_24 = param_3->count, local_24 == 0)) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x1189);
    }
    dVar1 = local_24;
    local_20 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
    local_c = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
    pSVar3 = local_2c;
    if (0 < (int)dVar1) {
      do {

        DArrayGetElement(param_3,uVar10,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          /* ST_CALLSITE[004A3D99]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          pSVar4 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_8),CASE_1);
          if (pSVar4 == nullptr) {

            iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x1191,0,0,
                                       "%s","STGroupBoatC::DistributeDock NULL value");
            if (iVar4 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x1192);
          }
          /* ST_CALLSITE[004A3DE5]: CALL dword ptr [EDX + 0x2c] */
          iVar6 = pSVar4->vfunc_2C();
          pDVar8 = local_c;
          if (((iVar6 != 9) &&
              /* ST_CALLSITE[004A3DF1]: CALL dword ptr [EAX + 0x2c] */
              (iVar6 = pSVar4->vfunc_2C(), pDVar8 = local_c, iVar6 != 0x15)) &&
             /* ST_CALLSITE[004A3DFB]: CALL 0x004043e0; direct=004043E0 STGameObjC::sub_00486B40 */
             (local_EAX_299 = STGameObjC::sub_00486B40(pSVar4), pDVar8 = local_c, local_EAX_299 != 0
             )) {
            pDVar8 = local_20;
          }

          Library::DKW::TBL::DArrayAppend(pDVar8,local_8);
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)local_24);
    }
    if (local_20->count == 0) {
      dVar1 = local_c->count;
      local_24 = dVar1;
      if ((dVar1 != 0) && (uVar10 = 0, 0 < (int)dVar1)) {
        do {
          /* ST_CALLSITE[004A3E4D]: CALL 0x006acc70; direct=006ACC70 DArrayGetElement; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
          DArrayGetElement(local_c,uVar10,local_8);
          /* ST_CALLSITE[004A3E62]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar7 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_8),CASE_1);
          /* ST_CALLSITE[004A3E6F]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(pSVar7,CASE_3,&local_10);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)dVar1);
      }
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x11a3);
    }
    if ((param_2 == nullptr) || (param_2->count == 0)) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x11a6);
    }
    pDVar8 = (DArrayTy *)
             /* ST_CALLSITE[004A3ECB]: CALL 0x004024fa; direct=004024FA STAllPlayersC::_AssignDocks */
             STAllPlayersC::_AssignDocks(g_allPlayers_007FA174,pSVar3->field_0024,param_2,local_20);
    local_28 = pDVar8;
    if (pDVar8 == nullptr) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x11a9);
    }
    uVar10 = 0;
    local_44 = g_playSystem_00802A38->field_00E4;
    local_30 = pDVar8->count;
    local_10 = local_44;
    if (0 < (int)local_30) {
      do {

        DArrayGetElement(pDVar8,uVar10,&local_38);
        if (uStack_36 == 0xffff) {
          /* ST_CALLSITE[004A3F3B]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar7 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar3->field_0024,local_38,CASE_1);
          /* ST_CALLSITE[004A3F48]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(pSVar7,CASE_3,&local_10);
        }
        else if (param_1 == 1) {
          /* ST_CALLSITE[004A3F67]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STFishC; signature=__thiscall;pointer:/STFishC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar9 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar3->field_0024,uStack_36,CASE_1);
          /* ST_CALLSITE[004A3F7A]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
          STFishC::sub_004162B0(pSVar9,local_1c,local_18,local_14);
          local_40 = local_1c[0];
          local_3e = local_18[0];
          local_3c = local_14[0];
          /* ST_CALLSITE[004A3FA7]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar7 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar3->field_0024,local_38,CASE_1);
          /* ST_CALLSITE[004A3FB4]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(pSVar7,CASE_4,&local_44);
        }
        else {
          /* ST_CALLSITE[004A3FC5]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STFishC; signature=__thiscall;pointer:/STFishC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar9 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar3->field_0024,uStack_36,CASE_1);
          /* ST_CALLSITE[004A3FD8]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
          STFishC::sub_004162B0(pSVar9,local_1c,local_18,local_14);
          /* ST_CALLSITE[004A3FED]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          pSVar4 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar3->field_0024,local_38,CASE_1);
          thunk_FUN_00490a00(pSVar4,local_1c[0],local_18[0],local_14[0]);
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)local_30);
    }
    dVar1 = local_c->count;
    local_24 = dVar1;
    if ((dVar1 != 0) && (uVar10 = 0, pDVar8 = local_28, 0 < (int)dVar1)) {
      do {

        DArrayGetElement(local_c,uVar10,local_8);
        /* ST_CALLSITE[004A4042]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
        pSVar7 = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_8),CASE_1);
        /* ST_CALLSITE[004A404F]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
        STBoatC::CmdToObj(pSVar7,CASE_3,&local_10);
        uVar10 = uVar10 + 1;
        pDVar8 = local_28;
      } while ((int)uVar10 < (int)dVar1);
    }
    if (local_20 != nullptr) {
      DArrayDestroy(local_20);
    }
    if (local_c != nullptr) {
      DArrayDestroy(local_c);
    }
    if (pDVar8 != nullptr) {
      DArrayDestroy(pDVar8);
    }
    g_currentExceptionFrame = local_88.previous;
    return;
  }
  g_currentExceptionFrame = local_88.previous;
  if (local_EAX_54 == -0x5001fff7) {
    if (local_20 != nullptr) {
      DArrayDestroy(local_20);
    }
    if (local_c != nullptr) {
      DArrayDestroy(local_c);
    }
    if (local_28 != nullptr) {
      DArrayDestroy(local_28);
      return;
    }
  }
  else {

    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x11d8,0,local_EAX_54,
                               "%s","STGroupBoatC::DistributeDock");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_54,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x11d9);
  }
  return;
}

