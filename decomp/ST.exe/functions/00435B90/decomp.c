
short FUN_00435b90(uint param_1,int param_2,undefined4 param_3,int *param_4,undefined4 param_5,
                  undefined4 param_6)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  short sVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  bool bVar12;
  uint local_10;
  int local_c;
  
  piVar5 = param_4;
  uVar4 = param_1;
  iVar9 = *(int *)(param_2 + 0xc);
  local_10 = 0;
  local_c = 0;
  bVar11 = (byte)param_1;
  if ((param_4 != (int *)0x0) &&
     ((7 < bVar11 || ((DAT_00802a38 != 0 && (7 < (byte)(&DAT_008087e9)[(char)bVar11 * 0x51])))))) {
    return 1;
  }
  param_4 = (int *)0x0;
  if (0 < iVar9) {
    do {
      FUN_006acc70(param_2,(uint)param_4,&param_1);
      if ((short)param_1 != -1) {
        local_10 = param_1;
        local_c = local_c + 1;
      }
      param_4 = (int *)((int)param_4 + 1);
    } while ((int)param_4 < iVar9);
    if (local_c == 1) {
      piVar7 = (int *)thunk_FUN_0042b620(uVar4,local_10,1);
      sVar6 = (**(code **)(*piVar7 + 0x28))(param_3,piVar5,param_5,param_6);
      return sVar6;
    }
  }
  switch(param_3) {
  case 0:
    if ((piVar5 == (int *)0x0) ||
       (((iVar8 = piVar5[8], iVar8 != 0x14 && (iVar8 != 1000)) && (iVar8 != 0x3e9)))) {
      param_4 = (int *)0x0;
      if (iVar9 < 1) {
        return 0;
      }
      do {
        FUN_006acc70(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(0,piVar5,param_5,param_6);
          if (sVar6 == 5) {
            return 5;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < iVar9);
      return 0;
    }
    iVar8 = (**(code **)(*piVar5 + 0x2c))();
    if ((((iVar8 == 99) || (iVar8 = (**(code **)(*piVar5 + 0x2c))(), iVar8 == 0x52)) ||
        (iVar8 = (**(code **)(*piVar5 + 0x2c))(), iVar8 == 0x5f)) &&
       (param_4 = (int *)0x0, 0 < iVar9)) {
      do {
        FUN_006acc70(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(0,piVar5,param_5,param_6);
          if (sVar6 == 0x1e) {
            return 0x1e;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < iVar9);
    }
    bVar1 = *(byte *)(piVar5 + 9);
    param_3 = CONCAT31(param_3._1_3_,bVar1);
    if (DAT_00808a8f == '\0') {
      if (bVar1 == bVar11) {
LAB_004366b0:
        iVar8 = 0;
      }
      else {
        uVar3 = (uint)bVar1;
        uVar10 = uVar4 & 0xff;
        cVar2 = *(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar10);
        if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar3) == '\0')) {
          iVar8 = -2;
        }
        else if ((cVar2 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar3) == '\0'))
        {
          iVar8 = -1;
        }
        else if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar3) == '\x01'))
        {
          iVar8 = 1;
        }
        else {
          if ((cVar2 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar3) != '\x01'))
          goto LAB_004366b0;
          iVar8 = 2;
        }
      }
      bVar12 = iVar8 < 0;
    }
    else {
      bVar12 = (&DAT_008087ea)[(uVar4 & 0xff) * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
    }
    if (!bVar12) {
      if (piVar5[8] != 0x14) {
        if ((piVar5[8] != 0x3e9) && (piVar5[9] == (int)(char)bVar11)) {
          iVar8 = (**(code **)(*piVar5 + 0x2c))();
          if ((iVar8 == 0x33) && (param_4 = (int *)0x0, 0 < iVar9)) {
            do {
              FUN_006acc70(param_2,(uint)param_4,&param_1);
              if ((short)param_1 != -1) {
                piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
                sVar6 = (**(code **)(*piVar7 + 0x28))(0,piVar5,param_5,param_6);
                if (sVar6 == 0x18) {
                  return 0x18;
                }
              }
              param_4 = (int *)((int)param_4 + 1);
            } while ((int)param_4 < iVar9);
          }
          iVar8 = (**(code **)(*piVar5 + 0x2c))();
          if (((iVar8 == 0x37) || (iVar8 = (**(code **)(*piVar5 + 0x2c))(), iVar8 == 0x6c)) &&
             (param_4 = (int *)0x0, 0 < iVar9)) {
            do {
              FUN_006acc70(param_2,(uint)param_4,&param_1);
              if ((short)param_1 != -1) {
                piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
                sVar6 = (**(code **)(*piVar7 + 0x28))(0,piVar5,param_5,param_6);
                if (sVar6 == 0x1d) {
                  return 0x1d;
                }
              }
              param_4 = (int *)((int)param_4 + 1);
            } while ((int)param_4 < iVar9);
          }
          iVar8 = (**(code **)(*piVar5 + 0x2c))();
          if ((((iVar8 == 0x38) || (iVar8 = (**(code **)(*piVar5 + 0x2c))(), iVar8 == 0x39)) ||
              ((iVar8 = (**(code **)(*piVar5 + 0x2c))(), iVar8 == 0x4f ||
               (iVar8 = (**(code **)(*piVar5 + 0x2c))(), iVar8 == 0x5e)))) &&
             (param_4 = (int *)0x0, 0 < iVar9)) {
            do {
              FUN_006acc70(param_2,(uint)param_4,&param_1);
              if ((short)param_1 != -1) {
                piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
                sVar6 = (**(code **)(*piVar7 + 0x28))(0,piVar5,param_5,param_6);
                if (sVar6 == 0x12) {
                  return 0x12;
                }
              }
              param_4 = (int *)((int)param_4 + 1);
            } while ((int)param_4 < iVar9);
          }
          iVar9 = (**(code **)(*piVar5 + 0xec))();
          return (-(ushort)(iVar9 != 1) & 0xfffc) + 4;
        }
        iVar9 = (**(code **)(*piVar5 + 0xec))();
        return (-(ushort)(iVar9 != 1) & 0xfffc) + 4;
      }
      param_4 = (int *)0x0;
      if (0 < iVar9) {
        do {
          FUN_006acc70(param_2,(uint)param_4,&param_1);
          if ((short)param_1 != -1) {
            piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
            sVar6 = (**(code **)(*piVar7 + 0x28))(0,piVar5,param_5,param_6);
            if (sVar6 == 0x17) {
              return 0x17;
            }
            if (sVar6 == 0x1a) {
              return 0x1a;
            }
          }
          param_4 = (int *)((int)param_4 + 1);
        } while ((int)param_4 < iVar9);
      }
      iVar9 = (**(code **)(*piVar5 + 0xec))();
      return (-(ushort)(iVar9 != 1) & 0xfffd) + 3;
    }
    iVar8 = (**(code **)(*piVar5 + 0x2c))();
    param_4 = (int *)0x0;
    if (iVar8 == 0x6c) {
      if (0 < iVar9) {
        do {
          FUN_006acc70(param_2,(uint)param_4,&param_1);
          if ((short)param_1 != -1) {
            piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
            sVar6 = (**(code **)(*piVar7 + 0x28))(0,piVar5,param_5,param_6);
            if (sVar6 == 7) {
              return 7;
            }
            if (sVar6 == 0x1d) {
              return 0x1d;
            }
          }
          param_4 = (int *)((int)param_4 + 1);
          if (iVar9 <= (int)param_4) {
            return 0;
          }
        } while( true );
      }
    }
    else if (0 < iVar9) {
      do {
        FUN_006acc70(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(0,piVar5,param_5,param_6);
          if (sVar6 == 7) {
            return 7;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < iVar9);
    }
switchD_00435c5c_caseD_1:
    return 0;
  default:
    goto switchD_00435c5c_caseD_1;
  case 2:
    param_4 = (int *)0x0;
    if (0 < iVar9) {
      do {
        FUN_006acc70(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(2,piVar5,param_5,param_6);
          if (sVar6 == 6) {
            return 6;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < iVar9);
      return 1;
    }
    break;
  case 3:
  case 0x2b:
    if (piVar5 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < iVar9) {
      do {
        FUN_006acc70(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(param_3,piVar5,param_5,param_6);
          if (sVar6 == 7) {
            return 7;
          }
          if (sVar6 == 2) {
            return 2;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < iVar9);
    }
    return 1;
  case 4:
    if (piVar5 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < iVar9) {
      do {
        FUN_006acc70(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(4,piVar5,param_5,param_6);
          if (sVar6 == 0x18) {
            return 0x18;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < iVar9);
      return 1;
    }
    break;
  case 5:
    if (piVar5 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < iVar9) {
      do {
        FUN_006acc70(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(5,piVar5,param_5,param_6);
          if (sVar6 == 0xd) {
            return 0xd;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < iVar9);
      return 1;
    }
    break;
  case 6:
    param_4 = (int *)0x0;
    if (0 < iVar9) {
      do {
        FUN_006acc70(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(6,piVar5,param_5,param_6);
          if (sVar6 == 0xf) {
            return 0xf;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < iVar9);
      return 1;
    }
    break;
  case 7:
    if (piVar5 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < iVar9) {
      do {
        FUN_006acc70(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(7,piVar5,param_5,param_6);
          if (sVar6 == 9) {
            return 9;
          }
          if (sVar6 == 10) {
            return 10;
          }
          if (sVar6 == 0xb) {
            return 0xb;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < iVar9);
    }
    return 1;
  case 8:
    param_4 = (int *)0x0;
    if (0 < iVar9) {
      do {
        FUN_006acc70(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(8,piVar5,param_5,param_6);
          if (sVar6 == 0x11) {
            return 0x11;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < iVar9);
      return 1;
    }
    break;
  case 9:
    param_4 = (int *)0x0;
    if (0 < iVar9) {
      do {
        FUN_006acc70(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(9,piVar5,param_5,param_6);
          if (sVar6 == 8) {
            return 8;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < iVar9);
      return 1;
    }
    break;
  case 10:
    if (piVar5 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < iVar9) {
      do {
        FUN_006acc70(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(10,piVar5,param_5,param_6);
          if (sVar6 == 0xc) {
            return 0xc;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < iVar9);
      return 1;
    }
    break;
  case 0xd:
    if ((piVar5 != (int *)0x0) && (param_4 = (int *)0x0, 0 < iVar9)) {
      do {
        FUN_006acc70(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
          if (piVar5 == piVar7) {
            return 0;
          }
          sVar6 = (**(code **)(*piVar7 + 0x28))(0xd,piVar5,param_5,param_6);
          if (sVar6 == 0x17) {
            return 0x17;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
        if (iVar9 <= (int)param_4) {
          return 1;
        }
      } while( true );
    }
    break;
  case 0xe:
    param_4 = (int *)0x0;
    if (0 < iVar9) {
      do {
        FUN_006acc70(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
          if (piVar5 == piVar7) {
            return 0;
          }
          sVar6 = (**(code **)(*piVar7 + 0x28))(0xe,piVar5,param_5,param_6);
          if (sVar6 == 0x14) {
            return 0x14;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < iVar9);
    }
    return 0x15;
  case 0x10:
    if (piVar5 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < iVar9) {
      do {
        FUN_006acc70(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(0x10,piVar5,param_5,param_6);
          if (sVar6 == 0x16) {
            return 0x16;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < iVar9);
      return 1;
    }
    break;
  case 0x11:
    if (piVar5 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < iVar9) {
      do {
        FUN_006acc70(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(0x11,piVar5,param_5,param_6);
          if (sVar6 == 0x12) {
            return 0x12;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < iVar9);
      return 1;
    }
    break;
  case 0x12:
    if (piVar5 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < iVar9) {
      do {
        FUN_006acc70(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(0x12,piVar5,param_5,param_6);
          if (sVar6 == 0x13) {
            return 0x13;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < iVar9);
      return 1;
    }
    break;
  case 0x13:
    if (piVar5 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < iVar9) {
      do {
        FUN_006acc70(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
          if (piVar5 == piVar7) {
            return 0;
          }
          sVar6 = (**(code **)(*piVar7 + 0x28))(0x13,piVar5,param_5,param_6);
          if (sVar6 == 0x1a) {
            return 0x1a;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
        if (iVar9 <= (int)param_4) {
          return 1;
        }
      } while( true );
    }
    break;
  case 0x18:
    param_4 = (int *)0x0;
    if (0 < iVar9) {
      do {
        FUN_006acc70(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
          if (piVar5 == piVar7) {
            return 0;
          }
          sVar6 = (**(code **)(*piVar7 + 0x28))(0x18,piVar5,param_5,param_6);
          if (sVar6 == 0x1d) {
            return 0x1d;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
        if (iVar9 <= (int)param_4) {
          return 1;
        }
      } while( true );
    }
    break;
  case 0x2d:
    param_4 = (int *)0x0;
    if (0 < iVar9) {
      do {
        FUN_006acc70(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(0x2d,piVar5,param_5,param_6);
          if (sVar6 == 0x10) {
            return 0x10;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < iVar9);
      return 1;
    }
    break;
  case 0x4d:
    if (piVar5 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < iVar9) {
      do {
        FUN_006acc70(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)thunk_FUN_0042b620(uVar4,param_1,1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(0x4d,piVar5,param_5,param_6);
          if (sVar6 == 0x1d) {
            return 0x1d;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < iVar9);
      return 1;
    }
    break;
  case 0x4e:
    return 0x1c;
  }
  return 1;
}

