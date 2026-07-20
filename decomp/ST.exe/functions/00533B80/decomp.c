
void __fastcall FUN_00533b80(void *param_1)

{
  uint uVar1;
  uint *puVar2;
  UINT uID;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_24 [4];
  undefined4 local_14;
  
  if ((DAT_008067a0 != '\0') && (*(short *)((int)param_1 + 0x172) != 2)) {
    if ((*(char *)((int)param_1 + 0x1a4) == '\x05') && (*(char *)((int)param_1 + 0x1ab) == '\x04'))
    {
      Library::DKW::WGR::FUN_006b55f0
                (*(undefined4 **)((int)param_1 + 0x68),0,0x1d,0x13,*(byte **)((int)param_1 + 0x184),
                 0,0x1d,0x13,0xee,0x6a);
      ccFntTy::SetSurf(*(ccFntTy **)((int)param_1 + 0x180),*(int *)((int)param_1 + 0x68),0,0x1d,0x13
                       ,0xee,0x6a);
      if (DAT_008067a0 == '\0') {
        uID = 0x3e84;
      }
      else {
        uID = 0x3e96 - ((uint)(PTR_00802a38->field_00E4 - PTR_00802a38->field_0034) < 6000);
      }
      *(UINT *)((int)param_1 + 0x1a5) = uID;
      if (DAT_0080874e == '\x03') {
        uVar1 = 5;
      }
      else {
        uVar1 = -(uint)(DAT_0080874e != '\x01') & 7;
      }
      iVar6 = -1;
      iVar5 = -1;
      iVar4 = -1;
      iVar3 = -2;
      puVar2 = (uint *)FUN_006b0140(uID,HINSTANCE_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)((int)param_1 + 0x180),puVar2,iVar3,iVar4,uVar1,iVar5,iVar6);
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,*(uint *)((int)param_1 + 0x60),0xffffffff,
                 *(uint *)((int)param_1 + 0x3c),*(uint *)((int)param_1 + 0x44));
      return;
    }
    if (*(char *)((int)param_1 + 0x1a4) == '\x01') {
      local_14 = 5;
      if (*(int *)((int)param_1 + 0x1c1) != 0) {
        FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1c1),local_24);
      }
    }
  }
  return;
}

