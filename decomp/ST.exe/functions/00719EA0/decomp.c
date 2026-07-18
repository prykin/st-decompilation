
int * __cdecl FUN_00719ea0(LPCSTR param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 local_90;
  undefined4 local_8c [16];
  int local_4c [4];
  uint local_3a;
  undefined4 *local_36;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  local_90 = DAT_00858df8;
  DAT_00858df8 = &local_90;
  iVar2 = __setjmp3(local_8c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    local_c = FUN_0071ae80(param_1,(DWORD *)0x0);
    FUN_00752e40(local_4c,local_c);
    local_8 = FUN_006aac10((-(uint)((short)local_4c[0] != 1) & 0x24) + 0x1a + local_3a);
    uVar5 = (-(uint)((short)local_4c[0] != 1) & 0x24) + 0x1a;
    piVar4 = local_4c;
    piVar7 = local_8;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *piVar7 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar7 = piVar7 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)piVar7 = (char)*piVar4;
      piVar4 = (int *)((int)piVar4 + 1);
      piVar7 = (int *)((int)piVar7 + 1);
    }
    *(undefined4 *)((int)local_8 + 0x16) = 0;
    puVar8 = (undefined4 *)((-(uint)((short)local_4c[0] != 1) & 0x24) + 0x1a + (int)local_8);
    for (uVar6 = local_3a >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = *local_36;
      local_36 = local_36 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = local_3a & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)local_36;
      local_36 = (undefined4 *)((int)local_36 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    if (local_c != (int *)0x0) {
      FUN_006ab060(&local_c);
    }
    DAT_00858df8 = (undefined4 *)local_90;
    if (param_2 != (int *)0x0) {
      *param_2 = (-(uint)((short)local_4c[0] != 1) & 0x24) + 0x1a + local_3a;
    }
    return local_8;
  }
  DAT_00858df8 = (undefined4 *)local_90;
  iVar3 = FUN_006ad4d0(s_E__Ourlib_mfwav_cpp_007f0800,0x61,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    piVar4 = (int *)(*pcVar1)();
    return piVar4;
  }
  if (local_c != (int *)0x0) {
    FUN_006ab060(&local_c);
  }
  if (local_8 != (int *)0x0) {
    FUN_006ab060(&local_8);
  }
  FUN_006a5e40(iVar2,0,0x7f0800,0x66);
  return (int *)0x0;
}

