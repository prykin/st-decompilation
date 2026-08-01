
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006dcd60(int param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  void *pvVar8;
  float10 fVar9;
  longlong lVar10;
  double local_c;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar3 = *(int *)(param_1 + 0x358);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((iVar3 != 0) && ((*(byte *)(param_1 + 0xa8) & 8) == 0)) {
    lVar10 = Library::MSVCRT::__ftol();
    iVar7 = (int)lVar10;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    dVar4 = (double)iVar7 * *(double *)(param_1 + 0x368);
    if (*(int *)(iVar3 + 0x28) < iVar7) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pvVar8 = Library::DKW::LIB::MemRealloc
                         (*(AnonPointee_TLOBaseTy_0607 **)(*(int *)(param_1 + 0x358) + 8),
                          iVar7 * iVar7 + 0x18);
      *(void **)(*(int *)(param_1 + 0x358) + 8) = pvVar8;
      *(undefined4 *)(*(int *)(param_1 + 0x358) + 0xc) =
           *(undefined4 *)(*(int *)(param_1 + 0x358) + 8);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pvVar8 = Library::DKW::LIB::MemRealloc
                         (*(AnonPointee_TLOBaseTy_0607 **)(*(int *)(param_1 + 0x358) + 0x10),
                          iVar7 * iVar7 + 0x10);
      *(void **)(*(int *)(param_1 + 0x358) + 0x10) = pvVar8;
      *(int *)(*(int *)(param_1 + 0x358) + 0x14) = *(int *)(*(int *)(param_1 + 0x358) + 0x10) + 8;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar3 = *(int *)(param_1 + 0x358);
      *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(iVar3 + 0x14);
      *(int *)(iVar3 + 0x28) = iVar7;
      *(int *)(*(int *)(param_1 + 0x358) + 0x2c) = iVar7;
      *(int *)(param_1 + 0x37c) = iVar7;
    }
    local_c = dVar4 * _DAT_007901c0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    dVar2 = *(double *)(param_1 + 0x78) * _DAT_00790770;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    dVar5 = *(double *)(param_1 + 0xd0) * _DAT_0079df68 -
            *(double *)(param_1 + 0x70) * _DAT_00790770;
    dVar1 = local_c;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    switch(*(undefined4 *)(param_1 + 0xa8)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 0:
      local_c = *(double *)(param_1 + 0x78) + *(double *)(param_1 + 0x78);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      dVar1 = (-*(double *)(param_1 + 0x60) - dVar2) * _DAT_0079df60 + local_c;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_c = (*(double *)(param_1 + 0x68) - dVar2) * _DAT_0079df60 + local_c;
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 1:
      dVar6 = -*(double *)(param_1 + 0x60);
      dVar1 = (dVar5 - dVar6) * _DAT_0079df60 + dVar6 * _DAT_00790770;
      local_c = (dVar2 - dVar6) * _DAT_0079df60 + dVar6 * _DAT_00790770;
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 2:
      dVar1 = (*(double *)(param_1 + 0x68) - dVar5) * _DAT_0079df60 + dVar5 * _DAT_00790770;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_c = (-*(double *)(param_1 + 0x60) - dVar5) * _DAT_0079df60 + dVar5 * _DAT_00790770;
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 3:
      local_c = *(double *)(param_1 + 0x68) * _DAT_00790770;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      dVar1 = (dVar2 - *(double *)(param_1 + 0x68)) * _DAT_0079df60 + local_c;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_c = (dVar5 - *(double *)(param_1 + 0x68)) * _DAT_0079df60 + local_c;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    dVar1 = dVar1 / *(double *)(param_1 + 0x368);
    fVar9 = Library::MSVCRT::FUN_00730450(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    dVar1 = (double)(fVar9 * (float10)*(double *)(param_1 + 0x368));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_c = local_c / *(double *)(param_1 + 0x368);
    fVar9 = Library::MSVCRT::FUN_00730450(SUB84(local_c,0),(uint)((ulonglong)local_c >> 0x20));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    dVar2 = (double)(fVar9 * (float10)*(double *)(param_1 + 0x368));
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c._0_4_ = SUB84(dVar2,0);
    dVar5 = dVar4 - dVar1;
    dVar1 = -dVar1;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    Library::Ourlib::STREND::FUN_006dd6e0
              (*(void **)(param_1 + 0x358),SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),
               SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),SUB84(-(dVar4 - dVar2),0),
               (int)((ulonglong)-(dVar4 - dVar2) >> 0x20),local_c._0_4_,
               (int)((ulonglong)dVar2 >> 0x20));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    Library::Ourlib::STREND::FUN_006dd660(*(void **)(param_1 + 0x358),0,0,iVar7,iVar7);
    *(int *)(*(int *)(param_1 + 0x358) + 0x370) = iVar7;
    *(int *)(param_1 + 0x370) = iVar7;
    *(undefined4 *)(*(int *)(param_1 + 0x358) + 0x134) = 1;
  }
  return;
}

