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
  undefined2 uVar1;
  STMessageId SVar2;
  code *pcVar3;
  undefined1 uVar4;
  STSprGameObjC *this_00;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_EDI;
  AnonShape_0058D7C0_99A937C6 *pAVar12;
  byte *pbVar13;
  InternalExceptionFrame local_80;
  void *local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
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
  iVar5 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
  this_00 = local_20;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Igor\\To_shark.cpp",0x15e,0,iVar5,"%s",
                               "STSharkC::GetMessage");
    if (iVar7 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\Igor\\To_shark.cpp",0x15f);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  STSprGameObjC::GetMessage(local_20,message);
  SVar2 = message->id;
  if (SVar2 < MESS_ID_ALLCREATE) {
    if (SVar2 == MESS_TORPHIT) {
      if (*(int *)&this_00->field_0x257 == 4) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      puVar10 = &this_00->field_01D5;
      *(undefined4 *)&this_00->field_0x23d = 0;
      STT3DSprC::StopShow((STT3DSprC *)puVar10,0xe);
      thunk_FUN_004ad5e0((int)puVar10);
      STT3DSprC::LoadSequence((STT3DSprC *)puVar10,8,DAT_00806764,"expshark",0x1d);
      STT3DSprC::StartShow((STT3DSprC *)puVar10,8,g_playSystem_00802A38->field_00E4);
      *(undefined4 *)&this_00->field_0x257 = 4;
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (MESS_SHARED_0003 < SVar2) {
      if (SVar2 != MESS_SHARED_010F) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      local_18 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_8);
      local_14 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
      local_c = (AnonShape_0058D7C0_99A937C6 *)
                Library::DKW::LIB::FUN_006aac70(local_10 + 0x66 + local_8);
      if (local_18 == (byte *)0x0) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (local_14 == (byte *)0x0) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (local_c == (AnonShape_0058D7C0_99A937C6 *)0x0) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      pbVar11 = (byte *)((int)&this_00->field_0259 + 2);
      pAVar12 = local_c;
      for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pAVar12 = *(undefined4 *)pbVar11;
        pbVar11 = pbVar11 + 4;
        pAVar12 = (AnonShape_0058D7C0_99A937C6 *)&pAVar12->field_0x4;
      }
      *(undefined4 *)&local_c->field_0xc = 2;
      local_c->field_0034 = *(undefined2 *)&this_00->field_0231;
      local_c->field_0036 = *(undefined2 *)((int)&this_00->field_0231 + 2);
      *(undefined2 *)&local_c->field_0x38 = *(undefined2 *)&this_00->field_0x235;
      *(undefined2 *)&local_c->field_0x3a = *(undefined2 *)&this_00->field_0x237;
      *(undefined4 *)&local_c->field_0x3c = *(undefined4 *)&this_00->field_0x249;
      uVar4 = this_00->field_024E;
      local_c->field_0x40 = this_00->field_0x24d;
      local_c->field_0x41 = uVar4;
      local_c->field_0042 = *(undefined4 *)&this_00->field_0x23d;
      *(undefined4 *)&local_c->field_0x46 = *(undefined4 *)&this_00->field_0x24f;
      *(undefined4 *)&local_c->field_0x4a = *(undefined4 *)&this_00->field_0x253;
      local_c->field_004E = *(undefined4 *)&this_00->field_0x257;
      local_c->field_0052 = *(undefined4 *)((int)&this_00->field_023E + 3);
      *(undefined4 *)&local_c->field_0x56 = *(undefined4 *)&this_00->field_0x245;
      *(undefined4 *)&local_c->field_0x5a = 0;
      local_c->field_005E = local_8;
      pbVar11 = local_18;
      pbVar13 = &local_c->field_0x62;
      for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar11;
        pbVar11 = pbVar11 + 4;
        pbVar13 = pbVar13 + 4;
      }
      for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar13 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        pbVar13 = pbVar13 + 1;
      }
      *(uint *)(&local_c->field_0x62 + local_8) = local_10;
      pbVar11 = local_14;
      pbVar13 = &local_c[1].field_0x2 + local_8;
      for (uVar8 = local_10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar11;
        pbVar11 = pbVar11 + 4;
        pbVar13 = pbVar13 + 4;
      }
      for (uVar8 = local_10 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar13 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        pbVar13 = pbVar13 + 1;
      }
      STPlaySystemC::SaveObjData
                (g_playSystem_00802A38,this_00->field_0018,(byte *)local_c,
                 (AnonShape_0060EA30_DCEB68AD *)(local_10 + 0x66 + local_8));
      FreeAndNull(&local_18);
      FreeAndNull(&local_14);
      FreeAndNull(&local_c);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (SVar2 == MESS_SHARED_0003) {
      uVar6 = sub_004167A0(this_00);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_00495ff0(*(short *)&this_00->field_0x5b,*(short *)&this_00->field_0x5d,
                         *(short *)&this_00->field_0x5f,
                         CONCAT31((int3)((uint)uVar6 >> 8),this_00->field_0x8e),
                         (AnonShape_00495FF0_59081BDD *)this_00);
      thunk_FUN_0058d080(this_00->field_0018);
      thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (SVar2 == MESS_ID_NONE) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      LifeShark((STSharkC *)this_00,unaff_EDI);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (SVar2 != MESS_ID_CREATE) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    *(undefined4 *)&this_00->field_0x257 = 8;
    *(undefined4 *)&this_00->field_0x23d = 0;
    *(undefined4 *)((int)&this_00->field_023E + 3) = 0;
    local_1c = (undefined4 *)(message->arg0).u32;
    if ((uint)local_1c[3] < 2) {
      *(undefined4 *)&this_00->field_0x24f = 0;
      *(undefined4 *)&this_00->field_0x253 = 0;
      *(undefined4 *)&this_00->field_0x249 = 0xff;
      iVar5 = sub_0058FF70((STSharkC *)this_00);
      *(int *)&this_00->field_0x24f = iVar5;
      puVar10 = (message->arg0).ptr;
      pbVar11 = (byte *)((int)&this_00->field_0259 + 2);
      for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pbVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        pbVar11 = pbVar11 + 4;
      }
      thunk_FUN_0058eeb0((AnonShape_0058EEB0_904026FD *)this_00);
      *(undefined2 *)&this_00->field_0x5b = 0xffff;
      *(undefined2 *)&this_00->field_0x5d = 0xffff;
      *(undefined2 *)&this_00->field_0x5f = 0xffff;
      thunk_FUN_00417a00(this_00,1);
      iVar5 = thunk_FUN_00417a20(this_00,*(short *)&this_00->field_0x26f,
                                 *(short *)&this_00->field_0x273,*(short *)&this_00->field_0x277,1);
      if (iVar5 == 0) {
        iVar5 = thunk_FUN_00417e70(this_00,8);
        if (iVar5 == 0) {
          puVar10 = &this_00->field_01D5;
          iVar5 = STT3DSprC::LoadSequence
                            ((STT3DSprC *)puVar10,0xe,DAT_0080676c,"shark1",0x1d);
          if (iVar5 != 0) {
            RaiseInternalException
                      (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\To_shark.cpp",0x9f)
            ;
          }
          thunk_FUN_004ac610(puVar10,'\x0e');
          STT3DSprC::StartShow((STT3DSprC *)puVar10,0xe,g_playSystem_00802A38->field_00E4);
          if (local_1c[3] == 0) {
            STT3DSprC::sub_004AD3C0
                      ((STT3DSprC *)puVar10,
                       (float)*(int *)&this_00->field_0x26f * _DAT_007904f8 + _DAT_007904f4,
                       (float)*(int *)&this_00->field_0x273 * _DAT_007904f8 + _DAT_007904f4,
                       (float)*(int *)&this_00->field_0x277 * _DAT_00790504 + _DAT_00790500);
            iVar5 = thunk_FUN_00417ee0(this_00,*(short *)&this_00->field_0x27b);
            if (iVar5 == 0) {
LAB_0058dc72:
              *(int *)&this_00->field_0x245 = (int)*(short *)(DAT_00806724 + 0x2c);
              uVar1 = *(undefined2 *)&this_00->field_0x4b;
              *(undefined2 *)&this_00->field_0231 = *(undefined2 *)&this_00->field_0x47;
              *(undefined2 *)((int)&this_00->field_0231 + 2) = *(undefined2 *)&this_00->field_0x49;
              *(undefined2 *)&this_00->field_0x235 = uVar1;
              *(undefined4 *)&this_00->field_0x257 = 0;
            }
            else {
              iVar5 = ReportDebugMessage("E:\\__titans\\Igor\\To_shark.cpp",0xaa,0,0,
                                         "%s","STSharkC::GetMessage Dir Object err")
              ;
              if (iVar5 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              sub_0058EFE0((STSharkC *)this_00);
            }
          }
          else {
            local_1c = *(undefined4 **)&this_00->field_0x26f;
            *(int *)((int)&this_00->field_023E + 3) = (int)*(short *)(DAT_00806724 + 0x23);
            if (local_1c == (undefined4 *)0x0) {
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
                      ((STT3DSprC *)puVar10,(float)(int)local_1c * _DAT_007904f8 + _DAT_007904f4,
                       (float)*(int *)&this_00->field_0x273 * _DAT_007904f8 + _DAT_007904f4,
                       (float)*(int *)&this_00->field_0x277 * _DAT_00790504 + _DAT_00790500);
            iVar5 = thunk_FUN_00417ee0(this_00,*(short *)&this_00->field_0x27b);
            if (iVar5 == 0) goto LAB_0058dc72;
            iVar5 = ReportDebugMessage("E:\\__titans\\Igor\\To_shark.cpp",200,0,0,
                                       "%s","STSharkC::GetMessage Dir Object err");
            if (iVar5 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            sub_0058EFE0((STSharkC *)this_00);
          }
        }
        else {
          iVar5 = ReportDebugMessage("E:\\__titans\\Igor\\To_shark.cpp",0x99,0,0,"%s"
                                     ,"STSharkC::GetMessage Phase Count err");
          if (iVar5 != 0) {
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
      puVar10 = local_1c;
      pbVar11 = (byte *)((int)&this_00->field_0259 + 2);
      for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pbVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        pbVar11 = pbVar11 + 4;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_8 = *(uint *)((int)local_1c + 0x5e);
      STAllPlayersC::RestoreGObjData
                ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x66 + (int)local_1c));
      puVar10 = local_1c;
      *(undefined2 *)&this_00->field_0231 = *(undefined2 *)(local_1c + 0xd);
      *(undefined2 *)((int)&this_00->field_0231 + 2) = *(undefined2 *)((int)local_1c + 0x36);
      *(undefined2 *)&this_00->field_0x235 = *(undefined2 *)(local_1c + 0xe);
      *(undefined2 *)&this_00->field_0x237 = *(undefined2 *)((int)local_1c + 0x3a);
      *(undefined4 *)&this_00->field_0x249 = local_1c[0xf];
      *(undefined2 *)&this_00->field_0x24d = *(undefined2 *)(local_1c + 0x10);
      *(undefined4 *)&this_00->field_0x23d = *(undefined4 *)((int)local_1c + 0x42);
      *(undefined4 *)&this_00->field_0x24f = *(undefined4 *)((int)local_1c + 0x46);
      *(undefined4 *)&this_00->field_0x253 = *(undefined4 *)((int)local_1c + 0x4a);
      *(undefined4 *)&this_00->field_0x257 = *(undefined4 *)((int)local_1c + 0x4e);
      *(undefined4 *)((int)&this_00->field_023E + 3) = *(undefined4 *)((int)local_1c + 0x52);
      *(undefined4 *)&this_00->field_0x245 = *(undefined4 *)((int)local_1c + 0x56);
      local_3c = (void *)Library::DKW::LIB::FUN_006aac70(0x44);
      if (local_3c != (void *)0x0) {
        iVar5 = 0;
        do {
          *(int **)(iVar5 + (int)local_3c) = DAT_0080676c;
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0x44);
        iVar5 = *(int *)((int)&this_00->field_023E + 3);
        if (((iVar5 < 1) || (DAT_00806724 == 0)) || (DAT_00806724 == -0x30)) {
          local_38 = 0;
        }
        else {
          local_38 = *(undefined4 *)(DAT_00806724 + 0x2c + iVar5 * 4);
        }
        local_34 = (int)*(short *)(DAT_00806724 + 0x2c);
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        local_30 = DAT_008073cc;
        STT3DSprC::RestoreSpr
                  ((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,
                   (AnonShape_004AD790_77673787 *)((int)puVar10 + 0x62));
        FreeAndNull(&local_3c);
        DumpClassC::WritePtr
                  (*(short *)&this_00->field_0x5b,*(short *)&this_00->field_0x5d,
                   *(short *)&this_00->field_0x5f,1,(AnonShape_00495EC0_95A268C6 *)this_00);
      }
    }
    if (*(int *)&this_00->field_0x257 == 8) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    iVar5 = thunk_FUN_0058cfe0((int)this_00);
    if (iVar5 != 0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
LAB_0058e0f9:
    sub_0058EFE0((STSharkC *)this_00);
  }
  else {
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
    case MESS_STOCTOPUSC_0127:
      puVar10 = &this_00->field_0231;
      local_1c = (undefined4 *)(int)(short)((message->arg1).words.low * 0xc9 + 100);
      iVar5 = thunk_FUN_0058d160((short)*(undefined4 *)&this_00->field_0x27f,
                                 (short)*(undefined4 *)&this_00->field_0x283,
                                 (short)*(undefined4 *)&this_00->field_0x287,
                                 (short)*(undefined4 *)&this_00->field_0x28b,(int)this_00,
                                 (int)(short)((message->arg0).words.low * 0xc9 + 100),(int)local_1c,
                                 (int)(short)((message->arg0).words.high * 0xc9 + 100),
                                 (int)(short)((message->arg1).words.high * 0xc9 + 100),
                                 (undefined2 *)puVar10,(undefined2 *)((int)&this_00->field_0231 + 2)
                                 ,(short *)&this_00->field_0x235);
      if (iVar5 != 0) {
        sVar9 = *(short *)puVar10;
        if (sVar9 < 0) {
          sVar9 = ((sVar9 / 0xc9 + (sVar9 >> 0xf)) -
                  (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          sVar9 = (sVar9 / 0xc9 + (sVar9 >> 0xf)) -
                  (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f);
        }
        *(short *)puVar10 = sVar9;
        sVar9 = *(short *)((int)&this_00->field_0231 + 2);
        if (sVar9 < 0) {
          sVar9 = ((sVar9 / 0xc9 + (sVar9 >> 0xf)) -
                  (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          sVar9 = (sVar9 / 0xc9 + (sVar9 >> 0xf)) -
                  (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f);
        }
        *(short *)((int)&this_00->field_0231 + 2) = sVar9;
        sVar9 = *(short *)&this_00->field_0x235;
        if (sVar9 < 0) {
          sVar9 = ((sVar9 / 200 + (sVar9 >> 0xf)) -
                  (short)((longlong)(int)sVar9 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          sVar9 = (sVar9 / 200 + (sVar9 >> 0xf)) -
                  (short)((longlong)(int)sVar9 * 0x51eb851f >> 0x3f);
        }
        *(short *)&this_00->field_0x235 = sVar9;
        *(undefined4 *)&this_00->field_0x257 = 5;
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      break;
    case MESS_HITKILL:
      uVar8 = thunk_FUN_004ad650((int)&this_00->field_01D5);
      FUN_006eab60((void *)this_00->field_0211,uVar8);
      goto LAB_0058e0f9;
    }
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

