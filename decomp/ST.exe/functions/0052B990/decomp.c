
void __fastcall FUN_0052b990(int param_1)

{
  uint uVar1;
  byte bVar2;
  BITMAPINFO *pBVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_8;
  
  bVar2 = ((DAT_0080874e == '\x03') - 1U & 0xf9) + 0x14;
  FUN_006b5f80(DAT_008075a8,*(int *)(param_1 + 0x30),*(int *)(param_1 + 0x34),
               *(int *)(param_1 + 0x58),*(int *)(param_1 + 0x5c));
  if (*(char *)(param_1 + 0xa4) == '\0') {
    uVar1 = (uint)bVar2;
    local_8._0_1_ = 1;
    if (0 < (int)(uVar1 - *(byte *)(param_1 + 0xa2))) {
      uVar7 = 1;
      do {
        pBVar3 = (BITMAPINFO *)FUN_0070b3a0(*(int *)(param_1 + 0x82),0);
        PutDDX(*(int *)(param_1 + 0x30) + -4 + uVar7 * 4,*(int *)(param_1 + 0x34),'\x01',pBVar3);
        local_8._0_1_ = (byte)local_8 + 1;
        uVar7 = (uint)(byte)local_8;
      } while ((int)uVar7 <= (int)(uVar1 - *(byte *)(param_1 + 0xa2)));
    }
    bVar4 = (bVar2 - *(char *)(param_1 + 0xa2)) + 1;
    if (bVar4 <= bVar2) {
      iVar5 = (uint)bVar4 * 4;
      iVar6 = (uVar1 - bVar4) + 1;
      do {
        pBVar3 = (BITMAPINFO *)FUN_0070b3a0(*(int *)(param_1 + 0x82),4);
        PutDDX(*(int *)(param_1 + 0x30) + -4 + iVar5,*(int *)(param_1 + 0x34),'\x01',pBVar3);
        iVar5 = iVar5 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else {
    bVar4 = 1;
    local_8 = 1;
    if (*(char *)(param_1 + 0xa2) != '\0') {
      do {
        pBVar3 = (BITMAPINFO *)
                 FUN_0070b3a0(*(int *)(param_1 + 0x82),(-(uint)(DAT_0080874e != '\x03') & 2) + 1);
        PutDDX(*(int *)(param_1 + 0x30) + -4 + local_8 * 4,*(int *)(param_1 + 0x34),'\x01',pBVar3);
        bVar4 = bVar4 + 1;
        local_8 = (uint)bVar4;
      } while (bVar4 <= *(byte *)(param_1 + 0xa2));
    }
    bVar4 = *(char *)(param_1 + 0xa2) + 1;
    if (bVar4 <= bVar2) {
      iVar5 = (uint)bVar4 * 4;
      iVar6 = ((uint)bVar2 - (uint)bVar4) + 1;
      do {
        pBVar3 = (BITMAPINFO *)FUN_0070b3a0(*(int *)(param_1 + 0x82),0);
        PutDDX(*(int *)(param_1 + 0x30) + -4 + iVar5,*(int *)(param_1 + 0x34),'\x01',pBVar3);
        iVar5 = iVar5 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return;
    }
  }
  return;
}

