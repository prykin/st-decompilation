
void FUN_00496e40(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  
  uVar2 = thunk_FUN_00496a90(param_1,param_2,0,param_3,param_4,&param_4);
  if (-1 < (int)uVar2) {
    if (uVar2 < PTR_007fb270->count) {
      pvVar4 = (void *)(PTR_007fb270->elementSize * uVar2 + (int)PTR_007fb270->data);
    }
    else {
      pvVar4 = (void *)0x0;
    }
    thunk_FUN_00496b30(uVar2,*(int *)((int)pvVar4 + 8),0);
    iVar1 = *(int *)((int)pvVar4 + 8);
    FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)PTR_007fb270,uVar2);
    iVar3 = thunk_FUN_00496f00(iVar1);
    if (iVar3 == 0) {
      FreeAndNull((void **)(&DAT_007fb24c + iVar1));
    }
  }
  return;
}

