
void __fastcall FUN_00664760(AiFltClassTy *param_1)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  short local_10;
  short local_e [5];
  
  uVar4 = 0;
  iVar3 = param_1->field_022F;
  param_1->field_009B = 0;
  param_1->field_009F = 0;
  param_1->field_00A3 = 0;
  param_1->field_00A7 = 0;
  bVar5 = *(int *)(iVar3 + 0xc) != 0;
  if (0 < *(int *)(iVar3 + 0xc)) {
    do {
      if (bVar5) {
        psVar2 = (short *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c));
      }
      else {
        psVar2 = (short *)0x0;
      }
      thunk_FUN_006756d0(psVar2,psVar2 + 1,psVar2 + 3,psVar2 + 4);
      iVar3 = param_1->field_022F;
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < *(uint *)(iVar3 + 0xc);
    } while ((int)uVar4 < (int)*(uint *)(iVar3 + 0xc));
  }
  iVar3 = param_1->field_0223;
  uVar4 = 0;
  if (0 < *(int *)(iVar3 + 0xc)) {
    bVar5 = *(int *)(iVar3 + 0xc) != 0;
    do {
      if (bVar5) {
        psVar2 = (short *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c));
      }
      else {
        psVar2 = (short *)0x0;
      }
      psVar1 = psVar2 + 1;
      thunk_FUN_00675950(CONCAT22((short)((uint)psVar2 >> 0x10),*psVar2),
                         CONCAT22((short)((uint)psVar1 >> 0x10),*psVar1),psVar2[2],psVar2,psVar1,
                         psVar2 + 2,0);
      iVar3 = param_1->field_0223;
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < *(uint *)(iVar3 + 0xc);
    } while ((int)uVar4 < (int)*(uint *)(iVar3 + 0xc));
  }
  if (((param_1->field_0163 == '\x01') && (*(int *)(param_1->field_022F + 0xc) == 0)) &&
     (iVar3 = param_1->field_0284, iVar3 != 0)) {
    local_10 = *(short *)(iVar3 + 0x82) + -4;
    local_e[0] = *(short *)(iVar3 + 0x84) + -4;
    local_e[2] = 9;
    local_e[3] = 9;
    local_e[1] = 0;
    local_e[4] = 5;
    thunk_FUN_006756d0(&local_10,local_e,local_e + 2,local_e + 3);
    AiFltClassTy::AppendZone(param_1,&local_10);
  }
  if ((param_1->field_0122 == '\x01') && (*(int *)(param_1->field_0223 + 0xc) == 0)) {
    iVar3 = param_1->field_022F;
    uVar4 = 0;
    if (0 < *(int *)(iVar3 + 0xc)) {
      bVar5 = *(int *)(iVar3 + 0xc) != 0;
      do {
        if (bVar5) {
          psVar2 = (short *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c));
        }
        else {
          psVar2 = (short *)0x0;
        }
        AiFltClassTy::AppendPoint(param_1,psVar2,5);
        iVar3 = param_1->field_022F;
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < *(uint *)(iVar3 + 0xc);
      } while ((int)uVar4 < (int)*(uint *)(iVar3 + 0xc));
    }
  }
  return;
}

