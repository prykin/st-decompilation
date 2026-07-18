
void __thiscall thunk_FUN_0045ef00(void *this,int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_1 != 0x21) && (param_1 != 5)) {
    STAllPlayersC::DeleteGuardBoat
              (DAT_007fa174,CONCAT31((int3)((uint)this >> 8),*(undefined1 *)((int)this + 0x24)),
               *(short *)((int)this + 0x32),1);
  }
  *(undefined4 *)((int)this + 0x2c4) = 1;
  switch(param_1) {
  case 1:
    *(undefined4 *)((int)this + 0x2cc) = 1;
    puVar3 = (undefined4 *)((int)this + 0x328);
    break;
  case 2:
    *(undefined4 *)((int)this + 0x2d0) = 1;
    *(undefined4 *)((int)this + 0x332) = *param_2;
    *(undefined4 *)((int)this + 0x336) = param_2[1];
    *(undefined4 *)((int)this + 0x33a) = param_2[2];
    *(undefined4 *)((int)this + 0x33e) = param_2[3];
    *(undefined1 *)((int)this + 0x342) = *(undefined1 *)(param_2 + 4);
    return;
  case 3:
  case 0x21:
    *(undefined4 *)((int)this + 0x2d4) = 1;
    *(undefined4 *)((int)this + 0x343) = *param_2;
    return;
  case 4:
    *(undefined4 *)((int)this + 0x2d8) = 1;
    puVar3 = (undefined4 *)((int)this + 0x39c);
    goto LAB_0045f0e0;
  case 5:
    *(undefined4 *)((int)this + 0x2dc) = 1;
    *(undefined4 *)((int)this + 0x3a6) = *param_2;
    *(undefined4 *)((int)this + 0x3aa) = param_2[1];
    *(undefined4 *)((int)this + 0x3ae) = param_2[2];
    *(undefined4 *)((int)this + 0x3b2) = param_2[3];
    return;
  case 6:
    *(undefined4 *)((int)this + 0x2e0) = 1;
    *(undefined4 *)((int)this + 0x347) = *param_2;
    *(undefined4 *)((int)this + 0x34b) = param_2[1];
    return;
  case 7:
    *(undefined4 *)((int)this + 0x2e4) = 1;
    puVar3 = (undefined4 *)((int)this + 0x3d4);
    goto LAB_0045f1a9;
  case 8:
    *(undefined4 *)((int)this + 0x2e8) = 1;
    *(undefined4 *)((int)this + 0x437) = *param_2;
    *(undefined4 *)((int)this + 0x43b) = param_2[1];
    *(undefined4 *)((int)this + 0x43f) = param_2[2];
    *(undefined4 *)((int)this + 0x443) = param_2[3];
    return;
  case 9:
    *(undefined4 *)((int)this + 0x2ec) = 1;
    *(undefined4 *)((int)this + 1000) = *param_2;
    *(undefined4 *)((int)this + 0x3ec) = param_2[1];
    *(undefined2 *)((int)this + 0x3f0) = *(undefined2 *)(param_2 + 2);
    *(undefined1 *)((int)this + 0x3f2) = *(undefined1 *)((int)param_2 + 10);
    return;
  case 10:
    *(undefined4 *)((int)this + 0x2f0) = 1;
    puVar3 = (undefined4 *)((int)this + 0x3de);
LAB_0045f0e0:
    *puVar3 = *param_2;
    puVar3[1] = param_2[1];
    *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(param_2 + 2);
    return;
  case 0xb:
    *(undefined4 *)((int)this + 0x2f4) = 1;
    puVar3 = (undefined4 *)((int)this + 0x41f);
    goto LAB_0045f1a9;
  case 0xc:
    *(undefined4 *)((int)this + 0x2f8) = 1;
    puVar3 = (undefined4 *)((int)this + 0x34f);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    return;
  case 0xd:
    *(undefined4 *)((int)this + 0x2fc) = 1;
    puVar3 = (undefined4 *)((int)this + 0x392);
LAB_0045f1a9:
    *puVar3 = *param_2;
    puVar3[1] = param_2[1];
    *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(param_2 + 2);
    return;
  case 0xe:
    *(undefined4 *)((int)this + 0x300) = 1;
    *(undefined4 *)((int)this + 0x447) = *param_2;
    *(undefined4 *)((int)this + 1099) = param_2[1];
    *(undefined4 *)((int)this + 0x44f) = param_2[2];
    *(undefined2 *)((int)this + 0x453) = *(undefined2 *)(param_2 + 3);
    return;
  case 0xf:
    *(undefined4 *)((int)this + 0x304) = 1;
    *(undefined4 *)((int)this + 0x3b6) = *param_2;
    *(undefined4 *)((int)this + 0x3ba) = param_2[1];
    *(undefined4 *)((int)this + 0x3be) = param_2[2];
    *(undefined2 *)((int)this + 0x3c2) = *(undefined2 *)(param_2 + 3);
    return;
  case 0x10:
    *(undefined4 *)((int)this + 0x308) = 1;
    puVar3 = (undefined4 *)((int)this + 0x3ca);
    break;
  case 0x11:
    *(undefined4 *)((int)this + 0x30c) = 1;
    puVar3 = (undefined4 *)((int)this + 0x36f);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = *(undefined2 *)param_2;
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return;
  case 0x12:
    *(undefined4 *)((int)this + 0x310) = 1;
    *(undefined4 *)((int)this + 0x429) = *param_2;
    *(undefined4 *)((int)this + 0x42d) = param_2[1];
    *(undefined4 *)((int)this + 0x431) = param_2[2];
    *(undefined2 *)((int)this + 0x435) = *(undefined2 *)(param_2 + 3);
    return;
  default:
    iVar2 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x13a7,0,0,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    return;
  case 0x14:
    *(undefined4 *)((int)this + 0x314) = 1;
    *(undefined4 *)((int)this + 0x3c4) = *param_2;
    *(undefined2 *)((int)this + 0x3c8) = *(undefined2 *)(param_2 + 1);
    return;
  case 0x15:
    *(undefined4 *)((int)this + 0x318) = 1;
    puVar3 = (undefined4 *)((int)this + 0x401);
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    return;
  case 0x16:
    *(undefined4 *)((int)this + 0x31c) = 1;
    *(undefined4 *)((int)this + 0x3f3) = *param_2;
    *(undefined4 *)((int)this + 0x3f7) = param_2[1];
    *(undefined4 *)((int)this + 0x3fb) = param_2[2];
    *(undefined2 *)((int)this + 0x3ff) = *(undefined2 *)(param_2 + 3);
    return;
  case 0x17:
    *(undefined4 *)((int)this + 800) = 1;
    puVar3 = (undefined4 *)((int)this + 0x415);
  }
  *puVar3 = *param_2;
  puVar3[1] = param_2[1];
  *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(param_2 + 2);
  return;
}

