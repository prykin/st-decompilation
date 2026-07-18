
void FUN_0054d180(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar4;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    piVar4 = local_8 + 0x30;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    local_8[0x33] = 0xf;
    local_8[0x34] = 0x7106;
    (**(code **)(*local_8 + 0x18))(local_8 + 0x30);
    if (*(int *)((int)local_8 + 0x39) != 0) {
      FUN_006b9890((int *)((int)local_8 + 0x39));
    }
    if (*(int *)((int)local_8 + 0x4f) != 0) {
      FUN_006ab060((undefined4 *)((int)local_8 + 0x4f));
    }
    if (*(int *)((int)local_8 + 0x3d) != 0) {
      FUN_006ab060((undefined4 *)((int)local_8 + 0x3d));
    }
    *(undefined4 *)((int)local_8 + 0x41) = 0;
    *(undefined4 *)((int)local_8 + 0x45) = 0;
    *(undefined4 *)((int)local_8 + 0x53) = 0;
    if (*(int *)((int)local_8 + 0x65) != 0) {
      FUN_006b9890((int *)((int)local_8 + 0x65));
    }
    *(undefined4 *)((int)local_8 + 0x69) = 0;
    *(undefined4 *)((int)local_8 + 0x6d) = 0;
    *(undefined4 *)((int)local_8 + 0x71) = 0;
    *(undefined4 *)((int)local_8 + 0x75) = 0;
    FUN_006e52d0((int)local_8);
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x1b1,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c8430,0x1b3);
  return;
}

