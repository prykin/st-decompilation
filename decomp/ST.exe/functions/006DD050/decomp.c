
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006dd050(void *param_1,uint param_2,double param_3,double param_4)

{
  double dVar1;
  uint uVar2;
  double dVar3;
  int iVar4;
  float10 fVar5;
  
  if (((int)param_2 < 0) || (0xc < (int)param_2)) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__ourlib_Strend_cpp_007ee758,0x32c);
    return;
  }
  if (param_2 == 4) {
    param_2 = 0xc;
  }
  *(double *)((int)param_1 + 0xe8) =
       (*(double *)((int)param_1 + 0x68) - *(double *)((int)param_1 + 0x60)) /
       (double)(*(int *)((int)param_1 + 0x38) - *(int *)((int)param_1 + 0x30));
  dVar1 = *(double *)((int)param_1 + 0x78) - *(double *)((int)param_1 + 0x70);
  if ((param_2 & 8) == 0) {
    dVar1 = dVar1 * _DAT_00790770;
    iVar4 = *(int *)((int)param_1 + 0x3c) - *(int *)((int)param_1 + 0x34);
  }
  else {
    iVar4 = *(int *)((int)param_1 + 0x3c) - *(int *)((int)param_1 + 0x34);
  }
  *(double *)((int)param_1 + 0xf0) = dVar1 / (double)iVar4;
  if (*(uint *)((int)param_1 + 0xa8) != param_2) {
    FUN_006dcd60((int)param_1);
  }
  *(uint *)((int)param_1 + 0xa8) = param_2;
  if (*(int *)((int)param_1 + 0x358) != 0) {
    *(uint *)(*(int *)((int)param_1 + 0x358) + 0x35c) = param_2;
  }
  uVar2 = *(uint *)((int)param_1 + 0xa8);
  if ((uVar2 & 8) == 0) {
    iVar4 = 1 << ((byte)uVar2 & 0x17);
  }
  else {
    iVar4 = 0x10;
  }
  *(int *)((int)param_1 + 0xac) = iVar4;
  switch(uVar2 & 0xfffffff7) {
  case 0:
    dVar1 = (param_3 * _DAT_0079df60 - param_4 * _DAT_0079df60) / *(double *)((int)param_1 + 0xe8) +
            _DAT_0079d1b0;
    fVar5 = Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
    dVar1 = (double)(fVar5 * (float10)*(double *)((int)param_1 + 0xe8));
    dVar3 = ((param_3 + param_4) * _DAT_0079df60) / *(double *)((int)param_1 + 0xf0) + _DAT_0079d1b0
    ;
    fVar5 = Library::MSVCRT::FUN_0072e150(SUB84(dVar3,0),(uint)((ulonglong)dVar3 >> 0x20));
    fVar5 = fVar5 * (float10)*(double *)((int)param_1 + 0xf0);
    param_3 = (double)((fVar5 + (float10)dVar1) * (float10)_DAT_0079df60);
    fVar5 = fVar5 * (float10)_DAT_0079df60 - (float10)dVar1 * (float10)_DAT_0079df60;
    break;
  case 1:
    dVar1 = ((param_3 + param_4) * _DAT_0079df60) / *(double *)((int)param_1 + 0xe8) + _DAT_0079d1b0
    ;
    fVar5 = Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
    dVar1 = (double)(fVar5 * (float10)*(double *)((int)param_1 + 0xe8));
    dVar3 = (param_4 * _DAT_0079df60 - param_3 * _DAT_0079df60) / *(double *)((int)param_1 + 0xf0) +
            _DAT_0079d1b0;
    fVar5 = Library::MSVCRT::FUN_0072e150(SUB84(dVar3,0),(uint)((ulonglong)dVar3 >> 0x20));
    fVar5 = fVar5 * (float10)*(double *)((int)param_1 + 0xf0);
    param_3 = (double)((float10)dVar1 * (float10)_DAT_0079df60 - fVar5 * (float10)_DAT_0079df60);
    fVar5 = (fVar5 + (float10)dVar1) * (float10)_DAT_0079df60;
    break;
  case 2:
    dVar3 = param_4 * _DAT_0079df60;
    dVar1 = (dVar3 - param_3 * _DAT_0079df60) / *(double *)((int)param_1 + 0xe8) + _DAT_0079d1b0;
    fVar5 = Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
    dVar1 = (double)(fVar5 * (float10)*(double *)((int)param_1 + 0xe8));
    dVar3 = (param_3 * _DAT_0079dfc0 - dVar3) / *(double *)((int)param_1 + 0xf0) + _DAT_0079d1b0;
    fVar5 = Library::MSVCRT::FUN_0072e150(SUB84(dVar3,0),(uint)((ulonglong)dVar3 >> 0x20));
    fVar5 = fVar5 * (float10)*(double *)((int)param_1 + 0xf0) * (float10)_DAT_0079df60;
    param_3 = (double)((float10)dVar1 * (float10)_DAT_0079dfc0 - fVar5);
    fVar5 = (float10)dVar1 * (float10)_DAT_0079df60 - fVar5;
    break;
  case 3:
    dVar3 = param_4 * _DAT_0079df60;
    dVar1 = (param_3 * _DAT_0079dfc0 - dVar3) / *(double *)((int)param_1 + 0xe8) + _DAT_0079d1b0;
    fVar5 = Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
    dVar1 = (double)(fVar5 * (float10)*(double *)((int)param_1 + 0xe8));
    dVar3 = (param_3 * _DAT_0079df60 - dVar3) / *(double *)((int)param_1 + 0xf0) + _DAT_0079d1b0;
    fVar5 = Library::MSVCRT::FUN_0072e150(SUB84(dVar3,0),(uint)((ulonglong)dVar3 >> 0x20));
    fVar5 = fVar5 * (float10)*(double *)((int)param_1 + 0xf0) * (float10)_DAT_0079df60;
    param_3 = (double)(fVar5 - (float10)dVar1 * (float10)_DAT_0079df60);
    fVar5 = (float10)dVar1 * (float10)_DAT_0079dfc0 - fVar5;
    break;
  default:
    dVar1 = param_3 / *(double *)((int)param_1 + 0xe8) + _DAT_0079d1b0;
    fVar5 = Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
    param_3 = (double)(fVar5 * (float10)*(double *)((int)param_1 + 0xe8));
    dVar1 = param_4 / *(double *)((int)param_1 + 0xf0) + _DAT_0079d1b0;
    fVar5 = Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
    fVar5 = fVar5 * (float10)*(double *)((int)param_1 + 0xf0);
  }
  *(double *)((int)param_1 + 0xa0) = (double)fVar5;
  *(undefined4 *)((int)param_1 + 0x98) = param_3._0_4_;
  *(undefined4 *)((int)param_1 + 0x80) = 0;
  *(undefined4 *)((int)param_1 + 0x9c) = param_3._4_4_;
  *(undefined4 *)((int)param_1 + 0x84) = 0x40690000;
  if ((*(uint *)((int)param_1 + 0xa8) & 8) == 0) {
    switch(*(uint *)((int)param_1 + 0xa8)) {
    case 0:
      dVar1 = (double)((fVar5 - (float10)param_3) * (float10)_DAT_0079df60);
      *(double *)((int)param_1 + 0xb0) = dVar1;
      if (fVar5 <= (float10)param_3) {
        fVar5 = fVar5 - (float10)dVar1 * (float10)_DAT_0079df60;
      }
      else {
        fVar5 = (float10)dVar1 * (float10)_DAT_0079df60 + (float10)param_3;
      }
      break;
    case 1:
      *(double *)((int)param_1 + 0xb0) =
           (double)(((float10)param_3 + fVar5) * (float10)_DAT_0079dfc0);
      fVar5 = (fVar5 - (float10)param_3) * (float10)_DAT_007901c0;
      break;
    case 2:
      dVar1 = (double)((fVar5 - (float10)param_3) * (float10)_DAT_0079dfc0);
      *(double *)((int)param_1 + 0xb0) = dVar1;
      if (fVar5 <= (float10)param_3) {
        fVar5 = -((float10)dVar1 * (float10)_DAT_0079df60 + fVar5);
      }
      else {
        fVar5 = -((float10)param_3 - (float10)dVar1 * (float10)_DAT_0079df60);
      }
      break;
    case 3:
      *(double *)((int)param_1 + 0xb0) =
           (double)(((float10)param_3 + fVar5) * (float10)_DAT_0079df60);
      fVar5 = (fVar5 - (float10)param_3) * (float10)_DAT_0079df58;
      break;
    default:
      FUN_006dc320(param_1);
      return;
    }
    *(double *)((int)param_1 + 0xb8) = (double)fVar5;
    *(double *)((int)param_1 + 0xc0) = (double)(fVar5 + (float10)_DAT_0079dfb8);
    FUN_006dc320(param_1);
    return;
  }
  *(double *)((int)param_1 + 0xb0) = -param_3;
  *(undefined4 *)((int)param_1 + 0xc0) = 0;
  *(double *)((int)param_1 + 0xb8) = (double)-fVar5;
  *(undefined4 *)((int)param_1 + 0xc4) = 0xc0690000;
  FUN_006dc320(param_1);
  return;
}

