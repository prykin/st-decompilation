
/* [STSwitchEnumApplier] Switch target param_3 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00435B90_param_3Enum. Cases:
   CASE_0=0;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_D=13;CASE_E=14;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_18=24;CASE_2B=43;CASE_2D=45;CASE_4D=77;CASE_4E=78
   
   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 00435930 -> 00435B90 @ 00435B00 */

short FUN_00435b90(uint param_1,DArrayTy *param_2,Global_sub_00435B90_param_3Enum param_3,
                  int *param_4,undefined4 param_5,int *param_6)

{
  byte bVar1;
  char cVar2;
  dword dVar3;
  uint uVar4;
  uint objPtr;
  int *piVar5;
  short sVar6;
  int *piVar7;
  int iVar8;
  STAllPlayersC *in_ECX;
  uint uVar9;
  byte bVar10;
  bool bVar11;
  uint local_10;
  int local_c;
  
  piVar5 = param_4;
  objPtr = param_1;
  dVar3 = param_2->count;
  local_10 = 0;
  local_c = 0;
  bVar10 = (byte)param_1;
  if ((param_4 != (int *)0x0) &&
     ((7 < bVar10 ||
      ((PTR_00802a38 != (STPlaySystemC *)0x0 && (7 < (byte)(&DAT_008087e9)[(char)bVar10 * 0x51])))))
     ) {
    return 1;
  }
  param_4 = (int *)0x0;
  if (0 < (int)dVar3) {
    do {
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
      if ((short)param_1 != -1) {
        local_10 = param_1;
        local_c = local_c + 1;
      }
      param_4 = (int *)((int)param_4 + 1);
    } while ((int)param_4 < (int)dVar3);
    if (local_c == 1) {
      piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,local_10,CASE_1);
      sVar6 = (**(code **)(*piVar7 + 0x28))(param_3,piVar5,param_5,param_6);
      return sVar6;
    }
  }
  switch(param_3) {
  case CASE_0:
    if ((piVar5 == (int *)0x0) ||
       (((iVar8 = piVar5[8], iVar8 != 0x14 && (iVar8 != 1000)) && (iVar8 != 0x3e9)))) {
      param_4 = (int *)0x0;
      if ((int)dVar3 < 1) {
        return 0;
      }
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(0,piVar5,param_5,param_6);
          if (sVar6 == 5) {
            return 5;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 0;
    }
    iVar8 = (**(code **)(*piVar5 + 0x2c))();
    if ((((iVar8 == 99) || (iVar8 = (**(code **)(*piVar5 + 0x2c))(), iVar8 == 0x52)) ||
        (iVar8 = (**(code **)(*piVar5 + 0x2c))(), iVar8 == 0x5f)) &&
       (param_4 = (int *)0x0, 0 < (int)dVar3)) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(0,piVar5,param_5,param_6);
          if (sVar6 == 0x1e) {
            return 0x1e;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
    }
    bVar1 = *(byte *)(piVar5 + 9);
    param_3 = CONCAT31(param_3._1_3_,bVar1);
    if (DAT_00808a8f == '\0') {
      if (bVar1 == bVar10) {
LAB_004366b0:
        iVar8 = 0;
      }
      else {
        uVar4 = (uint)bVar1;
        uVar9 = objPtr & 0xff;
        cVar2 = *(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar9);
        if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar4) == '\0')) {
          iVar8 = -2;
        }
        else if ((cVar2 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar4) == '\0')) {
          iVar8 = -1;
        }
        else if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar4) == '\x01')) {
          iVar8 = 1;
        }
        else {
          if ((cVar2 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar4) != '\x01'))
          goto LAB_004366b0;
          iVar8 = 2;
        }
      }
      bVar11 = iVar8 < 0;
    }
    else {
      bVar11 = (&DAT_008087ea)[(objPtr & 0xff) * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
    }
    if (!bVar11) {
      if (piVar5[8] != 0x14) {
        if ((piVar5[8] != 0x3e9) && (piVar5[9] == (int)(char)bVar10)) {
          iVar8 = (**(code **)(*piVar5 + 0x2c))();
          if ((iVar8 == 0x33) && (param_4 = (int *)0x0, 0 < (int)dVar3)) {
            do {
              FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
              if ((short)param_1 != -1) {
                piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
                sVar6 = (**(code **)(*piVar7 + 0x28))(0,piVar5,param_5,param_6);
                if (sVar6 == 0x18) {
                  return 0x18;
                }
              }
              param_4 = (int *)((int)param_4 + 1);
            } while ((int)param_4 < (int)dVar3);
          }
          iVar8 = (**(code **)(*piVar5 + 0x2c))();
          if (((iVar8 == 0x37) || (iVar8 = (**(code **)(*piVar5 + 0x2c))(), iVar8 == 0x6c)) &&
             (param_4 = (int *)0x0, 0 < (int)dVar3)) {
            do {
              FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
              if ((short)param_1 != -1) {
                piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
                sVar6 = (**(code **)(*piVar7 + 0x28))(0,piVar5,param_5,param_6);
                if (sVar6 == 0x1d) {
                  return 0x1d;
                }
              }
              param_4 = (int *)((int)param_4 + 1);
            } while ((int)param_4 < (int)dVar3);
          }
          iVar8 = (**(code **)(*piVar5 + 0x2c))();
          if ((((iVar8 == 0x38) || (iVar8 = (**(code **)(*piVar5 + 0x2c))(), iVar8 == 0x39)) ||
              ((iVar8 = (**(code **)(*piVar5 + 0x2c))(), iVar8 == 0x4f ||
               (iVar8 = (**(code **)(*piVar5 + 0x2c))(), iVar8 == 0x5e)))) &&
             (param_4 = (int *)0x0, 0 < (int)dVar3)) {
            do {
              FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
              if ((short)param_1 != -1) {
                piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
                sVar6 = (**(code **)(*piVar7 + 0x28))(0,piVar5,param_5,param_6);
                if (sVar6 == 0x12) {
                  return 0x12;
                }
              }
              param_4 = (int *)((int)param_4 + 1);
            } while ((int)param_4 < (int)dVar3);
          }
          iVar8 = (**(code **)(*piVar5 + 0xec))();
          return (-(ushort)(iVar8 != 1) & 0xfffc) + 4;
        }
        iVar8 = (**(code **)(*piVar5 + 0xec))();
        return (-(ushort)(iVar8 != 1) & 0xfffc) + 4;
      }
      param_4 = (int *)0x0;
      if (0 < (int)dVar3) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
          if ((short)param_1 != -1) {
            piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
            sVar6 = (**(code **)(*piVar7 + 0x28))(0,piVar5,param_5,param_6);
            if (sVar6 == 0x17) {
              return 0x17;
            }
            if (sVar6 == 0x1a) {
              return 0x1a;
            }
          }
          param_4 = (int *)((int)param_4 + 1);
        } while ((int)param_4 < (int)dVar3);
      }
      iVar8 = (**(code **)(*piVar5 + 0xec))();
      return (-(ushort)(iVar8 != 1) & 0xfffd) + 3;
    }
    iVar8 = (**(code **)(*piVar5 + 0x2c))();
    param_4 = (int *)0x0;
    if (iVar8 == 0x6c) {
      if (0 < (int)dVar3) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
          if ((short)param_1 != -1) {
            piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
            sVar6 = (**(code **)(*piVar7 + 0x28))(0,piVar5,param_5,param_6);
            if (sVar6 == 7) {
              return 7;
            }
            if (sVar6 == 0x1d) {
              return 0x1d;
            }
          }
          param_4 = (int *)((int)param_4 + 1);
          if ((int)dVar3 <= (int)param_4) {
            return 0;
          }
        } while( true );
      }
    }
    else if (0 < (int)dVar3) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(0,piVar5,param_5,param_6);
          if (sVar6 == 7) {
            return 7;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
    }
switchD_00435c5c_caseD_1:
    return 0;
  default:
    goto switchD_00435c5c_caseD_1;
  case CASE_2:
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(2,piVar5,param_5,param_6);
          if (sVar6 == 6) {
            return 6;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_3:
  case CASE_2B:
    if (piVar5 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(param_3,piVar5,param_5,param_6);
          if (sVar6 == 7) {
            return 7;
          }
          if (sVar6 == 2) {
            return 2;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
    }
    return 1;
  case CASE_4:
    if (piVar5 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(4,piVar5,param_5,param_6);
          if (sVar6 == 0x18) {
            return 0x18;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_5:
    if (piVar5 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(5,piVar5,param_5,param_6);
          if (sVar6 == 0xd) {
            return 0xd;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_6:
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(6,piVar5,param_5,param_6);
          if (sVar6 == 0xf) {
            return 0xf;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_7:
    if (piVar5 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
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
      } while ((int)param_4 < (int)dVar3);
    }
    return 1;
  case CASE_8:
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(8,piVar5,param_5,param_6);
          if (sVar6 == 0x11) {
            return 0x11;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_9:
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(9,piVar5,param_5,param_6);
          if (sVar6 == 8) {
            return 8;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_A:
    if (piVar5 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(10,piVar5,param_5,param_6);
          if (sVar6 == 0xc) {
            return 0xc;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_D:
    if ((piVar5 != (int *)0x0) && (param_4 = (int *)0x0, 0 < (int)dVar3)) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          if (piVar5 == piVar7) {
            return 0;
          }
          sVar6 = (**(code **)(*piVar7 + 0x28))(0xd,piVar5,param_5,param_6);
          if (sVar6 == 0x17) {
            return 0x17;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
        if ((int)dVar3 <= (int)param_4) {
          return 1;
        }
      } while( true );
    }
    break;
  case CASE_E:
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          if (piVar5 == piVar7) {
            return 0;
          }
          sVar6 = (**(code **)(*piVar7 + 0x28))(0xe,piVar5,param_5,param_6);
          if (sVar6 == 0x14) {
            return 0x14;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
    }
    return 0x15;
  case CASE_10:
    if (piVar5 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(0x10,piVar5,param_5,param_6);
          if (sVar6 == 0x16) {
            return 0x16;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_11:
    if (piVar5 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(0x11,piVar5,param_5,param_6);
          if (sVar6 == 0x12) {
            return 0x12;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_12:
    if (piVar5 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(0x12,piVar5,param_5,param_6);
          if (sVar6 == 0x13) {
            return 0x13;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_13:
    if (piVar5 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          if (piVar5 == piVar7) {
            return 0;
          }
          sVar6 = (**(code **)(*piVar7 + 0x28))(0x13,piVar5,param_5,param_6);
          if (sVar6 == 0x1a) {
            return 0x1a;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
        if ((int)dVar3 <= (int)param_4) {
          return 1;
        }
      } while( true );
    }
    break;
  case CASE_18:
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          if (piVar5 == piVar7) {
            return 0;
          }
          sVar6 = (**(code **)(*piVar7 + 0x28))(0x18,piVar5,param_5,param_6);
          if (sVar6 == 0x1d) {
            return 0x1d;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
        if ((int)dVar3 <= (int)param_4) {
          return 1;
        }
      } while( true );
    }
    break;
  case CASE_2D:
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(0x2d,piVar5,param_5,param_6);
          if (sVar6 == 0x10) {
            return 0x10;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_4D:
    if (piVar5 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          piVar7 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar6 = (**(code **)(*piVar7 + 0x28))(0x4d,piVar5,param_5,param_6);
          if (sVar6 == 0x1d) {
            return 0x1d;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_4E:
    return 0x1c;
  }
  return 1;
}

