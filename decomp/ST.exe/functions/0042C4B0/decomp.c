
undefined4 FUN_0042c4b0(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  undefined4 local_54;
  undefined4 local_50 [16];
  int local_10;
  uint local_8;
  
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar2 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_4 == 0) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x2b4);
    }
    local_10 = *(int *)(param_4 + 0xc);
    uVar5 = 0;
    if (0 < local_10) {
      do {
        FUN_006acc70(param_4,uVar5,&local_8);
        if ((short)local_8 != -1) {
          thunk_FUN_0042c300(param_1,param_2,param_3,param_1,local_8);
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < local_10);
    }
    DAT_00858df8 = (undefined4 *)local_54;
  }
  else {
    DAT_00858df8 = (undefined4 *)local_54;
    if (iVar2 != -0x5001fff7) {
      iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,700,0,iVar2,&DAT_007a4ccc);
      if (iVar3 == 0) {
        FUN_006a5e40(iVar2,0,0x7a6004,0x2bd);
        return 0xffffffff;
      }
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  return 0;
}

