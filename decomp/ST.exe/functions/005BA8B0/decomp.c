
void FUN_005ba8b0(char param_1)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,unaff_EBX);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar4 = FUN_006ad4d0(s_E____titans_Start_prov_obj_cpp_007ccd28,0xec,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7ccd28,0xec);
    return;
  }
  FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
  thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)(DAT_0081176c + 0x2c));
  if ((*(int *)(local_8 + 0x1c96) == 0) && (param_1 == '\0')) {
    thunk_FUN_005b9860(DAT_0080759c,0,0,0x79,0x51,0x22e,0x145,local_8);
  }
  uVar8 = 0;
  pvVar7 = *(void **)(DAT_0081176c + 0x30);
  uVar6 = 0xffffffff;
  uVar5 = 0xfffffffe;
  if (*(char *)(local_8 + 0x1a5f) == '\x01') {
    puVar3 = (uint *)FUN_006b0140(0x26b4,DAT_00807618);
    thunk_FUN_00540890(0,0xe9,0x14,0x14c,0x18,puVar3,uVar5,uVar6,pvVar7,uVar8);
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  puVar3 = (uint *)FUN_006b0140(0x26b3,DAT_00807618);
  thunk_FUN_00540890(0,0xe9,0x14,0x14c,0x18,puVar3,uVar5,uVar6,pvVar7,uVar8);
  if ((*(int *)(local_8 + 0x1c9a) == 0) && (param_1 == '\0')) {
    thunk_FUN_005b99f0(DAT_0080759c,0,0,0x79,0x197,0x22e,0x2e,
                       (undefined4 *)(*(int *)(local_8 + 0x1a5b) + 0x140));
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  return;
}

