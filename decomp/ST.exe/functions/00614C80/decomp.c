
uint __thiscall
FUN_00614c80(void *this,undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6,int param_7,uint param_8,uint param_9,int param_10)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_24;
  int local_20;
  int local_1c;
  uint local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  puVar5 = param_1;
  if ((int)param_1 < 1) {
    param_1 = (undefined4 *)param_9;
    iVar2 = param_10;
    uVar3 = param_8;
  }
  else {
    iVar4 = *(int *)((int)this + 0x2dd) + (int)param_1 * 0x1c;
    iVar2 = (int)*(short *)(iVar4 + -0x18);
    uVar3 = (int)*(short *)(iVar4 + -0x1c);
    param_1 = (undefined4 *)
              (int)*(short *)(*(int *)((int)this + 0x2dd) + -0x1a + (int)param_1 * 0x1c);
  }
  iVar4 = (int)puVar5 * 0x1c;
  uVar1 = thunk_FUN_0060f940(0,0,(AnonShape_0060F940_1CCED7C8 *)
                                 (iVar4 + *(int *)((int)this + 0x2dd)),0,uVar3,(int)param_1,iVar2,
                             param_2,param_3,param_4,param_5,param_6,param_7,&param_10,
                             (int *)&param_8);
  *(undefined4 *)(iVar4 + 0x18 + *(int *)((int)this + 0x2dd)) = uVar1;
  if (*(int *)(iVar4 + 0x18 + *(int *)((int)this + 0x2dd)) == 8) {
    uVar3 = param_8;
    if (*(int *)((int)this + 0x288) != 0) {
      uVar3 = (int)param_8 / *(int *)((int)this + 0x288);
    }
    local_24 = 0;
    local_14 = 0;
    local_c = 0;
    local_20 = (int)(param_8 * 0x1e) / 100;
    local_8 = 0;
    local_1c = (int)(param_8 * 0x46) / 100;
    local_18 = param_8;
    param_9 = uVar3;
    local_10 = local_20;
    param_1 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(uVar3 * 4);
    iVar2 = thunk_FUN_0060e210(&local_24,&local_14,4,(int)param_1,uVar3);
    if (iVar2 == 0) {
      if (*(undefined4 **)((int)this + 0x2e5) == (undefined4 *)0x0) {
        *(uint *)((int)this + 0x2e1) = uVar3;
        *(void **)((int)this + 0x2e5) = param_1;
        return param_8;
      }
      if (*(int *)((int)this + 0x2e1) < (int)uVar3) {
        FreeAndNull((void **)((int)this + 0x2e5));
        *(uint *)((int)this + 0x2e1) = uVar3;
        *(undefined4 **)((int)this + 0x2e5) = param_1;
        return param_8;
      }
      puVar5 = param_1;
      puVar6 = *(undefined4 **)((int)this + 0x2e5);
      for (uVar3 = uVar3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *(uint *)((int)this + 0x2e1) = param_9;
      FreeAndNull(&param_1);
      return param_8;
    }
    if (param_1 != (undefined4 *)0x0) {
      FreeAndNull(&param_1);
    }
  }
  return 0;
}

