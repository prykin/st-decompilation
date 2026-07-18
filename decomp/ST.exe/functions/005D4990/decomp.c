
void FUN_005d4990(int param_1,uint *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar6;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    local_4c = DAT_00858df8;
    DAT_00858df8 = &local_4c;
    iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
    if (iVar2 == 0) {
      if (*param_2 != 0xffffffff) {
        uVar5 = *(uint *)(*(int *)(local_8 + 0x1a5b) + 0x6a6);
        puVar6 = *(undefined4 **)(param_1 + 8);
        for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        uVar5 = *param_2;
        iVar2 = *(int *)(param_1 + 8);
        uVar4 = 0;
        *(uint *)(param_1 + 4) = uVar5;
        if (uVar5 != 0) {
          do {
            param_2 = param_2 + 1;
            if (*param_2 < *(uint *)(*(int *)(local_8 + 0x1a5b) + 0x6a6)) {
              *(undefined1 *)(*param_2 + iVar2) = 1;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(param_1 + 4));
        }
        DAT_00858df8 = (undefined4 *)local_4c;
        return;
      }
      uVar5 = *(uint *)(*(int *)(local_8 + 0x1a5b) + 0x6a6);
      puVar6 = *(undefined4 **)(param_1 + 8);
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = 0x1010101;
        puVar6 = puVar6 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar6 = 1;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(local_8 + 0x1a5b) + 0x6a6);
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar3 = FUN_006ad4d0(s_E____titans_Start_settmobj_cpp_007cd258,0x9af,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7cd258,0x9af);
  }
  return;
}

