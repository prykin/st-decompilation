
void __thiscall FUN_00617ed0(void *this,int param_1,int *param_2)

{
  STFishC *pSVar1;
  uint *puVar2;
  int iVar3;
  undefined4 local_18;
  uint local_14;
  STFishC *local_10;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  if (*(int *)((int)this + 0x66) == 0) {
    puVar2 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,8,10);
    *(uint **)((int)this + 0x66) = puVar2;
  }
  iVar3 = *(int *)((int)this + 0x66);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0xc) != 0) {
      *(undefined4 *)(iVar3 + 0xc) = 0;
    }
    if (0 < param_1) {
      do {
        iVar3 = FUN_006e62d0(DAT_00802a38,*param_2,(int *)&local_10);
        pSVar1 = local_10;
        if (iVar3 != -4) {
          STFishC::sub_004162B0(local_10,&local_a,&local_8,&local_6);
          local_18 = pSVar1->field_0018;
          local_14 = (uint)*(ushort *)&pSVar1->field_0x32;
          Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x66),&local_18);
        }
        param_2 = param_2 + 1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
  }
  return;
}

