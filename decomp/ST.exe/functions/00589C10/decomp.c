#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_oct.cpp
   STOctopusC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00403B1B|00589C10; family_names=STOctopusC::GetMessage; ret4=11;
   direct_offsets={10:2,14:3,18:3,1c:0}

   [STSwitchEnumApplier] Switch target field_02A5 uses
   /SubmarineTitans/Recovered/Enums/STOctopusC_field_02A5State. Cases:
   CASE_F8=248;CASE_F9=249;CASE_FA=250;CASE_FB=251

   [STSwitchEnumApplier] Switch target field_0249 uses
   /SubmarineTitans/Recovered/Enums/STOctopusC_field_0249State. Cases: CASE_0=0;CASE_2=2;CASE_3=3 */

int __thiscall STOctopusC::GetMessage(STOctopusC *this,STMessage *message)

{
  STMessageId SVar1;
  STOctopusC *this_00;
  short sVar3;
  int local_EAX_45;
  int iVar7;
  STOctopusC_field_0249State SVar4;
  int iVar8;
  int iVar5;
  uint uVar6;
  byte *puVar7;
  byte *pbVar8;
  byte *puVar9;
  AnonShape_00589C10_CECA1FB4 *pAVar10;
  byte *pbVar11;
  InternalExceptionFrame local_88;
  void *local_44;
  uint local_40;
  uint local_3c;
  ushort *local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  STOctopusC *local_28;
  short local_24 [2];
  uint local_20;
  undefined4 *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  AnonShape_00589C10_CECA1FB4 *local_c;
  uint local_8;

  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_28 = this;

  local_EAX_45 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0);
  this_00 = local_28;
  if (local_EAX_45 != 0) {
    g_currentExceptionFrame = local_88.previous;

    iVar8 = ReportDebugMessage("E:\\__titans\\Igor\\to_oct.cpp",0x1cf,0,local_EAX_45,
                               "%s","STOctopusC::GetMessage");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_45,0,"E:\\__titans\\Igor\\to_oct.cpp",0x1d0);
    return 0xffff;
  }
  /* ST_CALLSITE[00589C58]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  STSprGameObjC::GetMessage((STSprGameObjC *)local_28,message);
  SVar1 = message->id;
  if (MESS_STOCTOPUSC_0112 < SVar1) {
    if (MESS_HITKILL < SVar1) {
      if (SVar1 != MESS_SHARED_440F) {
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      puVar7 = (byte *)(&this_00->field_01D5);
      if (DAT_0080732c == 0) {
        /* ST_CALLSITE[0058A5BB]: CALL 0x00402761; direct=00402761 STT3DSprC::sub_004AD070 */
        STT3DSprC::sub_004AD070((STT3DSprC *)puVar7,0xe);
        /* ST_CALLSITE[0058A5C4]: CALL 0x00402761; direct=00402761 STT3DSprC::sub_004AD070 */
        STT3DSprC::sub_004AD070((STT3DSprC *)puVar7,8);
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      thunk_FUN_004ad0e0(puVar7,0xe);
      thunk_FUN_004ad0e0(puVar7,8);
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    if (SVar1 == MESS_HITKILL) {
      if (this_00->field_0249 == CASE_2) {
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }

      uVar6 = thunk_FUN_004ad650((STT3DSprC *)&this_00->field_01D5);
      Library::Ourlib::ST3DSMAP::SprHide((void *)this_00->field_0211,uVar6);
      thunk_FUN_005899e0((RecoveredRecord_005899E0_1FE8750F *)this_00);
      this_00->field_0249 = CASE_2;
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    if (SVar1 != MESS_STSPRGAMEOBJC_0113) {
      if (SVar1 != MESS_STOCTOPUSC_0127) {
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }

      iVar5 = thunk_FUN_0058d160(0,0,g_worldGrid.sizeX + -1,g_worldGrid.sizeY + -1,
                                 (RecoveredRecord_0058D160_4B53BB8A *)this_00,
                                 (short)((message->arg0).words.low * 0xc9 + 100),
                                 (short)((message->arg1).words.low * 0xc9 + 100),
                                 (short)((message->arg0).words.high * 0xc9 + 100),
                                 (short)((message->arg1).words.high * 0xc9 + 100),
                                 (undefined2 *)&local_1c,local_24,(short *)&local_20);
      if (iVar5 == 0) {
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      /* ST_CALLSITE[0058A443]: CALL 0x004024f5; direct=004024F5 STOctopusC::sub_0058AF70 */
      sub_0058AF70(this_00,(short)local_1c,local_24[0],(short)local_20);
      /* ST_CALLSITE[0058A467]: CALL dword ptr [EDX + 0x10] */
      sVar3 = (*this_00->vtable->vfunc_10)
                        (this_00->field_0041,this_00->field_0043,(int)this_00->field_0045,
                         (short)local_1c,local_24[0],local_20);
      this_00->field_006C = sVar3 / 0x2d - (short)((int)sVar3 / -0x4c000000);
      iVar5 = this_00->field_0251 * 0x1850;
      this_00->field_0251 = (int)(iVar5 + (iVar5 >> 0x1f & 0xfffU)) >> 0xc;
      iVar5 = this_00->field_0255 * 0x1850;
      this_00->field_0255 = (int)(iVar5 + (iVar5 >> 0x1f & 0xfffU)) >> 0xc;
      iVar5 = this_00->field_0259 * 0x1850;
      this_00->field_0259 = (int)(iVar5 + (iVar5 >> 0x1f & 0xfffU)) >> 0xc;
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    /* ST_CALLSITE[0058A518]: CALL dword ptr [EDX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)this_00->field_01D5)();
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (SVar1 == MESS_STOCTOPUSC_0112) {
    thunk_FUN_004ad5e0((STT3DSprC *)&this_00->field_01D5);
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (MESS_SHARED_0003 < SVar1) {
    if (SVar1 != MESS_SHARED_010F) {
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    /* ST_CALLSITE[0058A163]: CALL 0x004018d4; direct=004018D4 STT3DSprC::SaveSpr */
    local_14 = STPointerBoundaryCast<byte *>(STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_8));
    /* ST_CALLSITE[0058A171]: CALL 0x0040119a; direct=0040119A STAllPlayersC::SaveGObjData */
    local_18 = STPointerBoundaryCast<byte *>(STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10));

    local_c = Library::DKW::LIB::MemAlloc(local_10 + 0x96 + local_8);
    if (local_14 == nullptr) {
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    if (local_18 == nullptr) {
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    if (local_c == nullptr) {
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    puVar7 = (byte *)&this_00->field_0x285;
    pAVar10 = local_c;
    memmove(pAVar10, puVar7, 0x28); /* compiler REP MOVS byte copy */
    *(undefined4 *)&local_c->field_0xc = 2;
    *(undefined4 *)&local_c->field_0x28 = this_00->field_0245;
    *(STOctopusC_field_0249State *)&local_c->field_0x2c = this_00->field_0249;
    *(short *)&local_c->field_0x78 = this_00->field_0041;
    *(short *)&local_c->field_0x7a = this_00->field_0043;
    *(short *)&local_c->field_0x7c = this_00->field_0045;
    local_c->field_0040 = this_00->field_0231;
    local_c->field_0044 = this_00->field_0241;
    *(int *)&local_c->field_0x48 = this_00->field_0251;
    *(int *)&local_c->field_0x4c = this_00->field_0255;
    local_c->field_0050 = this_00->field_0259;
    *(int *)&local_c->field_0x54 = this_00->field_025D;
    *(int *)&local_c->field_0x58 = this_00->field_0261;
    *(int *)&local_c->field_0x5c = this_00->field_0265;
    *(int *)&local_c->field_0x60 = this_00->field_0269;
    *(int *)&local_c->field_0x64 = this_00->field_026D;
    *(int *)&local_c->field_0x68 = this_00->field_0271;
    *(int *)&local_c->field_0x6c = this_00->field_0275;
    *(undefined4 *)&local_c->field_0x70 = this_00->field_0279;
    *(int *)&local_c->field_0x74 = this_00->field_027D;
    *(int *)&local_c->field_0x38 = this_00->field_0239;
    local_c->field_003C = this_00->field_023D;
    *(undefined4 *)&local_c->field_0x34 = this_00->field_0235;
    *(int *)&local_c->field_0x86 = this_00->field_0281;
    *(undefined2 *)&local_c->field_0x7e = this_00->field_004E;
    *(undefined2 *)&local_c->field_0x80 = this_00->field_0050;
    *(undefined2 *)&local_c->field_0x82 = this_00->field_0052;
    *(short *)&local_c->field_0x84 = this_00->field_006C;
    *(undefined4 *)&local_c->field_0x30 = this_00->field_024D;
    *(undefined4 *)&local_c->field_0x8a = 0;
    local_c->field_008E = local_8;
    pbVar8 = local_14;
    pbVar11 = &local_c->field_0x92;
    memmove(pbVar11, pbVar8, local_8); /* compiler REP MOVS byte copy */
    uVar6 = 0;
    *(uint *)(&local_c->field_0x92 + local_8) = local_10;
    pbVar8 = local_18;
    pbVar11 = &local_c[1].field_0x2 + local_8;
    memmove(pbVar11, pbVar8, local_10); /* compiler REP MOVS byte copy */
    /* ST_CALLSITE[0058A342]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
    STPlaySystemC::SaveObjData
              (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_c,
               local_10 + 0x96 + local_8);
    FreeAndNull(&local_14);
    FreeAndNull(&local_18);
    FreeAndNull(&local_c);
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (SVar1 == MESS_SHARED_0003) {

    thunk_FUN_0058d080(this_00->field_0018);
    thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (SVar1 == MESS_ID_NONE) {
    if (this_00->field_0249 == CASE_2) {
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    thunk_FUN_0058a9e0((RecoveredRecordView_0058A9E0_0338C9E5 *)this_00);
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (SVar1 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  this_00->field_0249 = CASE_3;
  local_1c = (undefined4 *)(message->arg0).u32;
  if ((uint)local_1c[3] < 2) {
    uVar6 = g_playSystem_00802A38->field_00E4;
    this_00->field_024D = 0;
    this_00->field_0231 = 0;
    this_00->field_0245 = uVar6 - 3;
    this_00->field_0235 = 0;
    this_00->field_0271 = 0;
    this_00->field_026D = 0;
    this_00->field_0269 = 0;
    this_00->field_0281 = 0;
    this_00->field_0241 = 0;
    puVar7 = (byte *)((message->arg0).ptr);
    puVar9 = (byte *)&this_00->field_0x285;
    memmove(puVar9, puVar7, 0x28); /* compiler REP MOVS byte copy */
    iVar5 = 0;
    /* ST_CALLSITE[00589EAC]: CALL 0x00404d0e; direct=00404D0E STOctopusC::Bad */
    Bad(this_00);
    if (((((this_00->field_0299 < 0) || ((int)g_worldGrid.sizeX <= this_00->field_0299)) ||
         (this_00->field_029D < 0)) ||
        (((int)g_worldGrid.sizeY <= this_00->field_029D || (iVar5 = this_00->field_02A1, iVar5 < 0))
        )) || ((g_worldGrid.sizeZ <= iVar5 ||

               (iVar7 = thunk_FUN_004961b0((short)this_00->field_0299,(short)this_00->field_029D,
                                           (short)iVar5), iVar7 == 0)))) goto LAB_0058a0d0;
    switch(this_00->field_02A5) {
    case CASE_F8:
      /* ST_CALLSITE[00589F89]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar5 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,"octopus2",
                         CASE_1D);
      if (iVar5 != 0) {
        iVar5 = 0xe9;
cf_error_exit_0058A005:
        RaiseInternalException
                  (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_oct.cpp",iVar5);
      }
      break;
    case CASE_F9:
      /* ST_CALLSITE[00589F5C]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar5 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,"octopus1",
                         CASE_1D);
      if (iVar5 != 0) {
        iVar5 = 0xe4;
        goto cf_error_exit_0058A005;
      }
      break;
    case CASE_FA:
      /* ST_CALLSITE[00589FEB]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar5 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,"medusa2",
                         CASE_1D);
      if (iVar5 != 0) {
        iVar5 = 0xf3;
        goto cf_error_exit_0058A005;
      }
      break;
    case CASE_FB:
      /* ST_CALLSITE[00589FBA]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar5 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,"medusa1",
                         CASE_1D);
      if (iVar5 != 0) {
        iVar5 = 0xee;
        goto cf_error_exit_0058A005;
      }
    }

    thunk_FUN_004ac610(&this_00->field_01D5,'\x0e');
    /* ST_CALLSITE[0058A02C]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)&this_00->field_01D5,0xe,g_playSystem_00802A38->field_00E4);
    this_00->field_0041 = (short)this_00->field_0299 * 0xc9 + 100;
    this_00->field_0043 = (short)this_00->field_029D * 0xc9 + 100;
    this_00->field_0045 = (short)this_00->field_02A1 * 200 + 100;
    this_00->field_006C = (short)this_00->field_02A9;
    this_00->field_0251 = 1;
    this_00->field_0255 = 1;
    this_00->field_0259 = 1;
    /* ST_CALLSITE[0058A09D]: CALL 0x00401a05; direct=00401A05 STOctopusC::sub_0058B190 */
    SVar4 = sub_0058B190(this_00,&this_00->field_004E,&this_00->field_0050,&this_00->field_0052,
                         &this_00->field_006C);
    this_00->field_0249 = SVar4;
    this_00->field_0231 = 0;
  }
  else if (local_1c[3] == 2) {
    puVar7 = (byte *)(local_1c);
    puVar9 = (byte *)&this_00->field_0x285;
    memmove(puVar9, puVar7, 0x28); /* compiler REP MOVS byte copy */
    local_8 = STField<uint>(local_1c,0x8e);
    /* ST_CALLSITE[00589CD8]: CALL 0x0040551f; direct=0040551F STAllPlayersC::RestoreGObjData */
    STAllPlayersC::RestoreGObjData
              ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x96 + (int)local_1c));
    puVar7 = (byte *)(local_1c);
    this_00->field_0249 = local_1c[0xb];
    this_00->field_0245 = local_1c[10];
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_0041 = *(short *)(local_1c + 0x1e);
    this_00->field_0043 = STField<short>(local_1c,0x7a);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_0045 = *(short *)(local_1c + 0x1f);
    this_00->field_0281 = STField<int>(local_1c,0x86);
    this_00->field_0231 = local_1c[0x10];
    this_00->field_0241 = local_1c[0x11];
    this_00->field_0251 = local_1c[0x12];
    this_00->field_0255 = local_1c[0x13];
    this_00->field_0259 = local_1c[0x14];
    this_00->field_025D = local_1c[0x15];
    this_00->field_0261 = local_1c[0x16];
    this_00->field_0265 = local_1c[0x17];
    this_00->field_0269 = local_1c[0x18];
    this_00->field_026D = local_1c[0x19];
    this_00->field_0271 = local_1c[0x1a];
    this_00->field_0275 = local_1c[0x1b];
    this_00->field_0279 = local_1c[0x1c];
    this_00->field_027D = local_1c[0x1d];
    this_00->field_0239 = local_1c[0xe];
    this_00->field_023D = local_1c[0xf];
    this_00->field_0235 = local_1c[0xd];
    this_00->field_004E = STField<undefined2>(local_1c,0x7e);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_0050 = *(undefined2 *)(local_1c + 0x20);
    this_00->field_0052 = STField<undefined2>(local_1c,0x82);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_006C = *(short *)(local_1c + 0x21);
    this_00->field_024D = local_1c[0xc];

    local_44 = Library::DKW::LIB::MemAlloc(0x44);
    if (local_44 != nullptr) {
      iVar5 = 0;
      do {
        if (iVar5 == 8) {
          STField<int *>(local_44,0x20) = PTR_00806774;
        }
        else {
          *(int **)((int)local_44 + iVar5 * 4) = PTR_0080676c;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x11);
      local_40 = 0;
      local_3c = 0;
      local_38 = PTR_008073cc;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      /* ST_CALLSITE[00589E43]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
      STT3DSprC::RestoreSpr
                ((STT3DSprC *)&this_00->field_01D5,(int *)&local_44,
                 (RecoveredRecordView_004AD790_D4DB5A31 *)((int)puVar7 + 0x92));
      FreeAndNull(&local_44);
    }
  }
  if ((this_00->field_0249 == CASE_3) ||

     (iVar5 = thunk_FUN_0058cfe0((RecoveredRecord_0058CFE0_6E80059E *)this_00), iVar5 != 0)) {
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
LAB_0058a0d0:
  thunk_FUN_005899e0((RecoveredRecord_005899E0_1FE8750F *)this_00);
  this_00->field_0249 = CASE_2;
  g_currentExceptionFrame = local_88.previous;
  return 0;
}

