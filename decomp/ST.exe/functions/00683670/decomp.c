
int FUN_00683670(void)

{
  AllocationRecord_0065CD10 *pAVar1;

  if ((g_allocationRecord_0065CD10_008489BC == nullptr) ||
     (pAVar1 = g_allocationRecord_0065CD10_008489BC, DAT_008489c0 == 0)) {
    if ((g_allocationRecord_0067D3B0_008489B8 != nullptr) &&
       (DAT_008489c0 != 0)) {
      return *(int *)&g_allocationRecord_0067D3B0_008489B8->field_0x106;
    }
    if ((g_allocationRecord_00648620_008489B4 != nullptr) &&
       (DAT_008489c0 != 0)) {
      return *(int *)&g_allocationRecord_00648620_008489B4->field_0x4e;
    }
    pAVar1 = nullptr;
  }
  return (int)pAVar1;
}

