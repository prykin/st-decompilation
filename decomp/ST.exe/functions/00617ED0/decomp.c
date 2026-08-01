
void __thiscall FUN_00617ed0(void *this,int param_1,int *param_2)

{
  STFishC *pSVar1;
  DArrayTy *pDVar2;
  int iVar3;
  undefined4 local_18;
  uint local_14;
  STFishC *local_10;
  short local_a;
  undefined2 local_8;
  undefined2 local_6;

  if (*(int *)((int)this + 0x66) == 0) {
    pDVar2 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,8,10);
    *(DArrayTy **)((int)this + 0x66) = pDVar2;
  }
  iVar3 = *(int *)((int)this + 0x66);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0xc) != 0) {
      *(undefined4 *)(iVar3 + 0xc) = 0;
    }
    if (0 < param_1) {
      do {
        iVar3 = STPlaySystemC::sub_006E62D0
                          (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)*param_2,
                           (int *)&local_10);
        pSVar1 = local_10;
        if (iVar3 != -4) {
          STFishC::sub_004162B0(local_10,&local_a,&local_8,&local_6);
          local_18 = pSVar1->field_0018;
          local_14 = (uint)*(ushort *)&pSVar1->field_0x32;
          Library::DKW::TBL::DArrayAppend(*(DArrayTy **)((int)this + 0x66),&local_18);
        }
        param_2 = param_2 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
  }
  return;
}

