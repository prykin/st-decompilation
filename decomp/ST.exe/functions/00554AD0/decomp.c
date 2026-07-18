
void __thiscall FUN_00554ad0(void *this,uint *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  local_8 = this;
  thunk_FUN_00555570((int)this);
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar3 = __setjmp3(local_48,0,unaff_ESI,uVar5);
  puVar2 = local_8;
  if (iVar3 == 0) {
    FUN_006b4170(local_8[1],0,local_8[5] + local_8[3],local_8[4] + local_8[6],local_8[7],
                 local_8[0xd],0);
    FUN_007119c0(param_1,puVar2[3],puVar2[4],puVar2[9]);
    FUN_006b42d0((uint)DAT_0080759c,puVar2[3] + puVar2[5],puVar2[4] + puVar2[6],
                 (BITMAPINFO *)*puVar2,(uint *)0x0,puVar2[3] + puVar2[5],puVar2[4] + puVar2[6],
                 puVar2[7],puVar2[0xd]);
    FUN_006b4680(DAT_0080759c,puVar2[5] + puVar2[3],puVar2[4] + puVar2[6],(BITMAPINFO *)puVar2[1],
                 (uint *)0x0,puVar2[5] + puVar2[3],puVar2[4] + puVar2[6],puVar2[7],puVar2[0xd],0);
    FUN_006bb370((int)DAT_0080759c,0,0);
    if ((code *)puVar2[0x16] != (code *)0x0) {
      (*(code *)puVar2[0x16])(puVar2[0x15]);
    }
    DAT_00858df8 = (undefined1 *)uVar5;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E____titans_grig_loading_cpp_007c8f0c,0xcc,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c8f0c,0xcd);
  return;
}

