#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_coll3.cpp
   STColl3C::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00404917|005F5F20; family_names=STColl3C::GetMessage; ret4=12;
   direct_offsets={10:1,14:2,18:4,1c:0} */

int __thiscall STColl3C::GetMessage(STColl3C *this,STMessage *message)

{
  STMessageId SVar1;
  int *piVar2;
  code *pcVar3;
  short sVar4;
  AnonReceiver_00417FF0 *this_00;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  STWorldObject *pSVar9;
  InternalExceptionFrame local_60;
  byte *local_1c;
  AnonShape_0060EA30_DCEB68AD *local_18;
  short local_14 [2];
  short local_10 [2];
  short local_c [2];
  AnonReceiver_00417FF0 *local_8;

  local_8 = (AnonReceiver_00417FF0 *)this;
  iVar5 = STSprGameObjC::GetMessage((STSprGameObjC *)this,message);
  if (iVar5 == 0xffff) {
    return 0xffff;
  }
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  iVar5 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
  this_00 = local_8;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\nick\\to_coll3.cpp",0xe8,0,iVar5,"%s",
                               "STColl3C::GetMessage");
    if (iVar6 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\nick\\to_coll3.cpp",0xea);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar1 = message->id;
  if (MESS_SHARED_010F < SVar1) {
    switch(SVar1) {
    case MESS_TORPHIT:
      goto switchD_005f6301_caseD_110;
    default:
      g_currentExceptionFrame = local_60.previous;
      return 0;
    case MESS_STOCTOPUSC_0112:
      thunk_FUN_004ad5e0((int)&local_8->field_0x1d5);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    case MESS_STSPRGAMEOBJC_0113:
      (*(code *)**(undefined4 **)&local_8->field_0x1d5)();
      g_currentExceptionFrame = local_60.previous;
      return 0;
    case MESS_HITKILL:
      thunk_FUN_004ad430((int)&local_8->field_0x1d5);
      this_00->field_0x2bb = 0;
      thunk_FUN_0041c5a0((AnonShape_0041C5A0_167218F4 *)this_00);
      thunk_FUN_005f66b0(this_00);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
  }
  if (SVar1 == MESS_SHARED_010F) {
    local_1c = thunk_FUN_005f66f0(local_8,(uint *)&local_18);
    STPlaySystemC::SaveObjData(PTR_00802a38,*(undefined4 *)&this_00->field_0x18,local_1c,local_18);
    FreeAndNull(&local_1c);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (MESS_SHARED_0003 < SVar1) {
    if (SVar1 != MESS_SHARED_0108) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    thunk_FUN_005fa0b0((int)local_8);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (SVar1 == MESS_SHARED_0003) {
    if (DAT_008117a4 != (void *)0x0) {
      thunk_FUN_005f9450((AnonShape_005F9450_64149E40 *)local_8);
      thunk_FUN_0062e610(DAT_008117a4,*(int *)&this_00->field_0x235,*(int **)&this_00->field_0x18);
    }
    thunk_FUN_005fa070(this_00);
    thunk_FUN_004ad310((STT3DSprC *)&this_00->field_0x1d5);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (SVar1 == MESS_ID_NONE) {
    thunk_FUN_005f6f60((int *)local_8);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this_00 + 0xd8))();
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (SVar1 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  puVar7 = (message->arg0).ptr;
  if (puVar7[3] != 2) {
    puVar8 = (undefined4 *)&local_8->field_0x231;
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)&local_8->field_0x245;
    sVar4 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar4) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar4) -
                          (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
    }
    iVar6 = *(int *)&local_8->field_0x249;
    *(int *)&local_8->field_0x25d = iVar5;
    sVar4 = (short)(iVar6 >> 0x1f);
    if (iVar6 < 0) {
      iVar5 = (short)(((short)(iVar6 / 0xc9) + sVar4) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar6 / 0xc9) + sVar4) -
                          (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
    }
    iVar6 = *(int *)&local_8->field_0x24d;
    *(int *)&local_8->field_0x261 = iVar5;
    sVar4 = (short)(iVar6 >> 0x1f);
    if (iVar6 < 0) {
      iVar5 = (short)(((short)(iVar6 / 200) + sVar4) - (short)((longlong)iVar6 * 0x51eb851f >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar6 / 200) + sVar4) -
                          (short)((longlong)iVar6 * 0x51eb851f >> 0x3f));
    }
    *(int *)&local_8->field_0x265 = iVar5;
    thunk_FUN_005fa8b0(local_8,(int *)&local_8->field_0x27d,(int *)&local_8->field_0x281,
                       (int *)&local_8->field_0x285);
    *(undefined4 *)&this_00->field_0x269 = 600;
    *(undefined4 *)&this_00->field_0x2dd = 1;
    *(uint *)&this_00->field_0x2e1 = PTR_00802a38->field_00E4 + *(int *)&this_00->field_0x259;
    if (DAT_008117a4 != (void *)0x0) {
      thunk_FUN_0062e550(DAT_008117a4,*(int *)&this_00->field_0x235,*(int *)&this_00->field_0x18,
                         *(int *)&this_00->field_0x255);
    }
    this_00->field_0x2e5 = 1;
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  iVar5 = STAllPlayersC::thunk_FUN_005f68b0((STAllPlayersC *)local_8,puVar7);
  if (iVar5 == 0) {
    thunk_FUN_005f66b0(this_00);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  STFishC::sub_004162B0((STFishC *)this_00,local_14,local_10,local_c);
  iVar5 = thunk_FUN_004961b0(local_14[0],local_10[0],local_c[0]);
  if (iVar5 != 0) {
    if (((((local_14[0] < 0) || (g_worldGrid.sizeX <= local_14[0])) || (local_10[0] < 0)) ||
        ((g_worldGrid.sizeY <= local_10[0] || (local_c[0] < 0)))) ||
       (g_worldGrid.sizeZ <= local_c[0])) {
      pSVar9 = (STWorldObject *)0x0;
    }
    else {
      pSVar9 = g_worldGrid.cells
               [(int)g_worldGrid.planeStride * (int)local_c[0] +
                (int)g_worldGrid.sizeX * (int)local_10[0] + (int)local_14[0]].objects[0];
    }
    if ((pSVar9 == (STWorldObject *)0x0) &&
       ((*(int *)&this_00->field_0x2dd == 1 ||
        (iVar5 = DumpClassC::WritePtr
                           (local_14[0],local_10[0],local_c[0],0,
                            (AnonShape_00495EC0_95A268C6 *)this_00), iVar5 == 0))))
    goto LAB_005f61e2;
  }
  thunk_FUN_005f66b0(this_00);
LAB_005f61e2:
  if (this_00->field_0x2b6 == '\0') {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  thunk_FUN_005f6ab0();
  g_currentExceptionFrame = local_60.previous;
  return 0;
switchD_005f6301_caseD_110:
  piVar2 = (message->arg0).ptr;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar5 = (**(code **)(*(int *)local_8 + 0x78))();
  if (iVar5 < 1) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  iVar5 = thunk_FUN_005f6f20(this_00,*piVar2);
  if (iVar5 == 0) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  LoadImagSpr((STColl3C *)this_00,0);
  *(uint *)&this_00->field_0x275 = (uint)*(byte *)(piVar2 + 2);
  *(uint *)&this_00->field_0x279 = (uint)*(ushort *)((int)piVar2 + 0xe);
  thunk_FUN_005fa070(this_00);
  *(undefined4 *)&this_00->field_0x2dd = 0xd;
  g_currentExceptionFrame = local_60.previous;
  return 0;
}

