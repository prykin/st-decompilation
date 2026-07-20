
undefined4 FUN_004137f0(void *param_1,int param_2,uint param_3,int param_4)

{
  void *this;
  uint uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int *piVar6;
  
  this = param_1;
  if ((int)param_3 < 0) {
    param_3 = 0;
  }
  else if (9 < (int)param_3) {
    param_3 = 9;
  }
  uVar1 = param_3;
  *(uint *)((int)param_1 + 0x51) = param_3;
  iVar2 = ((param_4 * 4 + 0x2d) / 0x5a) * 0x5a;
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
  if (iVar2 == 0x168) {
    iVar2 = 0;
  }
  *(int *)((int)param_1 + 0x55) = iVar2;
  *(uint *)((int)param_1 + 0x49) = *(uint *)((int)param_1 + 0x49) | 1;
  if (param_2 != -1) {
    *(int *)((int)param_1 + 0x4d) = param_2;
    FUN_006ab060((LPVOID *)((int)param_1 + 0x59));
  }
  if ((param_2 == -2) || (param_2 == -3)) {
    iVar5 = *(int *)(*(int *)((int)param_1 + 0x29) + 0xc);
    *(uint *)((int)param_1 + 0x49) = *(uint *)((int)param_1 + 0x49) & 0xfffffffe;
    param_1 = (void *)0x0;
    param_4 = 0;
    param_2 = 0;
    iVar3 = Library::DKW::LIB::FUN_006aac70(iVar5 * 0x10 + 0xc);
    *(int *)((int)this + 0x59) = iVar3;
    piVar6 = (int *)(iVar3 + 0xc);
    *(int *)(iVar3 + 4) = iVar2;
    param_3 = 0;
    *(uint *)(*(int *)((int)this + 0x59) + 8) = uVar1;
    **(undefined4 **)((int)this + 0x59) = 0;
    if (0 < iVar5) {
      do {
        iVar2 = *(int *)((int)this + 0x29);
        if ((*(uint *)(iVar2 + 0xc) <= param_3) ||
           (psVar4 = (short *)(*(int *)(iVar2 + 8) * param_3 + *(int *)(iVar2 + 0x1c)),
           psVar4 == (short *)0x0)) break;
        if (*psVar4 != -1) {
          iVar2 = thunk_FUN_00423e70(this,CONCAT22((short)((uint)psVar4 >> 0x10),*psVar4));
          if (iVar2 != 0) {
            iVar3 = *(int *)(iVar2 + 199);
            if ((((iVar3 < 0) || (SHORT_007fb278 <= iVar3)) || (*(int *)(iVar2 + 0xcb) < 0)) ||
               ((((int)SHORT_007fb27a <= *(int *)(iVar2 + 0xcb) || (*(int *)(iVar2 + 0xcf) < 0)) ||
                ((int)SHORT_007fb27c <= *(int *)(iVar2 + 0xcf))))) {
              *piVar6 = *(short *)(iVar2 + 0x5b) * 4 + 2;
              piVar6[1] = *(short *)(iVar2 + 0x5d) * 4 + 2;
              iVar3 = (int)*(short *)(iVar2 + 0x5f);
            }
            else {
              *piVar6 = iVar3 * 4 + 2;
              piVar6[1] = *(int *)(iVar2 + 0xcb) * 4 + 2;
              iVar3 = *(int *)(iVar2 + 0xcf);
            }
            piVar6[2] = iVar3 * 4 + 2;
            param_1 = (void *)((int)param_1 + *piVar6);
            param_4 = param_4 + piVar6[1];
            param_2 = param_2 + piVar6[2];
            piVar6[3] = (uint)*(ushort *)(iVar2 + 0x32);
            piVar6 = piVar6 + 4;
            **(int **)((int)this + 0x59) = **(int **)((int)this + 0x59) + 1;
          }
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar5);
    }
    iVar2 = **(int **)((int)this + 0x59);
    iVar5 = iVar2 / 2;
    piVar6 = *(int **)((int)this + 0x59) + 3;
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        *piVar6 = *piVar6 - ((int)param_1 + iVar5) / iVar2;
        piVar6[1] = piVar6[1] - (iVar5 + param_4) / iVar2;
        piVar6[2] = piVar6[2] - (param_2 + iVar5) / iVar2;
        iVar3 = iVar3 + 1;
        piVar6 = piVar6 + 4;
      } while (iVar3 < **(int **)((int)this + 0x59));
    }
  }
  return 0;
}

