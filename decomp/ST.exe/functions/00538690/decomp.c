
undefined4
FUN_00538690(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            byte param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,short param_11,
            undefined2 param_12,undefined4 param_13,char *param_14,undefined4 param_15)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar5;
  undefined4 *local_1d0;
  undefined4 local_1cc [16];
  int local_18c [4];
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_15c;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_13c;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined2 local_100;
  short local_fe;
  undefined4 local_fc;
  undefined4 local_f4;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined2 local_dc;
  short local_da;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_68;
  int local_64;
  int local_10;
  ushort *local_c;
  undefined4 local_8;
  
  local_c = (ushort *)0x0;
  local_8 = 0;
  local_1d0 = DAT_00858df8;
  DAT_00858df8 = &local_1d0;
  iVar2 = __setjmp3(local_1cc,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    piVar5 = local_18c;
    for (iVar2 = 0x5f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
    local_18c[1] = param_1;
    local_18c[0] = param_2;
    wsprintfA((LPSTR)(local_10 + 0x6c),&DAT_007c181c,param_8);
    local_c = FUN_006f1ce0(param_7,(LPSTR)(local_10 + 0x6c),(int *)0x0,1);
    local_17c = *(undefined4 *)(local_c + 2);
    local_178 = *(undefined4 *)(local_c + 4);
    if ((param_5 == 0) || (local_18c[2] = DAT_00806730, *(int *)(local_10 + 0x5c) != 0)) {
      local_18c[2] = *(int *)(local_10 + 0x3c);
    }
    local_18c[2] = local_18c[2] + param_3;
    if ((param_6 == 0) || (local_18c[3] = DAT_00806734, *(int *)(local_10 + 0x5c) != 0)) {
      local_18c[3] = *(int *)(local_10 + 0x44);
    }
    local_18c[3] = local_18c[3] + param_4;
    FUN_006f20e0((uint *)&local_c);
    local_16c = *(undefined4 *)(local_10 + 8);
    local_144 = param_9;
    local_164 = param_9;
    local_148 = 2;
    local_168 = 2;
    local_15c = 0;
    local_13c = 1;
    local_128 = 2;
    local_124 = param_10;
    local_84 = 1;
    local_80 = 1;
    if (param_11 != 0) {
      local_d0 = param_15;
      local_10c = 0x101;
      local_108 = 3;
      local_104 = 0x4201;
      local_100 = param_12;
      local_fe = param_11;
      local_fc = param_13;
      local_f4 = 0;
      local_e8 = 0x101;
      local_e4 = 3;
      local_e0 = 0x4202;
      local_dc = param_12;
      local_da = param_11;
      local_d8 = param_13;
    }
    local_14c = local_16c;
    local_12c = local_16c;
    if (param_14 != (char *)0x0) {
      local_68 = FUN_0070aa70(DAT_00806790,param_14,0,1);
      local_64 = FUN_0070a6f0(DAT_00806790,0x12,param_14,1);
    }
    (**(code **)(**(int **)(local_10 + 0xc) + 8))(2,&local_8,0,local_18c,0);
    DAT_00858df8 = local_1d0;
    return local_8;
  }
  DAT_00858df8 = local_1d0;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_panel_cpp_007c7390,0x97,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  FUN_006a5e40(iVar2,0,0x7c7390,0x97);
  return 0;
}

