
uint __fastcall FUN_0044ce40(STAllPlayersC *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  uint local_c;
  STAllPlayersC *local_8;
  
  uVar5 = 0;
  uVar7 = 0;
  iVar4 = *(int *)((int)&DAT_007f4f8d + (uint)DAT_0080874d * 0xa62);
  iVar1 = *(int *)(iVar4 + 0xc);
  local_8 = param_1;
  if (0 < iVar1) {
    do {
      FUN_006acc70(iVar4,uVar7,&local_c);
      if (((short)local_c != -1) &&
         (piVar2 = (int *)STAllPlayersC::GetObjPtr
                                    (local_8,CONCAT31((int3)(local_c >> 8),DAT_0080874d),local_c,1),
         piVar2 != (int *)0x0)) {
        uVar3 = (**(code **)(*piVar2 + 0x2c))();
        switch(uVar3) {
        case 1:
        case 2:
        case 3:
        case 10:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x26:
        case 0x27:
          uVar5 = uVar5 | 0x2000;
          break;
        case 4:
          uVar5 = uVar5 | 0x40;
          break;
        case 5:
          uVar5 = uVar5 | 2;
          break;
        case 6:
        case 0x12:
          uVar5 = uVar5 | 1;
          break;
        case 7:
        case 0x13:
          uVar5 = uVar5 | 0x400;
          break;
        case 8:
        case 0x14:
          uVar5 = uVar5 | 0x200;
          break;
        case 9:
          uVar5 = uVar5 | 0x80;
          break;
        case 0xb:
          uVar5 = uVar5 | 4;
          break;
        case 0xc:
        case 0x18:
          uVar5 = uVar5 | 0x800;
          break;
        case 0x11:
          uVar5 = uVar5 | 8;
          break;
        case 0x15:
          uVar5 = uVar5 | 0x100;
          break;
        case 0x16:
          uVar5 = uVar5 | 0x28;
          break;
        case 0x17:
          uVar5 = uVar5 | 0x10;
          break;
        case 0x19:
          uVar5 = uVar5 | 0x40000;
          break;
        case 0x1a:
          uVar5 = uVar5 | 0x20000;
          break;
        case 0x1b:
          uVar5 = uVar5 | 0x200000;
          break;
        case 0x1c:
          uVar5 = uVar5 | 0x80000;
          break;
        case 0x1d:
          uVar5 = uVar5 | 0x100000;
          break;
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x28:
          uVar5 = uVar5 | 0x2000000;
          break;
        case 0x21:
          uVar5 = uVar5 | 0x400000;
          break;
        case 0x22:
          uVar5 = uVar5 | 0x10000;
          break;
        case 0x23:
          uVar5 = uVar5 | 0x800000;
          break;
        case 0x24:
          uVar5 = uVar5 | 0x1000000;
          break;
        case 0x25:
          uVar5 = uVar5 | 0x1000;
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar1);
    if (uVar5 != 0) {
      sVar6 = (short)(uVar5 >> 0x10);
      if (sVar6 == 0) {
        if (((short)uVar5 != 0) && (iVar4 = thunk_FUN_004406c0(DAT_0080874d), (char)iVar4 == '\x03')
           ) {
          return 0x2000000;
        }
      }
      else if ((short)uVar5 != 0) {
        iVar4 = thunk_FUN_004406c0(DAT_0080874d);
        return (-(uint)((char)iVar4 != '\x03') & 0xfe002000) + 0x2000000;
      }
      if ((sVar6 != 0) && (iVar4 = thunk_FUN_004406c0(DAT_0080874d), (char)iVar4 != '\x03')) {
        return 0x2000;
      }
      iVar4 = thunk_FUN_004406c0(DAT_0080874d);
      if ((char)iVar4 == '\x03') {
        if (uVar5 < 0x100001) {
          if (uVar5 != 0x100000) {
            if (uVar5 < 0x40001) {
              if (((uVar5 != 0x40000) && (uVar5 != 0x10000)) && (uVar5 != 0x20000)) {
                return 0x2000000;
              }
            }
            else if (uVar5 != 0x80000) {
              return 0x2000000;
            }
          }
        }
        else if (uVar5 < 0x800001) {
          if (((uVar5 != 0x800000) && (uVar5 != 0x200000)) && (uVar5 != 0x400000)) {
            return 0x2000000;
          }
        }
        else if (uVar5 != 0x1000000) {
          return 0x2000000;
        }
      }
      else if (uVar5 < 0x81) {
        if (uVar5 != 0x80) {
          if (0x3f < uVar5 - 1) {
            return 0x2000;
          }
                    /* WARNING: Could not recover jumptable at 0x0044d04b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&switchD_0044d04b::switchdataD_0044d1d0)
                            [*(byte *)((int)&PTR_caseD_3_0044d1d4 + uVar5 + 3)])();
          return uVar5;
        }
      }
      else if (uVar5 < 0x401) {
        if (((uVar5 != 0x400) && (uVar5 != 0x100)) && (uVar5 != 0x200)) {
          return 0x2000;
        }
      }
      else if ((uVar5 != 0x800) && (uVar5 != 0x1000)) {
        return 0x2000;
      }
      return uVar5;
    }
  }
  return 0;
}

