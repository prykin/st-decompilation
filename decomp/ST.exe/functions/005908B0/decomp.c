
undefined4 __thiscall FUN_005908b0(void *this,int param_1)

{
  code *pcVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  void *local_8;
  
  local_8 = this;
  uVar3 = FUN_006e51b0(*(int *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x58) = uVar3;
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar4 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  pvVar2 = local_8;
  if (iVar4 == 0) {
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0:
      thunk_FUN_005907d0();
      break;
    case 2:
      *(undefined1 *)((int)local_8 + 0x5d) = *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x14);
      thunk_FUN_00590170();
      break;
    case 3:
      thunk_FUN_00590410();
      break;
    case 5:
      thunk_FUN_00590580();
      break;
    case 0x62:
    case 100:
      thunk_FUN_00590860(local_8);
      if (*(char *)((int)pvVar2 + 0x5d) == '\0') {
        *(undefined4 *)((int)pvVar2 + 0x40) = 0x200;
        *(undefined4 *)((int)pvVar2 + 0x44) = 0;
        *(undefined4 *)((int)pvVar2 + 0x48) = 0x6102;
      }
      else {
        *(undefined4 *)((int)pvVar2 + 0x44) = 1;
        *(undefined4 *)((int)pvVar2 + 0x48) = 0x7102;
      }
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    uVar3 = FUN_006e5fd0();
    return uVar3;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar5 = FUN_006ad4d0(s_E____titans_Start_adv_obj_cpp_007cbc24,0x87,0,iVar4,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  FUN_006a5e40(iVar4,0,0x7cbc24,0x87);
  return 0xffff;
}

