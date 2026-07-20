
undefined4 __thiscall
FUN_004934b0(void *this,short *param_1,short *param_2,short *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint local_14;
  STFishC *local_10;
  short local_a;
  short local_8;
  short local_6;
  
  uVar4 = 0;
  iVar5 = 1000000;
  iVar1 = *(int *)(&DAT_007f57fa + *(int *)((int)this + 0x24) * 0xa62);
  *param_3 = -1;
  *param_2 = -1;
  *param_1 = -1;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
    local_14 = 0;
    if (0 < iVar2) {
      do {
        FUN_006acc70(iVar1,local_14,&local_10);
        if ((local_10 != (STFishC *)0x0) && (iVar3 = (*local_10->vtable->slot_F8)(), iVar3 == 1)) {
          STFishC::sub_004162B0(local_10,&local_6,&local_8,&local_a);
          iVar3 = FUN_006aadd0((int)*(short *)((int)this + 0x47),(int)*(short *)((int)this + 0x49),
                               (int)*(short *)((int)this + 0x4b),(int)local_6,(int)local_8,
                               (int)local_a);
          if (iVar3 < iVar5) {
            *param_1 = local_6;
            uVar4 = 1;
            *param_2 = local_8;
            *param_3 = local_a;
            *param_4 = local_10->field_0018;
            iVar5 = iVar3;
          }
        }
        local_14 = local_14 + 1;
      } while ((int)local_14 < iVar2);
    }
  }
  return uVar4;
}

