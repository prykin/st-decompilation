
int FUN_0065f660(short *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_64;
  undefined4 local_60 [16];
  short local_20 [10];
  void *local_c;
  int local_8;
  
  local_64 = DAT_00858df8;
  DAT_00858df8 = &local_64;
  iVar6 = __setjmp3(local_60,0,unaff_EDI,unaff_ESI);
  if (iVar6 != 0) {
    DAT_00858df8 = (undefined4 *)local_64;
    iVar9 = FUN_006ad4d0(s_E____titans_ai_ai_flt_cpp_007d2b80,0x303,0,iVar6,&DAT_007a4ccc);
    if (iVar9 == 0) {
      FUN_006a5e40(iVar6,0,0x7d2b80,0x304);
      return iVar6;
    }
    pcVar5 = (code *)swi(3);
    iVar6 = (*pcVar5)();
    return iVar6;
  }
  if (0 < param_2) {
    local_8 = 0;
    do {
      local_20[0] = 0;
      local_20[1] = 0;
      local_20[2] = 0;
      local_20[3] = 0;
      local_20[4] = 0;
      local_20[5] = 0;
      local_20[6] = 0;
      local_20[7] = 0;
      local_20[8] = 0;
      local_20[9] = 0;
      sVar1 = param_1[1];
      sVar2 = param_1[4];
      if (sVar1 < 0) {
        iVar6 = *(int *)((int)local_c + 0x1c);
      }
      else {
        iVar6 = *(int *)((int)local_c + 0x1c);
      }
      uVar7 = iVar6 * 0x41c64e6d + 0x3039;
      *(uint *)((int)local_c + 0x1c) = uVar7;
      sVar3 = param_1[3];
      sVar4 = *param_1;
      if (sVar4 < 0) {
        iVar6 = *(int *)((int)local_c + 0x1c);
      }
      else {
        iVar6 = *(int *)((int)local_c + 0x1c);
      }
      uVar8 = iVar6 * 0x41c64e6d + 0x3039;
      *(uint *)((int)local_c + 0x1c) = uVar8;
      iVar6 = thunk_FUN_00675950((uVar8 >> 0x10) % (uint)(int)sVar3 + (int)sVar4,
                                 (uVar7 >> 0x10) % (uint)(int)sVar2 + (int)sVar1,2,local_20,
                                 local_20 + 1,local_20 + 2,0);
      if ((iVar6 != 0) && (iVar6 = thunk_FUN_0065f5c0(local_c,local_20), iVar6 != 0)) {
        DAT_00858df8 = (undefined4 *)local_64;
        return 0;
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_2);
  }
  DAT_00858df8 = (undefined4 *)local_64;
  return 0;
}

