#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_crab.cpp
   STCrabC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00405871|00578630; family_names=STCrabC::GetMessage; ret4=8;
   direct_offsets={10:2,14:2,18:2,1c:0} */

int __thiscall STCrabC::GetMessage(STCrabC *this,STMessage *message)

{
  undefined4 *puVar1;
  STMessageId SVar2;
  code *pcVar3;
  byte bVar4;
  STSprGameObjC *this_00;
  undefined1 uVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  STSprGameObjC_field_0259State SVar11;
  STSprGameObjC_field_0259State *pSVar12;
  byte *pbVar13;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  STSprGameObjC_field_0259State *pSVar14;
  byte *pbVar15;
  InternalExceptionFrame local_80;
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  STSprGameObjC_field_0259State *local_20;
  STSprGameObjC *local_1c;
  byte *local_18;
  STSprGameObjC_field_0259State *local_14;
  uint local_10;
  STSprGameObjC_field_0259State *local_c;
  STSprGameObjC_field_0259State local_8;

  if ((this->field_0239 == 3) && (message->id != MESS_SHARED_0003)) {
    return 0;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_1c = (STSprGameObjC *)this;
  iVar7 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
  this_00 = local_1c;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\Igor\\to_crab.cpp",0x1b7,0,iVar7,"%s",
                               "STCrabC::GetMessage");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar7,0,"E:\\__titans\\Igor\\to_crab.cpp",0x1b8);
    return 0xffff;
  }
  STSprGameObjC::GetMessage(local_1c,message);
  SVar2 = message->id;
  if (MESS_SHARED_010F < SVar2) {
    if (SVar2 != MESS_HITKILL) {
      if (SVar2 != MESS_SHARED_440F) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      puVar1 = &this_00->field_01D5;
      if (DAT_0080732c != 0) {
        thunk_FUN_004ad0e0(puVar1,0xe);
        thunk_FUN_004ad0e0(puVar1,0xd);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      thunk_FUN_004ad070(puVar1,0xe);
      thunk_FUN_004ad070(puVar1,0xd);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    uVar10 = thunk_FUN_004ad650((int)&this_00->field_01D5);
    FUN_006eab60((void *)this_00->field_0211,uVar10);
    goto LAB_00578ea2;
  }
  if (SVar2 == MESS_SHARED_010F) {
    local_14 = STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_8);
    local_18 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
    local_c = (STSprGameObjC_field_0259State *)
              Library::DKW::LIB::FUN_006aac70(local_10 + 0x68 + local_8);
    if (local_14 == (STSprGameObjC_field_0259State *)0x0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (local_c == (STSprGameObjC_field_0259State *)0x0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    pSVar12 = &this_00->field_0259;
    pSVar14 = local_c;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pSVar14 = *pSVar12;
      pSVar12 = pSVar12 + 1;
      pSVar14 = pSVar14 + 1;
    }
    local_c[3] = 2;
    local_c[10] = *(STSprGameObjC_field_0259State *)&this_00->field_0x235;
    local_c[0xb] = *(STSprGameObjC_field_0259State *)&this_00->field_0x239;
    *(undefined2 *)(local_c + 0x14) = *(undefined2 *)&this_00->field_0x41;
    uVar5 = this_00->field_0x44;
    ((byte *)((int)local_c + 0x52))[0] = this_00->field_0x43;
    ((byte *)((int)local_c + 0x52))[1] = uVar5;
    *(undefined2 *)(local_c + 0x15) = *(undefined2 *)&this_00->field_0x45;
    local_c[0xd] = this_00->field_0231;
    local_c[0x12] = *(STSprGameObjC_field_0259State *)&this_00->field_0x245;
    local_c[0x13] = *(STSprGameObjC_field_0259State *)&this_00->field_0x24d;
    local_c[0xe] = *(STSprGameObjC_field_0259State *)((int)&this_00->field_023E + 3);
    local_c[0xf] = *(STSprGameObjC_field_0259State *)&this_00->field_0x249;
    local_c[0x10] = *(STSprGameObjC_field_0259State *)&this_00->field_0x251;
    local_c[0x11] = *(STSprGameObjC_field_0259State *)&this_00->field_0x255;
    uVar5 = this_00->field_0x4f;
    ((byte *)((int)local_c + 0x56))[0] = this_00->field_0x4e;
    ((byte *)((int)local_c + 0x56))[1] = uVar5;
    *(undefined2 *)(local_c + 0x16) = *(undefined2 *)&this_00->field_0x50;
    uVar5 = this_00->field_0x6d;
    ((byte *)((int)local_c + 0x5a))[0] = this_00->field_0x6c;
    ((byte *)((int)local_c + 0x5a))[1] = uVar5;
    local_c[0xc] = *(STSprGameObjC_field_0259State *)&this_00->field_0x23d;
    local_c[0x17] = 0;
    local_c[0x18] = local_8;
    pSVar12 = local_14;
    pSVar14 = local_c + 0x19;
    for (uVar10 = local_8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pSVar14 = *pSVar12;
      pSVar12 = pSVar12 + 1;
      pSVar14 = pSVar14 + 1;
    }
    for (SVar11 = local_8 & 3; SVar11 != 0; SVar11 = SVar11 - 1) {
      *(char *)pSVar14 = (char)*pSVar12;
      pSVar12 = (STSprGameObjC_field_0259State *)((int)pSVar12 + 1);
      pSVar14 = (STSprGameObjC_field_0259State *)((int)pSVar14 + 1);
    }
    *(uint *)((int)local_c + local_8 + 100) = local_10;
    pbVar13 = local_18;
    pbVar15 = (byte *)((int)local_c + local_8 + 0x68);
    for (uVar10 = local_10 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pbVar15 = *(undefined4 *)pbVar13;
      pbVar13 = pbVar13 + 4;
      pbVar15 = pbVar15 + 4;
    }
    for (uVar10 = local_10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pbVar15 = *pbVar13;
      pbVar13 = pbVar13 + 1;
      pbVar15 = pbVar15 + 1;
    }
    STPlaySystemC::SaveObjData
              (PTR_00802a38,this_00->field_0018,(byte *)local_c,
               (AnonShape_0060EA30_DCEB68AD *)(local_10 + 0x68 + local_8));
    FreeAndNull(&local_14);
    FreeAndNull(&local_18);
    FreeAndNull(&local_c);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (SVar2 == MESS_ID_NONE) {
    if (*(int *)&this_00->field_0x239 == 2) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    thunk_FUN_00579350((AnonShape_00579350_2E014C47 *)this_00);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (SVar2 != MESS_ID_CREATE) {
    if (SVar2 != MESS_SHARED_0003) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    thunk_FUN_0058d080(this_00->field_0018);
    thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  local_20 = (STSprGameObjC_field_0259State *)(message->arg0).u32;
  if (local_20[3] < 2) {
    *(undefined4 *)&this_00->field_0x239 = 3;
    iVar7 = PTR_00802a38->field_00E4;
    *(undefined4 *)&this_00->field_0x23d = 0;
    this_00->field_0231 = 0;
    *(int *)&this_00->field_0x235 = iVar7 + -3;
    pSVar12 = (message->arg0).ptr;
    pSVar14 = &this_00->field_0259;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pSVar14 = *pSVar12;
      pSVar12 = pSVar12 + 1;
      pSVar14 = pSVar14 + 1;
    }
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    Bad((STCrabC *)this_00,unaff_EDI);
    if (((((*(int *)&this_00->field_0x26d < 0) ||
          ((int)g_worldGrid.sizeX <= *(int *)&this_00->field_0x26d)) ||
         (*(int *)&this_00->field_0x271 < 0)) ||
        (((int)g_worldGrid.sizeY <= *(int *)&this_00->field_0x271 ||
         (iVar7 = *(int *)&this_00->field_0x275, iVar7 < 0)))) ||
       ((g_worldGrid.sizeZ <= iVar7 ||
        (iVar7 = thunk_FUN_004961b0(*(short *)&this_00->field_0x26d,*(short *)&this_00->field_0x271,
                                    (short)iVar7), iVar7 == 0)))) {
      thunk_FUN_005783f0(this_00);
      *(undefined4 *)&this_00->field_0x239 = 2;
    }
    else {
      switch(*(undefined4 *)&this_00->field_0x279) {
      case 0xf2:
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,"crab1l",0x1d
                          );
        if (iVar7 != 0) {
          RaiseInternalException
                    (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_crab.cpp",0xd2);
        }
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xd,DAT_0080676c,"crab1l_m",
                           0x1d);
        if (iVar7 != 0) {
          iVar7 = 0xd5;
cf_error_exit_00578B5D:
          RaiseInternalException
                    (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_crab.cpp",iVar7);
        }
        break;
      case 0xf3:
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,"crab2l",0x1d
                          );
        if (iVar7 != 0) {
          RaiseInternalException
                    (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_crab.cpp",0xda);
        }
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xd,DAT_0080676c,"crab2l_m",
                           0x1d);
        if (iVar7 != 0) {
          iVar7 = 0xdd;
          goto cf_error_exit_00578B5D;
        }
        break;
      case 0xf4:
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,"crab1b",0x1d
                          );
        if (iVar7 != 0) {
          RaiseInternalException
                    (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_crab.cpp",0xe2);
        }
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xd,DAT_0080676c,"crab1b_m",
                           0x1d);
        if (iVar7 != 0) {
          iVar7 = 0xe5;
          goto cf_error_exit_00578B5D;
        }
        break;
      case 0xf5:
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,"crab2b",0x1d
                          );
        if (iVar7 != 0) {
          RaiseInternalException
                    (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_crab.cpp",0xea);
        }
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xd,DAT_0080676c,"crab2b_m",
                           0x1d);
        if (iVar7 != 0) {
          iVar7 = 0xed;
          goto cf_error_exit_00578B5D;
        }
        break;
      case 0xf6:
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,"langus2",
                           0x1d);
        if (iVar7 != 0) {
          RaiseInternalException
                    (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_crab.cpp",0xfa);
        }
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xd,DAT_0080676c,"langus2m",
                           0x1d);
        if (iVar7 != 0) {
          iVar7 = 0xfd;
          goto cf_error_exit_00578B5D;
        }
        break;
      case 0xf7:
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,"langus1",
                           0x1d);
        if (iVar7 != 0) {
          RaiseInternalException
                    (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_crab.cpp",0xf2);
        }
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xd,DAT_0080676c,"langus1m",
                           0x1d);
        if (iVar7 != 0) {
          iVar7 = 0xf5;
          goto cf_error_exit_00578B5D;
        }
      }
      puVar1 = &this_00->field_01D5;
      thunk_FUN_004acf50(puVar1,'\r');
      thunk_FUN_004ac610(puVar1,'\x0e');
      thunk_FUN_004ac610(puVar1,'\r');
      STT3DSprC::StartShow((STT3DSprC *)puVar1,0xe,PTR_00802a38->field_00E4);
      STT3DSprC::StartShow((STT3DSprC *)puVar1,0xd,PTR_00802a38->field_00E4);
      sVar6 = *(short *)&this_00->field_0x275 * 200;
      *(short *)&this_00->field_0x41 = *(short *)&this_00->field_0x26d * 0xc9 + 100;
      *(short *)&this_00->field_0x43 = *(short *)&this_00->field_0x271 * 0xc9 + 100;
      *(short *)&this_00->field_0x45 = sVar6 + 100;
      if ((*(int *)&this_00->field_0x279 < 0xf6) || (0xf7 < *(int *)&this_00->field_0x279)) {
        sVar6 = sVar6 + 0x28;
      }
      else {
        sVar6 = sVar6 + 0x82;
      }
      *(short *)&this_00->field_0x45 = sVar6;
      *(short *)&this_00->field_0x6c =
           (short)(*(int *)&this_00->field_0x27d / 0x2d) -
           (short)(*(int *)&this_00->field_0x27d / -0x4c000000);
      uVar8 = thunk_FUN_005797b0(this_00,(undefined2 *)&this_00->field_0x4e,
                                 (undefined2 *)&this_00->field_0x50,
                                 (undefined2 *)&this_00->field_0x6c);
      *(undefined4 *)&this_00->field_0x239 = uVar8;
    }
  }
  else if (local_20[3] == 2) {
    pSVar12 = local_20;
    pSVar14 = &this_00->field_0259;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pSVar14 = *pSVar12;
      pSVar12 = pSVar12 + 1;
      pSVar14 = pSVar14 + 1;
    }
    local_8 = local_20[0x18];
    STAllPlayersC::RestoreGObjData
              ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x68 + (int)local_20));
    pSVar12 = local_20;
    *(STSprGameObjC_field_0259State *)&this_00->field_0x239 = local_20[0xb];
    *(STSprGameObjC_field_0259State *)&this_00->field_0x235 = local_20[10];
    *(short *)&this_00->field_0x41 = (short)local_20[0x14];
    bVar4 = ((byte *)((int)local_20 + 0x52))[1];
    this_00->field_0x43 = ((byte *)((int)local_20 + 0x52))[0];
    this_00->field_0x44 = bVar4;
    *(short *)&this_00->field_0x45 = (short)local_20[0x15];
    this_00->field_0231 = local_20[0xd];
    *(STSprGameObjC_field_0259State *)&this_00->field_0x245 = local_20[0x12];
    *(STSprGameObjC_field_0259State *)&this_00->field_0x24d = local_20[0x13];
    *(STSprGameObjC_field_0259State *)((int)&this_00->field_023E + 3) = local_20[0xe];
    *(STSprGameObjC_field_0259State *)&this_00->field_0x249 = local_20[0xf];
    *(STSprGameObjC_field_0259State *)&this_00->field_0x251 = local_20[0x10];
    *(STSprGameObjC_field_0259State *)&this_00->field_0x255 = local_20[0x11];
    bVar4 = ((byte *)((int)local_20 + 0x56))[1];
    this_00->field_0x4e = ((byte *)((int)local_20 + 0x56))[0];
    this_00->field_0x4f = bVar4;
    *(short *)&this_00->field_0x50 = (short)local_20[0x16];
    bVar4 = ((byte *)((int)local_20 + 0x5a))[1];
    this_00->field_0x6c = ((byte *)((int)local_20 + 0x5a))[0];
    this_00->field_0x6d = bVar4;
    *(STSprGameObjC_field_0259State *)&this_00->field_0x23d = local_20[0xc];
    local_3c = (void *)Library::DKW::LIB::FUN_006aac70(0x44);
    if (local_3c != (void *)0x0) {
      iVar7 = 0;
      do {
        *(int **)(iVar7 + (int)local_3c) = DAT_0080676c;
        iVar7 = iVar7 + 4;
      } while (iVar7 < 0x44);
      local_38 = 0;
      local_34 = 0;
      local_30 = DAT_008073cc;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      STT3DSprC::RestoreSpr
                ((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,
                 (AnonShape_004AD790_77673787 *)(pSVar12 + 0x19));
      FreeAndNull(&local_3c);
    }
  }
  if (*(int *)&this_00->field_0x239 == 3) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  iVar7 = thunk_FUN_0058cfe0((int)this_00);
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
LAB_00578ea2:
  thunk_FUN_005783f0(this_00);
  *(undefined4 *)&this_00->field_0x239 = 2;
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

