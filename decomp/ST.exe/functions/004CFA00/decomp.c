
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004CFA00_param_1Enum. Cases:
   CASE_8=8;CASE_9=9;CASE_D=13;CASE_E=14 */

void __thiscall
FUN_004cfa00(void *this,Global_sub_004CFA00_param_1Enum param_1,int param_2,int *param_3,
            int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;

  iVar2 = GetPlayerRaceId(*(char *)((int)this + 0x23d));
  iVar3 = (-(uint)((char)iVar2 != '\x01') & 0xfffffffd) + 0x13;
  uVar4 = GetPlayerRaceId(*(char *)((int)this + 0x23d));
  iVar2 = *(int *)((int)this + 0x245);
  iVar5 = (uVar4 & 0xff) - 1;
  switch(param_1) {
  case CASE_8:
  case CASE_9:
    iVar1 = *(int *)((int)this + 0x4d0);
    break;
  default:
    goto switchD_004cfa5c_caseD_a;
  case CASE_D:
  case CASE_E:
    iVar1 = *(int *)((int)this + 0x4d0);
  }
  if (iVar1 == 3) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = *(int *)((&PTR_DAT_007b5170)[iVar2] +
                    (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
    *param_3 = iVar2;
    *param_4 = iVar2 + iVar3;
    return;
  }
  if (iVar1 == 4) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = *(int *)((&PTR_DAT_007b5170)[iVar2] +
                    (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
    *param_3 = iVar2 + iVar3;
    *param_4 = iVar2 + iVar3;
    return;
  }
  if (iVar1 == 5) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = *(int *)((&PTR_DAT_007b5170)[iVar2] +
                    (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
    *param_4 = iVar2;
    *param_3 = iVar2 + iVar3;
    return;
  }
  *param_3 = *(int *)((&PTR_DAT_007b5170)[iVar2] +
                     (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
  *param_4 = *(int *)((&PTR_DAT_007b5170)[iVar2] +
                     (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
switchD_004cfa5c_caseD_a:
  return;
}

