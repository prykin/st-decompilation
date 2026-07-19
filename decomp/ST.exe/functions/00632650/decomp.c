
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00632650(void *this,uint param_1,int param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_40 [15];
  
  if (*(int *)this != 0) {
    thunk_FUN_00635fd0(this);
  }
  if (param_2 == 0) {
    param_2 = 1;
  }
  puVar6 = local_40;
  for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)puVar6 = 0;
  uVar5 = 0;
  switch(param_4) {
  case 0:
  case 2:
  case 4:
    puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,param_1 * param_2,0x39,10);
    *(uint **)this = puVar1;
    uVar5 = param_1 * param_2;
    break;
  case 1:
    puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,param_1 + param_2,0x39,10);
    *(uint **)this = puVar1;
    uVar5 = param_1;
    break;
  case 3:
    puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,(param_1 + 4) * param_2 + 1,0x39,10);
    *(uint **)this = puVar1;
    uVar5 = param_1 * param_2;
  }
  puVar1 = *(uint **)this;
  if (puVar1 == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    switch(param_4) {
    case 0:
    case 1:
      uVar5 = (param_1 - 1) + param_2;
      if (param_4 != 1) {
        uVar5 = param_1 - 1;
      }
      Library::DKW::TBL::FUN_006ae140(puVar1,uVar5,local_40);
      uVar5 = *(uint *)(*(int *)this + 0xc);
      *(undefined4 *)((int)this + 0xd) = param_3;
      *(undefined1 *)((int)this + 4) = 1;
      *(uint *)((int)this + 0x19) = param_1;
      *(int *)((int)this + 0x1d) = param_2;
      *(int *)((int)this + 0x11) = param_4;
      *(undefined4 *)((int)this + 0xa1) = param_5[4];
      *(undefined4 *)((int)this + 0xa5) = param_5[5];
      *(undefined4 *)((int)this + 0xa9) = param_5[6];
      *(undefined4 *)((int)this + 0x15) = param_5[0x12];
      break;
    case 2:
      Library::DKW::TBL::FUN_006ae140(puVar1,param_1 * param_2 - 1,local_40);
      uVar5 = *(uint *)(*(int *)this + 0xc);
      *(int *)((int)this + 0x1d) = param_2;
      *(undefined1 *)((int)this + 4) = 1;
      *(uint *)((int)this + 0x19) = param_1;
      *(undefined4 *)((int)this + 0x11) = 2;
      *(undefined4 *)((int)this + 0xd) = param_3;
      *(undefined4 *)((int)this + 0xa1) = param_5[4];
      *(undefined4 *)((int)this + 0xa5) = param_5[5];
      *(undefined4 *)((int)this + 0xa9) = param_5[6];
      *(undefined4 *)((int)this + 0xad) = param_5[0x13];
      *(undefined4 *)((int)this + 0x15) = param_5[0x12];
      break;
    case 3:
      uVar5 = (param_1 + 4) * param_2 + 1;
      *(uint *)((int)this + 0x21) = uVar5;
      *(undefined4 *)((int)this + 0x11) = 3;
      Library::DKW::TBL::FUN_006ae140(puVar1,uVar5,local_40);
      *(undefined1 *)((int)this + 4) = 1;
      *(undefined4 *)((int)this + 0x19) = *param_5;
      *(undefined4 *)((int)this + 0x1d) = param_5[1];
      *(undefined4 *)((int)this + 0x9d) = param_5[4];
      *(undefined4 *)((int)this + 0xa1) = param_5[5];
      *(undefined4 *)((int)this + 0xa5) = param_5[6];
      *(undefined4 *)((int)this + 0x25) = param_5[2];
      *(undefined4 *)((int)this + 0x29) = param_5[3];
      *(undefined4 *)((int)this + 0x41) = 0;
      *(undefined4 *)((int)this + 0x45) = 0x3f490fdb;
      *(float *)((int)this + 0x6d) = (float)param_5[0xc] * _DAT_0079d1a4;
      *(float *)((int)this + 0x69) = (float)param_5[0xb] * _DAT_0079d1a4;
      *(undefined4 *)((int)this + 0x81) = param_5[9];
      *(undefined4 *)((int)this + 0x85) = param_5[10];
      *(undefined4 *)((int)this + 0x89) = 0x3f860a92;
      *(undefined4 *)((int)this + 0x61) = param_5[7];
      *(undefined4 *)((int)this + 0x65) = param_5[8];
      break;
    case 4:
      Library::DKW::TBL::FUN_006ae140(puVar1,param_1 * param_2 - 1,local_40);
      uVar5 = *(uint *)(*(int *)this + 0xc);
      *(int *)((int)this + 0x1d) = param_2;
      *(undefined1 *)((int)this + 4) = 1;
      *(uint *)((int)this + 0x19) = param_1;
      *(undefined4 *)((int)this + 0x11) = 4;
      *(undefined4 *)((int)this + 0xd) = param_3;
      *(undefined4 *)((int)this + 0xa1) = param_5[4];
      *(undefined4 *)((int)this + 0xa5) = param_5[5];
      *(undefined4 *)((int)this + 0xa9) = param_5[6];
      *(undefined4 *)((int)this + 0x15) = param_5[0x12];
    }
    thunk_FUN_00632e30(this);
    STTeamLissagC::InitVisibelSystem(this);
    uVar2 = 1;
    if (*(char *)((int)this + 4) == '\0') {
      uVar4 = 0;
      if (0 < (int)uVar5) {
        do {
          iVar3 = *(int *)this;
          if (uVar4 < *(uint *)(iVar3 + 0xc)) {
            iVar3 = *(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c);
          }
          else {
            iVar3 = 0;
          }
          uVar4 = uVar4 + 1;
          *(undefined4 *)(iVar3 + 4) = 0xffffffff;
        } while ((int)uVar4 < (int)uVar5);
      }
      return 1;
    }
  }
  return uVar2;
}

