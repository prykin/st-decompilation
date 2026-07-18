
void __cdecl FUN_00675ea0(uint param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_48;
  undefined4 local_44 [16];
  
  local_48 = DAT_00858df8;
  DAT_00858df8 = &local_48;
  iVar4 = __setjmp3(local_44,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_48;
    iVar6 = FUN_006ad4d0(s_E____titans_ai_ai_mdef_cpp_007d2d58,0x101,0,iVar4,&DAT_007a4ccc);
    if (iVar6 == 0) {
      FUN_006a5e40(iVar4,0,0x7d2d58,0x102);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_2 == (int *)0x0) {
    DAT_00858df8 = (undefined4 *)local_48;
    return;
  }
  iVar4 = (**(code **)(*param_2 + 0x2c))();
  if ((iVar4 < 1) || (0x28 < iVar4)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    if ((iVar4 < 0x32) || (0x73 < iVar4)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    bVar3 = false;
    if (!bVar2) goto LAB_00675f12;
  }
  bVar3 = true;
LAB_00675f12:
  if (bVar3) {
    puVar5 = FUN_006ae290((uint *)0x0,1,2,1);
    FUN_006ae1c0(puVar5,(undefined4 *)((int)param_2 + 0x32));
    thunk_FUN_00675dc0(param_1,(int)puVar5);
    FUN_006ae110((byte *)puVar5);
  }
  DAT_00858df8 = (undefined4 *)local_48;
  return;
}

