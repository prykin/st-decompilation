
void FUN_00502990(void)

{
  code *pcVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar6;
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  uint local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar4 = FUN_006ad4d0(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x1ed,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7c2524,0x1ed);
    return;
  }
  switch(*(undefined1 *)(local_c + 0xb9e)) {
  case 0:
    thunk_FUN_00540760(*(undefined4 **)(local_c + 0x18c),0,0x46,'\x01',*(byte **)(local_c + 0x974));
    thunk_FUN_00540760(*(undefined4 **)(local_c + 0x18c),0x31,0,'\x06',*(byte **)(local_c + 0x97c));
    break;
  case 1:
    thunk_FUN_00540760(*(undefined4 **)(local_c + 0x18c),0,0x46,'\x01',*(byte **)(local_c + 0x988));
    if (*(int *)(local_c + 0xb99) == 0xbd) {
      pbVar3 = *(byte **)(local_c + 0x97c);
LAB_00502b2d:
      puVar6 = *(undefined4 **)(local_c + 0x18c);
    }
    else {
      pbVar3 = *(byte **)(local_c + 0x98c);
      puVar6 = *(undefined4 **)(local_c + 0x18c);
    }
    goto LAB_00502b3b;
  case 2:
    thunk_FUN_00540760(*(undefined4 **)(local_c + 0x18c),0,0x46,'\x01',*(byte **)(local_c + 0x988));
    thunk_FUN_00540760(*(undefined4 **)(local_c + 0x18c),0x31,0,'\x06',*(byte **)(local_c + 0x98c));
    break;
  case 3:
    thunk_FUN_00540760(*(undefined4 **)(local_c + 0x18c),0,0x46,'\x01',*(byte **)(local_c + 0x974));
    switch(*(undefined4 *)(local_c + 0xb99)) {
    case 9:
    case 0x15:
    case 0xa6:
    case 0xa7:
    case 0xaf:
    case 0xbd:
      pbVar3 = *(byte **)(local_c + 0x97c);
      puVar6 = *(undefined4 **)(local_c + 0x18c);
      break;
    default:
      pbVar3 = *(byte **)(local_c + 0x990);
      goto LAB_00502b2d;
    }
LAB_00502b3b:
    thunk_FUN_00540760(puVar6,0x31,0,'\x06',pbVar3);
    break;
  case 4:
    thunk_FUN_00540760(*(undefined4 **)(local_c + 0x18c),0,0x46,'\x01',*(byte **)(local_c + 0x974));
    thunk_FUN_00540760(*(undefined4 **)(local_c + 0x18c),0x31,0,'\x06',*(byte **)(local_c + 0x97c));
  }
  if (*(char *)(local_c + 0xb9e) == '\x01') {
    switch(*(undefined4 *)(local_c + 0xb99)) {
    case 0x1a:
      pbVar3 = (byte *)FUN_0070b3a0(*(int *)(local_c + 0x2b2),3);
      thunk_FUN_00540760(*(undefined4 **)(local_c + 0x18c),0x3c,0x84,'\x01',pbVar3);
      bVar5 = 0;
      local_8 = local_8 & 0xffffff00;
      if ((*(byte *)(local_c + 0xbb6) & 0xfe) != 0) {
        do {
          pbVar3 = (byte *)FUN_0070b3a0(*(int *)(local_c + 0x2b6),3);
          thunk_FUN_00540760(*(undefined4 **)(local_c + 0x18c),(local_8 & 0xff) * 4 + 0x3f,0x87,
                             '\x01',pbVar3);
          bVar5 = bVar5 + 1;
          local_8 = CONCAT31(local_8._1_3_,bVar5);
        } while (bVar5 < *(byte *)(local_c + 0xbb6) >> 1);
      }
      if (bVar5 < 0x14) {
        iVar4 = 0x14 - (local_8 & 0xff);
        iVar2 = (local_8 & 0xff) * 4 + 0x3f;
        do {
          pbVar3 = (byte *)FUN_0070b3a0(*(int *)(local_c + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(local_c + 0x18c),iVar2,0x87,'\x01',pbVar3);
          iVar2 = iVar2 + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      break;
    case 0x1b:
    case 0x1d:
    case 0x23:
    case 0x24:
      if (*(char *)(local_c + 0xbcd) != -1) {
        pbVar3 = (byte *)FUN_0070b3a0(*(int *)(local_c + 0x2b2),3);
        thunk_FUN_00540760(*(undefined4 **)(local_c + 0x18c),0x3c,0x84,'\x01',pbVar3);
        bVar5 = 0;
        local_8 = local_8 & 0xffffff00;
        if (*(char *)(local_c + 0xbcd) != '\0') {
          do {
            pbVar3 = (byte *)FUN_0070b3a0(*(int *)(local_c + 0x2b6),1);
            thunk_FUN_00540760(*(undefined4 **)(local_c + 0x18c),(local_8 & 0xff) * 4 + 0x3f,0x87,
                               '\x01',pbVar3);
            bVar5 = bVar5 + 1;
            local_8 = CONCAT31(local_8._1_3_,bVar5);
          } while (bVar5 < *(byte *)(local_c + 0xbcd));
        }
        if (bVar5 < 0x14) {
          iVar4 = 0x14 - (local_8 & 0xff);
          iVar2 = (local_8 & 0xff) * 4 + 0x3f;
          do {
            pbVar3 = (byte *)FUN_0070b3a0(*(int *)(local_c + 0x2b6),0);
            thunk_FUN_00540760(*(undefined4 **)(local_c + 0x18c),iVar2,0x87,'\x01',pbVar3);
            iVar2 = iVar2 + 4;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
    }
  }
  if (-1 < (int)*(uint *)(local_c + 0x154)) {
    FUN_006b3640(DAT_008075a8,*(uint *)(local_c + 0x154),0xffffffff,*(uint *)(local_c + 0x48),
                 *(uint *)(local_c + 0xa0));
  }
  DAT_00858df8 = (undefined4 *)local_50;
  return;
}

