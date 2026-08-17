#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_shark.cpp
   STSharkC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00404665|0058D7C0; family_names=STSharkC::GetMessage; ret4=10;
   direct_offsets={10:2,14:3,18:5,1c:0}

   [STSwitchEnumApplier] Switch target field_0257 uses
   /SubmarineTitans/Recovered/Enums/STSharkC_field_0257State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8 */

int __thiscall STSharkC::GetMessage(STSharkC *this,STMessage *message)

{
  short *psVar1;
  STMessageId SVar2;
  STSharkC *this_00;
  int local_EAX_68;
  int iVar8;
  int local_EAX_696;
  int local_EAX_939;
  int local_EAX_1180;
  int iVar9;
  int iVar4;
  uint uVar5;
  short sVar6;
  byte *puVar7;
  byte *pbVar8;
  byte *puVar9;
  AnonShape_0058D7C0_99A937C6 *pAVar10;
  byte *pbVar11;
  InternalExceptionFrame local_80;
  void *local_3c;
  uint local_38;
  int local_34;
  ushort *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  STSharkC *local_20;
  undefined4 *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  AnonShape_0058D7C0_99A937C6 *local_c;
  uint local_8;

  if ((this->field_0257 == CASE_8) && (message->id != MESS_SHARED_0003)) {
    return 0;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_20 = this;
  local_EAX_68 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
  this_00 = local_20;
  if (local_EAX_68 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\Igor\\To_shark.cpp",0x15e,0,local_EAX_68,
                               "%s","STSharkC::GetMessage");
    if (iVar9 == 0) {
      RaiseInternalException(local_EAX_68,0,"E:\\__titans\\Igor\\To_shark.cpp",0x15f);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[0058D81F]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  STSprGameObjC::GetMessage((STSprGameObjC *)local_20,message);
  SVar2 = message->id;
  if (SVar2 < MESS_ID_ALLCREATE) {
    if (SVar2 == MESS_TORPHIT) {
      if (this_00->field_0257 == CASE_4) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      puVar7 = (byte *)(&this_00->field_01D5);
      this_00->field_023D = 0;
      /* ST_CALLSITE[0058DEE0]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)puVar7,0xe);
      thunk_FUN_004ad5e0((STT3DSprC *)puVar7);
      /* ST_CALLSITE[0058DEFE]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      STT3DSprC::LoadSequence((STT3DSprC *)puVar7,8,PTR_00806764,"expshark",CASE_1D);
      /* ST_CALLSITE[0058DF13]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow((STT3DSprC *)puVar7,8,g_playSystem_00802A38->field_00E4);
      this_00->field_0257 = CASE_4;
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (MESS_SHARED_0003 < SVar2) {
      if (SVar2 != MESS_SHARED_010F) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      /* ST_CALLSITE[0058DD51]: CALL 0x004018d4; direct=004018D4 STT3DSprC::SaveSpr */
      local_18 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_8);
      /* ST_CALLSITE[0058DD5F]: CALL 0x0040119a; direct=0040119A STAllPlayersC::SaveGObjData */
      local_14 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
      local_c = Library::DKW::LIB::MemAlloc(local_10 + 0x66 + local_8);
      if (local_18 == nullptr) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (local_14 == nullptr) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (local_c == nullptr) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      puVar7 = (byte *)&this_00->field_0x25b;
      pAVar10 = local_c;
      memmove(pAVar10, puVar7, 0x34); /* compiler REP MOVS byte copy */
      *(undefined4 *)&local_c->field_0xc = 2;
      local_c->field_0034 = this_00->field_0231;
      local_c->field_0036 = this_00->field_0233;
      *(short *)&local_c->field_0x38 = this_00->field_0235;
      *(undefined2 *)&local_c->field_0x3a = this_00->field_0237;
      *(undefined4 *)&local_c->field_0x3c = this_00->field_0249;
      *(undefined2 *)&local_c->field_0x40 = this_00->field_024D;
      local_c->field_0042 = this_00->field_023D;
      *(uint *)&local_c->field_0x46 = this_00->field_024F;
      *(int *)&local_c->field_0x4a = this_00->field_0253;
      local_c->field_004E = this_00->field_0257;
      local_c->field_0052 = this_00->field_0241;
      *(undefined4 *)&local_c->field_0x56 = this_00->field_0245;
      *(undefined4 *)&local_c->field_0x5a = 0;
      local_c->field_005E = local_8;
      pbVar8 = local_18;
      pbVar11 = &local_c->field_0x62;
      memmove(pbVar11, pbVar8, local_8); /* compiler REP MOVS byte copy */
      uVar5 = 0;
      *(uint *)(&local_c->field_0x62 + local_8) = local_10;
      pbVar8 = local_14;
      pbVar11 = &local_c[1].field_0x2 + local_8;
      memmove(pbVar11, pbVar8, local_10); /* compiler REP MOVS byte copy */
      /* ST_CALLSITE[0058DE90]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
      STPlaySystemC::SaveObjData
                (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_c,
                 local_10 + 0x66 + local_8);
      FreeAndNull(&local_18);
      FreeAndNull(&local_14);
      FreeAndNull(&local_c);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (SVar2 == MESS_SHARED_0003) {
      /* ST_CALLSITE[0058DCE7]: CALL 0x00405952; direct=00405952 sub_004167A0 */
      sub_004167A0(this_00);
      thunk_FUN_00495ff0(this_00->field_005B,this_00->field_005D,this_00->field_005F,
                         this_00->field_008E,(AnonShape_00495FF0_59081BDD *)this_00);
      thunk_FUN_0058d080(this_00->field_0018);
      thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (SVar2 == MESS_ID_NONE) {
      /* ST_CALLSITE[0058DCCD]: CALL 0x00401efb; direct=00401EFB STSharkC::LifeShark */
      LifeShark(this_00);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (SVar2 != MESS_ID_CREATE) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    this_00->field_0257 = CASE_8;
    this_00->field_023D = 0;
    this_00->field_0241 = 0;
    local_1c = (undefined4 *)(message->arg0).u32;
    if ((uint)local_1c[3] < 2) {
      this_00->field_024F = 0;
      this_00->field_0253 = 0;
      this_00->field_0249 = 0xff;
      /* ST_CALLSITE[0058D9E8]: CALL 0x004056fa; direct=004056FA STSharkC::sub_0058FF70 */
      iVar8 = sub_0058FF70(this_00);
      this_00->field_024F = iVar8;
      puVar7 = (byte *)((message->arg0).ptr);
      puVar9 = (byte *)&this_00->field_0x25b;
      memmove(puVar9, puVar7, 0x34); /* compiler REP MOVS byte copy */
      thunk_FUN_0058eeb0((AnonShape_0058EEB0_904026FD *)this_00);
      this_00->field_005B = 0xffff;
      this_00->field_005D = 0xffff;
      this_00->field_005F = 0xffff;
      thunk_FUN_00417a00(this_00,1);
      iVar4 = thunk_FUN_00417a20(this_00,(short)this_00->field_026F,(short)this_00->field_0273,
                                 (short)this_00->field_0277,1);
      if (iVar4 == 0) {
        iVar4 = thunk_FUN_00417e70(this_00,8);
        if (iVar4 == 0) {
          puVar7 = (byte *)(&this_00->field_01D5);
          /* ST_CALLSITE[0058DAA9]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
          iVar4 = STT3DSprC::LoadSequence
                            ((STT3DSprC *)puVar7,0xe,PTR_0080676c,"shark1",CASE_1D);
          if (iVar4 != 0) {
            RaiseInternalException
                      (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\To_shark.cpp",0x9f);
          }
          thunk_FUN_004ac610(puVar7,'\x0e');
          /* ST_CALLSITE[0058DAE2]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
          STT3DSprC::StartShow((STT3DSprC *)puVar7,0xe,g_playSystem_00802A38->field_00E4);
          if (local_1c[3] == 0) {
            /* ST_CALLSITE[0058DB39]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
            STT3DSprC::sub_004AD3C0
                      ((STT3DSprC *)puVar7,
                       (float)this_00->field_026F * _DAT_007904f8 + _DAT_007904f4,
                       (float)this_00->field_0273 * _DAT_007904f8 + _DAT_007904f4,
                       (float)this_00->field_0277 * _DAT_00790504 + _DAT_00790500);
            iVar4 = thunk_FUN_00417ee0(this_00,*(short *)&this_00->field_027B);
            if (iVar4 == 0) {
LAB_0058dc72:
              this_00->field_0245 = (int)PTR_00806724->field_002C;
              this_00->field_0231 = this_00->field_0047;
              this_00->field_0233 = this_00->field_0049;
              this_00->field_0235 = this_00->field_004B;
              this_00->field_0257 = CASE_0;
            }
            else {
              local_EAX_939 =
                   ReportDebugMessage("E:\\__titans\\Igor\\To_shark.cpp",0xaa,0,0,
                                      "%s","STSharkC::GetMessage Dir Object err");
              if (local_EAX_939 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              /* ST_CALLSITE[0058DB7A]: CALL 0x0040227a; direct=0040227A STSharkC::sub_0058EFE0 */
              sub_0058EFE0(this_00);
            }
          }
          else {
            local_1c = (undefined4 *)this_00->field_026F;
            this_00->field_0241 = (int)PTR_00806724->entryCount;
            if (local_1c == nullptr) {
              this_00->field_027B = 0;
            }
            else if (this_00->field_0273 == 0) {
              this_00->field_027B = 0x10e;
            }
            else if (local_1c == (undefined4 *)(g_worldGrid.sizeX + -1)) {
              this_00->field_027B = 0xb4;
            }
            else if (this_00->field_0273 == g_worldGrid.sizeY + -1) {
              this_00->field_027B = 0x5a;
            }
            /* ST_CALLSITE[0058DC2E]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
            STT3DSprC::sub_004AD3C0
                      ((STT3DSprC *)puVar7,(float)(int)local_1c * _DAT_007904f8 + _DAT_007904f4,
                       (float)this_00->field_0273 * _DAT_007904f8 + _DAT_007904f4,
                       (float)this_00->field_0277 * _DAT_00790504 + _DAT_00790500);
            iVar4 = thunk_FUN_00417ee0(this_00,*(short *)&this_00->field_027B);
            if (iVar4 == 0) goto LAB_0058dc72;
            local_EAX_1180 =
                 ReportDebugMessage("E:\\__titans\\Igor\\To_shark.cpp",200,0,0,"%s",
                                    "STSharkC::GetMessage Dir Object err");
            if (local_EAX_1180 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            /* ST_CALLSITE[0058DC6B]: CALL 0x0040227a; direct=0040227A STSharkC::sub_0058EFE0 */
            sub_0058EFE0(this_00);
          }
        }
        else {
          local_EAX_696 =
               ReportDebugMessage("E:\\__titans\\Igor\\To_shark.cpp",0x99,0,0,"%s",
                                  "STSharkC::GetMessage Phase Count err");
          if (local_EAX_696 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          /* ST_CALLSITE[0058DA87]: CALL 0x0040227a; direct=0040227A STSharkC::sub_0058EFE0 */
          sub_0058EFE0(this_00);
        }
      }
      else {
        /* ST_CALLSITE[0058DA49]: CALL 0x0040227a; direct=0040227A STSharkC::sub_0058EFE0 */
        sub_0058EFE0(this_00);
      }
    }
    else if (local_1c[3] == 2) {
      puVar7 = (byte *)(local_1c);
      puVar9 = (byte *)&this_00->field_0x25b;
      memmove(puVar9, puVar7, 0x34); /* compiler REP MOVS byte copy */
      local_8 = STField<uint>(local_1c,0x5e);
      /* ST_CALLSITE[0058D8A5]: CALL 0x0040551f; direct=0040551F STAllPlayersC::RestoreGObjData */
      STAllPlayersC::RestoreGObjData
                ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x66 + (int)local_1c));
      puVar7 = (byte *)(local_1c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      this_00->field_0231 = *(short *)(local_1c + 0xd);
      this_00->field_0233 = STField<short>(local_1c,0x36);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      this_00->field_0235 = *(short *)(local_1c + 0xe);
      this_00->field_0237 = STField<undefined2>(local_1c,0x3a);
      this_00->field_0249 = local_1c[0xf];
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      this_00->field_024D = *(undefined2 *)(local_1c + 0x10);
      this_00->field_023D = STField<undefined4>(local_1c,0x42);
      this_00->field_024F = STField<uint>(local_1c,0x46);
      this_00->field_0253 = STField<int>(local_1c,0x4a);
      this_00->field_0257 = STField<STSharkC_field_0257State>(local_1c,0x4e);
      this_00->field_0241 = STField<int>(local_1c,0x52);
      this_00->field_0245 = STField<undefined4>(local_1c,0x56);
      local_3c = Library::DKW::LIB::MemAlloc(0x44);
      if (local_3c != nullptr) {
        iVar4 = 0;
        do {
          *(int **)(iVar4 + (int)local_3c) = PTR_0080676c;
          iVar4 = iVar4 + 4;
        } while (iVar4 < 0x44);
        if (((this_00->field_0241 < 1) ||
            (PTR_00806724 == nullptr)) ||
           (PTR_00806724 == (AnonShape_GLOBAL_00806724_3210464F *)0xffffffd0)) {
          local_38 = 0;
        }
        else {
          local_38 = PTR_00806724->entries[this_00->field_0241 + -1];
        }
        local_34 = (int)PTR_00806724->field_002C;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        local_30 = PTR_008073cc;
        /* ST_CALLSITE[0058D99C]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
        STT3DSprC::RestoreSpr
                  ((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,
                   (AnonShape_004AD790_77673787 *)((int)puVar7 + 0x62));
        FreeAndNull(&local_3c);
        /* ST_CALLSITE[0058D9C6]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
        DumpClassC::WritePtr
                  (this_00->field_005B,this_00->field_005D,this_00->field_005F,1,
                   (RecoveredRecord_DumpClassC_00495EC0 *)this_00);
      }
    }
    if (this_00->field_0257 == CASE_8) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    iVar4 = thunk_FUN_0058cfe0((int)this_00);
    if (iVar4 != 0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
LAB_0058e0f9:
    /* ST_CALLSITE[0058E0FB]: CALL 0x0040227a; direct=0040227A STSharkC::sub_0058EFE0 */
    sub_0058EFE0(this_00);
  }
  else {
    switch(SVar2) {
    case MESS_STOCTOPUSC_0112:
      thunk_FUN_004ad5e0((STT3DSprC *)&this_00->field_01D5);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    case MESS_STSPRGAMEOBJC_0113:
      /* ST_CALLSITE[0058E0CD]: CALL dword ptr [EDX] */
      (**(code **)this_00->field_01D5)();
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case MESS_STOCTOPUSC_0127:
      psVar1 = &this_00->field_0231;
      int scalar_local_1c = (int)(short)((message->arg1).words.low * 0xc9 + 100); /* split integer lifetime from pointer-typed SSA storage */
      iVar4 = thunk_FUN_0058d160((short)this_00->field_027F,(short)this_00->field_0283,
                                 (short)this_00->field_0287,(short)this_00->field_028B,(int)this_00,
                                 (int)(short)((message->arg0).words.low * 0xc9 + 100),scalar_local_1c,
                                 (int)(short)((message->arg0).words.high * 0xc9 + 100),
                                 (int)(short)((message->arg1).words.high * 0xc9 + 100),psVar1,
                                 &this_00->field_0233,&this_00->field_0235);
      if (iVar4 != 0) {
        sVar6 = *psVar1;
        sVar6 = STBiasedDiv16(sVar6, 0xc9); /* exact signed 16-bit grid-index division */
        *psVar1 = sVar6;
        sVar6 = this_00->field_0233;
        sVar6 = STBiasedDiv16(sVar6, 0xc9); /* exact signed 16-bit grid-index division */
        this_00->field_0233 = sVar6;
        sVar6 = this_00->field_0235;
        sVar6 = STBiasedDiv16(sVar6, 200); /* exact signed 16-bit grid-index division */
        this_00->field_0235 = sVar6;
        this_00->field_0257 = CASE_5;
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      break;
    case MESS_HITKILL:
      uVar5 = thunk_FUN_004ad650((STT3DSprC *)&this_00->field_01D5);
      Library::Ourlib::ST3DSMAP::SprHide((void *)this_00->field_0211,uVar5);
      goto LAB_0058e0f9;
    }
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

