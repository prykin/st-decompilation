
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006dcd60(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  longlong lVar9;
  double local_c;
  
  iVar7 = *(int *)(param_1 + 0x358);
  if ((iVar7 != 0) && ((*(byte *)(param_1 + 0xa8) & 8) == 0)) {
    lVar9 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar9;
    dVar3 = (double)iVar6 * *(double *)(param_1 + 0x368);
    if (*(int *)(iVar7 + 0x28) < iVar6) {
      iVar7 = Library::DKW::LIB::FUN_006acf50
                        (*(int *)(*(int *)(param_1 + 0x358) + 8),iVar6 * iVar6 + 0x18);
      *(int *)(*(int *)(param_1 + 0x358) + 8) = iVar7;
      *(undefined4 *)(*(int *)(param_1 + 0x358) + 0xc) =
           *(undefined4 *)(*(int *)(param_1 + 0x358) + 8);
      iVar7 = Library::DKW::LIB::FUN_006acf50
                        (*(int *)(*(int *)(param_1 + 0x358) + 0x10),iVar6 * iVar6 + 0x10);
      *(int *)(*(int *)(param_1 + 0x358) + 0x10) = iVar7;
      *(int *)(*(int *)(param_1 + 0x358) + 0x14) = *(int *)(*(int *)(param_1 + 0x358) + 0x10) + 8;
      iVar7 = *(int *)(param_1 + 0x358);
      *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(iVar7 + 0xc);
      *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(iVar7 + 0x14);
      *(int *)(iVar7 + 0x28) = iVar6;
      *(int *)(*(int *)(param_1 + 0x358) + 0x2c) = iVar6;
      *(int *)(param_1 + 0x37c) = iVar6;
    }
    local_c = dVar3 * _DAT_007901c0;
    dVar2 = *(double *)(param_1 + 0x78) * _DAT_00790770;
    dVar4 = *(double *)(param_1 + 0xd0) * _DAT_0079df68 -
            *(double *)(param_1 + 0x70) * _DAT_00790770;
    dVar1 = local_c;
    switch(*(undefined4 *)(param_1 + 0xa8)) {
    case 0:
      local_c = *(double *)(param_1 + 0x78) + *(double *)(param_1 + 0x78);
      dVar1 = (-*(double *)(param_1 + 0x60) - dVar2) * _DAT_0079df60 + local_c;
      local_c = (*(double *)(param_1 + 0x68) - dVar2) * _DAT_0079df60 + local_c;
      break;
    case 1:
      dVar5 = -*(double *)(param_1 + 0x60);
      dVar1 = (dVar4 - dVar5) * _DAT_0079df60 + dVar5 * _DAT_00790770;
      local_c = (dVar2 - dVar5) * _DAT_0079df60 + dVar5 * _DAT_00790770;
      break;
    case 2:
      dVar1 = (*(double *)(param_1 + 0x68) - dVar4) * _DAT_0079df60 + dVar4 * _DAT_00790770;
      local_c = (-*(double *)(param_1 + 0x60) - dVar4) * _DAT_0079df60 + dVar4 * _DAT_00790770;
      break;
    case 3:
      local_c = *(double *)(param_1 + 0x68) * _DAT_00790770;
      dVar1 = (dVar2 - *(double *)(param_1 + 0x68)) * _DAT_0079df60 + local_c;
      local_c = (dVar4 - *(double *)(param_1 + 0x68)) * _DAT_0079df60 + local_c;
    }
    dVar1 = dVar1 / *(double *)(param_1 + 0x368);
    fVar8 = Library::MSVCRT::FUN_00730450(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
    dVar1 = (double)(fVar8 * (float10)*(double *)(param_1 + 0x368));
    local_c = local_c / *(double *)(param_1 + 0x368);
    fVar8 = Library::MSVCRT::FUN_00730450(SUB84(local_c,0),(uint)((ulonglong)local_c >> 0x20));
    dVar2 = (double)(fVar8 * (float10)*(double *)(param_1 + 0x368));
    local_c._0_4_ = SUB84(dVar2,0);
    dVar4 = dVar3 - dVar1;
    dVar1 = -dVar1;
    Library::Ourlib::STREND::FUN_006dd6e0
              (*(void **)(param_1 + 0x358),SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),
               SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20),SUB84(-(dVar3 - dVar2),0),
               (int)((ulonglong)-(dVar3 - dVar2) >> 0x20),local_c._0_4_,
               (int)((ulonglong)dVar2 >> 0x20));
    Library::Ourlib::STREND::FUN_006dd660(*(void **)(param_1 + 0x358),0,0,iVar6,iVar6);
    *(int *)(*(int *)(param_1 + 0x358) + 0x370) = iVar6;
    *(int *)(param_1 + 0x370) = iVar6;
    *(undefined4 *)(*(int *)(param_1 + 0x358) + 0x134) = 1;
  }
  return;
}

