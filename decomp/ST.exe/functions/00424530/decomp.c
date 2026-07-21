
void __thiscall FUN_00424530(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  STGameObjC *pSVar3;
  uint index;
  uint uVar4;

  uVar2 = param_1;
  uVar1 = *(uint *)(*(int *)((int)this + 0x29) + 0xc);
  if (((param_1 & 1) != 0) && ((*(uint *)((int)this + 0x35) & 1) == 0)) {
    *(uint *)((int)this + 0x35) = *(uint *)((int)this + 0x35) | 1;
  }
  if (((param_1 & 2) != 0) && ((*(uint *)((int)this + 0x35) & 2) == 0)) {
    *(uint *)((int)this + 0x35) = *(uint *)((int)this + 0x35) | 2;
  }
  if (((param_1 & 4) != 0) && ((*(uint *)((int)this + 0x35) & 4) == 0)) {
    *(uint *)((int)this + 0x35) = *(uint *)((int)this + 0x35) | 4;
  }
  if (((param_1 & 8) != 0) && ((*(uint *)((int)this + 0x35) & 8) == 0)) {
    *(uint *)((int)this + 0x35) = *(uint *)((int)this + 0x35) | 8;
  }
  if (((param_1 & 0x10) != 0) && ((*(uint *)((int)this + 0x35) & 0x10) == 0)) {
    *(uint *)((int)this + 0x35) = *(uint *)((int)this + 0x35) | 0x10;
  }
  uVar4 = 0;
  if (uVar1 != 0) {
    index = 0;
    do {
      DArrayGetElement(*(DArrayTy **)((int)this + 0x29),index,&param_1);
      if ((short)param_1 != -1) {
        pSVar3 = STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,*(char *)((int)this + 0x24),param_1,CASE_1);
        (*pSVar3->vtable[1].vfunc_2C)(uVar2);
      }
      uVar4 = uVar4 + 1;
      index = uVar4 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

