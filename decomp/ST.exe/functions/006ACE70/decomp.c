#include "../../pseudocode_runtime.h"


/* WARNING: Unknown calling convention */
/* [STAbiConsistencyApplier] eax_edx_word_pair target=function:-1: prototype=int FUN_006ace70(uint
   lowWord, uint highWord) previous_return_type=/undefined Evidence: incoming EAX and EDX are both
   consumed before definition while ECX is overwritten before semantic use; every RET is plain; at
   least two complete caller CFGs consume or forward full EAX; recover exact custom EAX:EDX
   word-pair input; caller_uses=2; ret_sites=006ACED7 RET */

int FUN_006ace70(uint lowWord,uint highWord)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;

  iVar3 = 0x20;
  uVar4 = highWord;
  if (highWord == 0) {
    iVar3 = 0;
    uVar4 = lowWord;
  }
  if ((uVar4 & 0xffff0000) == 0) {
    uVar1 = 0xf;
    uVar5 = (ushort)uVar4;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar1 == 0; uVar1 = uVar1 - 1) {
      }
    }
    uVar6 = (uint)uVar1;
    if (uVar5 == 0) {
      return lowWord;
    }
  }
  else {
    uVar6 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
  }
  uVar4 = iVar3 + uVar6 + 1;
  if ((byte)uVar4 < 0x3f) {
    bVar2 = (byte)(uVar4 >> 1) & 0x1f;
    uVar4 = lowWord >> bVar2 | highWord << 0x20 - bVar2;
    do {
      uVar6 = uVar4;
      if (uVar4 < highWord) {
        uVar6 = (highWord >> 1) + highWord;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar4 = (uint)(CONCAT44(highWord,lowWord) / (ulonglong)uVar6);
      uVar7 = uVar6 + uVar4;
      uVar4 = uVar7 >> 1 | (uint)CARRY4(uVar6,uVar4) << 0x1f;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if ((int)(CONCAT44(highWord,lowWord) % (ulonglong)uVar6) != 0) {
        uVar4 = uVar4 + ((uVar7 & 1) != 0);
      }
    } while (uVar4 != uVar6);
  }
  else {
    uVar4 = 0x7fffffff;
  }
  return uVar4;
}

