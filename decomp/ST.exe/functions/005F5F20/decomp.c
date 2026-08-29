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
  int iVar2;
  int *piVar3;
  short sVar5;
  STColl3C *this_00;
  int local_EAX_16;
  int iVar5;
  int local_EAX_456;
  int local_EAX_529;
  dword dVar6;
  int local_EAX_1026;
  int iVar7;
  int iVar8;
  RecoveredRecord_005F68B0_23767193 *pRVar9;
  byte *puVar10;
  STWorldObject *pSVar11;
  InternalExceptionFrame local_60;
  byte *local_1c;
  uint local_18;
  short local_14 [2];
  short local_10 [2];
  short local_c [2];
  STColl3C *local_8;

  local_8 = this;
  /* ST_CALLSITE[005F5F30]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  local_EAX_16 = STSprGameObjC::GetMessage((STSprGameObjC *)this,message);
  if (local_EAX_16 == 0xffff) {
    return 0xffff;
  }
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;

  iVar5 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
  this_00 = local_8;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_60.previous;

    iVar7 = ReportDebugMessage("E:\\__titans\\nick\\to_coll3.cpp",0xe8,0,iVar5,"%s",
                               "STColl3C::GetMessage");
    if (iVar7 == 0) {
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
      thunk_FUN_004ad5e0((STT3DSprC *)&local_8->vtable_at_1d5);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    case MESS_STSPRGAMEOBJC_0113:
      /* ST_CALLSITE[005F63DC]: CALL dword ptr [EAX] */
      (*local_8->vtable_at_1d5->vfunc_00)((STColl3C *)&local_8->vtable_at_1d5);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    case MESS_HITKILL:
      /* ST_CALLSITE[005F637D]: CALL 0x00403d0f; direct=00403D0F STT3DSprC::sub_004AD430 */
      STT3DSprC::sub_004AD430((STT3DSprC *)&local_8->vtable_at_1d5);
      this_00->field_02BB = 0;
      /* ST_CALLSITE[005F638B]: CALL 0x0040464c; direct=0040464C sub_0041C5A0 */
      sub_0041C5A0(this_00);
      /* ST_CALLSITE[005F6392]: CALL 0x00401b04; direct=00401B04 STColl3C::sub_005F66B0 */
      sub_005F66B0(this_00);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
  }
  if (SVar1 == MESS_SHARED_010F) {
    /* ST_CALLSITE[005F62B2]: CALL 0x00403e59; direct=00403E59 STColl3C::sub_005F66F0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
    local_1c = sub_005F66F0(local_8,&local_18);
    /* ST_CALLSITE[005F62C9]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
    STPlaySystemC::SaveObjData(g_playSystem_00802A38,this_00->field_0018,local_1c,local_18);
    FreeAndNull(&local_1c);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (MESS_SHARED_0003 < SVar1) {
    if (SVar1 != MESS_SHARED_0108) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    thunk_FUN_005fa0b0(local_8);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (SVar1 == MESS_SHARED_0003) {
    if (g_manRub3_008117A4 != nullptr) {
      /* ST_CALLSITE[005F6241]: CALL 0x00404ae3; direct=00404AE3 STColl3C::sub_005F9450 */
      sub_005F9450(local_8);

      thunk_FUN_0062e610(g_manRub3_008117A4,this_00->field_0235,this_00->field_0018);
    }
    /* ST_CALLSITE[005F625E]: CALL 0x00403c1a; direct=00403C1A STColl3C::sub_005FA070 */
    sub_005FA070(this_00);
    thunk_FUN_004ad310((STT3DSprC *)&this_00->vtable_at_1d5);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (SVar1 == MESS_ID_NONE) {
    /* ST_CALLSITE[005F6210]: CALL 0x00401785; direct=00401785 STColl3C::sub_005F6F60 */
    sub_005F6F60(local_8);
    /* ST_CALLSITE[005F6219]: CALL dword ptr [EDX + 0xd8] */
    this_00->vfunc_D8();
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (SVar1 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  pRVar9 = (message->arg0).ptr;
  if (*(int *)&pRVar9->field_0xc != 2) {
    puVar10 = (byte *)&local_8->field_0x231;
    memmove(puVar10, pRVar9, 0x2c); /* compiler REP MOVS byte copy */
    iVar8 = local_8->field_0245;
    iVar8 = STBiasedDiv16(iVar8, 0xc9); /* exact signed 16-bit grid-index division */
    iVar2 = local_8->field_0249;
    local_8->field_025D = iVar8;
    iVar8 = STBiasedDiv16(iVar2, 0xc9); /* exact signed 16-bit grid-index division */
    iVar2 = local_8->field_024D;
    local_8->field_0261 = iVar8;
    iVar8 = STBiasedDiv16(iVar2, 200); /* exact signed 16-bit grid-index division */
    local_8->field_0265 = iVar8;
    /* ST_CALLSITE[005F6073]: CALL 0x0040163b; direct=0040163B STColl3C::sub_005FA8B0 */
    sub_005FA8B0(local_8,&local_8->field_027D,&local_8->field_0281,&local_8->field_0285);
    this_00->field_0269 = 600;
    this_00->field_02DD = CASE_1;
    this_00->field_02E1 = g_playSystem_00802A38->field_00E4 + this_00->field_0259;
    if (g_manRub3_008117A4 != nullptr) {

      thunk_FUN_0062e550(g_manRub3_008117A4,this_00->field_0235,(int)this_00->field_0018,
                         this_00->field_0255);
    }
    this_00->field_02E5 = 1;
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  /* ST_CALLSITE[005F60E8]: CALL 0x00402dfb; direct=00402DFB STColl3C::sub_005F68B0 */
  local_EAX_456 = sub_005F68B0(local_8,pRVar9);
  if (local_EAX_456 == 0) {
    /* ST_CALLSITE[005F60F3]: CALL 0x00401b04; direct=00401B04 STColl3C::sub_005F66B0 */
    sub_005F66B0(this_00);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  /* ST_CALLSITE[005F611A]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
  STFishC::sub_004162B0((STFishC *)this_00,local_14,local_10,local_c);

  local_EAX_529 = thunk_FUN_004961b0(local_14[0],local_10[0],local_c[0]);
  if (local_EAX_529 != 0) {
    if (((((local_14[0] < 0) || (g_worldGrid.sizeX <= local_14[0])) || (local_10[0] < 0)) ||
        ((g_worldGrid.sizeY <= local_10[0] || (local_c[0] < 0)))) ||
       (g_worldGrid.sizeZ <= local_c[0])) {
      pSVar11 = nullptr;
    }
    else {
      pSVar11 = STGridAt3D(g_worldGrid, local_14[0], local_10[0], local_c[0]).objects[0];
    }
    if ((pSVar11 == nullptr) &&
       ((this_00->field_02DD == CASE_1 ||
        /* ST_CALLSITE[005F61CC]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
        (iVar8 = DumpClassC::WritePtr
                           (local_14[0],local_10[0],local_c[0],0,
                            (RecoveredRecord_DumpClassC_00495EC0 *)this_00), iVar8 == 0))))
    goto LAB_005f61e2;
  }
  /* ST_CALLSITE[005F61DD]: CALL 0x00401b04; direct=00401B04 STColl3C::sub_005F66B0 */
  sub_005F66B0(this_00);
LAB_005f61e2:
  if (this_00->field_02B6 == '\0') {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  thunk_FUN_005f6ab0();
  g_currentExceptionFrame = local_60.previous;
  return 0;
switchD_005f6301_caseD_110:
  piVar3 = (message->arg0).ptr;
  /* ST_CALLSITE[005F6312]: CALL dword ptr [EAX + 0x78] */
  dVar6 = local_8->sub_005F6EC0();
  if ((int)dVar6 < 1) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  /* ST_CALLSITE[005F6322]: CALL 0x004059bb; direct=004059BB STColl3C::sub_005F6F20 */
  local_EAX_1026 = sub_005F6F20(this_00,*piVar3);
  if (local_EAX_1026 == 0) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  /* ST_CALLSITE[005F6333]: CALL 0x00401d8e; direct=00401D8E STColl3C::LoadImagSpr */
  LoadImagSpr(this_00,0);
  this_00->field_0275 = (uint)((byte *)piVar3)[2];
  this_00->field_0279 = (uint)STField<ushort>(piVar3,0xe);
  /* ST_CALLSITE[005F6351]: CALL 0x00403c1a; direct=00403C1A STColl3C::sub_005FA070 */
  sub_005FA070(this_00);
  this_00->field_02DD = CASE_D;
  g_currentExceptionFrame = local_60.previous;
  return 0;
}

