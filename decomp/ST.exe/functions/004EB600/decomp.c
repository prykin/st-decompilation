
void __thiscall FUN_004eb600(void *this,short *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;

  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if ((*(int *)((int)this + 0x5ac) == 0x52) || (*(int *)((int)this + 0x5ac) == 0x5f)) {
    iVar2 = 0;
    psVar4 = param_1;
    do {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (short *)0x2;
      iVar3 = iVar2;
      psVar5 = psVar4;
      do {
        iVar2 = *(int *)((int)&g_packedRecords_A62x8[*(int *)((int)this + 0x24)].field1952_0x9a2 +
                        iVar3);
        iVar1 = *(int *)((int)&g_packedRecords_A62x8[*(int *)((int)this + 0x24)].field1953_0x9a6 +
                        iVar3);
        if (iVar2 == iVar1) {
          *psVar5 = 0;
        }
        else {
          *psVar5 = (iVar2 <= iVar1) + 1;
        }
        iVar2 = iVar3 + 8;
        psVar4 = psVar5 + 2;
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        psVar5[1] = *(short *)(iVar3 + 0x7f57c2 + *(int *)((int)this + 0x24) * 0xa62);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (short *)((int)param_1 + -1);
        iVar3 = iVar2;
        psVar5 = psVar4;
      } while (param_1 != nullptr);
    } while (iVar2 < 0x20);
  }
  return;
}

