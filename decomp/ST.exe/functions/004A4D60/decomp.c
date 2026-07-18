
void FUN_004a4d60(int param_1,short param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  undefined4 unaff_ESI;
  uint uVar5;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  short local_8 [2];
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    if (iVar2 != -0x5001fff7) {
      iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1294,0,iVar2,&DAT_007a4ccc);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FUN_006a5e40(iVar2,0,0x7abe3c,0x1295);
    }
    return;
  }
  if (param_1 == 1) {
    if (*(int *)(local_c + 0x29b) != 1) {
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
    if (*(int *)(local_c + 0x29f) == 0) {
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
    iVar2 = *(int *)(*(int *)(local_c + 0x29f) + 0xc);
    uVar5 = 0;
    if (0 < iVar2) {
      do {
        FUN_006acc70(*(int *)(local_c + 0x29f),uVar5,(undefined4 *)local_8);
        if (local_8[0] == -1) break;
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar2);
    }
    psVar4 = &param_2;
LAB_004a4e27:
    FUN_006ae140(*(uint **)(local_c + 0x29f),uVar5,(undefined4 *)psVar4);
  }
  else {
    if (*(int *)(local_c + 0x29f) == 0) {
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
    iVar2 = *(int *)(*(int *)(local_c + 0x29f) + 0xc);
    uVar5 = 0;
    if (0 < iVar2) {
      do {
        FUN_006acc70(*(int *)(local_c + 0x29f),uVar5,(undefined4 *)local_8);
        if (local_8[0] == param_2) {
          local_8[0] = -1;
          local_8[1] = 0;
          psVar4 = local_8;
          goto LAB_004a4e27;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar2);
    }
  }
  thunk_FUN_004a3cd0(0,*(int *)(local_c + 0x29f),*(int *)(local_c + 0x29));
  DAT_00858df8 = (undefined4 *)local_50;
  return;
}

