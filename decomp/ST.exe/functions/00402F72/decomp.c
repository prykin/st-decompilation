
void __fastcall thunk_FUN_00694100(void *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = thunk_FUN_00694200(param_1,uVar2);
    if (iVar1 == 0) {
      *(undefined4 *)((int)param_1 + 0x199d) = 0xffffffff;
      while( true ) {
        iVar1 = *(int *)((int)param_1 + 0x199d) + 1;
        *(int *)((int)param_1 + 0x199d) = iVar1;
        while( true ) {
          if (7 < iVar1) goto LAB_0069417a;
          iVar1 = thunk_FUN_00693e60(param_1,iVar1);
          if (iVar1 != 0) break;
          iVar1 = *(int *)((int)param_1 + 0x199d) + 1;
          *(int *)((int)param_1 + 0x199d) = iVar1;
        }
        iVar1 = thunk_FUN_00693e60(param_1,*(int *)((int)param_1 + 0x199d));
        if (iVar1 == 0) break;
        if ((int)uVar2 < (int)(uint)*(byte *)(iVar1 + 0x23)) {
          *(byte *)(iVar1 + 0x23) = *(byte *)(iVar1 + 0x23) - 1;
        }
      }
    }
LAB_0069417a:
    uVar2 = uVar2 + 1;
    if (7 < (int)uVar2) {
      return;
    }
  } while( true );
}

