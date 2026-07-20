
uint __fastcall FUN_0044ce40(STAllPlayersC *param_1)

{
  DArrayTy *pDVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  uint uVar8;
  uint local_c;
  STAllPlayersC *local_8;
  
  uVar6 = 0;
  uVar8 = 0;
  pDVar1 = g_playerRuntime[DAT_0080874d].tempSlots[0][0].objectIds;
  uVar5 = pDVar1->count;
  local_8 = param_1;
  if (0 < (int)uVar5) {
    do {
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar1,uVar8,&local_c);
      if (((short)local_c != -1) &&
         (piVar2 = (int *)STAllPlayersC::GetObjPtr
                                    (local_8,CONCAT31((int3)(local_c >> 8),DAT_0080874d),local_c,
                                     CASE_1), piVar2 != (int *)0x0)) {
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
          uVar6 = uVar6 | 0x2000;
          break;
        case 4:
          uVar6 = uVar6 | 0x40;
          break;
        case 5:
          uVar6 = uVar6 | 2;
          break;
        case 6:
        case 0x12:
          uVar6 = uVar6 | 1;
          break;
        case 7:
        case 0x13:
          uVar6 = uVar6 | 0x400;
          break;
        case 8:
        case 0x14:
          uVar6 = uVar6 | 0x200;
          break;
        case 9:
          uVar6 = uVar6 | 0x80;
          break;
        case 0xb:
          uVar6 = uVar6 | 4;
          break;
        case 0xc:
        case 0x18:
          uVar6 = uVar6 | 0x800;
          break;
        case 0x11:
          uVar6 = uVar6 | 8;
          break;
        case 0x15:
          uVar6 = uVar6 | 0x100;
          break;
        case 0x16:
          uVar6 = uVar6 | 0x28;
          break;
        case 0x17:
          uVar6 = uVar6 | 0x10;
          break;
        case 0x19:
          uVar6 = uVar6 | 0x40000;
          break;
        case 0x1a:
          uVar6 = uVar6 | 0x20000;
          break;
        case 0x1b:
          uVar6 = uVar6 | 0x200000;
          break;
        case 0x1c:
          uVar6 = uVar6 | 0x80000;
          break;
        case 0x1d:
          uVar6 = uVar6 | 0x100000;
          break;
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x28:
          uVar6 = uVar6 | 0x2000000;
          break;
        case 0x21:
          uVar6 = uVar6 | 0x400000;
          break;
        case 0x22:
          uVar6 = uVar6 | 0x10000;
          break;
        case 0x23:
          uVar6 = uVar6 | 0x800000;
          break;
        case 0x24:
          uVar6 = uVar6 | 0x1000000;
          break;
        case 0x25:
          uVar6 = uVar6 | 0x1000;
        }
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar5);
    if (uVar6 != 0) {
      sVar7 = (short)(uVar6 >> 0x10);
      if (sVar7 == 0) {
        if (((short)uVar6 != 0) && (iVar4 = thunk_FUN_004406c0(DAT_0080874d), (char)iVar4 == '\x03')
           ) {
          return 0x2000000;
        }
      }
      else if ((short)uVar6 != 0) {
        iVar4 = thunk_FUN_004406c0(DAT_0080874d);
        return (-(uint)((char)iVar4 != '\x03') & 0xfe002000) + 0x2000000;
      }
      if ((sVar7 != 0) && (iVar4 = thunk_FUN_004406c0(DAT_0080874d), (char)iVar4 != '\x03')) {
        return 0x2000;
      }
      iVar4 = thunk_FUN_004406c0(DAT_0080874d);
      if ((char)iVar4 == '\x03') {
        if (uVar6 < 0x100001) {
          if (uVar6 != 0x100000) {
            if (uVar6 < 0x40001) {
              if (((uVar6 != 0x40000) && (uVar6 != 0x10000)) && (uVar6 != 0x20000)) {
                return 0x2000000;
              }
            }
            else if (uVar6 != 0x80000) {
              return 0x2000000;
            }
          }
        }
        else if (uVar6 < 0x800001) {
          if (((uVar6 != 0x800000) && (uVar6 != 0x200000)) && (uVar6 != 0x400000)) {
            return 0x2000000;
          }
        }
        else if (uVar6 != 0x1000000) {
          return 0x2000000;
        }
      }
      else if (uVar6 < 0x81) {
        if (uVar6 != 0x80) {
          if (0x3f < uVar6 - 1) {
            return 0x2000;
          }
                    /* WARNING: Could not recover jumptable at 0x0044d04b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&switchD_0044d04b::switchdataD_0044d1d0)
                            [*(byte *)((int)&PTR_caseD_3_0044d1d4 + uVar6 + 3)])();
          return uVar5;
        }
      }
      else if (uVar6 < 0x401) {
        if (((uVar6 != 0x400) && (uVar6 != 0x100)) && (uVar6 != 0x200)) {
          return 0x2000;
        }
      }
      else if ((uVar6 != 0x800) && (uVar6 != 0x1000)) {
        return 0x2000;
      }
      return uVar6;
    }
  }
  return 0;
}

