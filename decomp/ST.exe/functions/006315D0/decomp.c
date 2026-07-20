
void __thiscall FUN_006315d0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  void *this_00;
  int iVar2;
  short *psVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  undefined4 local_1c;
  undefined4 local_10;
  void *local_c;
  AnonShape_006315D0_2C2F0A18 *local_8;
  
  local_8 = *(AnonShape_006315D0_2C2F0A18 **)((int)this + 0x38);
  if ((local_8 != (AnonShape_006315D0_2C2F0A18 *)0x0) &&
     (iVar7 = *(int *)((int)this + 0x34), iVar7 != 0)) {
    iVar2 = (SHORT_007fb240 * param_3 + param_2) * (int)SHORT_007fb242 + param_1;
    if (param_4 == 1) {
      if (*(char *)(iVar7 + iVar2) != '\0') {
        return;
      }
    }
    else {
      if (param_4 != 4) {
        return;
      }
      iVar8 = SHORT_007fb242 + iVar2;
      if ((((*(char *)(iVar7 + iVar2) == '\0') && (*(char *)(iVar7 + 1 + iVar2) == '\0')) &&
          (*(char *)(iVar7 + iVar8) == '\0')) && (*(char *)(iVar7 + 1 + iVar8) == '\0')) {
        return;
      }
    }
    uVar6 = local_8->field_000C;
    uVar9 = 0;
    if (0 < (int)uVar6) {
      bVar11 = uVar6 != 0;
      do {
        if (bVar11) {
          psVar3 = (short *)(local_8->field_0008 * uVar9 + local_8->field_001C);
        }
        else {
          psVar3 = (short *)0x0;
        }
        iVar7 = (int)*psVar3;
        if (psVar3[3] == 1) {
          if ((iVar7 == param_1) && (psVar3[1] == param_2)) {
            sVar1 = psVar3[2];
joined_r0x006316fc:
            if (sVar1 == param_3) {
LAB_00631713:
              if ((int)uVar9 < 0) {
                return;
              }
              if (uVar9 < uVar6) {
                puVar4 = (undefined4 *)(local_8->field_0008 * uVar9 + local_8->field_001C);
              }
              else {
                puVar4 = (undefined4 *)0x0;
              }
              puVar10 = puVar4;
              psVar3 = &local_24;
              local_c = this;
              for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
                *(undefined4 *)psVar3 = *puVar10;
                puVar10 = puVar10 + 1;
                psVar3 = psVar3 + 2;
              }
              FUN_006e91d0(PTR_00807598,(int *)puVar4[4]);
              this_00 = local_c;
              iVar7 = thunk_FUN_00630ac0(local_c,uVar9);
              if (iVar7 == 0) {
                return;
              }
              thunk_FUN_00630bb0(this_00,local_24,local_22,local_20,local_1c,(int)local_1e,local_10)
              ;
              *(undefined4 *)((int)this_00 + 0x44) = 1;
              if ((*(int *)((int)this_00 + 0x48) == 0) ||
                 (puVar5 = thunk_FUN_00630c50(*(undefined4 *)((int)this_00 + 0x40),
                                              *(int *)((int)this_00 + 0x4c),1,1,0),
                 puVar5 != (ushort *)0x0)) {
                *(undefined4 *)((int)this_00 + 0x44) = 2;
              }
              uVar6 = thunk_FUN_00631880(this_00,(undefined4 *)((int)this_00 + 0x40),
                                         *(undefined4 *)((int)this_00 + 0x61));
              if (((uVar6 == 0) && (*(int *)((int)this_00 + 0x48) != 0)) &&
                 (*(uint *)((int)this_00 + 0x61) != 0)) {
                FUN_006e8ba0(PTR_00807598,*(uint *)((int)this_00 + 0x61));
              }
              *(undefined4 *)((int)this_00 + 0x61) = 0xffffffff;
              return;
            }
          }
        }
        else {
          if (((((iVar7 == param_1) && (psVar3[1] == param_2)) && (psVar3[2] == param_3)) ||
              (((iVar7 + 1 == param_1 && (psVar3[1] == param_2)) && (psVar3[2] == param_3)))) ||
             (((iVar7 == param_1 && (psVar3[1] + 1 == param_2)) && (psVar3[2] == param_3))))
          goto LAB_00631713;
          if ((iVar7 + 1 == param_1) && (psVar3[1] + 1 == param_2)) {
            sVar1 = psVar3[2];
            goto joined_r0x006316fc;
          }
        }
        uVar9 = uVar9 + 1;
        bVar11 = uVar9 < uVar6;
        if ((int)uVar6 <= (int)uVar9) {
          return;
        }
      } while( true );
    }
  }
  return;
}

