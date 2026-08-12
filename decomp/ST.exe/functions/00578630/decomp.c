#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_crab.cpp
   STCrabC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00405871|00578630; family_names=STCrabC::GetMessage; ret4=8;
   direct_offsets={10:2,14:2,18:2,1c:0}

   [STSwitchEnumApplier] Switch target field_0279 uses
   /SubmarineTitans/Recovered/Enums/STCrabC_field_0279State. Cases:
   CASE_F2=242;CASE_F3=243;CASE_F4=244;CASE_F5=245;CASE_F6=246;CASE_F7=247

   [STSwitchEnumApplier] Switch target field_0239 uses
   /SubmarineTitans/Recovered/Enums/STCrabC_field_0239State. Cases: CASE_0=0;CASE_2=2;CASE_3=3 */

int __thiscall STCrabC::GetMessage(STCrabC *this,STMessage *message)

{
  STMessageId SVar1;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  STCrabC *this_00;
  short sVar6;
  int local_EAX_70;
  int iVar7;
  STCrabC_field_0239State SVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte *puVar11;
  byte *pbVar12;
  byte *puVar13;
  AnonShape_00578630_C5BC66E1 *pAVar14;
  byte *pbVar15;
  InternalExceptionFrame local_80;
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ushort *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  STCrabC *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  AnonShape_00578630_C5BC66E1 *local_c;
  uint local_8;

  if ((this->field_0239 == CASE_3) && (message->id != MESS_SHARED_0003)) {
    return 0;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_1c = this;
  local_EAX_70 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
  this_00 = local_1c;
  if (local_EAX_70 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Igor\\to_crab.cpp",0x1b7,0,local_EAX_70,
                               "%s","STCrabC::GetMessage");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_70,0,"E:\\__titans\\Igor\\to_crab.cpp",0x1b8);
    return 0xffff;
  }
  STSprGameObjC::GetMessage((STSprGameObjC *)local_1c,message);
  SVar1 = message->id;
  if (MESS_SHARED_010F < SVar1) {
    if (SVar1 != MESS_HITKILL) {
      if (SVar1 != MESS_SHARED_440F) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      puVar11 = (byte *)(&this_00->field_01D5);
      if (DAT_0080732c != 0) {
        thunk_FUN_004ad0e0(puVar11,0xe);
        thunk_FUN_004ad0e0(puVar11,0xd);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      STT3DSprC::sub_004AD070((STT3DSprC *)puVar11,0xe);
      STT3DSprC::sub_004AD070((STT3DSprC *)puVar11,0xd);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    uVar10 = thunk_FUN_004ad650((STT3DSprC *)&this_00->field_01D5);
    Library::Ourlib::ST3DSMAP::SprHide((void *)this_00->field_0211,uVar10);
    goto LAB_00578ea2;
  }
  if (SVar1 == MESS_SHARED_010F) {
    local_14 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_8);
    local_18 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
    local_c = Library::DKW::LIB::MemAlloc(local_10 + 0x68 + local_8);
    if (local_14 == nullptr) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (local_c == nullptr) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    puVar11 = (byte *)&this_00->field_0x259;
    pAVar14 = local_c;
    memmove(pAVar14, puVar11, 0x28); /* compiler REP MOVS byte copy */
    *(undefined4 *)&local_c->field_0xc = 2;
    local_c->field_0028 = this_00->field_0235;
    local_c->field_002C = this_00->field_0239;
    local_c->field_0050 = this_00->field_0041;
    local_c->field_0052 = this_00->field_0043;
    local_c->field_0054 = this_00->field_0045;
    local_c->field_0034 = this_00->field_0231;
    local_c->field_0048 = this_00->field_0245;
    local_c->field_004C = this_00->field_024D;
    local_c->field_0038 = this_00->field_0241;
    local_c->field_003C = this_00->field_0249;
    local_c->field_0040 = this_00->field_0251;
    local_c->field_0044 = this_00->field_0255;
    local_c->field_0056 = this_00->field_004E;
    local_c->field_0058 = this_00->field_0050;
    local_c->field_005A = this_00->field_006C;
    local_c->field_0030 = this_00->field_023D;
    *(undefined4 *)&local_c->field_0x5c = 0;
    local_c->field_0060 = local_8;
    pbVar12 = local_14;
    pAVar14 = local_c + 1;
    for (uVar10 = local_8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      bVar3 = pbVar12[1];
      bVar4 = pbVar12[2];
      bVar5 = pbVar12[3];
      pAVar14->field_0x0 = pbVar12[0];
      pAVar14->field_0x1 = bVar3;
      pAVar14->field_0x2 = bVar4;
      pAVar14->field_0x3 = bVar5;
      pbVar12 = pbVar12 + 4;
      pAVar14 = (AnonShape_00578630_C5BC66E1 *)&pAVar14->field_0x4;
    }
    for (uVar10 = local_8 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(byte *)pAVar14 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      pAVar14 = (AnonShape_00578630_C5BC66E1 *)&pAVar14->field_0x1;
    }
    *(uint *)(&local_c[1].field_0x0 + local_8) = local_10;
    pbVar12 = local_18;
    pbVar15 = &local_c[1].field_0x4 + local_8;
    memmove(pbVar15, pbVar12, local_10); /* compiler REP MOVS byte copy */
    STPlaySystemC::SaveObjData
              (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_c,
               local_10 + 0x68 + local_8);
    FreeAndNull(&local_14);
    FreeAndNull(&local_18);
    FreeAndNull(&local_c);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (SVar1 == MESS_ID_NONE) {
    if (this_00->field_0239 == CASE_2) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    thunk_FUN_00579350((AnonShape_00579350_2E014C47 *)this_00);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (SVar1 != MESS_ID_CREATE) {
    if (SVar1 != MESS_SHARED_0003) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    thunk_FUN_0058d080(this_00->field_0018);
    thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  local_20 = (undefined4 *)(message->arg0).u32;
  if ((uint)local_20[3] < 2) {
    this_00->field_0239 = CASE_3;
    uVar10 = g_playSystem_00802A38->field_00E4;
    this_00->field_023D = 0;
    this_00->field_0231 = 0;
    this_00->field_0235 = uVar10 - 3;
    puVar11 = (byte *)((message->arg0).ptr);
    puVar13 = (byte *)&this_00->field_0x259;
    memmove(puVar13, puVar11, 0x28); /* compiler REP MOVS byte copy */
    iVar9 = 0;
    Bad(this_00);
    if (((((this_00->field_026D < 0) || ((int)g_worldGrid.sizeX <= this_00->field_026D)) ||
         (this_00->field_0271 < 0)) ||
        (((int)g_worldGrid.sizeY <= this_00->field_0271 || (iVar9 = this_00->field_0275, iVar9 < 0))
        )) || ((g_worldGrid.sizeZ <= iVar9 ||
               (iVar7 = thunk_FUN_004961b0((short)this_00->field_026D,(short)this_00->field_0271,
                                           (short)iVar9), iVar7 == 0)))) {
      thunk_FUN_005783f0(this_00);
      this_00->field_0239 = CASE_2;
    }
    else {
      switch(this_00->field_0279) {
      case CASE_F2:
        iVar9 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,"crab1l",
                           CASE_1D);
        if (iVar9 != 0) {
          RaiseInternalException
                    (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_crab.cpp",0xd2);
        }
        iVar9 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xd,PTR_0080676c,"crab1l_m",
                           CASE_1D);
        if (iVar9 != 0) {
          iVar9 = 0xd5;
cf_error_exit_00578B5D:
          RaiseInternalException
                    (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_crab.cpp",iVar9);
        }
        break;
      case CASE_F3:
        iVar9 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,"crab2l",
                           CASE_1D);
        if (iVar9 != 0) {
          RaiseInternalException
                    (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_crab.cpp",0xda);
        }
        iVar9 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xd,PTR_0080676c,"crab2l_m",
                           CASE_1D);
        if (iVar9 != 0) {
          iVar9 = 0xdd;
          goto cf_error_exit_00578B5D;
        }
        break;
      case CASE_F4:
        iVar9 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,"crab1b",
                           CASE_1D);
        if (iVar9 != 0) {
          RaiseInternalException
                    (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_crab.cpp",0xe2);
        }
        iVar9 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xd,PTR_0080676c,"crab1b_m",
                           CASE_1D);
        if (iVar9 != 0) {
          iVar9 = 0xe5;
          goto cf_error_exit_00578B5D;
        }
        break;
      case CASE_F5:
        iVar9 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,"crab2b",
                           CASE_1D);
        if (iVar9 != 0) {
          RaiseInternalException
                    (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_crab.cpp",0xea);
        }
        iVar9 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xd,PTR_0080676c,"crab2b_m",
                           CASE_1D);
        if (iVar9 != 0) {
          iVar9 = 0xed;
          goto cf_error_exit_00578B5D;
        }
        break;
      case CASE_F6:
        iVar9 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,"langus2",
                           CASE_1D);
        if (iVar9 != 0) {
          RaiseInternalException
                    (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_crab.cpp",0xfa);
        }
        iVar9 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xd,PTR_0080676c,"langus2m",
                           CASE_1D);
        if (iVar9 != 0) {
          iVar9 = 0xfd;
          goto cf_error_exit_00578B5D;
        }
        break;
      case CASE_F7:
        iVar9 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,"langus1",
                           CASE_1D);
        if (iVar9 != 0) {
          RaiseInternalException
                    (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_crab.cpp",0xf2);
        }
        iVar9 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xd,PTR_0080676c,"langus1m",
                           CASE_1D);
        if (iVar9 != 0) {
          iVar9 = 0xf5;
          goto cf_error_exit_00578B5D;
        }
      }
      puVar11 = (byte *)(&this_00->field_01D5);
      STT3DSprC::sub_004ACF50((STT3DSprC *)puVar11,'\r');
      thunk_FUN_004ac610(puVar11,'\x0e');
      thunk_FUN_004ac610(puVar11,'\r');
      STT3DSprC::StartShow((STT3DSprC *)puVar11,0xe,g_playSystem_00802A38->field_00E4);
      STT3DSprC::StartShow((STT3DSprC *)puVar11,0xd,g_playSystem_00802A38->field_00E4);
      sVar6 = (short)this_00->field_0275 * 200;
      this_00->field_0041 = (short)this_00->field_026D * 0xc9 + 100;
      this_00->field_0043 = (short)this_00->field_0271 * 0xc9 + 100;
      this_00->field_0045 = sVar6 + 100;
      if (((int)this_00->field_0279 < 0xf6) || (0xf7 < (int)this_00->field_0279)) {
        sVar6 = sVar6 + 0x28;
      }
      else {
        sVar6 = sVar6 + 0x82;
      }
      this_00->field_0045 = sVar6;
      this_00->field_006C =
           (short)(this_00->field_027D / 0x2d) - (short)(this_00->field_027D / -0x4c000000);
      SVar7 = thunk_FUN_005797b0(this_00,&this_00->field_004E,&this_00->field_0050,
                                 &this_00->field_006C);
      this_00->field_0239 = SVar7;
    }
  }
  else if (local_20[3] == 2) {
    puVar11 = (byte *)(local_20);
    puVar13 = (byte *)&this_00->field_0x259;
    memmove(puVar13, puVar11, 0x28); /* compiler REP MOVS byte copy */
    local_8 = local_20[0x18];
    STAllPlayersC::RestoreGObjData
              ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x68 + (int)local_20));
    puVar11 = (byte *)(local_20);
    this_00->field_0239 = local_20[0xb];
    this_00->field_0235 = local_20[10];
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_0041 = *(undefined2 *)(local_20 + 0x14);
    this_00->field_0043 = STField<undefined2>(local_20,0x52);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_0045 = *(undefined2 *)(local_20 + 0x15);
    this_00->field_0231 = local_20[0xd];
    this_00->field_0245 = local_20[0x12];
    this_00->field_024D = local_20[0x13];
    this_00->field_0241 = local_20[0xe];
    this_00->field_0249 = local_20[0xf];
    this_00->field_0251 = local_20[0x10];
    this_00->field_0255 = local_20[0x11];
    this_00->field_004E = STField<undefined2>(local_20,0x56);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_0050 = *(undefined2 *)(local_20 + 0x16);
    this_00->field_006C = STField<undefined2>(local_20,0x5a);
    this_00->field_023D = local_20[0xc];
    local_3c = Library::DKW::LIB::MemAlloc(0x44);
    if (local_3c != nullptr) {
      iVar9 = 0;
      do {
        *(int **)(iVar9 + (int)local_3c) = PTR_0080676c;
        iVar9 = iVar9 + 4;
      } while (iVar9 < 0x44);
      local_38 = 0;
      local_34 = 0;
      local_30 = PTR_008073cc;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      STT3DSprC::RestoreSpr
                ((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,
                 (AnonShape_004AD790_77673787 *)(puVar11 + 0x19));
      FreeAndNull(&local_3c);
    }
  }
  if (this_00->field_0239 == CASE_3) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  iVar9 = thunk_FUN_0058cfe0((int)this_00);
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
LAB_00578ea2:
  thunk_FUN_005783f0(this_00);
  this_00->field_0239 = CASE_2;
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

