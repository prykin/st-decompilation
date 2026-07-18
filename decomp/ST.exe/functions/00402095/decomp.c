
void __thiscall STAllPlayersC::DeletePGPairs(STAllPlayersC *this,char param_1)

{
  code *pcVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  uint uVar5;
  void *unaff_EDI;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  byte *pbStack_14;
  byte *pbStack_10;
  byte *pbStack_c;
  byte *pbStack_8;
  
  uStack_58 = DAT_00858df8;
  pbStack_8 = *(byte **)((int)&DAT_007f5816 + param_1 * 0xa62);
  DAT_00858df8 = &uStack_58;
  iVar3 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  pbVar2 = pbStack_8;
  if (iVar3 == 0) {
    if (pbStack_8 != (byte *)0x0) {
      iVar3 = *(int *)(pbStack_8 + 0xc);
      if ((iVar3 != 0) && (uVar5 = 0, 0 < iVar3)) {
        do {
          FUN_006acc70((int)pbVar2,uVar5,&pbStack_14);
          FUN_006ae110(pbStack_14);
          FUN_006ae110(pbStack_10);
          FUN_006ae110(pbStack_c);
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < iVar3);
      }
      FUN_006ae110(pbVar2);
      *(undefined4 *)((int)&DAT_007f5816 + param_1 * 0xa62) = 0;
    }
    DAT_00858df8 = (undefined4 *)uStack_58;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_58;
  if (iVar3 != -0x5001fff7) {
    iVar4 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x29b3,0,0,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7a6004,0x29b4);
  }
  return;
}

