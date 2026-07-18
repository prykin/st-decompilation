
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::GetMessage */

int __thiscall StartSystemTy::GetMessage(StartSystemTy *this,int *param_1)

{
  StartSystemTy *pSVar1;
  uint uVar2;
  code *pcVar3;
  StartSystemTy *pSVar4;
  int iVar5;
  cMf32 *this_00;
  int iVar6;
  undefined4 unaff_ESI;
  int *piVar7;
  void *unaff_EDI;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 local_8c;
  undefined4 local_88 [16];
  int local_48 [8];
  undefined4 local_28 [8];
  StartSystemTy *local_8;
  
  local_8c = DAT_00858df8;
  DAT_00858df8 = &local_8c;
  local_8 = this;
  iVar5 = __setjmp3(local_88,0,unaff_EDI,unaff_ESI);
  pSVar4 = local_8;
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)local_8c;
    iVar6 = FUN_006ad4d0(s_E____titans_Start_startsys_cpp_007cd718,0x31a,0,iVar5,&DAT_007a4ccc);
    if (iVar6 == 0) {
      FUN_006a5e40(iVar5,0,0x7cd718,0x31b);
      return 0xffff;
    }
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  uVar2 = param_1[4];
  if (uVar2 < 0x6121) {
    if (uVar2 == 0x6120) {
      pSVar1 = local_8 + 0x20;
      if (*(uint *)(local_8 + 0x20) != 0) {
        FUN_006e56b0(local_8,*(uint *)(local_8 + 0x20));
      }
      (**(code **)(*(int *)pSVar4 + 8))(0x306,pSVar1,0,param_1,0);
    }
    else {
      if (uVar2 < 0x6106) {
        if (uVar2 == 0x6105) {
          pSVar1 = local_8 + 0x20;
          if (*(uint *)(local_8 + 0x20) != 0) {
            FUN_006e56b0(local_8,*(uint *)(local_8 + 0x20));
          }
          (**(code **)(*(int *)pSVar4 + 8))(0x30a,pSVar1,0,param_1,0);
          goto switchD_005dd1c0_default;
        }
        if (0x6103 < uVar2) {
          if (uVar2 == 0x6104) {
            pSVar1 = local_8 + 0x20;
            if (*(uint *)(local_8 + 0x20) != 0) {
              FUN_006e56b0(local_8,*(uint *)(local_8 + 0x20));
            }
            (**(code **)(*(int *)pSVar4 + 8))(0x302,pSVar1,0,param_1,0);
          }
          goto switchD_005dd1c0_default;
        }
        if (uVar2 == 0x6103) {
          pSVar1 = local_8 + 0x20;
          if (*(uint *)(local_8 + 0x20) != 0) {
            FUN_006e56b0(local_8,*(uint *)(local_8 + 0x20));
          }
          (**(code **)(*(int *)pSVar4 + 8))(0x304,pSVar1,0,param_1,0);
          goto switchD_005dd1c0_default;
        }
        if (uVar2 == 8) {
          DAT_00807654 = 0x21;
          DAT_0080879c = 0;
          if (DAT_00806758 != (undefined4 *)0x0) {
            cMf32::delete(this_00,DAT_00806758);
          }
          DAT_00806758 = (undefined4 *)0x0;
          if (DAT_00802a30 != 0) {
            thunk_FUN_00544940(DAT_00802a30);
          }
          FUN_006bbb20(DAT_0080759c,1);
          FUN_006ba780(DAT_0080759c,1);
          goto switchD_005dd1c0_default;
        }
        if (uVar2 != 0x6102) goto switchD_005dd1c0_default;
        pSVar1 = local_8 + 0x20;
        if (*(uint *)(local_8 + 0x20) != 0) {
          FUN_006e56b0(local_8,*(uint *)(local_8 + 0x20));
        }
        if ((DAT_0080fb72 != 0) || (DAT_00811768 == '\x02')) {
          puVar8 = local_28;
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          local_28[3] = 1;
          local_28[4] = 0x7102;
          FUN_006e3b50(local_28);
          goto switchD_005dd1c0_default;
        }
        if (DAT_00811768 != '\x01') {
          (**(code **)(*(int *)pSVar4 + 8))(0x301,pSVar1,0,param_1[5],0);
          goto switchD_005dd1c0_default;
        }
        if (DAT_00811764 == 0) {
          DAT_00811768 = '\0';
          (**(code **)(*(int *)pSVar4 + 8))(0x301,pSVar1,0,0,0);
          goto switchD_005dd1c0_default;
        }
        if ((*(byte *)(DAT_00811764 + 4) & 1) == 0) {
          DAT_0080877e = 0;
          param_1[5] = 0;
          (**(code **)(*(int *)pSVar4 + 8))(0x30d,pSVar1,0,param_1,0);
          goto switchD_005dd1c0_default;
        }
        DAT_0080877e = 1;
        param_1[5] = 4;
      }
      else {
        if (uVar2 == 0x6109) {
          pSVar1 = local_8 + 0x20;
          if (*(uint *)(local_8 + 0x20) != 0) {
            FUN_006e56b0(local_8,*(uint *)(local_8 + 0x20));
          }
          (**(code **)(*(int *)pSVar4 + 8))(0x30d,pSVar1,0,param_1,0);
          goto switchD_005dd1c0_default;
        }
        if (uVar2 == 0x610a) {
          pSVar1 = local_8 + 0x20;
          if (*(uint *)(local_8 + 0x20) != 0) {
            FUN_006e56b0(local_8,*(uint *)(local_8 + 0x20));
          }
          (**(code **)(*(int *)pSVar4 + 8))(0x30e,pSVar1,0,param_1,0);
          goto switchD_005dd1c0_default;
        }
        if (uVar2 != 0x611f) goto switchD_005dd1c0_default;
        if (*(uint *)(local_8 + 0x20) != 0) {
          FUN_006e56b0(local_8,*(uint *)(local_8 + 0x20));
        }
      }
      (**(code **)(*(int *)pSVar4 + 8))(0x305,pSVar4 + 0x20,0,param_1,0);
    }
  }
  else {
    if (uVar2 < 0x6336) {
      if (uVar2 < 0x6332) {
        switch(uVar2) {
        case 0x6121:
          pSVar1 = local_8 + 0x20;
          if (*(uint *)(local_8 + 0x20) != 0) {
            FUN_006e56b0(local_8,*(uint *)(local_8 + 0x20));
          }
          (**(code **)(*(int *)pSVar4 + 8))(0x30b,pSVar1,0,param_1,0);
          break;
        case 0x6122:
          pSVar1 = local_8 + 0x20;
          if (*(uint *)(local_8 + 0x20) != 0) {
            FUN_006e56b0(local_8,*(uint *)(local_8 + 0x20));
          }
          (**(code **)(*(int *)pSVar4 + 8))(0x307,pSVar1,0,param_1,0);
          break;
        case 0x6123:
          pSVar1 = local_8 + 0x20;
          if (*(uint *)(local_8 + 0x20) != 0) {
            FUN_006e56b0(local_8,*(uint *)(local_8 + 0x20));
          }
          (**(code **)(*(int *)pSVar4 + 8))(0x308,pSVar1,0,param_1,0);
          break;
        case 0x6124:
          pSVar1 = local_8 + 0x20;
          if (*(uint *)(local_8 + 0x20) != 0) {
            FUN_006e56b0(local_8,*(uint *)(local_8 + 0x20));
          }
          (**(code **)(*(int *)pSVar4 + 8))(0x30c,pSVar1,0,param_1,0);
        }
        goto switchD_005dd1c0_default;
      }
    }
    else if (uVar2 < 0x6941) {
      if ((uVar2 < 0x693f) && ((uVar2 < 0x633f || (0x6341 < uVar2)))) goto switchD_005dd1c0_default;
    }
    else if ((uVar2 < 0xc0a0) || (0xc0a2 < uVar2)) goto switchD_005dd1c0_default;
    iVar5 = *(int *)(local_8 + 0x20);
    if (iVar5 != 0) {
      piVar7 = param_1;
      piVar9 = local_48;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      local_48[3] = 2;
      local_48[2] = iVar5;
      (**(code **)(*(int *)pSVar4 + 0x18))(local_48);
    }
  }
switchD_005dd1c0_default:
  DAT_00858df8 = (undefined4 *)local_8c;
  iVar5 = FUN_006e5f00((int)param_1);
  return iVar5;
}

