#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_shark.cpp
   STSharkC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00404665|0058D7C0; family_names=STSharkC::GetMessage; ret4=10;
   direct_offsets={10:2,14:3,18:5,1c:0} */

int __thiscall STSharkC::GetMessage(STSharkC *this,STMessage *message)

{
  STSprGameObjC_field_0231State *pSVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  STMessageId SVar4;
  undefined1 uVar6;
  undefined3 uVar7;
  STSprGameObjC *this_00;
  int local_EAX_68;
  int iVar8;
  int local_EAX_696;
  int local_EAX_939;
  int local_EAX_1180;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined2 uVar12;
  short sVar13;
  byte *puVar14;
  byte *pbVar15;
  AnonShape_0058D7C0_99A937C6 *pAVar16;
  byte *pbVar17;
  InternalExceptionFrame local_80;
  void *local_3c;
  uint local_38;
  int local_34;
  ushort *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  STSprGameObjC *local_20;
  undefined4 *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  AnonShape_0058D7C0_99A937C6 *local_c;
  uint local_8;

  if ((this->field_0257 == 8) && (message->id != MESS_SHARED_0003)) {
    return 0;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_20 = (STSprGameObjC *)this;
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
  STSprGameObjC::GetMessage(local_20,message);
  SVar4 = message->id;
  if (SVar4 < MESS_ID_ALLCREATE) {
    if (SVar4 == MESS_TORPHIT) {
      if (*(int *)&this_00->field_0x257 == 4) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      puVar14 = (byte *)(&this_00->field_01D5);
      *(undefined4 *)&this_00->field_0x23d = 0;
      STT3DSprC::StopShow((STT3DSprC *)puVar14,0xe);
      thunk_FUN_004ad5e0((STT3DSprC *)puVar14);
      STT3DSprC::LoadSequence((STT3DSprC *)puVar14,8,PTR_00806764,"expshark",CASE_1D);
      STT3DSprC::StartShow((STT3DSprC *)puVar14,8,g_playSystem_00802A38->field_00E4);
      *(undefined4 *)&this_00->field_0x257 = 4;
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (MESS_SHARED_0003 < SVar4) {
      if (SVar4 != MESS_SHARED_010F) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      local_18 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_8);
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
      pbVar15 = (byte *)((int)&this_00->field_0259 + 2);
      pAVar16 = local_c;
      memmove(pAVar16, pbVar15, 0x34); /* compiler REP MOVS byte copy */
      *(undefined4 *)&local_c->field_0xc = 2;
      local_c->field_0034 = (short)this_00->field_0231;
      local_c->field_0036 = *(undefined2 *)((int)&this_00->field_0231 + 2);
      *(undefined2 *)&local_c->field_0x38 = *(undefined2 *)&this_00->field_0x235;
      *(undefined2 *)&local_c->field_0x3a = *(undefined2 *)&this_00->field_0x237;
      *(undefined4 *)&local_c->field_0x3c = *(undefined4 *)&this_00->field_0x249;
      uVar6 = this_00->field_024E;
      local_c->field_0x40 = this_00->field_0x24d;
      local_c->field_0x41 = uVar6;
      local_c->field_0042 = *(undefined4 *)&this_00->field_0x23d;
      uVar7 = *(undefined3 *)&this_00->field_0x250;
      local_c->field_0x46 = this_00->field_024F;
      *(undefined3 *)&local_c->field_0x47 = uVar7;
      *(undefined4 *)&local_c->field_0x4a = *(undefined4 *)&this_00->field_0x253;
      local_c->field_004E = *(undefined4 *)&this_00->field_0x257;
      local_c->field_0052 = *(undefined4 *)((int)&this_00->field_023E + 3);
      *(undefined4 *)&local_c->field_0x56 = *(undefined4 *)((int)&this_00->field_0244 + 1);
      *(undefined4 *)&local_c->field_0x5a = 0;
      local_c->field_005E = local_8;
      pbVar15 = local_18;
      pbVar17 = &local_c->field_0x62;
      memmove(pbVar17, pbVar15, local_8); /* compiler REP MOVS byte copy */
      uVar11 = 0;
      *(uint *)(&local_c->field_0x62 + local_8) = local_10;
      pbVar15 = local_14;
      pbVar17 = &local_c[1].field_0x2 + local_8;
      memmove(pbVar17, pbVar15, local_10); /* compiler REP MOVS byte copy */
      STPlaySystemC::SaveObjData
                (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_c,
                 (AnonShape_0060EA30_DCEB68AD *)(local_10 + 0x66 + local_8));
      FreeAndNull(&local_18);
      FreeAndNull(&local_14);
      FreeAndNull(&local_c);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (SVar4 == MESS_SHARED_0003) {
      sub_004167A0(this_00);
      thunk_FUN_00495ff0(*(short *)&this_00->field_0x5b,*(short *)&this_00->field_0x5d,
                         *(short *)&this_00->field_0x5f,this_00->field_0x8e,
                         (AnonShape_00495FF0_59081BDD *)this_00);
      thunk_FUN_0058d080(this_00->field_0018);
      thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (SVar4 == MESS_ID_NONE) {
      LifeShark((STSharkC *)this_00);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (SVar4 != MESS_ID_CREATE) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    *(undefined4 *)&this_00->field_0x257 = 8;
    *(undefined4 *)&this_00->field_0x23d = 0;
    *(undefined4 *)((int)&this_00->field_023E + 3) = 0;
    local_1c = (undefined4 *)(message->arg0).u32;
    if ((uint)local_1c[3] < 2) {
      *(undefined4 *)&this_00->field_024F = 0;
      *(undefined4 *)&this_00->field_0x253 = 0;
      *(undefined4 *)&this_00->field_0x249 = 0xff;
      iVar8 = sub_0058FF70((STSharkC *)this_00);
      *(int *)&this_00->field_024F = iVar8;
      puVar14 = (byte *)((message->arg0).ptr);
      pbVar15 = (byte *)((int)&this_00->field_0259 + 2);
      memmove(pbVar15, puVar14, 0x34); /* compiler REP MOVS byte copy */
      thunk_FUN_0058eeb0((AnonShape_0058EEB0_904026FD *)this_00);
      *(undefined2 *)&this_00->field_0x5b = 0xffff;
      *(undefined2 *)&this_00->field_0x5d = 0xffff;
      *(undefined2 *)&this_00->field_0x5f = 0xffff;
      thunk_FUN_00417a00(this_00,1);
      iVar10 = thunk_FUN_00417a20(this_00,*(short *)&this_00->field_0x26f,
                                  *(short *)&this_00->field_0x273,*(short *)&this_00->field_0x277,1);
      if (iVar10 == 0) {
        iVar10 = thunk_FUN_00417e70(this_00,8);
        if (iVar10 == 0) {
          puVar14 = (byte *)(&this_00->field_01D5);
          iVar10 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)puVar14,0xe,PTR_0080676c,"shark1",CASE_1D);
          if (iVar10 != 0) {
            RaiseInternalException
                      (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\To_shark.cpp",0x9f);
          }
          thunk_FUN_004ac610(puVar14,'\x0e');
          STT3DSprC::StartShow((STT3DSprC *)puVar14,0xe,g_playSystem_00802A38->field_00E4);
          if (local_1c[3] == 0) {
            STT3DSprC::sub_004AD3C0
                      ((STT3DSprC *)puVar14,
                       (float)*(int *)&this_00->field_0x26f * _DAT_007904f8 + _DAT_007904f4,
                       (float)*(int *)&this_00->field_0x273 * _DAT_007904f8 + _DAT_007904f4,
                       (float)*(int *)&this_00->field_0x277 * _DAT_00790504 + _DAT_00790500);
            iVar10 = thunk_FUN_00417ee0(this_00,*(short *)&this_00->field_0x27b);
            if (iVar10 == 0) {
LAB_0058dc72:
              uVar12 = *(undefined2 *)&this_00->field_0x47;
              uVar2 = *(undefined2 *)&this_00->field_0x49;
              *(int *)((int)&this_00->field_0244 + 1) = (int)PTR_00806724->field_002C;
              uVar3 = *(undefined2 *)&this_00->field_0x4b;
              *(undefined2 *)&this_00->field_0231 = uVar12;
              *(undefined2 *)((int)&this_00->field_0231 + 2) = uVar2;
              *(undefined2 *)&this_00->field_0x235 = uVar3;
              *(undefined4 *)&this_00->field_0x257 = 0;
            }
            else {
              local_EAX_939 =
                   ReportDebugMessage("E:\\__titans\\Igor\\To_shark.cpp",0xaa,0,0,
                                      "%s","STSharkC::GetMessage Dir Object err");
              if (local_EAX_939 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              sub_0058EFE0((STSharkC *)this_00);
            }
          }
          else {
            local_1c = *(undefined4 **)&this_00->field_0x26f;
            *(int *)((int)&this_00->field_023E + 3) = (int)PTR_00806724->entryCount;
            if (local_1c == nullptr) {
              *(undefined4 *)&this_00->field_0x27b = 0;
            }
            else if (*(int *)&this_00->field_0x273 == 0) {
              *(undefined4 *)&this_00->field_0x27b = 0x10e;
            }
            else if (local_1c == (undefined4 *)(g_worldGrid.sizeX + -1)) {
              *(undefined4 *)&this_00->field_0x27b = 0xb4;
            }
            else if (*(int *)&this_00->field_0x273 == g_worldGrid.sizeY + -1) {
              *(undefined4 *)&this_00->field_0x27b = 0x5a;
            }
            STT3DSprC::sub_004AD3C0
                      ((STT3DSprC *)puVar14,(float)(int)local_1c * _DAT_007904f8 + _DAT_007904f4,
                       (float)*(int *)&this_00->field_0x273 * _DAT_007904f8 + _DAT_007904f4,
                       (float)*(int *)&this_00->field_0x277 * _DAT_00790504 + _DAT_00790500);
            iVar10 = thunk_FUN_00417ee0(this_00,*(short *)&this_00->field_0x27b);
            if (iVar10 == 0) goto LAB_0058dc72;
            local_EAX_1180 =
                 ReportDebugMessage("E:\\__titans\\Igor\\To_shark.cpp",200,0,0,"%s",
                                    "STSharkC::GetMessage Dir Object err");
            if (local_EAX_1180 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            sub_0058EFE0((STSharkC *)this_00);
          }
        }
        else {
          local_EAX_696 =
               ReportDebugMessage("E:\\__titans\\Igor\\To_shark.cpp",0x99,0,0,"%s",
                                  "STSharkC::GetMessage Phase Count err");
          if (local_EAX_696 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          sub_0058EFE0((STSharkC *)this_00);
        }
      }
      else {
        sub_0058EFE0((STSharkC *)this_00);
      }
    }
    else if (local_1c[3] == 2) {
      puVar14 = (byte *)(local_1c);
      pbVar15 = (byte *)((int)&this_00->field_0259 + 2);
      memmove(pbVar15, puVar14, 0x34); /* compiler REP MOVS byte copy */
      local_8 = STField<uint>(local_1c,0x5e);
      STAllPlayersC::RestoreGObjData
                ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x66 + (int)local_1c));
      puVar14 = (byte *)(local_1c);
      *(undefined2 *)&this_00->field_0231 = *(undefined2 *)(local_1c + 0xd);
      *(undefined2 *)((int)&this_00->field_0231 + 2) = STField<undefined2>(local_1c,0x36);
      *(undefined2 *)&this_00->field_0x235 = *(undefined2 *)(local_1c + 0xe);
      *(undefined2 *)&this_00->field_0x237 = STField<undefined2>(local_1c,0x3a);
      *(undefined4 *)&this_00->field_0x249 = local_1c[0xf];
      *(undefined2 *)&this_00->field_0x24d = *(undefined2 *)(local_1c + 0x10);
      *(undefined4 *)&this_00->field_0x23d = STField<undefined4>(local_1c,0x42);
      *(undefined4 *)&this_00->field_024F = STField<undefined4>(local_1c,0x46);
      *(undefined4 *)&this_00->field_0x253 = STField<undefined4>(local_1c,0x4a);
      *(undefined4 *)&this_00->field_0x257 = STField<undefined4>(local_1c,0x4e);
      *(undefined4 *)((int)&this_00->field_023E + 3) = STField<undefined4>(local_1c,0x52);
      *(undefined4 *)((int)&this_00->field_0244 + 1) = STField<undefined4>(local_1c,0x56);
      local_3c = Library::DKW::LIB::MemAlloc(0x44);
      if (local_3c != nullptr) {
        iVar10 = 0;
        do {
          *(int **)(iVar10 + (int)local_3c) = PTR_0080676c;
          iVar10 = iVar10 + 4;
        } while (iVar10 < 0x44);
        iVar10 = *(int *)((int)&this_00->field_023E + 3);
        if (((iVar10 < 1) || (PTR_00806724 == nullptr)) ||
           (PTR_00806724 == (AnonShape_GLOBAL_00806724_3210464F *)0xffffffd0)) {
          local_38 = 0;
        }
        else {
          local_38 = PTR_00806724->entries[iVar10 + -1];
        }
        local_34 = (int)PTR_00806724->field_002C;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        local_30 = PTR_008073cc;
        STT3DSprC::RestoreSpr
                  ((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,
                   (AnonShape_004AD790_77673787 *)((int)puVar14 + 0x62));
        FreeAndNull(&local_3c);
        DumpClassC::WritePtr
                  (*(short *)&this_00->field_0x5b,*(short *)&this_00->field_0x5d,
                   *(short *)&this_00->field_0x5f,1,(RecoveredRecord_DumpClassC_00495EC0 *)this_00);
      }
    }
    if (*(int *)&this_00->field_0x257 == 8) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    iVar10 = thunk_FUN_0058cfe0((int)this_00);
    if (iVar10 != 0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
LAB_0058e0f9:
    sub_0058EFE0((STSharkC *)this_00);
  }
  else {
    switch(SVar4) {
    case MESS_STOCTOPUSC_0112:
      thunk_FUN_004ad5e0((STT3DSprC *)&this_00->field_01D5);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    case MESS_STSPRGAMEOBJC_0113:
      (**(code **)this_00->field_01D5)();
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case MESS_STOCTOPUSC_0127:
      pSVar1 = &this_00->field_0231;
      int scalar_local_1c = int)(short)((message->arg1).words.low * 0xc9 + 100; /* split integer lifetime from pointer-typed SSA storage */
      iVar10 = thunk_FUN_0058d160((short)*(undefined4 *)&this_00->field_0x27f,
                                  (short)*(undefined4 *)&this_00->field_0x283,
                                  (short)*(undefined4 *)&this_00->field_0x287,
                                  (short)*(undefined4 *)&this_00->field_0x28b,(int)this_00,
                                  (int)(short)((message->arg0).words.low * 0xc9 + 100),scalar_local_1c
                                  ,(int)(short)((message->arg0).words.high * 0xc9 + 100),
                                  (int)(short)((message->arg1).words.high * 0xc9 + 100),
                                  (undefined2 *)pSVar1,(undefined2 *)((int)&this_00->field_0231 + 2)
                                  ,(short *)&this_00->field_0x235);
      if (iVar10 != 0) {
        uVar12 = (undefined2)*pSVar1;
        if ((short)uVar12 < 0) {
          uVar12 = (((short)uVar12 / 0xc9 + ((short)uVar12 >> 0xf)) -
                   (short)((longlong)(int)(short)uVar12 * 0x28c1979 >> 0x3f)) - CASE_1;
        }
        else {
          uVar12 = ((short)uVar12 / 0xc9 + ((short)uVar12 >> 0xf)) -
                   (short)((longlong)(int)(short)uVar12 * 0x28c1979 >> 0x3f);
        }
        *(undefined2 *)pSVar1 = uVar12;
        uVar12 = *(undefined2 *)((int)&this_00->field_0231 + 2);
        if ((short)uVar12 < 0) {
          uVar12 = (((short)uVar12 / 0xc9 + ((short)uVar12 >> 0xf)) -
                   (short)((longlong)(int)(short)uVar12 * 0x28c1979 >> 0x3f)) + 0xffff;
        }
        else {
          uVar12 = ((short)uVar12 / 0xc9 + ((short)uVar12 >> 0xf)) -
                   (short)((longlong)(int)(short)uVar12 * 0x28c1979 >> 0x3f);
        }
        *(undefined2 *)((int)&this_00->field_0231 + 2) = uVar12;
        sVar13 = *(short *)&this_00->field_0x235;
        if (sVar13 < 0) {
          sVar13 = ((sVar13 / 200 + (sVar13 >> 0xf)) -
                   (short)((longlong)(int)sVar13 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          sVar13 = (sVar13 / 200 + (sVar13 >> 0xf)) -
                   (short)((longlong)(int)sVar13 * 0x51eb851f >> 0x3f);
        }
        *(short *)&this_00->field_0x235 = sVar13;
        *(undefined4 *)&this_00->field_0x257 = 5;
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      break;
    case MESS_HITKILL:
      uVar11 = thunk_FUN_004ad650((STT3DSprC *)&this_00->field_01D5);
      Library::Ourlib::ST3DSMAP::SprHide(this_00->field_0211,uVar11);
      goto LAB_0058e0f9;
    }
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

