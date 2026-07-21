
uint __thiscall
FUN_006308f0(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            int param_6)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  short local_20;
  short local_1e;
  short local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  undefined4 local_14;
  int local_c;
  int local_8;

  uVar5 = 0xffffffff;
  iVar4 = (g_worldGrid.sizeX * param_3 + param_2) * (int)g_worldGrid.sizeY + param_1;
  local_8 = 0;
  if (param_4 == 1) {
    cVar1 = *(char *)(*(int *)((int)this + 0x34) + iVar4);
  }
  else {
    iVar3 = *(int *)((int)this + 0x34);
    local_8 = g_worldGrid.sizeY + iVar4;
    if (*(char *)(iVar3 + iVar4) != '\0') {
      return 0xffffffff;
    }
    if (*(char *)(iVar3 + 1 + iVar4) != '\0') {
      return 0xffffffff;
    }
    if (*(char *)(iVar3 + local_8) != '\0') {
      return 0xffffffff;
    }
    cVar1 = *(char *)(iVar3 + 1 + local_8);
  }
  if (cVar1 == '\0') {
    if (*(int *)((int)this + 0x38) == 0) {
      puVar2 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x75,10);
      *(uint **)((int)this + 0x38) = puVar2;
    }
    puVar2 = *(uint **)((int)this + 0x38);
    if ((puVar2 != (uint *)0x0) && (puVar2[3] < 0xfe)) {
      psVar6 = &local_20;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        psVar6[0] = 0;
        psVar6[1] = 0;
        psVar6 = psVar6 + 2;
      }
      local_1a = (undefined2)param_4;
      local_18 = param_5;
      local_14 = PTR_00802a38->field_00E4;
      local_20 = (short)param_1;
      local_1c = (short)param_3;
      local_1e = (short)param_2;
      local_c = param_6;
      uVar5 = Library::DKW::TBL::FUN_006ae1c0(puVar2,(undefined4 *)&local_20);
      if (-1 < (int)uVar5) {
        if (param_4 == 1) {
          *(undefined1 *)(*(int *)((int)this + 0x34) + iVar4) = 1;
        }
        else {
          *(undefined1 *)(*(int *)((int)this + 0x34) + iVar4) = 1;
          *(undefined1 *)(*(int *)((int)this + 0x34) + 1 + iVar4) = 1;
          *(undefined1 *)(*(int *)((int)this + 0x34) + local_8) = 1;
          *(undefined1 *)(*(int *)((int)this + 0x34) + 1 + local_8) = 1;
        }
        iVar4 = thunk_FUN_00631190(this,uVar5,(short)param_1,(short)param_2,(short)param_3,param_4,
                                   param_5,param_6);
        if (iVar4 == 0) {
          FUN_006b0c70(*(DArrayTy **)((int)this + 0x38),uVar5);
          uVar5 = 0xffffffff;
        }
      }
    }
  }
  return uVar5;
}

