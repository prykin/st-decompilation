
int __thiscall FUN_005fd940(void *this,int param_1)

{
  STT3DSprC *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  
  iVar2 = 0;
  local_8 = 0;
  if (((*(int *)((int)this + 0x233) != 0) && (*(int *)((int)this + 0x226) != 0)) &&
     (iVar3 = 0, 0 < *(int *)((int)this + 0x226))) {
    iVar4 = 0;
    do {
      if (iVar3 == param_1) {
        if (*(int *)(iVar4 + 0x4e + *(int *)((int)this + 0x233)) != 0) {
          FreeAndNull((void **)(iVar4 + 0x4e + *(int *)((int)this + 0x233)));
          iVar2 = local_8;
        }
        pSVar1 = *(STT3DSprC **)(iVar4 + 0x42 + *(int *)((int)this + 0x233));
        if (pSVar1 != (STT3DSprC *)0x0) {
          thunk_FUN_004ad310(pSVar1);
          Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)(iVar4 + 0x42 + *(int *)((int)this + 0x233)));
          *(undefined4 *)(iVar4 + 0x42 + *(int *)((int)this + 0x233)) = 0;
          iVar2 = local_8;
        }
        *(undefined4 *)(iVar4 + 0x39 + *(int *)((int)this + 0x233)) = 5;
      }
      else if (*(int *)(iVar4 + 0x39 + *(int *)((int)this + 0x233)) != 5) {
        iVar2 = iVar2 + 1;
        local_8 = iVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x52;
    } while (iVar3 < *(int *)((int)this + 0x226));
    return iVar2;
  }
  return 0;
}

