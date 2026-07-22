#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_oct.cpp
   STOctopusC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00403B1B|00589C10; family_names=STOctopusC::GetMessage; ret4=11;
   direct_offsets={10:2,14:3,18:3,1c:0} */

int __thiscall STOctopusC::GetMessage(STOctopusC *this,STMessage *message)

{
  STMessageId SVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  STSprGameObjC *this_00;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  undefined4 *puVar12;
  AnonShape_00589C10_CECA1FB4 *pAVar13;
  byte *pbVar14;
  InternalExceptionFrame local_88;
  void *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  STSprGameObjC *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  AnonShape_00589C10_CECA1FB4 *local_c;
  uint local_8;

  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_28 = (STSprGameObjC *)this;
  iVar6 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0);
  this_00 = local_28;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_88.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Igor\\to_oct.cpp",0x1cf,0,iVar6,"%s",
                               "STOctopusC::GetMessage");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Igor\\to_oct.cpp",0x1d0);
    return 0xffff;
  }
  STSprGameObjC::GetMessage(local_28,message);
  SVar1 = message->id;
  if (MESS_STOCTOPUSC_0112 < SVar1) {
    if (MESS_HITKILL < SVar1) {
      if (SVar1 != MESS_SHARED_440F) {
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      puVar10 = &this_00->field_01D5;
      if (DAT_0080732c == 0) {
        STT3DSprC::sub_004AD070((STT3DSprC *)puVar10,0xe);
        STT3DSprC::sub_004AD070((STT3DSprC *)puVar10,8);
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      thunk_FUN_004ad0e0(puVar10,0xe);
      thunk_FUN_004ad0e0(puVar10,8);
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    if (SVar1 == MESS_HITKILL) {
      if (*(int *)&this_00->field_0x249 == 2) {
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      uVar9 = thunk_FUN_004ad650((int)&this_00->field_01D5);
      FUN_006eab60((void *)this_00->field_0211,uVar9);
      thunk_FUN_005899e0(this_00);
      *(undefined4 *)&this_00->field_0x249 = 2;
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    if (SVar1 != MESS_STSPRGAMEOBJC_0113) {
      if (SVar1 != MESS_STOCTOPUSC_0127) {
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      iVar6 = thunk_FUN_0058d160(0,0,g_worldGrid.sizeX + -1,g_worldGrid.sizeY + -1,(int)this_00,
                                 (int)(short)((message->arg0).words.low * 0xc9 + 100),
                                 (int)(short)((message->arg1).words.low * 0xc9 + 100),
                                 (int)(short)((message->arg0).words.high * 0xc9 + 100),
                                 (int)(short)((message->arg1).words.high * 0xc9 + 100),
                                 (undefined2 *)&local_1c,(undefined2 *)&local_24,(short *)&local_20)
      ;
      if (iVar6 == 0) {
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      sub_0058AF70((STOctopusC *)this_00,(short)local_1c,(short)local_24,(short)local_20);
      sVar5 = (*this_00->vtable->vfunc_10)
                        (*(undefined2 *)&this_00->field_0x41,*(undefined2 *)&this_00->field_0x43,
                         *(undefined2 *)&this_00->field_0x45,local_1c,local_24,local_20);
      *(short *)&this_00->field_0x6c = sVar5 / 0x2d - (short)((int)sVar5 / -0x4c000000);
      iVar6 = *(int *)&this_00->field_0x251 * 0x1850;
      *(int *)&this_00->field_0x251 = (int)(iVar6 + (iVar6 >> 0x1f & 0xfffU)) >> 0xc;
      iVar6 = *(int *)&this_00->field_0x255 * 0x1850;
      *(int *)&this_00->field_0x255 = (int)(iVar6 + (iVar6 >> 0x1f & 0xfffU)) >> 0xc;
      iVar6 = this_00->field_0259 * 0x1850;
      this_00->field_0259 = (int)(iVar6 + (iVar6 >> 0x1f & 0xfffU)) >> 0xc;
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)this_00->field_01D5)();
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (SVar1 == MESS_STOCTOPUSC_0112) {
    thunk_FUN_004ad5e0((int)&this_00->field_01D5);
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (MESS_SHARED_0003 < SVar1) {
    if (SVar1 != MESS_SHARED_010F) {
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    local_14 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_8);
    local_18 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
    local_c = (AnonShape_00589C10_CECA1FB4 *)
              Library::DKW::LIB::FUN_006aac70(local_10 + 0x96 + local_8);
    if (local_14 == (byte *)0x0) {
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    if (local_18 == (byte *)0x0) {
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    if (local_c == (AnonShape_00589C10_CECA1FB4 *)0x0) {
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    puVar10 = (undefined4 *)&this_00->field_0x285;
    pAVar13 = local_c;
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pAVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      pAVar13 = (AnonShape_00589C10_CECA1FB4 *)&pAVar13->field_0x4;
    }
    *(undefined4 *)&local_c->field_0xc = 2;
    *(undefined4 *)&local_c->field_0x28 = *(undefined4 *)&this_00->field_0x245;
    *(undefined4 *)&local_c->field_0x2c = *(undefined4 *)&this_00->field_0x249;
    *(undefined2 *)&local_c->field_0x78 = *(undefined2 *)&this_00->field_0x41;
    *(undefined2 *)&local_c->field_0x7a = *(undefined2 *)&this_00->field_0x43;
    *(undefined2 *)&local_c->field_0x7c = *(undefined2 *)&this_00->field_0x45;
    local_c->field_0040 = this_00->field_0231;
    local_c->field_0044 = *(undefined4 *)((int)&this_00->field_023E + 3);
    *(undefined4 *)&local_c->field_0x48 = *(undefined4 *)&this_00->field_0x251;
    *(undefined4 *)&local_c->field_0x4c = *(undefined4 *)&this_00->field_0x255;
    local_c->field_0050 = this_00->field_0259;
    *(undefined4 *)&local_c->field_0x54 = *(undefined4 *)&this_00->field_0x25d;
    *(undefined4 *)&local_c->field_0x58 = *(undefined4 *)&this_00->field_0x261;
    *(undefined4 *)&local_c->field_0x5c = *(undefined4 *)&this_00->field_0x265;
    *(undefined4 *)&local_c->field_0x60 = *(undefined4 *)&this_00->field_0x269;
    *(undefined4 *)&local_c->field_0x64 = *(undefined4 *)&this_00->field_0x26d;
    *(undefined4 *)&local_c->field_0x68 = *(undefined4 *)&this_00->field_0x271;
    *(undefined4 *)&local_c->field_0x6c = *(undefined4 *)&this_00->field_0x275;
    *(undefined4 *)&local_c->field_0x70 = *(undefined4 *)&this_00->field_0x279;
    *(undefined4 *)&local_c->field_0x74 = *(undefined4 *)&this_00->field_0x27d;
    *(undefined4 *)&local_c->field_0x38 = *(undefined4 *)&this_00->field_0x239;
    local_c->field_003C = *(undefined4 *)&this_00->field_0x23d;
    *(undefined4 *)&local_c->field_0x34 = *(undefined4 *)&this_00->field_0x235;
    *(undefined4 *)&local_c->field_0x86 = *(undefined4 *)&this_00->field_0x281;
    *(undefined2 *)&local_c->field_0x7e = *(undefined2 *)&this_00->field_0x4e;
    *(undefined2 *)&local_c->field_0x80 = *(undefined2 *)&this_00->field_0x50;
    *(undefined2 *)&local_c->field_0x82 = *(undefined2 *)&this_00->field_0x52;
    *(undefined2 *)&local_c->field_0x84 = *(undefined2 *)&this_00->field_0x6c;
    uVar3 = this_00->field_024E;
    uVar4 = *(undefined2 *)&this_00->field_0x24f;
    local_c->field_0x30 = this_00->field_0x24d;
    local_c->field_0x31 = uVar3;
    *(undefined2 *)&local_c->field_0x32 = uVar4;
    *(undefined4 *)&local_c->field_0x8a = 0;
    local_c->field_008E = local_8;
    pbVar11 = local_14;
    pbVar14 = &local_c->field_0x92;
    for (uVar9 = local_8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pbVar14 = *(undefined4 *)pbVar11;
      pbVar11 = pbVar11 + 4;
      pbVar14 = pbVar14 + 4;
    }
    for (uVar9 = local_8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pbVar14 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      pbVar14 = pbVar14 + 1;
    }
    *(uint *)(&local_c->field_0x92 + local_8) = local_10;
    pbVar11 = local_18;
    pbVar14 = &local_c[1].field_0x2 + local_8;
    for (uVar9 = local_10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pbVar14 = *(undefined4 *)pbVar11;
      pbVar11 = pbVar11 + 4;
      pbVar14 = pbVar14 + 4;
    }
    for (uVar9 = local_10 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pbVar14 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      pbVar14 = pbVar14 + 1;
    }
    STPlaySystemC::SaveObjData
              (g_playSystem_00802A38,this_00->field_0018,(byte *)local_c,
               (AnonShape_0060EA30_DCEB68AD *)(local_10 + 0x96 + local_8));
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
    if (*(int *)&this_00->field_0x249 == 2) {
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    thunk_FUN_0058a9e0((AnonShape_0058A9E0_DB5690D0 *)this_00);
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (SVar1 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  *(undefined4 *)&this_00->field_0x249 = 3;
  local_1c = (undefined4 *)(message->arg0).u32;
  if ((uint)local_1c[3] < 2) {
    uVar9 = g_playSystem_00802A38->field_00E4;
    *(undefined4 *)&this_00->field_0x24d = 0;
    this_00->field_0231 = CASE_0;
    *(uint *)&this_00->field_0x245 = uVar9 - 3;
    *(undefined4 *)&this_00->field_0x235 = 0;
    *(undefined4 *)&this_00->field_0x271 = 0;
    *(undefined4 *)&this_00->field_0x26d = 0;
    *(undefined4 *)&this_00->field_0x269 = 0;
    *(undefined4 *)&this_00->field_0x281 = 0;
    *(undefined4 *)((int)&this_00->field_023E + 3) = 0;
    puVar10 = (message->arg0).ptr;
    puVar12 = (undefined4 *)&this_00->field_0x285;
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    Bad((STOctopusC *)this_00,unaff_EDI);
    if (((((*(int *)&this_00->field_0x299 < 0) ||
          ((int)g_worldGrid.sizeX <= *(int *)&this_00->field_0x299)) ||
         (*(int *)&this_00->field_0x29d < 0)) ||
        (((int)g_worldGrid.sizeY <= *(int *)&this_00->field_0x29d ||
         (iVar6 = *(int *)&this_00->field_0x2a1, iVar6 < 0)))) ||
       ((g_worldGrid.sizeZ <= iVar6 ||
        (iVar6 = thunk_FUN_004961b0(*(short *)&this_00->field_0x299,*(short *)&this_00->field_0x29d,
                                    (short)iVar6), iVar6 == 0)))) goto LAB_0058a0d0;
    switch(*(undefined4 *)&this_00->field_0x2a5) {
    case 0xf8:
      iVar6 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,"octopus2",0x1d
                        );
      if (iVar6 != 0) {
        iVar6 = 0xe9;
cf_error_exit_0058A005:
        RaiseInternalException
                  (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_oct.cpp",iVar6);
      }
      break;
    case 0xf9:
      iVar6 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,"octopus1",0x1d
                        );
      if (iVar6 != 0) {
        iVar6 = 0xe4;
        goto cf_error_exit_0058A005;
      }
      break;
    case 0xfa:
      iVar6 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,"medusa2",0x1d)
      ;
      if (iVar6 != 0) {
        iVar6 = 0xf3;
        goto cf_error_exit_0058A005;
      }
      break;
    case 0xfb:
      iVar6 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,"medusa1",0x1d)
      ;
      if (iVar6 != 0) {
        iVar6 = 0xee;
        goto cf_error_exit_0058A005;
      }
    }
    thunk_FUN_004ac610(&this_00->field_01D5,'\x0e');
    STT3DSprC::StartShow((STT3DSprC *)&this_00->field_01D5,0xe,g_playSystem_00802A38->field_00E4);
    *(short *)&this_00->field_0x41 = *(short *)&this_00->field_0x299 * 0xc9 + 100;
    *(short *)&this_00->field_0x43 = *(short *)&this_00->field_0x29d * 0xc9 + 100;
    *(short *)&this_00->field_0x45 = *(short *)&this_00->field_0x2a1 * 200 + 100;
    *(undefined2 *)&this_00->field_0x6c = *(undefined2 *)&this_00->field_0x2a9;
    *(undefined4 *)&this_00->field_0x251 = 1;
    *(undefined4 *)&this_00->field_0x255 = 1;
    this_00->field_0259 = 1;
    uVar7 = sub_0058B190((STOctopusC *)this_00,(short *)&this_00->field_0x4e,
                         (short *)&this_00->field_0x50,(short *)&this_00->field_0x52,
                         (short *)&this_00->field_0x6c);
    *(undefined4 *)&this_00->field_0x249 = uVar7;
    this_00->field_0231 = CASE_0;
  }
  else if (local_1c[3] == 2) {
    puVar10 = local_1c;
    puVar12 = (undefined4 *)&this_00->field_0x285;
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_8 = *(uint *)((int)local_1c + 0x8e);
    STAllPlayersC::RestoreGObjData
              ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x96 + (int)local_1c));
    puVar10 = local_1c;
    *(undefined4 *)&this_00->field_0x249 = local_1c[0xb];
    *(undefined4 *)&this_00->field_0x245 = local_1c[10];
    *(undefined2 *)&this_00->field_0x41 = *(undefined2 *)(local_1c + 0x1e);
    *(undefined2 *)&this_00->field_0x43 = *(undefined2 *)((int)local_1c + 0x7a);
    *(undefined2 *)&this_00->field_0x45 = *(undefined2 *)(local_1c + 0x1f);
    *(undefined4 *)&this_00->field_0x281 = *(undefined4 *)((int)local_1c + 0x86);
    this_00->field_0231 = local_1c[0x10];
    *(undefined4 *)((int)&this_00->field_023E + 3) = local_1c[0x11];
    *(undefined4 *)&this_00->field_0x251 = local_1c[0x12];
    *(undefined4 *)&this_00->field_0x255 = local_1c[0x13];
    this_00->field_0259 = local_1c[0x14];
    *(undefined4 *)&this_00->field_0x25d = local_1c[0x15];
    *(undefined4 *)&this_00->field_0x261 = local_1c[0x16];
    *(undefined4 *)&this_00->field_0x265 = local_1c[0x17];
    *(undefined4 *)&this_00->field_0x269 = local_1c[0x18];
    *(undefined4 *)&this_00->field_0x26d = local_1c[0x19];
    *(undefined4 *)&this_00->field_0x271 = local_1c[0x1a];
    *(undefined4 *)&this_00->field_0x275 = local_1c[0x1b];
    *(undefined4 *)&this_00->field_0x279 = local_1c[0x1c];
    *(undefined4 *)&this_00->field_0x27d = local_1c[0x1d];
    *(undefined4 *)&this_00->field_0x239 = local_1c[0xe];
    *(undefined4 *)&this_00->field_0x23d = local_1c[0xf];
    *(undefined4 *)&this_00->field_0x235 = local_1c[0xd];
    *(undefined2 *)&this_00->field_0x4e = *(undefined2 *)((int)local_1c + 0x7e);
    *(undefined2 *)&this_00->field_0x50 = *(undefined2 *)(local_1c + 0x20);
    *(undefined2 *)&this_00->field_0x52 = *(undefined2 *)((int)local_1c + 0x82);
    *(undefined2 *)&this_00->field_0x6c = *(undefined2 *)(local_1c + 0x21);
    *(undefined4 *)&this_00->field_0x24d = local_1c[0xc];
    local_44 = (void *)Library::DKW::LIB::FUN_006aac70(0x44);
    if (local_44 != (void *)0x0) {
      iVar6 = 0;
      do {
        if (iVar6 == 8) {
          *(undefined4 *)((int)local_44 + 0x20) = DAT_00806774;
        }
        else {
          *(int **)((int)local_44 + iVar6 * 4) = DAT_0080676c;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x11);
      local_40 = 0;
      local_3c = 0;
      local_38 = DAT_008073cc;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      STT3DSprC::RestoreSpr
                ((STT3DSprC *)&this_00->field_01D5,(int *)&local_44,
                 (AnonShape_004AD790_77673787 *)((int)puVar10 + 0x92));
      FreeAndNull(&local_44);
    }
  }
  if ((*(int *)&this_00->field_0x249 == 3) || (iVar6 = thunk_FUN_0058cfe0((int)this_00), iVar6 != 0)
     ) {
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
LAB_0058a0d0:
  thunk_FUN_005899e0(this_00);
  *(undefined4 *)&this_00->field_0x249 = 2;
  g_currentExceptionFrame = local_88.previous;
  return 0;
}

