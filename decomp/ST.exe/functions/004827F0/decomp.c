
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::ExpIsOver */

void __thiscall STBoatC::ExpIsOver(STBoatC *this,uint param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  STBoatC *pSVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar7;
  undefined4 local_5c;
  undefined4 local_58 [16];
  short local_18 [4];
  uint local_10;
  uint local_c;
  STBoatC *local_8;
  
  local_10 = param_1 >> 0x10;
  local_c = param_1 & 0xffff;
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  local_8 = this;
  iVar5 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  uVar7 = local_c;
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)local_5c;
    iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3d7f,0,iVar5,&DAT_007a4ccc);
    if (iVar6 == 0) {
      FUN_006a5e40(iVar5,0,0x7a9d3c,0x3d80);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((int)local_c < 0) || ((int)((byte)local_8[0x281] - 1) < (int)local_c)) {
    FUN_006a5e40(-0x5001fff5,DAT_007ed77c,0x7a9d3c,0x3d71);
  }
  puVar1 = *(uint **)(local_8 + uVar7 * 4 + 0x282);
  if (puVar1 == (uint *)0x0) {
    FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7a9d3c,0x3d72);
  }
  uVar7 = local_10;
  FUN_006acc70((int)puVar1,local_10,(undefined4 *)local_18);
  if (local_18[0] == 0x7fff) {
    FUN_006a5e40(-0x5001fffe,DAT_007ed77c,0x7a9d3c,0x3d73);
  }
  local_18[0] = 0x7fff;
  FUN_006ae140(puVar1,uVar7,(undefined4 *)local_18);
  uVar7 = 0;
  bVar3 = true;
  if (0 < (int)puVar1[3]) {
    do {
      FUN_006acc70((int)puVar1,uVar7,(undefined4 *)local_18);
      if (local_18[0] != 0x7fff) {
        bVar3 = false;
        break;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)puVar1[3]);
  }
  pSVar4 = local_8;
  uVar7 = local_c;
  if (bVar3) {
    FUN_006ae110(*(byte **)(local_8 + local_c * 4 + 0x282));
    *(undefined4 *)(pSVar4 + uVar7 * 4 + 0x282) = 0;
  }
  DAT_00858df8 = (undefined4 *)local_5c;
  return;
}

