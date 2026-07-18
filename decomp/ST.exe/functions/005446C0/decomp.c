
void FUN_005446c0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  undefined4 *puVar4;
  void *unaff_EDI;
  undefined4 local_b8;
  undefined4 local_b4 [16];
  undefined4 local_74 [5];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 *local_14;
  void *local_8;
  
  local_b8 = DAT_00858df8;
  DAT_00858df8 = &local_b8;
  iVar2 = __setjmp3(local_b4,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar4 = local_28;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puVar4 = local_74;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_14 = local_74;
    local_74[0] = 8;
    local_5c = 2;
    local_60 = *(undefined4 *)((int)local_8 + 8);
    local_18 = 0x10;
    puVar4 = &DAT_00808136;
    do {
      local_74[1] = puVar4[-0x50];
      local_58 = *puVar4;
      FUN_006e6000(local_8,3,1,local_28);
      puVar4 = puVar4 + 1;
    } while ((int)puVar4 < 0x808146);
    DAT_00858df8 = (undefined4 *)local_b8;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_b8;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x175,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c7d60,0x176);
  return;
}

