
void __thiscall FUN_00486b60(void *this,undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *local_c;
  undefined2 local_8;
  undefined2 local_6;
  
  puVar1 = param_1;
  *param_1 = 1;
  iVar3 = (**(code **)(*(int *)this + 8))();
  if (iVar3 == 1) {
    puVar1[1] = 1;
  }
  else {
    puVar1[1] = 0;
  }
  puVar1[2] = 1;
  iVar3 = thunk_FUN_00493cd0(this);
  if (iVar3 == 0) {
    puVar1[0x1d] = 1;
  }
  else {
    puVar1[0x1d] = 0;
  }
  uVar2 = (**(code **)(*(int *)this + 0x7c))();
  puVar1[0x1b] = uVar2;
  uVar2 = (**(code **)(*(int *)this + 0xc4))();
  puVar1[0x1c] = uVar2;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((int)this + 0x6f7);
  iVar3 = thunk_FUN_004e8030(*(int *)((int)this + 0x6f7));
  puVar1[7] = (char)iVar3;
  *(undefined4 *)(puVar1 + 8) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)((int)this + 0x6fb);
  *(undefined4 *)(puVar1 + 0x10) = *(undefined4 *)((int)this + 0x6ff);
  *(undefined4 *)(puVar1 + 0x14) = *(undefined4 *)((int)this + 0x703);
  *(undefined2 *)(puVar1 + 0x18) = *(undefined2 *)((int)this + 0x707);
  puVar1[0x1a] = *(undefined1 *)((int)this + 0x709);
  switch(*(undefined4 *)((int)this + 0x6f7)) {
  case 7:
  case 0x13:
  case 0x1b:
    if (*(int *)((int)this + 0x7ca) != 0) {
      local_c = (int *)0x0;
      FUN_006e62d0(PTR_00802a38,*(int *)((int)this + 0x7ca),(int *)&local_c);
      if (local_c != (int *)0x0) {
        uVar5 = (**(code **)(*local_c + 0x2c))();
        *(undefined4 *)(puVar1 + 0x1e) = uVar5;
        iVar3 = local_c[8];
        if (iVar3 == 0x14) {
          iVar3 = thunk_FUN_004e8030(*(int *)((int)this + 0x6f7));
          puVar1[0x22] = (char)iVar3;
          uVar2 = (**(code **)(*local_c + 0x7c))();
          puVar1[0x23] = uVar2;
        }
        else if ((iVar3 == 0x172) || (iVar3 == 0x1a4)) {
          uVar2 = (**(code **)(*local_c + 0xc))();
          puVar1[0x22] = uVar2;
          uVar2 = (**(code **)(*local_c + 0x7c))();
          puVar1[0x23] = uVar2;
        }
        else {
          puVar1[0x22] = 0;
          uVar2 = (**(code **)(*local_c + 0x7c))();
          puVar1[0x23] = uVar2;
        }
        break;
      }
    }
    *(undefined4 *)(puVar1 + 0x1e) = 0;
    break;
  case 8:
  case 9:
  case 0xc:
  case 0x14:
  case 0x15:
  case 0x18:
  case 0x19:
  case 0x1a:
    *(undefined2 *)(puVar1 + 0x20) = 0;
    *(undefined2 *)(puVar1 + 0x1e) = 0;
    break;
  default:
    *(undefined2 *)(puVar1 + 0x1e) = *(undefined2 *)((int)this + 0x79a);
    uVar4 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
    if ((uVar4 & 0xff) == 1) {
      iVar3 = *(int *)((int)this + 0x24);
      iVar6 = 6;
LAB_00486cfc:
      uVar5 = thunk_FUN_004e60d0(iVar3,iVar6);
      *(short *)(puVar1 + 0x22) = (short)uVar5;
    }
    else {
      if ((uVar4 & 0xff) == 2) {
        iVar3 = *(int *)((int)this + 0x24);
        iVar6 = 0x83;
        goto LAB_00486cfc;
      }
      *(undefined2 *)(puVar1 + 0x22) = 0;
    }
    *(undefined2 *)(puVar1 + 0x26) = *(undefined2 *)((int)this + 0x7a2);
    *(undefined2 *)(puVar1 + 0x20) = *(undefined2 *)((int)this + 0x7b6);
    *(undefined2 *)(puVar1 + 0x24) = 0;
    *(undefined2 *)(puVar1 + 0x28) = *(undefined2 *)((int)this + 0x7be);
  }
  *(undefined4 *)(puVar1 + 0x2a) = 0;
  puVar1[0x2e] = 0;
  STFishC::sub_004162B0(this,&local_8,&local_6,(undefined2 *)((int)&param_1 + 2));
  puVar1[0x2e - param_1._2_2_] = 1;
  return;
}

