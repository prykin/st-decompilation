
void thunk_FUN_00501000(void)

{
  code *pcVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  int iStack_c;
  uint uStack_8;
  
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  iVar2 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    iVar2 = FUN_0070b3a0(*(int *)(iStack_c + 0x2b2),0);
    iVar2 = (*(int *)(*(int *)(iStack_c + 0x18c) + 4) - *(int *)(iVar2 + 4)) / 2;
    pbVar3 = (byte *)FUN_0070b3a0(*(int *)(iStack_c + 0x2b2),-(uint)(DAT_0080874e != '\x01') & 6);
    thunk_FUN_00540760(*(undefined4 **)(iStack_c + 0x18c),iVar2,0x50,'\x01',pbVar3);
    if (*(byte *)(iStack_c + 0xbcd) != 0xff) {
      if (0x28 < *(byte *)(iStack_c + 0xbcd)) {
        *(undefined1 *)(iStack_c + 0xbcd) = 0x28;
      }
      bVar5 = 0;
      uStack_8 = uStack_8 & 0xffffff00;
      if (*(char *)(iStack_c + 0xbcd) != '\0') {
        do {
          pbVar3 = (byte *)FUN_0070b3a0(*(int *)(iStack_c + 0x2b6),3);
          thunk_FUN_00540760(*(undefined4 **)(iStack_c + 0x18c),iVar2 + 3 + (uStack_8 & 0xff) * 4,
                             0x53,'\x01',pbVar3);
          bVar5 = bVar5 + 1;
          uStack_8 = CONCAT31(uStack_8._1_3_,bVar5);
        } while (bVar5 < *(byte *)(iStack_c + 0xbcd));
      }
    }
    DAT_00858df8 = (undefined4 *)uStack_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x21,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c2524,0x21);
  return;
}

