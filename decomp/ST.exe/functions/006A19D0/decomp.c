#include "../../pseudocode_runtime.h"


undefined4 __cdecl
FUN_006a19d0(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6,
            undefined *param_7,undefined4 param_8)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  ushort uVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar6;
  uint uVar7;
  byte bVar8;
  RecoveredRecord_006A1370_30F34641 local_14;
  uint local_c;
  ushort local_8;


  thunk_FUN_006a1370(param_1,param_2,param_3,param_4,&local_14);
  uVar5 = thunk_FUN_006a0ef0(param_1,param_2,param_3,param_4,param_5,param_6);
  if (uVar5 == 0xffff) {
    return 0;
  }
  if (uVar5 != 0) {
    bVar4 = thunk_FUN_006a1100(param_1,param_2,param_3,param_4,param_5,param_6);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (CONCAT31(extraout_var,bVar4) == 0) {

      iVar6 = thunk_FUN_006a1070(uVar5);
      uVar5 = (ushort)iVar6;
      if (0x7fff < uVar5) {
        return 0;
      }
      uVar1 = *(undefined4 *)param_6;
      local_8 = param_6[2];
      bVar8 = (byte)iVar6;
      if (param_5 == 0xff) {
        local_8 = local_8 ^ ((byte)local_8 ^ bVar8) & 0xf;
        local_c = uVar1;

        uVar7 = Library::MSVCRT::FUN_0072e6c0();
        local_8 = local_8 ^ (byte)(((char)((int)uVar7 %
                                          (int)*(short *)(&DAT_007df9a8 + (short)uVar5 * 2)) +
                                   '\x01') * '\x10' ^ (byte)local_8) & 0xf0;
      }
      else {
        STPiece<0,2>(local_c) = (ushort)uVar1;
        uVar2 = (ushort)local_c;
        STPiece<2,2>(local_c) = (ushort)((uint)uVar1 >> 0x10);
        uVar3 = STPiece<2,2>(local_c);
        if (param_5 == 1) {
          STPiece<2,1>(local_c) = (byte)((uint)uVar1 >> 0x10);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = CONCAT22(uVar3 ^ (STPiece<2,1>(local_c) ^ bVar8) & 0xf,(ushort)local_c);

          uVar7 = Library::MSVCRT::FUN_0072e6c0();
          bVar8 = ((char)((int)uVar7 % (int)*(short *)(&DAT_007df9c8 + (short)uVar5 * 2)) + '\x01')
                  * '\x10' ^ STPiece<2,1>(local_c);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = CONCAT22(STPiece<2,2>(local_c) ^ bVar8 & 0xf0,(ushort)local_c);
        }
        else {
          STPiece<0,1>(local_c) = (byte)uVar1;
          local_c = STReplaceLowWord((uint32_t)(local_c), (uint16_t)(uVar2 ^ ((byte)local_c ^ bVar8) & 0xf));

          uVar7 = Library::MSVCRT::FUN_0072e6c0();
          bVar8 = ((char)((int)uVar7 % (int)*(short *)(&DAT_007df9c8 + (short)uVar5 * 2)) + '\x01')
                  * '\x10' ^ (byte)local_c;
          local_c = STReplaceLowWord((uint32_t)(local_c), (uint16_t)((ushort)local_c ^ bVar8 & 0xf0));
        }
      }
      thunk_FUN_006a1620(param_1,param_2,param_3,param_4,param_5,(ushort *)&local_c,param_7,param_8);
    }
  }
  return 1;
}

