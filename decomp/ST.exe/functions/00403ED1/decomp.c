
uint thunk_FUN_005049a0(void)

{
  code *pcVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar7;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  uint uStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_54 = DAT_00858df8;
  DAT_00858df8 = &uStack_54;
  iVar2 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    thunk_FUN_004f1f60(*(int *)(iStack_c + 0x194),0x5c,0x50,(uint)*(byte *)(iStack_c + 0xc33),0x2714
                      );
    pbVar3 = (byte *)FUN_0070b3a0(*(int *)(iStack_c + 0x2b2),1);
    thunk_FUN_00540760(*(undefined4 **)(iStack_c + 0x194),0x33,0x7b,'\x01',pbVar3);
    bVar5 = 0;
    uStack_8 = uStack_8 & 0xffffff00;
    uStack_10 = ((uint)*(byte *)(iStack_c + 0xc33) * 0x21) / 100;
    uVar4 = (uint)*(byte *)(iStack_c + 0xc33) * -0x70a3d701;
    if (uStack_10 != 0) {
      uVar7 = 0;
      do {
        pbVar3 = (byte *)FUN_0070b3a0(*(int *)(iStack_c + 0x2b6),1);
        thunk_FUN_00540760(*(undefined4 **)(iStack_c + 0x194),uVar7 * 4 + 0x35,0x7d,'\x01',pbVar3);
        bVar5 = bVar5 + 1;
        uStack_8 = CONCAT31(uStack_8._1_3_,bVar5);
        uVar7 = (uint)bVar5;
        uVar4 = uStack_10;
      } while (uVar7 < uStack_10);
    }
    if (bVar5 < 0x21) {
      iVar6 = 0x21 - (uStack_8 & 0xff);
      iVar2 = (uStack_8 & 0xff) * 4 + 0x35;
      do {
        pbVar3 = (byte *)FUN_0070b3a0(*(int *)(iStack_c + 0x2b6),0);
        uVar4 = thunk_FUN_00540760(*(undefined4 **)(iStack_c + 0x194),iVar2,0x7d,'\x01',pbVar3);
        iVar2 = iVar2 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    DAT_00858df8 = (undefined4 *)uStack_54;
    return uVar4;
  }
  DAT_00858df8 = (undefined4 *)uStack_54;
  iVar6 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x68,0,iVar2,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  uVar4 = FUN_006a5e40(iVar2,0,0x7c2700,0x68);
  return uVar4;
}

