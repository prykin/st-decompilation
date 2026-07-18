
void __thiscall thunk_FUN_00554f20(void *this,undefined4 param_1,uint *param_2,int param_3)

{
  code *pcVar1;
  void *this_00;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 auStack_48 [16];
  void *pvStack_8;
  
  pvStack_8 = this;
  thunk_FUN_00555570((int)this);
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar5);
  this_00 = pvStack_8;
  if (iVar2 == 0) {
    if (-1 < *(int *)((int)pvStack_8 + 0x3c)) {
      thunk_FUN_00555040(pvStack_8,2,0,(char *)0x0);
    }
    *(undefined4 *)((int)this_00 + 0x3c) = param_1;
    DVar3 = timeGetTime();
    *(DWORD *)((int)this_00 + 0x44) = DVar3;
    *(int *)((int)this_00 + 0x40) = param_3;
    if (param_3 == 0) {
      *(undefined4 *)((int)this_00 + 0x40) = 1;
    }
    *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
    thunk_FUN_00554c80(this_00,param_2);
    DAT_00858df8 = (undefined1 *)uVar5;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E____titans_grig_loading_cpp_007c8f0c,0x109,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c8f0c,0x10a);
  return;
}

