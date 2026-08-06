#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Rubb.cpp
   STRubbishC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0040231F|0062E740; family_names=STRubbishC::GetMessage; ret4=8;
   direct_offsets={10:1,14:3,18:4,1c:2} */

int __thiscall STRubbishC::GetMessage(STRubbishC *this,STMessage *message)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STMessageId SVar4;
  STGameObjC *this_00;
  int local_EAX_35;
  int iVar6;
  int iVar7;
  int local_EAX_339;
  STWorldObject *pSVar8;
  int iVar10;
  int local_EAX_686;
  int local_EAX_709;
  int local_EAX_880;
  int local_EAX_1038;
  int iVar9;
  int iVar11;
  AnonShape_0062FA80_0B91B2B9 *pAVar12;
  InternalExceptionFrame local_58;
  STGameObjC *local_14;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
  AnonShape_0062E740_213F21A8 *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = (STGameObjC *)this;
  local_EAX_35 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\nick\\to_Rubb.cpp",0xa6,0,local_EAX_35,
                               "%s","STRubbishC::GetMessage");
    if (iVar9 == 0) {
      RaiseInternalException(local_EAX_35,0,"E:\\__titans\\nick\\to_Rubb.cpp",0xa8);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar6 = STGameObjC::GetMessage(local_14,message);
  if (iVar6 == 0xffff) {
    return 0xffff;
  }
  SVar4 = message->id;
  if (MESS_SHARED_0003 < SVar4) {
    if (SVar4 == MESS_SHARED_0108) {
      local_EAX_1038 = thunk_FUN_004ab050();
      thunk_FUN_00630000(this_00,local_EAX_1038);
    }
    else if (SVar4 == MESS_SHARED_010F) {
      local_10 = (byte *)thunk_FUN_0062f940(this_00,(uint *)&local_c);
      STPlaySystemC::SaveObjData(g_playSystem_00802A38,(int *)this_00->field_0018,local_10,local_c);
      FreeAndNull(&local_10);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (SVar4 == MESS_SHARED_0003) {
    thunk_FUN_0062f7a0((AnonShape_0062F7A0_700302F7 *)this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (SVar4 == MESS_ID_NONE) {
    if (*(int *)&this_00->field_0x1fa == 1) {
      if ((this_00->field_0x1f9 == '\0') &&
         (local_EAX_880 =
               sub_0062FEA0((STRubbishC *)this_00,*(int *)&this_00->field_0x1d5,
                            *(int *)&this_00->field_0x1d9), local_EAX_880 != 0)) {
        thunk_FUN_0062fe00((STJellyGunC *)this_00);
        this_00->field_0x1f9 = 1;
      }
      thunk_FUN_0062f150((RecoveredRecord_STRubbishC_0062F150 *)this_00);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (*(int *)&this_00->field_0x1fa != 2) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    sub_0062F900((STRubbishC *)this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (SVar4 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  pAVar12 = (message->arg0).ptr;
  local_8 = (AnonShape_0062E740_213F21A8 *)pAVar12;
  if (*(int *)&pAVar12->field_0xc == 2) {
    thunk_FUN_0062fa80(this_00,pAVar12);
    if (this_00->field_0x1f9 == '\0') {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    thunk_FUN_0062fe00((STJellyGunC *)this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (((*(int *)&this_00->field_0x1d5 < 0) || (*(int *)&this_00->field_0x1d9 < 0)) ||
     (*(int *)&this_00->field_0x1dd < 0)) {
    iVar7 = pAVar12->field_0014;
    sVar1 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar1) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar1) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    *(int *)&this_00->field_0x1d5 = iVar7;
    iVar7 = pAVar12->field_0018;
    sVar1 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar1) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar1) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    *(int *)&this_00->field_0x1d9 = iVar7;
    iVar7 = pAVar12->field_001C;
    if (iVar7 < 0) {
      iVar7 = (short)(iVar7 / 200) + -1;
    }
    else {
      iVar7 = (int)(short)(iVar7 / 200);
    }
    *(int *)&this_00->field_0x1dd = iVar7;
    local_EAX_339 =
         thunk_FUN_004961b0(*(short *)&this_00->field_0x1d5,*(short *)&this_00->field_0x1d9,
                            (short)iVar7);
    if (local_EAX_339 != 0) {
      sVar1 = *(short *)&this_00->field_0x1d5;
      sVar2 = *(short *)&this_00->field_0x1dd;
      sVar3 = *(short *)&this_00->field_0x1d9;
      if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
          ((sVar3 < 0 || ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))))) ||
         (g_worldGrid.sizeZ <= sVar2)) {
        pSVar8 = nullptr;
      }
      else {
        pSVar8 = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[1];
        pAVar12 = (AnonShape_0062FA80_0B91B2B9 *)local_8;
      }
      if ((pSVar8 == nullptr) &&
         (iVar7 = DumpClassC::WritePtr
                            ((short)*(undefined4 *)&this_00->field_0x1d5,
                             (short)*(undefined4 *)&this_00->field_0x1d9,
                             (short)*(undefined4 *)&this_00->field_0x1dd,1,
                             (RecoveredRecord_DumpClassC_00495EC0 *)this_00),
         pAVar12 = (AnonShape_0062FA80_0B91B2B9 *)local_8, iVar7 == 0)) {
        iVar7 = local_8->field_0014;
        sVar1 = (short)(iVar7 >> 0x1f);
        if (iVar7 < 0) {
          iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar1) -
                         (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar1) -
                              (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
        }
        *(int *)&this_00->field_0x1d5 = iVar7;
        iVar11 = local_8->field_0018;
        sVar1 = (short)(iVar11 >> 0x1f);
        if (iVar11 < 0) {
          iVar11 = (short)(((short)(iVar11 / 0xc9) + sVar1) -
                          (short)((longlong)iVar11 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar11 = (int)(short)(((short)(iVar11 / 0xc9) + sVar1) -
                               (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
        }
        *(int *)&this_00->field_0x1d9 = iVar11;
        iVar10 = local_8->field_001C;
        sVar1 = (short)(iVar10 >> 0x1f);
        if (iVar10 < 0) {
          iVar10 = (short)(((short)(iVar10 / 200) + sVar1) -
                          (short)((longlong)iVar10 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          iVar10 = (int)(short)(((short)(iVar10 / 200) + sVar1) -
                               (short)((longlong)iVar10 * 0x51eb851f >> 0x3f));
        }
        *(int *)&this_00->field_0x1dd = iVar10;
        local_EAX_686 = sub_0062FEA0((STRubbishC *)this_00,iVar7,iVar11);
        this_00->field_0x1f9 = (char)local_EAX_686;
        goto LAB_0062ea02;
      }
    }
    sub_0062F900((STRubbishC *)this_00);
  }
LAB_0062ea02:
  local_EAX_709 = sub_0062FCA0((STRubbishC *)this_00,(AnonShape_0062FCA0_22A9EE35 *)pAVar12);
  if (local_EAX_709 == 0xffff) {
    return 0xffff;
  }
  *(undefined4 *)&this_00->field_0x1fa = 1;
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

