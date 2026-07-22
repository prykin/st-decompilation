#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_mbomb.cpp
   STMBombC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401037|00588BC0; family_names=STMBombC::GetMessage; ret4=10;
   direct_offsets={10:2,14:3,18:1,1c:2} */

int __thiscall STMBombC::GetMessage(STMBombC *this,STMessage *message)

{
  undefined2 uVar1;
  STMessageId SVar2;
  dword dVar3;
  code *pcVar4;
  undefined1 uVar5;
  STSprGameObjC *this_00;
  int iVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  AnonShape_00588BC0_84BDD66C *pAVar13;
  byte *pbVar14;
  InternalExceptionFrame local_8c;
  undefined4 *local_48;
  STSprGameObjC *local_44;
  void *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_24;
  byte *local_20;
  byte *local_1c;
  uint local_18;
  AnonShape_00588BC0_84BDD66C *local_14;
  uint local_10;
  short local_a;
  short local_8;
  short local_6;

  local_24 = (void *)0x0;
  if ((this->field_0231 == 3) && (message->id != MESS_SHARED_0003)) {
    return 0;
  }
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_44 = (STSprGameObjC *)this;
  iVar6 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0);
  this_00 = local_44;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Igor\\to_mbomb.cpp",0x389,0,iVar6,"%s",
                               "STMBombC::GetMessage");
    if (iVar7 == 0) {
      RaiseInternalException(iVar6,0,"E:\\__titans\\Igor\\to_mbomb.cpp",0x38a);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  STSprGameObjC::GetMessage(local_44,message);
  SVar2 = message->id;
  if (MESS_SHARED_010F < SVar2) {
    if (SVar2 == MESS_STOCTOPUSC_0112) {
      thunk_FUN_004ad5e0((int)&this_00->field_01D5);
    }
    else if (SVar2 == MESS_STSPRGAMEOBJC_0113) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)this_00->field_01D5)();
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  if (SVar2 == MESS_SHARED_010F) {
    local_20 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_10);
    local_1c = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_18);
    local_14 = (AnonShape_00588BC0_84BDD66C *)
               Library::DKW::LIB::FUN_006aac70(local_18 + 0x87 + local_10);
    if (local_20 == (byte *)0x0) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if (local_1c == (byte *)0x0) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if (local_14 == (AnonShape_00588BC0_84BDD66C *)0x0) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    puVar10 = (undefined4 *)&this_00->field_0x27c;
    pAVar13 = local_14;
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pAVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      pAVar13 = (AnonShape_00588BC0_84BDD66C *)&pAVar13->field_0x4;
    }
    *(undefined2 *)pAVar13 = *(undefined2 *)puVar10;
    *(undefined4 *)&local_14->field_0xc = 2;
    *(undefined4 *)&local_14->field_0x2a = this_00->field_0231;
    *(undefined4 *)&local_14->field_0x2e = *(undefined4 *)&this_00->field_0x235;
    *(undefined4 *)&local_14->field_0x32 = *(undefined4 *)&this_00->field_0x239;
    *(undefined4 *)&local_14->field_0x36 = *(undefined4 *)&this_00->field_0x23d;
    *(undefined2 *)&local_14->field_0x3a = *(undefined2 *)((int)&this_00->field_023E + 3);
    *(undefined2 *)&local_14->field_0x3c = *(undefined2 *)&this_00->field_0x243;
    *(undefined2 *)&local_14->field_0x3e = *(undefined2 *)&this_00->field_0x245;
    *(undefined4 *)&local_14->field_0x62 = *(undefined4 *)&this_00->field_0x263;
    *(undefined4 *)&local_14->field_0x66 = *(undefined4 *)&this_00->field_0x267;
    *(undefined4 *)&local_14->field_0x6a = *(undefined4 *)&this_00->field_0x26b;
    *(undefined2 *)&local_14->field_0x40 = *(undefined2 *)&this_00->field_0x247;
    *(undefined2 *)&local_14->field_0x42 = *(undefined2 *)&this_00->field_0x249;
    *(undefined2 *)&local_14->field_0x44 = *(undefined2 *)&this_00->field_0x24b;
    uVar5 = this_00->field_024E;
    local_14->field_0x46 = this_00->field_0x24d;
    local_14->field_0x47 = uVar5;
    *(undefined2 *)&local_14->field_0x48 = *(undefined2 *)&this_00->field_0x24f;
    *(undefined2 *)&local_14->field_0x4a = *(undefined2 *)&this_00->field_0x251;
    *(undefined4 *)&local_14->field_0x4c = *(undefined4 *)&this_00->field_0x253;
    local_14->field_0050 = *(undefined4 *)&this_00->field_0x257;
    local_14->field_0054 = *(undefined4 *)((int)&this_00->field_0259 + 2);
    *(undefined4 *)&local_14->field_0x58 = *(undefined4 *)&this_00->field_0x25f;
    *(undefined4 *)&local_14->field_0x5c = *(undefined4 *)&this_00->field_0x26f;
    *(undefined2 *)&local_14->field_0x60 = *(undefined2 *)&this_00->field_0x273;
    *(undefined4 *)&local_14->field_0x74 = 0;
    *(undefined2 *)&local_14->field_0x6e = *(undefined2 *)&this_00->field_0x41;
    *(undefined2 *)&local_14->field_0x70 = *(undefined2 *)&this_00->field_0x43;
    *(undefined2 *)&local_14->field_0x72 = *(undefined2 *)&this_00->field_0x45;
    local_14->field_0x78 = this_00->field_0x275;
    local_14->field_0x79 = this_00->field_0x276;
    local_14->field_0x7a = this_00->field_0x277;
    *(undefined4 *)&local_14->field_0x7b = *(undefined4 *)&this_00->field_0x278;
    local_14->field_007F = local_10;
    pbVar11 = local_20;
    pbVar14 = &local_14->field_0x83;
    for (uVar8 = local_10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar14 = *(undefined4 *)pbVar11;
      pbVar11 = pbVar11 + 4;
      pbVar14 = pbVar14 + 4;
    }
    for (uVar8 = local_10 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar14 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      pbVar14 = pbVar14 + 1;
    }
    *(uint *)(&local_14->field_0x83 + local_10) = local_18;
    pbVar11 = local_1c;
    pbVar14 = &local_14[1].field_0x3 + local_10;
    for (uVar8 = local_18 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar14 = *(undefined4 *)pbVar11;
      pbVar11 = pbVar11 + 4;
      pbVar14 = pbVar14 + 4;
    }
    for (uVar8 = local_18 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar14 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      pbVar14 = pbVar14 + 1;
    }
    STPlaySystemC::SaveObjData
              (g_playSystem_00802A38,this_00->field_0018,(byte *)local_14,
               (AnonShape_0060EA30_DCEB68AD *)(local_18 + 0x87 + local_10));
    FreeAndNull(&local_20);
    FreeAndNull(&local_1c);
    FreeAndNull(&local_14);
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  if (SVar2 == MESS_ID_NONE) {
    thunk_FUN_00586af0((int *)this_00);
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  if (SVar2 == MESS_ID_CREATE) {
    DAT_0081170c = FUN_006acf0d(0,0,0,0x3ed,0x3ed,1000);
    dVar3 = (message->arg0).u32;
    this_00->field_0231 = 3;
    uVar8 = *(uint *)(dVar3 + 0xc);
    if (uVar8 < 2) {
      *(undefined4 *)&this_00->field_0x257 = 0;
      *(uint *)&this_00->field_0x253 = g_playSystem_00802A38->field_00E4;
      *(undefined4 *)&this_00->field_0x26f = 0xff;
      puVar10 = (message->arg0).ptr;
      puVar12 = (undefined4 *)&this_00->field_0x27c;
      for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      *(undefined2 *)puVar12 = *(undefined2 *)puVar10;
      uVar8 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&this_00->field_0x1c = uVar8;
      *(uint *)((int)&this_00->field_0259 + 2) = (uVar8 >> 0x10) % 0x19 - 0xc;
      *(undefined4 *)&this_00->field_0x25f = 2;
      *(undefined4 *)&this_00->field_0x26b = 0;
      *(undefined4 *)&this_00->field_0x267 = 0;
      *(undefined4 *)&this_00->field_0x263 = 0;
      if ((*(int *)&this_00->field_0x290 < (int)(short)(g_worldGrid.sizeX * 0xc9 + 100)) &&
         (-1 < *(int *)&this_00->field_0x290)) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        if ((*(int *)&this_00->field_0x294 < (int)(short)(g_worldGrid.sizeY * 0xc9 + 100)) &&
           (((-1 < *(int *)&this_00->field_0x294 &&
             (iVar6 = *(int *)&this_00->field_0x298, iVar6 < (short)(g_worldGrid._4_4_ * 200 + 100))
             ) && (-1 < iVar6)))) {
          sub_00416240(this_00,*(undefined2 *)&this_00->field_0x290,
                       *(undefined2 *)&this_00->field_0x294,(short)iVar6);
          iVar6 = *(int *)&this_00->field_0x290;
          sVar9 = (short)(iVar6 >> 0x1f);
          if (iVar6 < 0) {
            sVar9 = (((short)(iVar6 / 0xc9) + sVar9) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f))
                    + -1;
          }
          else {
            sVar9 = ((short)(iVar6 / 0xc9) + sVar9) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f);
          }
          iVar6 = *(int *)&this_00->field_0x294;
          *(short *)&this_00->field_0x47 = sVar9;
          sVar9 = (short)(iVar6 >> 0x1f);
          if (iVar6 < 0) {
            sVar9 = (((short)(iVar6 / 0xc9) + sVar9) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f))
                    + -1;
          }
          else {
            sVar9 = ((short)(iVar6 / 0xc9) + sVar9) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f);
          }
          iVar6 = *(int *)&this_00->field_0x298;
          *(short *)&this_00->field_0x49 = sVar9;
          sVar9 = (short)(iVar6 >> 0x1f);
          if (iVar6 < 0) {
            sVar9 = (((short)(iVar6 / 200) + sVar9) - (short)((longlong)iVar6 * 0x51eb851f >> 0x3f))
                    + -1;
          }
          else {
            sVar9 = ((short)(iVar6 / 200) + sVar9) - (short)((longlong)iVar6 * 0x51eb851f >> 0x3f);
          }
          *(short *)&this_00->field_0x4b = sVar9;
          iVar6 = STT3DSprC::LoadSequence
                            ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_00806774,"mmine",
                             0x1d);
          if (iVar6 != 0) {
            RaiseInternalException
                      (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_mbomb.cpp",0x2c3
                      );
          }
          STT3DSprC::StartShow
                    ((STT3DSprC *)&this_00->field_01D5,0xe,g_playSystem_00802A38->field_00E4);
          if ((*(int *)&this_00->field_0x29c == 0) ||
             (iVar6 = FUN_006e62d0(g_playSystem_00802A38,*(int *)&this_00->field_0x29c,
                                   (int *)&local_24), iVar6 != 0)) {
            this_00->field_0231 = 1;
            *(undefined4 *)&this_00->field_0x235 = 0;
            *(undefined4 *)&this_00->field_0x239 = 0;
            *(undefined4 *)&this_00->field_0x23d = 0;
          }
          else {
            this_00->field_0231 = 0;
            *(undefined2 *)&this_00->field_0x273 = *(undefined2 *)((int)local_24 + 0x32);
            *(undefined4 *)&this_00->field_0x26f = *(undefined4 *)((int)local_24 + 0x24);
            thunk_FUN_00416270(local_24,&local_6,(int *)&local_8,(int *)&local_a);
            local_a = local_a - *(short *)&this_00->field_0x45;
            local_8 = local_8 - *(short *)&this_00->field_0x43;
            local_6 = local_6 - *(short *)&this_00->field_0x41;
            iVar6 = FUN_006acf0d(0,0,0,(int)local_6,(int)local_8,(int)local_a);
            *(undefined4 *)&this_00->field_0x235 = 0;
            *(undefined4 *)&this_00->field_0x239 = 0;
            *(undefined4 *)&this_00->field_0x23d = 0;
            if (0 < iVar6) {
              *(int *)&this_00->field_0x235 = (local_6 * 0xc0000) / iVar6;
              *(int *)&this_00->field_0x239 = (local_8 * 0xc0000) / iVar6;
              *(int *)&this_00->field_0x23d = (local_a * 0xc0000) / iVar6;
            }
          }
          thunk_FUN_00589870(this_00,*(int *)&this_00->field_0x290,*(int *)&this_00->field_0x294,
                             0x45b);
          uVar5 = this_00->field_0x42;
          uVar1 = *(undefined2 *)&this_00->field_0x45;
          *(undefined2 *)&this_00->field_0x24f = *(undefined2 *)&this_00->field_0x43;
          this_00->field_0x24d = this_00->field_0x41;
          this_00->field_024E = uVar5;
          *(undefined2 *)&this_00->field_0x251 = uVar1;
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      iVar6 = ReportDebugMessage("E:\\__titans\\Igor\\to_mbomb.cpp",0x2ae,0,0,"%s",
                                 "STMBombC:Bad init coordinates");
      if (iVar6 == 0) {
        thunk_FUN_005862e0(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (uVar8 != 2) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    local_48 = (undefined4 *)(message->arg0).u32;
    puVar10 = local_48;
    puVar12 = (undefined4 *)&this_00->field_0x27c;
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    *(undefined2 *)puVar12 = *(undefined2 *)puVar10;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_10 = *(uint *)((int)local_48 + 0x7f);
    STAllPlayersC::RestoreGObjData
              ((STAllPlayersC *)this_00,(undefined4 *)(local_10 + 0x87 + (int)local_48));
    puVar10 = local_48;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_0231 = *(undefined4 *)((int)local_48 + 0x2a);
    *(undefined4 *)&this_00->field_0x235 = *(undefined4 *)((int)local_48 + 0x2e);
    *(undefined4 *)&this_00->field_0x239 = *(undefined4 *)((int)local_48 + 0x32);
    *(undefined4 *)&this_00->field_0x23d = *(undefined4 *)((int)local_48 + 0x36);
    *(undefined2 *)((int)&this_00->field_023E + 3) = *(undefined2 *)((int)local_48 + 0x3a);
    *(undefined2 *)&this_00->field_0x243 = *(undefined2 *)(local_48 + 0xf);
    *(undefined2 *)&this_00->field_0x245 = *(undefined2 *)((int)local_48 + 0x3e);
    *(undefined4 *)&this_00->field_0x263 = *(undefined4 *)((int)local_48 + 0x62);
    *(undefined4 *)&this_00->field_0x267 = *(undefined4 *)((int)local_48 + 0x66);
    *(undefined4 *)&this_00->field_0x26b = *(undefined4 *)((int)local_48 + 0x6a);
    *(undefined2 *)&this_00->field_0x247 = *(undefined2 *)(local_48 + 0x10);
    *(undefined2 *)&this_00->field_0x249 = *(undefined2 *)((int)local_48 + 0x42);
    *(undefined2 *)&this_00->field_0x24b = *(undefined2 *)(local_48 + 0x11);
    *(undefined2 *)&this_00->field_0x24d = *(undefined2 *)((int)local_48 + 0x46);
    *(undefined2 *)&this_00->field_0x24f = *(undefined2 *)(local_48 + 0x12);
    *(undefined2 *)&this_00->field_0x251 = *(undefined2 *)((int)local_48 + 0x4a);
    *(undefined4 *)&this_00->field_0x253 = local_48[0x13];
    *(undefined4 *)&this_00->field_0x257 = local_48[0x14];
    *(undefined4 *)((int)&this_00->field_0259 + 2) = local_48[0x15];
    *(undefined4 *)&this_00->field_0x25f = local_48[0x16];
    *(undefined4 *)&this_00->field_0x26f = local_48[0x17];
    *(undefined2 *)&this_00->field_0x273 = *(undefined2 *)(local_48 + 0x18);
    *(undefined2 *)&this_00->field_0x41 = *(undefined2 *)((int)local_48 + 0x6e);
    *(undefined2 *)&this_00->field_0x43 = *(undefined2 *)(local_48 + 0x1c);
    *(undefined2 *)&this_00->field_0x45 = *(undefined2 *)((int)local_48 + 0x72);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_0x275 = *(undefined1 *)(local_48 + 0x1e);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_0x276 = *(undefined1 *)((int)local_48 + 0x79);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_0x277 = *(undefined1 *)((int)local_48 + 0x7a);
    *(undefined4 *)&this_00->field_0x278 = *(undefined4 *)((int)local_48 + 0x7b);
    local_40 = (void *)Library::DKW::LIB::FUN_006aac70(0x44);
    if (local_40 == (void *)0x0) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    iVar6 = 0;
    do {
      *(int **)(iVar6 + (int)local_40) = DAT_00806774;
      iVar6 = iVar6 + 4;
    } while (iVar6 < 0x44);
    *(undefined4 *)((int)local_40 + 0x24) = DAT_00806764;
    local_3c = 0;
    local_38 = 0;
    local_34 = DAT_008073cc;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    STT3DSprC::RestoreSpr
              ((STT3DSprC *)&this_00->field_01D5,(int *)&local_40,
               (AnonShape_004AD790_77673787 *)((int)puVar10 + 0x83));
    FreeAndNull(&local_40);
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  if (SVar2 != MESS_SHARED_0003) {
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
  g_currentExceptionFrame = local_8c.previous;
  return 0;
}

