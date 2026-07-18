
void thunk_FUN_0048cc80(char param_1,short param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_64;
  undefined4 auStack_60 [16];
  int iStack_20;
  short sStack_1c;
  int iStack_1a;
  undefined4 uStack_16;
  int iStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 200;
  uStack_64 = DAT_00858df8;
  DAT_00858df8 = &uStack_64;
  iVar4 = __setjmp3(auStack_60,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_64;
    if (iVar4 != -0x5001fff7) {
      iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4b84,0,iVar4,&DAT_007a4ccc);
      if (iVar6 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_006a5e40(iVar4,0,0x7a9d3c,0x4b85);
    }
    return;
  }
  if (*(int *)(iStack_10 + 0x47b) == 0) {
    puVar5 = FUN_006ae290((uint *)0x0,10,0xe,5);
    *(uint **)(iStack_10 + 0x47b) = puVar5;
  }
  uVar1 = (*(uint **)(iStack_10 + 0x47b))[3];
  uVar3 = uVar1;
  if (uVar1 != 0) {
    while (uStack_c = uVar3, uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      FUN_006acc70(*(int *)(iStack_10 + 0x47b),uVar1,&iStack_20);
      uVar3 = uVar1;
      if (((sStack_1c != -1) && (uVar3 = uStack_c, iStack_20 == param_1)) && (sStack_1c == param_2))
      {
        iStack_1a = iStack_1a + param_3;
        uStack_16 = uStack_8;
        FUN_006ae140(*(uint **)(iStack_10 + 0x47b),uVar1,&iStack_20);
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a9d3c,0x4b76);
        uVar3 = uStack_c;
      }
    }
    iStack_20 = (int)param_1;
    sStack_1c = param_2;
    iStack_1a = param_3;
    uStack_16 = uStack_8;
    FUN_006ae140(*(uint **)(iStack_10 + 0x47b),uStack_c,&iStack_20);
    DAT_00858df8 = (undefined4 *)uStack_64;
    return;
  }
  iStack_20 = (int)param_1;
  sStack_1c = param_2;
  iStack_1a = param_3;
  uStack_16 = uStack_8;
  FUN_006ae1c0(*(uint **)(iStack_10 + 0x47b),&iStack_20);
  DAT_00858df8 = (undefined4 *)uStack_64;
  return;
}

