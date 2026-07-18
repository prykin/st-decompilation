
void __thiscall thunk_FUN_00554c80(void *this,uint *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  undefined4 *puStack_8;
  
  puStack_8 = this;
  thunk_FUN_00555570((int)this);
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  puVar2 = puStack_8;
  if (iVar3 == 0) {
    thunk_FUN_00555680(puStack_8,(char *)param_1);
    FUN_006b4170(puVar2[1],0,puVar2[5] + puVar2[3],puVar2[4] + puVar2[6],puVar2[7],puVar2[0xd],0);
    FUN_007119c0(param_1,puVar2[3],puVar2[4],puVar2[9]);
    FUN_006b42d0((uint)DAT_0080759c,puVar2[5] + puVar2[3],puVar2[6] + puVar2[4],
                 (BITMAPINFO *)*puVar2,(uint *)0x0,puVar2[5] + puVar2[3],puVar2[6] + puVar2[4],
                 puVar2[7],puVar2[0xd]);
    FUN_006b4680(DAT_0080759c,puVar2[5] + puVar2[3],puVar2[4] + puVar2[6],(BITMAPINFO *)puVar2[1],
                 (uint *)0x0,puVar2[5] + puVar2[3],puVar2[4] + puVar2[6],puVar2[7],puVar2[0xd],0);
    iVar3 = puVar2[0xe];
    puVar2[0xe] = iVar3 + 1;
    if (iVar3 + 1 < (int)puVar2[0xc]) {
      puVar2[4] = puVar2[4] + puVar2[0xd];
    }
    else {
      FUN_006b55f0((undefined4 *)puVar2[1],0,puVar2[5],puVar2[6],(int)puVar2[1],0,puVar2[5],
                   puVar2[0xd] + puVar2[6],puVar2[7],puVar2[8] - puVar2[0xd]);
      FUN_006b4170(puVar2[1],0,puVar2[5] + puVar2[3],puVar2[4] + puVar2[6],puVar2[7],puVar2[0xd],0);
      FUN_006b42d0((uint)DAT_0080759c,puVar2[5],puVar2[6],(BITMAPINFO *)*puVar2,(uint *)0x0,
                   puVar2[5],puVar2[6],puVar2[7],puVar2[8]);
      FUN_006b4680(DAT_0080759c,puVar2[5],puVar2[6],(BITMAPINFO *)puVar2[1],(uint *)0x0,puVar2[5],
                   puVar2[6],puVar2[7],puVar2[8],0);
    }
    FUN_006bb370((int)DAT_0080759c,0,0);
    if ((code *)puVar2[0x16] != (code *)0x0) {
      (*(code *)puVar2[0x16])(puVar2[0x15]);
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_grig_loading_cpp_007c8f0c,0xf2,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c8f0c,0xf3);
  return;
}

