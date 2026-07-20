
uint __thiscall FUN_006001e0(void *this,int param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_18;
  undefined2 local_14 [2];
  undefined2 local_10 [2];
  undefined2 local_c [2];
  short local_8;
  short local_6;
  
  uVar4 = 0;
  iVar5 = param_1 * 0x52;
  *(undefined2 *)(iVar5 + *(int *)((int)this + 0x233) + 0x12) =
       *(undefined2 *)(iVar5 + 6 + *(int *)((int)this + 0x233));
  *(undefined2 *)(iVar5 + *(int *)((int)this + 0x233) + 0x14) =
       *(undefined2 *)(iVar5 + 8 + *(int *)((int)this + 0x233));
  *(undefined2 *)(iVar5 + *(int *)((int)this + 0x233) + 0x16) =
       *(undefined2 *)(iVar5 + 10 + *(int *)((int)this + 0x233));
  if (((*(byte *)(DAT_00802a38 + 0xe4) & 1) == 0) &&
     (iVar3 = *(int *)((int)this + 0x233) + iVar5,
     0x31 < (int)*(short *)(iVar3 + 4) - (int)*(short *)(iVar3 + 10))) {
    TraksClassTy::TraksCreate
              (g_traksClass_00802A7C,1,1,0,(int)*(short *)(iVar3 + 0x12),
               (int)*(short *)(iVar3 + 0x14),(int)*(short *)(iVar3 + 0x16),0,0,0,0,0,0,-1,0,0);
  }
  iVar3 = *(int *)((int)this + 0x233);
  psVar1 = (short *)(iVar5 + iVar3);
  iVar2 = *(int *)(iVar5 + 0x4a + iVar3);
  if (iVar2 < *(int *)(iVar5 + 0x46 + iVar3)) {
    psVar1[3] = *(short *)(*(int *)(psVar1 + 0x27) + iVar2 * 6);
    iVar3 = *(int *)((int)this + 0x233) + iVar5;
    *(undefined2 *)(iVar3 + 8) =
         *(undefined2 *)(*(int *)(iVar3 + 0x4e) + 2 + *(int *)(iVar3 + 0x4a) * 6);
    iVar3 = *(int *)((int)this + 0x233);
    *(undefined2 *)(iVar5 + iVar3 + 10) =
         *(undefined2 *)(*(int *)(iVar5 + 0x4e + iVar3) + 4 + *(int *)(iVar5 + 0x4a + iVar3) * 6);
  }
  else {
    iVar3 = thunk_FUN_005fe280(psVar1,*(int *)(DAT_00802a38 + 0xe4),(int *)local_c,(int *)local_10,
                               (int *)local_14);
    if (iVar3 == 0) goto LAB_0060033c;
    *(undefined2 *)(iVar5 + 6 + *(int *)((int)this + 0x233)) = local_c[0];
    *(undefined2 *)(iVar5 + 8 + *(int *)((int)this + 0x233)) = local_10[0];
    *(undefined2 *)(iVar5 + 10 + *(int *)((int)this + 0x233)) = local_14[0];
  }
  *(int *)(iVar5 + 0x4a + *(int *)((int)this + 0x233)) =
       *(int *)(iVar5 + 0x4a + *(int *)((int)this + 0x233)) + 1;
LAB_0060033c:
  iVar3 = *(int *)((int)this + 0x233) + iVar5;
  if ((99 < (int)*(short *)(iVar3 + 4) - (int)*(short *)(iVar3 + 10)) &&
     (uVar4 = thunk_FUN_00601500((void *)((int)this + 0x1d5),(int)*(short *)(iVar3 + 6),
                                 (int)*(short *)(iVar3 + 8),(int)*(short *)(iVar3 + 10),
                                 (int)*(short *)(iVar3 + 0x12),(int)*(short *)(iVar3 + 0x14),
                                 (int)*(short *)(iVar3 + 0x16),*(int *)((int)this + 0x20a),
                                 *(int *)((int)this + 0x22a),*(int *)((int)this + 0x220),
                                 *(undefined2 *)((int)this + 0x224),0xa9,0,0), uVar4 != 0)) {
    if (uVar4 == 1) {
      *(undefined2 *)(iVar5 + 6 + *(int *)((int)this + 0x233)) = *(undefined2 *)((int)this + 0x1f5);
      *(undefined2 *)(iVar5 + 8 + *(int *)((int)this + 0x233)) = *(undefined2 *)((int)this + 0x1f9);
      *(undefined2 *)(iVar5 + 10 + *(int *)((int)this + 0x233)) = *(undefined2 *)((int)this + 0x1fd)
      ;
      *(undefined4 *)((int)this + 0x1e9) = 0;
      return 1;
    }
    if (uVar4 != 5) {
      if (uVar4 != 2) {
        return uVar4;
      }
      if ((*(int **)((int)this + 0x1e9) != (int *)0x0) &&
         (iVar3 = (**(code **)(**(int **)((int)this + 0x1e9) + 0xe0))
                            (*(undefined4 *)((int)this + 0x1ed),(int)&param_1 + 2,&local_6,&local_8,
                             &local_18), iVar3 == 0)) {
        *(int *)((int)this + 0x1f5) = (int)param_1._2_2_;
        *(int *)((int)this + 0x1f9) = (int)local_6;
        *(int *)((int)this + 0x1fd) = (int)local_8;
        *(undefined2 *)(iVar5 + 6 + *(int *)((int)this + 0x233)) =
             *(undefined2 *)((int)this + 0x1f5);
        *(undefined2 *)(iVar5 + 8 + *(int *)((int)this + 0x233)) =
             *(undefined2 *)((int)this + 0x1f9);
        *(undefined2 *)(iVar5 + 10 + *(int *)((int)this + 0x233)) =
             *(undefined2 *)((int)this + 0x1fd);
        *(undefined4 *)((int)this + 0x1f1) = local_18;
        return 2;
      }
    }
    thunk_FUN_005fd6a0(this);
  }
  return uVar4;
}

