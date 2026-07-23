
/* [STSwitchEnumApplier] Switch target param_5 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004248D0_param_5Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3

   [STSwitchEnumApplier] Switch target param_6 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004248D0_param_6Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3

   [STSwitchEnumApplier] Switch target param_5 uses
   /SubmarineTitans/Recovered/Enums/SubmarineTitans_Recovered_HiddenThis_AnonReceiver_004248D0_sub_004248D0_param_5Enum.
   Cases: CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3

   [STSwitchEnumApplier] Switch target param_6 uses
   /SubmarineTitans/Recovered/Enums/SubmarineTitans_Recovered_HiddenThis_AnonReceiver_004248D0_sub_004248D0_param_6Enum.
   Cases: CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

int __thiscall
sub_004248D0(void *this,int param_1,int param_2,int param_3,int param_4,
            Global_sub_004248D0_param_5Enum param_5,Global_sub_004248D0_param_6Enum param_6)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  uint uVar9;
  int iVar10;

  sVar8 = (short)param_3;
  sVar4 = sVar8;
  if ((param_5 & CASE_2) != CASE_0) {
    sVar4 = sVar8 + 1;
  }
  *(short *)(param_1 + param_2 * 8) = *(short *)((int)this + 0x374) + sVar4;
  iVar6 = param_4 + 1;
  if ((param_5 & CASE_1) == CASE_0) {
    iVar6 = param_4;
  }
  *(short *)(param_1 + 2 + param_2 * 8) = (short)iVar6 + *(short *)((int)this + 0x378);
  *(short *)(param_1 + 6 + param_2 * 8) = (short)param_5;
  iVar6 = *(int *)((int)this + 0x37c);
  iVar10 = iVar6 * param_4 + param_3;
  iVar3 = *(int *)((int)this + 0x390);
  uVar9 = (uint)*(byte *)(iVar3 + iVar10);
  switch(param_5) {
  case CASE_0:
    if (0 < param_4) {
      pbVar1 = (byte *)((iVar3 - iVar6) + iVar10);
      uVar5 = (uint)*pbVar1;
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
      if (param_3 < 1) break;
      uVar5 = (uint)pbVar1[-1];
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
    }
    if (0 < param_3) {
      bVar2 = *(byte *)(iVar3 + -1 + iVar10);
LAB_00424a62:
      uVar5 = (uint)bVar2;
      if (uVar9 < uVar5) {
        iVar6 = uVar5 - uVar9;
        goto joined_r0x00424ada;
      }
    }
    break;
  case CASE_1:
    if (param_4 < *(int *)((int)this + 0x370) + -1) {
      pbVar1 = (byte *)(*(int *)((int)this + 0x390) + iVar6 + iVar10);
      uVar5 = (uint)*pbVar1;
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
      if (param_3 < 1) break;
      uVar5 = (uint)pbVar1[-1];
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
    }
    if (0 < param_3) {
      bVar2 = *(byte *)(*(int *)((int)this + 0x390) + -1 + iVar10);
      goto LAB_00424a62;
    }
    break;
  case CASE_2:
    if (0 < param_4) {
      pbVar1 = (byte *)((iVar3 - iVar6) + iVar10);
      uVar5 = (uint)*pbVar1;
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
      if (((param_3 < *(int *)((int)this + 0x370) + -1) && (uVar5 = (uint)pbVar1[1], uVar9 < uVar5))
         && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
    }
    if (param_3 < *(int *)((int)this + 0x370) + -1) {
      bVar2 = *(byte *)(iVar3 + 1 + iVar10);
      goto LAB_00424a62;
    }
    break;
  case CASE_3:
    iVar3 = *(int *)((int)this + 0x370) + -1;
    if (param_4 < iVar3) {
      pbVar1 = (byte *)(*(int *)((int)this + 0x390) + iVar6 + iVar10);
      uVar5 = (uint)*pbVar1;
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
      if (iVar3 <= param_3) break;
      uVar5 = (uint)pbVar1[1];
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
    }
    if ((param_3 < iVar3) &&
       (uVar5 = (uint)*(byte *)(*(int *)((int)this + 0x390) + 1 + iVar10), uVar9 < uVar5)) {
      iVar6 = uVar5 - uVar9;
joined_r0x00424ada:
      if (iVar6 < 0xb) {
        uVar9 = uVar5;
      }
    }
  }
  *(short *)(param_1 + 4 + param_2 * 8) = (short)uVar9;
  iVar6 = param_2 + 1;
  if ((int)param_6 < 0) {
    return iVar6;
  }
  if ((param_6 & CASE_2) != CASE_0) {
    sVar8 = sVar8 + 1;
  }
  *(short *)(param_1 + iVar6 * 8) = *(short *)((int)this + 0x374) + sVar8;
  sVar8 = (short)param_4;
  if ((param_6 & CASE_1) != CASE_0) {
    sVar8 = sVar8 + 1;
  }
  *(short *)(param_1 + 2 + iVar6 * 8) = sVar8 + *(short *)((int)this + 0x378);
  *(short *)(param_1 + 6 + iVar6 * 8) = (short)param_6;
  iVar3 = *(int *)((int)this + 0x390);
  uVar9 = (uint)*(byte *)(iVar3 + iVar10);
  switch(param_6) {
  case CASE_0:
    if (0 < param_4) {
      pbVar1 = (byte *)((iVar3 - *(int *)((int)this + 0x37c)) + iVar10);
      uVar5 = (uint)*pbVar1;
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
      if (param_3 < 1) goto switchD_00424b43_default;
      uVar5 = (uint)pbVar1[-1];
      if (uVar9 < uVar5) {
        iVar7 = uVar5 - uVar9;
joined_r0x00424bef:
        if (iVar7 < 0xb) {
          uVar9 = uVar5;
        }
      }
    }
    break;
  case CASE_1:
    if (param_4 < *(int *)((int)this + 0x370) + -1) {
      pbVar1 = (byte *)(iVar3 + *(int *)((int)this + 0x37c) + iVar10);
      uVar5 = (uint)*pbVar1;
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
      if (param_3 < 1) goto switchD_00424b43_default;
      uVar5 = (uint)pbVar1[-1];
      if (uVar9 < uVar5) {
        iVar7 = uVar5 - uVar9;
        goto joined_r0x00424bef;
      }
    }
    break;
  case CASE_2:
    if (0 < param_4) {
      iVar7 = iVar3 - *(int *)((int)this + 0x37c);
      uVar5 = (uint)*(byte *)(iVar7 + iVar10);
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
      if (((param_3 < *(int *)((int)this + 0x370) + -1) &&
          (uVar5 = (uint)*(byte *)(iVar7 + iVar10 + 1), uVar9 < uVar5)) &&
         ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
    }
    if (*(int *)((int)this + 0x370) + -1 <= param_3) goto switchD_00424b43_default;
    bVar2 = *(byte *)(iVar3 + 1 + iVar10);
    goto LAB_00424c56;
  case CASE_3:
    iVar7 = *(int *)((int)this + 0x370) + -1;
    if (param_4 < iVar7) {
      pbVar1 = (byte *)(iVar3 + *(int *)((int)this + 0x37c) + iVar10);
      uVar5 = (uint)*pbVar1;
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
      if (iVar7 <= param_3) goto switchD_00424b43_default;
      uVar5 = (uint)pbVar1[1];
      if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
        uVar9 = uVar5;
      }
    }
    if (((iVar7 <= param_3) || (uVar5 = (uint)*(byte *)(iVar3 + 1 + iVar10), uVar5 <= uVar9)) ||
       (10 < (int)(uVar5 - uVar9))) goto switchD_00424b43_default;
    goto LAB_00424cca;
  default:
    goto switchD_00424b43_default;
  }
  if (0 < param_3) {
    bVar2 = *(byte *)(iVar3 + -1 + iVar10);
LAB_00424c56:
    uVar5 = (uint)bVar2;
    if ((uVar9 < uVar5) && ((int)(uVar5 - uVar9) < 0xb)) {
LAB_00424cca:
      uVar9 = uVar5;
    }
  }
switchD_00424b43_default:
  *(short *)(param_1 + 4 + iVar6 * 8) = (short)uVar9;
  return param_2 + 2;
}

