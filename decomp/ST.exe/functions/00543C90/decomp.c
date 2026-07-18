
void __thiscall FUN_00543c90(void *this,int param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  void *pvVar3;
  bool bVar4;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_54;
  undefined4 local_50 [16];
  uint local_10;
  void *local_c;
  int local_8;
  
  local_c = this;
  local_10 = FUN_006e51b0(*(int *)((int)this + 0x10));
  local_8 = 0;
  if (*(uint *)((int)this + 0x1c) == 0xffffffff) {
    iVar5 = 0;
  }
  else {
    bVar4 = FUN_006b33f0(*(int *)((int)this + 0x60),*(uint *)((int)this + 0x1c));
    iVar5 = CONCAT31(extraout_var,bVar4);
  }
  if (iVar5 != 0) {
    local_54 = DAT_00858df8;
    DAT_00858df8 = &local_54;
    iVar5 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
    pvVar3 = local_c;
    uVar2 = local_10;
    if (iVar5 == 0) {
      *(undefined4 *)((int)local_c + 0x20) = 0xfffffffe;
      if (param_1 != -1) {
        *(int *)((int)local_c + 0x34) = param_1;
        local_8 = 1;
      }
      if (param_2 != -1) {
        *(int *)((int)local_c + 0x38) = param_2;
        local_8 = 1;
      }
      if ((uint)(*(int *)((int)local_c + 0x58) + *(int *)((int)local_c + 0x5c)) <= local_10) {
        *(undefined4 *)((int)local_c + 0x20) = 0xffffffff;
        *(uint *)((int)local_c + 0x5c) = local_10;
        local_8 = 1;
      }
      if (local_8 != 0) {
        if (*(int *)((int)local_c + 0xa9) == 0) {
          FUN_006b8bc0(*(int **)((int)local_c + 0xad),*(int *)((int)local_c + 0x34),
                       *(int *)((int)local_c + 0x38),*(int *)((int)local_c + 0x20));
        }
        else {
          FUN_006b3640((int *)DAT_008075a8,*(uint *)((int)local_c + 0x1c),
                       *(uint *)((int)local_c + 0x20),
                       *(int *)((int)local_c + 0xb9) + *(int *)((int)local_c + 0x34),
                       *(int *)((int)local_c + 0xbd) + *(int *)((int)local_c + 0x38));
        }
      }
      iVar5 = *(int *)((int)pvVar3 + 0x4eb);
      if ((iVar5 != 0) && (DAT_00807598 != (void *)0x0)) {
        if (*(int *)(iVar5 + 0xc) + -1 <= *(int *)(iVar5 + 8)) {
          FUN_00715ab0();
          FUN_0072e2b0(*(undefined4 **)((int)pvVar3 + 0x4eb));
          *(undefined4 *)((int)pvVar3 + 0x4eb) = 0;
          DAT_00858df8 = (undefined4 *)local_54;
          return;
        }
        if ((uint)(*(int *)(iVar5 + 0x40) + *(int *)(iVar5 + 0x44)) <= uVar2) {
          *(uint *)(iVar5 + 0x44) = uVar2;
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
          FUN_006e2970(DAT_00807598,*(undefined4 *)((int)pvVar3 + 0x4ef),
                       *(undefined4 *)((int)pvVar3 + 0x4f3),*(undefined4 *)((int)pvVar3 + 0x4f7),
                       (int *)(*(int *)((int)pvVar3 + 0x4eb) + 0x1c),
                       (int *)(*(int *)((int)pvVar3 + 0x4eb) + 0x20));
          *(int *)(*(int *)((int)pvVar3 + 0x4eb) + 0x1c) =
               *(int *)(*(int *)((int)pvVar3 + 0x4eb) + 0x1c) -
               *(int *)(*(int *)((int)pvVar3 + 0x4e7) + 9) / 2;
          *(int *)(*(int *)((int)pvVar3 + 0x4eb) + 0x20) =
               *(int *)(*(int *)((int)pvVar3 + 0x4eb) + 0x20) -
               *(int *)(*(int *)((int)pvVar3 + 0x4e7) + 0xd) / 2;
          iVar5 = *(int *)((int)pvVar3 + 0x4eb);
          FUN_006b3730(DAT_008075a8,*(uint *)(iVar5 + 4),*(uint *)(iVar5 + 8),
                       *(uint *)(iVar5 + 0x1c),*(uint *)(iVar5 + 0x20));
        }
      }
      DAT_00858df8 = (undefined4 *)local_54;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_54;
    iVar6 = FUN_006ad4d0(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0xcc,0,iVar5,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7c7d60,0xcd);
  }
  return;
}

