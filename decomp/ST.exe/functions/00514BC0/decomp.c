
void __thiscall FUN_00514bc0(void *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  uint local_c;
  
  bVar5 = false;
  local_c = 0;
  if (*(int *)sizeHelp_exref == 0) {
    return;
  }
LAB_00514be2:
  iVar6 = local_c * 0x11 + *(int *)((int)this + 0x1c7);
  cVar1 = *(char *)(iVar6 + 8);
  switch(cVar1) {
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\v':
    if ((*(int *)(iVar6 + 9) == param_1) &&
       ((cVar1 == '\x03' || (*(int *)(iVar6 + 0xd) == param_2)))) {
      bVar5 = true;
      goto LAB_00514d04;
    }
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\n':
    break;
  case '\f':
    switch(param_1) {
    case 0xf2:
    case 0xf3:
    case 0xf4:
    case 0xf5:
      iVar2 = *(int *)(iVar6 + 9);
      if ((((iVar2 != 0xf2) && (iVar2 != 0xf3)) && (iVar2 != 0xf4)) && (iVar2 != 0xf5))
      goto switchD_00514c13_caseD_5;
      bVar5 = true;
      break;
    case 0xf6:
    case 0xf7:
      if ((*(int *)(iVar6 + 9) != 0xf6) && (*(int *)(iVar6 + 9) != 0xf7))
      goto switchD_00514c13_caseD_5;
      bVar5 = true;
      break;
    case 0xf8:
    case 0xf9:
      if ((*(int *)(iVar6 + 9) != 0xf8) && (*(int *)(iVar6 + 9) != 0xf9))
      goto switchD_00514c13_caseD_5;
      bVar5 = true;
      break;
    case 0xfa:
    case 0xfb:
      if ((*(int *)(iVar6 + 9) != 0xfa) && (*(int *)(iVar6 + 9) != 0xfb))
      goto switchD_00514c13_caseD_5;
      bVar5 = true;
      break;
    default:
      if (*(int *)(iVar6 + 9) != param_1) goto switchD_00514c13_caseD_5;
      bVar5 = true;
    }
    goto LAB_00514d04;
  default:
    goto switchD_00514c13_default;
  }
switchD_00514c13_caseD_5:
switchD_00514c13_default:
  if (bVar5) {
LAB_00514d04:
    uVar3 = *(uint *)(iVar6 + 0xd);
    pvVar4 = *(void **)(iVar6 + 9);
    switch(cVar1) {
    case '\x01':
      thunk_FUN_00517a50(this,(int)pvVar4,uVar3,'\0');
      break;
    case '\x02':
      thunk_FUN_0051a100((int)pvVar4,uVar3,'\0');
      break;
    case '\x03':
      thunk_FUN_00518c20((int)pvVar4,'\0');
      break;
    case '\x04':
      thunk_FUN_0051b5a0(this,(int)pvVar4,uVar3,'\0');
      break;
    case '\x05':
      thunk_FUN_00516a40(this,(uint)pvVar4,(byte)uVar3,'\0');
      break;
    case '\x06':
      thunk_FUN_00516480((uint)pvVar4,'\0');
      break;
    case '\a':
      thunk_FUN_00516300();
      break;
    case '\b':
      thunk_FUN_0051d540(pvVar4,uVar3,'\0');
      break;
    case '\n':
      thunk_FUN_00513a40();
      break;
    case '\v':
      thunk_FUN_0051c980(this,(int)pvVar4,uVar3,'\0');
      break;
    case '\f':
      thunk_FUN_0051d360((int)pvVar4,'\0');
    }
    iVar6 = *(int *)((int)this + 0x1c7) + local_c * 0x11;
    thunk_FUN_005149b0(*(int *)(iVar6 + 9),*(int *)(iVar6 + 0xd));
    thunk_FUN_005134b0((int)this);
    local_c = *(uint *)sizeHelp_exref;
    (**(code **)(*(int *)this + 0x18))(1);
  }
  local_c = local_c + 1;
  if (*(uint *)sizeHelp_exref <= local_c) {
    return;
  }
  goto LAB_00514be2;
}

