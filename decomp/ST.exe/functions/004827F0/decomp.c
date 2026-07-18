
void FUN_004827f0(uint param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar6;
  undefined4 local_5c;
  undefined4 local_58 [16];
  short local_18 [4];
  uint local_10;
  uint local_c;
  int local_8;
  
  local_10 = param_1 >> 0x10;
  local_c = param_1 & 0xffff;
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  iVar4 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  uVar6 = local_c;
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_5c;
    iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3d7f,0,iVar4,&DAT_007a4ccc);
    if (iVar5 == 0) {
      FUN_006a5e40(iVar4,0,0x7a9d3c,0x3d80);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((int)local_c < 0) || ((int)(*(byte *)(local_8 + 0x281) - 1) < (int)local_c)) {
    FUN_006a5e40(-0x5001fff5,DAT_007ed77c,0x7a9d3c,0x3d71);
  }
  puVar1 = *(uint **)(local_8 + 0x282 + uVar6 * 4);
  if (puVar1 == (uint *)0x0) {
    FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7a9d3c,0x3d72);
  }
  uVar6 = local_10;
  FUN_006acc70((int)puVar1,local_10,(undefined4 *)local_18);
  if (local_18[0] == 0x7fff) {
    FUN_006a5e40(-0x5001fffe,DAT_007ed77c,0x7a9d3c,0x3d73);
  }
  local_18[0] = 0x7fff;
  FUN_006ae140(puVar1,uVar6,(undefined4 *)local_18);
  uVar6 = 0;
  bVar3 = true;
  if (0 < (int)puVar1[3]) {
    do {
      FUN_006acc70((int)puVar1,uVar6,(undefined4 *)local_18);
      if (local_18[0] != 0x7fff) {
        bVar3 = false;
        break;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)puVar1[3]);
  }
  uVar6 = local_c;
  if (bVar3) {
    FUN_006ae110(*(byte **)(local_8 + 0x282 + local_c * 4));
    *(undefined4 *)(local_8 + 0x282 + uVar6 * 4) = 0;
  }
  DAT_00858df8 = (undefined4 *)local_5c;
  return;
}

