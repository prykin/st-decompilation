
void __fastcall FUN_00533b80(void *param_1)

{
  uint uVar1;
  uint *resourceString;
  UINT resourceId;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_24 [4];
  undefined4 local_14;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((DAT_008067a0 != '\0') && (*(short *)((int)param_1 + 0x172) != 2)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((*(char *)((int)param_1 + 0x1a4) == '\x05') && (*(char *)((int)param_1 + 0x1ab) == '\x04'))
    {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      Library::DKW::WGR::FUN_006b55f0
                (*(AnonShape_006B5B10_E0D06CF1 **)((int)param_1 + 0x68),0,0x1d,0x13,
                 *(byte **)((int)param_1 + 0x184),0,0x1d,0x13,0xee,0x6a);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      ccFntTy::SetSurf(*(ccFntTy **)((int)param_1 + 0x180),*(int *)((int)param_1 + 0x68),0,0x1d,0x13
                       ,0xee,0x6a);
      if (DAT_008067a0 == '\0') {
        resourceId = 0x3e84;
      }
      else {
        resourceId = 0x3e96 - (g_playSystem_00802A38->field_00E4 - g_playSystem_00802A38->field_0034
                              < 6000);
      }
      *(UINT *)((int)param_1 + 0x1a5) = resourceId;
      if (DAT_0080874e == '\x03') {
        uVar1 = 5;
      }
      else {
        uVar1 = -(uint)(DAT_0080874e != '\x01') & 7;
      }
      iVar5 = -1;
      iVar4 = -1;
      iVar3 = -1;
      iVar2 = -2;
      resourceString = (uint *)LoadResourceString(resourceId,g_module_00807618);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      ccFntTy::WrTxt(*(ccFntTy **)((int)param_1 + 0x180),resourceString,iVar2,iVar3,uVar1,iVar4,
                     iVar5);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      Library::DKW::DDX::FUN_006b3640
                ((int *)PTR_008075a8,*(uint *)((int)param_1 + 0x60),0xffffffff,
                 *(uint *)((int)param_1 + 0x3c),*(uint *)((int)param_1 + 0x44));
      return;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + 0x1a4) == '\x01') {
      local_14 = 5;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)((int)param_1 + 0x1c1) != 0) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1c1),local_24);
      }
    }
  }
  return;
}

