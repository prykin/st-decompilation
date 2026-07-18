
void __thiscall CPanelTy::PaintCtrlBoatSI(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar6;
  CPanelTy CVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar8;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  CPanelTy *pCStack_c;
  uint uStack_8;
  
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  pCStack_c = this;
  iVar3 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  pCVar2 = pCStack_c;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_50;
    iVar5 = FUN_006ad4d0(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x1ed,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c2524,0x1ed);
    return;
  }
  switch(pCStack_c[0xb9e]) {
  case (CPanelTy)0x0:
    thunk_FUN_00540760(*(undefined4 **)(pCStack_c + 0x18c),0,0x46,'\x01',
                       *(byte **)(pCStack_c + 0x974));
    thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x18c),0x31,0,'\x06',*(byte **)(pCVar2 + 0x97c));
    break;
  case (CPanelTy)0x1:
    thunk_FUN_00540760(*(undefined4 **)(pCStack_c + 0x18c),0,0x46,'\x01',
                       *(byte **)(pCStack_c + 0x988));
    if (*(int *)(pCVar2 + 0xb99) == 0xbd) {
      pbVar4 = *(byte **)(pCVar2 + 0x97c);
LAB_00502b2d:
      puVar8 = *(undefined4 **)(pCVar2 + 0x18c);
    }
    else {
      pbVar4 = *(byte **)(pCVar2 + 0x98c);
      puVar8 = *(undefined4 **)(pCVar2 + 0x18c);
    }
    goto LAB_00502b3b;
  case (CPanelTy)0x2:
    thunk_FUN_00540760(*(undefined4 **)(pCStack_c + 0x18c),0,0x46,'\x01',
                       *(byte **)(pCStack_c + 0x988));
    thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x18c),0x31,0,'\x06',*(byte **)(pCVar2 + 0x98c));
    break;
  case (CPanelTy)0x3:
    thunk_FUN_00540760(*(undefined4 **)(pCStack_c + 0x18c),0,0x46,'\x01',
                       *(byte **)(pCStack_c + 0x974));
    switch(*(undefined4 *)(pCVar2 + 0xb99)) {
    case 9:
    case 0x15:
    case 0xa6:
    case 0xa7:
    case 0xaf:
    case 0xbd:
      pbVar4 = *(byte **)(pCVar2 + 0x97c);
      puVar8 = *(undefined4 **)(pCVar2 + 0x18c);
      break;
    default:
      pbVar4 = *(byte **)(pCVar2 + 0x990);
      goto LAB_00502b2d;
    }
LAB_00502b3b:
    thunk_FUN_00540760(puVar8,0x31,0,'\x06',pbVar4);
    break;
  case (CPanelTy)0x4:
    thunk_FUN_00540760(*(undefined4 **)(pCStack_c + 0x18c),0,0x46,'\x01',
                       *(byte **)(pCStack_c + 0x974));
    thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x18c),0x31,0,'\x06',*(byte **)(pCVar2 + 0x97c));
  }
  if (pCVar2[0xb9e] == (CPanelTy)0x1) {
    switch(*(undefined4 *)(pCVar2 + 0xb99)) {
    case 0x1a:
      pbVar4 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b2),3);
      thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x18c),0x3c,0x84,'\x01',pbVar4);
      bVar6 = 0;
      uStack_8 = uStack_8 & 0xffffff00;
      if (((byte)pCVar2[0xbb6] & 0xfe) != 0) {
        do {
          pbVar4 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b6),3);
          thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x18c),(uStack_8 & 0xff) * 4 + 0x3f,0x87,
                             '\x01',pbVar4);
          bVar6 = bVar6 + 1;
          uStack_8 = CONCAT31(uStack_8._1_3_,bVar6);
        } while (bVar6 < (byte)pCVar2[0xbb6] >> 1);
      }
      if (bVar6 < 0x14) {
        iVar5 = 0x14 - (uStack_8 & 0xff);
        iVar3 = (uStack_8 & 0xff) * 4 + 0x3f;
        do {
          pbVar4 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x18c),iVar3,0x87,'\x01',pbVar4);
          iVar3 = iVar3 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      break;
    case 0x1b:
    case 0x1d:
    case 0x23:
    case 0x24:
      if (pCVar2[0xbcd] != (CPanelTy)0xff) {
        pbVar4 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b2),3);
        thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x18c),0x3c,0x84,'\x01',pbVar4);
        CVar7 = (CPanelTy)0x0;
        uStack_8 = uStack_8 & 0xffffff00;
        if (pCVar2[0xbcd] != (CPanelTy)0x0) {
          do {
            pbVar4 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b6),1);
            thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x18c),(uStack_8 & 0xff) * 4 + 0x3f,0x87,
                               '\x01',pbVar4);
            CVar7 = (CPanelTy)((char)CVar7 + '\x01');
            uStack_8 = CONCAT31(uStack_8._1_3_,CVar7);
          } while ((byte)CVar7 < (byte)pCVar2[0xbcd]);
        }
        if ((byte)CVar7 < 0x14) {
          iVar5 = 0x14 - (uStack_8 & 0xff);
          iVar3 = (uStack_8 & 0xff) * 4 + 0x3f;
          do {
            pbVar4 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b6),0);
            thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x18c),iVar3,0x87,'\x01',pbVar4);
            iVar3 = iVar3 + 4;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
    }
  }
  if (-1 < (int)*(uint *)(pCVar2 + 0x154)) {
    FUN_006b3640(DAT_008075a8,*(uint *)(pCVar2 + 0x154),0xffffffff,*(uint *)(pCVar2 + 0x48),
                 *(uint *)(pCVar2 + 0xa0));
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  return;
}

