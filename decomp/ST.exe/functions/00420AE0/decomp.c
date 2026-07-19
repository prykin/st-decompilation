
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STSprGameObjC::LoadLifeFrame */

void __thiscall STSprGameObjC::LoadLifeFrame(STSprGameObjC *this,int *param_1)

{
  STT3DSprC *this_00;
  char cVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  byte *pbVar11;
  int _Radix;
  byte local_38 [20];
  byte local_24 [20];
  char local_10 [12];
  
  uVar5 = 0xffffffff;
  pcVar9 = s_lifelev_007a504c;
  do {
    pcVar10 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  local_24[0] = 0;
  iVar6 = -1;
  pbVar8 = local_24;
  do {
    pbVar11 = pbVar8;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pbVar11 = pbVar8 + 1;
    bVar3 = *pbVar8;
    pbVar8 = pbVar11;
  } while (bVar3 != 0);
  pbVar8 = (byte *)(pcVar10 + -uVar5);
  pbVar11 = pbVar11 + -1;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
    pbVar8 = pbVar8 + 4;
    pbVar11 = pbVar11 + 4;
  }
  local_38[0] = 0;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar11 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar11 = pbVar11 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar9 = &DAT_007a5044;
  do {
    pcVar10 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  _Radix = 10;
  iVar6 = -1;
  pbVar8 = local_38;
  do {
    pbVar11 = pbVar8;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pbVar11 = pbVar8 + 1;
    bVar3 = *pbVar8;
    pbVar8 = pbVar11;
  } while (bVar3 != 0);
  pbVar8 = (byte *)(pcVar10 + -uVar5);
  pbVar11 = pbVar11 + -1;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
    pbVar8 = pbVar8 + 4;
    pbVar11 = pbVar11 + 4;
  }
  pcVar9 = local_10;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar11 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar11 = pbVar11 + 1;
  }
  bVar3 = thunk_FUN_004ab030();
  Library::MSVCRT::__itoa((uint)bVar3,pcVar9,_Radix);
  iVar6 = *(int *)(this + 0x20);
  if ((((iVar6 == 0x14) || (iVar6 == 1000)) || (iVar6 == 0x172)) || (iVar6 == 0x1a4)) {
    uVar4 = (**(code **)(*(int *)this + 0x2c))();
  }
  else {
    if (iVar6 != 0x3e9) {
      return;
    }
    uVar4 = *(undefined4 *)(this + 0x259);
  }
  switch(uVar4) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x36:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x42:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4e:
  case 0x4f:
  case 0x51:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5e:
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6f:
  case 0x71:
  case 0x72:
  case 0xfd:
  case 0xfe:
    uVar5 = 0xffffffff;
    pcVar9 = local_10;
    do {
      pcVar10 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar6 = -1;
    pbVar8 = local_24;
    do {
      pbVar11 = pbVar8;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pbVar11 = pbVar8 + 1;
      bVar3 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar3 != 0);
    pbVar8 = (byte *)(pcVar10 + -uVar5);
    pbVar11 = pbVar11 + -1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_007a4fb4;
    do {
      pcVar10 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar6 = -1;
    pbVar8 = local_24;
    do {
      pbVar11 = pbVar8;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pbVar11 = pbVar8 + 1;
      bVar3 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar3 != 0);
    pbVar8 = (byte *)(pcVar10 + -uVar5);
    pbVar11 = pbVar11 + -1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar9 = local_10;
    do {
      pcVar10 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar6 = -1;
    pbVar8 = local_38;
    do {
      pbVar11 = pbVar8;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pbVar11 = pbVar8 + 1;
      bVar3 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar3 != 0);
    pbVar8 = (byte *)(pcVar10 + -uVar5);
    pbVar11 = pbVar11 + -1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
    pcVar9 = &DAT_007a4fb4;
    break;
  default:
    iVar6 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xce5,0,0,&DAT_007a4ccc,
                               s_STSprGameObjC__LoadLifeFrame_unk_007a5008);
    if (iVar6 == 0) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x37:
  case 0x52:
  case 0x53:
  case 100:
    uVar5 = 0xffffffff;
    pcVar9 = local_10;
    do {
      pcVar10 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar6 = -1;
    pbVar8 = local_24;
    do {
      pbVar11 = pbVar8;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pbVar11 = pbVar8 + 1;
      bVar3 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar3 != 0);
    pbVar8 = (byte *)(pcVar10 + -uVar5);
    pbVar11 = pbVar11 + -1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_007a4ff8;
    do {
      pcVar10 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar6 = -1;
    pbVar8 = local_24;
    do {
      pbVar11 = pbVar8;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pbVar11 = pbVar8 + 1;
      bVar3 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar3 != 0);
    pbVar8 = (byte *)(pcVar10 + -uVar5);
    pbVar11 = pbVar11 + -1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar9 = local_10;
    do {
      pcVar10 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar6 = -1;
    pbVar8 = local_38;
    do {
      pbVar11 = pbVar8;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pbVar11 = pbVar8 + 1;
      bVar3 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar3 != 0);
    pbVar8 = (byte *)(pcVar10 + -uVar5);
    pbVar11 = pbVar11 + -1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
    pcVar9 = &DAT_007a4ff8;
    break;
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x41:
  case 0x43:
  case 0x48:
  case 0x4d:
  case 0x50:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5f:
  case 0x60:
  case 0x62:
  case 99:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x70:
  case 0x73:
    uVar5 = 0xffffffff;
    pcVar9 = local_10;
    do {
      pcVar10 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar6 = -1;
    pbVar8 = local_24;
    do {
      pbVar11 = pbVar8;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pbVar11 = pbVar8 + 1;
      bVar3 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar3 != 0);
    pbVar8 = (byte *)(pcVar10 + -uVar5);
    pbVar11 = pbVar11 + -1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_007a4ff4;
    do {
      pcVar10 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar6 = -1;
    pbVar8 = local_24;
    do {
      pbVar11 = pbVar8;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pbVar11 = pbVar8 + 1;
      bVar3 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar3 != 0);
    pbVar8 = (byte *)(pcVar10 + -uVar5);
    pbVar11 = pbVar11 + -1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar9 = local_10;
    do {
      pcVar10 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar6 = -1;
    pbVar8 = local_38;
    do {
      pbVar11 = pbVar8;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pbVar11 = pbVar8 + 1;
      bVar3 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar3 != 0);
    pbVar8 = (byte *)(pcVar10 + -uVar5);
    pbVar11 = pbVar11 + -1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
    pcVar9 = &DAT_007a4ff4;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar10 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar6 = -1;
  pbVar8 = local_38;
  do {
    pbVar11 = pbVar8;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pbVar11 = pbVar8 + 1;
    bVar3 = *pbVar8;
    pbVar8 = pbVar11;
  } while (bVar3 != 0);
  pbVar8 = (byte *)(pcVar10 + -uVar5);
  pbVar11 = pbVar11 + -1;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
    pbVar8 = pbVar8 + 4;
    pbVar11 = pbVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar11 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar11 = pbVar11 + 1;
  }
  this_00 = (STT3DSprC *)(this + 0x1d5);
  STT3DSprC::LoadSequence(this_00,1,DAT_00806774,local_24,0x1d);
  FUN_006ea5e0(*(void **)(this + 0x211),*(uint *)(this + 0x1ed),1,0);
  thunk_FUN_004ac610(this_00,'\x01');
  STT3DSprC::StartShow(this_00,1,*(undefined4 *)(DAT_00802a38 + 0xe4));
  iVar6 = (**(code **)(*(int *)this + 0xc))();
  if (iVar6 != 3) {
    return;
  }
  STT3DSprC::LoadSequence(this_00,2,DAT_00806774,local_38,0x1d);
  FUN_006ea5e0(*(void **)(this + 0x211),*(uint *)(this + 0x1ed),2,0);
  thunk_FUN_004ac610(this_00,'\x02');
  STT3DSprC::StartShow(this_00,2,*(undefined4 *)(DAT_00802a38 + 0xe4));
  return;
}

