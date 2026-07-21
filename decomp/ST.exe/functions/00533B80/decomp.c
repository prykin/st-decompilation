
void __fastcall FUN_00533b80(void *param_1)

{
  uint uVar1;
  uint *extraout_EAX;
  UINT resourceId;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_24 [4];
  undefined4 local_14;
  
  if ((DAT_008067a0 != '\0') && (*(short *)((int)param_1 + 0x172) != 2)) {
    if ((*(char *)((int)param_1 + 0x1a4) == '\x05') && (*(char *)((int)param_1 + 0x1ab) == '\x04'))
    {
      Library::DKW::WGR::FUN_006b55f0
                (*(AnonShape_006B84D0_7C7D97C6 **)((int)param_1 + 0x68),0,0x1d,0x13,
                 *(byte **)((int)param_1 + 0x184),0,0x1d,0x13,0xee,0x6a);
      ccFntTy::SetSurf(*(ccFntTy **)((int)param_1 + 0x180),*(int *)((int)param_1 + 0x68),0,0x1d,0x13
                       ,0xee,0x6a);
      if (DAT_008067a0 == '\0') {
        resourceId = 0x3e84;
      }
      else {
        resourceId = 0x3e96 - ((uint)(PTR_00802a38->field_00E4 - PTR_00802a38->field_0034) < 6000);
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
      LoadResourceString(resourceId,HINSTANCE_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)((int)param_1 + 0x180),extraout_EAX,iVar2,iVar3,uVar1,iVar4,iVar5)
      ;
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

