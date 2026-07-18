
void thunk_FUN_00501190(void)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar6;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  uint uStack_14;
  int iStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_58 = DAT_00858df8;
  DAT_00858df8 = &uStack_58;
  iVar3 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    iVar3 = FUN_0070b3a0(*(int *)(iStack_10 + 0x2b2),0);
    iVar3 = (*(int *)(*(int *)(iStack_10 + 0x18c) + 4) - *(int *)(iVar3 + 4)) / 2;
    pbVar4 = (byte *)FUN_0070b3a0(*(int *)(iStack_10 + 0x2b2),-(uint)(DAT_0080874e != '\x01') & 6);
    thunk_FUN_00540760(*(undefined4 **)(iStack_10 + 0x18c),iVar3,0x50,'\x01',pbVar4);
    uStack_8 = uStack_8 & 0xffffff00;
    if (*(char *)(iStack_10 + 0xbb6) != '\0') {
      do {
        pbVar4 = (byte *)FUN_0070b3a0(*(int *)(iStack_10 + 0x2b6),1);
        thunk_FUN_00540760(*(undefined4 **)(iStack_10 + 0x18c),iVar3 + 3 + (uStack_8 & 0xff) * 4,
                           0x53,'\x01',pbVar4);
        bVar2 = (byte)uStack_8 + 1;
        uStack_8 = CONCAT31(uStack_8._1_3_,bVar2);
      } while (bVar2 < *(byte *)(iStack_10 + 0xbb6));
    }
    uVar6 = uStack_8 & 0xff;
    uStack_c = CONCAT31(uStack_c._1_3_,(byte)uStack_8);
    uStack_14 = uVar6;
    if (uVar6 < *(byte *)(iStack_10 + 2999) + uVar6) {
      do {
        pbVar4 = (byte *)FUN_0070b3a0(*(int *)(iStack_10 + 0x2b6),5);
        thunk_FUN_00540760(*(undefined4 **)(iStack_10 + 0x18c),iVar3 + 3 + uVar6 * 4,0x53,'\x01',
                           pbVar4);
        bVar2 = (byte)uStack_c + 1;
        uStack_c = CONCAT31(uStack_c._1_3_,bVar2);
        uVar6 = (uint)bVar2;
      } while ((int)uVar6 < (int)(*(byte *)(iStack_10 + 2999) + uStack_14));
    }
    uVar6 = uStack_c & 0xff;
    uStack_8._0_1_ = (byte)uStack_c;
    uStack_14 = uVar6;
    if (uVar6 < *(byte *)(iStack_10 + 0xbb5) + uVar6) {
      do {
        pbVar4 = (byte *)FUN_0070b3a0(*(int *)(iStack_10 + 0x2b6),2);
        thunk_FUN_00540760(*(undefined4 **)(iStack_10 + 0x18c),iVar3 + 3 + uVar6 * 4,0x53,'\x01',
                           pbVar4);
        uStack_8._0_1_ = (byte)uStack_8 + 1;
        uVar6 = (uint)(byte)uStack_8;
      } while ((int)uVar6 < (int)(*(byte *)(iStack_10 + 0xbb5) + uStack_14));
    }
    DAT_00858df8 = (undefined4 *)uStack_58;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_58;
  iVar5 = FUN_006ad4d0(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x32,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c2524,0x32);
  return;
}

