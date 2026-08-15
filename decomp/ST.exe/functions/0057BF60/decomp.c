#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_fish.cpp
   STFishC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00402838|0057BF60; family_names=STFishC::GetMessage; ret4=11;
   direct_offsets={10:2,14:3,18:5,1c:0}

   [STSwitchEnumApplier] Switch target field_0267 uses
   /SubmarineTitans/Recovered/Enums/STFishC_field_0267State. Cases:
   CASE_E7=231;CASE_E8=232;CASE_E9=233;CASE_EA=234;CASE_EB=235

   [STSwitchEnumApplier] Switch target field_023B uses
   /SubmarineTitans/Recovered/Enums/STFishC_field_023BState. Cases:
   CASE_0=0;CASE_1=1;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

int __thiscall STFishC::GetMessage(STFishC *this,STMessage *message)

{
  short *psVar1;
  STMessageId SVar2;
  STFishC *this_00;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  byte *puVar9;
  byte *pbVar10;
  byte *puVar11;
  AnonShape_0057BF60_C1393638 *pAVar12;
  byte *pbVar13;
  InternalExceptionFrame local_80;
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ushort *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  STFishC *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  AnonShape_0057BF60_C1393638 *local_c;
  uint local_8;

  if ((this->field_023B == CASE_6) && (message->id != MESS_SHARED_0003)) {
    return 0;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_1c = this;
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
  STSprGameObjC::GetMessage((STSprGameObjC *)local_1c,message);
  SVar2 = message->id;
  if (MESS_TORPHIT < SVar2) {
    switch(SVar2) {
    case MESS_STOCTOPUSC_0112:
      thunk_FUN_004ad5e0((STT3DSprC *)&this_00->field_01D5);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
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
      if (this_00->field_023B == CASE_3) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      uVar7 = thunk_FUN_004ad650((STT3DSprC *)&this_00->field_01D5);
      Library::Ourlib::ST3DSMAP::SprHide((void *)this_00->field_0211,uVar7);
      sub_0057BF20(this_00);
      this_00->field_023B = CASE_3;
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
  }
  if (SVar2 == MESS_TORPHIT) {
    if (this_00->field_023B == CASE_0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    puVar9 = (byte *)(&this_00->field_01D5);
    this_00->field_023B = CASE_5;
    STT3DSprC::StopShow((STT3DSprC *)puVar9,0xe);
    thunk_FUN_004ad5e0((STT3DSprC *)puVar9);
    STT3DSprC::LoadSequence((STT3DSprC *)puVar9,8,PTR_00806774,"explsna",CASE_1D);
    STT3DSprC::StartShow((STT3DSprC *)puVar9,8,g_playSystem_00802A38->field_00E4);
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
    local_c = Library::DKW::LIB::MemAlloc(local_10 + 0x46 + local_8);
    if (local_14 == nullptr) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (local_c == nullptr) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    puVar9 = (byte *)&this_00->field_0x243;
    pAVar12 = local_c;
    memmove(pAVar12, puVar9, 0x28); /* compiler REP MOVS byte copy */
    *(undefined4 *)&local_c->field_0xc = 2;
    local_c->field_0028 = this_00->field_0231;
    local_c->field_002C = this_00->field_023B;
    local_c->field_0036 = this_00->field_023F;
    *(short *)&local_c->field_0x30 = this_00->field_0235;
    *(short *)&local_c->field_0x32 = this_00->field_0237;
    *(short *)&local_c->field_0x34 = this_00->field_0239;
    *(undefined4 *)&local_c->field_0x3a = 0;
    local_c->field_003E = local_8;
    pbVar10 = local_14;
    pbVar13 = &local_c->field_0x42;
    memmove(pbVar13, pbVar10, local_8); /* compiler REP MOVS byte copy */
    uVar7 = 0;
    *(uint *)(&local_c->field_0x42 + local_8) = local_10;
    pbVar10 = local_18;
    pbVar13 = &local_c[1].field_0x2 + local_8;
    memmove(pbVar13, pbVar10, local_10); /* compiler REP MOVS byte copy */
    STPlaySystemC::SaveObjData
              (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_c,
               local_10 + 0x46 + local_8);
    FreeAndNull(&local_14);
    FreeAndNull(&local_18);
    FreeAndNull(&local_c);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (SVar2 == MESS_SHARED_0003) {
    sub_004167A0(this_00);
    thunk_FUN_00495ff0(this_00->field_005B,this_00->field_005D,this_00->field_005F,
                       this_00->field_008E,(AnonShape_00495FF0_59081BDD *)this_00);
    thunk_FUN_0058d080(this_00->field_0018);
    thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (SVar2 == MESS_ID_NONE) {
    if (this_00->field_023B == CASE_3) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    LifeFish(this_00);
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
      puVar9 = (byte *)(local_20);
      puVar11 = (byte *)&this_00->field_0x243;
      memmove(puVar11, puVar9, 0x28); /* compiler REP MOVS byte copy */
      local_8 = STField<uint>(local_20,0x3e);
      STAllPlayersC::RestoreGObjData
                ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x46 + (int)local_20));
      puVar9 = (byte *)(local_20);
      this_00->field_023B = local_20[0xb];
      this_00->field_0231 = local_20[10];
      this_00->field_023F = STField<uint>(local_20,0x36);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      this_00->field_0235 = *(short *)(local_20 + 0xc);
      this_00->field_0237 = STField<short>(local_20,0x32);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      this_00->field_0239 = *(short *)(local_20 + 0xd);
      local_3c = Library::DKW::LIB::MemAlloc(0x44);
      if (local_3c != nullptr) {
        iVar6 = 0;
        do {
          if (iVar6 == 8) {
            STField<int *>(local_3c,0x20) = PTR_00806774;
          }
          else {
            *(int **)((int)local_3c + iVar6 * 4) = PTR_0080676c;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x11);
        local_38 = 0;
        local_34 = 0;
        local_30 = PTR_008073cc;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        STT3DSprC::RestoreSpr
                  ((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,
                   (AnonShape_004AD790_77673787 *)((int)puVar9 + 0x42));
        FreeAndNull(&local_3c);
        DumpClassC::WritePtr
                  (this_00->field_005B,this_00->field_005D,this_00->field_005F,1,
                   (RecoveredRecord_DumpClassC_00495EC0 *)this_00);
        STT3DSprC::SetCurFase((STT3DSprC *)&this_00->field_01D5,'\x0e',0);
      }
    }
    goto cf_common_exit_0057C3E4;
  }
  this_00->field_023B = CASE_6;
  this_00->field_0231 = 0;
  this_00->field_023F = 0;
  puVar9 = (byte *)((message->arg0).ptr);
  puVar11 = (byte *)&this_00->field_0x243;
  memmove(puVar11, puVar9, 0x28); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  thunk_FUN_0057cb30((AnonShape_0057CB30_71092CE7 *)this_00);
  thunk_FUN_00417a00(this_00,1);
  this_00->field_005F = 0xffff;
  this_00->field_005D = 0xffff;
  this_00->field_005B = 0xffff;
  if ((((((*(int *)&this_00->field_0x257 < 0) ||
         ((int)g_worldGrid.sizeX <= *(int *)&this_00->field_0x257)) || (this_00->field_025B < 0)) ||
       (((int)g_worldGrid.sizeY <= this_00->field_025B || (iVar6 = this_00->field_025F, iVar6 < 0)))
       ) || ((g_worldGrid.sizeZ <= iVar6 ||
             ((iVar6 = thunk_FUN_00417a20(this_00,*(short *)&this_00->field_0x257,
                                          (short)this_00->field_025B,(short)iVar6,1), iVar6 != 0 ||
              (iVar6 = thunk_FUN_00417e70(this_00,8), iVar6 != 0)))))) ||
     (iVar6 = thunk_FUN_00417ee0(this_00,this_00->field_0263), iVar6 != 0)) {
    sub_0057BF20(this_00);
    this_00->field_023B = CASE_3;
    goto cf_common_exit_0057C3E4;
  }
  switch(this_00->field_0267) {
  case CASE_E7:
    puVar9 = (byte *)(&this_00->field_01D5);
    iVar6 = STT3DSprC::LoadSequence((STT3DSprC *)puVar9,0xe,PTR_0080676c,"fish1",CASE_1D);
    if (iVar6 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\To_fish.cpp",0xf6);
    }
    thunk_FUN_004ac610(puVar9,'\x0e');
    STT3DSprC::SetCurFase((STT3DSprC *)puVar9,'\x0e',0);
    goto switchD_0057c210_default;
  case CASE_E8:
    iVar6 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,"fish_b",CASE_1D);
    if (iVar6 != 0) {
      iVar6 = 0xea;
cf_error_exit_0057C332:
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\To_fish.cpp",iVar6);
    }
    break;
  case CASE_E9:
    iVar6 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,"fish_gr",CASE_1D
                      );
    if (iVar6 != 0) {
      iVar6 = 0xf0;
      goto cf_error_exit_0057C332;
    }
    break;
  case CASE_EA:
    iVar6 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,&DAT_007cb008,CASE_1D);
    if (iVar6 != 0) {
      iVar6 = 0xfd;
      goto cf_error_exit_0057C332;
    }
    break;
  case CASE_EB:
    iVar6 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,&DAT_007cb010,CASE_1D);
    if (iVar6 != 0) {
      iVar6 = 0x104;
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
             (float)this_00->field_025B * _DAT_007904f8 + _DAT_007904f4,
             (float)this_00->field_025F * _DAT_00790504 + _DAT_00790500);
  this_00->field_0235 = this_00->field_0047;
  this_00->field_0237 = this_00->field_0049;
  this_00->field_0239 = this_00->field_004B;
  this_00->field_023B = CASE_0;
cf_common_exit_0057C3E4:
  if ((this_00->field_023B != CASE_6) && (iVar6 = thunk_FUN_0058cfe0((int)this_00), iVar6 == 0)) {
    sub_0057BF20(this_00);
    this_00->field_023B = CASE_3;
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
switchD_0057c669_caseD_127:
  psVar1 = &this_00->field_0235;
  int scalar_local_20 = (int)(short)((message->arg1).words.low * 0xc9 + 100); /* split integer lifetime from pointer-typed SSA storage */
  iVar6 = thunk_FUN_0058d160(0,0,g_worldGrid.sizeX + -1,g_worldGrid.sizeY + -1,(int)this_00,
                             (int)(short)((message->arg0).words.low * 0xc9 + 100),scalar_local_20,
                             (int)(short)((message->arg0).words.high * 0xc9 + 100),
                             (int)(short)((message->arg1).words.high * 0xc9 + 100),psVar1,psVar1,
                             &this_00->field_0239);
  if (iVar6 == 0) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  sVar8 = *psVar1;
  sVar8 = STBiasedDiv16(sVar8, 0xc9); /* exact signed 16-bit grid-index division */
  *psVar1 = sVar8;
  sVar8 = this_00->field_0237;
  sVar8 = STBiasedDiv16(sVar8, 0xc9); /* exact signed 16-bit grid-index division */
  this_00->field_0237 = sVar8;
  sVar8 = this_00->field_0239;
  sVar8 = STBiasedDiv16(sVar8, 200); /* exact signed 16-bit grid-index division */
  this_00->field_0239 = sVar8;
  this_00->field_023B = CASE_4;
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

