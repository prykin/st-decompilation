#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_fish.cpp
   STFishC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00402838|0057BF60; family_names=STFishC::GetMessage; ret4=11;
   direct_offsets={10:2,14:3,18:5,1c:0} */

int __thiscall STFishC::GetMessage(STFishC *this,STMessage *message)

{
  undefined1 *puVar1;
  STMessageId SVar2;
  code *pcVar3;
  STSprGameObjC *this_00;
  int iVar4;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  uint uVar6;
  short sVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_EDI;
  undefined4 *puVar10;
  AnonShape_0057BF60_C1393638 *pAVar11;
  byte *pbVar12;
  InternalExceptionFrame local_80;
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  STSprGameObjC *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  AnonShape_0057BF60_C1393638 *local_c;
  uint local_8;

  if ((this->field_023B == 6) && (message->id != MESS_SHARED_0003)) {
    return 0;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_1c = (STSprGameObjC *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
  this_00 = local_1c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Igor\\To_fish.cpp",0x663,0,iVar4,"%s",
                               "STFishC::GetMessage");
    if (iVar5 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\Igor\\To_fish.cpp",0x664);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  STSprGameObjC::GetMessage(local_1c,message);
  SVar2 = message->id;
  if (MESS_TORPHIT < SVar2) {
    switch(SVar2) {
    case MESS_STOCTOPUSC_0112:
      thunk_FUN_004ad5e0((int)&this_00->field_01D5);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    case MESS_STSPRGAMEOBJC_0113:
      (**(code **)this_00->field_01D5)();
      g_currentExceptionFrame = local_80.previous;
      return 0;
    default:
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case MESS_STOCTOPUSC_0127:
      goto switchD_0057c669_caseD_127;
    case MESS_HITKILL:
      if (*(int *)&this_00->field_0x23b == 3) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      uVar6 = thunk_FUN_004ad650((int)&this_00->field_01D5);
      FUN_006eab60((void *)this_00->field_0211,uVar6);
      sub_0057BF20((STFishC *)this_00);
      *(undefined4 *)&this_00->field_0x23b = 3;
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
  }
  if (SVar2 == MESS_TORPHIT) {
    if (*(int *)&this_00->field_0x23b == 0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    puVar8 = &this_00->field_01D5;
    *(undefined4 *)&this_00->field_0x23b = 5;
    STT3DSprC::StopShow((STT3DSprC *)puVar8,0xe);
    thunk_FUN_004ad5e0((int)puVar8);
    STT3DSprC::LoadSequence((STT3DSprC *)puVar8,8,DAT_00806774,"explsna",0x1d);
    STT3DSprC::StartShow((STT3DSprC *)puVar8,8,g_playSystem_00802A38->field_00E4);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (MESS_SHARED_0003 < SVar2) {
    if (SVar2 != MESS_SHARED_010F) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    local_14 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_8);
    local_18 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
    local_c = (AnonShape_0057BF60_C1393638 *)
              Library::DKW::LIB::FUN_006aac70(local_10 + 0x46 + local_8);
    if (local_14 == (byte *)0x0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (local_c == (AnonShape_0057BF60_C1393638 *)0x0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    puVar8 = (undefined4 *)&this_00->field_0x243;
    pAVar11 = local_c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pAVar11 = *puVar8;
      puVar8 = puVar8 + 1;
      pAVar11 = (AnonShape_0057BF60_C1393638 *)&pAVar11->field_0x4;
    }
    *(undefined4 *)&local_c->field_0xc = 2;
    local_c->field_0028 = this_00->field_0231;
    local_c->field_002C = *(undefined4 *)&this_00->field_0x23b;
    local_c->field_0036 = *(undefined4 *)((int)&this_00->field_023E + 1);
    *(undefined2 *)&local_c->field_0x30 = *(undefined2 *)&this_00->field_0x235;
    *(undefined2 *)&local_c->field_0x32 = *(undefined2 *)&this_00->field_0x237;
    *(undefined2 *)&local_c->field_0x34 = *(undefined2 *)&this_00->field_0x239;
    *(undefined4 *)&local_c->field_0x3a = 0;
    local_c->field_003E = local_8;
    pbVar9 = local_14;
    pbVar12 = &local_c->field_0x42;
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar12 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      pbVar12 = pbVar12 + 4;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar12 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar12 = pbVar12 + 1;
    }
    *(uint *)(&local_c->field_0x42 + local_8) = local_10;
    pbVar9 = local_18;
    pbVar12 = &local_c[1].field_0x2 + local_8;
    for (uVar6 = local_10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar12 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      pbVar12 = pbVar12 + 4;
    }
    for (uVar6 = local_10 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar12 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar12 = pbVar12 + 1;
    }
    STPlaySystemC::SaveObjData
              (g_playSystem_00802A38,this_00->field_0018,(byte *)local_c,
               (AnonShape_0060EA30_DCEB68AD *)(local_10 + 0x46 + local_8));
    FreeAndNull(&local_14);
    FreeAndNull(&local_18);
    FreeAndNull(&local_c);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (SVar2 == MESS_SHARED_0003) {
    sub_004167A0(this_00);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    thunk_FUN_00495ff0(*(short *)&this_00->field_0x5b,*(short *)&this_00->field_0x5d,
                       *(short *)&this_00->field_0x5f,
                       CONCAT31((int3)((uint)extraout_ECX >> 8),this_00->field_0x8e),
                       (AnonShape_00495FF0_59081BDD *)this_00);
    thunk_FUN_0058d080(this_00->field_0018);
    thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (SVar2 == MESS_ID_NONE) {
    if (*(int *)&this_00->field_0x23b == 3) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    LifeFish((STFishC *)this_00,unaff_EDI);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (SVar2 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  local_20 = (message->arg0).ptr;
  if (1 < (uint)local_20[3]) {
    if (local_20[3] == 2) {
      puVar8 = local_20;
      puVar10 = (undefined4 *)&this_00->field_0x243;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_8 = *(uint *)((int)local_20 + 0x3e);
      STAllPlayersC::RestoreGObjData
                ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x46 + (int)local_20));
      puVar8 = local_20;
      *(undefined4 *)&this_00->field_0x23b = local_20[0xb];
      this_00->field_0231 = local_20[10];
      *(undefined4 *)((int)&this_00->field_023E + 1) = *(undefined4 *)((int)local_20 + 0x36);
      *(undefined2 *)&this_00->field_0x235 = *(undefined2 *)(local_20 + 0xc);
      *(undefined2 *)&this_00->field_0x237 = *(undefined2 *)((int)local_20 + 0x32);
      *(undefined2 *)&this_00->field_0x239 = *(undefined2 *)(local_20 + 0xd);
      local_3c = (void *)Library::DKW::LIB::FUN_006aac70(0x44);
      if (local_3c != (void *)0x0) {
        iVar4 = 0;
        do {
          if (iVar4 == 8) {
            *(int **)((int)local_3c + 0x20) = DAT_00806774;
          }
          else {
            *(int **)((int)local_3c + iVar4 * 4) = DAT_0080676c;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x11);
        local_38 = 0;
        local_34 = 0;
        local_30 = DAT_008073cc;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        STT3DSprC::RestoreSpr
                  ((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,
                   (AnonShape_004AD790_77673787 *)((int)puVar8 + 0x42));
        FreeAndNull(&local_3c);
        DumpClassC::WritePtr
                  (*(short *)&this_00->field_0x5b,*(short *)&this_00->field_0x5d,
                   *(short *)&this_00->field_0x5f,1,(AnonShape_00495EC0_95A268C6 *)this_00);
        STT3DSprC::SetCurFase((STT3DSprC *)&this_00->field_01D5,'\x0e',0);
      }
    }
    goto cf_common_exit_0057C3E4;
  }
  *(undefined4 *)&this_00->field_0x23b = 6;
  this_00->field_0231 = 0;
  *(undefined4 *)((int)&this_00->field_023E + 1) = 0;
  puVar8 = (message->arg0).ptr;
  puVar10 = (undefined4 *)&this_00->field_0x243;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  thunk_FUN_0057cb30((AnonShape_0057CB30_71092CE7 *)this_00);
  thunk_FUN_00417a00(this_00,1);
  *(undefined2 *)&this_00->field_0x5f = 0xffff;
  *(undefined2 *)&this_00->field_0x5d = 0xffff;
  *(undefined2 *)&this_00->field_0x5b = 0xffff;
  if ((((((*(int *)&this_00->field_0x257 < 0) ||
         ((int)g_worldGrid.sizeX <= *(int *)&this_00->field_0x257)) ||
        (iVar4 = *(int *)((int)&this_00->field_0259 + 2), iVar4 < 0)) ||
       ((g_worldGrid.sizeY <= iVar4 || (iVar4 = *(int *)&this_00->field_0x25f, iVar4 < 0)))) ||
      ((g_worldGrid.sizeZ <= iVar4 ||
       ((iVar4 = thunk_FUN_00417a20(this_00,*(short *)&this_00->field_0x257,
                                    *(undefined2 *)((int)&this_00->field_0259 + 2),(short)iVar4,1),
        iVar4 != 0 || (iVar4 = thunk_FUN_00417e70(this_00,8), iVar4 != 0)))))) ||
     (iVar4 = thunk_FUN_00417ee0(this_00,*(short *)&this_00->field_0x263), iVar4 != 0)) {
    sub_0057BF20((STFishC *)this_00);
    *(undefined4 *)&this_00->field_0x23b = 3;
    goto cf_common_exit_0057C3E4;
  }
  switch(*(undefined4 *)&this_00->field_0x267) {
  case 0xe7:
    puVar8 = &this_00->field_01D5;
    iVar4 = STT3DSprC::LoadSequence((STT3DSprC *)puVar8,0xe,DAT_0080676c,"fish1",0x1d);
    if (iVar4 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\To_fish.cpp",0xf6);
    }
    thunk_FUN_004ac610(puVar8,'\x0e');
    STT3DSprC::SetCurFase((STT3DSprC *)puVar8,'\x0e',0);
    goto switchD_0057c210_default;
  case 0xe8:
    iVar4 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,"fish_b",0x1d);
    if (iVar4 != 0) {
      iVar4 = 0xea;
cf_error_exit_0057C332:
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\To_fish.cpp",iVar4);
    }
    break;
  case 0xe9:
    iVar4 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,"fish_gr",0x1d);
    if (iVar4 != 0) {
      iVar4 = 0xf0;
      goto cf_error_exit_0057C332;
    }
    break;
  case 0xea:
    iVar4 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,&DAT_007cb008,0x1d);
    if (iVar4 != 0) {
      iVar4 = 0xfd;
      goto cf_error_exit_0057C332;
    }
    break;
  case 0xeb:
    iVar4 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,&DAT_007cb010,0x1d);
    if (iVar4 != 0) {
      iVar4 = 0x104;
      goto cf_error_exit_0057C332;
    }
    break;
  default:
    goto switchD_0057c210_default;
  }
  thunk_FUN_004ac610(&this_00->field_01D5,'\x0e');
switchD_0057c210_default:
  STT3DSprC::StartShow((STT3DSprC *)&this_00->field_01D5,0xe,g_playSystem_00802A38->field_00E4);
  STT3DSprC::sub_004AD3C0
            ((STT3DSprC *)&this_00->field_01D5,
             (float)*(int *)&this_00->field_0x257 * _DAT_007904f8 + _DAT_007904f4,
             (float)*(int *)((int)&this_00->field_0259 + 2) * _DAT_007904f8 + _DAT_007904f4,
             (float)*(int *)&this_00->field_0x25f * _DAT_00790504 + _DAT_00790500);
  *(undefined2 *)&this_00->field_0x235 = *(undefined2 *)&this_00->field_0x47;
  *(undefined2 *)&this_00->field_0x237 = *(undefined2 *)&this_00->field_0x49;
  *(undefined2 *)&this_00->field_0x239 = *(undefined2 *)&this_00->field_0x4b;
  *(undefined4 *)&this_00->field_0x23b = 0;
cf_common_exit_0057C3E4:
  if ((*(int *)&this_00->field_0x23b != 6) && (iVar4 = thunk_FUN_0058cfe0((int)this_00), iVar4 == 0)
     ) {
    sub_0057BF20((STFishC *)this_00);
    *(undefined4 *)&this_00->field_0x23b = 3;
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
switchD_0057c669_caseD_127:
  puVar1 = &this_00->field_0x235;
  local_20 = (undefined4 *)(int)(short)((message->arg1).words.low * 0xc9 + 100);
  iVar4 = thunk_FUN_0058d160(0,0,g_worldGrid.sizeX + -1,g_worldGrid.sizeY + -1,(int)this_00,
                             (int)(short)((message->arg0).words.low * 0xc9 + 100),(int)local_20,
                             (int)(short)((message->arg0).words.high * 0xc9 + 100),
                             (int)(short)((message->arg1).words.high * 0xc9 + 100),
                             (undefined2 *)puVar1,(undefined2 *)puVar1,
                             (short *)&this_00->field_0x239);
  if (iVar4 == 0) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  sVar7 = *(short *)puVar1;
  if (sVar7 < 0) {
    sVar7 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar7 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f);
  }
  *(short *)puVar1 = sVar7;
  sVar7 = *(short *)&this_00->field_0x237;
  if (sVar7 < 0) {
    sVar7 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar7 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f);
  }
  *(short *)&this_00->field_0x237 = sVar7;
  sVar7 = *(short *)&this_00->field_0x239;
  if (sVar7 < 0) {
    sVar7 = ((sVar7 / 200 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar7 = (sVar7 / 200 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f);
  }
  *(short *)&this_00->field_0x239 = sVar7;
  *(undefined4 *)&this_00->field_0x23b = 4;
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

