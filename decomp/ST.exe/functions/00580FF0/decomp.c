
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005804F0 -> 00580FF0 @ 0058053D; FUN_005804f0 parameter param_2 */

void FUN_00580ff0(ushort param_1,word param_2)

{
  int iVar1;
  STMessage *pSVar2;
  STMessage local_24;

  if (g_aiBossClass_008117BC != nullptr) {
    pSVar2 = &local_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar2->unknown_00 = 0;
      pSVar2 = (STMessage *)&pSVar2->unknown_04;
    }
    local_24.arg1.words.high = param_2;
    local_24.arg1.words.low = param_1;
    local_24.id = 0x5de1;
    /* ST_CALLSITE[00581032]: CALL dword ptr [EAX] */
    g_aiBossClass_008117BC->GetMessage(&local_24);
  }
  return;
}

