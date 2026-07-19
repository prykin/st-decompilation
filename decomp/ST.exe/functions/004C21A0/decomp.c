
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_004c21a0(void *this,undefined4 param_1,int *param_2,float param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  float local_c;
  int *local_8;
  
  sVar4 = 0;
  local_8 = this;
  FUN_006e1c20(*(void **)((int)this + 0x211),param_3,param_4,0.0,&param_3,&local_c);
  if (param_3 < _DAT_0079034c) {
    lVar6 = Library::MSVCRT::__ftol();
    iVar5 = (short)lVar6 + -1;
  }
  else {
    lVar6 = Library::MSVCRT::__ftol();
    iVar5 = (int)(short)lVar6;
  }
  if (local_c < _DAT_0079034c) {
    lVar6 = Library::MSVCRT::__ftol();
    param_4 = (short)lVar6 + -1;
  }
  else {
    lVar6 = Library::MSVCRT::__ftol();
    param_4 = (int)(short)lVar6;
  }
  piVar1 = local_8;
  if ((*(byte *)((int)this + 0x1d1) & 4) != 0) {
    sVar4 = 0;
    if (param_2 == this) {
      sVar4 = 4;
    }
    if ((param_2 == (int *)0x0) || (param_2[9] != local_8[9])) goto switchD_004c22b3_caseD_1;
    iVar5 = param_2[8];
    if (iVar5 == 0x14) {
      iVar5 = *param_2;
LAB_004c2260:
      iVar5 = (**(code **)(iVar5 + 0xec))();
      if (iVar5 != 0) {
        sVar4 = 3;
      }
      goto switchD_004c22b3_caseD_1;
    }
    if ((iVar5 != 1000) && (iVar5 != 0x3e9)) goto switchD_004c22b3_caseD_1;
    iVar5 = (**(code **)(*param_2 + 0xec))();
joined_r0x004c2294:
    if (iVar5 == 0) goto switchD_004c22b3_caseD_1;
LAB_004c2616:
    sVar4 = 4;
    goto switchD_004c22b3_caseD_1;
  }
  switch(param_1) {
  case 0:
    if (param_2 != local_8) {
      if (param_2 == (int *)0x0) {
        if (*(int *)((int)local_8 + 0x245) == 4) {
          if ((((-1 < iVar5) && (iVar5 < DAT_007fb240)) && (-1 < param_4)) &&
             (param_4 < DAT_007fb242)) {
            sVar4 = 5;
          }
          break;
        }
      }
      else if (((*(int *)((int)local_8 + 0x245) == 4) &&
               ((iVar3 = (**(code **)(*param_2 + 0x2c))(), iVar3 == 0x37 ||
                (iVar3 = (**(code **)(*param_2 + 0x2c))(), iVar3 == 0x6c)))) &&
              (iVar3 = thunk_FUN_004e8b10(param_2,local_8[9]), iVar3 != 0)) {
        sVar4 = 0x1d;
        break;
      }
      if ((((-1 < iVar5) && (iVar5 < DAT_007fb240)) &&
          ((-1 < param_4 &&
           ((param_4 < DAT_007fb242 &&
            (uVar2 = thunk_FUN_004c5350(local_8,0,param_2,iVar5,param_4,0,0,1), uVar2 != 0)))))) &&
         ((iVar5 = (&DAT_00792ca0)[*(int *)((int)local_8 + 0x235) * 6], iVar5 != 0xa8 &&
          ((iVar5 != 0xa3 && (iVar5 != 0xbe)))))) {
        sVar4 = 7;
        break;
      }
      if ((param_2 == (int *)0x0) || (param_2[9] != local_8[9])) break;
      iVar5 = param_2[8];
      if (iVar5 == 0x14) {
        iVar5 = *param_2;
        sVar4 = 0;
        goto LAB_004c2260;
      }
      if ((iVar5 != 1000) && (iVar5 != 0x3e9)) break;
      iVar5 = (**(code **)(*param_2 + 0xec))();
      goto joined_r0x004c2294;
    }
    goto LAB_004c2616;
  case 2:
    goto joined_r0x004c231f;
  case 3:
  case 0x19:
  case 0x1a:
  case 0x34:
    if (param_2 == local_8) {
      sVar4 = 0;
    }
    else if ((((-1 < iVar5) && (iVar5 < DAT_007fb240)) && (-1 < param_4)) &&
            (param_4 < DAT_007fb242)) {
      uVar2 = thunk_FUN_004c5350(local_8,0,param_2,iVar5,param_4,0,0,0);
      sVar4 = (-(ushort)(uVar2 != 0) & 6) + 1;
    }
    break;
  case 0xe:
    sVar4 = 0x15;
    if ((DAT_007fb2ac != 0) && (*(int *)(DAT_007fb2ac + 0x24) != 0)) {
      sVar4 = 0x14;
    }
    break;
  case 0x17:
    if (((param_2 != (int *)0x0) && (*(int *)((int)local_8 + 0x245) == 4)) &&
       (((iVar5 = (**(code **)(*param_2 + 0x2c))(), iVar5 == 0x37 ||
         (iVar5 = (**(code **)(*param_2 + 0x2c))(), iVar5 == 0x6c)) &&
        (iVar5 = thunk_FUN_004e8b10(param_2,piVar1[9]), iVar5 != 0)))) {
      sVar4 = 0x1d;
      break;
    }
    goto LAB_004c2352;
  case 0x26:
  case 0x37:
joined_r0x004c231f:
    if (param_2 == (int *)0x0) {
      sVar4 = 6;
      break;
    }
    if (((iVar5 < 0) || (DAT_007fb240 <= iVar5)) || ((param_4 < 0 || (DAT_007fb242 <= param_4))))
    break;
    goto LAB_004c2352;
  case 0x2a:
  case 0x43:
    if (((((-1 < iVar5) && (iVar5 < DAT_007fb240)) &&
         ((-1 < param_4 && ((param_4 < DAT_007fb242 && (DAT_00802a88 != (void *)0x0)))))) &&
        (0x27 < local_8[0x135])) &&
       (iVar5 = thunk_FUN_0055ad00(DAT_00802a88,iVar5,param_4,2,local_8[9],7), iVar5 == 0)) {
      sVar4 = 0x19;
    }
    break;
  case 0x42:
    if ((((param_2 != (int *)0x0) && (param_2[9] == local_8[9])) && (param_2[8] == 1000)) &&
       (iVar5 = thunk_FUN_004dbb10(local_8,(int)param_2), iVar5 != 0)) {
      sVar4 = 0x1f;
      break;
    }
LAB_004c2352:
    sVar4 = 1;
  }
switchD_004c22b3_caseD_1:
  if (((local_8[0x108] != 0) && (sVar4 != 4)) && (sVar4 != 3)) {
    return 0;
  }
  return CONCAT22((short)((uint)local_8[0x108] >> 0x10),sVar4);
}

