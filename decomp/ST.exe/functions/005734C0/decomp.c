#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 005734C0 -> EXTERNAL:000000C4 @ 00573652

   [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 005734C0 -> EXTERNAL:000000C5 @ 00573628

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall FUN_005734c0(void *this,LPDWORD lpcbData,PHKEY phkResult)

{
  char cVar1;
  uint uVar2;
  LSTATUS LVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar8;
  void *local_8;

  local_8 = this;
  if (((uint)phkResult & 1) != 0) {
    _DAT_008072f8 = 0;
    memset(&DAT_008072f8, 0, 0x82); /* compiler bulk-zero initialization */
    iVar4 = 0;
    _DAT_008072fc = 0x82;
    uVar2 = 0;
    do {
      _DAT_008072f8 = _DAT_008072f8 + (uint)(byte)(&DAT_008072f8)[uVar2];
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x82);
    STPiece<1,1>(DAT_00807300) = STPiece<1,1>(DAT_00807300) | 0xf;
    DAT_0080731a = 1;
    DAT_0080731e = 1;
    DAT_00807322 = 1;
    DAT_00807326 = 1;
    DAT_00807328 = 1;
    DAT_0080732c = 1;
    DAT_00807327 = 7;
    STPiece<0,1>(DAT_00807300) = 8;
    _DAT_00807330 = 3;
    DAT_00807332 = 1;
    _DAT_00807336 = 1;
    DAT_0080734c = 1;
    DAT_0080733a = 0;
    DAT_0080733b = 2;
    DAT_0080733c = 0;
    DAT_00807340 = 0;
    DAT_00807361 = 1;
    DAT_00807341 = 1;
    DAT_00807342 = 1;
    DAT_00807346 = 10;
    DAT_00807347 = 1;
    DAT_00807348 = 0;
    DAT_00807349 = 0;
    DAT_0080734d = 1;
    DAT_0080734e = 0;
    DAT_00807352 = 0;
    DAT_00807356 = 0;
    DAT_0080735a = 0;
    DAT_0080735e = 0;
    DAT_00807363 = 2;
    DAT_00807364 = 1;
    thunk_FUN_005739a0(this);
  }
  if (((uint)phkResult & 2) != 0) {
    memset(&DAT_008071f8, 0, 0x100); /* compiler bulk-zero initialization */
  }
  if (lpcbData == (LPDWORD)0x0) goto LAB_005737e5;
  LVar3 = RegOpenKeyA((HKEY)0x80000001,"SOFTWARE\\Microsoft\\Windows\\CurrentVersion",(PHKEY)&phkResult
                     );
  if (LVar3 == 0) {
    lpcbData = (LPDWORD)0x40;
    LVar3 = RegQueryValueExA((HKEY)phkResult,"RegisteredOwner",(LPDWORD)0x0,
                             (LPDWORD)&local_8,(LPBYTE)((int)this + 0x785),(LPDWORD)&lpcbData);
    RegCloseKey((HKEY)phkResult);
    if (LVar3 != 0) goto LAB_0057366c;
  }
  else {
LAB_0057366c:
    uVar2 = 0xffffffff;
    pcVar6 = &DAT_008016a0;
    do {
      pcVar8 = pcVar6;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar6 = pcVar8 + -uVar2;
    pcVar8 = (char *)((int)this + 0x785);
    memmove(pcVar8, pcVar6, uVar2); /* compiler REP MOVS byte copy */
    uVar5 = 0;
  }
  uVar2 = 0xffffffff;
  pcVar6 = &DAT_007ca694;
  do {
    pcVar8 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar8 + -uVar2;
  pcVar8 = (char *)((int)this + 0x640);
  memmove(pcVar8, pcVar6, uVar2); /* compiler REP MOVS byte copy */
  uVar5 = 0;
  uVar2 = 0xffffffff;
  STField<undefined4>(this,0x779) = 0xdeb00008;
  STField<undefined4>(this,0x77d) = 0;
  pcVar6 = &DAT_007ca684;
  do {
    pcVar8 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar8 + -uVar2;
  pcVar8 = (char *)((int)this + 0x749);
  memmove(pcVar8, pcVar6, uVar2); /* compiler REP MOVS byte copy */
  uVar5 = 0;
  uVar2 = 0xffffffff;
  pcVar6 = &DAT_008016a0;
  do {
    pcVar8 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar8 + -uVar2;
  pcVar8 = (char *)((int)this + 0x28);
  memmove(pcVar8, pcVar6, uVar2); /* compiler REP MOVS byte copy */
  uVar5 = 0;
  uVar2 = 0xffffffff;
  pcVar6 = &DAT_008016a0;
  do {
    pcVar8 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar8 + -uVar2;
  pcVar8 = (char *)((int)this + 300);
  memmove(pcVar8, pcVar6, uVar2); /* compiler REP MOVS byte copy */
  uVar5 = 0;
  uVar2 = 0xffffffff;
  pcVar6 = &DAT_008016a0;
  do {
    pcVar8 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar8 + -uVar2;
  pcVar8 = (char *)((int)this + 0x438);
  memmove(pcVar8, pcVar6, uVar2); /* compiler REP MOVS byte copy */
  uVar5 = 0;
  uVar2 = 0xffffffff;
  pcVar6 = &DAT_008016a0;
  do {
    pcVar8 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar8 + -uVar2;
  pcVar8 = (char *)((int)this + 0x230);
  memmove(pcVar8, pcVar6, uVar2); /* compiler REP MOVS byte copy */
  uVar5 = 0;
  uVar2 = 0xffffffff;
  pcVar6 = &DAT_008016a0;
  do {
    pcVar8 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar8 + -uVar2;
  pcVar8 = (char *)((int)this + 0x334);
  memmove(pcVar8, pcVar6, uVar2); /* compiler REP MOVS byte copy */
  uVar2 = 0xffffffff;
  pcVar6 = &DAT_008016a0;
  do {
    pcVar8 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar8 + -uVar2;
  pcVar8 = (char *)((int)this + 0x645);
  memmove(pcVar8, pcVar6, uVar2); /* compiler REP MOVS byte copy */
LAB_005737e5:
  SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00573260::thunk_FUN_00573260(this);
  return;
}

