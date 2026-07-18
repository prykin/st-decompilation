
void FUN_005e11d0(int param_1,char param_2,char param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_48;
  undefined4 local_44 [16];
  
  local_48 = DAT_00858df8;
  DAT_00858df8 = &local_48;
  iVar2 = __setjmp3(local_44,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    uVar6 = *(uint *)(param_1 + 0x14);
    if (uVar6 == 0) {
      uVar6 = ((uint)*(ushort *)(param_1 + 0xe) * *(int *)(param_1 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(param_1 + 8);
    }
    puVar3 = (undefined4 *)FUN_006b4fa0(param_1);
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar3 = 0xff;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    if (param_2 != '\0') {
      FUN_006c7610(param_1,0,0,0,*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),2,0);
      FUN_006c7570(param_1,0,0,0,*(undefined4 **)(param_1 + 4),*(int *)(param_1 + 8),2,
                   (-(param_3 != '\x01') & 0xecU) + 0x2c);
    }
    DAT_00858df8 = (undefined4 *)local_48;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_48;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_task_obj_cpp_007cd994,0x1b9,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cd994,0x1b9);
  return;
}

