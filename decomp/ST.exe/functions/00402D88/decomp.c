
void __thiscall thunk_FUN_00694cd0(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  short *psVar8;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_8 = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0xc);
  if (0 < iVar2) {
    do {
      iVar3 = *(int *)(param_1 + 0x18);
      if (uStack_8 < *(uint *)(iVar3 + 0xc)) {
        puVar7 = (uint *)(*(int *)(iVar3 + 8) * uStack_8 + *(int *)(iVar3 + 0x1c));
      }
      else {
        puVar7 = (uint *)0x0;
      }
      uStack_c = *puVar7 >> 0x10;
      thunk_FUN_00693b20((short)*puVar7,uStack_c,(int)(puVar7[0xe] - puVar7[0xc]) / 2 + puVar7[0xc],
                         (int)(puVar7[0xf] - puVar7[0xd]) / 2 + puVar7[0xd],4,uStack_8 != 0,0);
      uStack_8 = uStack_8 + 1;
    } while ((int)uStack_8 < iVar2);
  }
  uStack_8 = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  iVar3 = (*(int **)((int)this + 8))[1];
  iVar4 = **(int **)((int)this + 8);
  if (0 < iVar2) {
    do {
      iVar5 = *(int *)(param_1 + 0x1c);
      if (uStack_8 < *(uint *)(iVar5 + 0xc)) {
        psVar8 = (short *)(*(int *)(iVar5 + 8) * uStack_8 + *(int *)(iVar5 + 0x1c));
      }
      else {
        psVar8 = (short *)0x0;
      }
      if (*(short *)(DAT_00853dd4 +
                    ((int)psVar8[2] * iVar3 * iVar4 * 4 +
                     (int)psVar8[1] * **(int **)((int)this + 8) * 2 + (int)*psVar8) * 2) == 0) {
        uStack_10 = 0;
        puVar7 = thunk_FUN_00692c10(0x5a,*(int *)(psVar8 + 5),&uStack_10,(int)psVar8[2],0);
        puVar7[5] = (int)*psVar8;
        puVar7[6] = (int)psVar8[1];
        cVar1 = (char)psVar8[7];
        if (cVar1 == '\0') {
          puVar7[8] = *(uint *)(&DAT_007d59e0 +
                               ((uint)*(byte *)((int)this + 0x249) +
                               (*(int *)(psVar8 + 5) + -0xdd) * 3) * 4);
        }
        else if (cVar1 == '\x01') {
          uVar6 = FUN_0072e6c0();
          puVar7[8] = (((int)uVar6 % 0x1a + 0x32) *
                      *(int *)(&DAT_007d59e0 +
                              ((uint)*(byte *)((int)this + 0x249) +
                              (*(int *)(psVar8 + 5) + -0xdd) * 3) * 4)) / 100;
        }
        else if (cVar1 == '\x02') {
          uVar6 = FUN_0072e6c0();
          puVar7[8] = (((int)uVar6 % 0x15 + 0x1e) *
                      *(int *)(&DAT_007d59e0 +
                              ((uint)*(byte *)((int)this + 0x249) +
                              (*(int *)(psVar8 + 5) + -0xdd) * 3) * 4)) / 100;
        }
        else {
          uVar6 = FUN_0072e6c0();
          puVar7[8] = (((int)uVar6 % 0x18 + 0xf) *
                      *(int *)(&DAT_007d59e0 +
                              ((uint)*(byte *)((int)this + 0x249) +
                              (*(int *)(psVar8 + 5) + -0xdd) * 3) * 4)) / 0x5a;
        }
        thunk_FUN_006a09f0(this,(byte *)puVar7,uStack_10);
      }
      uStack_8 = uStack_8 + 1;
    } while ((int)uStack_8 < iVar2);
  }
  return;
}

