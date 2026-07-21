
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00498D20_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106
    */

void __thiscall FUN_00498d20(void *this,Global_sub_00498D20_param_1Enum orderType,void *data)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_10;
  undefined2 local_c;
  undefined4 local_8;

  switch(orderType) {
  case CASE_1:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0x89) = 1;
    puVar4 = (undefined4 *)((int)this + 0xdd);
    goto LAB_00499129;
  case CASE_2:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0x8d) = 1;
    piVar3 = (int *)((int)this + 0xe7);
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *(int *)data;
      data = (int *)((int)data + 4);
      piVar3 = piVar3 + 1;
    }
    if (*(int *)((int)this + 0xe7) == 0) {
      data = *(void **)((int)this + 0xef);
      uVar5 = *(uint *)((int)data + 0xc);
      puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,uVar5,4,1);
      uVar6 = 0;
      *(uint **)((int)this + 0xef) = puVar1;
      if (0 < (int)uVar5) {
        do {
          DArrayGetElement(data,uVar6,&local_8);
          Library::DKW::TBL::FUN_006ae140(*(uint **)((int)this + 0xef),uVar6,&local_8);
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar5);
        return;
      }
    }
    break;
  case CASE_3:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0x91) = 1;
    return;
  case CASE_4:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0x95) = 1;
    *(int *)((int)this + 0x15c) = *(int *)data;
    *(undefined4 *)((int)this + 0x160) = *(undefined4 *)((int)data + 4);
    if (*(int *)((int)this + 0x15c) == 0) {
      data = *(void **)((int)this + 0x160);
      uVar5 = *(uint *)((int)data + 0xc);
      puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,uVar5,2,1);
      uVar6 = 0;
      *(uint **)((int)this + 0x160) = puVar1;
      if (0 < (int)uVar5) {
        do {
          DArrayGetElement(data,uVar6,(byte *)((int)&orderType + 2));
          Library::DKW::TBL::FUN_006ae140
                    (*(uint **)((int)this + 0x160),uVar6,(undefined4 *)((int)&orderType + 2));
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar5);
        return;
      }
    }
    break;
  case CASE_5:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0x99) = 1;
    piVar3 = (int *)((int)this + 0x164);
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *(int *)data;
      data = (int *)((int)data + 4);
      piVar3 = piVar3 + 1;
    }
    if (*(int *)((int)this + 0x164) == 0) {
      data = *(void **)((int)this + 0x168);
      uVar5 = *(uint *)((int)data + 0xc);
      puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,uVar5,2,1);
      uVar6 = 0;
      *(uint **)((int)this + 0x168) = puVar1;
      if (0 < (int)uVar5) {
        do {
          DArrayGetElement(data,uVar6,(byte *)((int)&orderType + 2));
          Library::DKW::TBL::FUN_006ae140
                    (*(uint **)((int)this + 0x168),uVar6,(undefined4 *)((int)&orderType + 2));
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar5);
        return;
      }
    }
    break;
  case CASE_6:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0x9d) = 1;
    piVar3 = (int *)((int)this + 0x103);
    *piVar3 = *(int *)data;
    *(undefined4 *)((int)this + 0x107) = *(undefined4 *)((int)data + 4);
    iVar2 = *piVar3;
    data = *(void **)(iVar2 + 0xc);
    puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,6,1);
    *piVar3 = (int)puVar1;
    uVar5 = 0;
    if (0 < (int)data) {
      do {
        if (uVar5 < *(uint *)(iVar2 + 0xc)) {
          puVar4 = (undefined4 *)(*(int *)(iVar2 + 8) * uVar5 + *(int *)(iVar2 + 0x1c));
        }
        else {
          puVar4 = (undefined4 *)0x0;
        }
        local_10 = *puVar4;
        local_c = *(undefined2 *)(puVar4 + 1);
        Library::DKW::TBL::FUN_006ae140((uint *)*piVar3,uVar5,&local_10);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)data);
      return;
    }
    break;
  case CASE_7:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xa1) = 1;
    *(undefined4 *)((int)this + 0xff) = *(undefined4 *)data;
    return;
  case CASE_8:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xa5) = 1;
    piVar3 = (int *)((int)this + 0x10b);
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *(int *)data;
      data = (int *)((int)data + 4);
      piVar3 = piVar3 + 1;
    }
    if (*(int *)((int)this + 0x10b) == 0) {
      data = *(void **)((int)this + 0x10f);
      uVar5 = *(uint *)((int)data + 0xc);
      puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,uVar5,2,1);
      uVar6 = 0;
      *(uint **)((int)this + 0x10f) = puVar1;
      if (0 < (int)uVar5) {
        do {
          DArrayGetElement(data,uVar6,(byte *)((int)&orderType + 2));
          Library::DKW::TBL::FUN_006ae140
                    (*(uint **)((int)this + 0x10f),uVar6,(undefined4 *)((int)&orderType + 2));
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar5);
      }
    }
    if (*(int *)((int)this + 0x123) == 0) {
      data = *(void **)((int)this + 0x127);
      uVar5 = *(uint *)((int)data + 0xc);
      puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,uVar5,2,1);
      uVar6 = 0;
      *(uint **)((int)this + 0x127) = puVar1;
      if (0 < (int)uVar5) {
        do {
          DArrayGetElement(data,uVar6,(byte *)((int)&orderType + 2));
          Library::DKW::TBL::FUN_006ae140
                    (*(uint **)((int)this + 0x127),uVar6,(undefined4 *)((int)&orderType + 2));
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar5);
        return;
      }
    }
    break;
  case CASE_9:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xa9) = 1;
    puVar4 = (undefined4 *)((int)this + 0x137);
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *(undefined4 *)data;
      data = (undefined4 *)((int)data + 4);
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)data;
    *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)data + 2);
    return;
  case CASE_A:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xad) = 1;
    *(undefined4 *)((int)this + 0x156) = *(undefined4 *)data;
    *(undefined2 *)((int)this + 0x15a) = *(undefined2 *)((int)data + 4);
    return;
  case CASE_B:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xb1) = 1;
    *(undefined4 *)((int)this + 0x178) = *(undefined4 *)data;
    return;
  case CASE_C:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xb5) = 1;
    *(undefined4 *)((int)this + 0x17c) = *(undefined4 *)data;
    *(undefined2 *)((int)this + 0x180) = *(undefined2 *)((int)data + 4);
    return;
  case CASE_D:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xb9) = 1;
    puVar4 = (undefined4 *)((int)this + 0x182);
LAB_00499129:
    *puVar4 = *(undefined4 *)data;
    puVar4[1] = *(undefined4 *)((int)data + 4);
    *(undefined2 *)(puVar4 + 2) = *(undefined2 *)((int)data + 8);
    return;
  case CASE_E:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xbd) = 1;
    *(undefined4 *)((int)this + 0x18c) = *(undefined4 *)data;
    *(undefined2 *)((int)this + 400) = *(undefined2 *)((int)data + 4);
    return;
  case CASE_F:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xc1) = 1;
    *(undefined4 *)((int)this + 0x192) = *(undefined4 *)data;
    *(undefined2 *)((int)this + 0x196) = *(undefined2 *)((int)data + 4);
    *(undefined1 *)((int)this + 0x198) = *(undefined1 *)((int)data + 6);
    return;
  case CASE_10:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xc5) = 1;
    *(undefined4 *)((int)this + 0x1a3) = *(undefined4 *)data;
    *(undefined4 *)((int)this + 0x1a7) = *(undefined4 *)((int)data + 4);
    *(undefined4 *)((int)this + 0x1ab) = *(undefined4 *)((int)data + 8);
    *(undefined4 *)((int)this + 0x1af) = *(undefined4 *)((int)data + 0xc);
    return;
  case CASE_11:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xc9) = 1;
    *(undefined4 *)((int)this + 0x199) = *(undefined4 *)data;
    *(undefined4 *)((int)this + 0x19d) = *(undefined4 *)((int)data + 4);
    *(undefined2 *)((int)this + 0x1a1) = *(undefined2 *)((int)data + 8);
    return;
  case CASE_12:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xcd) = 1;
    *(undefined4 *)((int)this + 0x1b3) = *(undefined4 *)data;
    *(undefined2 *)((int)this + 0x1b7) = *(undefined2 *)((int)data + 4);
    return;
  case CASE_13:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xd1) = 1;
    *(undefined4 *)((int)this + 0x1b9) = *(undefined4 *)data;
    *(undefined2 *)((int)this + 0x1bd) = *(undefined2 *)((int)data + 4);
    return;
  case CASE_14:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xd5) = 1;
    *(undefined4 *)((int)this + 0x1bf) = *(undefined4 *)data;
    *(undefined2 *)((int)this + 0x1c3) = *(undefined2 *)((int)data + 4);
    return;
  case CASE_15:
    *(undefined4 *)((int)this + 0x65) = 1;
    *(undefined4 *)((int)this + 0xd9) = 1;
    *(undefined4 *)((int)this + 0x1c5) = *(undefined4 *)data;
    return;
  case CASE_65:
    *(undefined4 *)((int)this + 0x61) = 1;
    *(undefined4 *)((int)this + 0x6d) = 1;
    *(undefined1 *)((int)this + 0x1c9) = *(undefined1 *)data;
    return;
  case CASE_66:
    *(undefined4 *)((int)this + 0x61) = 1;
    *(undefined4 *)((int)this + 0x71) = 1;
    if (*(int *)((int)this + 0x1ca) == 0) {
      puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
      *(uint **)((int)this + 0x1ca) = puVar1;
    }
    Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x1ca),data);
    return;
  case CASE_67:
    *(undefined4 *)((int)this + 0x61) = 1;
    *(undefined4 *)((int)this + 0x75) = 1;
    if (*(int *)((int)this + 0x1ce) == 0) {
      puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,4,1);
      *(uint **)((int)this + 0x1ce) = puVar1;
    }
    Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x1ce),data);
    return;
  case CASE_68:
    *(undefined4 *)((int)this + 0x61) = 1;
    *(undefined4 *)((int)this + 0x79) = 1;
    if (*(int *)((int)this + 0x1d2) == 0) {
      puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
      *(uint **)((int)this + 0x1d2) = puVar1;
    }
    Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x1d2),data);
    return;
  case CASE_69:
    *(undefined4 *)((int)this + 0x61) = 1;
    *(undefined4 *)((int)this + 0x7d) = 1;
    if (*(int *)((int)this + 0x1d6) == 0) {
      puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
      *(uint **)((int)this + 0x1d6) = puVar1;
    }
    Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x1d6),data);
    return;
  case CASE_6A:
    *(undefined4 *)((int)this + 0x61) = 1;
    *(undefined4 *)((int)this + 0x81) = 1;
    if (*(int *)((int)this + 0x1da) == 0) {
      puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
      *(uint **)((int)this + 0x1da) = puVar1;
    }
    Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x1da),data);
  }
  return;
}

