
void __thiscall FUN_0052f2b0(void *this,char param_1)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined4 local_5c;
  undefined4 local_58 [16];
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  int local_8;
  
  if (*(int *)((int)this + 0x19c) != 0) {
    return;
  }
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  local_c = this;
  iVar3 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  pvVar2 = local_c;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_5c;
    iVar4 = FUN_006ad4d0(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x125,0,iVar3,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(iVar3,0,0x7c70a0,0x125);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  switch(*(short *)((int)local_c + 0x172)) {
  case 1:
  case 3:
    switch(param_1) {
    case '\x02':
    case '\f':
    case '\x0e':
      *(undefined1 *)((int)local_c + 0x1a9) = 1;
    case '\x01':
      if (param_1 == '\x01') {
        *(undefined1 *)((int)local_c + 0x1a9) = 0;
      }
      if (param_1 == *(char *)((int)local_c + 0x1a4)) {
        DAT_00858df8 = (undefined4 *)local_5c;
        return;
      }
      *(char *)((int)local_c + 0x1a4) = param_1;
      thunk_FUN_0052fb00();
      DAT_00858df8 = (undefined4 *)local_5c;
      return;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
    case '\a':
    case '\b':
    case '\t':
    case '\n':
    case '\v':
    case '\r':
    default:
      if (*(short *)((int)local_c + 0x172) == 1) {
        thunk_FUN_0052f900(local_c,0);
      }
      *(undefined2 *)((int)pvVar2 + 0x172) = 4;
      DAT_00808788 = 0;
      if ((DAT_00801688 != (void *)0x0) && (*(short *)((int)DAT_00801688 + 0x23f) == 1)) {
        thunk_FUN_004fa400(DAT_00801688,1);
      }
      iVar3 = 0xb0;
    }
    goto LAB_0052f60b;
  case 2:
    if (DAT_008016e8 != (void *)0x0) {
      local_8 = thunk_FUN_0053f650(DAT_008016e8,'\0');
    }
    bVar5 = local_8 != 0;
    if (DAT_0080167c != (void *)0x0) {
      local_8 = thunk_FUN_0053f650(DAT_0080167c,'\0');
    }
    bVar6 = local_8 != 0;
    if (DAT_00801684 != (void *)0x0) {
      local_8 = thunk_FUN_0053f650(DAT_00801684,'\0');
    }
    bVar7 = local_8 != 0;
    if (DAT_00801698 != (int *)0x0) {
      local_8 = (**(code **)(*DAT_00801698 + 0x1c))(0);
    }
    bVar8 = local_8 != 0;
    if (DAT_00802a44 != (void *)0x0) {
      local_8 = thunk_FUN_00552160(DAT_00802a44,'\0','\0');
    }
    bVar9 = local_8 != 0;
    if (DAT_00801678 != (int *)0x0) {
      local_8 = (**(code **)(*DAT_00801678 + 0x1c))(0);
    }
    bVar10 = local_8 != 0;
    if (DAT_008016ec != (int *)0x0) {
      local_8 = (**(code **)(*DAT_008016ec + 0x1c))(0);
    }
    bVar11 = local_8 != 0;
    if (DAT_00802a48 != (int *)0x0) {
      local_8 = (**(code **)(*DAT_00802a48 + 0x1c))(0);
    }
    bVar12 = local_8 != 0;
    if (DAT_0080168c != (int *)0x0) {
      local_8 = (**(code **)(*DAT_0080168c + 0x1c))(0);
    }
    bVar13 = local_8 != 0;
    if (DAT_00801680 != (void *)0x0) {
      local_8 = thunk_FUN_0053f650(DAT_00801680,'\0');
    }
    bVar14 = local_8 != 0;
    if (DAT_00801690 != (int *)0x0) {
      local_8 = (**(code **)(*DAT_00801690 + 0x18))(0);
    }
    bVar15 = local_8 != 0;
    if (DAT_008016e4 != (void *)0x0) {
      local_8 = thunk_FUN_0053a820(DAT_008016e4,'\0');
    }
    if ((local_8 != 0 ||
         (bVar15 ||
         (bVar14 ||
         (bVar13 ||
         (bVar12 || (bVar11 || (bVar10 || (bVar9 || (bVar8 || (bVar7 || (bVar6 || bVar5)))))))))))
       && (param_1 == '\x0f')) {
      DAT_00858df8 = (undefined4 *)local_5c;
      return;
    }
    local_10 = 0;
    local_14 = (uint)(DAT_00808783 != '\x03');
    local_18 = 1;
    thunk_FUN_0054edf0((undefined4 *)0x5,&local_18,1,0xffffffff);
    DAT_0080878c = 1;
    if (DAT_00801688 != (void *)0x0) {
      thunk_FUN_004fa400(DAT_00801688,0);
    }
    switch(param_1) {
    case '\x01':
      break;
    case '\x02':
    case '\f':
    case '\x0e':
      *(undefined1 *)((int)pvVar2 + 0x1a9) = 1;
      break;
    default:
      goto switchD_0052f589_caseD_3;
    }
    if (param_1 == '\x01') {
      *(undefined1 *)((int)pvVar2 + 0x1a9) = 0;
    }
    if (param_1 != *(char *)((int)pvVar2 + 0x1a4)) {
      *(char *)((int)pvVar2 + 0x1a4) = param_1;
      thunk_FUN_0052fb00();
      goto switchD_0052f30f_caseD_4;
    }
    break;
  case 4:
switchD_0052f30f_caseD_4:
    break;
  default:
    goto switchD_0052f30f_default;
  }
switchD_0052f589_caseD_3:
  switch(param_1) {
  case '\x02':
  case '\f':
  case '\x0e':
    *(undefined1 *)((int)pvVar2 + 0x1a9) = 1;
  case '\x01':
    if (param_1 == '\x01') {
      *(undefined1 *)((int)pvVar2 + 0x1a9) = 0;
    }
    if (param_1 != *(char *)((int)pvVar2 + 0x1a4)) {
      *(char *)((int)pvVar2 + 0x1a4) = param_1;
      thunk_FUN_0052fb00();
    }
  default:
    *(undefined2 *)((int)pvVar2 + 0x172) = 3;
    iVar3 = 0xaf;
  }
LAB_0052f60b:
  thunk_FUN_005252c0(iVar3);
switchD_0052f30f_default:
  DAT_00858df8 = (undefined4 *)local_5c;
  return;
}

