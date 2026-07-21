
/* [STSwitchEnumApplier] Switch target param_3 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00435B90_param_3Enum. Cases:
   CASE_0=0;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_D=13;CASE_E=14;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_18=24;CASE_2B=43;CASE_2D=45;CASE_4D=77;CASE_4E=78
   
   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 00435930 -> 00435B90 @ 00435B00 */

short FUN_00435b90(uint param_1,DArrayTy *param_2,Global_sub_00435B90_param_3Enum param_3,
                  int *param_4,undefined4 param_5,int *param_6)

{
  byte bVar1;
  byte bVar2;
  dword dVar3;
  uint objPtr;
  int *piVar4;
  short sVar5;
  STGameObjC *pSVar6;
  int iVar7;
  STAllPlayersC *in_ECX;
  uint uVar8;
  byte bVar9;
  bool bVar10;
  uint local_10;
  int local_c;
  
  piVar4 = param_4;
  objPtr = param_1;
  dVar3 = param_2->count;
  local_10 = 0;
  local_c = 0;
  bVar9 = (byte)param_1;
  if ((param_4 != (int *)0x0) &&
     ((7 < bVar9 ||
      ((PTR_00802a38 != (STPlaySystemC *)0x0 && (7 < (byte)(&DAT_008087e9)[(char)bVar9 * 0x51]))))))
  {
    return 1;
  }
  param_4 = (int *)0x0;
  if (0 < (int)dVar3) {
    do {
      DArrayGetElement(param_2,(uint)param_4,&param_1);
      if ((short)param_1 != -1) {
        local_10 = param_1;
        local_c = local_c + 1;
      }
      param_4 = (int *)((int)param_4 + 1);
    } while ((int)param_4 < (int)dVar3);
    if (local_c == 1) {
      pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,local_10,CASE_1);
      sVar5 = (*pSVar6->vtable->vfunc_28)(param_3,piVar4,param_5,param_6);
      return sVar5;
    }
  }
  switch(param_3) {
  case CASE_0:
    if ((piVar4 == (int *)0x0) ||
       (((iVar7 = piVar4[8], iVar7 != 0x14 && (iVar7 != 1000)) && (iVar7 != 0x3e9)))) {
      param_4 = (int *)0x0;
      if ((int)dVar3 < 1) {
        return 0;
      }
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar5 = (*pSVar6->vtable->vfunc_28)(0,piVar4,param_5,param_6);
          if (sVar5 == 5) {
            return 5;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 0;
    }
    iVar7 = (**(code **)(*piVar4 + 0x2c))();
    if ((((iVar7 == 99) || (iVar7 = (**(code **)(*piVar4 + 0x2c))(), iVar7 == 0x52)) ||
        (iVar7 = (**(code **)(*piVar4 + 0x2c))(), iVar7 == 0x5f)) &&
       (param_4 = (int *)0x0, 0 < (int)dVar3)) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar5 = (*pSVar6->vtable->vfunc_28)(0,piVar4,param_5,param_6);
          if (sVar5 == 0x1e) {
            return 0x1e;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
    }
    bVar1 = *(byte *)(piVar4 + 9);
    param_3 = CONCAT31(param_3._1_3_,bVar1);
    if (DAT_00808a8f == '\0') {
      if (bVar1 == bVar9) {
LAB_004366b0:
        iVar7 = 0;
      }
      else {
        uVar8 = objPtr & 0xff;
        bVar2 = g_playerRelationMatrix[bVar1][uVar8];
        if ((bVar2 == 0) && (g_playerRelationMatrix[uVar8][bVar1] == 0)) {
          iVar7 = -2;
        }
        else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar8][bVar1] == 0)) {
          iVar7 = -1;
        }
        else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar8][bVar1] == 1)) {
          iVar7 = 1;
        }
        else {
          if ((bVar2 != 1) || (g_playerRelationMatrix[uVar8][bVar1] != 1)) goto LAB_004366b0;
          iVar7 = 2;
        }
      }
      bVar10 = iVar7 < 0;
    }
    else {
      bVar10 = (&DAT_008087ea)[(objPtr & 0xff) * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
    }
    if (!bVar10) {
      if (piVar4[8] != 0x14) {
        if ((piVar4[8] != 0x3e9) && (piVar4[9] == (int)(char)bVar9)) {
          iVar7 = (**(code **)(*piVar4 + 0x2c))();
          if ((iVar7 == 0x33) && (param_4 = (int *)0x0, 0 < (int)dVar3)) {
            do {
              DArrayGetElement(param_2,(uint)param_4,&param_1);
              if ((short)param_1 != -1) {
                pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
                sVar5 = (*pSVar6->vtable->vfunc_28)(0,piVar4,param_5,param_6);
                if (sVar5 == 0x18) {
                  return 0x18;
                }
              }
              param_4 = (int *)((int)param_4 + 1);
            } while ((int)param_4 < (int)dVar3);
          }
          iVar7 = (**(code **)(*piVar4 + 0x2c))();
          if (((iVar7 == 0x37) || (iVar7 = (**(code **)(*piVar4 + 0x2c))(), iVar7 == 0x6c)) &&
             (param_4 = (int *)0x0, 0 < (int)dVar3)) {
            do {
              DArrayGetElement(param_2,(uint)param_4,&param_1);
              if ((short)param_1 != -1) {
                pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
                sVar5 = (*pSVar6->vtable->vfunc_28)(0,piVar4,param_5,param_6);
                if (sVar5 == 0x1d) {
                  return 0x1d;
                }
              }
              param_4 = (int *)((int)param_4 + 1);
            } while ((int)param_4 < (int)dVar3);
          }
          iVar7 = (**(code **)(*piVar4 + 0x2c))();
          if ((((iVar7 == 0x38) || (iVar7 = (**(code **)(*piVar4 + 0x2c))(), iVar7 == 0x39)) ||
              ((iVar7 = (**(code **)(*piVar4 + 0x2c))(), iVar7 == 0x4f ||
               (iVar7 = (**(code **)(*piVar4 + 0x2c))(), iVar7 == 0x5e)))) &&
             (param_4 = (int *)0x0, 0 < (int)dVar3)) {
            do {
              DArrayGetElement(param_2,(uint)param_4,&param_1);
              if ((short)param_1 != -1) {
                pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
                sVar5 = (*pSVar6->vtable->vfunc_28)(0,piVar4,param_5,param_6);
                if (sVar5 == 0x12) {
                  return 0x12;
                }
              }
              param_4 = (int *)((int)param_4 + 1);
            } while ((int)param_4 < (int)dVar3);
          }
          iVar7 = (**(code **)(*piVar4 + 0xec))();
          return (-(ushort)(iVar7 != 1) & 0xfffc) + 4;
        }
        iVar7 = (**(code **)(*piVar4 + 0xec))();
        return (-(ushort)(iVar7 != 1) & 0xfffc) + 4;
      }
      param_4 = (int *)0x0;
      if (0 < (int)dVar3) {
        do {
          DArrayGetElement(param_2,(uint)param_4,&param_1);
          if ((short)param_1 != -1) {
            pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
            sVar5 = (*pSVar6->vtable->vfunc_28)(0,piVar4,param_5,param_6);
            if (sVar5 == 0x17) {
              return 0x17;
            }
            if (sVar5 == 0x1a) {
              return 0x1a;
            }
          }
          param_4 = (int *)((int)param_4 + 1);
        } while ((int)param_4 < (int)dVar3);
      }
      iVar7 = (**(code **)(*piVar4 + 0xec))();
      return (-(ushort)(iVar7 != 1) & 0xfffd) + 3;
    }
    iVar7 = (**(code **)(*piVar4 + 0x2c))();
    param_4 = (int *)0x0;
    if (iVar7 == 0x6c) {
      if (0 < (int)dVar3) {
        do {
          DArrayGetElement(param_2,(uint)param_4,&param_1);
          if ((short)param_1 != -1) {
            pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
            sVar5 = (*pSVar6->vtable->vfunc_28)(0,piVar4,param_5,param_6);
            if (sVar5 == 7) {
              return 7;
            }
            if (sVar5 == 0x1d) {
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
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar5 = (*pSVar6->vtable->vfunc_28)(0,piVar4,param_5,param_6);
          if (sVar5 == 7) {
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
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar5 = (*pSVar6->vtable->vfunc_28)(2,piVar4,param_5,param_6);
          if (sVar5 == 6) {
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
    if (piVar4 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar5 = (*pSVar6->vtable->vfunc_28)(param_3,piVar4,param_5,param_6);
          if (sVar5 == 7) {
            return 7;
          }
          if (sVar5 == 2) {
            return 2;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
    }
    return 1;
  case CASE_4:
    if (piVar4 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar5 = (*pSVar6->vtable->vfunc_28)(4,piVar4,param_5,param_6);
          if (sVar5 == 0x18) {
            return 0x18;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_5:
    if (piVar4 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar5 = (*pSVar6->vtable->vfunc_28)(5,piVar4,param_5,param_6);
          if (sVar5 == 0xd) {
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
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar5 = (*pSVar6->vtable->vfunc_28)(6,piVar4,param_5,param_6);
          if (sVar5 == 0xf) {
            return 0xf;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_7:
    if (piVar4 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar5 = (*pSVar6->vtable->vfunc_28)(7,piVar4,param_5,param_6);
          if (sVar5 == 9) {
            return 9;
          }
          if (sVar5 == 10) {
            return 10;
          }
          if (sVar5 == 0xb) {
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
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar5 = (*pSVar6->vtable->vfunc_28)(8,piVar4,param_5,param_6);
          if (sVar5 == 0x11) {
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
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar5 = (*pSVar6->vtable->vfunc_28)(9,piVar4,param_5,param_6);
          if (sVar5 == 8) {
            return 8;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_A:
    if (piVar4 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar5 = (*pSVar6->vtable->vfunc_28)(10,piVar4,param_5,param_6);
          if (sVar5 == 0xc) {
            return 0xc;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_D:
    if ((piVar4 != (int *)0x0) && (param_4 = (int *)0x0, 0 < (int)dVar3)) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          if ((STGameObjC *)piVar4 == pSVar6) {
            return 0;
          }
          sVar5 = (*pSVar6->vtable->vfunc_28)(0xd,piVar4,param_5,param_6);
          if (sVar5 == 0x17) {
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
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          if ((STGameObjC *)piVar4 == pSVar6) {
            return 0;
          }
          sVar5 = (*pSVar6->vtable->vfunc_28)(0xe,piVar4,param_5,param_6);
          if (sVar5 == 0x14) {
            return 0x14;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
    }
    return 0x15;
  case CASE_10:
    if (piVar4 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar5 = (*pSVar6->vtable->vfunc_28)(0x10,piVar4,param_5,param_6);
          if (sVar5 == 0x16) {
            return 0x16;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_11:
    if (piVar4 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar5 = (*pSVar6->vtable->vfunc_28)(0x11,piVar4,param_5,param_6);
          if (sVar5 == 0x12) {
            return 0x12;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_12:
    if (piVar4 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar5 = (*pSVar6->vtable->vfunc_28)(0x12,piVar4,param_5,param_6);
          if (sVar5 == 0x13) {
            return 0x13;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_13:
    if (piVar4 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          if ((STGameObjC *)piVar4 == pSVar6) {
            return 0;
          }
          sVar5 = (*pSVar6->vtable->vfunc_28)(0x13,piVar4,param_5,param_6);
          if (sVar5 == 0x1a) {
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
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          if ((STGameObjC *)piVar4 == pSVar6) {
            return 0;
          }
          sVar5 = (*pSVar6->vtable->vfunc_28)(0x18,piVar4,param_5,param_6);
          if (sVar5 == 0x1d) {
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
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar5 = (*pSVar6->vtable->vfunc_28)(0x2d,piVar4,param_5,param_6);
          if (sVar5 == 0x10) {
            return 0x10;
          }
        }
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_4D:
    if (piVar4 == (int *)0x0) {
      return 1;
    }
    param_4 = (int *)0x0;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((short)param_1 != -1) {
          pSVar6 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_1,CASE_1);
          sVar5 = (*pSVar6->vtable->vfunc_28)(0x4d,piVar4,param_5,param_6);
          if (sVar5 == 0x1d) {
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

