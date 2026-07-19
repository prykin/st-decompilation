
int __thiscall thunk_FUN_0069b190(void *this,int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iStack_18;
  int iStack_14;
  int iStack_c;
  int iStack_8;
  
  iStack_c = 0;
  iStack_18 = 0;
  *(int *)((int)this + 0x582f) = param_1 * param_2;
  uVar10 = (param_3 + 1) * param_1 * param_2;
  *(int *)((int)this + 0x5833) = param_1;
  *(int *)((int)this + 0x5837) = param_2;
  FUN_006ab060((undefined4 *)((int)this + 0x584f));
  uVar5 = uVar10 * 2;
  puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(uVar5);
  *(undefined4 *)((int)this + 0x584f) = puVar3;
  for (uVar10 = (uVar10 & 0x7fffffff) >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  thunk_FUN_0069ada0(this,*(int *)((int)this + 0x584f),param_3 + 1);
  if (0 < param_3) {
    do {
      iVar2 = *(int *)((int)this + 0x582f);
      iStack_14 = 0;
      if (-1 < *(int *)((int)this + 0x5837)) {
        do {
          iVar7 = *(int *)((int)this + 0x5833);
          iVar6 = 0;
          if (-1 < iVar7) {
            iVar8 = iVar7 * iStack_14 + iStack_18 * iVar2;
            param_2 = iVar8 * 2;
            do {
              iVar9 = iVar8 + 1;
              iVar6 = iVar6 + 1;
              iVar11 = iVar9;
              if (iVar7 <= iVar6) {
                iVar11 = -1;
              }
              if (*(int *)((int)this + 0x5837) < iStack_14 + 1) {
                iVar7 = -1;
                iStack_8 = -1;
              }
              else {
                iVar7 = param_1 + -1 + iVar9;
                if (iVar11 < 0) {
                  iStack_8 = -1;
                }
                else {
                  iStack_8 = iVar9 + param_1;
                }
              }
              if (-1 < iVar8) {
                psVar4 = (short *)(*(int *)((int)this + 0x584f) + param_2);
                if (*psVar4 == -1) {
                  *psVar4 = 1;
                  iStack_c = iStack_c + 1;
                }
                if ((((iVar9 != 1 && -1 < iVar8) && (0 < iVar11)) && (0 < iVar7)) && (0 < iStack_8))
                {
                  iVar8 = *(int *)((int)this + 0x584f);
                  if (((((*(short *)(param_2 + iVar8) == -1) || (0 < *(short *)(param_2 + iVar8)))
                       && ((sVar1 = *(short *)(iVar8 + iVar11 * 2), sVar1 == -1 || (0 < sVar1)))) &&
                      ((sVar1 = *(short *)(iVar8 + iVar7 * 2), sVar1 == -1 || (0 < sVar1)))) &&
                     ((sVar1 = *(short *)(iVar8 + iStack_8 * 2), sVar1 == -1 || (0 < sVar1)))) {
                    *(undefined2 *)(param_2 + iVar8) = 4;
                  }
                }
              }
              param_2 = param_2 + 2;
              iVar7 = *(int *)((int)this + 0x5833);
              iVar8 = iVar9;
            } while (iVar6 <= iVar7);
          }
          iStack_14 = iStack_14 + 1;
        } while (iStack_14 <= *(int *)((int)this + 0x5837));
      }
      iStack_18 = iStack_18 + 1;
    } while (iStack_18 < param_3);
  }
  return iStack_c;
}

