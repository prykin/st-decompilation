
void FUN_005df640(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,int param_8)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int *local_8;
  
  if (param_8 != 0) {
    uVar1 = *(uint *)(param_8 + 0xc);
    uVar5 = 0;
    if (uVar1 != 0) {
      if (uVar1 == 0) {
        local_8 = (int *)0x0;
        goto LAB_005df673;
      }
      do {
        local_8 = (int *)(*(int *)(param_8 + 8) * uVar5 + *(int *)(param_8 + 0x1c));
LAB_005df673:
      } while ((*local_8 != param_2) && (uVar5 = uVar5 + 1, uVar5 < uVar1));
    }
    local_4c = DAT_00858df8;
    DAT_00858df8 = &local_4c;
    iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      if (local_8[0xb] != 0) {
        iVar3 = local_8[local_8[4] + 1];
        FUN_006b48e0((int)param_1,param_4,param_5,iVar3,0,0,0,*(uint *)(iVar3 + 4),
                     *(int *)(iVar3 + 8),local_8[0xb],0,0x10000ff);
        DAT_00858df8 = (undefined4 *)local_4c;
        return;
      }
      FUN_006b48a0(param_1,param_4,param_5,(BITMAPINFO *)local_8[local_8[4] + 1],(uint *)0x0,
                   0x10000ff);
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar4 = FUN_006ad4d0(s_E____titans_Start_task_obj_cpp_007cd994,0x3a,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cd994,0x3a);
  }
  return;
}

