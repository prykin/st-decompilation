
undefined4
FUN_004f3130(byte param_1,undefined4 param_2,int param_3,int param_4,int param_5,byte param_6,
            int param_7,undefined4 param_8,undefined4 param_9,short param_10,undefined2 param_11,
            int param_12,char *param_13,int param_14,undefined4 param_15,undefined4 param_16)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar6;
  undefined4 *local_1d0;
  undefined4 local_1cc [16];
  int local_18c [4];
  int local_17c;
  undefined4 local_178;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined2 local_100;
  short local_fe;
  int local_fc;
  undefined4 local_f4;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined2 local_dc;
  short local_da;
  int local_d8;
  undefined4 local_d0;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_10;
  undefined4 local_c;
  ushort *local_8;
  
  local_8 = (ushort *)0x0;
  local_c = 0;
  local_1d0 = DAT_00858df8;
  DAT_00858df8 = &local_1d0;
  iVar3 = __setjmp3(local_1cc,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    piVar6 = local_18c;
    for (iVar3 = 0x5f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
    local_18c[1] = param_2;
    local_18c[0] = param_3;
    if (param_7 != 0) {
      wsprintfA((LPSTR)(local_10 + 0x1e1),&DAT_007c181c,param_7);
      local_8 = FUN_006f1ce0(param_6,(LPSTR)(local_10 + 0x1e1),(int *)0x0,1);
    }
    if (param_6 == 1) {
      local_17c = *(int *)(local_8 + 2);
      local_178 = *(undefined4 *)(local_8 + 4);
    }
    else {
      local_17c = param_14;
      local_178 = param_15;
      if (param_6 == 6) {
        local_17c = *(int *)(local_8 + 2);
        local_178 = *(undefined4 *)(local_8 + 4);
      }
    }
    if (param_4 < 0) {
      param_4 = (*(int *)(local_10 + 0x68 + (uint)param_1 * 4) - local_17c) / 2;
    }
    uVar2 = (uint)param_1;
    local_18c[2] = *(int *)(local_10 + 0x3c + uVar2 * 4) + param_4;
    iVar3 = *(int *)(local_10 + 0x130);
    switch(uVar2) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar3 = *(int *)(local_10 + 0x134);
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      iVar3 = *(int *)(local_10 + 0x138);
    }
    if (iVar3 == 0) {
      if ((param_1 == 1) || (param_1 == 7)) {
        local_18c[3] = *(int *)(local_10 + 0xc0);
      }
      else {
        local_18c[3] = 0;
      }
      local_18c[3] = local_18c[3] + DAT_00806734;
    }
    else {
      local_18c[3] = *(int *)(local_10 + 0x94 + uVar2 * 4);
    }
    local_18c[3] = local_18c[3] + param_5;
    if (local_8 != (ushort *)0x0) {
      FUN_006f20e0((uint *)&local_8);
    }
    local_16c = *(undefined4 *)(local_10 + 8);
    local_124 = param_9;
    local_164 = param_8;
    local_168 = 2;
    local_148 = 2;
    local_128 = 2;
    local_144 = param_16;
    local_84 = 1;
    local_80 = 1;
    if (param_10 != 0) {
      local_10c = 0x101;
      local_108 = 3;
      local_104 = 0x4201;
      local_100 = param_11;
      local_fe = param_10;
      local_fc = param_12;
      local_f4 = 0;
      local_d0 = 1;
      local_e8 = 0x101;
      local_e4 = 3;
      local_e0 = 0x4202;
      local_dc = param_11;
      local_da = param_10;
      local_d8 = param_12;
    }
    if ((param_10 == 1) && (-1 < *(int *)(param_12 + 9))) {
      local_5c = *(undefined4 *)(&DAT_00807e66 + *(int *)(param_12 + 9) * 4);
      local_60 = 8;
    }
    local_14c = local_16c;
    local_12c = local_16c;
    if (param_13 != (char *)0x0) {
      local_68 = FUN_0070aa70(DAT_00806790,param_13,0,1);
      local_64 = FUN_0070a6f0(DAT_00806790,0x12,param_13,1);
    }
    (**(code **)(**(int **)(local_10 + 0xc) + 8))(2,&local_c,0,local_18c,0);
    DAT_00858df8 = local_1d0;
    return local_c;
  }
  DAT_00858df8 = local_1d0;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x1b3,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  FUN_006a5e40(iVar3,0,0x7c1a4c,0x1b3);
  return 0;
}

