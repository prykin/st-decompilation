
undefined4 __thiscall FUN_00566c20(void *this,int param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  void *local_8;
  
  local_8 = this;
  uVar3 = FUN_006e51b0(*(int *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar4 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar5 = FUN_006ad4d0(s_E____titans_snd_mngr_cpp_007c9748,0xdc,0,iVar4,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return uVar3;
    }
    FUN_006a5e40(iVar4,0,0x7c9748,0xdc);
    return 0xffff;
  }
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 != 0) {
    if (iVar4 == 2) {
      DAT_008033f0 = local_8;
      *(undefined4 *)((int)local_8 + 0x28) = *(undefined4 *)(param_1 + 0x14);
    }
    else if (iVar4 == 3) {
      DAT_008033f0 = (void *)0x0;
      thunk_FUN_00566900((int)local_8);
    }
    goto LAB_00566d75;
  }
  cVar1 = *(char *)((int)local_8 + 0x38);
  switch(cVar1) {
  case '\0':
    if (cVar1 != '\x01') {
      *(undefined1 *)((int)local_8 + 0x38) = 1;
      *(undefined4 *)((int)local_8 + 0x39) = 0xffffffff;
    }
    *(undefined4 *)((int)local_8 + 0x24) = *(undefined4 *)((int)local_8 + 0x1c);
    *(undefined4 *)((int)local_8 + 0x20) = *(undefined4 *)((int)local_8 + 0x1c);
    break;
  case '\x01':
    iVar4 = *(int *)((int)local_8 + 0x1c);
    if ((4999 < (uint)(iVar4 - *(int *)((int)local_8 + 0x20))) &&
       ((uint)(iVar4 - *(int *)((int)local_8 + 0x24)) < 0x3e9)) {
      *(int *)((int)local_8 + 0x24) = iVar4;
      *(int *)((int)local_8 + 0x20) = iVar4;
joined_r0x00566d57:
      if (cVar1 != '\x03') {
        *(undefined1 *)((int)local_8 + 0x38) = 3;
LAB_00566d5d:
        *(undefined4 *)((int)local_8 + 0x39) = 0xffffffff;
      }
    }
    break;
  case '\x02':
    iVar4 = *(int *)((int)local_8 + 0x1c);
    if (4999 < (uint)(iVar4 - *(int *)((int)local_8 + 0x20))) {
      uVar6 = iVar4 - *(int *)((int)local_8 + 0x24);
      if (19999 < uVar6) goto LAB_00566d35;
      if (uVar6 < 0x3e9) {
        *(int *)((int)local_8 + 0x24) = iVar4;
        *(int *)((int)local_8 + 0x20) = iVar4;
        goto joined_r0x00566d57;
      }
    }
    break;
  case '\x03':
    iVar4 = *(int *)((int)local_8 + 0x1c);
    if (14999 < (uint)(iVar4 - *(int *)((int)local_8 + 0x24))) {
LAB_00566d35:
      *(int *)((int)local_8 + 0x24) = iVar4;
      *(int *)((int)local_8 + 0x20) = iVar4;
      if (cVar1 != '\x01') {
        *(undefined1 *)((int)local_8 + 0x38) = 1;
        goto LAB_00566d5d;
      }
    }
  }
  thunk_FUN_00566aa0(local_8);
  thunk_FUN_00568c50();
LAB_00566d75:
  DAT_00858df8 = (undefined4 *)local_4c;
  uVar3 = FUN_006e5fd0();
  return uVar3;
}

