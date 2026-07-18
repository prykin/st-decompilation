
int FUN_005dce90(int *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  int *piVar5;
  void *unaff_EDI;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 local_8c;
  undefined4 local_88 [16];
  int local_48 [8];
  undefined4 local_28 [8];
  int *local_8;
  
  local_8c = DAT_00858df8;
  DAT_00858df8 = &local_8c;
  iVar3 = __setjmp3(local_88,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_8c;
    iVar4 = FUN_006ad4d0(s_E____titans_Start_startsys_cpp_007cd718,0x31a,0,iVar3,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(iVar3,0,0x7cd718,0x31b);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  uVar1 = param_1[4];
  if (uVar1 < 0x6121) {
    if (uVar1 == 0x6120) {
      if (local_8[8] != 0) {
        FUN_006e56b0(local_8,local_8[8]);
      }
      (**(code **)(*local_8 + 8))(0x306,local_8 + 8,0,param_1,0);
    }
    else {
      if (uVar1 < 0x6106) {
        if (uVar1 == 0x6105) {
          if (local_8[8] != 0) {
            FUN_006e56b0(local_8,local_8[8]);
          }
          (**(code **)(*local_8 + 8))(0x30a,local_8 + 8,0,param_1,0);
          goto switchD_005dd1c0_default;
        }
        if (0x6103 < uVar1) {
          if (uVar1 == 0x6104) {
            if (local_8[8] != 0) {
              FUN_006e56b0(local_8,local_8[8]);
            }
            (**(code **)(*local_8 + 8))(0x302,local_8 + 8,0,param_1,0);
          }
          goto switchD_005dd1c0_default;
        }
        if (uVar1 == 0x6103) {
          if (local_8[8] != 0) {
            FUN_006e56b0(local_8,local_8[8]);
          }
          (**(code **)(*local_8 + 8))(0x304,local_8 + 8,0,param_1,0);
          goto switchD_005dd1c0_default;
        }
        if (uVar1 == 8) {
          DAT_00807654 = 0x21;
          DAT_0080879c = 0;
          if (DAT_00806758 != (undefined4 *)0x0) {
            FUN_006f1170(DAT_00806758);
          }
          DAT_00806758 = (undefined4 *)0x0;
          if (DAT_00802a30 != 0) {
            thunk_FUN_00544940(DAT_00802a30);
          }
          FUN_006bbb20(DAT_0080759c,1);
          FUN_006ba780(DAT_0080759c,1);
          goto switchD_005dd1c0_default;
        }
        if (uVar1 != 0x6102) goto switchD_005dd1c0_default;
        piVar5 = local_8 + 8;
        if (local_8[8] != 0) {
          FUN_006e56b0(local_8,local_8[8]);
        }
        if ((DAT_0080fb72 != 0) || (DAT_00811768 == '\x02')) {
          puVar6 = local_28;
          for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          local_28[3] = 1;
          local_28[4] = 0x7102;
          FUN_006e3b50(local_28);
          goto switchD_005dd1c0_default;
        }
        if (DAT_00811768 != '\x01') {
          (**(code **)(*local_8 + 8))(0x301,piVar5,0,param_1[5],0);
          goto switchD_005dd1c0_default;
        }
        if (DAT_00811764 == 0) {
          DAT_00811768 = '\0';
          (**(code **)(*local_8 + 8))(0x301,piVar5,0,0,0);
          goto switchD_005dd1c0_default;
        }
        if ((*(byte *)(DAT_00811764 + 4) & 1) == 0) {
          DAT_0080877e = 0;
          param_1[5] = 0;
          (**(code **)(*local_8 + 8))(0x30d,piVar5,0,param_1,0);
          goto switchD_005dd1c0_default;
        }
        DAT_0080877e = 1;
        param_1[5] = 4;
      }
      else {
        if (uVar1 == 0x6109) {
          if (local_8[8] != 0) {
            FUN_006e56b0(local_8,local_8[8]);
          }
          (**(code **)(*local_8 + 8))(0x30d,local_8 + 8,0,param_1,0);
          goto switchD_005dd1c0_default;
        }
        if (uVar1 == 0x610a) {
          if (local_8[8] != 0) {
            FUN_006e56b0(local_8,local_8[8]);
          }
          (**(code **)(*local_8 + 8))(0x30e,local_8 + 8,0,param_1,0);
          goto switchD_005dd1c0_default;
        }
        if (uVar1 != 0x611f) goto switchD_005dd1c0_default;
        if (local_8[8] != 0) {
          FUN_006e56b0(local_8,local_8[8]);
        }
      }
      (**(code **)(*local_8 + 8))(0x305,local_8 + 8,0,param_1,0);
    }
  }
  else {
    if (uVar1 < 0x6336) {
      if (uVar1 < 0x6332) {
        switch(uVar1) {
        case 0x6121:
          if (local_8[8] != 0) {
            FUN_006e56b0(local_8,local_8[8]);
          }
          (**(code **)(*local_8 + 8))(0x30b,local_8 + 8,0,param_1,0);
          break;
        case 0x6122:
          if (local_8[8] != 0) {
            FUN_006e56b0(local_8,local_8[8]);
          }
          (**(code **)(*local_8 + 8))(0x307,local_8 + 8,0,param_1,0);
          break;
        case 0x6123:
          if (local_8[8] != 0) {
            FUN_006e56b0(local_8,local_8[8]);
          }
          (**(code **)(*local_8 + 8))(0x308,local_8 + 8,0,param_1,0);
          break;
        case 0x6124:
          if (local_8[8] != 0) {
            FUN_006e56b0(local_8,local_8[8]);
          }
          (**(code **)(*local_8 + 8))(0x30c,local_8 + 8,0,param_1,0);
        }
        goto switchD_005dd1c0_default;
      }
    }
    else if (uVar1 < 0x6941) {
      if ((uVar1 < 0x693f) && ((uVar1 < 0x633f || (0x6341 < uVar1)))) goto switchD_005dd1c0_default;
    }
    else if ((uVar1 < 0xc0a0) || (0xc0a2 < uVar1)) goto switchD_005dd1c0_default;
    iVar3 = local_8[8];
    if (iVar3 != 0) {
      piVar5 = param_1;
      piVar7 = local_48;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar7 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 1;
      }
      local_48[3] = 2;
      local_48[2] = iVar3;
      (**(code **)(*local_8 + 0x18))(local_48);
    }
  }
switchD_005dd1c0_default:
  DAT_00858df8 = (undefined4 *)local_8c;
  iVar3 = FUN_006e5f00((int)param_1);
  return iVar3;
}

