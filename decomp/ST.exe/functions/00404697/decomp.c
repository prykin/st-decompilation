
void thunk_FUN_00505960(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar6;
  int iVar7;
  undefined4 *puStack_70;
  undefined4 auStack_6c [16];
  uint uStack_2c;
  int iStack_28;
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  char *pcStack_18;
  int iStack_14;
  uint uStack_10;
  int iStack_c;
  int iStack_8;
  
  puStack_70 = DAT_00858df8;
  DAT_00858df8 = &puStack_70;
  iVar2 = __setjmp3(auStack_6c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = puStack_70;
    iVar7 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x184,0,iVar2,&DAT_007a4ccc);
    if (iVar7 == 0) {
      FUN_006a5e40(iVar2,0,0x7c2700,0x184);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006b4170(*(int *)(iStack_28 + 0x194),0,0x49,0x50,0x6f,0x37,0x3d);
  FUN_006b4170(*(int *)(iStack_28 + 0x194),0,0x4a,0x51,0x29,0x34,0x3f);
  FUN_006b4170(*(int *)(iStack_28 + 0x194),0,0x4b,0x52,0x27,0x32,0x3a);
  if (*(char *)(iStack_28 + 0x9d4) == '\x01') {
    uStack_20 = CONCAT31(uStack_20._1_3_,4);
    bVar5 = 3;
  }
  else {
    uStack_20 = (uint)uStack_20._1_3_ << 8;
    bVar5 = 4;
  }
  uStack_10 = CONCAT31(uStack_10._1_3_,bVar5);
  if (bVar5 != 0) {
    iStack_14 = 0;
    uStack_2c = uStack_20 & 0xff;
    iStack_1c = 0x54;
    pcStack_18 = (char *)(iStack_28 + 0xc11 + uStack_2c * 6);
    uStack_24 = (uint)bVar5;
    do {
      if (*pcStack_18 == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = ((uint)*(ushort *)(pcStack_18 + 2) * 10) / (uint)*(ushort *)(pcStack_18 + 4);
      }
      pbVar4 = (byte *)FUN_0070b3a0(*(int *)(iStack_28 + 0x2b2),5);
      thunk_FUN_00540760(*(undefined4 **)(iStack_28 + 0x194),0x74,iStack_1c,'\x01',pbVar4);
      uStack_10 = uStack_10 & 0xffffff00;
      if (uVar3 != 0) {
        uVar6 = 0;
        do {
          pbVar4 = (byte *)FUN_0070b3a0(*(int *)(iStack_28 + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)(iStack_28 + 0x194),uVar6 * 4 + 0x76,iStack_1c + 2,
                             '\x01',pbVar4);
          bVar5 = (byte)uStack_10 + 1;
          uStack_10 = CONCAT31(uStack_10._1_3_,bVar5);
          uVar6 = (uint)bVar5;
        } while (uVar6 < uVar3);
      }
      if ((byte)uStack_10 < 10) {
        iVar7 = 10 - (uStack_10 & 0xff);
        iVar2 = (uStack_10 & 0xff) * 4 + 0x76;
        do {
          pbVar4 = (byte *)FUN_0070b3a0(*(int *)(iStack_28 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(iStack_28 + 0x194),iVar2,iStack_1c + 2,'\x01',pbVar4);
          iVar2 = iVar2 + 4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      wsprintfA((LPSTR)(iStack_28 + 0x1e1),&DAT_007c1aa4,(uint)*(ushort *)(pcStack_18 + 2));
      iVar2 = iStack_1c;
      FUN_00710a90(*(int *)(iStack_28 + 0x194),0,0xa2,iStack_1c,0x15,0xc);
      FUN_007119c0((uint *)(iStack_28 + 0x1e1),-3,-1,5);
      if ((char)uStack_20 == '\0') {
        if (iVar2 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00505bca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&PTR_DAT_00505cec)[iStack_14])();
          return;
        }
      }
      else if (iVar2 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00505b82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&PTR_DAT_00505cdc)[iStack_14])();
        return;
      }
      if (*pcStack_18 == '\0') {
        iVar7 = *(int *)(iStack_28 + 0x292);
      }
      else {
        iVar7 = *(int *)(iStack_28 + 0x28e);
      }
      pbVar4 = (byte *)FUN_0070b3a0(iVar7,(-(uint)(*pcStack_18 != '\0') & 0x14) + 0xb + iStack_14 +
                                          uStack_2c);
      if (pbVar4 != (byte *)0x0) {
        thunk_FUN_00540760(*(undefined4 **)(iStack_28 + 0x194),iStack_c,iStack_8,'\x06',pbVar4);
      }
      iStack_14 = iStack_14 + 1;
      pcStack_18 = pcStack_18 + 6;
      iStack_1c = iVar2 + 0xb;
      uStack_24 = uStack_24 - 1;
    } while (uStack_24 != 0);
  }
  DAT_00858df8 = puStack_70;
  return;
}

