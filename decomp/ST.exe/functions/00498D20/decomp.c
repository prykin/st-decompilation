
void __thiscall FUN_00498d20(void *this,undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_10;
  undefined2 local_c;
  undefined4 local_8;
  
  switch(param_1) {
  case 1:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0x89) = 1;
    piVar4 = (int *)((int)this + 0xdd);
    goto LAB_00499129;
  case 2:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0x8d) = 1;
    piVar4 = (int *)((int)this + 0xe7);
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = *param_2;
      param_2 = param_2 + 1;
      piVar4 = piVar4 + 1;
    }
    if (*(int *)((int)this + 0xe7) == 0) {
      param_2 = *(int **)((int)this + 0xef);
      uVar5 = param_2[3];
      puVar2 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,uVar5,4,1);
      uVar6 = 0;
      *(uint **)((int)this + 0xef) = puVar2;
      if (0 < (int)uVar5) {
        do {
          FUN_006acc70((int)param_2,uVar6,&local_8);
          Library::DKW::TBL::FUN_006ae140(*(uint **)((int)this + 0xef),uVar6,&local_8);
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar5);
        return;
      }
    }
    break;
  case 3:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0x91) = 1;
    return;
  case 4:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0x95) = 1;
    *(int *)((int)this + 0x15c) = *param_2;
    *(int *)((int)this + 0x160) = param_2[1];
    if (*(int *)((int)this + 0x15c) == 0) {
      param_2 = *(int **)((int)this + 0x160);
      uVar5 = param_2[3];
      puVar2 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,uVar5,2,1);
      uVar6 = 0;
      *(uint **)((int)this + 0x160) = puVar2;
      if (0 < (int)uVar5) {
        do {
          FUN_006acc70((int)param_2,uVar6,(undefined4 *)((int)&param_1 + 2));
          Library::DKW::TBL::FUN_006ae140
                    (*(uint **)((int)this + 0x160),uVar6,(undefined4 *)((int)&param_1 + 2));
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar5);
        return;
      }
    }
    break;
  case 5:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0x99) = 1;
    piVar4 = (int *)((int)this + 0x164);
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = *param_2;
      param_2 = param_2 + 1;
      piVar4 = piVar4 + 1;
    }
    if (*(int *)((int)this + 0x164) == 0) {
      param_2 = *(int **)((int)this + 0x168);
      uVar5 = param_2[3];
      puVar2 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,uVar5,2,1);
      uVar6 = 0;
      *(uint **)((int)this + 0x168) = puVar2;
      if (0 < (int)uVar5) {
        do {
          FUN_006acc70((int)param_2,uVar6,(undefined4 *)((int)&param_1 + 2));
          Library::DKW::TBL::FUN_006ae140
                    (*(uint **)((int)this + 0x168),uVar6,(undefined4 *)((int)&param_1 + 2));
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar5);
        return;
      }
    }
    break;
  case 6:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0x9d) = 1;
    piVar4 = (int *)((int)this + 0x103);
    *piVar4 = *param_2;
    *(int *)((int)this + 0x107) = param_2[1];
    iVar3 = *piVar4;
    param_2 = *(int **)(iVar3 + 0xc);
    puVar2 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,6,1);
    *piVar4 = (int)puVar2;
    uVar5 = 0;
    if (0 < (int)param_2) {
      do {
        if (uVar5 < *(uint *)(iVar3 + 0xc)) {
          puVar1 = (undefined4 *)(*(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c));
        }
        else {
          puVar1 = (undefined4 *)0x0;
        }
        local_10 = *puVar1;
        local_c = *(undefined2 *)(puVar1 + 1);
        Library::DKW::TBL::FUN_006ae140((uint *)*piVar4,uVar5,&local_10);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)param_2);
      return;
    }
    break;
  case 7:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xa1) = 1;
    *(int *)((int)this + 0xff) = *param_2;
    return;
  case 8:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xa5) = 1;
    piVar4 = (int *)((int)this + 0x10b);
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = *param_2;
      param_2 = param_2 + 1;
      piVar4 = piVar4 + 1;
    }
    if (*(int *)((int)this + 0x10b) == 0) {
      param_2 = *(int **)((int)this + 0x10f);
      uVar5 = param_2[3];
      puVar2 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,uVar5,2,1);
      uVar6 = 0;
      *(uint **)((int)this + 0x10f) = puVar2;
      if (0 < (int)uVar5) {
        do {
          FUN_006acc70((int)param_2,uVar6,(undefined4 *)((int)&param_1 + 2));
          Library::DKW::TBL::FUN_006ae140
                    (*(uint **)((int)this + 0x10f),uVar6,(undefined4 *)((int)&param_1 + 2));
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar5);
      }
    }
    if (*(int *)((int)this + 0x123) == 0) {
      param_2 = *(int **)((int)this + 0x127);
      uVar5 = param_2[3];
      puVar2 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,uVar5,2,1);
      uVar6 = 0;
      *(uint **)((int)this + 0x127) = puVar2;
      if (0 < (int)uVar5) {
        do {
          FUN_006acc70((int)param_2,uVar6,(undefined4 *)((int)&param_1 + 2));
          Library::DKW::TBL::FUN_006ae140
                    (*(uint **)((int)this + 0x127),uVar6,(undefined4 *)((int)&param_1 + 2));
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar5);
        return;
      }
    }
    break;
  case 9:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xa9) = 1;
    piVar4 = (int *)((int)this + 0x137);
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = *param_2;
      param_2 = param_2 + 1;
      piVar4 = piVar4 + 1;
    }
    *(short *)piVar4 = (short)*param_2;
    *(undefined1 *)((int)piVar4 + 2) = *(undefined1 *)((int)param_2 + 2);
    return;
  case 10:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xad) = 1;
    *(int *)((int)this + 0x156) = *param_2;
    *(short *)((int)this + 0x15a) = (short)param_2[1];
    return;
  case 0xb:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xb1) = 1;
    *(int *)((int)this + 0x178) = *param_2;
    return;
  case 0xc:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xb5) = 1;
    *(int *)((int)this + 0x17c) = *param_2;
    *(short *)((int)this + 0x180) = (short)param_2[1];
    return;
  case 0xd:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xb9) = 1;
    piVar4 = (int *)((int)this + 0x182);
LAB_00499129:
    *piVar4 = *param_2;
    piVar4[1] = param_2[1];
    *(short *)(piVar4 + 2) = (short)param_2[2];
    return;
  case 0xe:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xbd) = 1;
    *(int *)((int)this + 0x18c) = *param_2;
    *(short *)((int)this + 400) = (short)param_2[1];
    return;
  case 0xf:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xc1) = 1;
    *(int *)((int)this + 0x192) = *param_2;
    *(short *)((int)this + 0x196) = (short)param_2[1];
    *(undefined1 *)((int)this + 0x198) = *(undefined1 *)((int)param_2 + 6);
    return;
  case 0x10:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xc5) = 1;
    *(int *)((int)this + 0x1a3) = *param_2;
    *(int *)((int)this + 0x1a7) = param_2[1];
    *(int *)((int)this + 0x1ab) = param_2[2];
    *(int *)((int)this + 0x1af) = param_2[3];
    return;
  case 0x11:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xc9) = 1;
    *(int *)((int)this + 0x199) = *param_2;
    *(int *)((int)this + 0x19d) = param_2[1];
    *(short *)((int)this + 0x1a1) = (short)param_2[2];
    return;
  case 0x12:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xcd) = 1;
    *(int *)((int)this + 0x1b3) = *param_2;
    *(short *)((int)this + 0x1b7) = (short)param_2[1];
    return;
  case 0x13:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xd1) = 1;
    *(int *)((int)this + 0x1b9) = *param_2;
    *(short *)((int)this + 0x1bd) = (short)param_2[1];
    return;
  case 0x14:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xd5) = 1;
    *(int *)((int)this + 0x1bf) = *param_2;
    *(short *)((int)this + 0x1c3) = (short)param_2[1];
    return;
  case 0x15:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xd9) = 1;
    *(int *)((int)this + 0x1c5) = *param_2;
    return;
  case 0x65:
    *(undefined4 *)((int)this + 0x61) = 1;
    *(undefined4 *)((int)this + 0x6d) = 1;
    *(char *)((int)this + 0x1c9) = (char)*param_2;
    return;
  case 0x66:
    *(undefined4 *)((int)this + 0x61) = 1;
    *(undefined4 *)((int)this + 0x71) = 1;
    if (*(int *)((int)this + 0x1ca) == 0) {
      puVar2 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
      *(uint **)((int)this + 0x1ca) = puVar2;
    }
    Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x1ca),param_2);
    return;
  case 0x67:
    *(undefined4 *)((int)this + 0x61) = 1;
    *(undefined4 *)((int)this + 0x75) = 1;
    if (*(int *)((int)this + 0x1ce) == 0) {
      puVar2 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,4,1);
      *(uint **)((int)this + 0x1ce) = puVar2;
    }
    Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x1ce),param_2);
    return;
  case 0x68:
    *(undefined4 *)((int)this + 0x61) = 1;
    *(undefined4 *)((int)this + 0x79) = 1;
    if (*(int *)((int)this + 0x1d2) == 0) {
      puVar2 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
      *(uint **)((int)this + 0x1d2) = puVar2;
    }
    Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x1d2),param_2);
    return;
  case 0x69:
    *(undefined4 *)((int)this + 0x61) = 1;
    *(undefined4 *)((int)this + 0x7d) = 1;
    if (*(int *)((int)this + 0x1d6) == 0) {
      puVar2 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
      *(uint **)((int)this + 0x1d6) = puVar2;
    }
    Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x1d6),param_2);
    return;
  case 0x6a:
    *(undefined4 *)((int)this + 0x61) = 1;
    *(undefined4 *)((int)this + 0x81) = 1;
    if (*(int *)((int)this + 0x1da) == 0) {
      puVar2 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
      *(uint **)((int)this + 0x1da) = puVar2;
    }
    Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x1da),param_2);
  }
  return;
}

