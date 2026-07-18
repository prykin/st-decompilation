
void FUN_006456c0(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  void *unaff_EDI;
  undefined4 *puVar6;
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  int local_8;
  
  local_8 = param_1;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar5 = (undefined4 *)(local_8 + 0x14);
    puVar6 = (undefined4 *)(local_c + 0x245);
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)(local_c + 0x231) = *(undefined4 *)(local_8 + 0x58);
    *(undefined4 *)(local_c + 0x235) = *(undefined4 *)(local_8 + 0x5c);
    *(undefined4 *)(local_c + 0x239) = *(undefined4 *)(local_8 + 0x60);
    *(undefined4 *)(local_c + 0x23d) = *(undefined4 *)(local_8 + 100);
    uVar3 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)(local_8 + 0x68) + local_8));
    *(undefined4 *)(local_c + 0x241) = uVar3;
    DAT_00858df8 = (undefined4 *)local_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar4 = FUN_006ad4d0(s_E____titans_nick_to_torp_cpp_007d25c0,0x4e5,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7d25c0,0x4e6);
  return;
}

