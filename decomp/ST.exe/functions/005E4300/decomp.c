
void FUN_005e4300(int *param_1,UINT param_2,int param_3,int param_4,short param_5)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar9;
  int iVar10;
  undefined4 local_5c;
  undefined4 local_58 [17];
  undefined4 *local_14;
  int local_10;
  undefined4 *local_c;
  char local_8;
  undefined3 uStack_7;
  
  if (param_1 != (int *)0x0) {
    local_c = *(undefined4 **)(*param_1 + 4);
    local_14 = *(undefined4 **)(*param_1 + 8);
    puVar2 = local_14;
    if ((int)local_c < (int)local_14) {
      puVar2 = local_c;
    }
    local_10 = (int)puVar2 / 2;
    if (param_3 <= local_10) {
      local_10 = param_3;
    }
    if (*(char *)((int)param_1 + 10) == '\x01') {
      cVar6 = ((param_5 != 3) - 1U & 0xfe) + 0x2c;
    }
    else {
      cVar6 = ((param_5 != 3) - 1U & 0xfe) + 0x18;
    }
    _local_8 = CONCAT31(uStack_7,cVar6);
    local_5c = DAT_00858df8;
    DAT_00858df8 = &local_5c;
    iVar3 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      iVar3 = *param_1;
      uVar8 = *(uint *)(iVar3 + 0x14);
      if (uVar8 == 0) {
        uVar8 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar3 + 8);
      }
      puVar4 = (undefined4 *)FUN_006b4fa0(iVar3);
      iVar3 = local_10;
      puVar2 = local_14;
      for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar4 = 0xffffffff;
        puVar4 = puVar4 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar4 = 0xff;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      FUN_006c7610(*param_1,0,0,0,(uint)local_c,(uint)local_14,local_10,0);
      if (param_4 != 0) {
        FUN_006c7570(*param_1,0,2,2,local_c + -1,(int)(puVar2 + -1),iVar3,(byte)_local_8);
      }
      FUN_006c7570(*param_1,0,0,0,local_c,(int)puVar2,iVar3,(byte)_local_8);
      if (param_2 != 0) {
        FUN_00710a90(*param_1,0,0,0,0,0);
        if (param_5 == 3) {
          iVar3 = (-(uint)((char)param_1[2] != '\x01') & 0xfffffffe) + 3;
        }
        else {
          iVar3 = (-(uint)((char)param_1[2] != '\x01') & 0xfffffffe) + 2;
        }
        iVar10 = -1;
        iVar9 = -1;
        puVar5 = (uint *)FUN_006b0140(param_2,DAT_00807618);
        FUN_007119c0(puVar5,iVar9,iVar10,iVar3);
      }
      DAT_00858df8 = (undefined4 *)local_5c;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_5c;
    iVar9 = FUN_006ad4d0(s_E____titans_Start_task_obj_cpp_007cd994,0x4b9,0,iVar3,&DAT_007a4ccc);
    if (iVar9 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cd994,0x4b9);
  }
  return;
}

