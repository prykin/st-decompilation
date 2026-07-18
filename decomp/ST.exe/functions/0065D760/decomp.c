
void FUN_0065d760(int *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar4 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    if (iVar4 != -100) {
      iVar6 = FUN_006ad4d0(s_E____titans_ai_ai_flt_cpp_007d2b80,0xa5,0,iVar4,&DAT_007a4ccc);
      if (iVar6 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FUN_006a5e40(iVar4,0,0x7d2b80,0xa6);
    }
    return;
  }
  if (param_1 == (int *)0x0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  if (*(short *)(local_8 + 0x7d) == -2) {
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  if (DAT_007fa174 != 0) {
    iVar4 = (**(code **)(*param_1 + 0x2c))();
    if ((iVar4 < 0x32) || (0x73 < iVar4)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(short *)(local_8 + 0x7b) != 1)) ||
       (iVar4 = (**(code **)(*param_1 + 0x2c))(), iVar4 == 0x78)) {
      FUN_006a5e40(-100,DAT_007ed77c,0x7d2b80,0x9b);
    }
    puVar5 = FUN_006ae290((uint *)0x0,1,2,1);
    FUN_006ae1c0(puVar5,(undefined4 *)((int)param_1 + 0x32));
    iVar4 = (**(code **)(*param_1 + 0x2c))();
    if ((iVar4 < 1) || (0x28 < iVar4)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (param_2 == 0) {
        uVar3 = 0xfffe;
      }
      else {
        uVar3 = (undefined2)param_1[0xc];
      }
      *(undefined2 *)(param_1 + 0x207) = uVar3;
    }
    thunk_FUN_0042b7d0(CONCAT31((int3)((uint)extraout_ECX >> 8),*(undefined1 *)(local_8 + 0x24)),
                       *(ushort *)(local_8 + 0x7d),(int)puVar5,(undefined2 *)0x0);
    FUN_006ae110((byte *)puVar5);
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  return;
}

