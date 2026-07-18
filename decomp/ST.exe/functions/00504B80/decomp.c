
void FUN_00504b80(int param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  UINT UVar5;
  uint *puVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  HINSTANCE pHVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    uVar3 = thunk_FUN_005276e0(*(undefined1 *)(local_8 + 0xc31),*(byte *)(local_8 + 0xc32));
    pbVar4 = (byte *)FUN_0070b3a0(*(int *)(local_8 + 0x29a),uVar3);
    thunk_FUN_00540760(*(undefined4 **)(local_8 + 0x194),param_1 + 5,0x65,'\x01',pbVar4);
    FUN_00710a90(*(int *)(local_8 + 0x194),0,param_1 + 2,0x52,0xb2,10);
    iVar11 = -1;
    iVar10 = -1;
    uVar9 = 0;
    iVar8 = -1;
    iVar2 = -2;
    pHVar7 = DAT_00807618;
    UVar5 = thunk_FUN_00528060(*(undefined1 *)(local_8 + 0xc31),*(char *)(local_8 + 0xc32));
    puVar6 = (uint *)FUN_006b0140(UVar5,pHVar7);
    FUN_00711b70(puVar6,iVar2,iVar8,uVar9,iVar10,iVar11);
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar8 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x76,0,iVar2,&DAT_007a4ccc);
  if (iVar8 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c2700,0x76);
  return;
}

