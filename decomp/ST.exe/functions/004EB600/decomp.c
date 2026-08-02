
void __thiscall FUN_004eb600(void *this,short *param_1)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;

  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if ((*(int *)((int)this + 0x5ac) == 0x52) || (*(int *)((int)this + 0x5ac) == 0x5f)) {
    iVar1 = 0;
    psVar3 = param_1;
    do {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (short *)0x2;
      iVar2 = iVar1;
      psVar4 = psVar3;
      do {
        iVar1 = *(int *)((int)&g_packedRecords_A62x8[*(int *)((int)this + 0x24)].field2305_0x9a2 +
                        iVar2);
        if (iVar1 == *(int *)(&g_packedRecords_A62x8[*(int *)((int)this + 0x24)].field_0x9a6 + iVar2
                             )) {
          *psVar4 = 0;
        }
        else {
          *psVar4 = (iVar1 <= *(int *)(&g_packedRecords_A62x8[*(int *)((int)this + 0x24)].
                                        field_0x9a6 + iVar2)) + 1;
        }
        iVar1 = iVar2 + 8;
        psVar3 = psVar4 + 2;
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        psVar4[1] = *(short *)(iVar2 + 0x7f57c2 + *(int *)((int)this + 0x24) * 0xa62);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (short *)((int)param_1 + -1);
        iVar2 = iVar1;
        psVar4 = psVar3;
      } while (param_1 != (short *)0x0);
    } while (iVar1 < 0x20);
  }
  return;
}

