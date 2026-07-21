
undefined4 __thiscall
FUN_004934b0(void *this,short *param_1,short *param_2,short *param_3,int *param_4)

{
  DArrayTy *array;
  dword dVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_14;
  STFishC *local_10;
  short local_a;
  short local_8;
  short local_6;
  
  uVar3 = 0;
  iVar4 = 1000000;
  array = g_playerRuntime[*(int *)((int)this + 0x24)].field2167_0x9da;
  *param_3 = -1;
  *param_2 = -1;
  *param_1 = -1;
  if (array != (DArrayTy *)0x0) {
    dVar1 = array->count;
    local_14 = 0;
    if (0 < (int)dVar1) {
      do {
        DArrayGetElement(array,local_14,&local_10);
        if ((local_10 != (STFishC *)0x0) && (iVar2 = (*local_10->vtable->vfunc_F8)(), iVar2 == 1)) {
          STFishC::sub_004162B0(local_10,&local_6,&local_8,&local_a);
          iVar2 = FUN_006aadd0((int)*(short *)((int)this + 0x47),(int)*(short *)((int)this + 0x49),
                               (int)*(short *)((int)this + 0x4b),(int)local_6,(int)local_8,
                               (int)local_a);
          if (iVar2 < iVar4) {
            *param_1 = local_6;
            uVar3 = 1;
            *param_2 = local_8;
            *param_3 = local_a;
            *param_4 = local_10->field_0018;
            iVar4 = iVar2;
          }
        }
        local_14 = local_14 + 1;
      } while ((int)local_14 < (int)dVar1);
    }
  }
  return uVar3;
}

